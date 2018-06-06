using System;
using System.IO;

namespace common
{
	namespace miniproto
	{

		// 所有自定义message的基类
		public abstract class ProtoBase
		{
			public ProtoBase()
			{

			}

			public abstract ulong ByteSize();
			public abstract ulong Code(Stream buf, ulong size);
			public abstract ulong Decode(Stream buf, ulong size);

			public abstract void Clear();
			public abstract void Release();

			public bool SerializeToStream(Stream buf, ulong size)
			{
				ulong bytes = 0;

				try
				{
					buf.SetLength((long)size);
					bytes += Code(buf, size);
				}
				catch
				{
					return false;
				}

				return bytes <= size;
			}
			public bool ParseFromStream(Stream buf, ulong size)
			{
				ulong bytes = 0;

				try
				{
					Clear();
					bytes += Decode(buf, size);
				}
				catch
				{
					return false;
				}

				return bytes <= size;
			}
		};

	}
}