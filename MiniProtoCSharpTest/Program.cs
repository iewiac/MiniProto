using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

using common.proto1;
using common.proto2;

namespace MiniProtoCSharpTest
{
	class Program
	{
		static void SetMsgTestSingular(common.proto1.MsgTestSingular msg)
		{
			msg.Clear();
			msg.m_bool = true;
			msg.m_int32 = 1111;
			msg.m_int64 = 1111;
			msg.m_sint32 = 1111;
			msg.m_sint64 = 1111;
			msg.m_uint32 = 1111;
			msg.m_uint64 = 1111;
			msg.m_float = 1111;
			msg.m_double = 1111;
			msg.m_enum = common.proto1.EnumTest.EnumTest_1;
			msg.m_string = "1111";
			msg.m_bytes = "1111";

			msg.Release();
			msg.m_bool = true;
			msg.m_int32 = 1111;
			msg.m_int64 = 1111;
			msg.m_sint32 = 1111;
			msg.m_sint64 = 1111;
			msg.m_uint32 = 1111;
			msg.m_uint64 = 1111;
			msg.m_float = 1111;
			msg.m_double = 1111;
			msg.m_enum = common.proto1.EnumTest.EnumTest_1;
			msg.m_string = "1111";
			msg.m_bytes = "1111";
		}
		static void SetMsgTestArray(common.proto2.MsgTestArray msg, int n)
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
				msg.add_m_enum(common.proto1.EnumTest.EnumTest_2);
				msg.add_m_string("22");
				msg.add_m_string("222");
				msg.add_m_string("2222");
			}

