
using System;
using System.Collections.Generic;

namespace sVVVVVVs.Model
{
    public abstract class Room
    {
        protected Room(User host)
        {
            Host = host;
        }
        public string Id { get; } = Guid.NewGuid().ToString();
        public User Host { get; }
        public abstract string Password { get; }
        public abstract int PlayerCount { get; set; }
        public abstract int MaximumPlayer { get; }
    }
}
