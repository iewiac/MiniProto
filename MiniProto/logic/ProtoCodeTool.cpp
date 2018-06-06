#include "ProtoCodeTool.h"

#include "StringTool.h"

using namespace common::tool;

#include "ProtoParse.h"

// array/set/map类型数据的编码方案
ProtoCodeVersion g_ProtoVersion = PRV_Proto3;

void ProtoCodeTool::ProtoFile2Head(const ProtoFile& protoFile, std::ofstream& of)
{
	ProtoFile2Head_PragmaOnce(protoFile, of);
}
void ProtoCodeTool::ProtoFile2Head_PragmaOnce(const ProtoFile& protoFile, std::ofstream& of)
{
	std::string def = StringTool::ReplaceAll(protoFile.m_FileName, ".", "_");
	of << "#ifndef __" << def << "__\n";
	of << "#define __" << def << "__\n\n";

	ProtoFile2Head_Include(protoFile, of);

	ProtoFile2Head_NameSpace(protoFile, of);

	of << "#endif\n";
}
void ProtoCodeTool::ProtoFile2Head_Include(const ProtoFile& protoFile, std::ofstream& of)
{
	of << "#include \"ProtoBase.h\"\n";
	of << "#include \"ProtoBuf.h\"\n";
	of << "#include \"ProtoTool.h\"\n";
	of << "#include \"ProtoBitMap.h\"\n\n";

	for (size_t i = 0; i < protoFile.m_Includes.size(); i++)
	{
		of << "#include \"" << protoFile.m_Includes[i] << ".h\"\n";
	}
	if (protoFile.m_Includes.size() > 0)
	{
		of << "\n";
	}
}
void ProtoCodeTool::ProtoFile2Head_NameSpace(const ProtoFile& protoFile, std::ofstream& of)
{
	std::vector<std::string> packages;
	StringTool::SplitStr2List(protoFile.m_Package, ".", packages);
	for (size_t i = 0; i < packages.size(); i++)
	{
		of << "namespace " << packages[i] << " {\n";
	}
	if (packages.size() > 0)
	{
		of << "\n";
	}

	std::map<unsigned int, std::string>::const_iterator itStructOrder = protoFile.m_StructOrder.begin();
	while (itStructOrder != protoFile.m_StructOrder.end())
	{
		std::map<std::string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(itStructOrder->second);
		if (itStruct != protoFile.m_Structs.end())
		{
			const ProtoStruct& protoStruct = itStruct->second;
			switch (protoStruct.m_Type)
			{
				case PT_message:
				{
					ProtoMessage2Head_Declarations(protoStruct, of);
					ProtoMessage2Head_Implementations(protoStruct, of);
				}
				break;
				case PT_enum:
				{
					ProtoEnum2Head(protoStruct, of);
				}
				break;
				default:
				break;
			}
		}

		itStructOrder++;
	}

	for (size_t i = packages.size(); i > 0; i--)
	{
		of << "} //namespace " << packages[i - 1] << "\n";
	}
	if (packages.size() > 0)
	{
		of << "\n";
	}
}
void ProtoCodeTool::ProtoEnum2Head(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "enum " << protoStruct.m_Name << "\n";
	of << "{\n";
	std::map<unsigned int, std::string>::const_iterator itEnumMemberOrder = protoStruct.m_EnumMemberOrder.begin();
	while (itEnumMemberOrder != protoStruct.m_EnumMemberOrder.end())
	{
		std::map<std::string, EnumMember>::const_iterator itEnumMember = protoStruct.m_EnumMembers.find(itEnumMemberOrder->second);
		if (itEnumMember != protoStruct.m_EnumMembers.end())
		{
			const EnumMember& enumMember = itEnumMember->second;

			of << "\t" << enumMember.m_Name << " = " << enumMember.m_Value << ",\n";
		}

		itEnumMemberOrder++;
	}
	of << "};\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_Declarations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A = std::allocator>\n";
	of << "class " << protoStruct.m_Name << " : public common::miniproto::ProtoBase\n";
	of << "{\n";
	of << "public:\n";
	of << "\t" << protoStruct.m_Name << "();\n";
	of << "\t" << protoStruct.m_Name << "(const " << protoStruct.m_Name << "<A>& other);\n";
	of << "\t" << protoStruct.m_Name << "(" << protoStruct.m_Name << "<A>&& other);\n";
	of << "\tvirtual ~" << protoStruct.m_Name << "();\n";
	of << "\t" << protoStruct.m_Name << "<A>& operator = (const " << protoStruct.m_Name << "<A>& other);\n";
	of << "\t" << protoStruct.m_Name << "<A>& operator = (" << protoStruct.m_Name << "<A>&& other);\n\n";
	of << "public:\n";
	of << "\tvirtual common::miniproto::byte_size ByteSize() const;\n";
	of << "\tvirtual common::miniproto::byte_size Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const;\n";
	of << "\tvirtual common::miniproto::byte_size Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size);\n";
	of << "\tvirtual common::miniproto::byte_size Code(std::ostream& buf, common::miniproto::byte_size size) const;\n";
	of << "\tvirtual common::miniproto::byte_size Decode(std::istream& buf, common::miniproto::byte_size size);\n\n";
	of << "public:\n";
	of << "\tvoid Clear();\n";
	of << "\tvoid Release();\n\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		ProtoMessage2Head_MemberDeclarations(messageMember, of);
		of << "\n";

		itMessageMember++;
	}
	of << "private:\n";
	of << "\tcommon::miniproto::ProtoBitMap<" << protoStruct.m_MessageMembers.size() << "> m_bits;\n";
	of << "};\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_MemberDeclarations(const MessageMember& messageMember, std::ofstream& of)
{
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "public:\n";
			of << "\tvoid set_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid set_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value);\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "\tvoid set_" << messageMember.m_Name << "(const char* value);\n";
				of << "\tvoid set_" << messageMember.m_Name << "(const char* value, size_t size);\n";
			}
			of << "public:\n";
			of << "\tconst " << messageMember.CppValueType() << "& " << messageMember.m_Name << "() const;\n";
			of << "\t" << messageMember.CppValueType() << "& " << messageMember.m_Name << "();\n";
			of << "public:\n";
			of << "\tvoid clear_" << messageMember.m_Name << "();\n";
			of << "\tvoid release_" << messageMember.m_Name << "();\n";
			of << "public:\n";
			of << "\tbool has_" << messageMember.m_Name << "() const;\n";
			of << "private:\n";
			of << "\tvoid set_has_" << messageMember.m_Name << "();\n";
			of << "\tvoid clear_has_" << messageMember.m_Name << "();\n";
			of << "private:\n";
			of << "\t" << messageMember.CppValueType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_array:
		{
			of << "public:\n";
			of << "\tvoid reserve_" << messageMember.m_Name << "(size_t size);\n";
			of << "\tvoid set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid set_" << messageMember.m_Name << "(common::miniproto::uint32 index, " << messageMember.CppValueType() << "&& value);\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "\tvoid set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const char* value);\n";
				of << "\tvoid set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const char* value, size_t size);\n";
			}
			of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid add_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value);\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "\tvoid add_" << messageMember.m_Name << "(const char* value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const char* value, size_t size);\n";
			}
			if (PMT_string == messageMember.m_ValueType || PMT_message == messageMember.m_ValueType)
			{
				of << "\t" << messageMember.CppValueType() << "* add_" << messageMember.m_Name << "();\n";
			}
			of << "public:\n";
			of << "\tconst " << messageMember.CppArrayType() << "& " << messageMember.m_Name << "() const;\n";
			of << "\t" << messageMember.CppArrayType() << "& " << messageMember.m_Name << "();\n";
			of << "\tsize_t " << messageMember.m_Name << "_size() const;\n";
			of << "\tconst " << messageMember.CppValueType() << "& " << messageMember.m_Name << "(common::miniproto::uint32 index) const;\n";
			of << "public:\n";
			of << "\tvoid clear_" << messageMember.m_Name << "();\n";
			of << "\tvoid release_" << messageMember.m_Name << "();\n";
			of << "public:\n";
			of << "\tbool has_" << messageMember.m_Name << "() const;\n";
			of << "private:\n";
			of << "\tvoid set_has_" << messageMember.m_Name << "();\n";
			of << "\tvoid clear_has_" << messageMember.m_Name << "();\n";
			of << "private:\n";
			of << "\t" << messageMember.CppArrayType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			of << "public:\n";
			of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid add_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value);\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "\tvoid add_" << messageMember.m_Name << "(const char* value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const char* value, size_t size);\n";
			}
			of << "\tvoid remove_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value);\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "\tvoid remove_" << messageMember.m_Name << "(const char* value);\n";
				of << "\tvoid remove_" << messageMember.m_Name << "(const char* value, size_t size);\n";
			}
			of << "public:\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\tconst " << messageMember.CppSetType() << "& " << messageMember.m_Name << "() const;\n";
				of << "\t" << messageMember.CppSetType() << "& " << messageMember.m_Name << "();\n";
			}
			else
			{
				of << "\tconst " << messageMember.CppHashSetType() << "& " << messageMember.m_Name << "() const;\n";
				of << "\t" << messageMember.CppHashSetType() << "& " << messageMember.m_Name << "();\n";
			}
			of << "\tsize_t " << messageMember.m_Name << "_size() const;\n";
			of << "\tsize_t " << messageMember.m_Name << "_count(const " << messageMember.CppValueType() << "& value) const;\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\tcommon::miniproto::SetConstIt<" << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_begin() const;\n";
				of << "\tcommon::miniproto::SetConstIt<" << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_end() const;\n";
			}
			else
			{
				of << "\tcommon::miniproto::HashSetConstIt<" << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_begin() const;\n";
				of << "\tcommon::miniproto::HashSetConstIt<" << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_end() const;\n";
			}
			of << "public:\n";
			of << "\tvoid clear_" << messageMember.m_Name << "();\n";
			of << "\tvoid release_" << messageMember.m_Name << "();\n";
			of << "public:\n";
			of << "\tbool has_" << messageMember.m_Name << "() const;\n";
			of << "private:\n";
			of << "\tvoid set_has_" << messageMember.m_Name << "();\n";
			of << "\tvoid clear_has_" << messageMember.m_Name << "();\n";
			of << "private:\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\t" << messageMember.CppSetType() << " " << messageMember.m_Name << "_;\n";
			}
			else
			{
				of << "\t" << messageMember.CppHashSetType() << " " << messageMember.m_Name << "_;\n";
			}
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			of << "public:\n";
			of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, const " << messageMember.CppValueType() << "& value);\n";
			of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, " << messageMember.CppValueType() << "&& value);\n";
			of << "\tvoid add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, " << messageMember.CppValueType() << "&& value);\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "\tvoid add_" << messageMember.m_Name << "(const char* key,                 const " << messageMember.CppValueType() << "& value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const char* key,                       " << messageMember.CppValueType() << "&& value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const char* key, size_t keySize, const " << messageMember.CppValueType() << "& value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const char* key, size_t keySize,       " << messageMember.CppValueType() << "&& value);\n";
			}
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "public:\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, const char* value);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(      " << messageMember.CppKeyType() << "&& key, const char* value);\n";
				if (PMT_string == messageMember.m_KeyType)
				{
					of << "\tvoid add_" << messageMember.m_Name << "(const char* key,                 const char* value);\n";
					of << "\tvoid add_" << messageMember.m_Name << "(const char* key, size_t keySize, const char* value);\n";
				}
				of << "public:\n";
				of << "\tvoid add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key,  const char* value, size_t valueSize);\n";
				of << "\tvoid add_" << messageMember.m_Name << "(      " << messageMember.CppKeyType() << "&& key, const char* value, size_t valueSize);\n";
				if (PMT_string == messageMember.m_KeyType)
				{
					of << "\tvoid add_" << messageMember.m_Name << "(const char* key,                 const char* value, size_t valueSize);\n";
					of << "\tvoid add_" << messageMember.m_Name << "(const char* key, size_t keySize, const char* value, size_t valueSize);\n";
				}
			}
			of << "\tvoid remove_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key);\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "\tvoid remove_" << messageMember.m_Name << "(const char* key);\n";
				of << "\tvoid remove_" << messageMember.m_Name << "(const char* key, size_t keySize);\n";
			}
			of << "public:\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\tconst " << messageMember.CppMapType() << "& " << messageMember.m_Name << "() const;\n";
				of << "\t" << messageMember.CppMapType() << "& " << messageMember.m_Name << "();\n";
			}
			else
			{
				of << "\tconst " << messageMember.CppHashMapType() << "& " << messageMember.m_Name << "() const;\n";
				of << "\t" << messageMember.CppHashMapType() << "& " << messageMember.m_Name << "();\n";
			}
			of << "\tsize_t " << messageMember.m_Name << "_size() const;\n";
			of << "\tconst " << messageMember.CppValueType() << "* find_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key) const;\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "\tconst " << messageMember.CppValueType() << "* find_" << messageMember.m_Name << "(const char* key) const;\n";
				of << "\tconst " << messageMember.CppValueType() << "* find_" << messageMember.m_Name << "(const char* key, size_t keySize) const;\n";
			}
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\tcommon::miniproto::MapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_begin() const; \n";
				of << "\tcommon::miniproto::MapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_end() const;\n";
			}
			else
			{
				of << "\tcommon::miniproto::HashMapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_begin() const; \n";
				of << "\tcommon::miniproto::HashMapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << messageMember.m_Name << "_end() const;\n";
			}
			of << "public:\n";
			of << "\tvoid clear_" << messageMember.m_Name << "();\n";
			of << "\tvoid release_" << messageMember.m_Name << "();\n";
			of << "public:\n";
			of << "\tbool has_" << messageMember.m_Name << "() const;\n";
			of << "private:\n";
			of << "\tvoid set_has_" << messageMember.m_Name << "();\n";
			of << "\tvoid clear_has_" << messageMember.m_Name << "();\n";
			of << "private:\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\t" << messageMember.CppMapType() << " " << messageMember.m_Name << "_;\n";
			}
			else
			{
				of << "\t" << messageMember.CppHashMapType() << " " << messageMember.m_Name << "_;\n";
			}
		}
		break;
		default:
		break;
	}
}
void ProtoCodeTool::ProtoMessage2Head_Implementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	ProtoMessage2Head_ConstructorImplementations(protoStruct, of);
	ProtoMessage2Head_CopyConstructorImplementations(protoStruct, of);
	ProtoMessage2Head_DestructorImplementations(protoStruct, of);
	ProtoMessage2Head_AssignOperatorImplementations(protoStruct, of);
	ProtoMessage2Head_ByteSizeImplementations(protoStruct, of);
	ProtoMessage2Head_CodeImplementations(protoStruct, of);
	ProtoMessage2Head_DecodeImplementations(protoStruct, of);
	ProtoMessage2Head_ClearImplementations(protoStruct, of);
	ProtoMessage2Head_ReleaseImplementations(protoStruct, of);
	std::map<unsigned int, unsigned int>::const_iterator itMessageMemberOrder = protoStruct.m_MessageMemberOrder.begin();
	while (itMessageMemberOrder != protoStruct.m_MessageMemberOrder.end())
	{
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.find(itMessageMemberOrder->second);
		if (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			ProtoMessage2Head_MemberGetterImplementations(protoStruct, messageMember, of);
			ProtoMessage2Head_MemberSetterImplementations(protoStruct, messageMember, of);
			ProtoMessage2Head_MemberCleanerImplementations(protoStruct, messageMember, of);
			ProtoMessage2Head_MemberBitsImplementations(protoStruct, itMessageMemberOrder->first, messageMember, of);
			of << "\n";
		}

		itMessageMemberOrder++;
	}
}
void ProtoCodeTool::ProtoMessage2Head_ConstructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>::" << protoStruct.m_Name << "()\n";
	of << "{\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_CopyConstructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>::" << protoStruct.m_Name << "(const " << protoStruct.m_Name << "<A>& other)\n";
	of << "{\n";
	of << "\t*this = other;\n";
	of << "}\n\n";
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>::" << protoStruct.m_Name << "(" << protoStruct.m_Name << "<A>&& other)\n";
	of << "{\n";
	of << "\t*this = std::move(other);\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_DestructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>::~" << protoStruct.m_Name << "()\n";
	of << "{\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_AssignOperatorImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>& " << protoStruct.m_Name << "<A>::operator = (const " << protoStruct.m_Name << "<A>& other)\n";
	of << "{\n";
	of << "\tif (this == &other)\n";
	of << "\t{\n";
	of << "\t\treturn *this;\n";
	of << "\t}\n\n";
	of << "\tm_bits.Clear();\n\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tif (other.has_" << messageMember.m_Name << "())\n";
		of << "\t{\n";
		of << "\t\t" << messageMember.m_Name << "_ = other." << messageMember.m_Name << "_;\n";
		of << "\t\tset_has_" << messageMember.m_Name << "();\n";
		of << "\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\treturn *this;\n";
	of << "}\n\n";
	of << "template <template<typename> class A>\n";
	of << protoStruct.m_Name << "<A>& " << protoStruct.m_Name << "<A>::operator = (" << protoStruct.m_Name << "<A>&& other)\n";
	of << "{\n";
	of << "\tif (this == &other)\n";
	of << "\t{\n";
	of << "\t\treturn *this;\n";
	of << "\t}\n\n";
	of << "\tm_bits.Clear();\n\n";
	itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tif (other.has_" << messageMember.m_Name << "())\n";
		of << "\t{\n";
		of << "\t\t" << messageMember.m_Name << "_ = std::move(other." << messageMember.m_Name << "_);\n";
		of << "\t\tother.clear_has_" << messageMember.m_Name << "();\n";
		of << "\t\tset_has_" << messageMember.m_Name << "();\n";
		of << "\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\treturn *this;\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_ByteSizeImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "common::miniproto::byte_size " << protoStruct.m_Name << "<A>::ByteSize() const\n";
	of << "{\n";
	of << "\tcommon::miniproto::byte_size bytes = 0;\n";
	of << "\t\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tif (has_" << messageMember.m_Name << "())\n";
		of << "\t{\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ");\n";
				of << "\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_);\n";
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tfor (size_t i = 0; i < " << messageMember.m_Name << "_.size(); i++)\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << "); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_[i]);\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::SetByteSize(" << messageMember.m_Name << "_, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::SetByteSize(" << messageMember.m_Name << "_, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << "); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "ByteSize(*_" << messageMember.m_Name << "_it);\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::MapByteSize(" << messageMember.m_Name << "_, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ");\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::MapByteSize(" << messageMember.m_Name << "_, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << "); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::MapEntryByteSize(_" << messageMember.m_Name << "_it->first, _" << messageMember.m_Name << "_it->second, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\treturn bytes;\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_CodeImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "common::miniproto::byte_size " << protoStruct.m_Name << "<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const\n";
	of << "{\n";
	of << "\tcommon::miniproto::byte_size bytes = 0;\n";
	of << "\t\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tif (has_" << messageMember.m_Name << "())\n";
		of << "\t{\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf);\n";
				of << "\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tfor (size_t i = 0; i < " << messageMember.m_Name << "_.size(); i++)\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_[i], buf);\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(*_" << messageMember.m_Name << "_it, buf);\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::MapEntryCode(_" << messageMember.m_Name << "_it->first, _" << messageMember.m_Name << "_it->second, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\treturn bytes;\n";
	of << "}\n";
	of << "template <template<typename> class A>\n";
	of << "common::miniproto::byte_size " << protoStruct.m_Name << "<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const\n";
	of << "{\n";
	of << "\tcommon::miniproto::byte_size bytes = 0;\n";
	of << "\t\n";
	itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tif (has_" << messageMember.m_Name << "())\n";
		of << "\t{\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf);\n";
				of << "\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tfor (size_t i = 0; i < " << messageMember.m_Name << "_.size(); i++)\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_[i], buf);\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppValueWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Code(*_" << messageMember.m_Name << "_it, buf);\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
						of << "\t\tbytes += common::miniproto::ProtoTool::MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf);\n";
							of << "\t\tbytes += common::miniproto::ProtoTool::MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
						}
						else
						{
							of << "\t\tauto _" << messageMember.m_Name << "_it = " << messageMember.m_Name << "_.begin();\n";
							of << "\t\twhile (_" << messageMember.m_Name << "_it != " << messageMember.m_Name << "_.end())\n";
							of << "\t\t{\n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::KeyCode(" << messageMember.m_Tag << ", " << messageMember.CppCollectionWireType() << ", buf); \n";
							of << "\t\t\tbytes += common::miniproto::ProtoTool::MapEntryCode(_" << messageMember.m_Name << "_it->first, _" << messageMember.m_Name << "_it->second, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t_" << messageMember.m_Name << "_it++;\n";
							of << "\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\treturn bytes;\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_DecodeImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "common::miniproto::byte_size " << protoStruct.m_Name << "<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)\n";
	of << "{\n";
	of << "\tcommon::miniproto::byte_size bytes = 0;\n";
	of << "\t\n";
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\tunsigned int num = 0;\n";
		of << "\tunsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;\n";
		of << "\twhile (bytes < size)\n";
		of << "\t{\n";
		of << "\t\tbytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);\n";
		of << "\t\tswitch (num << 3 | type)\n";
		of << "\t\t{\n";
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
		while (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			switch (messageMember.m_Modifier)
			{
				case PMM_singular:
				{
					of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
					of << "\t\t\t{\n";
					of << "\t\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Decode(" << messageMember.m_Name << "_, buf);\n";
					of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tbreak;\n";
				}
				break;
				case PMM_array:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayEntryDecode(value, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_set:
				case PMM_hashset:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetEntryDecode(value, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_map:
				case PMM_hashmap:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppKeyType() << " key;\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapEntryDecode(key, value, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(key), std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				default:
				break;
			}

			itMessageMember++;
		}
		of << "\t\t\tdefault:\n";
		of << "\t\t\tbytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);\n";
		of << "\t\t\tbreak;\n";
		of << "\t\t}\n";
		of << "\t}\n";
		of << "\t\n";
	}
	of << "\treturn bytes;\n";
	of << "}\n";
	of << "template <template<typename> class A>\n";
	of << "common::miniproto::byte_size " << protoStruct.m_Name << "<A>::Decode(std::istream& buf, common::miniproto::byte_size size)\n";
	of << "{\n";
	of << "\tcommon::miniproto::byte_size bytes = 0;\n";
	of << "\t\n";
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\tunsigned int num = 0;\n";
		of << "\tunsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;\n";
		of << "\twhile (bytes < size)\n";
		of << "\t{\n";
		of << "\t\tbytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);\n";
		of << "\t\tswitch (num << 3 | type)\n";
		of << "\t\t{\n";
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
		while (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			switch (messageMember.m_Modifier)
			{
				case PMM_singular:
				{
					of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
					of << "\t\t\t{\n";
					of << "\t\t\t\tbytes += common::miniproto::ProtoTool::" << messageMember.ValueFunPrefix() << "Decode(" << messageMember.m_Name << "_, buf);\n";
					of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tbreak;\n";
				}
				break;
				case PMM_array:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::ArrayEntryDecode(value, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_set:
				case PMM_hashset:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppValueWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::SetEntryDecode(value, buf, " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_map:
				case PMM_hashmap:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
							of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t}\n";
							of << "\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.CppCollectionWireType() << ":\n";
								of << "\t\t\t{\n";
								of << "\t\t\t\t" << messageMember.CppKeyType() << " key;\n";
								of << "\t\t\t\t" << messageMember.CppValueType() << " value;\n";
								of << "\t\t\t\tbytes += common::miniproto::ProtoTool::MapEntryDecode(key, value, buf, " << messageMember.CppKeyTypeObj() << ", " << messageMember.CppValueTypeObj() << ");\n";
								of << "\t\t\t\tadd_" << messageMember.m_Name << "(std::move(key), std::move(value));\n";
								of << "\t\t\t}\n";
								of << "\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				default:
				break;
			}

			itMessageMember++;
		}
		of << "\t\t\tdefault:\n";
		of << "\t\t\tbytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);\n";
		of << "\t\t\tbreak;\n";
		of << "\t\t}\n";
		of << "\t}\n";
		of << "\t\n";
	}
	of << "\treturn bytes;\n";
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_ClearImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "void " << protoStruct.m_Name << "<A>::Clear()\n";
	of << "{\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\tclear_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_ReleaseImplementations(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "void " << protoStruct.m_Name << "<A>::Release()\n";
	of << "{\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\trelease_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "}\n\n";
}
void ProtoCodeTool::ProtoMessage2Head_MemberGetterImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of)
{
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "template <template<typename> class A>\n";
			of << "const " << messageMember.CppValueType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_;\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << messageMember.CppValueType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "\treturn " << messageMember.m_Name << "_;\n";
			of << "}\n";
		}
		break;
		case PMM_array:
		{
			of << "template <template<typename> class A>\n";
			of << "const " << messageMember.CppArrayType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_;\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << messageMember.CppArrayType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "\treturn " << messageMember.m_Name << "_;\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "size_t " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_size() const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.size();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "const " << messageMember.CppValueType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "(common::miniproto::uint32 index) const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_[index];\n";
			of << "}\n";
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppSetType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
				of << "{\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << messageMember.CppSetType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
				of << "{\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
			}
			else
			{
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppHashSetType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
				of << "{\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << messageMember.CppHashSetType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
				of << "{\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
			}
			of << "template <template<typename> class A>\n";
			of << "size_t " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_size() const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.size();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "size_t " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_count(const " << messageMember.CppValueType() << "& value) const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.count(value);\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "common::miniproto::SetConstIt<" << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_begin() const\n";
			}
			else
			{
				of << "common::miniproto::HashSetConstIt<" << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_begin() const\n";
			}
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.begin();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "common::miniproto::SetConstIt<" << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_end() const\n";
			}
			else
			{
				of << "common::miniproto::HashSetConstIt<" << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_end() const\n";
			}
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.end();\n";
			of << "}\n";
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppMapType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
				of << "{\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << messageMember.CppMapType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
				of << "{\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
			}
			else
			{
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppHashMapType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "() const\n";
				of << "{\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << messageMember.CppHashMapType() << "& " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "()\n";
				of << "{\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "\treturn " << messageMember.m_Name << "_;\n";
				of << "}\n";
			}
			of << "template <template<typename> class A>\n";
			of << "size_t " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_size() const\n";
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.size();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "const " << messageMember.CppValueType() << "* " << protoStruct.m_Name << "<A>::find_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key) const\n";
			of << "{\n";
			of << "\tauto it = " << messageMember.m_Name << "_.find(key);\n";
			of << "\tif (it != " << messageMember.m_Name << "_.end())\n";
			of << "\t{\n";
			of << "\t\treturn &(it->second);\n";
			of << "\t}\n";
			of << "\telse\n";
			of << "\t{\n";
			of << "\t\treturn NULL;\n";
			of << "\t}\n";
			of << "}\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppValueType() << "* " << protoStruct.m_Name << "<A>::find_" << messageMember.m_Name << "(const char* key) const\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " temp(key);\n";
				of << "\tauto it = " << messageMember.m_Name << "_.find(temp);\n";
				of << "\tif (it != " << messageMember.m_Name << "_.end())\n";
				of << "\t{\n";
				of << "\t\treturn &(it->second);\n";
				of << "\t}\n";
				of << "\telse\n";
				of << "\t{\n";
				of << "\t\treturn NULL;\n";
				of << "\t}\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "const " << messageMember.CppValueType() << "* " << protoStruct.m_Name << "<A>::find_" << messageMember.m_Name << "(const char* key, size_t keySize) const\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " temp(key, keySize);\n";
				of << "\tauto it = " << messageMember.m_Name << "_.find(temp);\n";
				of << "\tif (it != " << messageMember.m_Name << "_.end())\n";
				of << "\t{\n";
				of << "\t\treturn &(it->second);\n";
				of << "\t}\n";
				of << "\telse\n";
				of << "\t{\n";
				of << "\t\treturn NULL;\n";
				of << "\t}\n";
				of << "}\n";
			}
			of << "template <template<typename> class A>\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "common::miniproto::MapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_begin() const\n";
			}
			else
			{
				of << "common::miniproto::HashMapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_begin() const\n";
			}
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.begin();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "common::miniproto::MapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_end() const\n";
			}
			else
			{
				of << "common::miniproto::HashMapConstIt<" << messageMember.CppKeyType() << ", " << messageMember.CppValueType() << ", A> " << protoStruct.m_Name << "<A>::" << messageMember.m_Name << "_end() const\n";
			}
			of << "{\n";
			of << "\treturn " << messageMember.m_Name << "_.end();\n";
			of << "}\n";
		}
		break;
		default:
		break;
	}
}
void ProtoCodeTool::ProtoMessage2Head_MemberSetterImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of)
{
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_ = value;\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_ = std::move(value);\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.m_Name << "_.assign(value);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(const char* value, size_t size)\n";
				of << "{\n";
				of << "\t" << messageMember.m_Name << "_.assign(value, size);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
			}
		}
		break;
		case PMM_array:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::reserve_" << messageMember.m_Name << "(size_t size)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.reserve(size);\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\tif (index < " << messageMember.m_Name << "_.size())\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.m_Name << "_[index] = value;\n";
			of << "\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(common::miniproto::uint32 index, " << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\tif (index < " << messageMember.m_Name << "_.size())\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.m_Name << "_[index] = std::move(value);\n";
			of << "\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "}\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const char* value)\n";
				of << "{\n";
				of << "\tif (index < " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\t" << messageMember.m_Name << "_[index].assign(value);\n";
				of << "\t\tset_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::set_" << messageMember.m_Name << "(common::miniproto::uint32 index, const char* value, size_t size)\n";
				of << "{\n";
				of << "\tif (index < " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\t" << messageMember.m_Name << "_[index].assign(value, size);\n";
				of << "\t\tset_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
			}
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.push_back(value);\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.push_back(std::move(value));\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value);\n";
				of << "\t" << messageMember.m_Name << "_.push_back(std::move(temp));\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* value, size_t size)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value, size);\n";
				of << "\t" << messageMember.m_Name << "_.push_back(std::move(temp));\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
			}
			if (PMT_string == messageMember.m_ValueType || PMT_message == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << messageMember.CppValueType() << "* " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "()\n";
				of << "{\n";
				of << "\tsize_t oldSize = " << messageMember.m_Name << "_.size();\n";
				of << "\t" << messageMember.m_Name << "_.resize(oldSize + 1);\n";
				of << "\tsize_t newSize = " << messageMember.m_Name << "_.size();\n";
				of << "\tif (newSize > oldSize)\n";
				of << "\t{\n";
				of << "\t\tset_has_" << messageMember.m_Name << "();\n";
				of << "\t\treturn &(" << messageMember.m_Name << "_[newSize - 1]);\n";
				of << "\t}\n";
				of << "\telse\n";
				of << "\t{\n";
				of << "\t\treturn NULL;\n";
				of << "\t}\n";
				of << "}\n";
			}
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.insert(value);\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.insert(std::move(value));\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value);\n";
				of << "\t" << messageMember.m_Name << "_.insert(std::move(temp));\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* value, size_t size)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value, size);\n";
				of << "\t" << messageMember.m_Name << "_.insert(std::move(temp));\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
			}
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.erase(value);\n";
			of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "}\n";
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value);\n";
				of << "\t" << messageMember.m_Name << "_.erase(temp);\n";
				of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const char* value, size_t size)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " temp(value, size);\n";
				of << "\t" << messageMember.m_Name << "_.erase(temp);\n";
				of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
			}
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_[key] = value;\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, const " << messageMember.CppValueType() << "& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_[std::move(key)] = value;\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, " << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_[key] = std::move(value);\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, " << messageMember.CppValueType() << "&& value)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_[std::move(key)] = std::move(value);\n";
			of << "\tset_has_" << messageMember.m_Name << "();\n";
			of << "}\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, const " << messageMember.CppValueType() << "& value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " tempKey(key);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = value;\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, " << messageMember.CppValueType() << "&& value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " tempKey(key);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(value);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, size_t keySize, const " << messageMember.CppValueType() << "& value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " tempKey(key, keySize);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = value;\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, size_t keySize, " << messageMember.CppValueType() << "&& value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " tempKey(key, keySize);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(value);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
			}
			if (PMT_string == messageMember.m_ValueType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " tempValue(value);\n";
				of << "\t" << messageMember.m_Name << "_[key] = std::move(tempValue);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, const char* value)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " tempValue(value);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(key)] = std::move(tempValue);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				if (PMT_string == messageMember.m_KeyType)
				{
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, const char* value)\n";
					of << "{\n";
					of << "\t" << messageMember.CppKeyType() << " tempKey(key);\n";
					of << "\t" << messageMember.CppValueType() << " tempValue(value);\n";
					of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(tempValue);\n";
					of << "\tset_has_" << messageMember.m_Name << "();\n";
					of << "}\n";
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, size_t keySize, const char* value)\n";
					of << "{\n";
					of << "\t" << messageMember.CppKeyType() << " tempKey(key, keySize);\n";
					of << "\t" << messageMember.CppValueType() << " tempValue(value);\n";
					of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(tempValue);\n";
					of << "\tset_has_" << messageMember.m_Name << "();\n";
					of << "}\n";
				}
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key, const char* value, size_t valueSize)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " tempValue(value, valueSize);\n";
				of << "\t" << messageMember.m_Name << "_[key] = std::move(tempValue);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(" << messageMember.CppKeyType() << "&& key, const char* value, size_t valueSize)\n";
				of << "{\n";
				of << "\t" << messageMember.CppValueType() << " tempValue(value, valueSize);\n";
				of << "\t" << messageMember.m_Name << "_[std::move(key)] = std::move(tempValue);\n";
				of << "\tset_has_" << messageMember.m_Name << "();\n";
				of << "}\n";
				if (PMT_string == messageMember.m_KeyType)
				{
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, const char* value, size_t valueSize)\n";
					of << "{\n";
					of << "\t" << messageMember.CppKeyType() << " tempKey(key);\n";
					of << "\t" << messageMember.CppValueType() << " tempValue(value, valueSize);\n";
					of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(tempValue);\n";
					of << "\tset_has_" << messageMember.m_Name << "();\n";
					of << "}\n";
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::add_" << messageMember.m_Name << "(const char* key, size_t keySize, const char* value, size_t valueSize)\n";
					of << "{\n";
					of << "\t" << messageMember.CppKeyType() << " tempKey(key, keySize);\n";
					of << "\t" << messageMember.CppValueType() << " tempValue(value, valueSize);\n";
					of << "\t" << messageMember.m_Name << "_[std::move(tempKey)] = std::move(tempValue);\n";
					of << "\tset_has_" << messageMember.m_Name << "();\n";
					of << "}\n";
				}
			}
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const " << messageMember.CppKeyType() << "& key)\n";
			of << "{\n";
			of << "\t" << messageMember.m_Name << "_.erase(key);\n";
			of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "}\n";
			if (PMT_string == messageMember.m_KeyType)
			{
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const char* key)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " temp(key);\n";
				of << "\t" << messageMember.m_Name << "_.erase(temp);\n";
				of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
				of << "template <template<typename> class A>\n";
				of << "void " << protoStruct.m_Name << "<A>::remove_" << messageMember.m_Name << "(const char* key, size_t keySize)\n";
				of << "{\n";
				of << "\t" << messageMember.CppKeyType() << " temp(key, keySize);\n";
				of << "\t" << messageMember.m_Name << "_.erase(temp);\n";
				of << "\tif(0 == " << messageMember.m_Name << "_.size())\n";
				of << "\t{\n";
				of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
				of << "\t}\n";
				of << "}\n";
			}
		}
		break;
		default:
		break;
	}
}
void ProtoCodeTool::ProtoMessage2Head_MemberCleanerImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of)
{
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			switch (messageMember.m_ValueType)
			{
				case PMT_bool:
				case PMT_int32:
				case PMT_sint32:
				case PMT_uint32:
				case PMT_int64:
				case PMT_sint64:
				case PMT_uint64:
				case PMT_sfixed32:
				case PMT_fixed32:
				case PMT_float:
				case PMT_sfixed64:
				case PMT_fixed64:
				case PMT_double:
				case PMT_enum:
				{
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "}\n";
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "}\n";
				}
				break;
				case PMT_string:
				{
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
					of << "\t{\n";
					of << "\t\t" << messageMember.m_Name << "_.clear();\n";
					of << "\t}\n";
					of << "}\n";
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "\tif (" << messageMember.m_Name << "_.capacity() > 0)\n";
					of << "\t{\n";
					of << "\t\t" << messageMember.CppValueType() << " _" << messageMember.m_Name << "_temp;\n";
					of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
					of << "\t}\n";
					of << "}\n";
				}
				break;
				case PMT_message:
				{
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "\t" << messageMember.m_Name << "_.Clear();\n";
					of << "}\n";
					of << "template <template<typename> class A>\n";
					of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
					of << "{\n";
					of << "\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t{\n";
					of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t}\n";
					of << "\t" << messageMember.m_Name << "_.Release();\n";
					of << "}\n";
				}
				break;
				default:
				break;
			}
		}
		break;
		case PMM_array:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.m_Name << "_.clear();\n";
			of << "\t}\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.capacity() > 0)\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.CppArrayType() << " _" << messageMember.m_Name << "_temp;\n";
			of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
			of << "\t}\n";
			of << "}\n";
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.m_Name << "_.clear();\n";
			of << "\t}\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
			of << "\t{\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\t\t" << messageMember.CppSetType() << " _" << messageMember.m_Name << "_temp;\n";
				of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
			}
			else
			{
				of << "\t\t" << messageMember.CppHashSetType() << " _" << messageMember.m_Name << "_temp;\n";
				of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
			}
			of << "\t}\n";
			of << "}\n";
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::clear_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
			of << "\t{\n";
			of << "\t\t" << messageMember.m_Name << "_.clear();\n";
			of << "\t}\n";
			of << "}\n";
			of << "template <template<typename> class A>\n";
			of << "void " << protoStruct.m_Name << "<A>::release_" << messageMember.m_Name << "()\n";
			of << "{\n";
			of << "\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t{\n";
			of << "\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t}\n";
			of << "\tif (" << messageMember.m_Name << "_.size() > 0)\n";
			of << "\t{\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\t\t" << messageMember.CppMapType() << " _" << messageMember.m_Name << "_temp;\n";
				of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
			}
			else
			{
				of << "\t\t" << messageMember.CppHashMapType() << " _" << messageMember.m_Name << "_temp;\n";
				of << "\t\t" << messageMember.m_Name << "_.swap(_" << messageMember.m_Name << "_temp);\n";
			}
			of << "\t}\n";
			of << "}\n";
		}
		break;
		default:
		break;
	}
}
void ProtoCodeTool::ProtoMessage2Head_MemberBitsImplementations(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of)
{
	of << "template <template<typename> class A>\n";
	of << "bool " << protoStruct.m_Name << "<A>::has_" << messageMember.m_Name << "() const\n";
	of << "{\n";
	of << "\treturn m_bits.HasBit(" << order << ");\n";
	of << "}\n";
	of << "template <template<typename> class A>\n";
	of << "void " << protoStruct.m_Name << "<A>::set_has_" << messageMember.m_Name << "()\n";
	of << "{\n";
	of << "\tm_bits.SetBit(" << order << ");\n";
	of << "}\n";
	of << "template <template<typename> class A>\n";
	of << "void " << protoStruct.m_Name << "<A>::clear_has_" << messageMember.m_Name << "()\n";
	of << "{\n";
	of << "\tm_bits.ClearBit(" << order << ");\n";
	of << "}\n";
}

