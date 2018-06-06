import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

import common.proto1.Proto1.*;
import common.proto2.Proto2.*;

public class MiniProtoJavaTest {

	public static void SetMsgTestSingular(MsgTestSingular msg) {
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
		msg.set_m_enum(common.proto1.Proto1.EnumTest.EnumTest_1);
		msg.set_m_string("1111");
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
		msg.set_m_enum(common.proto1.Proto1.EnumTest.EnumTest_1);
		msg.set_m_string("1111");
		msg.set_m_bytes("1111");
	}

	public static void SetMsgTestArray(MsgTestArray msg, int n) {
		msg.Clear();
		for (int i = 0; i < n; i++) {
			msg.add_m_bool(true);
			msg.add_m_int32(2222);
			msg.add_m_int64(2222L);
			msg.add_m_sint32(2222);
			msg.add_m_sint64(2222L);
			msg.add_m_uint32(2222);
			msg.add_m_uint64(2222L);
			msg.add_m_float(2222.0f);
			msg.add_m_double(2222.0);
			msg.add_m_enum(common.proto1.Proto1.EnumTest.EnumTest_2.getValue());
			msg.add_m_string("22");
			msg.add_m_string("222");
			msg.add_m_string("2222");
		}

		msg.Release();
		for (int i = 0; i < n; i++) {
			msg.add_m_bool(true);
			msg.add_m_int32(2222);
			msg.add_m_int64(2222L);
			msg.add_m_sint32(2222);
			msg.add_m_sint64(2222L);
			msg.add_m_uint32(2222);
			msg.add_m_uint64(2222L);
			msg.add_m_float(2222.0f);
			msg.add_m_double(2222.0);
			msg.add_m_enum(common.proto1.Proto1.EnumTest.EnumTest_2.getValue());
			msg.add_m_string("2222");
		}

		for (int i = 0; i < n; i++) {
			msg.set_m_bool(i, true);
			msg.set_m_int32(i, 2222);
			msg.set_m_int64(i, 2222L);
			msg.set_m_sint32(i, 2222);
			msg.set_m_sint64(i, 2222L);
			msg.set_m_uint32(i, 2222);
			msg.set_m_uint64(i, 2222L);
			msg.set_m_float(i, 2222.0f);
			msg.set_m_double(i, 2222.0);
			msg.set_m_enum(i, common.proto1.Proto1.EnumTest.EnumTest_2.getValue());
			msg.set_m_string(i, "2222");
		}
	}

	public static void SetMsgTestSet(MsgTestSet msg, int n) {
		msg.Clear();
		for (int i = 0; i < n; i++) {
			msg.add_m_int32(1111 * i);
			msg.add_m_int64(1111L * i);
			msg.add_m_sint32(1111 * i);
			msg.add_m_sint64(1111L * i);
			msg.add_m_uint32(1111 * i);
			msg.add_m_uint64(1111L * i);
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
		}

		for (int i = 0; i < n; i++) {
			msg.remove_m_int32(1111 * i);
			msg.remove_m_int64(1111L * i);
			msg.remove_m_sint32(1111 * i);
			msg.remove_m_sint64(1111L * i);
			msg.remove_m_uint32(1111 * i);
			msg.remove_m_uint64(1111L * i);
			msg.remove_m_string(String.valueOf(1111 * i));
			msg.remove_m_string(String.valueOf(1111 * i));
			msg.remove_m_string(String.valueOf(1111 * i));
		}

		for (int i = 0; i < n; i++) {
			msg.add_m_int32(1111 * i);
			msg.add_m_int64(1111L * i);
			msg.add_m_sint32(1111 * i);
			msg.add_m_sint64(1111L * i);
			msg.add_m_uint32(1111 * i);
			msg.add_m_uint64(1111L * i);
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
		}

		msg.Release();
		for (int i = 0; i < n; i++) {
			msg.add_m_int32(1111 * i);
			msg.add_m_int64(1111L * i);
			msg.add_m_sint32(1111 * i);
			msg.add_m_sint64(1111L * i);
			msg.add_m_uint32(1111 * i);
			msg.add_m_uint64(1111L * i);
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
			msg.add_m_string(String.valueOf(1111 * i));
		}
	}

