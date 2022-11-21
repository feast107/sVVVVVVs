using System.Threading.Tasks;
using Google.Protobuf;
using sVVVVVVs.Model;

namespace sVVVVVVs.Interface
{
    public interface IMessageService
    {
        public enum MessageType : int
        {
            World = 1,
            Join = 2,
        }

        MessageType Analyze(byte[] message);

        T Deserialize<T>(MessageParser<T> parser, byte[] message) where T : IMessage<T>;

        Task SendTo<T>(User to, MessageType type, T content) where T : IMessage<T>;
    }
}
