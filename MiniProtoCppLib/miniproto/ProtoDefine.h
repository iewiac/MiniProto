#ifndef __ProtoDefine_h__
#define __ProtoDefine_h__

#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

namespace common
{
	namespace miniproto
	{

		// typedefs
		typedef int int32;
		typedef unsigned int uint32;
		typedef long long int64;
		typedef unsigned long long uint64;

		// 字节，字节数量
		typedef unsigned char byte;
		typedef unsigned int byte_size;
		typedef unsigned int byte_pos;

		// 解码失败时，throw UnknownWireTypeException
		const std::string UnknownWireTypeException = "UnknownWireTypeException";

		// string别名
		template<template<typename> class A = std::allocator>
		using String = std::basic_string<char, std::char_traits<char>, A<char> >;

		// vector别名，vector迭代器的别名
		template<class T, template<typename> class A = std::allocator>
		using Array = std::vector<T, A<T> >;
		template<class T, template<typename> class A = std::allocator>
		using ArrayIt = typename Array<T, A>::iterator;
		template<class T, template<typename> class A = std::allocator>
		using ArrayConstIt = typename Array<T, A>::const_iterator;

		// set别名，set迭代器的别名
		template<class T, template<typename> class A = std::allocator>
		using Set = std::set<T, std::less<T>, A<T> >;
		template<class T, template<typename> class A = std::allocator>
		using SetIt = typename Set<T, A>::iterator;
		template<class T, template<typename> class A = std::allocator>
		using SetConstIt = typename Set<T, A>::const_iterator;

		// hashset别名，hashset迭代器的别名
		template<class T, template<typename> class A = std::allocator>
		using HashSet = std::unordered_set<T, std::hash<T>, std::equal_to<T>, A<T> >;
		template<class T, template<typename> class A = std::allocator>
		using HashSetIt = typename HashSet<T, A>::iterator;
		template<class T, template<typename> class A = std::allocator>
		using HashSetConstIt = typename HashSet<T, A>::const_iterator;

		// map别名，map迭代器的别名
		template<class K, class V, template<typename> class A = std::allocator>
		using Map = std::map<K, V, std::less<K>, A<std::pair<const K, V> > >;
		template<class K, class V, template<typename> class A = std::allocator>
		using MapIt = typename Map<K, V, A>::iterator;
		template<class K, class V, template<typename> class A = std::allocator>
		using MapConstIt = typename Map<K, V, A>::const_iterator;

		// hashmap别名，hashmap迭代器的别名
		template<class K, class V, template<typename> class A = std::allocator>
		using HashMap = std::unordered_map<K, V, std::hash<K>, std::equal_to<K>, A<std::pair<const K, V> > >;
		template<class K, class V, template<typename> class A = std::allocator>
		using HashMapIt = typename HashMap<K, V, A>::iterator;
		template<class K, class V, template<typename> class A = std::allocator>
		using HashMapConstIt = typename HashMap<K, V, A>::const_iterator;

		// proto字段类型
		enum ProtoFieldType
		{
			PFT_Bool = 0,	// bool
			PFT_Int32,		// int32
			PFT_SInt32,		// sint32
			PFT_UInt32,		// uint32
			PFT_SFixed32,	// sfixed32
			PFT_Fixed32,	// fixed32
			PFT_Int64,		// int64
			PFT_SInt64,		// sint64
			PFT_UInt64,		// uint64
			PFT_SFixed64,	// sfixed64
			PFT_Fixed64,	// fixed64
			PFT_Enum,		// enum
			PFT_Float,		// float
			PFT_Double,		// double
			PFT_String,		// string
			PFT_Message,	// message
		};

		// proto字段类型
		enum ProtoWireType
		{
			PWT_Varint = 0,			// int32, int64, uint32, uint64, sint32, sint64, bool, enum
			PWT_64bit,				// fixed64, sfixed64, double
			PWT_LengthDelimited,	// string, bytes, messages, proto3 repeated, miniproto repeated
			PWT_StartGroup,			// unused
			PWT_EndGroup,			// unused
			PWT_32bit,				// fixed32, sfixed32, float
			PWT_Unknown,			// invalid type
		};

		// proto字段类型重定义，各自定义各自的常量对象，用于模板函数重载
#define ProtoMember(MemberType, FieldType, WireType, ArrayWireType) \
		class Proto##MemberType \
		{ \
		public: \
			static ProtoFieldType GetFieldType() { return FieldType; }\
			static ProtoWireType GetWireType() { return WireType; }\
			static ProtoWireType GetArrayWireType() { return ArrayWireType; }\
		}; \
		const Proto##MemberType CommonProto##MemberType = Proto##MemberType();

		ProtoMember(Bool, PFT_Bool, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Int32, PFT_Int32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SInt32, PFT_SInt32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(UInt32, PFT_UInt32, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SFixed32, PFT_SFixed32, PWT_32bit, PWT_LengthDelimited);
		ProtoMember(Fixed32, PFT_Fixed32, PWT_32bit, PWT_LengthDelimited);
		ProtoMember(Int64, PFT_Int64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SInt64, PFT_SInt64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(UInt64, PFT_UInt64, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(SFixed64, PFT_SFixed64, PWT_64bit, PWT_LengthDelimited);
		ProtoMember(Fixed64, PFT_Fixed64, PWT_64bit, PWT_LengthDelimited);
		ProtoMember(Enum, PFT_Enum, PWT_Varint, PWT_LengthDelimited);
		ProtoMember(Float, PFT_Float, PWT_32bit, PWT_LengthDelimited);
		ProtoMember(Double, PFT_Double, PWT_64bit, PWT_LengthDelimited);
		ProtoMember(String, PFT_String, PWT_LengthDelimited, PWT_LengthDelimited);
		ProtoMember(Message, PFT_Message, PWT_LengthDelimited, PWT_LengthDelimited);

	}
}

#endif