void ProtoCodeTool::ProtoFile2Cs(const ProtoFile& protoFile, std::ofstream& of)
{
	ProtoFile2Cs_Using(protoFile, of);
	ProtoFile2Cs_NameSpace(protoFile, of);
}
void ProtoCodeTool::ProtoFile2Cs_Using(const ProtoFile& protoFile, std::ofstream& of)
{
	of << "using System;\n";
	of << "using System.IO;\n";
	of << "using System.Text;\n";
	of << "using System.Collections.Generic;\n";
	of << "\n";
}
void ProtoCodeTool::ProtoFile2Cs_NameSpace(const ProtoFile& protoFile, std::ofstream& of)
{
	std::vector<std::string> packages;
	StringTool::SplitStr2List(protoFile.m_Package, ".", packages);
	for (size_t i = 0; i < packages.size(); i++)
	{
		of << "namespace " << packages[i] << " {\n";
	}
	if (packages.size() > 0)
	{
		of << "\n";
	}

	std::map<unsigned int, std::string>::const_iterator itStructOrder = protoFile.m_StructOrder.begin();
	while (itStructOrder != protoFile.m_StructOrder.end())
	{
		std::map<std::string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(itStructOrder->second);
		if (itStruct != protoFile.m_Structs.end())
		{
			const ProtoStruct& protoStruct = itStruct->second;
			switch (protoStruct.m_Type)
			{
				case PT_message:
				{
					ProtoMessage2Cs(protoStruct, of);
				}
				break;
				case PT_enum:
				{
					ProtoEnum2Cs(protoStruct, of);
				}
				break;
				default:
				break;
			}
			of << "\n";
		}

		itStructOrder++;
	}

	for (size_t i = packages.size(); i > 0; i--)
	{
		of << "} //namespace " << packages[i - 1] << "\n";
	}
	if (packages.size() > 0)
	{
		of << "\n";
	}
}
void ProtoCodeTool::ProtoEnum2Cs(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "public enum " << protoStruct.m_Name << "\n";
	of << "{\n";
	std::map<unsigned int, std::string>::const_iterator itEnumMemberOrder = protoStruct.m_EnumMemberOrder.begin();
	while (itEnumMemberOrder != protoStruct.m_EnumMemberOrder.end())
	{
		std::map<std::string, EnumMember>::const_iterator itEnumMember = protoStruct.m_EnumMembers.find(itEnumMemberOrder->second);
		if (itEnumMember != protoStruct.m_EnumMembers.end())
		{
			const EnumMember& enumMember = itEnumMember->second;

			of << "\t" << "[System.ComponentModel.Description(\"" << enumMember.m_Name << "\")]\n";
			of << "\t" << enumMember.m_Name << " = " << enumMember.m_Value << ",\n";
		}

		itEnumMemberOrder++;
	}
	of << "};\n\n";
}
void ProtoCodeTool::ProtoMessage2Cs(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "public class " << protoStruct.m_Name << " : common.miniproto.ProtoBase\n";
	of << "{\n";
	of << "\tprivate common.miniproto.ProtoBitMap m_bits;\n";
	of << "\n";
	std::map<unsigned int, unsigned int>::const_iterator itMessageMemberOrder = protoStruct.m_MessageMemberOrder.begin();
	while (itMessageMemberOrder != protoStruct.m_MessageMemberOrder.end())
	{
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.find(itMessageMemberOrder->second);
		if (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			ProtoMessage2Cs_Member(protoStruct, itMessageMemberOrder->first, messageMember, of);
			of << "\n";
		}

		itMessageMemberOrder++;
	}
	ProtoMessage2Cs_Constructor(protoStruct, of);
	of << "\n";
	ProtoMessage2Cs_ByteSize(protoStruct, of);
	of << "\n";
	ProtoMessage2Cs_Code(protoStruct, of);
	of << "\n";
	ProtoMessage2Cs_Decode(protoStruct, of);
	of << "\n";
	ProtoMessage2Cs_Clear(protoStruct, of);
	of << "\n";
	ProtoMessage2Cs_Release(protoStruct, of);
	of << "};\n\n";
}
void ProtoCodeTool::ProtoMessage2Cs_Member(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of)
{
	//definition
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "\tprivate " << messageMember.CsValueType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_array:
		{
			of << "\tprivate " << messageMember.CsArrayType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_set:
		{
			of << "\tprivate " << messageMember.CsSetType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_hashset:
		{
			of << "\tprivate " << messageMember.CsHashSetType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_map:
		{
			of << "\tprivate " << messageMember.CsMapType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		case PMM_hashmap:
		{
			of << "\tprivate " << messageMember.CsHashMapType() << " " << messageMember.m_Name << "_;\n";
		}
		break;
		default:
		break;
	}

	//getter/setter
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "\tpublic " << messageMember.CsValueType() << " " << messageMember.m_Name << "\n";
			of << "\t{\n";
			of << "\t\tget\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_;\n";
			of << "\t\t}\n";
			of << "\t\tset\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
		}
		break;
		case PMM_array:
		{
			of << "\tpublic " << messageMember.CsArrayType() << " " << messageMember.m_Name << "\n";
			of << "\t{\n";
			of << "\t\tset\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic int " << messageMember.m_Name << "_size()\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.Count;\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn 0;\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic " << messageMember.CsArrayType() << ".Enumerator " << messageMember.m_Name << "_enumerator()\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.GetEnumerator();\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\tthrow new NullReferenceException(\"has not " << messageMember.m_Name << "_\");\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void add_" << messageMember.m_Name << "(" << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null == " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsArrayType() << "();\n";
			of << "\t\t}\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Add(value);\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic " << messageMember.CsValueType() << " get_" << messageMember.m_Name << "(int index)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && index < " << messageMember.m_Name << "_.Count)\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_[index];\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn default(" << messageMember.CsValueType() << ");\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void set_" << messageMember.m_Name << "(int index, " << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null == " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsArrayType() << "();\n";
			of << "\t\t}\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && index < " << messageMember.m_Name << "_.Count)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_[index] = value;\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\tpublic " << messageMember.CsSetType() << " " << messageMember.m_Name << "\n";
			}
			else
			{
				of << "\tpublic " << messageMember.CsHashSetType() << " " << messageMember.m_Name << "\n";
			}
			of << "\t{\n";
			of << "\t\tset\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic int " << messageMember.m_Name << "_size()\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.Count;\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn 0;\n";
			of << "\t\t}\n";
			of << "\t}\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\tpublic " << messageMember.CsSetType() << ".Enumerator " << messageMember.m_Name << "_enumerator()\n";
			}
			else
			{
				of << "\tpublic " << messageMember.CsHashSetType() << ".Enumerator " << messageMember.m_Name << "_enumerator()\n";
			}
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.GetEnumerator();\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\tthrow new NullReferenceException(\"has not " << messageMember.m_Name << "_\");\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void add_" << messageMember.m_Name << "(" << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null == " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsSetType() << "();\n";
			}
			else
			{
				of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsHashSetType() << "();\n";
			}
			of << "\t\t}\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Add(value);\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void remove_" << messageMember.m_Name << "(" << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Remove(value);\n";
			of << "\t\t\tif(0 == " << messageMember.m_Name << "_.Count)\n";
			of << "\t\t\t{\n";
			of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic bool " << messageMember.m_Name << "_contains(" << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.Contains(value);\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn false;\n";
			of << "\t\t}\n";
			of << "\t}\n";
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\tpublic " << messageMember.CsMapType() << " " << messageMember.m_Name << "\n";
			}
			else
			{
				of << "\tpublic " << messageMember.CsHashMapType() << " " << messageMember.m_Name << "\n";
			}
			of << "\t{\n";
			of << "\t\tset\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic int " << messageMember.m_Name << "_size()\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.Count;\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn 0;\n";
			of << "\t\t}\n";
			of << "\t}\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\tpublic " << messageMember.CsMapType() << ".Enumerator " << messageMember.m_Name << "_enumerator()\n";
			}
			else
			{
				of << "\tpublic " << messageMember.CsHashMapType() << ".Enumerator " << messageMember.m_Name << "_enumerator()\n";
			}
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.GetEnumerator();\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\tthrow new NullReferenceException(\"has not " << messageMember.m_Name << "_\");\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void add_" << messageMember.m_Name << "(" << messageMember.CsKeyType() << " key, " << messageMember.CsValueType() << " value)\n";
			of << "\t{\n";
			of << "\t\tif (null == " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsMapType() << "();\n";
			}
			else
			{
				of << "\t\t\t" << messageMember.m_Name << " = new " << messageMember.CsHashMapType() << "();\n";
			}
			of << "\t\t}\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Add(key, value);\n";
			of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic " << messageMember.CsValueType() << " find_" << messageMember.m_Name << "(" << messageMember.CsKeyType() << " key)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_[key];\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\tthrow new System.Collections.Generic.KeyNotFoundException();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void remove_" << messageMember.m_Name << "(" << messageMember.CsKeyType() << " key)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Remove(key);\n";
			of << "\t\t\tif(0 == " << messageMember.m_Name << "_.Count)\n";
			of << "\t\t\t{\n";
			of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic bool " << messageMember.m_Name << "_contains(" << messageMember.CsKeyType() << " key)\n";
			of << "\t{\n";
			of << "\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\treturn " << messageMember.m_Name << "_.ContainsKey(key);\n";
			of << "\t\t}\n";
			of << "\t\telse\n";
			of << "\t\t{\n";
			of << "\t\t\treturn false;\n";
			of << "\t\t}\n";
			of << "\t}\n";
		}
		break;
		default:
		break;
	}

	//cleaner
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			switch (messageMember.m_ValueType)
			{
				case PMT_bool:
				case PMT_int32:
				case PMT_sint32:
				case PMT_uint32:
				case PMT_int64:
				case PMT_sint64:
				case PMT_uint64:
				case PMT_sfixed32:
				case PMT_fixed32:
				case PMT_float:
				case PMT_sfixed64:
				case PMT_fixed64:
				case PMT_double:
				case PMT_enum:
				{
					of << "\tpublic void clear_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t}\n";
					of << "\tpublic void release_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t}\n";
				}
				break;
				case PMT_string:
				{
					of << "\tpublic void clear_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t\tif (" << messageMember.m_Name << "_ != null)\n";
					of << "\t\t{\n";
					of << "\t\t\t" << messageMember.m_Name << "_.Remove(0, " << messageMember.m_Name << "_.Length);\n";
					of << "\t\t}\n";
					of << "\t}\n";
					of << "\tpublic void release_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t\tif (" << messageMember.m_Name << "_ != null)\n";
					of << "\t\t{\n";
					of << "\t\t\t" << messageMember.m_Name << "_ = null;\n";
					of << "\t\t}\n";
					of << "\t}\n";
				}
				break;
				case PMT_message:
				{
					of << "\tpublic void clear_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
					of << "\t\t{\n";
					of << "\t\t\t" << messageMember.m_Name << "_.Clear();\n";
					of << "\t\t}\n";
					of << "\t}\n";
					of << "\tpublic void release_" << messageMember.m_Name << "()\n";
					of << "\t{\n";
					of << "\t\tif (has_" << messageMember.m_Name << "())\n";
					of << "\t\t{\n";
					of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
					of << "\t\tif (null != " << messageMember.m_Name << "_)\n";
					of << "\t\t{\n";
					of << "\t\t\t" << messageMember.m_Name << "_ = null;\n";
					of << "\t\t}\n";
					of << "\t}\n";
				}
				break;
				default:
				break;
			}
		}
		break;
		case PMM_array:
		case PMM_set:
		case PMM_hashset:
		case PMM_map:
		case PMM_hashmap:
		{
			of << "\tpublic void clear_" << messageMember.m_Name << "()\n";
			of << "\t{\n";
			of << "\t\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t\tif (" << messageMember.m_Name << "_ != null)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_.Clear();\n";
			of << "\t\t}\n";
			of << "\t}\n";
			of << "\tpublic void release_" << messageMember.m_Name << "()\n";
			of << "\t{\n";
			of << "\t\tif (has_" << messageMember.m_Name << "())\n";
			of << "\t\t{\n";
			of << "\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t}\n";
			of << "\t\tif (" << messageMember.m_Name << "_ != null)\n";
			of << "\t\t{\n";
			of << "\t\t\t" << messageMember.m_Name << "_ = null;\n";
			of << "\t\t}\n";
			of << "\t}\n";
		}
		break;
		default:
		break;
	}

	//bits
	if (true)
	{
		of << "\tpublic bool has_" << messageMember.m_Name << "()\n";
		of << "\t{\n";
		of << "\t\treturn m_bits.HasBit(" << order << ");\n";
		of << "\t}\n";
		of << "\tprivate void set_has_" << messageMember.m_Name << "()\n";
		of << "\t{\n";
		of << "\t\tm_bits.SetBit(" << order << ");\n";
		of << "\t}\n";
		of << "\tprivate void clear_has_" << messageMember.m_Name << "()\n";
		of << "\t{\n";
		of << "\t\tm_bits.ClearBit(" << order << ");\n";
		of << "\t}\n";
	}
}
void ProtoCodeTool::ProtoMessage2Cs_Constructor(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic " << protoStruct.m_Name << "()\n";
	of << "\t{\n";
	of << "\t\tm_bits = new common.miniproto.ProtoBitMap(" << protoStruct.m_MessageMembers.size() << ");\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsValueType() << ");\n";
			break;
			case PMM_array:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsArrayType() << ");\n";
			break;
			case PMM_set:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsSetType() << ");\n";
			break;
			case PMM_hashset:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsHashSetType() << ");\n";
			break;
			case PMM_map:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsMapType() << ");\n";
			break;
			case PMM_hashmap:
			of << "\t\t" << messageMember.m_Name << "_ = default(" << messageMember.CsHashMapType() << ");\n";
			break;
			default:
			break;
		}

		itMessageMember++;
	}
	of << "\t}\n";
}
void ProtoCodeTool::ProtoMessage2Cs_ByteSize(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic override ulong ByteSize()\n";
	of << "\t{\n";
	of << "\t\tulong bytes = 0;\n";
	of << "\t\t\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\tif (has_" << messageMember.m_Name << "())\n";
		of << "\t\t{\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				switch (messageMember.m_ValueType)
				{
					case PMT_bool:
					case PMT_int32:
					case PMT_sint32:
					case PMT_uint32:
					case PMT_int64:
					case PMT_sint64:
					case PMT_uint64:
					case PMT_sfixed32:
					case PMT_fixed32:
					case PMT_float:
					case PMT_sfixed64:
					case PMT_fixed64:
					case PMT_double:
					case PMT_enum:
					{
						of << "\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ");\n";
						of << "\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_);\n";
					}
					break;
					case PMT_string:
					case PMT_message:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ");\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_);\n";
						of << "\t\t\t}\n";
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << "); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(value);\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.SetByteSize(" << messageMember.m_Name << "_, " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.SetByteSize(" << messageMember.m_Name << "_, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << "); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(value);\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryByteSize(" << messageMember.m_Name << "_, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ");\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryByteSize(" << messageMember.m_Name << "_, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << "); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.EntryByteSize(value.Key, value.Value, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\t\treturn bytes;\n";
	of << "\t}\n";
}
void ProtoCodeTool::ProtoMessage2Cs_Code(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic override ulong Code(Stream buf, ulong size)\n";
	of << "\t{\n";
	of << "\t\tulong bytes = 0;\n";
	of << "\t\t\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\tif (has_" << messageMember.m_Name << "())\n";
		of << "\t\t{\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				switch (messageMember.m_ValueType)
				{
					case PMT_bool:
					case PMT_int32:
					case PMT_sint32:
					case PMT_uint32:
					case PMT_int64:
					case PMT_sint64:
					case PMT_uint64:
					case PMT_sfixed32:
					case PMT_fixed32:
					case PMT_float:
					case PMT_sfixed64:
					case PMT_fixed64:
					case PMT_double:
					case PMT_enum:
					{
						of << "\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ", buf);\n";
						of << "\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
					}
					break;
					case PMT_string:
					case PMT_message:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ", buf);\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
						of << "\t\t\t}\n";
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ", buf); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(value, buf);\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsValueWireType() << ", buf); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(value, buf);\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
						of << "\t\t\t{\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
						of << "\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf);\n";
							of << "\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryCode(" << messageMember.m_Name << "_, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t}\n";
						}
						else
						{
							of << "\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t{\n";
							of << "\t\t\t\tforeach (var value in " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << "u, (uint)" << messageMember.CsCollectionWireType() << ", buf); \n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.EntryCode(value.Key, value.Value, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\t\treturn bytes;\n";
	of << "\t}\n";
}
void ProtoCodeTool::ProtoMessage2Cs_Decode(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic override ulong Decode(Stream buf, ulong size)\n";
	of << "\t{\n";
	of << "\t\tulong bytes = 0;\n";
	of << "\t\t\n";
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\t\tuint num = 0;\n";
		of << "\t\tuint type = (uint)common.miniproto.ProtoWireType.PWT_Unknown;\n";
		of << "\t\twhile (bytes < size)\n";
		of << "\t\t{\n";
		of << "\t\t\tbytes += common.miniproto.ProtoTool.KeyDecode(ref num, ref type, buf);\n";
		of << "\t\t\tswitch (num << 3 | type)\n";
		of << "\t\t\t{\n";
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
		while (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			switch (messageMember.m_Modifier)
			{
				case PMM_singular:
				{
					switch (messageMember.m_ValueType)
					{
						case PMT_bool:
						case PMT_int32:
						case PMT_sint32:
						case PMT_uint32:
						case PMT_int64:
						case PMT_sint64:
						case PMT_uint64:
						case PMT_sfixed32:
						case PMT_fixed32:
						case PMT_float:
						case PMT_sfixed64:
						case PMT_fixed64:
						case PMT_double:
						case PMT_enum:
						case PMT_string:
						{
							of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsValueWireType() << ":\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(ref " << messageMember.m_Name << "_, buf);\n";
							of << "\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t\tbreak;\n";
						}
						break;
						case PMT_message:
						{
							of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsValueWireType() << ":\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsValueType() << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(ref " << messageMember.m_Name << "_, buf);\n";
							of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\telse\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t\tbreak;\n";
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_array:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsArrayType() << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\telse\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
								of << "\t\t\t\t{\n";
								of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsArrayType() << "();\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
								of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\telse\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t}\n";
								of << "\t\t\t\tbreak;\n";
							}
							else
							{
								switch (messageMember.m_ValueType)
								{
									case PMT_bool:
									case PMT_int32:
									case PMT_sint32:
									case PMT_uint32:
									case PMT_int64:
									case PMT_sint64:
									case PMT_uint64:
									case PMT_sfixed32:
									case PMT_fixed32:
									case PMT_float:
									case PMT_sfixed64:
									case PMT_fixed64:
									case PMT_double:
									case PMT_enum:
									case PMT_string:
									{
										of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsValueWireType() << ":\n";
										of << "\t\t\t\t{\n";
										of << "\t\t\t\t\t" << messageMember.CsValueType() << " value = default(" << messageMember.CsValueType() << ");\n";
										of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(ref value, buf);\n";
										of << "\t\t\t\t\tadd_" << messageMember.m_Name << "(value);\n";
										of << "\t\t\t\t}\n";
										of << "\t\t\t\tbreak;\n";
									}
									break;
									case PMT_message:
									{
										of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsValueWireType() << ":\n";
										of << "\t\t\t\t{\n";
										of << "\t\t\t\t\t" << messageMember.CsValueType() << " value = default(" << messageMember.CsValueType() << ");\n";
										of << "\t\t\t\t\tif (null == value)\n";
										of << "\t\t\t\t\t{\n";
										of << "\t\t\t\t\t\tvalue = new " << messageMember.CsValueType() << "();\n";
										of << "\t\t\t\t\t}\n";
										of << "\t\t\t\t\tif (null != value)\n";
										of << "\t\t\t\t\t{\n";
										of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(ref value, buf);\n";
										of << "\t\t\t\t\t\tadd_" << messageMember.m_Name << "(value);\n";
										of << "\t\t\t\t\t}\n";
										of << "\t\t\t\t\telse\n";
										of << "\t\t\t\t\t{\n";
										of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
										of << "\t\t\t\t\t}\n";
										of << "\t\t\t\t}\n";
										of << "\t\t\t\tbreak;\n";
									}
									break;
									default:
									break;
								}
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_set:
				case PMM_hashset:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							if (messageMember.m_Modifier == PMM_set)
							{
								of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsSetType() << "();\n";
							}
							else
							{
								of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsHashSetType() << "();\n";
							}
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\telse\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
								of << "\t\t\t\t{\n";
								of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								if (messageMember.m_Modifier == PMM_set)
								{
									of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsSetType() << "();\n";
								}
								else
								{
									of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsHashSetType() << "();\n";
								}
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsValueTypeObj() << ");\n";
								of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\telse\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t}\n";
								of << "\t\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsValueWireType() << ":\n";
								of << "\t\t\t\t{\n";
								of << "\t\t\t\t\t" << messageMember.CsValueType() << " value = default(" << messageMember.CsValueType() << ");\n";
								of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(ref value, buf);\n";
								of << "\t\t\t\t\tadd_" << messageMember.m_Name << "(value);\n";
								of << "\t\t\t\t}\n";
								of << "\t\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_map:
				case PMM_hashmap:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
							of << "\t\t\t\t{\n";
							of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							if (messageMember.m_Modifier == PMM_map)
							{
								of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsMapType() << "();\n";
							}
							else
							{
								of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsHashMapType() << "();\n";
							}
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
							of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\telse\n";
							of << "\t\t\t\t\t{\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
							of << "\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
								of << "\t\t\t\t{\n";
								of << "\t\t\t\t\tif (null == " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								if (messageMember.m_Modifier == PMM_map)
								{
									of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsMapType() << "();\n";
								}
								else
								{
									of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.CsHashMapType() << "();\n";
								}
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tif (null != " << messageMember.m_Name << "_)\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.DictionaryDecode(" << messageMember.m_Name << "_, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
								of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\telse\n";
								of << "\t\t\t\t\t{\n";
								of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t}\n";
								of << "\t\t\t\tbreak;\n";
							}
							else
							{
								switch (messageMember.m_ValueType)
								{
									case PMT_bool:
									case PMT_int32:
									case PMT_sint32:
									case PMT_uint32:
									case PMT_int64:
									case PMT_sint64:
									case PMT_uint64:
									case PMT_sfixed32:
									case PMT_fixed32:
									case PMT_float:
									case PMT_sfixed64:
									case PMT_fixed64:
									case PMT_double:
									case PMT_enum:
									case PMT_string:
									{
										of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
										of << "\t\t\t\t{\n";
										of << "\t\t\t\t\t" << messageMember.CsKeyType() << " key = default(" << messageMember.CsKeyType() << ");\n";
										of << "\t\t\t\t\t" << messageMember.CsValueType() << " value = default(" << messageMember.CsValueType() << ");\n";
										of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.EntryDecode(ref key, ref value, buf, " << messageMember.CsKeyTypeObj() << ", " << messageMember.CsValueTypeObj() << ");\n";
										of << "\t\t\t\t\tadd_" << messageMember.m_Name << "(key, value);\n";
										of << "\t\t\t\t}\n";
										of << "\t\t\t\tbreak;\n";
									}
									break;
									case PMT_message:
									{
										of << "\t\t\t\tcase " << messageMember.m_Tag << " << 3 | (uint)" << messageMember.CsCollectionWireType() << ":\n";
										of << "\t\t\t\t{\n";
										of << "\t\t\t\t\t" << messageMember.CsKeyType() << " key = default(" << messageMember.CsKeyType() << ");\n";
										of << "\t\t\t\t\t" << messageMember.CsValueType() << " value = new " << messageMember.CsValueType() << "();\n";
										of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.EntryDecode(ref key, ref value, buf, " << messageMember.CsKeyTypeObj() << ");\n";
										of << "\t\t\t\t\tadd_" << messageMember.m_Name << "(key, value);\n";
										of << "\t\t\t\t}\n";
										of << "\t\t\t\tbreak;\n";
									}
									break;
									default:
									break;
								}
							}
						}
						break;
						default:
						break;
					}
				}
				default:
				break;
			}

			itMessageMember++;
		}
		of << "\t\t\t\tdefault:\n";
		of << "\t\t\t\tbytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
		of << "\t\t\t\tbreak;\n";
		of << "\t\t\t}\n";
		of << "\t\t}\n";
		of << "\t\t\n";
	}
	of << "\t\treturn bytes;\n";
	of << "\t}\n";
}
void ProtoCodeTool::ProtoMessage2Cs_Clear(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic override void Clear()\n";
	of << "\t{\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\tclear_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "\t}\n";
}
void ProtoCodeTool::ProtoMessage2Cs_Release(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic override void Release()\n";
	of << "\t{\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\trelease_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "\t}\n";
}

