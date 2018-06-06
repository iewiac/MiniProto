#ifndef __ProtoTool_h__
#define __ProtoTool_h__

#include <iostream>

#include "ProtoDefine.h"
#include "ProtoBuf.h"

namespace common
{
	namespace miniproto
	{
		// proto字段编/解码工具类
		class ProtoTool
		{
		public:
			// Zigzag编/解码
			static uint32 Zigzag(int32 value);
			static uint64 Zigzag(int64 value);
			static int32 DeZigzag(uint32 value);
			static int64 DeZigzag(uint64 value);

			// Varint Number编/解码
			static byte_size VarintByteSize(uint32 value);
			static byte_size VarintByteSize(uint64 value);
			static byte_size VarintCode(uint32 value, ProtoBuf& buf);
			static byte_size VarintCode(uint64 value, ProtoBuf& buf);
			static byte_size VarintDecode(uint32& value, const ProtoBuf& buf);
			static byte_size VarintDecode(uint64& value, const ProtoBuf& buf);
			static byte_size VarintCode(uint32 value, std::ostream& buf);
			static byte_size VarintCode(uint64 value, std::ostream& buf);
			static byte_size VarintDecode(uint32& value, std::istream& buf);
			static byte_size VarintDecode(uint64& value, std::istream& buf);
			// Fixed Number编/解码
			static byte_size FixedByteSize(uint32 value);
			static byte_size FixedByteSize(uint64 value);
			static byte_size FixedCode(uint32 value, ProtoBuf& buf);
			static byte_size FixedCode(uint64 value, ProtoBuf& buf);
			static byte_size FixedDecode(uint32& value, const ProtoBuf& buf);
			static byte_size FixedDecode(uint64& value, const ProtoBuf& buf);
			static byte_size FixedCode(uint32 value, std::ostream& buf);
			static byte_size FixedCode(uint64 value, std::ostream& buf);
			static byte_size FixedDecode(uint32& value, std::istream& buf);
			static byte_size FixedDecode(uint64& value, std::istream& buf);

			// proto key编/解码
			static byte_size KeyByteSize(unsigned int num, unsigned int type);
			static byte_size KeyCode(unsigned int num, unsigned int type, ProtoBuf& buf);
			static byte_size KeyDecode(unsigned int& num, unsigned int& type, const ProtoBuf& buf);
			static byte_size KeyCode(unsigned int num, unsigned int type, std::ostream& buf);
			static byte_size KeyDecode(unsigned int& num, unsigned int& type, std::istream& buf);

			// 未知字段解码
			static byte_size UnknownDecode(unsigned int type, const ProtoBuf& buf);
			static byte_size UnknownDecode(unsigned int type, std::istream& buf);

			// 单个字段编/解码
			// 数组按proto2规则编/解码 {bytesize + element}
			// 数组按proto3规则编/解码 bytesize + {element}
			static byte_size BoolByteSize(bool value);
			static byte_size BoolCode(bool value, ProtoBuf& buf);
			static byte_size BoolDecode(bool& value, const ProtoBuf& buf);
			static byte_size BoolCode(bool value, std::ostream& buf);
			static byte_size BoolDecode(bool& value, std::istream& buf);

			static byte_size Int32ByteSize(int32 value);
			static byte_size Int32Code(int32 value, ProtoBuf& buf);
			static byte_size Int32Decode(int32& value, const ProtoBuf& buf);
			static byte_size Int32Code(int32 value, std::ostream& buf);
			static byte_size Int32Decode(int32& value, std::istream& buf);

			static byte_size SInt32ByteSize(int32 value);
			static byte_size SInt32Code(int32 value, ProtoBuf& buf);
			static byte_size SInt32Decode(int32& value, const ProtoBuf& buf);
			static byte_size SInt32Code(int32 value, std::ostream& buf);
			static byte_size SInt32Decode(int32& value, std::istream& buf);

