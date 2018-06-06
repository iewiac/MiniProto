package common.proto1;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class Proto1 {

	public enum EnumBase {

		EnumBase_1(0),

		EnumBase_2(100),

		EnumBase_3(22);

		public static final int EnumBase_1_VALUE = 0;
		public static final int EnumBase_2_VALUE = 100;
		public static final int EnumBase_3_VALUE = 22;

		private int value;

		private EnumBase(int value) {
			this.setValue(value);
		}

		public int getValue() {
			return value;
		}

		private void setValue(int value) {
			this.value = value;
		}

		public static EnumBase valueOf(int value) {
			switch (value) {
				case 0 :
					return EnumBase_1;
				case 22 :
					return EnumBase_3;
				case 100 :
					return EnumBase_2;
				default :
					return null;
			}
		}
	};


	public enum EnumTest {

		EnumTest_1(1),

		EnumTest_2(3),

		EnumTest_3(3),

		EnumTest_4(3),

		EnumTest_5(4);

		public static final int EnumTest_1_VALUE = 1;
		public static final int EnumTest_2_VALUE = 3;
		public static final int EnumTest_3_VALUE = 3;
		public static final int EnumTest_4_VALUE = 3;
		public static final int EnumTest_5_VALUE = 4;

		private int value;

		private EnumTest(int value) {
			this.setValue(value);
		}

		public int getValue() {
			return value;
		}

		private void setValue(int value) {
			this.value = value;
		}

		public static EnumTest valueOf(int value) {
			switch (value) {
				case 1 :
					return EnumTest_1;
				case 3 :
					return EnumTest_2;
				case 4 :
					return EnumTest_5;
				default :
					return null;
			}
		}
	};


	public static class MsgNull extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		public MsgNull() {

			m_bits = new common.miniproto.ProtoBitMap(0);
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					default:
						common.miniproto.ProtoTool.UnknownDecode(type, buf);
					break;
				}
			}
		}

		public void Clear() {

		}

		public void Release() {

		}
	};


	public static class MsgTestSingular extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		private boolean m_bool_;

		public boolean get_m_bool() {
			return m_bool_;
		}
		public void set_m_bool(boolean value) {
			m_bool_ = value;
			set_has_m_bool();
		}
		public void clear_m_bool() {
			if (has_m_bool()) {
				clear_has_m_bool();
			}
		}
		public void release_m_bool() {
			if (has_m_bool()) {
				clear_has_m_bool();
			}
		}
		public boolean has_m_bool() {
			return m_bits.HasBit(0);
		}
		private void set_has_m_bool() {
			m_bits.SetBit(0);
		}
		private void clear_has_m_bool() {
			m_bits.ClearBit(0);
		}

		private int m_int32_;

		public int get_m_int32() {
			return m_int32_;
		}
		public void set_m_int32(int value) {
			m_int32_ = value;
			set_has_m_int32();
		}
		public void clear_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
		}
		public void release_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
		}
		public boolean has_m_int32() {
			return m_bits.HasBit(1);
		}
		private void set_has_m_int32() {
			m_bits.SetBit(1);
		}
		private void clear_has_m_int32() {
			m_bits.ClearBit(1);
		}

		private int m_sint32_;

		public int get_m_sint32() {
			return m_sint32_;
		}
		public void set_m_sint32(int value) {
			m_sint32_ = value;
			set_has_m_sint32();
		}
		public void clear_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
		}
		public void release_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
		}
		public boolean has_m_sint32() {
			return m_bits.HasBit(2);
		}
		private void set_has_m_sint32() {
			m_bits.SetBit(2);
		}
		private void clear_has_m_sint32() {
			m_bits.ClearBit(2);
		}

		private int m_uint32_;

		public int get_m_uint32() {
			return m_uint32_;
		}
		public void set_m_uint32(int value) {
			m_uint32_ = value;
			set_has_m_uint32();
		}
		public void clear_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
		}
		public void release_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
		}
		public boolean has_m_uint32() {
			return m_bits.HasBit(3);
		}
		private void set_has_m_uint32() {
			m_bits.SetBit(3);
		}
		private void clear_has_m_uint32() {
			m_bits.ClearBit(3);
		}

		private long m_int64_;

		public long get_m_int64() {
			return m_int64_;
		}
		public void set_m_int64(long value) {
			m_int64_ = value;
			set_has_m_int64();
		}
		public void clear_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
		}
		public void release_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
		}
		public boolean has_m_int64() {
			return m_bits.HasBit(4);
		}
		private void set_has_m_int64() {
			m_bits.SetBit(4);
		}
		private void clear_has_m_int64() {
			m_bits.ClearBit(4);
		}

		private long m_sint64_;

		public long get_m_sint64() {
			return m_sint64_;
		}
		public void set_m_sint64(long value) {
			m_sint64_ = value;
			set_has_m_sint64();
		}
		public void clear_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
		}
		public void release_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
		}
		public boolean has_m_sint64() {
			return m_bits.HasBit(5);
		}
		private void set_has_m_sint64() {
			m_bits.SetBit(5);
		}
		private void clear_has_m_sint64() {
			m_bits.ClearBit(5);
		}

		private long m_uint64_;

		public long get_m_uint64() {
			return m_uint64_;
		}
		public void set_m_uint64(long value) {
			m_uint64_ = value;
			set_has_m_uint64();
		}
		public void clear_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
		}
		public void release_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
		}
		public boolean has_m_uint64() {
			return m_bits.HasBit(6);
		}
		private void set_has_m_uint64() {
			m_bits.SetBit(6);
		}
		private void clear_has_m_uint64() {
			m_bits.ClearBit(6);
		}

		private float m_float_;

		public float get_m_float() {
			return m_float_;
		}
		public void set_m_float(float value) {
			m_float_ = value;
			set_has_m_float();
		}
		public void clear_m_float() {
			if (has_m_float()) {
				clear_has_m_float();
			}
		}
		public void release_m_float() {
			if (has_m_float()) {
				clear_has_m_float();
			}
		}
		public boolean has_m_float() {
			return m_bits.HasBit(7);
		}
		private void set_has_m_float() {
			m_bits.SetBit(7);
		}
		private void clear_has_m_float() {
			m_bits.ClearBit(7);
		}

		private double m_double_;

		public double get_m_double() {
			return m_double_;
		}
		public void set_m_double(double value) {
			m_double_ = value;
			set_has_m_double();
		}
		public void clear_m_double() {
			if (has_m_double()) {
				clear_has_m_double();
			}
		}
		public void release_m_double() {
			if (has_m_double()) {
				clear_has_m_double();
			}
		}
		public boolean has_m_double() {
			return m_bits.HasBit(8);
		}
		private void set_has_m_double() {
			m_bits.SetBit(8);
		}
		private void clear_has_m_double() {
			m_bits.ClearBit(8);
		}

		private int m_enum_;

		public common.proto1.Proto1.EnumTest get_m_enum() {
			if (has_m_enum()) {
				return common.proto1.Proto1.EnumTest.valueOf(m_enum_);
			} else {
				return null;
			}
		}
		public void set_m_enum(common.proto1.Proto1.EnumTest value) {
			if (null != value) {
				m_enum_ = value.getValue();
				set_has_m_enum();
			}
		}
		public void clear_m_enum() {
			if (has_m_enum()) {
				clear_has_m_enum();
			}
		}
		public void release_m_enum() {
			if (has_m_enum()) {
				clear_has_m_enum();
			}
		}
		public boolean has_m_enum() {
			return m_bits.HasBit(9);
		}
		private void set_has_m_enum() {
			m_bits.SetBit(9);
		}
		private void clear_has_m_enum() {
			m_bits.ClearBit(9);
		}

		private String m_string_;

		public String get_m_string() {
			if (has_m_string()) {
				return m_string_;
			} else {
				return null;
			}
		}
		public void set_m_string(String value) {
			if (null != value) {
				m_string_ = value;
				set_has_m_string();
			}
		}
		public void clear_m_string() {
			if (has_m_string()) {
				clear_has_m_string();
			}
			if (m_string_ != null) {
				m_string_ = null;
			}
		}
		public void release_m_string() {
			if (has_m_string()) {
				clear_has_m_string();
			}
			if (m_string_ != null) {
				m_string_ = null;
			}
		}
		public boolean has_m_string() {
			return m_bits.HasBit(10);
		}
		private void set_has_m_string() {
			m_bits.SetBit(10);
		}
		private void clear_has_m_string() {
			m_bits.ClearBit(10);
		}

		private String m_bytes_;

		public String get_m_bytes() {
			if (has_m_bytes()) {
				return m_bytes_;
			} else {
				return null;
			}
		}
		public void set_m_bytes(String value) {
			if (null != value) {
				m_bytes_ = value;
				set_has_m_bytes();
			}
		}
		public void clear_m_bytes() {
			if (has_m_bytes()) {
				clear_has_m_bytes();
			}
			if (m_bytes_ != null) {
				m_bytes_ = null;
			}
		}
		public void release_m_bytes() {
			if (has_m_bytes()) {
				clear_has_m_bytes();
			}
			if (m_bytes_ != null) {
				m_bytes_ = null;
			}
		}
		public boolean has_m_bytes() {
			return m_bits.HasBit(11);
		}
		private void set_has_m_bytes() {
			m_bits.SetBit(11);
		}
		private void clear_has_m_bytes() {
			m_bits.ClearBit(11);
		}

		public MsgTestSingular() {

			m_bits = new common.miniproto.ProtoBitMap(12);
			m_string_ = null;
			m_bytes_ = null;
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			if (has_m_bool()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint);
				bytes += common.miniproto.ProtoTool.BoolByteSize(m_bool_);
			}
			if (has_m_int32()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint);
				bytes += common.miniproto.ProtoTool.Int32ByteSize(m_int32_);
			}
			if (has_m_sint32()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit);
				bytes += common.miniproto.ProtoTool.SFixed32ByteSize(m_sint32_);
			}
			if (has_m_uint32()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit);
				bytes += common.miniproto.ProtoTool.Fixed32ByteSize(m_uint32_);
			}
			if (has_m_int64()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint);
				bytes += common.miniproto.ProtoTool.Int64ByteSize(m_int64_);
			}
			if (has_m_sint64()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit);
				bytes += common.miniproto.ProtoTool.SFixed64ByteSize(m_sint64_);
			}
			if (has_m_uint64()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit);
				bytes += common.miniproto.ProtoTool.Fixed64ByteSize(m_uint64_);
			}
			if (has_m_float()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit);
				bytes += common.miniproto.ProtoTool.FloatByteSize(m_float_);
			}
			if (has_m_double()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit);
				bytes += common.miniproto.ProtoTool.DoubleByteSize(m_double_);
			}
			if (has_m_enum()) {
				bytes += common.miniproto.ProtoTool.KeyByteSize(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint);
				bytes += common.miniproto.ProtoTool.EnumByteSize(m_enum_);
			}
			if (has_m_string()) {
				if (null != m_string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.StringByteSize(m_string_);
				}
			}
			if (has_m_bytes()) {
				if (null != m_bytes_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.StringByteSize(m_bytes_);
				}
			}

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

			if (has_m_bool()) {
				common.miniproto.ProtoTool.KeyCode(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint, buf);
				common.miniproto.ProtoTool.BoolCode(m_bool_, buf);
			}
			if (has_m_int32()) {
				common.miniproto.ProtoTool.KeyCode(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint, buf);
				common.miniproto.ProtoTool.Int32Code(m_int32_, buf);
			}
			if (has_m_sint32()) {
				common.miniproto.ProtoTool.KeyCode(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit, buf);
				common.miniproto.ProtoTool.SFixed32Code(m_sint32_, buf);
			}
			if (has_m_uint32()) {
				common.miniproto.ProtoTool.KeyCode(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit, buf);
				common.miniproto.ProtoTool.Fixed32Code(m_uint32_, buf);
			}
			if (has_m_int64()) {
				common.miniproto.ProtoTool.KeyCode(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint, buf);
				common.miniproto.ProtoTool.Int64Code(m_int64_, buf);
			}
			if (has_m_sint64()) {
				common.miniproto.ProtoTool.KeyCode(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit, buf);
				common.miniproto.ProtoTool.SFixed64Code(m_sint64_, buf);
			}
			if (has_m_uint64()) {
				common.miniproto.ProtoTool.KeyCode(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit, buf);
				common.miniproto.ProtoTool.Fixed64Code(m_uint64_, buf);
			}
			if (has_m_float()) {
				common.miniproto.ProtoTool.KeyCode(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit, buf);
				common.miniproto.ProtoTool.FloatCode(m_float_, buf);
			}
			if (has_m_double()) {
				common.miniproto.ProtoTool.KeyCode(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit, buf);
				common.miniproto.ProtoTool.DoubleCode(m_double_, buf);
			}
			if (has_m_enum()) {
				common.miniproto.ProtoTool.KeyCode(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint, buf);
				common.miniproto.ProtoTool.EnumCode(m_enum_, buf);
			}
			if (has_m_string()) {
				if (null != m_string_) {
					common.miniproto.ProtoTool.KeyCode(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.StringCode(m_string_, buf);
				}
			}
			if (has_m_bytes()) {
				if (null != m_bytes_) {
					common.miniproto.ProtoTool.KeyCode(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.StringCode(m_bytes_, buf);
				}
			}
		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					case 1 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint_VALUE : {
						m_bool_ = common.miniproto.ProtoTool.BoolDecode(buf);
						set_has_m_bool();
					}
					break;
					case 2 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint_VALUE : {
						m_int32_ = common.miniproto.ProtoTool.Int32Decode(buf);
						set_has_m_int32();
					}
					break;
					case 3 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit_VALUE : {
						m_sint32_ = common.miniproto.ProtoTool.SFixed32Decode(buf);
						set_has_m_sint32();
					}
					break;
					case 4 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit_VALUE : {
						m_uint32_ = common.miniproto.ProtoTool.Fixed32Decode(buf);
						set_has_m_uint32();
					}
					break;
					case 5 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint_VALUE : {
						m_int64_ = common.miniproto.ProtoTool.Int64Decode(buf);
						set_has_m_int64();
					}
					break;
					case 6 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit_VALUE : {
						m_sint64_ = common.miniproto.ProtoTool.SFixed64Decode(buf);
						set_has_m_sint64();
					}
					break;
					case 7 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit_VALUE : {
						m_uint64_ = common.miniproto.ProtoTool.Fixed64Decode(buf);
						set_has_m_uint64();
					}
					break;
					case 8 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_32bit_VALUE : {
						m_float_ = common.miniproto.ProtoTool.FloatDecode(buf);
						set_has_m_float();
					}
					break;
					case 9 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_64bit_VALUE : {
						m_double_ = common.miniproto.ProtoTool.DoubleDecode(buf);
						set_has_m_double();
					}
					break;
					case 10 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_Varint_VALUE : {
						m_enum_ = common.miniproto.ProtoTool.EnumDecode(buf);
						set_has_m_enum();
					}
					break;
					case 11 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_string_ = common.miniproto.ProtoTool.StringDecode(buf);
						set_has_m_string();
					}
					break;
					case 12 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_bytes_ = common.miniproto.ProtoTool.StringDecode(buf);
						set_has_m_bytes();
					}
					break;
					default:
						common.miniproto.ProtoTool.UnknownDecode(type, buf);
					break;
				}
			}
		}

		public void Clear() {

			clear_m_bool();
			clear_m_int32();
			clear_m_sint32();
			clear_m_uint32();
			clear_m_int64();
			clear_m_sint64();
			clear_m_uint64();
			clear_m_float();
			clear_m_double();
			clear_m_enum();
			clear_m_string();
			clear_m_bytes();
		}

		public void Release() {

			release_m_bool();
			release_m_int32();
			release_m_sint32();
			release_m_uint32();
			release_m_int64();
			release_m_sint64();
			release_m_uint64();
			release_m_float();
			release_m_double();
			release_m_enum();
			release_m_string();
			release_m_bytes();
		}
	};


}
