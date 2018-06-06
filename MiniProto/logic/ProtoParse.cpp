#include "ProtoParse.h"

#include <boost/bind.hpp>
#include <boost/spirit/include/classic.hpp>

using namespace std;

using namespace boost;
using namespace boost::spirit::classic;

using namespace common::tool;

// 有效的结构名/字段名/枚举名的字符构成
// ValidProtoName ::= (([_] | [a-z] | [A-Z]) , {([_] | [a-z] | [A-Z] | [0-9])})
const rule<> ValidProtoName =
(
	(
		(
			ch_p('_') | range_p('a', 'z') | range_p('A', 'Z')
		) >>
		*(
			ch_p('_') | range_p('a', 'z') | range_p('A', 'Z') | range_p('0', '9')
		)
	) -
	(
		str_p("bool") |
		str_p("int32") | str_p("sint32") | str_p("uint32") | str_p("int64") | str_p("sint64") | str_p("uint64") |
		str_p("sfixed32") | str_p("fixed32") | str_p("float") | str_p("sfixed64") | str_p("fixed64") | str_p("double") |
		str_p("string") | str_p("bytes") |
		str_p("required") | str_p("optional") | str_p("repeated") | str_p("array") | str_p("set") | str_p("map") | str_p("hashset") | str_p("hashmap") |
		str_p("message") | str_p("enum") |
		str_p("import") |
		str_p("package")
	)
);

ProtoParse::ProtoParse()
{

}

ProtoParse::~ProtoParse()
{

}

void ProtoParse::ParseProto(const char* expr)
{
	// 整个proto文件，5部分构成：
	// packageStr ::= "package" , {任意非';'字符} , ';'
	// importStr ::= "import" , {任意非';'字符}, ';'
	// messageStr ::= "message" , {任意非'{'字符} , '{' , {任意非'}'字符} , '}'
	// enumStr ::= "enum" , {任意非'{'字符} , '{' , {任意非'}'字符} , '}'
	// unknownStr ::= {任意非'\n'字符}
	// protoStr ::= {(packetStr | importStr | messageStr | enumStr | unknownStr) , {'\n'}}
	rule<> packageStr, importStr, messageStr, enumStr, unknownStr;
	rule<> protoStr;

	packageStr = (str_p("package") >> +(anychar_p - ch_p(';')) >> ch_p(';'));
	importStr = (str_p("import") >> +(anychar_p - ch_p(';')) >> ch_p(';'));
	messageStr = (str_p("message") >> +(anychar_p - ch_p('{')) >> ch_p('{') >> *(anychar_p - ch_p('}')) >> ch_p('}'));
	enumStr = (str_p("enum") >> +(anychar_p - ch_p('{')) >> ch_p('{') >> *(anychar_p - ch_p('}')) >> ch_p('}'));
	unknownStr = +(anychar_p - ch_p('\n'));

	protoStr =
		(
			*(
				(
					(packageStr)[bind(&ProtoParse::ParseProtoPackage, this, _1, _2)] |
					(importStr)[bind(&ProtoParse::ParseProtoImport, this, _1, _2)] |
					(messageStr)[bind(&ProtoParse::ParseProtoMessage, this, _1, _2)] |
					(enumStr)[bind(&ProtoParse::ParseProtoEnum, this, _1, _2)] |
					(unknownStr)[bind(&ProtoParse::ParseProtoUnknown, this, _1, _2)]
				) >>
				!(
					ch_p('\n')
				)
			)
		);

	parse(expr, protoStr);
}

