#ifndef __ProtoBitMap_h__
#define __ProtoBitMap_h__

#include "ProtoDefine.h"

namespace common {
	namespace miniproto {

		template <uint32 N>
		class ProtoBitMap
		{
		public:
			ProtoBitMap()
			{
				memset(m_Bits, 0x00, sizeof(m_Bits));
			}
			ProtoBitMap(const ProtoBitMap<N>& other)
			{
				*this = other;
			}
			~ProtoBitMap()
			{

			}
			ProtoBitMap<N>& operator=(const ProtoBitMap<N>& other)
			{
				memcpy(m_Bits, other.m_Bits, sizeof(m_Bits));
				return *this;
			}

		public:
			void SetBit(uint32 index)
			{
				if (index < N)
				{
					m_Bits[index / 8] |= (0x01 << (index % 8));
				}
			}
			void ClearBit(uint32 index)
			{
				if (index < N)
				{
					m_Bits[index / 8] &= ~(0x01 << (index % 8));
				}
			}
			bool HasBit(uint32 index) const
			{
				if (index < N)
				{
					return (m_Bits[index / 8] & (0x01 << (index % 8))) != 0;
				}
				else
				{
					return false;
				}
			}

		public:
			void Clear()
			{
				memset(m_Bits, 0x00, sizeof(m_Bits));
			}

		private:
			byte m_Bits[(N != 0) ? ((N - 1) / 8 + 1) : 1];
		};
	}
}

#endif