			static byte_size UInt32ByteSize(uint32 value);
			static byte_size UInt32Code(uint32 value, ProtoBuf& buf);
			static byte_size UInt32Decode(uint32& value, const ProtoBuf& buf);
			static byte_size UInt32Code(uint32 value, std::ostream& buf);
			static byte_size UInt32Decode(uint32& value, std::istream& buf);

			static byte_size Int64ByteSize(int64 value);
			static byte_size Int64Code(int64 value, ProtoBuf& buf);
			static byte_size Int64Decode(int64& value, const ProtoBuf& buf);
			static byte_size Int64Code(int64 value, std::ostream& buf);
			static byte_size Int64Decode(int64& value, std::istream& buf);

			static byte_size SInt64ByteSize(int64 value);
			static byte_size SInt64Code(int64 value, ProtoBuf& buf);
			static byte_size SInt64Decode(int64& value, const ProtoBuf& buf);
			static byte_size SInt64Code(int64 value, std::ostream& buf);
			static byte_size SInt64Decode(int64& value, std::istream& buf);

			static byte_size UInt64ByteSize(uint64 value);
			static byte_size UInt64Code(uint64 value, ProtoBuf& buf);
			static byte_size UInt64Decode(uint64& value, const ProtoBuf& buf);
			static byte_size UInt64Code(uint64 value, std::ostream& buf);
			static byte_size UInt64Decode(uint64& value, std::istream& buf);

			static byte_size SFixed32ByteSize(int32 value);
			static byte_size SFixed32Code(int32 value, ProtoBuf& buf);
			static byte_size SFixed32Decode(int32& value, const ProtoBuf& buf);
			static byte_size SFixed32Code(int32 value, std::ostream& buf);
			static byte_size SFixed32Decode(int32& value, std::istream& buf);

			static byte_size Fixed32ByteSize(uint32 value);
			static byte_size Fixed32Code(uint32 value, ProtoBuf& buf);
			static byte_size Fixed32Decode(uint32& value, const ProtoBuf& buf);
			static byte_size Fixed32Code(uint32 value, std::ostream& buf);
			static byte_size Fixed32Decode(uint32& value, std::istream& buf);

			static byte_size SFixed64ByteSize(int64 value);
			static byte_size SFixed64Code(int64 value, ProtoBuf& buf);
			static byte_size SFixed64Decode(int64& value, const ProtoBuf& buf);
			static byte_size SFixed64Code(int64 value, std::ostream& buf);
			static byte_size SFixed64Decode(int64& value, std::istream& buf);

			static byte_size Fixed64ByteSize(uint64 value);
			static byte_size Fixed64Code(uint64 value, ProtoBuf& buf);
			static byte_size Fixed64Decode(uint64& value, const ProtoBuf& buf);
			static byte_size Fixed64Code(uint64 value, std::ostream& buf);
			static byte_size Fixed64Decode(uint64& value, std::istream& buf);

			static byte_size FloatByteSize(float value);
			static byte_size FloatCode(float value, ProtoBuf& buf);
			static byte_size FloatDecode(float& value, const ProtoBuf& buf);
			static byte_size FloatCode(float value, std::ostream& buf);
			static byte_size FloatDecode(float& value, std::istream& buf);

			static byte_size DoubleByteSize(double value);
			static byte_size DoubleCode(double value, ProtoBuf& buf);
			static byte_size DoubleDecode(double& value, const ProtoBuf& buf);
			static byte_size DoubleCode(double value, std::ostream& buf);
			static byte_size DoubleDecode(double& value, std::istream& buf);

			template <typename E> static byte_size EnumByteSize(E value);
			template <typename E> static byte_size EnumCode(E value, ProtoBuf& buf);
			template <typename E> static byte_size EnumDecode(E& value, const ProtoBuf& buf);
			template <typename E> static byte_size EnumCode(E value, std::ostream& buf);
			template <typename E> static byte_size EnumDecode(E& value, std::istream& buf);

