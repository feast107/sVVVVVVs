using System;
using System.Collections.Generic;
using System.Text;
using sVVVVVVs.Model;

namespace sVVVVVVs.Proto.Model
{
    public class ProtoRoom : Room
    {
        public ProtoRoom(User host,World world) : base(host)
        {
            this.world = world;
            world.Id = Id;
        }

        private readonly World world;

        public override int MaximumPlayer => world.MaxPlayerCount;
        public override string Password => world.Password;

        public override int PlayerCount { 
            get => world.PlayerCount;
            set => world.PlayerCount = value;
        }
    }
}
