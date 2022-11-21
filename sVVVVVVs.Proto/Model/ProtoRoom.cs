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
        public override string Name => world.Name;
        public override string Password => world.Password;
        public override int PlayerCount { 
            get => world.PlayerCount;
            set => world.PlayerCount = value;
        }
    }

    public class NewProtoRoom : Room
    {
        public NewProtoRoom(User host, Proto.World world) : base(host)
        {
            World = world;
            world.Id = Id;
        }

        public readonly Proto.World World;

        public override int MaximumPlayer => World.MaxPlayerCount;
        public override string Name => World.Name;
        public override string Password => World.Password;
        public override int PlayerCount
        {
            get => World.PlayerCount;
            set => World.PlayerCount = value;
        }
    }
}
