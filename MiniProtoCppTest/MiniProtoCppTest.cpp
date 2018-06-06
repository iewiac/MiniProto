// MiniProtoCppTest.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
#include <fstream>

#include "Proto1.h"
#include "Proto2.h"

using namespace common::proto1;
using namespace common::proto2;

#include "ProtoDefine.h"

using namespace common::miniproto;

void SetMsgTestSingular(common::proto1::MsgTestSingular<>& msg)
{
	msg.Clear();
	msg.set_m_bool(true);
	msg.set_m_int32(1111);
	msg.set_m_int64(1111);
	msg.set_m_sint32(1111);
	msg.set_m_sint64(1111);
	msg.set_m_uint32(1111);
	msg.set_m_uint64(1111);
	msg.set_m_float(1111);
	msg.set_m_double(1111);
	msg.set_m_enum(common::proto1::EnumTest::EnumTest_1);
	msg.set_m_string(common::miniproto::String<>("11"));
	msg.set_m_string("111");
	msg.set_m_string("1111", 4);
	msg.set_m_bytes("1111");

	msg.Release();
	msg.set_m_bool(true);
	msg.set_m_int32(1111);
	msg.set_m_int64(1111);
	msg.set_m_sint32(1111);
	msg.set_m_sint64(1111);
	msg.set_m_uint32(1111);
	msg.set_m_uint64(1111);
	msg.set_m_float(1111);
	msg.set_m_double(1111);
	msg.set_m_enum(common::proto1::EnumTest::EnumTest_1);
	msg.set_m_string("1111");
	msg.set_m_bytes("1111");

	/*std::cout << msg.m_bool() << "," <<
		msg.m_int32() << "," <<
		msg.m_int64() << "," <<
		msg.m_sint32() << "," <<
		msg.m_sint64() << "," <<
		msg.m_uint32() << "," <<
		msg.m_uint64() << "," <<
		msg.m_float() << "," <<
		msg.m_double() << "," <<
		msg.m_enum() << "," <<
		msg.m_string() << "," <<
		msg.m_bytes() << std::endl;*/
}
void SetMsgTestArray(common::proto2::MsgTestArray<>& msg, int n)
{
	msg.Clear();
	for (int i = 0; i < n; i++)
	{
		msg.add_m_bool(true);
		msg.add_m_int32(2222);
		msg.add_m_int64(2222);
		msg.add_m_sint32(2222);
		msg.add_m_sint64(2222);
		msg.add_m_uint32(2222);
		msg.add_m_uint64(2222);
		msg.add_m_float(2222);
		msg.add_m_double(2222);
		msg.add_m_enum(common::proto1::EnumTest::EnumTest_2);
		msg.add_m_string(common::miniproto::String<>("22"));
		msg.add_m_string("222");
		msg.add_m_string("2222", 4);
	}

	msg.Release();
	for (int i = 0; i < n; i++)
	{
		msg.add_m_bool(false);
		msg.add_m_int32(2222);
		msg.add_m_int64(2222);
		msg.add_m_sint32(2222);
		msg.add_m_sint64(2222);
		msg.add_m_uint32(2222);
		msg.add_m_uint64(2222);
		msg.add_m_float(2222);
		msg.add_m_double(2222);
		msg.add_m_enum(common::proto1::EnumTest::EnumTest_2);
		msg.add_m_string("2222");
	}

	for (int i = 0; i < n; i++)
	{
		msg.set_m_bool(i, true);
		msg.set_m_int32(i, 2222);
		msg.set_m_int64(i, 2222);
		msg.set_m_sint32(i, 2222);
		msg.set_m_sint64(i, 2222);
		msg.set_m_uint32(i, 2222);
		msg.set_m_uint64(i, 2222);
		msg.set_m_float(i, 2222);
		msg.set_m_double(i, 2222);
		msg.set_m_enum(i, common::proto1::EnumTest::EnumTest_2);
		msg.set_m_string(i, "2222");
	}

	/*std::cout << "size : " <<
		msg.m_bool_size() << "," <<
		msg.m_int32_size() << "," <<
		msg.m_int64_size() << "," <<
		msg.m_sint32_size() << "," <<
		msg.m_sint64_size() << "," <<
		msg.m_uint32_size() << "," <<
		msg.m_uint64_size() << "," <<
		msg.m_float_size() << "," <<
		msg.m_double_size() << "," <<
		msg.m_enum_size() << "," <<
		msg.m_string_size() << std::endl;*/
	for (int i = 0; i < n; i++)
	{
		/*std::cout << "index " << i << " : " <<
			msg.m_bool(i) << "," <<
			msg.m_int32(i) << "," <<
			msg.m_int64(i) << "," <<
			msg.m_sint32(i) << "," <<
			msg.m_sint64(i) << "," <<
			msg.m_uint32(i) << "," <<
			msg.m_uint64(i) << "," <<
			msg.m_float(i) << "," <<
			msg.m_double(i) << "," <<
			msg.m_enum(i) << "," <<
			msg.m_string(i) << std::endl;*/
	}
}
void SetMsgTestSet(common::proto2::MsgTestSet<>& msg, int n)
{
	msg.Clear();
	for (int i = 0; i < n; i++)
	{
		msg.add_m_int32(1111 * i);
		msg.add_m_int64(1111 * i);
		msg.add_m_sint32(1111 * i);
		msg.add_m_sint64(1111 * i);
		msg.add_m_uint32(1111 * i);
		msg.add_m_uint64(1111 * i);
		char temp[10] = { 0 };
		_itoa_s(1111 * i, temp, 10, 10);
		msg.add_m_string(common::miniproto::String<>(temp));
		msg.add_m_string(temp);
		msg.add_m_string(temp, strlen(temp));
	}

	for (int i = 0; i < n; i++)
	{
		msg.remove_m_int32(1111 * i);
		msg.remove_m_int64(1111 * i);
		msg.remove_m_sint32(1111 * i);
		msg.remove_m_sint64(1111 * i);
		msg.remove_m_uint32(1111 * i);
		msg.remove_m_uint64(1111 * i);
		char temp[10] = { 0 };
		_itoa_s(1111 * i, temp, 10, 10);
		msg.remove_m_string(common::miniproto::String<>(temp));
		msg.remove_m_string(temp);
		msg.remove_m_string(temp, strlen(temp));
	}

	for (int i = 0; i < n; i++)
	{
		msg.add_m_int32(1111 * i);
		msg.add_m_int64(1111 * i);
		msg.add_m_sint32(1111 * i);
		msg.add_m_sint64(1111 * i);
		msg.add_m_uint32(1111 * i);
		msg.add_m_uint64(1111 * i);
		char temp[10] = { 0 };
		_itoa_s(1111 * i, temp, 10, 10);
		msg.add_m_string(common::miniproto::String<>(temp));
		msg.add_m_string(temp);
		msg.add_m_string(temp, strlen(temp));
	}

	msg.Release();
	for (int i = 0; i < n; i++)
	{
		msg.add_m_int32(1111 * i);
		msg.add_m_int64(1111 * i);
		msg.add_m_sint32(1111 * i);
		msg.add_m_sint64(1111 * i);
		msg.add_m_uint32(1111 * i);
		msg.add_m_uint64(1111 * i);
		char temp[10] = { 0 };
		_itoa_s(1111 * i, temp, 10, 10);
		msg.add_m_string(common::miniproto::String<>(temp));
		msg.add_m_string(temp);
		msg.add_m_string(temp, strlen(temp));
	}

#define MsgTestSetOut(name) \
{ \
	msg.m_##name##_size(); \
	auto it = msg.m_##name##_begin(); \
	while (it != msg.m_##name##_end()) \
	{ \
		it++; \
	} \
}

	MsgTestSetOut(int32);
	MsgTestSetOut(sint32);
	MsgTestSetOut(uint32);
	MsgTestSetOut(int64);
	MsgTestSetOut(sint64);
	MsgTestSetOut(uint64);
	MsgTestSetOut(string);
}
void SetMsgTestMap(common::proto2::MsgTestMap<>& msg, int n)
{
#define MsgTestMapAdd(vType, vValue) \
	msg.add_m_int32##vType(i, vValue); \
	msg.add_m_sint32##vType(i, vValue); \
	msg.add_m_uint32##vType(i, vValue); \
	msg.add_m_int64##vType(i, vValue); \
	msg.add_m_sint64##vType(i, vValue); \
	msg.add_m_uint64##vType(i, vValue); \
	msg.add_m_string##vType(common::miniproto::String<>(tempK), vValue); \
	msg.add_m_string##vType(tempK, vValue); \
	msg.add_m_string##vType(tempK, strlen(tempK), vValue);

#define MsgTestMapRemove(vType) \
	msg.remove_m_int32##vType(i); \
	msg.remove_m_sint32##vType(i); \
	msg.remove_m_uint32##vType(i); \
	msg.remove_m_int64##vType(i); \
	msg.remove_m_sint64##vType(i); \
	msg.remove_m_uint64##vType(i); \
	msg.remove_m_string##vType(common::miniproto::String<>(tempK)); \
	msg.remove_m_string##vType(tempK); \
	msg.remove_m_string##vType(tempK, strlen(tempK));

#define MsgTestMapFind(vType) \
	msg.find_m_int32##vType(i); \
	msg.find_m_sint32##vType(i); \
	msg.find_m_uint32##vType(i); \
	msg.find_m_int64##vType(i); \
	msg.find_m_sint64##vType(i); \
	msg.find_m_uint64##vType(i); \
	msg.find_m_string##vType(common::miniproto::String<>(tempK)); \
	msg.find_m_string##vType(tempK); \
	msg.find_m_string##vType(tempK, strlen(tempK));

#define MsgTestMapOut(vType) \
{ \
	msg.m_int32##vType##_size(); \
	auto it = msg.m_int32##vType##_begin(); \
	while (it != msg.m_int32##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_sint32##vType##_size(); \
	auto it = msg.m_sint32##vType##_begin(); \
	while (it != msg.m_sint32##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_uint32##vType##_size(); \
	auto it = msg.m_uint32##vType##_begin(); \
	while (it != msg.m_uint32##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_int64##vType##_size(); \
	auto it = msg.m_int64##vType##_begin(); \
	while (it != msg.m_int64##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_sint64##vType##_size(); \
	auto it = msg.m_sint64##vType##_begin(); \
	while (it != msg.m_sint64##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_uint64##vType##_size(); \
	auto it = msg.m_uint64##vType##_begin(); \
	while (it != msg.m_uint64##vType##_end()) \
	{ \
		it++; \
	} \
} \
{ \
	msg.m_string##vType##_size(); \
	auto it = msg.m_string##vType##_begin(); \
	while (it != msg.m_string##vType##_end()) \
	{ \
		it++; \
	} \
}

	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);
		char tempV[10] = { 0 };
		_itoa_s(1111 * i, tempV, 10, 10);

		MsgTestMapAdd(bool, true);
		MsgTestMapAdd(int32, 1111 * i);
		MsgTestMapAdd(sint32, 1111 * i);
		MsgTestMapAdd(uint32, 1111 * i);
		MsgTestMapAdd(int64, 1111 * i);
		MsgTestMapAdd(sint64, 1111 * i);
		MsgTestMapAdd(uint64, 1111 * i);
		MsgTestMapAdd(float, 1111.0f * i);
		MsgTestMapAdd(double, 1111.0 * i);
		MsgTestMapAdd(enum, common::proto1::EnumTest::EnumTest_4);
		MsgTestMapAdd(string, common::miniproto::String<>(tempV));
	}

	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);

		MsgTestMapRemove(bool);
		MsgTestMapRemove(int32);
		MsgTestMapRemove(sint32);
		MsgTestMapRemove(uint32);
		MsgTestMapRemove(int64);
		MsgTestMapRemove(sint64);
		MsgTestMapRemove(uint64);
		MsgTestMapRemove(float);
		MsgTestMapRemove(double);
		MsgTestMapRemove(enum);
		MsgTestMapRemove(string);
	}

	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);
		char tempV[10] = { 0 };
		_itoa_s(1111 * i, tempV, 10, 10);

		MsgTestMapAdd(bool, true);
		MsgTestMapAdd(int32, 1111 * i);
		MsgTestMapAdd(sint32, 1111 * i);
		MsgTestMapAdd(uint32, 1111 * i);
		MsgTestMapAdd(int64, 1111 * i);
		MsgTestMapAdd(sint64, 1111 * i);
		MsgTestMapAdd(uint64, 1111 * i);
		MsgTestMapAdd(float, 1111.0f * i);
		MsgTestMapAdd(double, 1111.0 * i);
		MsgTestMapAdd(enum, common::proto1::EnumTest::EnumTest_4);
		MsgTestMapAdd(string, common::miniproto::String<>(tempV));
	}

	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);

		MsgTestMapFind(bool);
		MsgTestMapFind(int32);
		MsgTestMapFind(sint32);
		MsgTestMapFind(uint32);
		MsgTestMapFind(int64);
		MsgTestMapFind(sint64);
		MsgTestMapFind(uint64);
		MsgTestMapFind(float);
		MsgTestMapFind(double);
		MsgTestMapFind(enum);
		MsgTestMapFind(string);
	}

	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);

		MsgTestMapOut(bool);
		MsgTestMapOut(int32);
		MsgTestMapOut(sint32);
		MsgTestMapOut(uint32);
		MsgTestMapOut(int64);
		MsgTestMapOut(sint64);
		MsgTestMapOut(uint64);
		MsgTestMapOut(float);
		MsgTestMapOut(double);
		MsgTestMapOut(enum);
		MsgTestMapOut(string);
	}
}
void SetMsgTestMap(const common::proto2::MsgTestMap<>& msg, int n)
{
	for (int i = 0; i < n; i++)
	{
		char tempK[10] = { 0 };
		_itoa_s(i, tempK, 10, 10);

		MsgTestMapFind(bool);
		MsgTestMapFind(int32);
		MsgTestMapFind(sint32);
		MsgTestMapFind(uint32);
		MsgTestMapFind(int64);
		MsgTestMapFind(sint64);
		MsgTestMapFind(uint64);
		MsgTestMapFind(float);
		MsgTestMapFind(double);
		MsgTestMapFind(enum);
		MsgTestMapFind(string);
	}
}
void SetMsgTest(common::proto2::MsgTest<>& msg, int n)
{
	{
		MsgTestSingular<>& msgSingular1 = msg.m_testsingular();
		SetMsgTestSingular(msgSingular1);
		MsgTestSingular<> msgSingular2;
		SetMsgTestSingular(msgSingular2);
		msg.set_m_testsingular(std::move(msgSingular2));
	}
	{
		msg.reserve_m_testsingular_array(n);
		msg.clear_m_testsingular_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestSingular<> msgSingular;
			SetMsgTestSingular(msgSingular);
			msg.add_m_testsingular_array(std::move(msgSingular));
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestSingular<> msgSingular;
			SetMsgTestSingular(msgSingular);
			msg.set_m_testsingular_array(i, std::move(msgSingular));
		}
		msg.clear_m_testsingular_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestSingular<>* msgSingular = msg.add_m_testsingular_array();
			SetMsgTestSingular(*msgSingular);
		}
		for (int i = 0; i < msg.m_testsingular_array_size(); i++)
		{
			const MsgTestSingular<>& msgSingular = msg.m_testsingular_array(i);
		}
	}
	{
		for (int i = 0; i < n; i++)
		{
			MsgTestSingular<> msgSingular;
			SetMsgTestSingular(msgSingular);
			msg.add_m_testsingular_map(i, std::move(msgSingular));
		}
		for (int i = 0; i < n; i++)
		{
			msg.remove_m_testsingular_map(i);
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestSingular<> msgSingular;
			SetMsgTestSingular(msgSingular);
			msg.add_m_testsingular_map(i, std::move(msgSingular));
		}
		for (int i = 0; i < n; i++)
		{
			msg.find_m_testsingular_map(i);
		}
		msg.m_testsingular_map_size();
		auto it = msg.m_testsingular_map_begin();
		while (it != msg.m_testsingular_map_end())
		{
			it++;
		}
	}

	{
		MsgTestArray<>& msgArray1 = msg.m_testarray();
		SetMsgTestArray(msgArray1, n);
		MsgTestArray<> msgArray2;
		SetMsgTestArray(msgArray2, n);
		msg.set_m_testarray(std::move(msgArray2));
	}
	{
		msg.reserve_m_testarray_array(n);
		msg.clear_m_testarray_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestArray<> msgArray;
			SetMsgTestArray(msgArray, n);
			msg.add_m_testarray_array(std::move(msgArray));
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestArray<> msgArray;
			SetMsgTestArray(msgArray, n);
			msg.set_m_testarray_array(i, std::move(msgArray));
		}
		msg.clear_m_testarray_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestArray<>* msgArray = msg.add_m_testarray_array();
			SetMsgTestArray(*msgArray, n);
		}
		for (int i = 0; i < msg.m_testarray_array_size(); i++)
		{
			const MsgTestArray<>& msgArray = msg.m_testarray_array(i);
		}
	}
	{
		for (int i = 0; i < n; i++)
		{
			MsgTestArray<> msgArray;
			SetMsgTestArray(msgArray, n);
			msg.add_m_testarray_map(i, std::move(msgArray));
		}
		for (int i = 0; i < n; i++)
		{
			msg.remove_m_testarray_map(i);
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestArray<> msgArray;
			SetMsgTestArray(msgArray, n);
			msg.add_m_testarray_map(i, std::move(msgArray));
		}
		for (int i = 0; i < n; i++)
		{
			msg.find_m_testarray_map(i);
		}
		msg.m_testarray_map_size();
		auto it = msg.m_testarray_map_begin();
		while (it != msg.m_testarray_map_end())
		{
			it++;
		}
	}

	{
		MsgTestSet<>& msgSet1 = msg.m_testset();
		SetMsgTestSet(msgSet1, n);
		MsgTestSet<> msgSet2;
		SetMsgTestSet(msgSet2, n);
		msg.set_m_testset(std::move(msgSet2));
	}
	{
		msg.reserve_m_testset_array(n);
		msg.clear_m_testset_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestSet<> msgSet;
			SetMsgTestSet(msgSet, n);
			msg.add_m_testset_array(std::move(msgSet));
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestSet<> msgSet;
			SetMsgTestSet(msgSet, n);
			msg.set_m_testset_array(i, std::move(msgSet));
		}
		msg.clear_m_testset_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestSet<>* msgSet = msg.add_m_testset_array();
			SetMsgTestSet(*msgSet, n);
		}
		for (int i = 0; i < msg.m_testset_array_size(); i++)
		{
			const MsgTestSet<>& msgSet = msg.m_testset_array(i);
		}
	}
	{
		for (int i = 0; i < n; i++)
		{
			MsgTestSet<> msgSet;
			SetMsgTestSet(msgSet, n);
			msg.add_m_testset_map(i, std::move(msgSet));
		}
		for (int i = 0; i < n; i++)
		{
			msg.remove_m_testset_map(i);
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestSet<> msgSet;
			SetMsgTestSet(msgSet, n);
			msg.add_m_testset_map(i, std::move(msgSet));
		}
		for (int i = 0; i < n; i++)
		{
			msg.find_m_testset_map(i);
		}
		msg.m_testset_map_size();
		auto it = msg.m_testset_map_begin();
		while (it != msg.m_testset_map_end())
		{
			it++;
		}
	}

	{
		MsgTestMap<>& msgMap1 = msg.m_testmap();
		SetMsgTestMap(msgMap1, n);
		MsgTestMap<> msgMap2;
		SetMsgTestMap(msgMap2, n);
		msg.set_m_testmap(std::move(msgMap2));
	}
	{
		msg.reserve_m_testmap_array(n);
		msg.clear_m_testmap_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestMap<> msgMap;
			SetMsgTestMap(msgMap, n);
			msg.add_m_testmap_array(std::move(msgMap));
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestMap<> msgMap;
			SetMsgTestMap(msgMap, n);
			msg.set_m_testmap_array(i, std::move(msgMap));
		}
		msg.clear_m_testmap_array();
		for (int i = 0; i < n; i++)
		{
			MsgTestMap<>* msgMap = msg.add_m_testmap_array();
			SetMsgTestMap(*msgMap, n);
		}
		for (int i = 0; i < msg.m_testmap_array_size(); i++)
		{
			const MsgTestMap<>& msgMap = msg.m_testmap_array(i);
		}
	}
	{
		for (int i = 0; i < n; i++)
		{
			MsgTestMap<> msgMap;
			SetMsgTestMap(msgMap, n);
			msg.add_m_testmap_map(i, std::move(msgMap));
		}
		for (int i = 0; i < n; i++)
		{
			msg.remove_m_testmap_map(i);
		}
		for (int i = 0; i < n; i++)
		{
			MsgTestMap<> msgMap;
			SetMsgTestMap(msgMap, n);
			msg.add_m_testmap_map(i, std::move(msgMap));
		}
		for (int i = 0; i < n; i++)
		{
			msg.find_m_testmap_map(i);
		}
		msg.m_testmap_map_size();
		auto it = msg.m_testmap_map_begin();
		while (it != msg.m_testmap_map_end())
		{
			it++;
		}
	}
}

