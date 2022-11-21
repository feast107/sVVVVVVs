using System.Collections.Generic;
using System.Threading.Tasks;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs.Core
{
    public class UserService : IUserService
    {
        private readonly IRoomService roomService;
        public UserService(IRoomService roomService)
        {
            this.roomService = roomService;
        }

        public Dictionary<string, User> Users { get; } = new Dictionary<string, User>();
        public User GetUser(string userId)
        {
            return Users[userId];
        }
        public Task OnLine(User user)
        {
            return Task.Run(() =>
            {
                if (!Users.ContainsKey(user.Id))
                {
                    Users.Add(user.Id, user);
                }
            });
        }
        public Task OffLine(User user)
        {
            return Task.Run(() =>
            {
                if (!Users.ContainsKey(user.Id)) return;
                Users.Remove(user.Id);
                if (user.IsHost)
                {
                    roomService.Rooms.Remove(user.Room!.Id);
                }
            });
        }
    }
}