	public static void SetMsgTestMap(MsgTestMap msg, int n) {
		for (int i = 0; i < n; i++) {
			msg.add_m_int32bool(i, true);
			msg.add_m_int64bool((long) i, true);
			msg.add_m_sint32bool(i, true);
			msg.add_m_sint64bool((long) i, true);
			msg.add_m_uint32bool(i, true);
			msg.add_m_uint64bool((long) i, true);
			msg.add_m_stringbool(String.valueOf(i), true);

			msg.add_m_int32int32(i, 1111 * i);
			msg.add_m_int64int32((long) i, 1111 * i);
			msg.add_m_sint32int32(i, 1111 * i);
			msg.add_m_sint64int32((long) i, 1111 * i);
			msg.add_m_uint32int32(i, 1111 * i);
			msg.add_m_uint64int32((long) i, 1111 * i);
			msg.add_m_stringint32(String.valueOf(i), 1111 * i);

			msg.add_m_int32sint32(i, 1111 * i);
			msg.add_m_int64sint32((long) i, 1111 * i);
			msg.add_m_sint32sint32(i, 1111 * i);
			msg.add_m_sint64sint32((long) i, 1111 * i);
			msg.add_m_uint32sint32(i, 1111 * i);
			msg.add_m_uint64sint32((long) i, 1111 * i);
			msg.add_m_stringsint32(String.valueOf(i), 1111 * i);

			msg.add_m_int32uint32(i, 1111 * i);
			msg.add_m_int64uint32((long) i, 1111 * i);
			msg.add_m_sint32uint32(i, 1111 * i);
			msg.add_m_sint64uint32((long) i, 1111 * i);
			msg.add_m_uint32uint32(i, 1111 * i);
			msg.add_m_uint64uint32((long) i, 1111 * i);
			msg.add_m_stringuint32(String.valueOf(i), 1111 * i);

			msg.add_m_int32int64(i, 1111 * (long) i);
			msg.add_m_int64int64((long) i, 1111 * (long) i);
			msg.add_m_sint32int64(i, 1111 * (long) i);
			msg.add_m_sint64int64((long) i, 1111 * (long) i);
			msg.add_m_uint32int64(i, 1111 * (long) i);
			msg.add_m_uint64int64((long) i, 1111 * (long) i);
			msg.add_m_stringint64(String.valueOf(i), 1111 * (long) i);

			msg.add_m_int32sint64(i, 1111 * (long) i);
			msg.add_m_int64sint64((long) i, 1111 * (long) i);
			msg.add_m_sint32sint64(i, 1111 * (long) i);
			msg.add_m_sint64sint64((long) i, 1111 * (long) i);
			msg.add_m_uint32sint64(i, 1111 * (long) i);
			msg.add_m_uint64sint64((long) i, 1111 * (long) i);
			msg.add_m_stringsint64(String.valueOf(i), 1111 * (long) i);

			msg.add_m_int32uint64(i, 1111 * (long) i);
			msg.add_m_int64uint64((long) i, 1111 * (long) i);
			msg.add_m_sint32uint64(i, 1111 * (long) i);
			msg.add_m_sint64uint64((long) i, 1111 * (long) i);
			msg.add_m_uint32uint64(i, 1111 * (long) i);
			msg.add_m_uint64uint64((long) i, 1111 * (long) i);
			msg.add_m_stringuint64(String.valueOf(i), 1111 * (long) i);

			msg.add_m_int32enum(i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_int64enum((long) i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_sint32enum(i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_sint64enum((long) i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_uint32enum(i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_uint64enum((long) i, common.proto1.Proto1.EnumTest.EnumTest_4.getValue());
			msg.add_m_stringenum(String.valueOf(i), common.proto1.Proto1.EnumTest.EnumTest_4.getValue());

			msg.add_m_int32float(i, 1111.0f * i);
			msg.add_m_int64float((long) i, 1111.0f * i);
			msg.add_m_sint32float(i, 1111.0f * i);
			msg.add_m_sint64float((long) i, 1111.0f * i);
			msg.add_m_uint32float(i, 1111.0f * i);
			msg.add_m_uint64float((long) i, 1111.0f * i);
			msg.add_m_stringfloat(String.valueOf(i), 1111.0f * i);

			msg.add_m_int32double(i, 1111.0 * i);
			msg.add_m_int64double((long) i, 1111.0 * i);
			msg.add_m_sint32double(i, 1111.0 * i);
			msg.add_m_sint64double((long) i, 1111.0 * i);
			msg.add_m_uint32double(i, 1111.0 * i);
			msg.add_m_uint64double((long) i, 1111.0 * i);
			msg.add_m_stringdouble(String.valueOf(i), 1111.0 * i);

			msg.add_m_int32string(i, String.valueOf(1111 * i));
			msg.add_m_int64string((long) i, String.valueOf(1111 * i));
			msg.add_m_sint32string(i, String.valueOf(1111 * i));
			msg.add_m_sint64string((long) i, String.valueOf(1111 * i));
			msg.add_m_uint32string(i, String.valueOf(1111 * i));
			msg.add_m_uint64string((long) i, String.valueOf(1111 * i));
			msg.add_m_stringstring(String.valueOf(i), String.valueOf(1111 * i));
		}
	}

	public static void SetMsgTest(MsgTest msg, int n) {
		{
			MsgTestSingular msgSingular = new MsgTestSingular();
			SetMsgTestSingular(msgSingular);
			msg.set_m_testsingular(msgSingular);
		}
		{
			msg.clear_m_testsingular_array();
			for (int i = 0; i < n; i++) {
				MsgTestSingular msgSingular = new MsgTestSingular();
				SetMsgTestSingular(msgSingular);
				msg.add_m_testsingular_array(msgSingular);
			}
			for (int i = 0; i < n; i++) {
				MsgTestSingular msgSingular = new MsgTestSingular();
				;
				SetMsgTestSingular(msgSingular);
				msg.set_m_testsingular_array(i, msgSingular);
			}
		}
		{
			for (int i = 0; i < n; i++) {
				MsgTestSingular msgSingular = new MsgTestSingular();
				SetMsgTestSingular(msgSingular);
				msg.add_m_testsingular_map(i, msgSingular);
			}
			for (int i = 0; i < n; i++) {
				msg.remove_m_testsingular_map(i);
			}
			for (int i = 0; i < n; i++) {
				MsgTestSingular msgSingular = new MsgTestSingular();
				SetMsgTestSingular(msgSingular);
				msg.add_m_testsingular_map(i, msgSingular);
			}
			for (int i = 0; i < n; i++) {
				msg.find_m_testsingular_map(i);
			}
		}

		{
			MsgTestArray msgArray = new MsgTestArray();
			SetMsgTestArray(msgArray, n);
			msg.set_m_testarray(msgArray);
		}
		{
			msg.clear_m_testarray_array();
			for (int i = 0; i < n; i++) {
				MsgTestArray msgArray = new MsgTestArray();
				SetMsgTestArray(msgArray, n);
				msg.add_m_testarray_array(msgArray);
			}
			for (int i = 0; i < n; i++) {
				MsgTestArray msgArray = new MsgTestArray();
				SetMsgTestArray(msgArray, n);
				msg.set_m_testarray_array(i, msgArray);
			}
		}
		{
			for (int i = 0; i < n; i++) {
				MsgTestArray msgArray = new MsgTestArray();
				SetMsgTestArray(msgArray, n);
				msg.add_m_testarray_map(i, msgArray);
			}
			for (int i = 0; i < n; i++) {
				msg.remove_m_testarray_map(i);
			}
			for (int i = 0; i < n; i++) {
				MsgTestArray msgArray = new MsgTestArray();
				SetMsgTestArray(msgArray, n);
				msg.add_m_testarray_map(i, msgArray);
			}
			for (int i = 0; i < n; i++) {
				msg.find_m_testarray_map(i);
			}
		}

		{
			MsgTestSet msgSet = new MsgTestSet();
			SetMsgTestSet(msgSet, n);
			msg.set_m_testset(msgSet);
		}
		{
			msg.clear_m_testset_array();
			for (int i = 0; i < n; i++) {
				MsgTestSet msgSet = new MsgTestSet();
				SetMsgTestSet(msgSet, n);
				msg.add_m_testset_array(msgSet);
			}
			for (int i = 0; i < n; i++) {
				MsgTestSet msgSet = new MsgTestSet();
				SetMsgTestSet(msgSet, n);
				msg.set_m_testset_array(i, msgSet);
			}
		}
		{
			for (int i = 0; i < n; i++) {
				MsgTestSet msgSet = new MsgTestSet();
				SetMsgTestSet(msgSet, n);
				msg.add_m_testset_map(i, msgSet);
			}
			for (int i = 0; i < n; i++) {
				msg.remove_m_testset_map(i);
			}
			for (int i = 0; i < n; i++) {
				MsgTestSet msgSet = new MsgTestSet();
				SetMsgTestSet(msgSet, n);
				msg.add_m_testset_map(i, msgSet);
			}
			for (int i = 0; i < n; i++) {
				msg.find_m_testset_map(i);
			}
		}

		{
			MsgTestMap msgMap = new MsgTestMap();
			SetMsgTestMap(msgMap, n);
			msg.set_m_testmap(msgMap);
		}
		{
			msg.clear_m_testmap_array();
			for (int i = 0; i < n; i++) {
				MsgTestMap msgMap = new MsgTestMap();
				SetMsgTestMap(msgMap, n);
				msg.add_m_testmap_array(msgMap);
			}
			for (int i = 0; i < n; i++) {
				MsgTestMap msgMap = new MsgTestMap();
				SetMsgTestMap(msgMap, n);
				msg.set_m_testmap_array(i, msgMap);
			}
		}
		{
			for (int i = 0; i < n; i++) {
				MsgTestMap msgMap = new MsgTestMap();
				SetMsgTestMap(msgMap, n);
				msg.add_m_testmap_map(i, msgMap);
			}
			for (int i = 0; i < n; i++) {
				msg.remove_m_testmap_map(i);
			}
			for (int i = 0; i < n; i++) {
				MsgTestMap msgMap = new MsgTestMap();
				SetMsgTestMap(msgMap, n);
				msg.add_m_testmap_map(i, msgMap);
			}
		}
	}

	/**
	 * @param args
	 * @throws IOException
	 */
	public static void main(String[] args) throws IOException {
		MsgTest input1Msg = new MsgTest();
		SetMsgTest(input1Msg, 3);
		MsgTest input2Msg = new MsgTest();
		SetMsgTest(input2Msg, 2);
		MsgTest outputMsg = new MsgTest();

		// 本地内存读/写
		if (true) {
			ByteArrayOutputStream output1Buff = new ByteArrayOutputStream();
			ByteArrayOutputStream output2Buff = new ByteArrayOutputStream();
			if (!input1Msg.SerializeToStream(output1Buff, input1Msg.ByteSize())) {
				System.out.println("input1Msg SerializeToArray error.");
			}
			if (!input2Msg.SerializeToStream(output2Buff, input2Msg.ByteSize())) {
				System.out.println("input2Msg SerializeToArray error.");
			}

			ByteArrayInputStream input1Buff = new ByteArrayInputStream(output1Buff.toByteArray());
			ByteArrayInputStream input2Buff = new ByteArrayInputStream(output2Buff.toByteArray());
			if (!outputMsg.ParseFromStream(input1Buff, input1Buff.available())) {
				System.out.println("outputMsg ParseFromArray error.");
			}
			if (!outputMsg.ParseFromStream(input2Buff, input2Buff.available())) {
				System.out.println("outputMsg ParseFromArray error.");
			}
		}

		// 序列化到文件
		if (true) {
			FileOutputStream output1Stream = new FileOutputStream("F:/workspace/MiniProto/Release/output1Stream.txt");
			FileOutputStream output2Stream = new FileOutputStream("F:/workspace/MiniProto/Release/output2Stream.txt");
			if (null != output1Stream) {
				if (!input1Msg.SerializeToStream(output1Stream, input1Msg.ByteSize())) {
					System.out.println("outputMsg SerializeToStream error.");
				}
				output1Stream.close();
			}
			if (null != output2Stream) {
				if (!input2Msg.SerializeToStream(output2Stream, input2Msg.ByteSize())) {
					System.out.println("outputMsg SerializeToStream error.");
				}
				output2Stream.close();
			}
		}

		// 从文件反序列化
		if (true) {
			FileInputStream input1Stream = new FileInputStream("F:/workspace/MiniProto/Release/output1Stream.txt");
			FileInputStream input2Stream = new FileInputStream("F:/workspace/MiniProto/Release/output2Stream.txt");
			if (null != input1Stream) {
				if (!outputMsg.ParseFromStream(input1Stream, input1Stream.available())) {
					System.out.println("outputMsg ParseFromArray error.");
				}
				input1Stream.close();
			}
			if (null != input2Stream) {
				if (!outputMsg.ParseFromStream(input2Stream, input2Stream.available())) {
					System.out.println("outputMsg ParseFromArray error.");
				}
				input1Stream.close();
			}
		}

		System.out.println("over.");
	}
}