int main(int argc, char* argv[])
{
	common::proto2::MsgTest<> inputMsg1;
	SetMsgTest(inputMsg1, 3);
	common::proto2::MsgTest<> inputMsg2;
	SetMsgTest(inputMsg2, 2);
	common::proto2::MsgTest<> outputMsg;

	// 本地内存读/写
	if (true)
	{
		static char input1Buff[1024 * 100] = { 0 };
		static char input2Buff[1024 * 100] = { 0 };
		static ProtoBuf input1((byte *)input1Buff, sizeof(input1Buff));
		static ProtoBuf input2((byte *)input2Buff, sizeof(input2Buff));
		common::miniproto::byte_size msg1Size = inputMsg1.ByteSize();
		common::miniproto::byte_size msg2Size = inputMsg2.ByteSize();

		// 序列化到buff
		if (!inputMsg1.SerializeToArray(input1, msg1Size))
		{
			std::cout << "input1Msg SerializeToArray error." << std::endl;
		}
		if (!inputMsg2.SerializeToArray(input2, msg2Size))
		{
			std::cout << "input2Msg SerializeToArray error." << std::endl;
		}

		// buff写文件
		std::ofstream output1Stream;
		std::ofstream output2Stream;
		output1Stream.open("./output1Buff.txt", std::ios::out | std::ios::binary | std::ios::trunc);
		if (output1Stream)
		{
			output1Stream.write((char *)input1.Buf(), msg1Size);
			output1Stream.close();
		}
		output2Stream.open("./output2Buff.txt", std::ios::out | std::ios::binary | std::ios::trunc);
		if (output2Stream)
		{
			output2Stream.write((char *)input2.Buf(), msg2Size);
			output2Stream.close();
		}

		// 从buff反序列化
		input1.SetPos(0);
		if (!outputMsg.ParseFromArray(input1, msg1Size))
		{
			std::cout << "outputMsg ParseFromArray error." << std::endl;
		}
		input2.SetPos(0);
		if (!outputMsg.ParseFromArray(input2, msg2Size))
		{
			std::cout << "outputMsg ParseFromArray error." << std::endl;
		}
	}

	// 序列化到文件
	if (true)
	{
		std::ofstream output1Stream;
		std::ofstream output2Stream;

		output1Stream.open("./output1Stream.txt", std::ios::out | std::ios::binary | std::ios::trunc);
		if (output1Stream)
		{
			if (!inputMsg1.SerializeToStream(output1Stream, inputMsg1.ByteSize()))
			{
				std::cout << "input1Msg SerializeToStream error." << std::endl;
			}
			output1Stream.close();
		}
		output2Stream.open("./output2Stream.txt", std::ios::out | std::ios::binary | std::ios::trunc);
		if (output2Stream)
		{
			if (!inputMsg2.SerializeToStream(output2Stream, inputMsg2.ByteSize()))
			{
				std::cout << "input2Msg SerializeToStream error." << std::endl;
			}
			output2Stream.close();
		}
	}

	// 从文件反序列化
	if (true)
	{
		std::ifstream input1Stream;
		std::ifstream input2Stream;

		input1Stream.open("./output1Stream.txt", std::ios::in | std::ios::binary | std::ios::ate);
		if (input1Stream)
		{
			common::miniproto::byte_size input1BuffSize = input1Stream.tellg();
			input1Stream.seekg(0, std::ios::beg);
			if (!outputMsg.ParseFromStream(input1Stream, input1BuffSize))
			{
				std::cout << "outputMsg ParseFromStream error." << std::endl;
			}
			input1Stream.close();
		}
		input2Stream.open("./output2Stream.txt", std::ios::in | std::ios::binary | std::ios::ate);
		if (input2Stream)
		{
			common::miniproto::byte_size input2BuffSize = input2Stream.tellg();
			input2Stream.seekg(0, std::ios::beg);
			if (!outputMsg.ParseFromStream(input2Stream, input2BuffSize))
			{
				std::cout << "outputMsg ParseFromStream error." << std::endl;
			}
			input2Stream.close();
		}
	}

	system("pause");

	return 0;
}