void ProtoParse::ParseProtoPackage(const char* start, const char* end)
{
	string packageStr(start, end - start);

	// package构成：
	// fileNameRule ::= ValidProtoName , {'.' , ValidProtoName}
	// packageRule ::= "package " , fileNameRule , {' '} , ';'
	rule<> fileNameRule;
	rule<> packageRule;
	fileNameRule =
		(
			ValidProtoName >> +(ch_p('.') >> ValidProtoName)
		);
	packageRule =
		(
			str_p("package ") >>
			(fileNameRule)[bind(&ProtoParse::PushPackageName, this, _1, _2)] >>
			!(ch_p(' ')) >>
			ch_p(';')
		);

	if (!(parse(packageStr.c_str(), packageRule).full))
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << packageStr << "\" is not valid package name. It will be skipped." << endl;
	}
}
void ProtoParse::ParseProtoImport(const char* start, const char* end)
{
	string importStr(start, end - start);

	// import构成：
	// fileNameRule ::= ValidProtoName , {'.' , ValidProtoName}
	// importRule ::= "import \"" , fileNameRule , '\"' , {' '} , ';'
	rule<> fileNameRule;
	rule<> importRule;
	fileNameRule =
		(
			ValidProtoName >> +(ch_p('.') >> ValidProtoName)
		);
	importRule =
		(
			str_p("import \"") >>
			(fileNameRule)[bind(&ProtoParse::PushImportName, this, _1, _2)] >>
			ch_p('\"') >>
			!(ch_p(' ')) >>
			ch_p(';')
		);

	if (!(parse(importStr.c_str(), importRule).full))
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << importStr << "\" is not valid import name. It will be skipped." << endl;
	}
}
void ProtoParse::ParseProtoMessage(const char* start, const char* end)
{
	string messageStr(start, end - start);

	// message构成：
	// messageRule ::= "message " , ValidProtoName , {' '} , {'\n'} , '{' , {'\n'} , {{任意非';'字符 , {';'}} , {'\n'}} , '}'
	rule<> messageRule;
	messageRule =
		(
			str_p("message ") >>
			(ValidProtoName)[bind(&ProtoParse::PushMessageStart, this, _1, _2)] >>
			!(ch_p(' ')) >>
			!(ch_p('\n')) >>
			ch_p('{') >>
			!(ch_p('\n')) >>
			*(
				(
					*(anychar_p - ch_p(';')) >> ch_p(';')
				)[bind(&ProtoParse::ParseProtoMessageMember, this, _1, _2)] >>
				!(ch_p('\n'))
			) >>
			!(ch_p('\n')) >>
			ch_p('}')
		)[bind(&ProtoParse::PushMessageEnd, this)];

	if (!(parse(messageStr.c_str(), messageRule).full))
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << messageStr << " is not valid message. It will be skipped." << endl;
	}
}
void ProtoParse::ParseProtoMessageMember(const char* start, const char* end)
{
	string memberStr(start, end - start);

	// messageMember构成：
	// typeNameRule ::= {ValidProtoName , '.'} , ValidProtoName
	// typeRule1 ::= "bool" | "int32" | "sint32" | "uint32" | "int64" | "sint64" | "uint64" | "sfixed32" | "fixed32" | "float" | "sfixed64" | "fixed64" | "double" | "string" | "bytes" | typeNameRule
	// typeRule2 ::=          "int32" | "sint32" | "uint32" | "int64" | "sint64" | "uint64" | "sfixed32" | "fixed32"           | "sfixed64" | "fixed64"            | "string"
	// typeRule ::= {"map",     {' '} , '<', {' '} , typeRule2 , {' '} , ',' , {' '}, typeRule1, {' '} , '>'} | 
	//				{"hashmap", {' '} , '<', {' '} , typeRule2 , {' '} , ',' , {' '}, typeRule1, {' '} , '>'} | 
	//				{"set",     {' '} , '<', {' '} , typeRule2 ,                                 {' '} , '>'} | 
	//				{"hashset", {' '} , '<', {' '} , typeRule2 ,                                 {' '} , '>'} | 
	//				{"array",   {' '} , '<', {' '} , typeRule1 ,                                 {' '} , '>'} | 
	//				{"repeated" , ' ' , typeRule1} | 
	//				{"required" , ' ' , typeRule1} | 
	//				{"optional" , ' ' , typeRule1} | 
	//				{typeRule1}
	// nameRule ::= ValidProtoName
	// indexRule ::= [1-9] , {[0-9]}
	// moreInfoRule ::= ('[' , {' '} , "packed" , {' '} , '=' , {' '} , "true" , {' '} , ']') | ('[' , {任意非']'字符} , ']')
	// memberRule ::= typeRule , ' ' , nameRule , {' '} , '=' , {' '} , indexRule , {' '} , moreInfoRule , {' '} , ';'
	rule<> typeNameRule;
	rule<> typeRule1, typeRule2;
	rule<> typeRule, nameRule, indexRule, moreInfoRule;
	rule<> memberRule;

	typeNameRule =
		(
			*(ValidProtoName >> ch_p('.')) >> ValidProtoName
		);
	typeRule1 =
		(
			str_p("bool") |
			str_p("int32") | str_p("sint32") | str_p("uint32") | str_p("int64") | str_p("sint64") | str_p("uint64") | 
			str_p("sfixed32") | str_p("fixed32") | str_p("float") | str_p("sfixed64") | str_p("fixed64") | str_p("double") |
			str_p("string") | str_p("bytes") |
			typeNameRule
		);
	typeRule2 =
		(
			str_p("int32") | str_p("sint32") | str_p("uint32") | str_p("int64") | str_p("sint64") | str_p("uint64") |
			str_p("sfixed32") | str_p("fixed32") | str_p("sfixed64") | str_p("fixed64") | 
			str_p("string")
		);
	typeRule =
		(
			(
				str_p("map") >>
				!ch_p(' ') >>
				ch_p('<') >>
				!ch_p(' ') >>
				(typeRule2 >> !ch_p(' ') >> ch_p(',') >> !ch_p(' ') >> typeRule1)[bind(&ProtoParse::PushMessageMapMemberType, this, _1, _2)] >>
				!ch_p(' ') >>
				ch_p('>')
			) |
			(
				str_p("hashmap") >>
				!ch_p(' ') >>
				ch_p('<') >>
				!ch_p(' ') >>
				(typeRule2 >> !ch_p(' ') >> ch_p(',') >> !ch_p(' ') >> typeRule1)[bind(&ProtoParse::PushMessageHashMapMemberType, this, _1, _2)] >>
				!ch_p(' ') >>
				ch_p('>')
			) |
			(
				str_p("set") >>
				!ch_p(' ') >>
				ch_p('<') >>
				!ch_p(' ') >>
				(typeRule2)[bind(&ProtoParse::PushMessageSetMemberType, this, _1, _2)] >>
				!ch_p(' ') >>
				ch_p('>')
			) |
			(
				str_p("hashset") >>
				!ch_p(' ') >>
				ch_p('<') >>
				!ch_p(' ') >>
				(typeRule2)[bind(&ProtoParse::PushMessageHashSetMemberType, this, _1, _2)] >>
				!ch_p(' ') >>
				ch_p('>')
			) |
			(
				str_p("array") >>
				!ch_p(' ') >>
				ch_p('<') >>
				!ch_p(' ') >>
				(typeRule1)[bind(&ProtoParse::PushMessageArrayMemberType, this, _1, _2)] >>
				!ch_p(' ') >>
				ch_p('>')
			) |
			(
				str_p("repeated") >>
				ch_p(' ') >>
				(typeRule1)[bind(&ProtoParse::PushMessageArrayMemberType, this, _1, _2)]
			) |
			(
				(str_p("required") | str_p("optional")) >>
				ch_p(' ') >>
				(typeRule1)[bind(&ProtoParse::PushMessageSingularMemberType, this, _1, _2)]
			) |
			(
				(typeRule1)[bind(&ProtoParse::PushMessageSingularMemberType, this, _1, _2)]
			)
		);
	nameRule =
		(
			ValidProtoName
		)[bind(&ProtoParse::PushMessageMemberName, this, _1, _2)];
	indexRule =
		(
			(
				(str_p("0x") | str_p("0X")) >> hex_p[bind(&ProtoParse::PushMessageMemberTag, this, _1)]
			) |
			(
				int_p[bind(&ProtoParse::PushMessageMemberTag, this, _1)]
			)
		);
	moreInfoRule =
		(
			(
				(
					ch_p('[') >>
					!(ch_p(' ')) >>
					str_p("packed") >>
					!(ch_p(' ')) >>
					ch_p('=') >>
					!(ch_p(' ')) >>
					str_p("true") >>
					!(ch_p(' ')) >>
					ch_p(']')
				)[bind(&ProtoParse::PushMessageMemberMoreInfo, this, _1, _2)]
			) |
			(
				ch_p('[') >> (anychar_p - ch_p(']')) >> ch_p(']')
			)
		);
	memberRule =
		(
			(typeRule) >>
			ch_p(' ') >>
			(nameRule) >>
			!(ch_p(' ')) >>
			ch_p('=') >>
			!(ch_p(' ')) >>
			(indexRule) >>
			!(ch_p(' ')) >>
			!(moreInfoRule) >>
			!(ch_p(' ')) >>
			ch_p(';')
		)[bind(&ProtoParse::PushMessageMemberEnd, this)];

	if (!(parse(memberStr.c_str(), memberRule).full))
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << m_TempStruct.m_Name << "\" : \"" << memberStr << "\" is not valid message member. It will be skipped." << endl;
	}
}
void ProtoParse::ParseProtoEnum(const char* start, const char* end)
{
	string enumStr(start, end - start);

	// enum构成：
	// nameRule ::= ValidProtoName
	// valueRule ::= [1-9] , {[0-9]}
	// memberRule ::= nameRule , {' '} , '=' , {' '} , valueRule , {' '} , ';'
	// enumRule ::= "enum " , ValidProtoName , {' '} , {'\n'} , '{' , {'\n'} , {memberRule , {'\n'}} , '}'
	rule<> nameRule, valueRule;
	rule<> memberRule;
	rule<> enumRule;
	nameRule =
		(
			ValidProtoName
		)[bind(&ProtoParse::PushEnumMemberName, this, _1, _2)];
	valueRule =
		(
			+(
				ch_p('_') | range_p('a', 'z') | range_p('A', 'Z') | range_p('0', '9') |
				ch_p('.') |
				ch_p('+') | ch_p('-') | ch_p('*') | ch_p('/') | ch_p('%') | str_p("<<") | str_p(">>") | ch_p('|') | ch_p('&') |
				ch_p('(') | ch_p(')') |
				ch_p(' ')
			)
		)[bind(&ProtoParse::PushEnumMemberValue, this, _1, _2)];
	memberRule =
		(
			(nameRule) >>
			!(ch_p(' ')) >>
			(
				(ch_p('=') >> !(ch_p(' ')) >> (valueRule) >> !(ch_p(' ')) >> ch_p(';')) |
				(ch_p(';')[bind(&ProtoParse::PushEnumMemberValueNull, this)])
			)
		)[bind(&ProtoParse::PushEnumMemberEnd, this)];
	enumRule =
		(
			str_p("enum ") >>
			(ValidProtoName)[bind(&ProtoParse::PushEnumStart, this, _1, _2)] >>
			!(ch_p(' ')) >>
			!(ch_p('\n')) >>
			ch_p('{') >>
			!(ch_p('\n')) >>
			*(memberRule >> !(ch_p('\n'))) >>
			ch_p('}')
		)[bind(&ProtoParse::PushEnumEnd, this)];

	if (!(parse(enumStr.c_str(), enumRule).full))
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << enumStr << " is not valid enum.It will be skipped." << endl;
	}
}
void ProtoParse::ParseProtoUnknown(const char* start, const char* end)
{
	string unknownStr(start, end - start);

	cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
	cout << "\"" << unknownStr << "\" is not valid code. It will be skipped." << endl;
}

