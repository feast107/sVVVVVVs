using System.Text;
using Fleck;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;
using sVVVVVVs.Server.Model;

namespace sVVVVVVs.Server
{
    public class CandidateServer : IServer
    {
        private readonly IUserService userService;
        private readonly IMessageService<WsUser> messageService;
        public CandidateServer(
            IUserService userService,
            IMessageService<WsUser> messageService)
        {
            this.userService = userService;
            Server = new WebSocketServer("http://127.0.0.1:9002");
            this.messageService = messageService;
        }

        public IWebSocketServer Server { get; }

        public void Start()
        {
            Server.Start(client =>
            {
                var user = new WsUser(client);
                userService.OnLine(user);
                client.OnMessage += message =>
                {
                    client.OnBinary(Encoding.UTF8.GetBytes(message));
                };
                client.OnBinary += message =>
                {
                    messageService.Deal(user, message);
                };
                client.OnClose += () =>
                {
                    userService.OffLine(user);
                };
            });
        }
    }
}
