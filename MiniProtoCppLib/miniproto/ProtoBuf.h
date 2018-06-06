#ifndef __ProtoBuf_h__
#define __ProtoBuf_h__

#include <iostream>

#include "ProtoDefine.h"

namespace common
{
	namespace miniproto
	{
		// ��װһ��buf���󣬼�¼buf�ܳ��ȣ���ǰ�Ѷ�/д����posλ�ã������ж϶�/дʱ�Ƿ�Խ��
		class ProtoBuf
		{
		public:
			ProtoBuf(byte *buf, byte_size size);
			~ProtoBuf();

		protected:
			ProtoBuf(const ProtoBuf& other);
			ProtoBuf& operator=(const ProtoBuf& other);

		public:
			//byte operator[](byte_pos pos) const;

			bool Write(byte buf);
			bool Write(const byte *buf, byte_size size);

			byte Read() const;
			const byte *Read(byte_size size) const;

			void SetPos(byte_pos pos);

			const byte *Buf() const;
			byte_size Size() const;
			byte_size LeftSize() const;
			byte_pos Pos() const;

		private:
			byte *m_Buf;
			byte_size m_Size;
			mutable byte_pos m_Pos;
		};
	}
}

#endif