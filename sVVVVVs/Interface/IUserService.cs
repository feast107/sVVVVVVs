using System.Collections.Generic;
using System.Threading.Tasks;
using sVVVVVVs.Model;

namespace sVVVVVVs.Interface
{
    public interface IUserService
    {
        Dictionary<string,User> Users { get; }
        User GetUser(string userId);
        Task OnLine(User user);
        Task OffLine(User user);
    }

    public static class UserServiceExtension
    {
        /*public static string ToProtoBuf(this IUserService service)
        {
            ProtoBuf.Serializer.Serialize();
        }*/
    }
}
