using System.Collections.Generic;
using System.Threading.Tasks;
using sVVVVVVs.Model;

namespace sVVVVVVs.Interface
{
    public interface IRoomService
    {
        Dictionary<string, Room> Rooms { get; }
        Room GetRoom(string roomId);
        Task<Room> Create(User user, Room room);
        Task<Room> Join(User user, Room join);
    }
}
