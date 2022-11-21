using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Policy;
using System.Text;
using Fleck;
using Microsoft.AspNetCore.Identity;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;

namespace sVVVVVVs
{
    public class CandidateServer
    {
        private readonly IUserService userService;
        private readonly IRoomService roomService;
        private readonly IMessageService messageService;
        public CandidateServer(
            IUserService userService,
            IRoomService roomService, 
            IMessageService messageService)
        {
            this.userService = userService;
            this.roomService = roomService;
            Server = new WebSocketServer("http://127.0.0.1:9002");
            this.messageService = messageService;
        }

        public IWebSocketServer Server { get; }


        public void Start()
        {
            Server.Start(client =>
            {
                var user = new User(client);
                userService.OnLine(user);
                client.OnMessage += message =>
                {
                    client.OnBinary(Encoding.UTF8.GetBytes(message));
                };
                client.OnBinary += message =>
                {
                    switch (messageService.Analyze(message))
                    {
                        case IMessageService.MessageType.World:
                            roomService.Create(user, messageService.Deserialize(World.Parser, message));
                            break;
                        case IMessageService.MessageType.Join:
                            roomService.Join(user, messageService.Deserialize(Join.Parser, message));
                            break;
                    }
                };
                client.OnClose += () =>
                {
                    userService.OffLine(user);
                };
            });
        }
    }
}
