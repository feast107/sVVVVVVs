using System.Collections.Generic;
using System.Threading.Tasks;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs.Core
{
    public class RoomService : IRoomService
    {
        /// <summary>
        /// key:RoomId Value:Room
        /// </summary>
        public Dictionary<string, Room> Rooms { get; } = new Dictionary<string, Room>();
        public Room GetRoom(string roomId)
        {
            return Rooms[roomId];
        }
        public Task<Room> Create(User user, Room room)
        {
            return Task.Run(() =>
            {
                if (user.IsHost) return user.Room;
                user.Room = room;
                Rooms.Add(room.Id, room);
                return user.Room;
            });
        }
        public Task<Room> Join(User user, Room room)
        {
            return Task.Run(() =>
            {
                if (user.IsInRoom)
                {
                    return user.Room;
                }

                user.Room = room;
                return user.Room;
            });
        }
    }
}
