#ifndef __ProtoCodeTool_h__
#define __ProtoCodeTool_h__

#include <fstream>

class MessageMember;
class EnumMember;
class ProtoStruct;
class ProtoFile;

class ProtoCodeTool
{
public:
	static void ProtoFile2Head(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Head_PragmaOnce(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Head_Include(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Head_NameSpace(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoEnum2Head(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_Declarations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_MemberDeclarations(const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Head_Implementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_ConstructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_CopyConstructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_DestructorImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_AssignOperatorImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_ByteSizeImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_CodeImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_DecodeImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_ClearImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_ReleaseImplementations(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Head_MemberSetterImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Head_MemberGetterImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Head_MemberCleanerImplementations(const ProtoStruct& protoStruct, const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Head_MemberBitsImplementations(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of);


	static void ProtoFile2Cs(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Cs_Using(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Cs_NameSpace(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoEnum2Cs(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_Member(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Cs_Constructor(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_ByteSize(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_Code(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_Decode(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_Clear(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Cs_Release(const ProtoStruct& protoStruct, std::ofstream& of);


	static void ProtoFile2Java(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Java_Package(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Java_Import(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoFile2Java_FileClass(const ProtoFile& protoFile, std::ofstream& of);
	static void ProtoEnum2Java(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_Member(const ProtoStruct& protoStruct, unsigned int order, const MessageMember& messageMember, std::ofstream& of);
	static void ProtoMessage2Java_Constructor(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_ByteSize(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_Code(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_Decode(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_Clear(const ProtoStruct& protoStruct, std::ofstream& of);
	static void ProtoMessage2Java_Release(const ProtoStruct& protoStruct, std::ofstream& of);
};

// array/set/map�ֶα�������
enum ProtoCodeVersion
{
	// array/set/map�ֶΰ�proto2�汾���룺{ÿ������Ԫ�ص�������}
	// ÿ������Ԫ�ص������룺key + element
	PRV_Proto2 = 2,

	// array/set/map�ֶΰ�proto3�汾���룺key + �����������
	// ����������룺bytesize + {element}
	// bytesize��{element}���ֽ���
	PRV_Proto3,

	// δ֪���뷽ʽ
	PRV_Unknown,
};
extern ProtoCodeVersion g_ProtoVersion;

#endif