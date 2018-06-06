using System;

namespace common
{
	namespace miniproto
	{

		public class ProtoBitMap
		{
			public ProtoBitMap(uint count)
			{
				if (count != 0)
				{
					m_Bits = new byte[(count - 1) / 8 + 1];
				}
				else
				{
					m_Bits = new byte[1];
				}
			}

			public void SetBit(uint index)
			{
				if (index < (m_Bits.Length * 8))
				{
					m_Bits[index / 8] |= (byte)(0x01 << (byte)(index % 8));
				}
			}
			public void ClearBit(uint index)
			{
				if (index < (m_Bits.Length * 8))
				{
					m_Bits[index / 8] &= (byte)~(0x01 << (byte)(index % 8));
				}
			}
			public bool HasBit(uint index)
			{
				if (index < (m_Bits.Length * 8))
				{
					return (m_Bits[index / 8] & (byte)(0x01 << (byte)(index % 8))) != 0;
				}
				else
				{
					return false;
				}
			}

			public void Clear()
			{
				for (uint i = 0; i < m_Bits.Length; i++)
				{
					m_Bits[i] = 0;
				}
			}

			private byte[] m_Bits = null;
		};
	}
}