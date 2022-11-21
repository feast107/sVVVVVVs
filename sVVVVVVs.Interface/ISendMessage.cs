using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace sVVVVVVs.Interface
{
    public interface ISendMessage
    {
        public Task Send(byte[] message);
    }
}