			msg.Release();
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
				msg.add_m_enum(common.proto1.EnumTest.EnumTest_2);
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
				msg.set_m_enum(i, common.proto1.EnumTest.EnumTest_2);
				msg.set_m_string(i, "2222");
			}
		}
		static void SetMsgTestSet(common.proto2.MsgTestSet msg, int n)
		{
			msg.Clear();
			for (int i = 0; i < n; i++)
			{
				msg.add_m_int32(1111 * i);
				msg.add_m_int64(1111 * i);
				msg.add_m_sint32(1111 * i);
				msg.add_m_sint64(1111 * i);
				msg.add_m_uint32(1111 * (uint)i);
				msg.add_m_uint64(1111 * (ulong)i);
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
			}

			for (int i = 0; i < n; i++)
			{
				msg.remove_m_int32(1111 * i);
				msg.remove_m_int64(1111 * i);
				msg.remove_m_sint32(1111 * i);
				msg.remove_m_sint64(1111 * i);
				msg.remove_m_uint32(1111 * (uint)i);
				msg.remove_m_uint64(1111 * (ulong)i);
				msg.remove_m_string(Convert.ToString(1111 * i));
				msg.remove_m_string(Convert.ToString(1111 * i));
				msg.remove_m_string(Convert.ToString(1111 * i));
			}

			for (int i = 0; i < n; i++)
			{
				msg.add_m_int32(1111 * i);
				msg.add_m_int64(1111 * i);
				msg.add_m_sint32(1111 * i);
				msg.add_m_sint64(1111 * i);
				msg.add_m_uint32(1111 * (uint)i);
				msg.add_m_uint64(1111 * (ulong)i);
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
			}

			msg.Release();
			for (int i = 0; i < n; i++)
			{
				msg.add_m_int32(1111 * i);
				msg.add_m_int64(1111 * i);
				msg.add_m_sint32(1111 * i);
				msg.add_m_sint64(1111 * i);
				msg.add_m_uint32(1111 * (uint)i);
				msg.add_m_uint64(1111 * (ulong)i);
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
				msg.add_m_string(Convert.ToString(1111 * i));
			}
		}
		static void SetMsgTestMap(common.proto2.MsgTestMap msg, int n)
		{
			for (int i = 0; i < n; i++)
			{
				msg.add_m_int32bool(i, true);
				msg.add_m_int64bool(i, true);
				msg.add_m_sint32bool(i, true);
				msg.add_m_sint64bool(i, true);
				msg.add_m_uint32bool((uint)i, true);
				msg.add_m_uint64bool((ulong)i, true);
				msg.add_m_stringbool(Convert.ToString(i), true);

				msg.add_m_int32int32(i, 1111 * i);
				msg.add_m_int64int32(i, 1111 * i);
				msg.add_m_sint32int32(i, 1111 * i);
				msg.add_m_sint64int32(i, 1111 * i);
				msg.add_m_uint32int32((uint)i, 1111 * i);
				msg.add_m_uint64int32((ulong)i, 1111 * i);
				msg.add_m_stringint32(Convert.ToString(i), 1111 * i);

				msg.add_m_int32sint32(i, 1111 * i);
				msg.add_m_int64sint32(i, 1111 * i);
				msg.add_m_sint32sint32(i, 1111 * i);
				msg.add_m_sint64sint32(i, 1111 * i);
				msg.add_m_uint32sint32((uint)i, 1111 * i);
				msg.add_m_uint64sint32((ulong)i, 1111 * i);
				msg.add_m_stringsint32(Convert.ToString(i), 1111 * i);

				msg.add_m_int32uint32(i, 1111 * (uint)i);
				msg.add_m_int64uint32(i, 1111 * (uint)i);
				msg.add_m_sint32uint32(i, 1111 * (uint)i);
				msg.add_m_sint64uint32(i, 1111 * (uint)i);
				msg.add_m_uint32uint32((uint)i, 1111 * (uint)i);
				msg.add_m_uint64uint32((ulong)i, 1111 * (uint)i);
				msg.add_m_stringuint32(Convert.ToString(i), 1111 * (uint)i);

				msg.add_m_int32int64(i, 1111 * i);
				msg.add_m_int64int64(i, 1111 * i);
				msg.add_m_sint32int64(i, 1111 * i);
				msg.add_m_sint64int64(i, 1111 * i);
				msg.add_m_uint32int64((uint)i, 1111 * i);
				msg.add_m_uint64int64((ulong)i, 1111 * i);
				msg.add_m_stringint64(Convert.ToString(i), 1111 * i);

				msg.add_m_int32sint64(i, 1111 * i);
				msg.add_m_int64sint64(i, 1111 * i);
				msg.add_m_sint32sint64(i, 1111 * i);
				msg.add_m_sint64sint64(i, 1111 * i);
				msg.add_m_uint32sint64((uint)i, 1111 * i);
				msg.add_m_uint64sint64((ulong)i, 1111 * i);
				msg.add_m_stringsint64(Convert.ToString(i), 1111 * i);

				msg.add_m_int32uint64(i, 1111 * (ulong)i);
				msg.add_m_int64uint64(i, 1111 * (ulong)i);
				msg.add_m_sint32uint64(i, 1111 * (ulong)i);
				msg.add_m_sint64uint64(i, 1111 * (ulong)i);
				msg.add_m_uint32uint64((uint)i, 1111 * (ulong)i);
				msg.add_m_uint64uint64((ulong)i, 1111 * (ulong)i);
				msg.add_m_stringuint64(Convert.ToString(i), 1111 * (ulong)i);

				msg.add_m_int32enum(i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_int64enum(i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_sint32enum(i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_sint64enum(i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_uint32enum((uint)i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_uint64enum((ulong)i, common.proto1.EnumTest.EnumTest_4);
				msg.add_m_stringenum(Convert.ToString(i), common.proto1.EnumTest.EnumTest_4);

				msg.add_m_int32float(i, 1111.0f * i);
				msg.add_m_int64float(i, 1111.0f * i);
				msg.add_m_sint32float(i, 1111.0f * i);
				msg.add_m_sint64float(i, 1111.0f * i);
				msg.add_m_uint32float((uint)i, 1111.0f * i);
				msg.add_m_uint64float((ulong)i, 1111.0f * i);
				msg.add_m_stringfloat(Convert.ToString(i), 1111.0f * i);

				msg.add_m_int32double(i, 1111.0 * i);
				msg.add_m_int64double(i, 1111.0 * i);
				msg.add_m_sint32double(i, 1111.0 * i);
				msg.add_m_sint64double(i, 1111.0 * i);
				msg.add_m_uint32double((uint)i, 1111.0 * i);
				msg.add_m_uint64double((ulong)i, 1111.0 * i);
				msg.add_m_stringdouble(Convert.ToString(i), 1111.0 * i);

				msg.add_m_int32string(i, Convert.ToString(1111 * i));
				msg.add_m_int64string(i, Convert.ToString(1111 * i));
				msg.add_m_sint32string(i, Convert.ToString(1111 * i));
				msg.add_m_sint64string(i, Convert.ToString(1111 * i));
				msg.add_m_uint32string((uint)i, Convert.ToString(1111 * i));
				msg.add_m_uint64string((ulong)i, Convert.ToString(1111 * i));
				msg.add_m_stringstring(Convert.ToString(i), Convert.ToString(1111 * i));
			}
		}
		static void SetMsgTest(common.proto2.MsgTest msg, int n)
		{
			{
				MsgTestSingular msgSingular = new MsgTestSingular();
				SetMsgTestSingular(msgSingular);
				msg.m_testsingular = msgSingular;
			}
			{
				msg.clear_m_testsingular_array();
				for (int i = 0; i < n; i++)
				{
					MsgTestSingular msgSingular = new MsgTestSingular();
					SetMsgTestSingular(msgSingular);
					msg.add_m_testsingular_array(msgSingular);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestSingular msgSingular = new MsgTestSingular();
					;
					SetMsgTestSingular(msgSingular);
					msg.set_m_testsingular_array(i, msgSingular);
				}
			}
			{
				for (int i = 0; i < n; i++)
				{
					MsgTestSingular msgSingular = new MsgTestSingular();
					SetMsgTestSingular(msgSingular);
					msg.add_m_testsingular_map(i, msgSingular);
				}
				for (int i = 0; i < n; i++)
				{
					msg.remove_m_testsingular_map(i);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestSingular msgSingular = new MsgTestSingular();
					SetMsgTestSingular(msgSingular);
					msg.add_m_testsingular_map(i, msgSingular);
				}
				for (int i = 0; i < n; i++)
				{
					msg.find_m_testsingular_map(i);
				}
			}

			{
				MsgTestArray msgArray = new MsgTestArray();
				SetMsgTestArray(msgArray, n);
				msg.m_testarray = msgArray;
			}
			{
				msg.clear_m_testarray_array();
				for (int i = 0; i < n; i++)
				{
					MsgTestArray msgArray = new MsgTestArray();
					SetMsgTestArray(msgArray, n);
					msg.add_m_testarray_array(msgArray);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestArray msgArray = new MsgTestArray();
					SetMsgTestArray(msgArray, n);
					msg.set_m_testarray_array(i, msgArray);
				}
			}
			{
				for (int i = 0; i < n; i++)
				{
					MsgTestArray msgArray = new MsgTestArray();
					SetMsgTestArray(msgArray, n);
					msg.add_m_testarray_map(i, msgArray);
				}
				for (int i = 0; i < n; i++)
				{
					msg.remove_m_testarray_map(i);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestArray msgArray = new MsgTestArray();
					SetMsgTestArray(msgArray, n);
					msg.add_m_testarray_map(i, msgArray);
				}
				for (int i = 0; i < n; i++)
				{
					msg.find_m_testarray_map(i);
				}
			}

			{
				MsgTestSet msgSet = new MsgTestSet();
				SetMsgTestSet(msgSet, n);
				msg.m_testset = msgSet;
			}
			{
				msg.clear_m_testset_array();
				for (int i = 0; i < n; i++)
				{
					MsgTestSet msgSet = new MsgTestSet();
					SetMsgTestSet(msgSet, n);
					msg.add_m_testset_array(msgSet);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestSet msgSet = new MsgTestSet();
					SetMsgTestSet(msgSet, n);
					msg.set_m_testset_array(i, msgSet);
				}
			}
			{
				for (int i = 0; i < n; i++)
				{
					MsgTestSet msgSet = new MsgTestSet();
					SetMsgTestSet(msgSet, n);
					msg.add_m_testset_map(i, msgSet);
				}
				for (int i = 0; i < n; i++)
				{
					msg.remove_m_testset_map(i);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestSet msgSet = new MsgTestSet();
					SetMsgTestSet(msgSet, n);
					msg.add_m_testset_map(i, msgSet);
				}
				for (int i = 0; i < n; i++)
				{
					msg.find_m_testset_map(i);
				}
			}

			{
				MsgTestMap msgMap = new MsgTestMap();
				SetMsgTestMap(msgMap, n);
				msg.m_testmap = msgMap;
			}
			{
				msg.clear_m_testmap_array();
				for (int i = 0; i < n; i++)
				{
					MsgTestMap msgMap = new MsgTestMap();
					SetMsgTestMap(msgMap, n);
					msg.add_m_testmap_array(msgMap);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestMap msgMap = new MsgTestMap();
					SetMsgTestMap(msgMap, n);
					msg.set_m_testmap_array(i, msgMap);
				}
			}
			{
				for (int i = 0; i < n; i++)
				{
					MsgTestMap msgMap = new MsgTestMap();
					SetMsgTestMap(msgMap, n);
					msg.add_m_testmap_map(i, msgMap);
				}
				for (int i = 0; i < n; i++)
				{
					msg.remove_m_testmap_map(i);
				}
				for (int i = 0; i < n; i++)
				{
					MsgTestMap msgMap = new MsgTestMap();
					SetMsgTestMap(msgMap, n);
					msg.add_m_testmap_map(i, msgMap);
				}
			}
		}

		static void Main(string[] args)
		{
			common.proto2.MsgTest input1Msg = new common.proto2.MsgTest();
			SetMsgTest(input1Msg, 3);
			common.proto2.MsgTest input2Msg = new common.proto2.MsgTest();
			SetMsgTest(input2Msg, 2);
			common.proto2.MsgTest outputMsg = new common.proto2.MsgTest();

			// 本地内存读/写
			if (true)
			{
				MemoryStream input1Buff = new MemoryStream();
				MemoryStream input2Buff = new MemoryStream();

				// 序列化到buff
				if (!input1Msg.SerializeToStream(input1Buff, input1Msg.ByteSize()))
				{
					Console.Write("input1Msg SerializeToStream error.");
				}
				if (!input2Msg.SerializeToStream(input2Buff, input2Msg.ByteSize()))
				{
					Console.Write("input2Msg SerializeToStream error.");
				}

				// 从buff反序列化
				input1Buff.Position = 0;
				if (!outputMsg.ParseFromStream(input1Buff, (ulong)input1Buff.Length))
				{
					Console.Write("outputMsg ParseFromStream error.");
				}
				input2Buff.Position = 0;
				if (!outputMsg.ParseFromStream(input2Buff, (ulong)input2Buff.Length))
				{
					Console.Write("outputMsg ParseFromStream error.");
				}
			}

			// 序列化到文件
			if (true)
			{
				FileStream output1Stream = new FileStream("./output1Stream.txt", FileMode.OpenOrCreate, FileAccess.Write);
				FileStream output2Stream = new FileStream("./output2Stream.txt", FileMode.OpenOrCreate, FileAccess.Write);
				if (null != output1Stream)
				{
					if (!input1Msg.SerializeToStream(output1Stream, input1Msg.ByteSize()))
					{
						Console.Write("outputMsg SerializeToStream error.");
					}
					output1Stream.Close();
				}
				if (null != output2Stream)
				{
					if (!input2Msg.SerializeToStream(output2Stream, input2Msg.ByteSize()))
					{
						Console.Write("outputMsg SerializeToStream error.");
					}
					output2Stream.Close();
				}
			}

			// 从文件反序列化
			if (true)
			{
				FileStream input1Stream = new FileStream("./output1Stream.txt", FileMode.Open, FileAccess.Read);
				FileStream input2Stream = new FileStream("./output2Stream.txt", FileMode.Open, FileAccess.Read);
				if (null != input1Stream)
				{
					if (!outputMsg.ParseFromStream(input1Stream, (ulong)input1Stream.Length))
					{
						Console.Write("outputMsg ParseFromStream error.");
					}
					input1Stream.Close();
				}
				if (null != input2Stream)
				{
					if (!outputMsg.ParseFromStream(input2Stream, (ulong)input2Stream.Length))
					{
						Console.Write("outputMsg ParseFromStream error.");
					}
					input1Stream.Close();
				}
			}

			Console.WriteLine("按任意键退出...");
			Console.ReadKey();
		}
	}
}