			template <template<typename> class A> static byte_size StringByteSize(const String<A>& value);
			template <template<typename> class A> static byte_size StringCode(const String<A>& value, ProtoBuf& buf);
			template <template<typename> class A> static byte_size StringDecode(String<A>& value, const ProtoBuf& buf);
			template <template<typename> class A> static byte_size StringCode(const String<A>& value, std::ostream& buf);
			template <template<typename> class A> static byte_size StringDecode(String<A>& value, std::istream& buf);

			template <typename M> static byte_size MessageByteSize(const M& value);
			template <typename M> static byte_size MessageCode(const M& value, ProtoBuf& buf);
			template <typename M> static byte_size MessageDecode(M& value, const ProtoBuf& buf);
			template <typename M> static byte_size MessageCode(const M& value, std::ostream& buf);
			template <typename M> static byte_size MessageDecode(M& value, std::istream& buf);

			// 容器每个元素的编码
			template <class T> static byte_size EntryByteSize(const T& value, ProtoBool type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoInt32 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoSInt32 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoUInt32 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoSFixed32 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoFixed32 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoInt64 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoSInt64 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoUInt64 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoSFixed64 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoFixed64 type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoEnum type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoFloat type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoDouble type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoString type);
			template <class T> static byte_size EntryByteSize(const T& value, ProtoMessage type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoBool type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoInt32 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoSInt32 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoUInt32 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoSFixed32 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoFixed32 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoInt64 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoSInt64 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoUInt64 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoSFixed64 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoFixed64 type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoEnum type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoFloat type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoDouble type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoString type);
			template <class T> static byte_size EntryCode(const T& value, ProtoBuf& buf, ProtoMessage type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoBool type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoInt32 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoSInt32 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoUInt32 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoSFixed32 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoFixed32 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoInt64 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoSInt64 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoUInt64 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoSFixed64 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoFixed64 type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoEnum type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoFloat type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoDouble type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoString type);
			template <class T> static byte_size EntryDecode(T& value, const ProtoBuf& buf, ProtoMessage type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoBool type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoInt32 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoSInt32 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoUInt32 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoSFixed32 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoFixed32 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoInt64 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoSInt64 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoUInt64 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoSFixed64 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoFixed64 type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoEnum type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoFloat type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoDouble type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoString type);
			template <class T> static byte_size EntryCode(const T& value, std::ostream& buf, ProtoMessage type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoBool type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoInt32 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoSInt32 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoUInt32 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoSFixed32 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoFixed32 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoInt64 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoSInt64 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoUInt64 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoSFixed64 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoFixed64 type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoEnum type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoFloat type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoDouble type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoString type);
			template <class T> static byte_size EntryDecode(T& value, std::istream& buf, ProtoMessage type);

			template <class T, class P> static byte_size ArrayEntryByteSize(const T& value, P type);
			template <class T, class P> static byte_size ArrayEntryCode(const T& value, ProtoBuf& buf, P type);
			template <class T, class P> static byte_size ArrayEntryDecode(T& value, const ProtoBuf& buf, P type);
			template <class T, class P> static byte_size ArrayEntryCode(const T& value, std::ostream& buf, P type);
			template <class T, class P> static byte_size ArrayEntryDecode(T& value, std::istream& buf, P type);

