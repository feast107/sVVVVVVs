using System;
using Fleck;

namespace sVVVVVVs.Model
{
    public class User
    {
        public string Id { get; } = Guid.NewGuid().ToString();
#nullable enable
        public Room? Room { get; set; }
        public IWebSocketConnection Client { get; }
        public User(IWebSocketConnection client)
        {
            Client = client;
        }
        public bool IsHost => Room?.Host == this;
        public bool IsInRoom => Room != null;
    }
}
