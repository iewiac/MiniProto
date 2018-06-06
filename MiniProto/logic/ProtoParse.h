#ifndef __ProtoParse_h__
#define __ProtoParse_h__

#include <string>
#include <vector>
#include <map>
#include <stack>

#include "FileData.h"

#include "StringTool.h"

enum ProtoType
{
	PT_unknown = 0,
	PT_message,
	PT_enum,
};

enum ProtoMemberModifier
{
	PMM_unknown = 0,
	PMM_singular,
	PMM_array,
	PMM_set,
	PMM_hashset,
	PMM_map,
	PMM_hashmap,
};

enum ProtoMemberType
{
	PMT_unknown = 0,
	PMT_bool,
	PMT_int32,
	PMT_sint32,
	PMT_uint32,
	PMT_sfixed32,
	PMT_fixed32,
	PMT_int64,
	PMT_sint64,
	PMT_uint64,
	PMT_sfixed64,
	PMT_fixed64,
	PMT_enum,
	PMT_float,
	PMT_double,
	PMT_string,
	PMT_message,
};

class MessageMember
{
public:
	MessageMember()
	{
		Init();
	}
	MessageMember(const MessageMember &other)
	{
		*this = other;
	}
	MessageMember& operator = (const MessageMember &other)
	{
		m_Modifier = other.m_Modifier;
		m_KeyType = other.m_KeyType;
		m_ValueType = other.m_ValueType;
		m_PackageName = other.m_PackageName;
		m_FileClassName = other.m_FileClassName;
		m_TypeName = other.m_TypeName;
		m_Name = other.m_Name;
		m_Tag = other.m_Tag;
		m_PackedTrue = other.m_PackedTrue;

		return *this;
	}

	void Init()
	{
		m_Modifier = PMM_unknown;
		m_KeyType = PMT_unknown;
		m_ValueType = PMT_unknown;
		m_PackageName = "";
		m_FileClassName = "";
		m_TypeName = "";
		m_Name = "";
		m_Tag = 0;
		m_PackedTrue = false;
	}

