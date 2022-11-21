using System.Collections.Generic;
using System.Threading.Tasks;
using sVVVVVVs.Model;

namespace sVVVVVVs.Interface
{
    public interface IRoomService
    {
        Dictionary<string,Room> Rooms { get; }
        Room GetRoom(string roomId);
        Task Create(User user, World world);
        Task Join(User user,Join join);
    }
}
