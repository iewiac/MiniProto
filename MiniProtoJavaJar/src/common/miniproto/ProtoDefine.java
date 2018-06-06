package common.miniproto;

public class ProtoDefine {

	// 解码失败时，throw UnknownWriteTypeException
	public static final String UnknownWriteTypeException = "UnknownWriteTypeException";

	// Map中出现不支持的键/值类型时，throw IncompatibleTypeException
	public static final String IncompatibleTypeException = "IncompatibleTypeException";

	// proto字段类型枚举
	public enum ProtoFieldType {
		
		PFT_Bool(0),		// bool
		PFT_Int32(1),		// int32
		PFT_SInt32(2),		// sint32
		PFT_UInt32(3),		// uint32
		PFT_SFixed32(4),	// sfixed32
		PFT_Fixed32(5),		// fixed32
		PFT_Int64(6),		// int64
		PFT_SInt64(7),		// sint64
		PFT_UInt64(8),		// uint64
		PFT_SFixed64(9),	// sfixed32
		PFT_Fixed64(10),	// fixed32
		PFT_Enum(11),		// enum
		PFT_Float(12),		// float
		PFT_Double(13),		// double
		PFT_String(14),		// string
		PFT_Message(15);	// message

		public static final int PFT_Bool_VALUE = 0;
		public static final int PFT_Int32_VALUE = 1;
		public static final int PFT_SInt32_VALUE = 2;
		public static final int PFT_UInt32_VALUE = 3;
		public static final int PFT_SFixed32_VALUE = 4;
		public static final int PFT_Fixed32_VALUE = 5;
		public static final int PFT_Int64_VALUE = 5;
		public static final int PFT_SInt64_VALUE = 6;
		public static final int PFT_UInt64_VALUE = 7;
		public static final int PFT_SFixed64_VALUE = 8;
		public static final int PFT_Fixed64_VALUE = 10;
		public static final int PFT_Enum_VALUE = 11;
		public static final int PFT_Float_VALUE = 12;
		public static final int PFT_Double_VALUE = 13;
		public static final int PFT_String_VALUE = 14;
		public static final int PFT_Message_VALUE = 15;

		private final int value;

		private ProtoFieldType(int value) {
			this.value = value;
		}

		public int getValue() {
			return value;
		}

		public static ProtoFieldType valueOf(int value) {
			switch (value) {
				case 0 :
					return PFT_Bool;
				case 1 :
					return PFT_Int32;
				case 2 :
					return PFT_SInt32;
				case 3 :
					return PFT_UInt32;
				case 4 :
					return PFT_SFixed32;
				case 5 :
					return PFT_Fixed32;
				case 6 :
					return PFT_Int64;
				case 7 :
					return PFT_SInt64;
				case 8 :
					return PFT_UInt64;
				case 9 :
					return PFT_SFixed64;
				case 10 :
					return PFT_Fixed64;
				case 11 :
					return PFT_Enum;
				case 12 :
					return PFT_Float;
				case 13 :
					return PFT_Double;
				case 14 :
					return PFT_String;
				case 15 :
					return PFT_Message;
				default :
					return null;
			}
		}
	}

	// proto字段类型枚举
	public enum ProtoWireType {
		
		PWT_Varint(0),			// int32, int64, uint32, uint64, sint32, sint64, bool, enum
		PWT_64bit(1),			// fixed64, sfixed64, double
		PWT_LengthDelimited(2),	// string, bytes, messages, proto3 repeated, miniproto repeated
		PWT_StartGroup(3),		// unused
		PWT_EndGroup(4),		// unused
		PWT_32bit(5),			// fixed32, sfixed32, float
		PWT_Unknown(6);			// invalid type

		public static final int PWT_Varint_VALUE = 0;
		public static final int PWT_64bit_VALUE = 1;
		public static final int PWT_LengthDelimited_VALUE = 2;
		public static final int PWT_StartGroup_VALUE = 3;
		public static final int PWT_EndGroup_VALUE = 4;
		public static final int PWT_32bit_VALUE = 5;
		public static final int PWT_Unknown_VALUE = 6;

		private final int value;

		private ProtoWireType(int value) {
			this.value = value;
		}

		public int getValue() {
			return value;
		}

		public static ProtoWireType valueOf(int value) {
			switch (value) {
				case 0 :
					return PWT_Varint;
				case 1 :
					return PWT_64bit;
				case 2 :
					return PWT_LengthDelimited;
				case 3 :
					return PWT_StartGroup;
				case 4 :
					return PWT_EndGroup;
				case 5 :
					return PWT_32bit;
				case 6 :
					return PWT_Unknown;
				default :
					return null;
			}
		}
	}
}