	// 字段类型对应处理函数前缀，cpp/cs/java的中的wireType，cpp/cs/java数据类型，cpp/cs/java编解码函数重载时区分的不同数据类型
private:
	std::string FunPrefix(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "Bool";		break;
			case PMT_int32:		type = "Int32";		break;
			case PMT_sint32:	type = "SInt32";	break;
			case PMT_uint32:	type = "UInt32";	break;
			case PMT_int64:		type = "Int64";		break;
			case PMT_sint64:	type = "SInt64";	break;
			case PMT_uint64:	type = "UInt64";	break;
			case PMT_enum:		type = "Enum";		break;
			case PMT_sfixed32:	type = "SFixed32";	break;
			case PMT_fixed32:	type = "Fixed32";	break;
			case PMT_float:		type = "Float";		break;
			case PMT_sfixed64:	type = "SFixed64";	break;
			case PMT_fixed64:	type = "Fixed64";	break;
			case PMT_double:	type = "Double";	break;
			case PMT_string:	type = "String";	break;
			case PMT_message:	type = "Message";	break;
			default: break;
		}
		return type;
	}
	std::string CppWireType(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_int32:		type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_sint32:	type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_uint32:	type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_int64:		type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_sint64:	type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_uint64:	type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_enum:		type = "common::miniproto::ProtoWireType::PWT_Varint";				break;
			case PMT_sfixed32:	type = "common::miniproto::ProtoWireType::PWT_32bit";				break;
			case PMT_fixed32:	type = "common::miniproto::ProtoWireType::PWT_32bit";				break;
			case PMT_float:		type = "common::miniproto::ProtoWireType::PWT_32bit";				break;
			case PMT_sfixed64:	type = "common::miniproto::ProtoWireType::PWT_64bit";				break;
			case PMT_fixed64:	type = "common::miniproto::ProtoWireType::PWT_64bit";				break;
			case PMT_double:	type = "common::miniproto::ProtoWireType::PWT_64bit";				break;
			case PMT_string:	type = "common::miniproto::ProtoWireType::PWT_LengthDelimited";		break;
			case PMT_message:	type = "common::miniproto::ProtoWireType::PWT_LengthDelimited";		break;
			default:break;
		}
		return type;
	}
	std::string CppType(ProtoMemberType memberType) const
	{
		std::string typeStr = "";
		switch (memberType)
		{
			case PMT_bool:		typeStr = "bool";							break;
			case PMT_int32:		typeStr = "common::miniproto::int32";		break;
			case PMT_sint32:	typeStr = "common::miniproto::int32";		break;
			case PMT_uint32:	typeStr = "common::miniproto::uint32";		break;
			case PMT_int64:		typeStr = "common::miniproto::int64";		break;
			case PMT_sint64:	typeStr = "common::miniproto::int64";		break;
			case PMT_uint64:	typeStr = "common::miniproto::uint64";		break;
			case PMT_enum:		typeStr = CppFullName();					break;
			case PMT_sfixed32:	typeStr = "common::miniproto::int32";		break;
			case PMT_fixed32:	typeStr = "common::miniproto::uint32";		break;
			case PMT_float:		typeStr = "float";							break;
			case PMT_sfixed64:	typeStr = "common::miniproto::int64";		break;
			case PMT_fixed64:	typeStr = "common::miniproto::uint64";		break;
			case PMT_double:	typeStr = "double";							break;
			case PMT_string:	typeStr = "common::miniproto::String<A>";	break;
			case PMT_message:	typeStr = CppFullName() + "<A>";			break;
			default:break;
		}
		return typeStr;
	}
	std::string CppTypeObj(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "common::miniproto::CommonProtoBool";		break;
			case PMT_int32:		type = "common::miniproto::CommonProtoInt32";		break;
			case PMT_sint32:	type = "common::miniproto::CommonProtoSInt32";		break;
			case PMT_uint32:	type = "common::miniproto::CommonProtoUInt32";		break;
			case PMT_int64:		type = "common::miniproto::CommonProtoInt64";		break;
			case PMT_sint64:	type = "common::miniproto::CommonProtoSInt64";		break;
			case PMT_uint64:	type = "common::miniproto::CommonProtoUInt64";		break;
			case PMT_enum:		type = "common::miniproto::CommonProtoEnum";		break;
			case PMT_sfixed32:	type = "common::miniproto::CommonProtoSFixed32";	break;
			case PMT_fixed32:	type = "common::miniproto::CommonProtoFixed32";		break;
			case PMT_float:		type = "common::miniproto::CommonProtoFloat";		break;
			case PMT_sfixed64:	type = "common::miniproto::CommonProtoSFixed64";	break;
			case PMT_fixed64:	type = "common::miniproto::CommonProtoFixed64";		break;
			case PMT_double:	type = "common::miniproto::CommonProtoDouble";		break;
			case PMT_string:	type = "common::miniproto::CommonProtoString";		break;
			case PMT_message:	type = "common::miniproto::CommonProtoMessage";		break;
			default: break;
		}
		return type;
	}
	std::string CsWireType(ProtoMemberType memberType) const
	{
		return common::tool::StringTool::ReplaceReg(CppWireType(memberType), "::", ".");
	}
	std::string CsType(ProtoMemberType memberType) const
	{
		std::string typeStr = "";
		switch (memberType)
		{
			case PMT_bool:		typeStr = "bool";		break;
			case PMT_int32:		typeStr = "int";		break;
			case PMT_sint32:	typeStr = "int";		break;
			case PMT_uint32:	typeStr = "uint";		break;
			case PMT_int64:		typeStr = "long";		break;
			case PMT_sint64:	typeStr = "long";		break;
			case PMT_uint64:	typeStr = "ulong";		break;
			case PMT_enum:		typeStr = CsFullName(); break;
			case PMT_sfixed32:	typeStr = "int";		break;
			case PMT_fixed32:	typeStr = "uint";		break;
			case PMT_float:		typeStr = "float";		break;
			case PMT_sfixed64:	typeStr = "long";		break;
			case PMT_fixed64:	typeStr = "ulong";		break;
			case PMT_double:	typeStr = "double";		break;
			case PMT_string:	typeStr = "string";		break;
			case PMT_message:	typeStr = CsFullName(); break;
			default: break;
		}
		return typeStr;
	}
	std::string CsTypeObj(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "common.miniproto.ProtoDefine.CommonProtoBool";		break;
			case PMT_int32:		type = "common.miniproto.ProtoDefine.CommonProtoInt32";		break;
			case PMT_sint32:	type = "common.miniproto.ProtoDefine.CommonProtoSInt32";	break;
			case PMT_uint32:	type = "common.miniproto.ProtoDefine.CommonProtoUInt32";	break;
			case PMT_int64:		type = "common.miniproto.ProtoDefine.CommonProtoInt64";		break;
			case PMT_sint64:	type = "common.miniproto.ProtoDefine.CommonProtoSInt64";	break;
			case PMT_uint64:	type = "common.miniproto.ProtoDefine.CommonProtoUInt64";	break;
			case PMT_enum:		type = "common.miniproto.ProtoDefine.CommonProtoEnum";		break;
			case PMT_sfixed32:	type = "common.miniproto.ProtoDefine.CommonProtoSFixed32";	break;
			case PMT_fixed32:	type = "common.miniproto.ProtoDefine.CommonProtoFixed32";	break;
			case PMT_float:		type = "common.miniproto.ProtoDefine.CommonProtoFloat";		break;
			case PMT_sfixed64:	type = "common.miniproto.ProtoDefine.CommonProtoSFixed64";	break;
			case PMT_fixed64:	type = "common.miniproto.ProtoDefine.CommonProtoFixed64";	break;
			case PMT_double:	type = "common.miniproto.ProtoDefine.CommonProtoDouble";	break;
			case PMT_string:	type = "common.miniproto.ProtoDefine.CommonProtoString";	break;
			case PMT_message:	type = "common.miniproto.ProtoDefine.CommonProtoMessage";	break;
		}
		return type;
	}
	std::string JavaWireType(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_int32:		type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_sint32:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_uint32:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_int64:		type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_sint64:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_uint64:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_enum:		type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint";				break;
			case PMT_sfixed32:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit";				break;
			case PMT_fixed32:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit";				break;
			case PMT_float:		type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit";				break;
			case PMT_sfixed64:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit";				break;
			case PMT_fixed64:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit";				break;
			case PMT_double:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit";				break;
			case PMT_string:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited";	break;
			case PMT_message:	type = "common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited";	break;
			default:break;
		}
		return type;
	}
	std::string JavaType(ProtoMemberType memberType) const
	{
		std::string typeStr = "";
		switch (memberType)
		{
			case PMT_bool:		typeStr = "boolean";		break;
			case PMT_int32:		typeStr = "int";			break;
			case PMT_sint32:	typeStr = "int";			break;
			case PMT_uint32:	typeStr = "int";			break;
			case PMT_int64:		typeStr = "long";			break;
			case PMT_sint64:	typeStr = "long";			break;
			case PMT_uint64:	typeStr = "long";			break;
			case PMT_enum:		typeStr = "int";			break;
			case PMT_sfixed32:	typeStr = "int";			break;
			case PMT_fixed32:	typeStr = "int";			break;
			case PMT_float:		typeStr = "float";			break;
			case PMT_sfixed64:	typeStr = "long";			break;
			case PMT_fixed64:	typeStr = "long";			break;
			case PMT_double:	typeStr = "double";			break;
			case PMT_string:	typeStr = "String";			break;
			case PMT_message:	typeStr = JavaFullName();	break;
			default: break;
		}
		return typeStr;
	}
	std::string JavaCollectionType(ProtoMemberType memberType) const
	{
		std::string typeStr = "";
		switch (memberType)
		{
			case PMT_bool:		typeStr = "Boolean";		break;
			case PMT_int32:		typeStr = "Integer";		break;
			case PMT_sint32:	typeStr = "Integer";		break;
			case PMT_uint32:	typeStr = "Integer";		break;
			case PMT_int64:		typeStr = "Long";			break;
			case PMT_sint64:	typeStr = "Long";			break;
			case PMT_uint64:	typeStr = "Long";			break;
			case PMT_enum:		typeStr = "Integer";		break;
			case PMT_sfixed32:	typeStr = "Integer";		break;
			case PMT_fixed32:	typeStr = "Integer";		break;
			case PMT_float:		typeStr = "Float";			break;
			case PMT_sfixed64:	typeStr = "Long";			break;
			case PMT_fixed64:	typeStr = "Long";			break;
			case PMT_double:	typeStr = "Double";			break;
			case PMT_string:	typeStr = "String";			break;
			case PMT_message:	typeStr = JavaFullName();	break;
			default: break;
		}
		return typeStr;
	}
	std::string JavaTypeObj(ProtoMemberType memberType) const
	{
		std::string type = "";
		switch (memberType)
		{
			case PMT_bool:		type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool";		break;
			case PMT_int32:		type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32";		break;
			case PMT_sint32:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_SInt32";	break;
			case PMT_uint32:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_UInt32";	break;
			case PMT_int64:		type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64";		break;
			case PMT_sint64:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_SInt64";	break;
			case PMT_uint64:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_UInt64";	break;
			case PMT_enum:		type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum";		break;
			case PMT_sfixed32:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32";	break;
			case PMT_fixed32:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32";	break;
			case PMT_float:		type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float";		break;
			case PMT_sfixed64:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64";	break;
			case PMT_fixed64:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64";	break;
			case PMT_double:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double";	break;
			case PMT_string:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_String";	break;
			case PMT_message:	type = "common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message";	break;
		}
		return type;
	}

	// key/value 对应处理函数前缀
