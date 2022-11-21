using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using sVVVVVVs.Proto.Proto;
using WebSocket4Net;
using World = sVVVVVVs.Proto.Proto.World;

namespace sVVVVVVs.Client
{
    public class Program
    {
        public static void Test()
        {
            var ws = new WebSocket("ws://127.0.0.1:9002","",
            new List<KeyValuePair<string, string>>()
            {
                new KeyValuePair<string, string>("secret","123")
            });
            
            ws.Open();
            using var fs = new MemoryStream();
            ProtoBuf.Serializer.Serialize(fs, new PayLoad()
            {
                Type = PayLoad.MessageType.Join,
                Join = new sVVVVVVs.Proto.Proto.Join()
                {
                }
            });
            var buffer = fs.ToArray();
            ws.Send(buffer, 0, buffer.Length);
            ws.Close();
        }
        public static void Main(string[] args)
        {
            
        }
    }
}
