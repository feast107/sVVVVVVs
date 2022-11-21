using System.Threading.Tasks;
using sVVVVVVs.Model;

namespace sVVVVVVs.Interface
{
    public enum MessageType : int
        {
            World = 1,
            Join = 2,
        }
    public interface IMessageService<TUser> where TUser : User , ISendMessage
    {
        Task Deal(TUser from, byte[] message);
    }
}
