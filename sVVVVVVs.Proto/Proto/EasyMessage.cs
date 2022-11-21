using System;
using System.Collections.Generic;
using ProtoBuf;

namespace sVVVVVVs.Proto.Proto
{
    [ProtoContract]
    public class PayLoad
    {
        public enum MessageType
        {
            None = 0,
            World = 1,
            WorldList = 2,
            Join = 3,
            SyncStatus = 4,
        }

        [ProtoMember(1)] public string Id { get; set; } = Guid.NewGuid().ToString();
        
        [ProtoMember(2)] public MessageType Type { get; set; }

        [ProtoMember(3)] public World World { get; set; }

        [ProtoMember(4)] public Join Join { get; set; }

        [ProtoMember(5)] public WorldList WorldList { get; set; }

        [ProtoMember(6)] public Synchronize SyncStatus { get; set; }
    }

   

    [ProtoContract]
    public class World
    {
        [ProtoMember(1)] public string Id { get; set; } //send null receive worldId

        [ProtoMember(2)] public string Name { get; set; }

        [ProtoMember(3)] public string Password { get; set; }

        [ProtoMember(4)] public int PlayerCount { get; set; }

        [ProtoMember(5)] public int MaxPlayerCount { get; set; }
    }

    [ProtoContract]
    public class Join
    {
        [ProtoMember(1)] public string Id { get; set; }

        [ProtoMember(2)] public string Password { get; set; }

        [ProtoMember(3)] public string IceCandidate { get; set; }
    }

    [ProtoContract]
    public class WorldList
    {
        [ProtoMember(1)]
        public Dictionary<string, string> Worlds { get; set; } = new Dictionary<string, string>();
    }

    [ProtoContract]
    public class Synchronize
    {
        [ProtoMember(1)] public string Id { get; set; }
        [ProtoMember(2)] public int PlayerCount { get; set; }
    }
}
