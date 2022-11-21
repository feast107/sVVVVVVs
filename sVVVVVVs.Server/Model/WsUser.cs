using System.Threading.Tasks;
using Fleck;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs.Server.Model
{
    public class WsUser : User , ISendMessage
    {
        public WsUser(IWebSocketConnection client)
        {
            Client = client;
        }
        private IWebSocketConnection Client { get; }
        public Task Send(byte[] message)
        {
            return Client.Send(message);
        }
    }
}
