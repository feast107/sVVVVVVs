using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Google.Protobuf;
using Newtonsoft.Json;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs.Service
{
    public class RoomService : IRoomService
    {
        private readonly IMessageService messageService;
        public RoomService(IMessageService messageService)
        {
            this.messageService = messageService;
        }

        /// <summary>
        /// key:RoomId Value:Room
        /// </summary>
        public Dictionary<string, Room> Rooms { get; } = new();

        public Room GetRoom(string roomId)
        {
            return Rooms[roomId];
        }
        public Task Create(User user,World world)
        {
            return Task.Run(() =>
            {
                var content = world;
                try
                {
                    if (user.IsHost)
                    {
                        content = user.Room!.World;
                    }
                    else
                    {
                        var room = user.Room = new Room(user, world);
                        Rooms.Add(room.Id, room);
                    }
                }
                finally
                {
                    messageService.SendTo(user, IMessageService.MessageType.World, content);
                }
            });
        }
        public Task Join(User user, Join join)
        {
            return Task.Run(() =>
            {
                join.Id = string.Empty;
                User target = user;
                try
                {
                    if (user.IsInRoom || string.IsNullOrEmpty(join.Id))
                    {
                        return;
                    }
                    var room = GetRoom(join.Id);
                    if (room == null || room.World.Password != join.Password)
                    {
                        return;
                    }
                    target = room.Host;
                    join.Id = room.Id;
                    user.Room = room;
                }
                finally
                {
                    messageService.SendTo(target, IMessageService.MessageType.Join, join);
                }
            });
        }
    }
}