public:
	std::string KeyFunPrefix() const
	{
		return FunPrefix(m_KeyType);
	}
	std::string ValueFunPrefix() const
	{
		return FunPrefix(m_ValueType);
	}

	// 将合法的message名/enum名，加上包名，变成C++中的：
	// 完整名
	// 键类型/值类型/容器类型字段对应的ProtoWireType
	// 键类型/值类型/容器类型字段对应的C++类型
	// 键类型/值类型字段对应的C++中自定义的ProtoType对象
public:
	std::string CppFullName() const
	{
		return common::tool::StringTool::ReplaceAll(m_PackageName, ".", "::") + "::" + m_TypeName;
	}
	std::string CppKeyWireType() const
	{
		return CppWireType(m_KeyType);
	}
	std::string CppValueWireType() const
	{
		return CppWireType(m_ValueType);
	}
	std::string CppCollectionWireType() const
	{
		return "common::miniproto::ProtoWireType::PWT_LengthDelimited";
	}
	std::string CppKeyType() const
	{
		return CppType(m_KeyType);
	}
	std::string CppValueType() const
	{
		return CppType(m_ValueType);
	}
	std::string CppArrayType() const
	{
		return "common::miniproto::Array<" + CppValueType() + ", A>";
	}
	std::string CppSetType() const
	{
		return "common::miniproto::Set<" + CppValueType() + ", A>";
	}
	std::string CppHashSetType() const
	{
		return "common::miniproto::HashSet<" + CppValueType() + ", A>";
	}
	std::string CppMapType() const
	{
		return "common::miniproto::Map<" + CppKeyType() + ", " + CppValueType() + ", A>";
	}
	std::string CppHashMapType() const
	{
		return "common::miniproto::HashMap<" + CppKeyType() + ", " + CppValueType() + ", A>";
	}
	std::string CppKeyTypeObj() const
	{
		return CppTypeObj(m_KeyType);
	}
	std::string CppValueTypeObj() const
	{
		return CppTypeObj(m_ValueType);
	}

	// 将合法的message名/enum名，加上包名，变成C#中的：
	// 完整名
	// 键类型/值类型/容器类型字段对应的ProtoWireType
	// 键类型/值类型/容器类型字段对应的C#类型
	// 键类型/值类型字段对应的C#中自定义的ProtoType对象