void ProtoParse::PushPackageName(const char* start, const char* end)
{
	string packageName(start, end - start);

	m_TempFile.m_Package = packageName;
}

void ProtoParse::PushImportName(const char* start, const char* end)
{
	string importName(start, end - start);

	size_t lastPos = importName.find_last_of(".");
	if (-1 != lastPos)
	{
		importName = importName.substr(0, lastPos);

		if (importName.length() > 0)
		{
			m_TempFile.m_Includes.push_back(importName);
		}
	}
}

void ProtoParse::PushMessageStart(const char* start, const char* end)
{
	string messageName(start, end - start);

	m_TempStruct.Init();

	m_TempStruct.m_Type = PT_message;
	m_TempStruct.m_Name = messageName;
	m_TempStruct.m_PackageName = m_TempFile.m_Package;
	m_TempStruct.m_FileClassName = m_TempFile.m_FileName;
}
void ProtoParse::PushMessageHashMapMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);
	type = StringTool::ReplaceAll(type, " ", "");
	vector<string> types;
	StringTool::SplitStr2List(type, ",", types);

	m_TempMessageMember.m_Modifier = PMM_hashmap;
	ProcessKeyType(types[0]);
	ProcessValueType(types[1]);
}
void ProtoParse::PushMessageMapMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);
	type = StringTool::ReplaceAll(type, " ", "");
	vector<string> types;
	StringTool::SplitStr2List(type, ",", types);

	m_TempMessageMember.m_Modifier = PMM_map;
	ProcessKeyType(types[0]);
	ProcessValueType(types[1]);
}
void ProtoParse::PushMessageHashSetMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);

	m_TempMessageMember.m_Modifier = PMM_hashset;
	ProcessValueType(type);
}
void ProtoParse::PushMessageSetMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);

	m_TempMessageMember.m_Modifier = PMM_set;
	ProcessValueType(type);
}
void ProtoParse::PushMessageArrayMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);

	m_TempMessageMember.m_Modifier = PMM_array;
	ProcessValueType(type);
}
void ProtoParse::PushMessageSingularMemberType(const char* start, const char* end)
{
	m_TempMessageMember.Init();

	string type(start, end - start);

	m_TempMessageMember.m_Modifier = PMM_singular;
	ProcessValueType(type);
}
void ProtoParse::ProcessKeyType(const string& type)
{
	if (0 == strcmp("int32", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_int32;
	}
	else if (0 == strcmp("sint32", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_sint32;
	}
	else if (0 == strcmp("uint32", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_uint32;
	}
	else if (0 == strcmp("int64", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_int64;
	}
	else if (0 == strcmp("sint64", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_sint64;
	}
	else if (0 == strcmp("uint64", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_uint64;
	}
	else if (0 == strcmp("sfixed32", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_sfixed32;
	}
	else if (0 == strcmp("fixed32", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_fixed32;
	}
	else if (0 == strcmp("sfixed64", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_sfixed64;
	}
	else if (0 == strcmp("fixed64", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_fixed64;
	}
	else if (0 == strcmp("string", type.c_str()))
	{
		m_TempMessageMember.m_KeyType = PMT_string;
	}
	else
	{
		m_TempMessageMember.m_KeyType = PMT_unknown;
	}
}
void ProtoParse::ProcessValueType(const string& type)
{
	if (0 == strcmp("bool", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_bool;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("int32", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_int32;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("sint32", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_sint32;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("uint32", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_uint32;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("int64", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_int64;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("sint64", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_sint64;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("uint64", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_uint64;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("sfixed32", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_sfixed32;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("fixed32", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_fixed32;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("float", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_float;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("sfixed64", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_sfixed64;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("fixed64", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_fixed64;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("double", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_double;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("string", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_string;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else if (0 == strcmp("bytes", type.c_str()))
	{
		m_TempMessageMember.m_ValueType = PMT_string;
		m_TempMessageMember.m_PackageName = "";
		m_TempMessageMember.m_FileClassName = "";
		m_TempMessageMember.m_TypeName = "";
	}
	else
	{
		// 搜索已存在的proto结构信息，搜不到则视为未定义类型
		string packageName = ProtoStructFullName2PackageName(type);
		if (packageName.length() == 0)
		{
			packageName = m_TempFile.m_Package;
		}
		string typeName = ProtoStructFullName2TypeName(type);

		bool hasType = false;
		// 判断当前正在解析的文件中，是否存在该结构类型
		if (!hasType)
		{
			if (0 != typeName.length() && (0 == packageName.length() || 0 == strcmp(packageName.c_str(), m_TempFile.m_Package.c_str())))
			{
				map<string, ProtoStruct>::const_iterator itStruct = m_TempFile.m_Structs.find(typeName);
				if (itStruct != m_TempFile.m_Structs.end())
				{
					const ProtoStruct& proto = itStruct->second;
					switch (proto.m_Type)
					{
						case PT_message:
						{
							m_TempMessageMember.m_ValueType = PMT_message;
							m_TempMessageMember.m_PackageName = packageName;
							m_TempMessageMember.m_FileClassName = m_TempFile.m_FileName;
							m_TempMessageMember.m_TypeName = typeName;
							hasType = true;
						}
						break;
						case PT_enum:
						{
							m_TempMessageMember.m_ValueType = PMT_enum;
							m_TempMessageMember.m_PackageName = packageName;
							m_TempMessageMember.m_FileClassName = m_TempFile.m_FileName;
							m_TempMessageMember.m_TypeName = typeName;
							hasType = true;
						}
						break;
						default:
						break;
					}
				}
			}
		}
		// 迭代该文件引用的其他已解析的文件，若包名匹配，判断该文件中是否存在该结构类型
		if (!hasType)
		{
			if (0 != typeName.length() && 0 != packageName.length())
			{
				for (size_t i = 0; i < m_TempFile.m_Includes.size(); i++)
				{
					map<string, ProtoFile>::const_iterator itFile = m_Files.find(m_TempFile.m_Includes[i]);
					if (itFile != m_Files.end())
					{
						const ProtoFile& protoFile = itFile->second;
						if (0 == strcmp(packageName.c_str(), protoFile.m_Package.c_str()))
						{
							map<string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(typeName);
							if (itStruct != protoFile.m_Structs.end())
							{
								const ProtoStruct& proto = itStruct->second;
								switch (proto.m_Type)
								{
									case PT_message:
									{
										m_TempMessageMember.m_ValueType = PMT_message;
										m_TempMessageMember.m_PackageName = packageName;
										m_TempMessageMember.m_FileClassName = protoFile.m_FileName;
										m_TempMessageMember.m_TypeName = typeName;
										hasType = true;
									}
									break;
									case PT_enum:
									{
										m_TempMessageMember.m_ValueType = PMT_enum;
										m_TempMessageMember.m_PackageName = packageName;
										m_TempMessageMember.m_FileClassName = protoFile.m_FileName;
										m_TempMessageMember.m_TypeName = typeName;
										hasType = true;
									}
									break;
									default:
									break;
								}
							}
						}
					}
				}
			}
		}
		// 否则视为未定义的类型
		if (!hasType)
		{
			m_TempMessageMember.m_ValueType = PMT_unknown;
			m_TempMessageMember.m_TypeName = type;
			cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
			cout << "\"" << type << "\" is not defined." << endl;
		}
	}
}
void ProtoParse::PushMessageMemberName(const char* start, const char* end)
{
	string messageName(start, end - start);

	m_TempMessageMember.m_Name = StringTool::LowerCase(messageName);
}
void ProtoParse::PushMessageMemberTag(unsigned int value)
{
	m_TempMessageMember.m_Tag = value;
}
void ProtoParse::PushMessageMemberMoreInfo(const char* start, const char* end)
{
	m_TempMessageMember.m_PackedTrue = true;
}
void ProtoParse::PushMessageMemberEnd()
{
	if (PMT_unknown != m_TempMessageMember.m_ValueType)
	{
		map<unsigned int, MessageMember>::iterator it = m_TempStruct.m_MessageMembers.find(m_TempMessageMember.m_Tag);
		if (it == m_TempStruct.m_MessageMembers.end())
		{
			m_TempStruct.m_MessageMembers[m_TempMessageMember.m_Tag] = m_TempMessageMember;
			m_TempStruct.m_MessageMemberOrder[m_TempStruct.m_MessageMemberIndex++] = m_TempMessageMember.m_Tag;
		}
		else
		{
			cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
			cout << "Field number " << m_TempMessageMember.m_Tag << " has already been used in \"" << m_TempStruct.m_Name << "\" by field \"" << it->second.m_Name << "\"." << endl;
		}
	}
	else
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "Unknown type \"" << m_TempMessageMember.m_TypeName << "\"." << endl;
	}
}
void ProtoParse::PushMessageEnd()
{
	bool hasType = false;
	if (!hasType)
	{
		map<string, ProtoStruct>::const_iterator itStruct = m_TempFile.m_Structs.find(m_TempStruct.m_Name);
		if (itStruct != m_TempFile.m_Structs.end())
		{
			cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
			cout << "\"" << m_TempStruct.m_Name << "\" is already defined in file : " << m_TempFile.m_FileName << endl;

			hasType = true;
		}
	}
	if (!hasType)
	{
		map<string, ProtoFile>::const_iterator itFile = m_Files.begin();
		while (itFile != m_Files.end())
		{
			const ProtoFile& protoFile = itFile->second;
			if (0 == strcmp(m_TempStruct.m_PackageName.c_str(), protoFile.m_Package.c_str()))
			{
				map<string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(m_TempStruct.m_Name);
				if (itStruct != protoFile.m_Structs.end())
				{
					cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
					cout << "\"" << m_TempStruct.m_Name << "\" is already defined in file : " << protoFile.m_FileName << endl;

					hasType = true;

					break;
				}
			}

			itFile++;
		}
	}
	if (!hasType)
	{
		m_TempFile.m_Structs[m_TempStruct.m_Name] = m_TempStruct;
		m_TempFile.m_StructOrder[m_TempFile.m_StructIndex++] = m_TempStruct.m_Name;
	}
}

void ProtoParse::PushEnumStart(const char* start, const char* end)
{
	string enumName(start, end - start);

	m_TempStruct.Init();

	m_TempStruct.m_Type = PT_enum;
	m_TempStruct.m_Name = enumName;
	m_TempStruct.m_PackageName = m_TempFile.m_Package;
	m_TempStruct.m_FileClassName = m_TempFile.m_FileName;

	while (!m_TempEnumValues.empty())
	{
		m_TempEnumValues.pop();
	}
}
void ProtoParse::PushEnumMemberName(const char* start, const char* end)
{
	m_TempEnumMember.Init();

	string enumName(start, end - start);

	m_TempEnumMember.m_Name = enumName;
}
void ProtoParse::PushEnumMemberValue(const char* start, const char* end)
{
	string valueStr(start, end - start);
	valueStr = StringTool::ReplaceAll(valueStr, " ", ""); // 去除表达式的空格

	// 表达式计算的6个优先级：  
	// O0：()，数字，枚举名  
	// O0 ::= ('(' , O5 , ')') | (S0 , {S1}) | ([1-9] , {[0-9]}) | ("0x" , {[0-F]})  
	// O1：乘，除，模  
	// O1 ::= O0 , { ('*' , O0) | ('/' , O0) | ('%' , O0) }  
	// O2：加，减  
	// O2 ::= O1 , { ('+' , O1) | ('-' , O1) }  
	// O3：左移，右移  
	// O3 ::= O2 , { (">>" , O2) | ("<<" , O2) }   
	// O4：按位与  
	// O4 ::= O3 , { '&' , O3 }   
	// O5：按位或  
	// O5 ::= O4 , { '|' , O4 }  
	rule<> O0, O1, O2, O3, O4, O5;

	O5 = (O4 >>
		*(
		(ch_p('|') >> O4)[bind(&ProtoParse::Or, this)]
			));

	O4 = (O3 >>
		*(
		(ch_p('&') >> O3)[bind(&ProtoParse::And, this)]
			));

	O3 = (O2 >>
		*(
		(str_p(">>") >> O2)[bind(&ProtoParse::Shr, this)] |
			(str_p("<<") >> O2)[bind(&ProtoParse::Shl, this)]
			));

	O2 = (O1 >>
		*(
		(ch_p('+') >> O1)[bind(&ProtoParse::Add, this)] |
			(ch_p('-') >> O1)[bind(&ProtoParse::Sub, this)]
			));

	O1 = (O0 >>
		*(
		(ch_p('*') >> O0)[bind(&ProtoParse::Mul, this)] |
			(ch_p('/') >> O0)[bind(&ProtoParse::Div, this)] |
			(ch_p('%') >> O0)[bind(&ProtoParse::Mod, this)]
			));

	O0 = (ch_p('(') >> O5 >> ch_p(')')) |
		(
		((*(ValidProtoName >> ch_p('.')) >> ValidProtoName)[bind(&ProtoParse::PushEnum, this, _1, _2)]) |
			((str_p("0x") | str_p("0X")) >> hex_p[bind(&ProtoParse::PushNum, this, _1)]) |
			(int_p[bind(&ProtoParse::PushNum, this, _1)])
			);

	if (parse(valueStr.c_str(), O5).full)
	{
		m_TempEnumMember.m_Value = m_TempEnumValues.top();
	}
	else
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << m_TempStruct.m_Name << "\" : \"" << valueStr << "\" is not valid enum value.It will be set as last entry + 1." << endl;

		PushEnumMemberValueNull();
	}

	while (!m_TempEnumValues.empty())
	{
		m_TempEnumValues.pop();
	}
}
void ProtoParse::PushEnumMemberValueNull()
{
	map<unsigned int, string>::reverse_iterator itOrder = m_TempStruct.m_EnumMemberOrder.rbegin();
	if (itOrder != m_TempStruct.m_EnumMemberOrder.rend())
	{
		map<string, EnumMember>::iterator itEntry = m_TempStruct.m_EnumMembers.find(itOrder->second);
		if (itEntry != m_TempStruct.m_EnumMembers.end())
		{
			m_TempEnumMember.m_Value = itEntry->second.m_Value + 1;
		}
		else
		{
			m_TempEnumMember.m_Value = 0;
		}
	}
	else
	{
		m_TempEnumMember.m_Value = 0;
	}
}
void ProtoParse::PushEnumMemberEnd()
{
	map<string, EnumMember>::iterator it = m_TempStruct.m_EnumMembers.find(m_TempEnumMember.m_Name);
	if (it == m_TempStruct.m_EnumMembers.end())
	{
		m_TempStruct.m_EnumMembers[m_TempEnumMember.m_Name] = m_TempEnumMember;
		m_TempStruct.m_EnumMemberOrder[m_TempStruct.m_EnumMemberIndex++] = m_TempEnumMember.m_Name;
		if (m_TempStruct.m_EnumMemberValue.find(m_TempEnumMember.m_Value) == m_TempStruct.m_EnumMemberValue.end())
		{
			m_TempStruct.m_EnumMemberValue[m_TempEnumMember.m_Value] = m_TempEnumMember.m_Name;
		}
	}
	else
	{
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << m_TempEnumMember.m_Name << "\"" << "is already defined in \"" << m_TempStruct.m_Name << "\"." << endl;
	}
}
void ProtoParse::PushEnumEnd()
{
	bool hasType = false;
	if (!hasType)
	{
		map<string, ProtoStruct>::const_iterator itStruct = m_TempFile.m_Structs.find(m_TempStruct.m_Name);
		if (itStruct != m_TempFile.m_Structs.end())
		{
			cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
			cout << "\"" << m_TempStruct.m_Name << "\" is already defined in file : " << m_TempFile.m_FileName << endl;

			hasType = true;
		}
	}
	if (!hasType)
	{
		map<string, ProtoFile>::const_iterator itFile = m_Files.begin();
		while (itFile != m_Files.end())
		{
			const ProtoFile& protoFile = itFile->second;
			if (0 == strcmp(m_TempStruct.m_PackageName.c_str(), protoFile.m_Package.c_str()))
			{
				map<string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(m_TempStruct.m_Name);
				if (itStruct != protoFile.m_Structs.end())
				{
					cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
					cout << "\"" << m_TempStruct.m_Name << "\" is already defined in file : " << protoFile.m_FileName << endl;

					hasType = true;

					break;
				}
			}

			itFile++;
		}
	}
	if (!hasType)
	{
		// 如果是空枚举，增加一个默认枚举项
		if (m_TempStruct.m_EnumMembers.size() == 0)
		{
			m_TempEnumMember.m_Name = m_TempStruct.m_Name + "_NULL";
			m_TempEnumMember.m_Value = 0;
			m_TempStruct.m_EnumMembers[m_TempEnumMember.m_Name] = m_TempEnumMember;
			m_TempStruct.m_EnumMemberOrder[m_TempStruct.m_EnumMemberIndex++] = m_TempEnumMember.m_Name;
			m_TempStruct.m_EnumMemberValue[m_TempEnumMember.m_Value] = m_TempEnumMember.m_Name;
		}
		// 保存枚举结构
		m_TempFile.m_Structs[m_TempStruct.m_Name] = m_TempStruct;
		m_TempFile.m_StructOrder[m_TempFile.m_StructIndex++] = m_TempStruct.m_Name;
	}
}

void ProtoParse::PushNum(unsigned int v)
{
	m_TempEnumValues.push(v);
}
void ProtoParse::PushEnum(const char* start, const char* end)
{
	string enumName(start, end - start);

	// 搜索已存在的proto结构信息，搜不到则视为未定义类型
	string packageName = ProtoEnumFullName2PackageName(enumName);
	if (packageName.length() == 0)
	{
		packageName = m_TempFile.m_Package;
	}
	string typeName = ProtoEnumFullName2TypeName(enumName);
	if (typeName.length() == 0)
	{
		typeName = m_TempStruct.m_Name;
	}
	string entryName = ProtoEnumFullName2EntryName(enumName);

	bool hasType = false;
	// 若是当前正在解析的枚举，判断该枚举中是否存在该枚举项
	if (!hasType)
	{
		if (0 != entryName.length() && (0 == typeName.length() || 0 == strcmp(typeName.c_str(), m_TempStruct.m_Name.c_str())))
		{
			map<string, EnumMember>::const_iterator itEntry = m_TempStruct.m_EnumMembers.find(entryName);
			if (itEntry != m_TempStruct.m_EnumMembers.end())
			{
				const EnumMember& enumMember = itEntry->second;
				m_TempEnumValues.push(enumMember.m_Value);
				hasType = true;
			}
		}
	}
	// 判断当前正在解析的文件中，是否存在该枚举类型，以及该枚举类型中是否存在该枚举项
	if (!hasType)
	{
		if (0 != entryName.length() && 0 != typeName.length() && (0 == packageName.length() || 0 == strcmp(packageName.c_str(), m_TempFile.m_Package.c_str())))
		{
			map<string, ProtoStruct>::const_iterator itStruct = m_TempFile.m_Structs.find(typeName);
			if (itStruct != m_TempFile.m_Structs.end())
			{
				const ProtoStruct& protoStruce = itStruct->second;
				map<string, EnumMember>::const_iterator itEntry = protoStruce.m_EnumMembers.find(entryName);
				if (itEntry != protoStruce.m_EnumMembers.end())
				{
					const EnumMember& enumMember = itEntry->second;
					m_TempEnumValues.push(enumMember.m_Value);
					hasType = true;
				}
			}
		}
	}
	// 迭代该文件引用的其他已解析的文件，若包名匹配，判断该文件中是否存在该枚举类型，以及该枚举类型中是否存在该枚举项
	if (!hasType)
	{
		if (0 != entryName.length() && 0 != typeName.length() && 0 != packageName.length())
		{
			for (size_t i = 0; i < m_TempFile.m_Includes.size(); i++)
			{
				map<string, ProtoFile>::const_iterator itFile = m_Files.find(m_TempFile.m_Includes[i]);
				if (itFile != m_Files.end())
				{
					const ProtoFile& protoFile = itFile->second;
					if (0 == strcmp(packageName.c_str(), protoFile.m_Package.c_str()))
					{
						map<string, ProtoStruct>::const_iterator itStruct = protoFile.m_Structs.find(typeName);
						if (itStruct != protoFile.m_Structs.end())
						{
							const ProtoStruct& protoStruce = itStruct->second;
							map<string, EnumMember>::const_iterator itEntry = protoStruce.m_EnumMembers.find(entryName);
							if (itEntry != protoStruce.m_EnumMembers.end())
							{
								const EnumMember& enumMember = itEntry->second;
								m_TempEnumValues.push(enumMember.m_Value);
								hasType = true;
							}
						}
					}
				}
			}
		}
	}
	// 否则视为未定义的枚举项
	if (!hasType)
	{
		m_TempEnumValues.push(0);
		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << enumName << "\" is not defined." << endl;
	}
}
void ProtoParse::Add()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 + op2);
}
void ProtoParse::Sub()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 - op2);
}
void ProtoParse::Mul()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 * op2);
}
void ProtoParse::Div()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	if (0 != op2)
	{
		m_TempEnumValues.push(op1 / op2);
	}
	else
	{
		m_TempEnumValues.push(0);

		cout << "File : \"" << m_TempFile.m_FileName << "\" : " << endl;
		cout << "\"" << m_TempEnumMember.m_Name << "\" has a arithmetic exception!" << endl;
	}
}
void ProtoParse::Mod()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 % op2);
}
void ProtoParse::Shl()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 << op2);
}
void ProtoParse::Shr()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 >> op2);
}
void ProtoParse::Or()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 | op2);
}
void ProtoParse::And()
{
	unsigned int op2 = m_TempEnumValues.top();
	m_TempEnumValues.pop();
	unsigned int op1 = m_TempEnumValues.top();
	m_TempEnumValues.pop();

	m_TempEnumValues.push(op1 & op2);
}

string ProtoParse::ProtoStructFullName2PackageName(const string& fullName)
{
	size_t index = fullName.find_last_of('.');
	if (-1 != index)
	{
		return fullName.substr(0, index);
	}
	else
	{
		return "";
	}
}
string ProtoParse::ProtoStructFullName2TypeName(const string& fullName)
{
	size_t index = fullName.find_last_of('.');
	if (-1 != index)
	{
		return fullName.substr(index + 1, fullName.length() - index);
	}
	else
	{
		return fullName;
	}
}

string ProtoParse::ProtoEnumFullName2PackageName(const string& fullName)
{
	size_t index = fullName.find_last_of('.');
	if (-1 != index)
	{
		string fullStr1 = fullName.substr(0, index);
		index = fullStr1.find_last_of('.');
		if (-1 != index)
		{
			return fullStr1.substr(0, index);
		}
		else
		{
			return "";
		}
	}
	else
	{
		return "";
	}
}
string ProtoParse::ProtoEnumFullName2TypeName(const string& fullName)
{
	size_t index = fullName.find_last_of('.');
	if (-1 != index)
	{
		string fullStr1 = fullName.substr(0, index);
		index = fullStr1.find_last_of('.');
		if (-1 != index)
		{
			return fullStr1.substr(index + 1, fullStr1.length() - index);
		}
		else
		{
			return fullStr1;
		}
	}
	else
	{
		return "";
	}
}
string ProtoParse::ProtoEnumFullName2EntryName(const string& fullName)
{
	size_t index = fullName.find_last_of('.');
	if (-1 != index)
	{
		return fullName.substr(index + 1, fullName.length() - index);
	}
	else
	{
		return fullName;
	}
}

void ProtoParse::ParseFile(const char* fullPathName)
{
	// 初始化
	m_TempFile.Init();

	// 获取文件名
	m_TempFile.m_FileName = fullPathName;
	if (m_TempFile.m_FileName.length() > 0)
	{
		m_TempFile.m_FileName = StringTool::ReplaceAll(m_TempFile.m_FileName, "\\", "/");

		size_t lastPos = m_TempFile.m_FileName.find_last_of("/");
		if (0 <= lastPos)
		{
			m_TempFile.m_FileName = m_TempFile.m_FileName.substr(lastPos + 1, m_TempFile.m_FileName.length());
		}
		lastPos = m_TempFile.m_FileName.find_last_of(".");
		if (0 <= lastPos)
		{
			m_TempFile.m_FileName = m_TempFile.m_FileName.substr(0, lastPos);
		}
	}
	if (m_TempFile.m_FileName.length() > 0)
	{

	}
	else
	{
		return;
	}

	// 加载文本内容
	if (m_FileData.Load(fullPathName))
	{

	}
	else
	{
		return;
	}

	// 预处理文本信息
	string txt;
	m_FileData.GetData(txt, 0, m_FileData.GetLen());
	if (txt.length() >= 3 &&
		static_cast<unsigned char>(txt[0]) == 0xEF &&
		static_cast<unsigned char>(txt[1]) == 0xBB &&
		static_cast<unsigned char>(txt[2]) == 0xBF)
	{
		txt = txt.substr(3, txt.length() - 3);					// 去除BOM头
	}
	txt = StringTool::ReplaceReg(txt, "[/][*]((.|[\r]|[\n])*?)[*][/]", "");	// 去除段注释/**/
	txt = StringTool::ReplaceReg(txt, "[/][/][^\n]*", "");		// 去除行注释//
	txt = StringTool::ReplaceReg(txt, "([\t])+", " ");			// 去除连续的\t，换成1个空格
	txt = StringTool::ReplaceReg(txt, "([ ])+", " ");			// 去除连续的空格，换成1个空格
	txt = StringTool::ReplaceReg(txt, "^[ ]", "");				// 去除行首空格
	txt = StringTool::ReplaceReg(txt, "[ ]([\r]*[\n])+", "\n");	// 去除行尾空格
	txt = StringTool::ReplaceReg(txt, "([\r]*[\n])+", "\n");	// 去除连续的换行，换成1个换行

	// 解析文本
	if (txt.length() > 0)
	{
		ParseProto(txt.c_str());
		m_Files[m_TempFile.m_FileName] = m_TempFile;
		cout << "File : \"" << m_TempFile.m_FileName << "\" : finish." << endl;
	}
	else
	{
		return;
	}
}