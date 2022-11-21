using System;
using System.ComponentModel;
using System.Linq;
using System.Threading.Tasks;
using Google.Protobuf;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;
using sVVVVVVs.Proto.Model;
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
}