public:
	std::string CsFullName() const
	{
		return m_PackageName + "." + m_TypeName;
	}
	std::string CsKeyWireType() const
	{
		return CsWireType(m_KeyType);
	}
	std::string CsValueWireType() const
	{
		return CsWireType(m_ValueType);
	}
	std::string CsCollectionWireType() const
	{
		return "common.miniproto.ProtoWireType.PWT_LengthDelimited";
	}
	std::string CsKeyType() const
	{
		return CsType(m_KeyType);
	}
	std::string CsValueType() const
	{
		return CsType(m_ValueType);
	}
	std::string CsArrayType() const
	{
		return "List<" + CsValueType() + ">";
	}
	std::string CsSetType() const
	{
		return "SortedSet<" + CsValueType() + ">";
	}
	std::string CsHashSetType() const
	{
		return "HashSet<" + CsValueType() + ">";
	}
	std::string CsMapType() const
	{
		return "Dictionary<" + CsKeyType() + ", " + CsValueType() + ">";
	}
	std::string CsHashMapType() const
	{
		return "Dictionary<" + CsKeyType() + ", " + CsValueType() + ">";
	}
	std::string CsKeyTypeObj() const
	{
		return CsTypeObj(m_KeyType);
	}
	std::string CsValueTypeObj() const
	{
		return CsTypeObj(m_ValueType);
	}

	// 将合法的message名/enum名，加上包名，加上文件类名，变成Java中的：
	// 完整名
	// 键类型/值类型/容器类型字段对应的ProtoWireType
	// 键类型/值类型/容器类型字段对应的Java类型
	// 键类型/值类型字段对应的Java中自定义的ProtoType对象
