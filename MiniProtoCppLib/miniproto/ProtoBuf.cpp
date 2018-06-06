#include "ProtoBuf.h"

namespace common
{
	namespace miniproto
	{
		ProtoBuf::ProtoBuf(byte *buf, byte_size size)
		{
			m_Buf = buf;
			m_Size = size;
			m_Pos = 0;
		}
		ProtoBuf::~ProtoBuf()
		{
			m_Buf = nullptr;
			m_Size = 0;
			m_Pos = 0;
		}

		ProtoBuf::ProtoBuf(const ProtoBuf& other)
		{
			*this = other;
		}
		ProtoBuf& ProtoBuf::operator=(const ProtoBuf& other)
		{
			m_Buf = other.m_Buf;
			m_Size = other.m_Size;
			m_Pos = other.m_Pos;

			return *this;
		}

		//byte ProtoBuf::operator[](byte_pos pos) const
		//{
		//	if (m_Buf != nullptr && pos < m_Size)
		//	{
		//		return m_Buf[pos];
		//	}
		//	else
		//	{
		//		return 0;
		//	}
		//}

		bool ProtoBuf::Write(byte buf)
		{
			if (m_Buf != nullptr && m_Pos + 1 <= m_Size)
			{
				m_Buf[m_Pos] = buf;
				m_Pos += 1;
				return true;
			}
			else
			{
				return false;
			}
		}
		bool ProtoBuf::Write(const byte *buf, byte_size size)
		{
			if (m_Buf != nullptr && m_Pos + size <= m_Size && buf != nullptr && 0 < size)
			{
				memcpy(m_Buf + m_Pos, buf, size);
				m_Pos += size;
				return true;
			}
			else
			{
				return false;
			}
		}

		byte ProtoBuf::Read() const
		{
			if (m_Buf != nullptr && m_Pos + 1 <= m_Size)
			{
				byte_pos pos = m_Pos;
				m_Pos += 1;
				return m_Buf[pos];
			}
			else
			{
				return 0;
			}
		}
		const byte *ProtoBuf::Read(byte_size size) const
		{
			if (m_Buf != nullptr && m_Pos + size <= m_Size)
			{
				byte_pos pos = m_Pos;
				m_Pos += size;
				return m_Buf + pos;
			}
			else
			{
				return nullptr;
			}
		}

		void ProtoBuf::SetPos(byte_pos pos)
		{
			if (pos <= m_Size)
			{
				m_Pos = pos;
			}
		}

		const byte *ProtoBuf::Buf() const
		{
			return m_Buf;
		}
		byte_size ProtoBuf::Size() const
		{
			return m_Size;
		}
		byte_size ProtoBuf::LeftSize() const
		{
			return m_Size - m_Pos;
		}
		byte_pos ProtoBuf::Pos() const
		{
			return m_Pos;
		}
	}
}