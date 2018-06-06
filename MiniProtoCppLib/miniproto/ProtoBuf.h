#ifndef __ProtoBuf_h__
#define __ProtoBuf_h__

#include <iostream>

#include "ProtoDefine.h"

namespace common
{
	namespace miniproto
	{
		// 封装一个buf对象，记录buf总长度，当前已读/写到的pos位置，用于判断读/写时是否越界
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