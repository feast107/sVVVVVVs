
using System;
using System.Collections.Generic;

namespace sVVVVVVs.Model
{
    public class Room
    {
        public Room(User host,World world)
        {
            Host = host;
            World = world;
            world.Id = Id;
        }
        public string Id { get; } = Guid.NewGuid().ToString();
        public User Host { get; }
        public World World { get; }
    }
}
