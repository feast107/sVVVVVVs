using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using Google.Protobuf;
using Microsoft.AspNetCore.Mvc.ModelBinding.Binders;
using sVVVVVVs.Interface;
using sVVVVVVs.Model;
using sVVVVVVs.Interface;
using System;

namespace sVVVVVVs.Service
{
    public class MessageService : IMessageService
    {
        public IMessageService.MessageType Analyze(byte[] message)
        {
            return (IMessageService.MessageType)new ByteConverter().ConvertTo(message[0], typeof(int))!;
        }

        public T Deserialize<T>(MessageParser<T> parser, byte[] message) where T : IMessage<T>
        {
            return parser.ParseFrom(message, sizeof(int), message.Length - sizeof(int));
        }

        public Task SendTo(User to, byte[] message)
        {
            return Task.Run(() => to.Client.Send(message));
        }

        public Task SendTo<T>(User to, IMessageService.MessageType type, T content) where T : IMessage<T>
        {
            return SendTo(to, (byte[])BitConverter.GetBytes((int)type).Concat(content.ToByteArray()));
        }
    }
}