public:
	std::string JavaFullName() const
	{
		return m_PackageName + "." + m_FileClassName + "." + m_TypeName;
	}
	std::string JavaKeyWireType() const
	{
		return JavaWireType(m_KeyType);
	}
	std::string JavaValueWireType() const
	{
		return JavaWireType(m_ValueType);
	}
	std::string JavaCollectionWireType() const
	{
		return "common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited";
	}
	std::string JavaValueType() const
	{
		return JavaType(m_ValueType);
	}
	std::string JavaCollectionKeyType() const
	{
		return JavaCollectionType(m_KeyType);
	}
	std::string JavaCollectionValueType() const
	{
		return JavaCollectionType(m_ValueType);
	}
	std::string JavaArrayType() const
	{
		return "java.util.ArrayList<" + JavaCollectionValueType() + ">";
	}
	std::string JavaArrayIteratorType() const
	{
		return "java.util.Iterator<" + JavaCollectionValueType() + ">";
	}
	std::string JavaSetType() const
	{
		return "java.util.TreeSet<" + JavaCollectionValueType() + ">";
	}
	std::string JavaHashSetType() const
	{
		return "java.util.HashSet<" + JavaCollectionValueType() + ">";
	}
	std::string JavaSetIteratorType() const
	{
		return "java.util.Iterator<" + JavaCollectionValueType() + ">";
	}
	std::string JavaMapType() const
	{
		return "java.util.TreeMap<" + JavaCollectionKeyType() + ", " + JavaCollectionValueType() + ">";
	}
	std::string JavaHashMapType() const
	{
		return "java.util.HashMap<" + JavaCollectionKeyType() + ", " + JavaCollectionValueType() + ">";
	}
	std::string JavaMapEntryType() const
	{
		return "java.util.Map.Entry<" + JavaCollectionKeyType() + ", " + JavaCollectionValueType() + ">";
	}
	std::string JavaMapIteratorType() const
	{
		return "java.util.Iterator<" + JavaMapEntryType() + ">";
	}
	std::string JavaKeyFieldType() const
	{
		return JavaTypeObj(m_KeyType);
	}
	std::string JavaValueFieldType() const
	{
		return JavaTypeObj(m_ValueType);
	}

