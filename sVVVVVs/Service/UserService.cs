using System.Collections.Generic;
using System.Threading.Tasks;
using ProtoBuf.Serializers;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs.Service
{
    public class UserService : IUserService
    {
        private readonly IMessageService messageService;
        private readonly IRoomService roomService;
        public UserService(IMessageService messageService, IRoomService roomService)
        {
            this.messageService = messageService;
            this.roomService = roomService;
        }

        public Dictionary<string, User> Users { get; } = new ();
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
