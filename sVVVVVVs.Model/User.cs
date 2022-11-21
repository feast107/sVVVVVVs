using System;

namespace sVVVVVVs.Model
{
    public abstract class User
    {
        public string Id { get; } = Guid.NewGuid().ToString();
#nullable enable
        public Room? Room { get; set; }
        public bool IsHost => Room?.Host == this;
        public bool IsInRoom => Room != null;
    }
}