public:
	ProtoMemberModifier m_Modifier;	// proto结构字段类型（单一字段/array/set/map）

	ProtoMemberType m_KeyType;		// proto结构字段数据类型标识（数字/字符串）(用于map的键类型)

	ProtoMemberType m_ValueType;	// proto结构字段数据类型标识（数字/字符串/枚举/proto结构）（用于单一字段，array/set/map的值类型）
	std::string m_PackageName;		// proto结构字段数据类型名称字符串（自定义proto结构对应包名）（用于单一字段，array/map的值类型）
	std::string m_FileClassName;	// proto结构字段数据类型名称字符串（自定义proto结构对应Java文件类名）（用于单一字段，array/map的值类型）
	std::string m_TypeName;			// proto结构字段数据类型名称字符串（自定义proto结构名）（用于单一字段，array/map的值类型）

	std::string m_Name;				// proto结构字段名称

	unsigned int m_Tag;				// proto结构字段序号

	bool m_PackedTrue;				// proto结构字段是否压缩的标记（主要用于array/set/map字段在proto2版本中的编解码）
};

class EnumMember
{
public:
	EnumMember()
	{
		Init();
	}
	EnumMember(const EnumMember &other)
	{
		*this = other;
	}
	EnumMember& operator = (const EnumMember &other)
	{
		m_Name = other.m_Name;
		m_Value = other.m_Value;

		return *this;
	}

	void Init()
	{
		m_Name = "";
		m_Value = 0;
	}

	std::string m_Name;				// proto枚举字段名称
	unsigned int m_Value;			// proto枚举字段值
};

class ProtoStruct
{
public:
	ProtoStruct()
	{
		Init();
	}
	ProtoStruct(const ProtoStruct &other)
	{
		*this = other;
	}
	ProtoStruct& operator = (const ProtoStruct &other)
	{
		m_Type = other.m_Type;
		m_Name = other.m_Name;
		m_PackageName = other.m_PackageName;
		m_FileClassName = other.m_FileClassName;

		m_EnumMembers = other.m_EnumMembers;
		m_EnumMemberOrder = other.m_EnumMemberOrder;
		m_EnumMemberValue = other.m_EnumMemberValue;
		m_EnumMemberIndex = other.m_EnumMemberIndex;

		m_MessageMembers = other.m_MessageMembers;
		m_MessageMemberOrder = other.m_MessageMemberOrder;
		m_MessageMemberIndex = other.m_MessageMemberIndex;

		return *this;
	}

	void Init()
	{
		m_Type = PT_unknown;
		m_Name = "";
		m_PackageName = "";
		m_FileClassName = "";

		m_EnumMembers.clear();
		m_EnumMemberOrder.clear();
		m_EnumMemberValue.clear();
		m_EnumMemberIndex = 0;

		m_MessageMembers.clear();
		m_MessageMemberOrder.clear();
		m_MessageMemberIndex = 0;
	}

	ProtoType m_Type;											// 结构是类/枚举的标识
	std::string m_PackageName;									// 类/枚举名称对应包名
	std::string m_FileClassName;								// 类/枚举名称对应Java文件类名
	std::string m_Name;											// 类/枚举名称

	std::map<std::string, EnumMember> m_EnumMembers;			// 枚举字段列表（枚举字段名作为唯一标识）
	std::map<unsigned int, std::string> m_EnumMemberOrder;		// 枚举字段生成顺序序号
	std::map<unsigned int, std::string> m_EnumMemberValue;		// 枚举字段值<->键映射表，相同值的仅保留最先出现的那一项
	unsigned int m_EnumMemberIndex;

	std::map<unsigned int, MessageMember> m_MessageMembers;		// 结构字段列表（结构字段tag作为唯一标识）
	std::map<unsigned int, unsigned int> m_MessageMemberOrder;	// 结构字段生成顺序序号
	unsigned int m_MessageMemberIndex;
};

class ProtoFile
{
public:
	ProtoFile()
	{
		Init();
	}
	ProtoFile(const ProtoFile &other)
	{
		*this = other;
	}
	ProtoFile& operator = (const ProtoFile &other)
	{
		m_FileName = other.m_FileName;
		m_Package = other.m_Package;
		m_Includes = other.m_Includes;
		m_Structs = other.m_Structs;
		m_StructOrder = other.m_StructOrder;
		m_StructIndex = other.m_StructIndex;

		return *this;
	}