			template <class T, template<typename> class A, class P> static byte_size ArrayByteSizeWithoutLength(const Array<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size ArrayByteSize(const Array<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size ArrayCode(const Array<T, A>& values, ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size ArrayDecode(Array<T, A>& values, const ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size ArrayCode(const Array<T, A>& values, std::ostream& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size ArrayDecode(Array<T, A>& values, std::istream& buf, P type);

			template <class T, class P> static byte_size SetEntryByteSize(const T& value, P type);
			template <class T, class P> static byte_size SetEntryCode(const T& value, ProtoBuf& buf, P type);
			template <class T, class P> static byte_size SetEntryDecode(T& value, const ProtoBuf& buf, P type);
			template <class T, class P> static byte_size SetEntryCode(const T& value, std::ostream& buf, P type);
			template <class T, class P> static byte_size SetEntryDecode(T& value, std::istream& buf, P type);

			template <class T, template<typename> class A, class P> static byte_size SetByteSizeWithoutLength(const Set<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size SetByteSize(const Set<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size SetCode(const Set<T, A>& values, ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetDecode(Set<T, A>& values, const ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetCode(const Set<T, A>& values, std::ostream& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetDecode(Set<T, A>& values, std::istream& buf, P type);

			template <class T, template<typename> class A, class P> static byte_size SetByteSizeWithoutLength(const HashSet<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size SetByteSize(const HashSet<T, A>& values, P type);
			template <class T, template<typename> class A, class P> static byte_size SetCode(const HashSet<T, A>& values, ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetDecode(HashSet<T, A>& values, const ProtoBuf& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetCode(const HashSet<T, A>& values, std::ostream& buf, P type);
			template <class T, template<typename> class A, class P> static byte_size SetDecode(HashSet<T, A>& values, std::istream& buf, P type);

			template <class K, class V, class KP, class VP> static byte_size MapEntryByteSizeWithoutLength(const K& key, const V& value, KP keyType, VP valueType);
			template <class K, class V, class KP, class VP> static byte_size MapEntryByteSize(const K& key, const V& value, KP keyType, VP valueType);
			template <class K, class V, class KP, class VP> static byte_size MapEntryCode(const K& key, const V& value, ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, class KP, class VP> static byte_size MapEntryDecode(K& key, V& value, const ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, class KP, class VP> static byte_size MapEntryCode(const K& key, const V& value, std::ostream& buf, KP keyType, VP valueType);
			template <class K, class V, class KP, class VP> static byte_size MapEntryDecode(K& key, V& value, std::istream& buf, KP keyType, VP valueType);

			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapByteSizeWithoutLength(const Map<K, V, A>& values, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapByteSize(const Map<K, V, A>& values, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapCode(const Map<K, V, A>& values, ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapDecode(Map<K, V, A>& values, const ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapCode(const Map<K, V, A>& values, std::ostream& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapDecode(Map<K, V, A>& values, std::istream& buf, KP keyType, VP valueType);

			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapByteSizeWithoutLength(const HashMap<K, V, A>& values, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapByteSize(const HashMap<K, V, A>& values, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapCode(const HashMap<K, V, A>& values, ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapDecode(HashMap<K, V, A>& values, const ProtoBuf& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapCode(const HashMap<K, V, A>& values, std::ostream& buf, KP keyType, VP valueType);
			template <class K, class V, template<typename> class A, class KP, class VP> static byte_size MapDecode(HashMap<K, V, A>& values, std::istream& buf, KP keyType, VP valueType);
		};

		template <typename E>
		byte_size ProtoTool::EnumByteSize(E value)
		{
			return VarintByteSize(static_cast<uint32>(value));
		}
		template <typename E>
		byte_size ProtoTool::EnumCode(E value, ProtoBuf& buf)
		{
			return VarintCode(static_cast<uint32>(value), buf);
		}
		template <typename E>
		byte_size ProtoTool::EnumDecode(E& value, const ProtoBuf& buf)
		{
			uint32 temp = 0;
			byte_size bytes = VarintDecode(temp, buf);
			value = static_cast<E>(temp);

			return bytes;
		}
		template <typename E>
		byte_size ProtoTool::EnumCode(E value, std::ostream& buf)
		{
			return VarintCode(static_cast<uint32>(value), buf);
		}
		template <typename E>
		byte_size ProtoTool::EnumDecode(E& value, std::istream& buf)
		{
			uint32 temp = 0;
			byte_size bytes = VarintDecode(temp, buf);
			value = static_cast<E>(temp);

			return bytes;
		}

		template <template<typename> class A>
		byte_size ProtoTool::StringByteSize(const String<A>& value)
		{
			byte_size bytes = 0;

			byte_size length = static_cast<byte_size>(value.length());
			bytes += VarintByteSize(length);
			bytes += length;

			return bytes;
		}
		template <template<typename> class A>
		byte_size ProtoTool::StringCode(const String<A>& value, ProtoBuf& buf)
		{
			byte_size bytes = 0;

			byte_size length = static_cast<byte_size>(value.length());
			bytes += VarintCode(length, buf);
			buf.Write((byte *)(value.c_str()), length);
			bytes += length;

			return bytes;
		}
		template <template<typename> class A>
		byte_size ProtoTool::StringDecode(String<A>& value, const ProtoBuf& buf)
		{
			byte_size bytes = 0;

			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			value.assign((char *)(buf.Read(length)), length);
			bytes += length;

			return bytes;
		}
		template <template<typename> class A>
		byte_size ProtoTool::StringCode(const String<A>& value, std::ostream& buf)
		{
			byte_size bytes = 0;

			byte_size length = static_cast<byte_size>(value.length());
			bytes += VarintCode(length, buf);
			buf.write(value.c_str(), length);
			bytes += length;

			return bytes;
		}
		template <template<typename> class A>
		byte_size ProtoTool::StringDecode(String<A>& value, std::istream& buf)
		{
			byte_size bytes = 0;

			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			value.resize(length + 1, 0);
			buf.read((char*)value.c_str(), length);
			bytes += length;

			return bytes;
		}

		template <typename M>
		byte_size ProtoTool::MessageByteSize(const M& value)
		{
			byte_size bytes = 0;

			byte_size length = value.ByteSize();
			bytes += VarintByteSize(length);
			bytes += length;

			return bytes;
		}
		template <typename M>
		byte_size ProtoTool::MessageCode(const M& value, ProtoBuf& buf)
		{
			byte_size bytes = 0;

			byte_size length = value.ByteSize();
			bytes += VarintCode(length, buf);
			bytes += value.Code(buf, length);

			return bytes;
		}
		template <typename M>
		byte_size ProtoTool::MessageDecode(M& value, const ProtoBuf& buf)
		{
			byte_size bytes = 0;

			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			bytes += value.Decode(buf, length);

			return bytes;
		}
		template <typename M>
		byte_size ProtoTool::MessageCode(const M& value, std::ostream& buf)
		{
			byte_size bytes = 0;

			byte_size length = value.ByteSize();
			bytes += VarintCode(length, buf);
			bytes += value.Code(buf, length);

			return bytes;
		}
		template <typename M>
		byte_size ProtoTool::MessageDecode(M& value, std::istream& buf)
		{
			byte_size bytes = 0;

			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			bytes += value.Decode(buf, length);

			return bytes;
		}

		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoBool type)
		{
			return BoolByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoInt32 type)
		{
			return Int32ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoSInt32 type)
		{
			return SInt32ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoUInt32 type)
		{
			return UInt32ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoSFixed32 type)
		{
			return SFixed32ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoFixed32 type)
		{
			return Fixed32ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoInt64 type)
		{
			return Int64ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoSInt64 type)
		{
			return SInt64ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoUInt64 type)
		{
			return UInt64ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoSFixed64 type)
		{
			return SFixed64ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoFixed64 type)
		{
			return Fixed64ByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoEnum type)
		{
			return EnumByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoFloat type)
		{
			return FloatByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoDouble type)
		{
			return DoubleByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoString type)
		{
			return StringByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryByteSize(const T& value, ProtoMessage type)
		{
			return MessageByteSize(value);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoBool type)
		{
			return BoolCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoInt32 type)
		{
			return Int32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoSInt32 type)
		{
			return SInt32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoUInt32 type)
		{
			return UInt32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoSFixed32 type)
		{
			return SFixed32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoFixed32 type)
		{
			return Fixed32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoInt64 type)
		{
			return Int64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoSInt64 type)
		{
			return SInt64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoUInt64 type)
		{
			return UInt64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoSFixed64 type)
		{
			return SFixed64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoFixed64 type)
		{
			return Fixed64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoEnum type)
		{
			return EnumCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoFloat type)
		{
			return FloatCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoDouble type)
		{
			return DoubleCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoString type)
		{
			return StringCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, ProtoBuf& buf, ProtoMessage type)
		{
			return MessageCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoBool type)
		{
			return BoolDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoInt32 type)
		{
			return Int32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoSInt32 type)
		{
			return SInt32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoUInt32 type)
		{
			return UInt32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoSFixed32 type)
		{
			return SFixed32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoFixed32 type)
		{
			return Fixed32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoInt64 type)
		{
			return Int64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoSInt64 type)
		{
			return SInt64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoUInt64 type)
		{
			return UInt64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoSFixed64 type)
		{
			return SFixed64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoFixed64 type)
		{
			return Fixed64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoEnum type)
		{
			return EnumDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoFloat type)
		{
			return FloatDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoDouble type)
		{
			return DoubleDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoString type)
		{
			return StringDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, const ProtoBuf& buf, ProtoMessage type)
		{
			return MessageDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoBool type)
		{
			return BoolCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoInt32 type)
		{
			return Int32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoSInt32 type)
		{
			return SInt32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoUInt32 type)
		{
			return UInt32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoSFixed32 type)
		{
			return SFixed32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoFixed32 type)
		{
			return Fixed32Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoInt64 type)
		{
			return Int64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoSInt64 type)
		{
			return SInt64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoUInt64 type)
		{
			return UInt64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoSFixed64 type)
		{
			return SFixed64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoFixed64 type)
		{
			return Fixed64Code(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoEnum type)
		{
			return EnumCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoFloat type)
		{
			return FloatCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoDouble type)
		{
			return DoubleCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoString type)
		{
			return StringCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryCode(const T& value, std::ostream& buf, ProtoMessage type)
		{
			return MessageCode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoBool type)
		{
			return BoolDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoInt32 type)
		{
			return Int32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoSInt32 type)
		{
			return SInt32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoUInt32 type)
		{
			return UInt32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoSFixed32 type)
		{
			return SFixed32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoFixed32 type)
		{
			return Fixed32Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoInt64 type)
		{
			return Int64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoSInt64 type)
		{
			return SInt64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoUInt64 type)
		{
			return UInt64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoSFixed64 type)
		{
			return SFixed64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoFixed64 type)
		{
			return Fixed64Decode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoEnum type)
		{
			return EnumDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoFloat type)
		{
			return FloatDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoDouble type)
		{
			return DoubleDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoString type)
		{
			return StringDecode(value, buf);
		}
		template <class T>
		byte_size ProtoTool::EntryDecode(T& value, std::istream& buf, ProtoMessage type)
		{
			return MessageDecode(value, buf);
		}

		template <class T, class P>
		byte_size ProtoTool::ArrayEntryByteSize(const T& value, P type)
		{
			return EntryByteSize(value, type);
		}
		template <class T, class P>
		byte_size ProtoTool::ArrayEntryCode(const T& value, ProtoBuf& buf, P type)
		{
			return EntryCode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::ArrayEntryDecode(T& value, const ProtoBuf& buf, P type)
		{
			return EntryDecode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::ArrayEntryCode(const T& value, std::ostream& buf, P type)
		{
			return EntryCode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::ArrayEntryDecode(T& value, std::istream& buf, P type)
		{
			return EntryDecode(value, buf, type);
		}

		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayByteSizeWithoutLength(const Array<T, A>& values, P type)
		{
			byte_size bytes = 0;

			ArrayConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += ArrayEntryByteSize(*it, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayByteSize(const Array<T, A>& values, P type)
		{
			byte_size bytes = 0;

			bytes += ArrayByteSizeWithoutLength(values, type);

			bytes += VarintByteSize(bytes);

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayCode(const Array<T, A>& values, ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(ArrayByteSizeWithoutLength(values, type), buf);

			ArrayConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += ArrayEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayDecode(Array<T, A>& values, const ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += ArrayEntryDecode(value, buf, type);
				values.push_back(std::move(value));
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayCode(const Array<T, A>& values, std::ostream& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(ArrayByteSizeWithoutLength(values, type), buf);

			ArrayConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += ArrayEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::ArrayDecode(Array<T, A>& values, std::istream& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += ArrayEntryDecode(value, buf, type);
				values.push_back(std::move(value));
			}

			return bytes;
		}

		template <class T, class P>
		byte_size ProtoTool::SetEntryByteSize(const T& value, P type)
		{
			return EntryByteSize(value, type);
		}
		template <class T, class P>
		byte_size ProtoTool::SetEntryCode(const T& value, ProtoBuf& buf, P type)
		{
			return EntryCode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::SetEntryDecode(T& value, const ProtoBuf& buf, P type)
		{
			return EntryDecode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::SetEntryCode(const T& value, std::ostream& buf, P type)
		{
			return EntryCode(value, buf, type);
		}
		template <class T, class P>
		byte_size ProtoTool::SetEntryDecode(T& value, std::istream& buf, P type)
		{
			return EntryDecode(value, buf, type);
		}

		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetByteSizeWithoutLength(const Set<T, A>& values, P type)
		{
			byte_size bytes = 0;

			SetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryByteSize(*it, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetByteSize(const Set<T, A>& values, P type)
		{
			byte_size bytes = 0;

			bytes += SetByteSizeWithoutLength(values, type);

			bytes += VarintByteSize(bytes);

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetCode(const Set<T, A>& values, ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(SetByteSizeWithoutLength(values, type), buf);

			SetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetDecode(Set<T, A>& values, const ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += SetEntryDecode(value, buf, type);
				values.insert(std::move(value));
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetCode(const Set<T, A>& values, std::ostream& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(SetByteSizeWithoutLength(values, type), buf);

			SetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetDecode(Set<T, A>& values, std::istream& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += SetEntryDecode(value, buf, type);
				values.insert(std::move(value));
			}

			return bytes;
		}

		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetByteSizeWithoutLength(const HashSet<T, A>& values, P type)
		{
			byte_size bytes = 0;

			HashSetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryByteSize(*it, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetByteSize(const HashSet<T, A>& values, P type)
		{
			byte_size bytes = 0;

			bytes += SetByteSizeWithoutLength(values, type);

			bytes += VarintByteSize(bytes);

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetCode(const HashSet<T, A>& values, ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(SetByteSizeWithoutLength(values, type), buf);

			HashSetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetDecode(HashSet<T, A>& values, const ProtoBuf& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += SetEntryDecode(value, buf, type);
				values.insert(std::move(value));
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetCode(const HashSet<T, A>& values, std::ostream& buf, P type)
		{
			byte_size bytes = 0;

			bytes += VarintCode(SetByteSizeWithoutLength(values, type), buf);

			HashSetConstIt<T, A> it = values.begin();
			while (it != values.end())
			{
				bytes += SetEntryCode(*it, buf, type);
				it++;
			}

			return bytes;
		}
		template <class T, template<typename> class A, class P>
		byte_size ProtoTool::SetDecode(HashSet<T, A>& values, std::istream& buf, P type)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				T value;
				bytes += SetEntryDecode(value, buf, type);
				values.insert(std::move(value));
			}

			return bytes;
		}

		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryByteSizeWithoutLength(const K& key, const V& value, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			bytes += KeyByteSize(1, keyType.GetWireType());
			bytes += EntryByteSize(key, keyType);
			bytes += KeyByteSize(2, valueType.GetWireType());
			bytes += EntryByteSize(value, valueType);
			return bytes;
		}
		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryByteSize(const K& key, const V& value, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			byte_size length = MapEntryByteSizeWithoutLength(key, value, keyType, valueType);
			bytes += VarintByteSize(length);
			bytes += length;
			return bytes;
		}
		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryCode(const K& key, const V& value, ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			bytes += VarintCode(MapEntryByteSizeWithoutLength(key, value, keyType, valueType), buf);
			bytes += KeyCode(1, keyType.GetWireType(), buf);
			bytes += EntryCode(key, buf, keyType);
			bytes += KeyCode(2, valueType.GetWireType(), buf);
			bytes += EntryCode(value, buf, valueType);
			return bytes;
		}
		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryDecode(K& key, V& value, const ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			unsigned int tag = 0;
			unsigned int type = 0;
			bytes += KeyDecode(tag, type, buf);
			bytes += EntryDecode(key, buf, keyType);
			bytes += KeyDecode(tag, type, buf);
			bytes += EntryDecode(value, buf, valueType);
			return bytes;
		}
		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryCode(const K& key, const V& value, std::ostream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			bytes += VarintCode(MapEntryByteSizeWithoutLength(key, value, keyType, valueType), buf);
			bytes += KeyCode(1, keyType.GetWireType(), buf);
			bytes += EntryCode(key, buf, keyType);
			bytes += KeyCode(2, valueType.GetWireType(), buf);
			bytes += EntryCode(value, buf, valueType);
			return bytes;
		}
		template <class K, class V, class KP, class VP>
		byte_size ProtoTool::MapEntryDecode(K& key, V& value, std::istream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;
			byte_size length = 0;
			bytes += VarintDecode(length, buf);
			unsigned int tag = 0;
			unsigned int type = 0;
			bytes += KeyDecode(tag, type, buf);
			bytes += EntryDecode(key, buf, keyType);
			bytes += KeyDecode(tag, type, buf);
			bytes += EntryDecode(value, buf, valueType);
			return bytes;
		}

		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapByteSizeWithoutLength(const Map<K, V, A>& values, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			MapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryByteSize(it->first, it->second, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapByteSize(const Map<K, V, A>& values, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += MapByteSizeWithoutLength(values, keyType, valueType);

			bytes += VarintByteSize(bytes);

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapCode(const Map<K, V, A>& values, ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += VarintCode(MapByteSizeWithoutLength(values, keyType, valueType), buf);

			MapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryCode(it->first, it->second, buf, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapDecode(Map<K, V, A>& values, const ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				K key;
				V value;
				bytes += MapEntryDecode(key, value, buf, keyType, valueType);
				values[std::move(key)] = std::move(value);
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapCode(const Map<K, V, A>& values, std::ostream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += VarintCode(MapByteSizeWithoutLength(values, keyType, valueType), buf);

			MapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryCode(it->first, it->second, buf, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapDecode(Map<K, V, A>& values, std::istream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				K key;
				V value;
				bytes += MapEntryDecode(key, value, buf, keyType, valueType);
				values[std::move(key)] = std::move(value);
			}

			return bytes;
		}

		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapByteSizeWithoutLength(const HashMap<K, V, A>& values, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			HashMapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryByteSize(it->first, it->second, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapByteSize(const HashMap<K, V, A>& values, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += MapByteSizeWithoutLength(values, keyType, valueType);

			bytes += VarintByteSize(bytes);

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapCode(const HashMap<K, V, A>& values, ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += VarintCode(MapByteSizeWithoutLength(values, keyType, valueType), buf);

			HashMapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryCode(it->first, it->second, buf, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapDecode(HashMap<K, V, A>& values, const ProtoBuf& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				K key;
				V value;
				bytes += MapEntryDecode(key, value, buf, keyType, valueType);
				values[std::move(key)] = std::move(value);
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapCode(const HashMap<K, V, A>& values, std::ostream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			bytes += VarintCode(MapByteSizeWithoutLength(values, keyType, valueType), buf);

			HashMapConstIt<K, V, A> it = values.begin();
			while (it != values.end())
			{
				bytes += MapEntryCode(it->first, it->second, buf, keyType, valueType);
				it++;
			}

			return bytes;
		}
		template <class K, class V, template<typename> class A, class KP, class VP>
		byte_size ProtoTool::MapDecode(HashMap<K, V, A>& values, std::istream& buf, KP keyType, VP valueType)
		{
			byte_size bytes = 0;

			byte_size bufSize = 0;
			bytes += VarintDecode(bufSize, buf);
			bufSize += bytes;

			while (bytes < bufSize)
			{
				K key;
				V value;
				bytes += MapEntryDecode(key, value, buf, keyType, valueType);
				values[std::move(key)] = std::move(value);
			}

			return bytes;
		}
	}
}

#endif