void ProtoCodeTool::ProtoFile2Java(const ProtoFile& protoFile, std::ofstream& of)
{
	ProtoFile2Java_Package(protoFile, of);
	ProtoFile2Java_Import(protoFile, of);
	ProtoFile2Java_FileClass(protoFile, of);
}
void ProtoCodeTool::ProtoFile2Java_Package(const ProtoFile& protoFile, std::ofstream& of)
{
	of << "package " << protoFile.m_Package << ";\n\n";
}
void ProtoCodeTool::ProtoFile2Java_Import(const ProtoFile& protoFile, std::ofstream& of)
{
	of << "import java.io.IOException;\n";
	of << "import java.io.InputStream;\n";
	of << "import java.io.OutputStream;\n\n";
}
void ProtoCodeTool::ProtoFile2Java_FileClass(const ProtoFile& protoFile, std::ofstream& of)
{
	of << "public class " << protoFile.m_FileName << " {\n";
	of << "\n";

	std::map<unsigned int, std::string>::const_iterator itStructOrder = protoFile.m_StructOrder.begin();
	while (itStructOrder != protoFile.m_StructOrder.end())
	{
		std::map<std::string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(itStructOrder->second);
		if (itStruct != protoFile.m_Structs.end())
		{
			const ProtoStruct& protoStruct = itStruct->second;
			switch (protoStruct.m_Type)
			{
				case PT_message:
				{
					ProtoMessage2Java(protoStruct, of);
				}
				break;
				case PT_enum:
				{
					ProtoEnum2Java(protoStruct, of);
				}
				break;
				default:
				break;
			}
			of << "\n";
		}

		itStructOrder++;
	}

	of << "}\n";
}
void ProtoCodeTool::ProtoEnum2Java(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic enum " << protoStruct.m_Name << " {\n";
	of << "\n";

	int count = 0;
	std::map<unsigned int, std::string>::const_iterator itEnumMemberOrder = protoStruct.m_EnumMemberOrder.begin();
	while (itEnumMemberOrder != protoStruct.m_EnumMemberOrder.end())
	{
		std::map<std::string, EnumMember>::const_iterator itEnumMember = protoStruct.m_EnumMembers.find(itEnumMemberOrder->second);
		if (itEnumMember != protoStruct.m_EnumMembers.end())
		{
			const EnumMember& enumMember = itEnumMember->second;

			of << "\t\t" << enumMember.m_Name << "(" << enumMember.m_Value << ")";
			if (count != protoStruct.m_EnumMembers.size() - 1)
			{
				of << ",\n\n";
			}
			else
			{
				of << ";\n\n";
			}
			count++;
		}

		itEnumMemberOrder++;
	}

	itEnumMemberOrder = protoStruct.m_EnumMemberOrder.begin();
	while (itEnumMemberOrder != protoStruct.m_EnumMemberOrder.end())
	{
		std::map<std::string, EnumMember>::const_iterator itEnumMember = protoStruct.m_EnumMembers.find(itEnumMemberOrder->second);
		if (itEnumMember != protoStruct.m_EnumMembers.end())
		{
			const EnumMember& enumMember = itEnumMember->second;

			of << "\t\tpublic static final int " << enumMember.m_Name << "_VALUE = " << enumMember.m_Value << ";\n";
		}

		itEnumMemberOrder++;
	}
	of << "\n";

	of << "\t\tprivate int value;\n";
	of << "\n";
	of << "\t\tprivate " << protoStruct.m_Name << "(int value) {\n";
	of << "\t\t\tthis.setValue(value);\n";
	of << "\t\t}\n";
	of << "\n";
	of << "\t\tpublic int getValue() {\n";
	of << "\t\t\treturn value;\n";
	of << "\t\t}\n";
	of << "\n";
	of << "\t\tprivate void setValue(int value) {\n";
	of << "\t\t\tthis.value = value;\n";
	of << "\t\t}\n";
	of << "\n";

	of << "\t\tpublic static " << protoStruct.m_Name << " valueOf(int value) {\n";
	of << "\t\t\tswitch (value) {\n";
	itEnumMemberOrder = protoStruct.m_EnumMemberValue.begin();
	while (itEnumMemberOrder != protoStruct.m_EnumMemberValue.end())
	{
		std::map<std::string, EnumMember>::const_iterator itEnumMember = protoStruct.m_EnumMembers.find(itEnumMemberOrder->second);
		if (itEnumMember != protoStruct.m_EnumMembers.end())
		{
			const EnumMember& enumMember = itEnumMember->second;

			of << "\t\t\t\tcase " << enumMember.m_Value << " :\n";
			of << "\t\t\t\t\treturn " << enumMember.m_Name << ";\n";
		}

		itEnumMemberOrder++;
	}
	of << "\t\t\t\tdefault :\n";
	of << "\t\t\t\t\treturn null;\n";
	of << "\t\t\t}\n";
	of << "\t\t}\n";

	of << "\t};\n\n";
}
void ProtoCodeTool::ProtoMessage2Java(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\tpublic static class " << protoStruct.m_Name << " extends common.miniproto.ProtoBase {\n";
	of << "\n";
	of << "\t\tprivate common.miniproto.ProtoBitMap m_bits;\n";
	of << "\n";
	std::map<unsigned int, unsigned int>::const_iterator itMessageMemberOrder = protoStruct.m_MessageMemberOrder.begin();
	while (itMessageMemberOrder != protoStruct.m_MessageMemberOrder.end())
	{
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.find(itMessageMemberOrder->second);
		if (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			ProtoMessage2Java_Member(protoStruct, itMessageMemberOrder->first, messageMember, of);
			of << "\n";
		}

		itMessageMemberOrder++;
	}
	ProtoMessage2Java_Constructor(protoStruct, of);
	of << "\n";
	ProtoMessage2Java_ByteSize(protoStruct, of);
	of << "\n";
	ProtoMessage2Java_Code(protoStruct, of);
	of << "\n";
	ProtoMessage2Java_Decode(protoStruct, of);
	of << "\n";
	ProtoMessage2Java_Clear(protoStruct, of);
	of << "\n";
	ProtoMessage2Java_Release(protoStruct, of);
	of << "\t};\n\n";
}
void ProtoCodeTool::ProtoMessage2Java_Member(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of)
{
	//definition
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			of << "\t\tprivate " << messageMember.JavaValueType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		case PMM_array:
		{
			of << "\t\tprivate " << messageMember.JavaArrayType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		case PMM_set:
		{
			of << "\t\tprivate " << messageMember.JavaSetType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		case PMM_hashset:
		{
			of << "\t\tprivate " << messageMember.JavaHashSetType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		case PMM_map:
		{
			of << "\t\tprivate " << messageMember.JavaMapType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		case PMM_hashmap:
		{
			of << "\t\tprivate " << messageMember.JavaHashMapType() << " " << messageMember.m_Name << "_;\n\n";
		}
		break;
		default:
		break;
	}

	//getter/setter
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			switch (messageMember.m_ValueType)
			{
				case PMT_bool:
				case PMT_int32:
				case PMT_sint32:
				case PMT_uint32:
				case PMT_int64:
				case PMT_sint64:
				case PMT_uint64:
				case PMT_sfixed32:
				case PMT_fixed32:
				case PMT_float:
				case PMT_sfixed64:
				case PMT_fixed64:
				case PMT_double:
				{
					of << "\t\tpublic " << messageMember.JavaValueType() << " get_" << messageMember.m_Name << "() {\n";
					of << "\t\t\treturn " << messageMember.m_Name << "_;\n";
					of << "\t\t}\n";
					of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaValueType() << " value) {\n";
					of << "\t\t\t" << messageMember.m_Name << "_ = value;\n";
					of << "\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t}\n";
				}
				break;
				case PMT_enum:
				{
					of << "\t\tpublic " << messageMember.JavaFullName() << " get_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\treturn " << messageMember.JavaFullName() << ".valueOf(" << messageMember.m_Name << "_);\n";
					of << "\t\t\t} else {\n";
					of << "\t\t\t\treturn null;\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
					of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaFullName() << " value) {\n";
					of << "\t\t\tif (null != value) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_ = value.getValue();\n";
					of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
				}
				break;
				case PMT_string:
				case PMT_message:
				{
					of << "\t\tpublic " << messageMember.JavaValueType() << " get_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\treturn " << messageMember.m_Name << "_;\n";
					of << "\t\t\t} else {\n";
					of << "\t\t\t\treturn null;\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
					of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaValueType() << " value) {\n";
					of << "\t\t\tif (null != value) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_ = value;\n";
					of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
				}
				break;
				default:
				break;
			}
		}
		break;
		case PMM_array:
		{
			of << "\t\tpublic int " << messageMember.m_Name << "_size() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.size();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn 0;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaArrayType() << " value) {\n";
			of << "\t\t\tif (null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic " << messageMember.JavaArrayIteratorType() << " " << messageMember.m_Name << "_iterator() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.iterator();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn null;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic " << messageMember.JavaValueType() << " get_" << messageMember.m_Name << "(int index) {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.get(index);\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\tthrow new NullPointerException(\"has not " << messageMember.m_Name << "_\");\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void set_" << messageMember.m_Name << "(int index, " << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaArrayType() << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.set(index, value);\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void add_" << messageMember.m_Name << "(" << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaArrayType() << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.add(value);\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
		}
		break;
		case PMM_set:
		case PMM_hashset:
		{
			of << "\t\tpublic int " << messageMember.m_Name << "_size() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.size();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn 0;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaSetType() << " value) {\n";
			}
			else
			{
				of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaHashSetType() << " value) {\n";
			}
			of << "\t\t\tif (null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic " << messageMember.JavaSetIteratorType() << " " << messageMember.m_Name << "_iterator() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.iterator();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn null;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void add_" << messageMember.m_Name << "(" << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
			if (messageMember.m_Modifier == PMM_set)
			{
				of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaSetType() << "();\n";
			}
			else
			{
				of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashSetType() << "();\n";
			}
			of << "\t\t\t}\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.add(value);\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void remove_" << messageMember.m_Name << "(" << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.remove(value);\n";
			of << "\t\t\t\tif(0 == " << messageMember.m_Name << "_.size()) {\n";
			of << "\t\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t\t}\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic boolean " << messageMember.m_Name << "_contains(" << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && null != value) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.contains(value);\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn false;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
		}
		break;
		case PMM_map:
		case PMM_hashmap:
		{
			of << "\t\tpublic int " << messageMember.m_Name << "_size() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.size();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn 0;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaMapType() << " value) {\n";
			}
			else
			{
				of << "\t\tpublic void set_" << messageMember.m_Name << "(" << messageMember.JavaHashMapType() << " value) {\n";
			}
			of << "\t\t\tif (null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = value;\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic " << messageMember.JavaMapIteratorType() << " " << messageMember.m_Name << "_iterator() {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.entrySet().iterator();\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn null;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void add_" << messageMember.m_Name << "(" << messageMember.JavaCollectionKeyType() << " key, " << messageMember.JavaCollectionValueType() << " value) {\n";
			of << "\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
			if (messageMember.m_Modifier == PMM_map)
			{
				of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaMapType() << "();\n";
			}
			else
			{
				of << "\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashMapType() << "();\n";
			}
			of << "\t\t\t}\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && null != key && null != value) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.put(key, value);\n";
			of << "\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic " << messageMember.JavaCollectionValueType() << " find_" << messageMember.m_Name << "(" << messageMember.JavaCollectionKeyType() << " key) {\n";
			of << "\t\t\tif (null == " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && null != key) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.get(key);\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn null;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void remove_" << messageMember.m_Name << "(" << messageMember.JavaCollectionKeyType() << " key) {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && null != key) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.remove(key);\n";
			of << "\t\t\t\tif(0 == " << messageMember.m_Name << "_.size()) {\n";
			of << "\t\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t\t}\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic boolean " << messageMember.m_Name << "_contains(" << messageMember.JavaCollectionKeyType() << " key) {\n";
			of << "\t\t\tif (null != " << messageMember.m_Name << "_ && has_" << messageMember.m_Name << "() && null != key) {\n";
			of << "\t\t\t\treturn " << messageMember.m_Name << "_.containsKey(key);\n";
			of << "\t\t\t} else {\n";
			of << "\t\t\t\treturn false;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
		}
		break;
		default:
		break;
	}

	//cleaner
	switch (messageMember.m_Modifier)
	{
		case PMM_singular:
		{
			switch (messageMember.m_ValueType)
			{
				case PMT_bool:
				case PMT_int32:
				case PMT_sint32:
				case PMT_uint32:
				case PMT_int64:
				case PMT_sint64:
				case PMT_uint64:
				case PMT_sfixed32:
				case PMT_fixed32:
				case PMT_float:
				case PMT_sfixed64:
				case PMT_fixed64:
				case PMT_double:
				case PMT_enum:
				{
					of << "\t\tpublic void clear_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
					of << "\t\tpublic void release_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
				}
				break;
				case PMT_string:
				{
					of << "\t\tpublic void clear_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tif (" << messageMember.m_Name << "_ != null) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_ = null;\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
					of << "\t\tpublic void release_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tif (" << messageMember.m_Name << "_ != null) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_ = null;\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
				}
				break;
				case PMT_message:
				{
					of << "\t\tpublic void clear_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_.Clear();\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
					of << "\t\tpublic void release_" << messageMember.m_Name << "() {\n";
					of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
					of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t}\n";
					of << "\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
					of << "\t\t\t\t" << messageMember.m_Name << "_ = null;\n";
					of << "\t\t\t}\n";
					of << "\t\t}\n";
				}
				break;
				default:
				break;
			}
		}
		break;
		case PMM_array:
		case PMM_set:
		case PMM_hashset:
		case PMM_map:
		case PMM_hashmap:
		{
			of << "\t\tpublic void clear_" << messageMember.m_Name << "() {\n";
			of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t\tif (" << messageMember.m_Name << "_ != null) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_.clear();\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
			of << "\t\tpublic void release_" << messageMember.m_Name << "() {\n";
			of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
			of << "\t\t\t\tclear_has_" << messageMember.m_Name << "();\n";
			of << "\t\t\t}\n";
			of << "\t\t\tif (" << messageMember.m_Name << "_ != null) {\n";
			of << "\t\t\t\t" << messageMember.m_Name << "_ = null;\n";
			of << "\t\t\t}\n";
			of << "\t\t}\n";
		}
		break;
		default:
		break;
	}

	//bits
	if (true)
	{
		of << "\t\tpublic boolean has_" << messageMember.m_Name << "() {\n";
		of << "\t\t\treturn m_bits.HasBit(" << order << ");\n";
		of << "\t\t}\n";
		of << "\t\tprivate void set_has_" << messageMember.m_Name << "() {\n";
		of << "\t\t\tm_bits.SetBit(" << order << ");\n";
		of << "\t\t}\n";
		of << "\t\tprivate void clear_has_" << messageMember.m_Name << "() {\n";
		of << "\t\t\tm_bits.ClearBit(" << order << ");\n";
		of << "\t\t}\n";
	}
}
void ProtoCodeTool::ProtoMessage2Java_Constructor(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic " << protoStruct.m_Name << "() {\n";
	of << "\n";
	of << "\t\t\tm_bits = new common.miniproto.ProtoBitMap(" << protoStruct.m_MessageMembers.size() << ");\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				switch (messageMember.m_ValueType)
				{
					case PMT_string:
					case PMT_message:
					of << "\t\t\t" << messageMember.m_Name << "_ = null;\n";
					break;
					default:
					break;
				}
			}
			break;
			case PMM_array:
			case PMM_set:
			case PMM_hashset:
			case PMM_map:
			case PMM_hashmap:
			{
				of << "\t\t\t" << messageMember.m_Name << "_ = null;\n";
			}
			break;
			default:
			break;
		}

		itMessageMember++;
	}
	of << "\t\t}\n";
}
void ProtoCodeTool::ProtoMessage2Java_ByteSize(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic int ByteSize() throws IOException {\n";
	of << "\n";
	of << "\t\t\tint bytes = 0;\n";
	of << "\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				switch (messageMember.m_ValueType)
				{
					case PMT_bool:
					case PMT_int32:
					case PMT_sint32:
					case PMT_uint32:
					case PMT_int64:
					case PMT_sint64:
					case PMT_uint64:
					case PMT_sfixed32:
					case PMT_fixed32:
					case PMT_float:
					case PMT_sfixed64:
					case PMT_fixed64:
					case PMT_double:
					case PMT_enum:
					{
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ");\n";
						of << "\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_);\n";
					}
					break;
					case PMT_string:
					case PMT_message:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ");\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_);\n";
						of << "\t\t\t\t}\n";
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.ArrayByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tfor (int i = 0; i < " << messageMember.m_Name << "_.size(); i++) {\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ");\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(" << messageMember.m_Name << "_.get(i));\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.SetByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.SetByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t" << messageMember.JavaSetIteratorType() << " it = " << messageMember.m_Name << "_.iterator();\n";
							of << "\t\t\t\t\twhile (it.hasNext()) {\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ");\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "ByteSize(it.next());\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
						of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.MapByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
							of << "\t\t\t\t\tbytes += common.miniproto.ProtoTool.MapByteSize(" << messageMember.m_Name << "_, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t" << messageMember.JavaMapIteratorType() << " it = " << messageMember.m_Name << "_.entrySet().iterator();\n";
							of << "\t\t\t\t\twhile (it.hasNext()) {\n";
							of << "\t\t\t\t\t\t" << messageMember.JavaMapEntryType() << " entry = it.next();\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.KeyByteSize(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ");\n";
							of << "\t\t\t\t\t\tbytes += common.miniproto.ProtoTool.EntryByteSize(entry.getKey(), entry.getValue(), " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t\t\t}\n";

		itMessageMember++;
	}
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\n";
	}
	of << "\t\t\treturn bytes;\n";
	of << "\t\t}\n";
}
void ProtoCodeTool::ProtoMessage2Java_Code(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic void Code(OutputStream buf, int size) throws IOException {\n";
	of << "\n";

	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\t\tif (has_" << messageMember.m_Name << "()) {\n";
		switch (messageMember.m_Modifier)
		{
			case PMM_singular:
			{
				switch (messageMember.m_ValueType)
				{
					case PMT_bool:
					case PMT_int32:
					case PMT_sint32:
					case PMT_uint32:
					case PMT_int64:
					case PMT_sint64:
					case PMT_uint64:
					case PMT_sfixed32:
					case PMT_fixed32:
					case PMT_float:
					case PMT_sfixed64:
					case PMT_fixed64:
					case PMT_double:
					case PMT_enum:
					{
						of << "\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ", buf);\n";
						of << "\t\t\t\tcommon.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
					}
					break;
					case PMT_string:
					case PMT_message:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ", buf);\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_, buf);\n";
						of << "\t\t\t\t}\n";
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_array:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.ArrayCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tfor (int i = 0; i < " << messageMember.m_Name << "_.size(); i++) {\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ", buf);\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(" << messageMember.m_Name << "_.get(i), buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_set:
			case PMM_hashset:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.SetCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t" << messageMember.JavaSetIteratorType() << " it = " << messageMember.m_Name << "_.iterator();\n";
							of << "\t\t\t\t\twhile (it.hasNext()) {\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaValueWireType() << ", buf);\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Code(it.next(), buf);\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			case PMM_map:
			case PMM_hashmap:
			{
				switch (g_ProtoVersion)
				{
					case PRV_Proto3:
					{
						of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
						of << "\t\t\t\t\tcommon.miniproto.ProtoTool.MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
						of << "\t\t\t\t}\n";
					}
					break;
					case PRV_Proto2:
					{
						if (messageMember.m_PackedTrue)
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
							of << "\t\t\t\t\tcommon.miniproto.ProtoTool.MapCode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t}\n";
						}
						else
						{
							of << "\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t" << messageMember.JavaMapIteratorType() << " it = " << messageMember.m_Name << "_.entrySet().iterator();\n";
							of << "\t\t\t\t\twhile (it.hasNext()) {\n";
							of << "\t\t\t\t\t\t" << messageMember.JavaMapEntryType() << " entry = it.next();\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool.KeyCode(" << messageMember.m_Tag << ", " << messageMember.JavaCollectionWireType() << ", buf);\n";
							of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool.EntryCode(entry.getKey(), entry.getValue(), buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t}\n";
						}
					}
					break;
					default:
					break;
				}
			}
			break;
			default:
			break;
		}
		of << "\t\t\t}\n";

		itMessageMember++;
	}

	of << "\t\t}\n";
}
void ProtoCodeTool::ProtoMessage2Java_Decode(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic void Decode(InputStream buf, int size) throws IOException {\n";
	of << "\n";
	if (protoStruct.m_MessageMembers.size() > 0)
	{
		of << "\t\t\tint oldPos = buf.available();\n";
		of << "\t\t\twhile ((oldPos - buf.available()) < size) {\n";
		of << "\t\t\t\tint key = common.miniproto.ProtoTool.KeyDecode(buf);\n";
		of << "\t\t\t\tcommon.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);\n";
		of << "\t\t\t\tswitch (key) {\n";
		std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
		while (itMessageMember != protoStruct.m_MessageMembers.end())
		{
			const MessageMember& messageMember = itMessageMember->second;

			switch (messageMember.m_Modifier)
			{
				case PMM_singular:
				{
					of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaValueWireType() << "_VALUE : {\n";
					of << "\t\t\t\t\t\t" << messageMember.m_Name << "_ = common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(buf";
					if (messageMember.m_ValueType == PMT_message)
					{
						of << ", " << messageMember.JavaValueType() << ".class";
					}
					of << ");\n";
					of << "\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
					of << "\t\t\t\t\t}\n";
					of << "\t\t\t\t\tbreak;\n";
				}
				break;
				case PMM_array:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
							of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaArrayType() << "();\n";
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType();
							if (messageMember.m_ValueType == PMT_message)
							{
								of << ", " << messageMember.JavaValueType() << ".class";
							}
							of << ");\n";
							of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t\t} else {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
								of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaArrayType() << "();\n";
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.ArrayDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType();
								if (messageMember.m_ValueType == PMT_message)
								{
									of << ", " << messageMember.JavaValueType() << ".class";
								}
								of << ");\n";
								of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t\t} else {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaValueWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\t" << messageMember.JavaValueType() << " value = common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(buf";
								if (messageMember.m_ValueType == PMT_message)
								{
									of << ", " << messageMember.JavaValueType() << ".class";
								}
								of << ");\n";
								of << "\t\t\t\t\t\tadd_" << messageMember.m_Name << "(value);\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_set:
				case PMM_hashset:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
							of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
							if (messageMember.m_Modifier == PMM_set)
							{
								of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaSetType() << "();\n";
							}
							else
							{
								of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashSetType() << "();\n";
							}
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
							of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t\t} else {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
								if (messageMember.m_Modifier == PMM_set)
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaSetType() << "();\n";
								}
								else
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashSetType() << "();\n";
								}
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.SetDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaValueFieldType() << ");\n";
								of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t\t} else {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaValueWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\t" << messageMember.JavaValueType() << " value = common.miniproto.ProtoTool." << messageMember.ValueFunPrefix() << "Decode(buf);\n";
								of << "\t\t\t\t\t\tadd_" << messageMember.m_Name << "(value);\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				case PMM_map:
				case PMM_hashmap:
				{
					switch (g_ProtoVersion)
					{
						case PRV_Proto3:
						{
							of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
							of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
							if (messageMember.m_Modifier == PMM_map)
							{
								of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaMapType() << "();\n";
							}
							else
							{
								of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashMapType() << "();\n";
							}
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType();
							if (messageMember.m_ValueType == PMT_message)
							{
								of << ", " << messageMember.JavaValueType() << ".class";
							}
							of << ");\n";
							of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
							of << "\t\t\t\t\t\t} else {\n";
							of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
							of << "\t\t\t\t\t\t}\n";
							of << "\t\t\t\t\t}\n";
							of << "\t\t\t\t\tbreak;\n";
						}
						break;
						case PRV_Proto2:
						{
							if (messageMember.m_PackedTrue)
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaCollectionWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
								if (messageMember.m_Modifier == PMM_map)
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaMapType() << "();\n";
								}
								else
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashMapType() << "();\n";
								}
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.MapDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType();
								if (messageMember.m_ValueType == PMT_message)
								{
									of << ", " << messageMember.JavaValueType() << ".class";
								}
								of << ");\n";
								of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t\t} else {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
							else
							{
								of << "\t\t\t\t\tcase " << messageMember.m_Tag << " << 3 | " << messageMember.JavaValueWireType() << "_VALUE : {\n";
								of << "\t\t\t\t\t\tif (null == " << messageMember.m_Name << "_) {\n";
								if (messageMember.m_Modifier == PMM_map)
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaMapType() << "();\n";
								}
								else
								{
									of << "\t\t\t\t\t\t\t" << messageMember.m_Name << "_ = new " << messageMember.JavaHashMapType() << "();\n";
								}
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t\tif (null != " << messageMember.m_Name << "_) {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.EntryDecode(" << messageMember.m_Name << "_, buf, " << messageMember.JavaKeyFieldType() << ", " << messageMember.JavaValueFieldType();
								if (messageMember.m_ValueType == PMT_message)
								{
									of << ", " << messageMember.JavaValueType() << ".class";
								}
								of << ");\n";
								of << "\t\t\t\t\t\t\tset_has_" << messageMember.m_Name << "();\n";
								of << "\t\t\t\t\t\t} else {\n";
								of << "\t\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
								of << "\t\t\t\t\t\t}\n";
								of << "\t\t\t\t\t}\n";
								of << "\t\t\t\t\tbreak;\n";
							}
						}
						break;
						default:
						break;
					}
				}
				break;
				default:
				break;
			}

			itMessageMember++;
		}
		of << "\t\t\t\t\tdefault:\n";
		of << "\t\t\t\t\t\tcommon.miniproto.ProtoTool.UnknownDecode(type, buf);\n";
		of << "\t\t\t\t\tbreak;\n";
		of << "\t\t\t\t}\n";
		of << "\t\t\t}\n";
	}
	of << "\t\t}\n";
}
void ProtoCodeTool::ProtoMessage2Java_Clear(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic void Clear() {\n";
	of << "\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\t\tclear_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "\t\t}\n";
}
void ProtoCodeTool::ProtoMessage2Java_Release(const ProtoStruct& protoStruct, std::ofstream& of)
{
	of << "\t\tpublic void Release() {\n";
	of << "\n";
	std::map<unsigned int, MessageMember>::const_iterator itMessageMember = protoStruct.m_MessageMembers.begin();
	while (itMessageMember != protoStruct.m_MessageMembers.end())
	{
		const MessageMember& messageMember = itMessageMember->second;

		of << "\t\t\trelease_" << messageMember.m_Name << "();\n";

		itMessageMember++;
	}
	of << "\t\t}\n";
}