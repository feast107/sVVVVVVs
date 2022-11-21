using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Threading.Tasks;
using Google.Protobuf;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;
using sVVVVVVs.Proto.Model;
using sVVVVVVs.Proto.Proto;
using sVVVVVVs.Server.Model;

namespace sVVVVVVs.Server.Service
{
    public class ProtoMessageService<TUser> : IMessageService<TUser> where TUser : User,ISendMessage
    {
        private readonly IRoomService roomService; 
        public ProtoMessageService(IRoomService roomService)
        {
            this.roomService = roomService;
        }
        public Task Deal(TUser from, byte[] message)
        {
            return Task.Run(async() =>
            {
                switch (Analyze(message))
                {
                    case MessageType.Join:
                        Join join = Deserialize(Join.Parser, message);
                        if (join == null) { return; }
                        try
                        {
                            if (string.IsNullOrEmpty(join.Id))
                            {
                                join.Id = string.Empty;
                                return;
                            }
                            var room = roomService.GetRoom(join.Id);
                            if (room == null || room.Password != join.Password)
                            {
                                join.Id = string.Empty;
                                return;
                            }
                            await roomService.Join(from, room);
                        }
                        finally
                        {
                            await SendTo(from, MessageType.Join, join.ToByteArray());
                        }
                        break;
                    case MessageType.World:
                        World world = Deserialize(World.Parser, message);
                        if (world == null) { return; }
                        try
                        {
                            if (!from.IsHost)
                            {
                                Room room = new ProtoRoom(from, world);
                                await roomService.Create(from, room);
                            }
                        }
                        finally
                        {
                            await SendTo(from, MessageType.World, world.ToByteArray());
                        }
                        break;
                }
            });
        }
        private Task SendTo(TUser to, MessageType type, byte[] content)
        {
            return SendTo(to,
                (byte[])(
                    (byte[])new ByteConverter().ConvertTo((int)type, typeof(byte[]))!
                    ).Concat(content));
        }
        private MessageType Analyze(byte[] message)
        {
            return (MessageType)new ByteConverter().ConvertTo(message[0], typeof(int))!;
        }
        private T Deserialize<T>(MessageParser<T> parser, byte[] message) where T : IMessage<T>
        {
            return parser.ParseFrom(message, sizeof(int), message.Length - sizeof(int));
        }
        private Task SendTo(TUser to, byte[] message)
        {
            return Task.Run(() => to.Send(message));
        }
    }

    public class EasyProtoMessageService<TUser> : IMessageService<TUser> where TUser : User, ISendMessage
    {
        private readonly IRoomService roomService;
        public EasyProtoMessageService(IRoomService roomService)
        {
            this.roomService = roomService;
        }
        public Task Deal(TUser from, byte[] message)
        {
            return Task.Run(async () =>
            {
                PayLoad payload = ProtoBuf.Serializer.Deserialize<PayLoad>(new ReadOnlyMemory<byte>(message));
                switch (payload.Type)
                {
                    case PayLoad.MessageType.World:
                    {
                        var world = payload.World;
                        if (world == null)
                        {
                            return;
                        }
                        if (!from.IsHost)
                        {
                            Room room = new NewProtoRoom(from, world); 
                            room = await roomService.Create(from, room);
                            payload.World = ((NewProtoRoom)room).World;
                        }
                        await SendTo(from, Serialize(payload));
                        break;
                    }
                    case PayLoad.MessageType.Join:
                    {
                        var join = payload.Join;
                        if (join == null) { return; }

                        if (new Func<bool>(
                                () =>
                                {
                                    if (string.IsNullOrEmpty(join.Id))
                                    {
                                        join.Id = string.Empty;
                                        return false;
                                    }

                                    var room = roomService.GetRoom(join.Id);
                                    if (room == null ||
                                        room.PlayerCount >= room.MaximumPlayer ||
                                        room.Password != join.Password)
                                    {
                                        join.Id = string.Empty;
                                        return false;
                                    }
                                    roomService.Join(from, room).Wait();
                                    SendTo((TUser)room.Host, Serialize(payload)).Wait();
                                    return true;
                                }).Invoke() == false)
                        {
                            await SendTo(from, Serialize(payload));
                        }
                        break;
                    }
                    case PayLoad.MessageType.WorldList:
                    {
                        payload.WorldList = new ()
                        {
                            Worlds = roomService.Rooms
                                .ToDictionary(k => k.Key, 
                                    v => v.Value.Name)
                        };
                        await SendTo(from, Serialize(payload));
                        break;
                    }
                    case PayLoad.MessageType.SyncStatus:
                    {
                        var sync = payload.SyncStatus;
                        if(sync == null || string.IsNullOrEmpty(sync.Id)) { return; }
                        roomService.GetRoom(sync.Id).PlayerCount = sync.PlayerCount;
                        break;
                    }
                    default: return;
                }
            });
        }

        private byte[] Serialize<T>(T instance)
        { 
            using var ret = new MemoryStream();
            ProtoBuf.Serializer.Serialize(ret, instance);
            return ret.ToArray();
        }

        private Task SendTo(TUser to, byte[] message)
        {
            return Task.Run(() => to.Send(message));
        }
    }

}