	void Init()
	{
		m_FileName = "";
		m_Package = "";
		m_Includes.clear();
		m_Structs.clear();
		m_StructOrder.clear();
		m_StructIndex = 0;
	}

	std::string m_FileName;								// proto文件名（不带扩展名）
	std::string m_Package;								// proto包名xxx.xxx.xxx
	std::vector<std::string> m_Includes;				// proto文件引用的外部文件名（不带扩展名）
	std::map<std::string, ProtoStruct> m_Structs;		// proto结构列表
	std::map<unsigned int, std::string> m_StructOrder;	// proto结构从文本中读取的顺序序号（生成代码时按该顺序生成代码）
	unsigned int m_StructIndex;
};

class ProtoParse
{
public:
	ProtoParse();
	~ProtoParse();

	void ParseFile(const char* fullPathName);

private:
	void ParseProto(const char* expr);

	void ParseProtoPackage(const char* start, const char* end);
	void ParseProtoImport(const char* start, const char* end);
	void ParseProtoMessage(const char* start, const char* end);
	void ParseProtoMessageMember(const char* start, const char* end);
	void ParseProtoEnum(const char* start, const char* end);
	void ParseProtoUnknown(const char* start, const char* end);

	void PushPackageName(const char* start, const char* end);

	void PushImportName(const char* start, const char* end);

	void PushMessageStart(const char* start, const char* end);
	void PushMessageHashMapMemberType(const char* start, const char* end);
	void PushMessageMapMemberType(const char* start, const char* end);
	void PushMessageHashSetMemberType(const char* start, const char* end);
	void PushMessageSetMemberType(const char* start, const char* end);
	void PushMessageArrayMemberType(const char* start, const char* end);
	void PushMessageSingularMemberType(const char* start, const char* end);
	void ProcessKeyType(const std::string& type);
	void ProcessValueType(const std::string& type);
	void PushMessageMemberName(const char* start, const char* end);
	void PushMessageMemberTag(unsigned int value);
	void PushMessageMemberMoreInfo(const char* start, const char* end);
	void PushMessageMemberEnd();
	void PushMessageEnd();

	void PushEnumStart(const char* start, const char* end);
	void PushEnumMemberName(const char* start, const char* end);
	void PushEnumMemberValue(const char* start, const char* end);
	void PushEnumMemberValueNull();
	void PushEnumMemberEnd();
	void PushEnumEnd();

private:
	// 匹配数字  
	void PushNum(unsigned int v);
	// 匹配枚举名  
	void PushEnum(const char* start, const char* end);
	// 匹配+,-,*,/,%,<<,>>,|,&  
	void Add();
	void Sub();
	void Mul();
	void Div();
	void Mod();
	void Shl();
	void Shr();
	void Or();
	void And();

private:
	// 根据字段类型名称获取包名（如果有的话）
	static std::string ProtoStructFullName2PackageName(const std::string& fullName);
	// 根据字段类型名称获取对应message名/enum名
	static std::string ProtoStructFullName2TypeName(const std::string& fullName);

	// 根据枚举项名称获取包名（如果有的话）
	static std::string ProtoEnumFullName2PackageName(const std::string& fullName);
	// 根据枚举项名称获取对应枚举名
	static std::string ProtoEnumFullName2TypeName(const std::string& fullName);
	// 根据枚举项名称获取对应枚举项名
	static std::string ProtoEnumFullName2EntryName(const std::string& fullName);

public:
	std::map<std::string, ProtoFile> m_Files;		// proto文件信息列表

private:
	common::tool::FileData m_FileData;				// proto文件内容

	ProtoFile m_TempFile;							// 解析时，临时proto结构对象
	ProtoStruct m_TempStruct;
	EnumMember m_TempEnumMember;
	MessageMember m_TempMessageMember;

	std::stack<unsigned int> m_TempEnumValues;			// 用于计算表达式值的栈  
};

#endif