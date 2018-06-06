package common.proto2;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class Proto2 {

	public enum EnumTest {

		EnumTest_1(1),

		EnumTest_2(3),

		EnumTest_3(7);

		public static final int EnumTest_1_VALUE = 1;
		public static final int EnumTest_2_VALUE = 3;
		public static final int EnumTest_3_VALUE = 7;

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
				case 7 :
					return EnumTest_3;
				default :
					return null;
			}
		}
	};


	public static class MsgTestArray extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		private java.util.ArrayList<Boolean> m_bool_;

		public int m_bool_size() {
			if (null != m_bool_ && has_m_bool()) {
				return m_bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_bool(java.util.ArrayList<Boolean> value) {
			if (null != value) {
				m_bool_ = value;
				set_has_m_bool();
			}
		}
		public java.util.Iterator<Boolean> m_bool_iterator() {
			if (null != m_bool_ && has_m_bool()) {
				return m_bool_.iterator();
			} else {
				return null;
			}
		}
		public boolean get_m_bool(int index) {
			if (null != m_bool_ && has_m_bool()) {
				return m_bool_.get(index);
			} else {
				throw new NullPointerException("has not m_bool_");
			}
		}
		public void set_m_bool(int index, Boolean value) {
			if (null == m_bool_) {
				m_bool_ = new java.util.ArrayList<Boolean>();
			}
			if (null != m_bool_ && has_m_bool() && null != value) {
				m_bool_.set(index, value);
				set_has_m_bool();
			}
		}
		public void add_m_bool(Boolean value) {
			if (null == m_bool_) {
				m_bool_ = new java.util.ArrayList<Boolean>();
			}
			if (null != m_bool_ && null != value) {
				m_bool_.add(value);
				set_has_m_bool();
			}
		}
		public void clear_m_bool() {
			if (has_m_bool()) {
				clear_has_m_bool();
			}
			if (m_bool_ != null) {
				m_bool_.clear();
			}
		}
		public void release_m_bool() {
			if (has_m_bool()) {
				clear_has_m_bool();
			}
			if (m_bool_ != null) {
				m_bool_ = null;
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

		private java.util.ArrayList<Integer> m_int32_;

		public int m_int32_size() {
			if (null != m_int32_ && has_m_int32()) {
				return m_int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32(java.util.ArrayList<Integer> value) {
			if (null != value) {
				m_int32_ = value;
				set_has_m_int32();
			}
		}
		public java.util.Iterator<Integer> m_int32_iterator() {
			if (null != m_int32_ && has_m_int32()) {
				return m_int32_.iterator();
			} else {
				return null;
			}
		}
		public int get_m_int32(int index) {
			if (null != m_int32_ && has_m_int32()) {
				return m_int32_.get(index);
			} else {
				throw new NullPointerException("has not m_int32_");
			}
		}
		public void set_m_int32(int index, Integer value) {
			if (null == m_int32_) {
				m_int32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_int32_ && has_m_int32() && null != value) {
				m_int32_.set(index, value);
				set_has_m_int32();
			}
		}
		public void add_m_int32(Integer value) {
			if (null == m_int32_) {
				m_int32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_int32_ && null != value) {
				m_int32_.add(value);
				set_has_m_int32();
			}
		}
		public void clear_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
			if (m_int32_ != null) {
				m_int32_.clear();
			}
		}
		public void release_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
			if (m_int32_ != null) {
				m_int32_ = null;
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

		private java.util.ArrayList<Integer> m_sint32_;

		public int m_sint32_size() {
			if (null != m_sint32_ && has_m_sint32()) {
				return m_sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32(java.util.ArrayList<Integer> value) {
			if (null != value) {
				m_sint32_ = value;
				set_has_m_sint32();
			}
		}
		public java.util.Iterator<Integer> m_sint32_iterator() {
			if (null != m_sint32_ && has_m_sint32()) {
				return m_sint32_.iterator();
			} else {
				return null;
			}
		}
		public int get_m_sint32(int index) {
			if (null != m_sint32_ && has_m_sint32()) {
				return m_sint32_.get(index);
			} else {
				throw new NullPointerException("has not m_sint32_");
			}
		}
		public void set_m_sint32(int index, Integer value) {
			if (null == m_sint32_) {
				m_sint32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_sint32_ && has_m_sint32() && null != value) {
				m_sint32_.set(index, value);
				set_has_m_sint32();
			}
		}
		public void add_m_sint32(Integer value) {
			if (null == m_sint32_) {
				m_sint32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_sint32_ && null != value) {
				m_sint32_.add(value);
				set_has_m_sint32();
			}
		}
		public void clear_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
			if (m_sint32_ != null) {
				m_sint32_.clear();
			}
		}
		public void release_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
			if (m_sint32_ != null) {
				m_sint32_ = null;
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

		private java.util.ArrayList<Integer> m_uint32_;

		public int m_uint32_size() {
			if (null != m_uint32_ && has_m_uint32()) {
				return m_uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32(java.util.ArrayList<Integer> value) {
			if (null != value) {
				m_uint32_ = value;
				set_has_m_uint32();
			}
		}
		public java.util.Iterator<Integer> m_uint32_iterator() {
			if (null != m_uint32_ && has_m_uint32()) {
				return m_uint32_.iterator();
			} else {
				return null;
			}
		}
		public int get_m_uint32(int index) {
			if (null != m_uint32_ && has_m_uint32()) {
				return m_uint32_.get(index);
			} else {
				throw new NullPointerException("has not m_uint32_");
			}
		}
		public void set_m_uint32(int index, Integer value) {
			if (null == m_uint32_) {
				m_uint32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_uint32_ && has_m_uint32() && null != value) {
				m_uint32_.set(index, value);
				set_has_m_uint32();
			}
		}
		public void add_m_uint32(Integer value) {
			if (null == m_uint32_) {
				m_uint32_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_uint32_ && null != value) {
				m_uint32_.add(value);
				set_has_m_uint32();
			}
		}
		public void clear_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
			if (m_uint32_ != null) {
				m_uint32_.clear();
			}
		}
		public void release_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
			if (m_uint32_ != null) {
				m_uint32_ = null;
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

		private java.util.ArrayList<Long> m_int64_;

		public int m_int64_size() {
			if (null != m_int64_ && has_m_int64()) {
				return m_int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64(java.util.ArrayList<Long> value) {
			if (null != value) {
				m_int64_ = value;
				set_has_m_int64();
			}
		}
		public java.util.Iterator<Long> m_int64_iterator() {
			if (null != m_int64_ && has_m_int64()) {
				return m_int64_.iterator();
			} else {
				return null;
			}
		}
		public long get_m_int64(int index) {
			if (null != m_int64_ && has_m_int64()) {
				return m_int64_.get(index);
			} else {
				throw new NullPointerException("has not m_int64_");
			}
		}
		public void set_m_int64(int index, Long value) {
			if (null == m_int64_) {
				m_int64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_int64_ && has_m_int64() && null != value) {
				m_int64_.set(index, value);
				set_has_m_int64();
			}
		}
		public void add_m_int64(Long value) {
			if (null == m_int64_) {
				m_int64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_int64_ && null != value) {
				m_int64_.add(value);
				set_has_m_int64();
			}
		}
		public void clear_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
			if (m_int64_ != null) {
				m_int64_.clear();
			}
		}
		public void release_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
			if (m_int64_ != null) {
				m_int64_ = null;
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

		private java.util.ArrayList<Long> m_sint64_;

		public int m_sint64_size() {
			if (null != m_sint64_ && has_m_sint64()) {
				return m_sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64(java.util.ArrayList<Long> value) {
			if (null != value) {
				m_sint64_ = value;
				set_has_m_sint64();
			}
		}
		public java.util.Iterator<Long> m_sint64_iterator() {
			if (null != m_sint64_ && has_m_sint64()) {
				return m_sint64_.iterator();
			} else {
				return null;
			}
		}
		public long get_m_sint64(int index) {
			if (null != m_sint64_ && has_m_sint64()) {
				return m_sint64_.get(index);
			} else {
				throw new NullPointerException("has not m_sint64_");
			}
		}
		public void set_m_sint64(int index, Long value) {
			if (null == m_sint64_) {
				m_sint64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_sint64_ && has_m_sint64() && null != value) {
				m_sint64_.set(index, value);
				set_has_m_sint64();
			}
		}
		public void add_m_sint64(Long value) {
			if (null == m_sint64_) {
				m_sint64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_sint64_ && null != value) {
				m_sint64_.add(value);
				set_has_m_sint64();
			}
		}
		public void clear_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
			if (m_sint64_ != null) {
				m_sint64_.clear();
			}
		}
		public void release_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
			if (m_sint64_ != null) {
				m_sint64_ = null;
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

		private java.util.ArrayList<Long> m_uint64_;

		public int m_uint64_size() {
			if (null != m_uint64_ && has_m_uint64()) {
				return m_uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64(java.util.ArrayList<Long> value) {
			if (null != value) {
				m_uint64_ = value;
				set_has_m_uint64();
			}
		}
		public java.util.Iterator<Long> m_uint64_iterator() {
			if (null != m_uint64_ && has_m_uint64()) {
				return m_uint64_.iterator();
			} else {
				return null;
			}
		}
		public long get_m_uint64(int index) {
			if (null != m_uint64_ && has_m_uint64()) {
				return m_uint64_.get(index);
			} else {
				throw new NullPointerException("has not m_uint64_");
			}
		}
		public void set_m_uint64(int index, Long value) {
			if (null == m_uint64_) {
				m_uint64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_uint64_ && has_m_uint64() && null != value) {
				m_uint64_.set(index, value);
				set_has_m_uint64();
			}
		}
		public void add_m_uint64(Long value) {
			if (null == m_uint64_) {
				m_uint64_ = new java.util.ArrayList<Long>();
			}
			if (null != m_uint64_ && null != value) {
				m_uint64_.add(value);
				set_has_m_uint64();
			}
		}
		public void clear_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
			if (m_uint64_ != null) {
				m_uint64_.clear();
			}
		}
		public void release_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
			if (m_uint64_ != null) {
				m_uint64_ = null;
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

		private java.util.ArrayList<Float> m_float_;

		public int m_float_size() {
			if (null != m_float_ && has_m_float()) {
				return m_float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_float(java.util.ArrayList<Float> value) {
			if (null != value) {
				m_float_ = value;
				set_has_m_float();
			}
		}
		public java.util.Iterator<Float> m_float_iterator() {
			if (null != m_float_ && has_m_float()) {
				return m_float_.iterator();
			} else {
				return null;
			}
		}
		public float get_m_float(int index) {
			if (null != m_float_ && has_m_float()) {
				return m_float_.get(index);
			} else {
				throw new NullPointerException("has not m_float_");
			}
		}
		public void set_m_float(int index, Float value) {
			if (null == m_float_) {
				m_float_ = new java.util.ArrayList<Float>();
			}
			if (null != m_float_ && has_m_float() && null != value) {
				m_float_.set(index, value);
				set_has_m_float();
			}
		}
		public void add_m_float(Float value) {
			if (null == m_float_) {
				m_float_ = new java.util.ArrayList<Float>();
			}
			if (null != m_float_ && null != value) {
				m_float_.add(value);
				set_has_m_float();
			}
		}
		public void clear_m_float() {
			if (has_m_float()) {
				clear_has_m_float();
			}
			if (m_float_ != null) {
				m_float_.clear();
			}
		}
		public void release_m_float() {
			if (has_m_float()) {
				clear_has_m_float();
			}
			if (m_float_ != null) {
				m_float_ = null;
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

		private java.util.ArrayList<Double> m_double_;

		public int m_double_size() {
			if (null != m_double_ && has_m_double()) {
				return m_double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_double(java.util.ArrayList<Double> value) {
			if (null != value) {
				m_double_ = value;
				set_has_m_double();
			}
		}
		public java.util.Iterator<Double> m_double_iterator() {
			if (null != m_double_ && has_m_double()) {
				return m_double_.iterator();
			} else {
				return null;
			}
		}
		public double get_m_double(int index) {
			if (null != m_double_ && has_m_double()) {
				return m_double_.get(index);
			} else {
				throw new NullPointerException("has not m_double_");
			}
		}
		public void set_m_double(int index, Double value) {
			if (null == m_double_) {
				m_double_ = new java.util.ArrayList<Double>();
			}
			if (null != m_double_ && has_m_double() && null != value) {
				m_double_.set(index, value);
				set_has_m_double();
			}
		}
		public void add_m_double(Double value) {
			if (null == m_double_) {
				m_double_ = new java.util.ArrayList<Double>();
			}
			if (null != m_double_ && null != value) {
				m_double_.add(value);
				set_has_m_double();
			}
		}
		public void clear_m_double() {
			if (has_m_double()) {
				clear_has_m_double();
			}
			if (m_double_ != null) {
				m_double_.clear();
			}
		}
		public void release_m_double() {
			if (has_m_double()) {
				clear_has_m_double();
			}
			if (m_double_ != null) {
				m_double_ = null;
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

		private java.util.ArrayList<Integer> m_enum_;

		public int m_enum_size() {
			if (null != m_enum_ && has_m_enum()) {
				return m_enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_enum(java.util.ArrayList<Integer> value) {
			if (null != value) {
				m_enum_ = value;
				set_has_m_enum();
			}
		}
		public java.util.Iterator<Integer> m_enum_iterator() {
			if (null != m_enum_ && has_m_enum()) {
				return m_enum_.iterator();
			} else {
				return null;
			}
		}
		public int get_m_enum(int index) {
			if (null != m_enum_ && has_m_enum()) {
				return m_enum_.get(index);
			} else {
				throw new NullPointerException("has not m_enum_");
			}
		}
		public void set_m_enum(int index, Integer value) {
			if (null == m_enum_) {
				m_enum_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_enum_ && has_m_enum() && null != value) {
				m_enum_.set(index, value);
				set_has_m_enum();
			}
		}
		public void add_m_enum(Integer value) {
			if (null == m_enum_) {
				m_enum_ = new java.util.ArrayList<Integer>();
			}
			if (null != m_enum_ && null != value) {
				m_enum_.add(value);
				set_has_m_enum();
			}
		}
		public void clear_m_enum() {
			if (has_m_enum()) {
				clear_has_m_enum();
			}
			if (m_enum_ != null) {
				m_enum_.clear();
			}
		}
		public void release_m_enum() {
			if (has_m_enum()) {
				clear_has_m_enum();
			}
			if (m_enum_ != null) {
				m_enum_ = null;
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

		private java.util.ArrayList<String> m_string_;

		public int m_string_size() {
			if (null != m_string_ && has_m_string()) {
				return m_string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_string(java.util.ArrayList<String> value) {
			if (null != value) {
				m_string_ = value;
				set_has_m_string();
			}
		}
		public java.util.Iterator<String> m_string_iterator() {
			if (null != m_string_ && has_m_string()) {
				return m_string_.iterator();
			} else {
				return null;
			}
		}
		public String get_m_string(int index) {
			if (null != m_string_ && has_m_string()) {
				return m_string_.get(index);
			} else {
				throw new NullPointerException("has not m_string_");
			}
		}
		public void set_m_string(int index, String value) {
			if (null == m_string_) {
				m_string_ = new java.util.ArrayList<String>();
			}
			if (null != m_string_ && has_m_string() && null != value) {
				m_string_.set(index, value);
				set_has_m_string();
			}
		}
		public void add_m_string(String value) {
			if (null == m_string_) {
				m_string_ = new java.util.ArrayList<String>();
			}
			if (null != m_string_ && null != value) {
				m_string_.add(value);
				set_has_m_string();
			}
		}
		public void clear_m_string() {
			if (has_m_string()) {
				clear_has_m_string();
			}
			if (m_string_ != null) {
				m_string_.clear();
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

		public MsgTestArray() {

			m_bits = new common.miniproto.ProtoBitMap(11);
			m_bool_ = null;
			m_int32_ = null;
			m_sint32_ = null;
			m_uint32_ = null;
			m_int64_ = null;
			m_sint64_ = null;
			m_uint64_ = null;
			m_float_ = null;
			m_double_ = null;
			m_enum_ = null;
			m_string_ = null;
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			if (has_m_bool()) {
				if (null != m_bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int32()) {
				if (null != m_int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32()) {
				if (null != m_sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32()) {
				if (null != m_uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64()) {
				if (null != m_int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64()) {
				if (null != m_sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64()) {
				if (null != m_uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_float()) {
				if (null != m_float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_double()) {
				if (null != m_double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_enum()) {
				if (null != m_enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_string()) {
				if (null != m_string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

			if (has_m_bool()) {
				if (null != m_bool_) {
					common.miniproto.ProtoTool.KeyCode(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int32()) {
				if (null != m_int32_) {
					common.miniproto.ProtoTool.KeyCode(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32()) {
				if (null != m_sint32_) {
					common.miniproto.ProtoTool.KeyCode(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32()) {
				if (null != m_uint32_) {
					common.miniproto.ProtoTool.KeyCode(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64()) {
				if (null != m_int64_) {
					common.miniproto.ProtoTool.KeyCode(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64()) {
				if (null != m_sint64_) {
					common.miniproto.ProtoTool.KeyCode(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64()) {
				if (null != m_uint64_) {
					common.miniproto.ProtoTool.KeyCode(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_float()) {
				if (null != m_float_) {
					common.miniproto.ProtoTool.KeyCode(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_double()) {
				if (null != m_double_) {
					common.miniproto.ProtoTool.KeyCode(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_enum()) {
				if (null != m_enum_) {
					common.miniproto.ProtoTool.KeyCode(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_string()) {
				if (null != m_string_) {
					common.miniproto.ProtoTool.KeyCode(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					case 1 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_bool_) {
							m_bool_ = new java.util.ArrayList<Boolean>();
						}
						if (null != m_bool_) {
							common.miniproto.ProtoTool.ArrayDecode(m_bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 2 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32_) {
							m_int32_ = new java.util.ArrayList<Integer>();
						}
						if (null != m_int32_) {
							common.miniproto.ProtoTool.ArrayDecode(m_int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 3 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32_) {
							m_sint32_ = new java.util.ArrayList<Integer>();
						}
						if (null != m_sint32_) {
							common.miniproto.ProtoTool.ArrayDecode(m_sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 4 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32_) {
							m_uint32_ = new java.util.ArrayList<Integer>();
						}
						if (null != m_uint32_) {
							common.miniproto.ProtoTool.ArrayDecode(m_uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 5 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64_) {
							m_int64_ = new java.util.ArrayList<Long>();
						}
						if (null != m_int64_) {
							common.miniproto.ProtoTool.ArrayDecode(m_int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 6 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64_) {
							m_sint64_ = new java.util.ArrayList<Long>();
						}
						if (null != m_sint64_) {
							common.miniproto.ProtoTool.ArrayDecode(m_sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 7 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64_) {
							m_uint64_ = new java.util.ArrayList<Long>();
						}
						if (null != m_uint64_) {
							common.miniproto.ProtoTool.ArrayDecode(m_uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 8 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_float_) {
							m_float_ = new java.util.ArrayList<Float>();
						}
						if (null != m_float_) {
							common.miniproto.ProtoTool.ArrayDecode(m_float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 9 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_double_) {
							m_double_ = new java.util.ArrayList<Double>();
						}
						if (null != m_double_) {
							common.miniproto.ProtoTool.ArrayDecode(m_double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 10 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_enum_) {
							m_enum_ = new java.util.ArrayList<Integer>();
						}
						if (null != m_enum_) {
							common.miniproto.ProtoTool.ArrayDecode(m_enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 11 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_string_) {
							m_string_ = new java.util.ArrayList<String>();
						}
						if (null != m_string_) {
							common.miniproto.ProtoTool.ArrayDecode(m_string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
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
		}
	};


	public static class MsgTestSet extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		private java.util.TreeSet<Integer> m_int32_;

		public int m_int32_size() {
			if (null != m_int32_ && has_m_int32()) {
				return m_int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32(java.util.TreeSet<Integer> value) {
			if (null != value) {
				m_int32_ = value;
				set_has_m_int32();
			}
		}
		public java.util.Iterator<Integer> m_int32_iterator() {
			if (null != m_int32_ && has_m_int32()) {
				return m_int32_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32(Integer value) {
			if (null == m_int32_) {
				m_int32_ = new java.util.TreeSet<Integer>();
			}
			if (null != m_int32_ && null != value) {
				m_int32_.add(value);
				set_has_m_int32();
			}
		}
		public void remove_m_int32(Integer value) {
			if (null != m_int32_ && null != value) {
				m_int32_.remove(value);
				if(0 == m_int32_.size()) {
					clear_has_m_int32();
				}
			}
		}
		public boolean m_int32_contains(Integer value) {
			if (null != m_int32_ && has_m_int32() && null != value) {
				return m_int32_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
			if (m_int32_ != null) {
				m_int32_.clear();
			}
		}
		public void release_m_int32() {
			if (has_m_int32()) {
				clear_has_m_int32();
			}
			if (m_int32_ != null) {
				m_int32_ = null;
			}
		}
		public boolean has_m_int32() {
			return m_bits.HasBit(0);
		}
		private void set_has_m_int32() {
			m_bits.SetBit(0);
		}
		private void clear_has_m_int32() {
			m_bits.ClearBit(0);
		}

		private java.util.HashSet<Integer> m_sint32_;

		public int m_sint32_size() {
			if (null != m_sint32_ && has_m_sint32()) {
				return m_sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32(java.util.HashSet<Integer> value) {
			if (null != value) {
				m_sint32_ = value;
				set_has_m_sint32();
			}
		}
		public java.util.Iterator<Integer> m_sint32_iterator() {
			if (null != m_sint32_ && has_m_sint32()) {
				return m_sint32_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32(Integer value) {
			if (null == m_sint32_) {
				m_sint32_ = new java.util.HashSet<Integer>();
			}
			if (null != m_sint32_ && null != value) {
				m_sint32_.add(value);
				set_has_m_sint32();
			}
		}
		public void remove_m_sint32(Integer value) {
			if (null != m_sint32_ && null != value) {
				m_sint32_.remove(value);
				if(0 == m_sint32_.size()) {
					clear_has_m_sint32();
				}
			}
		}
		public boolean m_sint32_contains(Integer value) {
			if (null != m_sint32_ && has_m_sint32() && null != value) {
				return m_sint32_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
			if (m_sint32_ != null) {
				m_sint32_.clear();
			}
		}
		public void release_m_sint32() {
			if (has_m_sint32()) {
				clear_has_m_sint32();
			}
			if (m_sint32_ != null) {
				m_sint32_ = null;
			}
		}
		public boolean has_m_sint32() {
			return m_bits.HasBit(1);
		}
		private void set_has_m_sint32() {
			m_bits.SetBit(1);
		}
		private void clear_has_m_sint32() {
			m_bits.ClearBit(1);
		}

		private java.util.TreeSet<Integer> m_uint32_;

		public int m_uint32_size() {
			if (null != m_uint32_ && has_m_uint32()) {
				return m_uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32(java.util.TreeSet<Integer> value) {
			if (null != value) {
				m_uint32_ = value;
				set_has_m_uint32();
			}
		}
		public java.util.Iterator<Integer> m_uint32_iterator() {
			if (null != m_uint32_ && has_m_uint32()) {
				return m_uint32_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32(Integer value) {
			if (null == m_uint32_) {
				m_uint32_ = new java.util.TreeSet<Integer>();
			}
			if (null != m_uint32_ && null != value) {
				m_uint32_.add(value);
				set_has_m_uint32();
			}
		}
		public void remove_m_uint32(Integer value) {
			if (null != m_uint32_ && null != value) {
				m_uint32_.remove(value);
				if(0 == m_uint32_.size()) {
					clear_has_m_uint32();
				}
			}
		}
		public boolean m_uint32_contains(Integer value) {
			if (null != m_uint32_ && has_m_uint32() && null != value) {
				return m_uint32_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
			if (m_uint32_ != null) {
				m_uint32_.clear();
			}
		}
		public void release_m_uint32() {
			if (has_m_uint32()) {
				clear_has_m_uint32();
			}
			if (m_uint32_ != null) {
				m_uint32_ = null;
			}
		}
		public boolean has_m_uint32() {
			return m_bits.HasBit(2);
		}
		private void set_has_m_uint32() {
			m_bits.SetBit(2);
		}
		private void clear_has_m_uint32() {
			m_bits.ClearBit(2);
		}

		private java.util.TreeSet<Long> m_int64_;

		public int m_int64_size() {
			if (null != m_int64_ && has_m_int64()) {
				return m_int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64(java.util.TreeSet<Long> value) {
			if (null != value) {
				m_int64_ = value;
				set_has_m_int64();
			}
		}
		public java.util.Iterator<Long> m_int64_iterator() {
			if (null != m_int64_ && has_m_int64()) {
				return m_int64_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64(Long value) {
			if (null == m_int64_) {
				m_int64_ = new java.util.TreeSet<Long>();
			}
			if (null != m_int64_ && null != value) {
				m_int64_.add(value);
				set_has_m_int64();
			}
		}
		public void remove_m_int64(Long value) {
			if (null != m_int64_ && null != value) {
				m_int64_.remove(value);
				if(0 == m_int64_.size()) {
					clear_has_m_int64();
				}
			}
		}
		public boolean m_int64_contains(Long value) {
			if (null != m_int64_ && has_m_int64() && null != value) {
				return m_int64_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
			if (m_int64_ != null) {
				m_int64_.clear();
			}
		}
		public void release_m_int64() {
			if (has_m_int64()) {
				clear_has_m_int64();
			}
			if (m_int64_ != null) {
				m_int64_ = null;
			}
		}
		public boolean has_m_int64() {
			return m_bits.HasBit(3);
		}
		private void set_has_m_int64() {
			m_bits.SetBit(3);
		}
		private void clear_has_m_int64() {
			m_bits.ClearBit(3);
		}

		private java.util.HashSet<Long> m_sint64_;

		public int m_sint64_size() {
			if (null != m_sint64_ && has_m_sint64()) {
				return m_sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64(java.util.HashSet<Long> value) {
			if (null != value) {
				m_sint64_ = value;
				set_has_m_sint64();
			}
		}
		public java.util.Iterator<Long> m_sint64_iterator() {
			if (null != m_sint64_ && has_m_sint64()) {
				return m_sint64_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64(Long value) {
			if (null == m_sint64_) {
				m_sint64_ = new java.util.HashSet<Long>();
			}
			if (null != m_sint64_ && null != value) {
				m_sint64_.add(value);
				set_has_m_sint64();
			}
		}
		public void remove_m_sint64(Long value) {
			if (null != m_sint64_ && null != value) {
				m_sint64_.remove(value);
				if(0 == m_sint64_.size()) {
					clear_has_m_sint64();
				}
			}
		}
		public boolean m_sint64_contains(Long value) {
			if (null != m_sint64_ && has_m_sint64() && null != value) {
				return m_sint64_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
			if (m_sint64_ != null) {
				m_sint64_.clear();
			}
		}
		public void release_m_sint64() {
			if (has_m_sint64()) {
				clear_has_m_sint64();
			}
			if (m_sint64_ != null) {
				m_sint64_ = null;
			}
		}
		public boolean has_m_sint64() {
			return m_bits.HasBit(4);
		}
		private void set_has_m_sint64() {
			m_bits.SetBit(4);
		}
		private void clear_has_m_sint64() {
			m_bits.ClearBit(4);
		}

		private java.util.TreeSet<Long> m_uint64_;

		public int m_uint64_size() {
			if (null != m_uint64_ && has_m_uint64()) {
				return m_uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64(java.util.TreeSet<Long> value) {
			if (null != value) {
				m_uint64_ = value;
				set_has_m_uint64();
			}
		}
		public java.util.Iterator<Long> m_uint64_iterator() {
			if (null != m_uint64_ && has_m_uint64()) {
				return m_uint64_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64(Long value) {
			if (null == m_uint64_) {
				m_uint64_ = new java.util.TreeSet<Long>();
			}
			if (null != m_uint64_ && null != value) {
				m_uint64_.add(value);
				set_has_m_uint64();
			}
		}
		public void remove_m_uint64(Long value) {
			if (null != m_uint64_ && null != value) {
				m_uint64_.remove(value);
				if(0 == m_uint64_.size()) {
					clear_has_m_uint64();
				}
			}
		}
		public boolean m_uint64_contains(Long value) {
			if (null != m_uint64_ && has_m_uint64() && null != value) {
				return m_uint64_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
			if (m_uint64_ != null) {
				m_uint64_.clear();
			}
		}
		public void release_m_uint64() {
			if (has_m_uint64()) {
				clear_has_m_uint64();
			}
			if (m_uint64_ != null) {
				m_uint64_ = null;
			}
		}
		public boolean has_m_uint64() {
			return m_bits.HasBit(5);
		}
		private void set_has_m_uint64() {
			m_bits.SetBit(5);
		}
		private void clear_has_m_uint64() {
			m_bits.ClearBit(5);
		}

		private java.util.HashSet<String> m_string_;

		public int m_string_size() {
			if (null != m_string_ && has_m_string()) {
				return m_string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_string(java.util.HashSet<String> value) {
			if (null != value) {
				m_string_ = value;
				set_has_m_string();
			}
		}
		public java.util.Iterator<String> m_string_iterator() {
			if (null != m_string_ && has_m_string()) {
				return m_string_.iterator();
			} else {
				return null;
			}
		}
		public void add_m_string(String value) {
			if (null == m_string_) {
				m_string_ = new java.util.HashSet<String>();
			}
			if (null != m_string_ && null != value) {
				m_string_.add(value);
				set_has_m_string();
			}
		}
		public void remove_m_string(String value) {
			if (null != m_string_ && null != value) {
				m_string_.remove(value);
				if(0 == m_string_.size()) {
					clear_has_m_string();
				}
			}
		}
		public boolean m_string_contains(String value) {
			if (null != m_string_ && has_m_string() && null != value) {
				return m_string_.contains(value);
			} else {
				return false;
			}
		}
		public void clear_m_string() {
			if (has_m_string()) {
				clear_has_m_string();
			}
			if (m_string_ != null) {
				m_string_.clear();
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
			return m_bits.HasBit(6);
		}
		private void set_has_m_string() {
			m_bits.SetBit(6);
		}
		private void clear_has_m_string() {
			m_bits.ClearBit(6);
		}

		public MsgTestSet() {

			m_bits = new common.miniproto.ProtoBitMap(7);
			m_int32_ = null;
			m_sint32_ = null;
			m_uint32_ = null;
			m_int64_ = null;
			m_sint64_ = null;
			m_uint64_ = null;
			m_string_ = null;
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			if (has_m_int32()) {
				if (null != m_int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32()) {
				if (null != m_sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32()) {
				if (null != m_uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64()) {
				if (null != m_int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64()) {
				if (null != m_sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64()) {
				if (null != m_uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_string()) {
				if (null != m_string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.SetByteSize(m_string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

			if (has_m_int32()) {
				if (null != m_int32_) {
					common.miniproto.ProtoTool.KeyCode(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32()) {
				if (null != m_sint32_) {
					common.miniproto.ProtoTool.KeyCode(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32()) {
				if (null != m_uint32_) {
					common.miniproto.ProtoTool.KeyCode(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64()) {
				if (null != m_int64_) {
					common.miniproto.ProtoTool.KeyCode(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64()) {
				if (null != m_sint64_) {
					common.miniproto.ProtoTool.KeyCode(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64()) {
				if (null != m_uint64_) {
					common.miniproto.ProtoTool.KeyCode(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_string()) {
				if (null != m_string_) {
					common.miniproto.ProtoTool.KeyCode(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.SetCode(m_string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					case 1 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32_) {
							m_int32_ = new java.util.TreeSet<Integer>();
						}
						if (null != m_int32_) {
							common.miniproto.ProtoTool.SetDecode(m_int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 2 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32_) {
							m_sint32_ = new java.util.HashSet<Integer>();
						}
						if (null != m_sint32_) {
							common.miniproto.ProtoTool.SetDecode(m_sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 3 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32_) {
							m_uint32_ = new java.util.TreeSet<Integer>();
						}
						if (null != m_uint32_) {
							common.miniproto.ProtoTool.SetDecode(m_uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 4 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64_) {
							m_int64_ = new java.util.TreeSet<Long>();
						}
						if (null != m_int64_) {
							common.miniproto.ProtoTool.SetDecode(m_int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 5 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64_) {
							m_sint64_ = new java.util.HashSet<Long>();
						}
						if (null != m_sint64_) {
							common.miniproto.ProtoTool.SetDecode(m_sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 6 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64_) {
							m_uint64_ = new java.util.TreeSet<Long>();
						}
						if (null != m_uint64_) {
							common.miniproto.ProtoTool.SetDecode(m_uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 7 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_string_) {
							m_string_ = new java.util.HashSet<String>();
						}
						if (null != m_string_) {
							common.miniproto.ProtoTool.SetDecode(m_string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					default:
						common.miniproto.ProtoTool.UnknownDecode(type, buf);
					break;
				}
			}
		}

		public void Clear() {

			clear_m_int32();
			clear_m_sint32();
			clear_m_uint32();
			clear_m_int64();
			clear_m_sint64();
			clear_m_uint64();
			clear_m_string();
		}

		public void Release() {

			release_m_int32();
			release_m_sint32();
			release_m_uint32();
			release_m_int64();
			release_m_sint64();
			release_m_uint64();
			release_m_string();
		}
	};


	public static class MsgTestMap extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		private java.util.TreeMap<Integer, Boolean> m_int32bool_;

		public int m_int32bool_size() {
			if (null != m_int32bool_ && has_m_int32bool()) {
				return m_int32bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32bool(java.util.TreeMap<Integer, Boolean> value) {
			if (null != value) {
				m_int32bool_ = value;
				set_has_m_int32bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Boolean>> m_int32bool_iterator() {
			if (null != m_int32bool_ && has_m_int32bool()) {
				return m_int32bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32bool(Integer key, Boolean value) {
			if (null == m_int32bool_) {
				m_int32bool_ = new java.util.TreeMap<Integer, Boolean>();
			}
			if (null != m_int32bool_ && null != key && null != value) {
				m_int32bool_.put(key, value);
				set_has_m_int32bool();
			}
		}
		public Boolean find_m_int32bool(Integer key) {
			if (null == m_int32bool_ && has_m_int32bool() && null != key) {
				return m_int32bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32bool(Integer key) {
			if (null != m_int32bool_ && has_m_int32bool() && null != key) {
				m_int32bool_.remove(key);
				if(0 == m_int32bool_.size()) {
					clear_has_m_int32bool();
				}
			}
		}
		public boolean m_int32bool_contains(Integer key) {
			if (null != m_int32bool_ && has_m_int32bool() && null != key) {
				return m_int32bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32bool() {
			if (has_m_int32bool()) {
				clear_has_m_int32bool();
			}
			if (m_int32bool_ != null) {
				m_int32bool_.clear();
			}
		}
		public void release_m_int32bool() {
			if (has_m_int32bool()) {
				clear_has_m_int32bool();
			}
			if (m_int32bool_ != null) {
				m_int32bool_ = null;
			}
		}
		public boolean has_m_int32bool() {
			return m_bits.HasBit(0);
		}
		private void set_has_m_int32bool() {
			m_bits.SetBit(0);
		}
		private void clear_has_m_int32bool() {
			m_bits.ClearBit(0);
		}

		private java.util.TreeMap<Integer, Boolean> m_sint32bool_;

		public int m_sint32bool_size() {
			if (null != m_sint32bool_ && has_m_sint32bool()) {
				return m_sint32bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32bool(java.util.TreeMap<Integer, Boolean> value) {
			if (null != value) {
				m_sint32bool_ = value;
				set_has_m_sint32bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Boolean>> m_sint32bool_iterator() {
			if (null != m_sint32bool_ && has_m_sint32bool()) {
				return m_sint32bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32bool(Integer key, Boolean value) {
			if (null == m_sint32bool_) {
				m_sint32bool_ = new java.util.TreeMap<Integer, Boolean>();
			}
			if (null != m_sint32bool_ && null != key && null != value) {
				m_sint32bool_.put(key, value);
				set_has_m_sint32bool();
			}
		}
		public Boolean find_m_sint32bool(Integer key) {
			if (null == m_sint32bool_ && has_m_sint32bool() && null != key) {
				return m_sint32bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32bool(Integer key) {
			if (null != m_sint32bool_ && has_m_sint32bool() && null != key) {
				m_sint32bool_.remove(key);
				if(0 == m_sint32bool_.size()) {
					clear_has_m_sint32bool();
				}
			}
		}
		public boolean m_sint32bool_contains(Integer key) {
			if (null != m_sint32bool_ && has_m_sint32bool() && null != key) {
				return m_sint32bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32bool() {
			if (has_m_sint32bool()) {
				clear_has_m_sint32bool();
			}
			if (m_sint32bool_ != null) {
				m_sint32bool_.clear();
			}
		}
		public void release_m_sint32bool() {
			if (has_m_sint32bool()) {
				clear_has_m_sint32bool();
			}
			if (m_sint32bool_ != null) {
				m_sint32bool_ = null;
			}
		}
		public boolean has_m_sint32bool() {
			return m_bits.HasBit(1);
		}
		private void set_has_m_sint32bool() {
			m_bits.SetBit(1);
		}
		private void clear_has_m_sint32bool() {
			m_bits.ClearBit(1);
		}

		private java.util.TreeMap<Integer, Boolean> m_uint32bool_;

		public int m_uint32bool_size() {
			if (null != m_uint32bool_ && has_m_uint32bool()) {
				return m_uint32bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32bool(java.util.TreeMap<Integer, Boolean> value) {
			if (null != value) {
				m_uint32bool_ = value;
				set_has_m_uint32bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Boolean>> m_uint32bool_iterator() {
			if (null != m_uint32bool_ && has_m_uint32bool()) {
				return m_uint32bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32bool(Integer key, Boolean value) {
			if (null == m_uint32bool_) {
				m_uint32bool_ = new java.util.TreeMap<Integer, Boolean>();
			}
			if (null != m_uint32bool_ && null != key && null != value) {
				m_uint32bool_.put(key, value);
				set_has_m_uint32bool();
			}
		}
		public Boolean find_m_uint32bool(Integer key) {
			if (null == m_uint32bool_ && has_m_uint32bool() && null != key) {
				return m_uint32bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32bool(Integer key) {
			if (null != m_uint32bool_ && has_m_uint32bool() && null != key) {
				m_uint32bool_.remove(key);
				if(0 == m_uint32bool_.size()) {
					clear_has_m_uint32bool();
				}
			}
		}
		public boolean m_uint32bool_contains(Integer key) {
			if (null != m_uint32bool_ && has_m_uint32bool() && null != key) {
				return m_uint32bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32bool() {
			if (has_m_uint32bool()) {
				clear_has_m_uint32bool();
			}
			if (m_uint32bool_ != null) {
				m_uint32bool_.clear();
			}
		}
		public void release_m_uint32bool() {
			if (has_m_uint32bool()) {
				clear_has_m_uint32bool();
			}
			if (m_uint32bool_ != null) {
				m_uint32bool_ = null;
			}
		}
		public boolean has_m_uint32bool() {
			return m_bits.HasBit(2);
		}
		private void set_has_m_uint32bool() {
			m_bits.SetBit(2);
		}
		private void clear_has_m_uint32bool() {
			m_bits.ClearBit(2);
		}

		private java.util.TreeMap<Long, Boolean> m_int64bool_;

		public int m_int64bool_size() {
			if (null != m_int64bool_ && has_m_int64bool()) {
				return m_int64bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64bool(java.util.TreeMap<Long, Boolean> value) {
			if (null != value) {
				m_int64bool_ = value;
				set_has_m_int64bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Boolean>> m_int64bool_iterator() {
			if (null != m_int64bool_ && has_m_int64bool()) {
				return m_int64bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64bool(Long key, Boolean value) {
			if (null == m_int64bool_) {
				m_int64bool_ = new java.util.TreeMap<Long, Boolean>();
			}
			if (null != m_int64bool_ && null != key && null != value) {
				m_int64bool_.put(key, value);
				set_has_m_int64bool();
			}
		}
		public Boolean find_m_int64bool(Long key) {
			if (null == m_int64bool_ && has_m_int64bool() && null != key) {
				return m_int64bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64bool(Long key) {
			if (null != m_int64bool_ && has_m_int64bool() && null != key) {
				m_int64bool_.remove(key);
				if(0 == m_int64bool_.size()) {
					clear_has_m_int64bool();
				}
			}
		}
		public boolean m_int64bool_contains(Long key) {
			if (null != m_int64bool_ && has_m_int64bool() && null != key) {
				return m_int64bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64bool() {
			if (has_m_int64bool()) {
				clear_has_m_int64bool();
			}
			if (m_int64bool_ != null) {
				m_int64bool_.clear();
			}
		}
		public void release_m_int64bool() {
			if (has_m_int64bool()) {
				clear_has_m_int64bool();
			}
			if (m_int64bool_ != null) {
				m_int64bool_ = null;
			}
		}
		public boolean has_m_int64bool() {
			return m_bits.HasBit(3);
		}
		private void set_has_m_int64bool() {
			m_bits.SetBit(3);
		}
		private void clear_has_m_int64bool() {
			m_bits.ClearBit(3);
		}

		private java.util.TreeMap<Long, Boolean> m_sint64bool_;

		public int m_sint64bool_size() {
			if (null != m_sint64bool_ && has_m_sint64bool()) {
				return m_sint64bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64bool(java.util.TreeMap<Long, Boolean> value) {
			if (null != value) {
				m_sint64bool_ = value;
				set_has_m_sint64bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Boolean>> m_sint64bool_iterator() {
			if (null != m_sint64bool_ && has_m_sint64bool()) {
				return m_sint64bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64bool(Long key, Boolean value) {
			if (null == m_sint64bool_) {
				m_sint64bool_ = new java.util.TreeMap<Long, Boolean>();
			}
			if (null != m_sint64bool_ && null != key && null != value) {
				m_sint64bool_.put(key, value);
				set_has_m_sint64bool();
			}
		}
		public Boolean find_m_sint64bool(Long key) {
			if (null == m_sint64bool_ && has_m_sint64bool() && null != key) {
				return m_sint64bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64bool(Long key) {
			if (null != m_sint64bool_ && has_m_sint64bool() && null != key) {
				m_sint64bool_.remove(key);
				if(0 == m_sint64bool_.size()) {
					clear_has_m_sint64bool();
				}
			}
		}
		public boolean m_sint64bool_contains(Long key) {
			if (null != m_sint64bool_ && has_m_sint64bool() && null != key) {
				return m_sint64bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64bool() {
			if (has_m_sint64bool()) {
				clear_has_m_sint64bool();
			}
			if (m_sint64bool_ != null) {
				m_sint64bool_.clear();
			}
		}
		public void release_m_sint64bool() {
			if (has_m_sint64bool()) {
				clear_has_m_sint64bool();
			}
			if (m_sint64bool_ != null) {
				m_sint64bool_ = null;
			}
		}
		public boolean has_m_sint64bool() {
			return m_bits.HasBit(4);
		}
		private void set_has_m_sint64bool() {
			m_bits.SetBit(4);
		}
		private void clear_has_m_sint64bool() {
			m_bits.ClearBit(4);
		}

		private java.util.TreeMap<Long, Boolean> m_uint64bool_;

		public int m_uint64bool_size() {
			if (null != m_uint64bool_ && has_m_uint64bool()) {
				return m_uint64bool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64bool(java.util.TreeMap<Long, Boolean> value) {
			if (null != value) {
				m_uint64bool_ = value;
				set_has_m_uint64bool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Boolean>> m_uint64bool_iterator() {
			if (null != m_uint64bool_ && has_m_uint64bool()) {
				return m_uint64bool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64bool(Long key, Boolean value) {
			if (null == m_uint64bool_) {
				m_uint64bool_ = new java.util.TreeMap<Long, Boolean>();
			}
			if (null != m_uint64bool_ && null != key && null != value) {
				m_uint64bool_.put(key, value);
				set_has_m_uint64bool();
			}
		}
		public Boolean find_m_uint64bool(Long key) {
			if (null == m_uint64bool_ && has_m_uint64bool() && null != key) {
				return m_uint64bool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64bool(Long key) {
			if (null != m_uint64bool_ && has_m_uint64bool() && null != key) {
				m_uint64bool_.remove(key);
				if(0 == m_uint64bool_.size()) {
					clear_has_m_uint64bool();
				}
			}
		}
		public boolean m_uint64bool_contains(Long key) {
			if (null != m_uint64bool_ && has_m_uint64bool() && null != key) {
				return m_uint64bool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64bool() {
			if (has_m_uint64bool()) {
				clear_has_m_uint64bool();
			}
			if (m_uint64bool_ != null) {
				m_uint64bool_.clear();
			}
		}
		public void release_m_uint64bool() {
			if (has_m_uint64bool()) {
				clear_has_m_uint64bool();
			}
			if (m_uint64bool_ != null) {
				m_uint64bool_ = null;
			}
		}
		public boolean has_m_uint64bool() {
			return m_bits.HasBit(5);
		}
		private void set_has_m_uint64bool() {
			m_bits.SetBit(5);
		}
		private void clear_has_m_uint64bool() {
			m_bits.ClearBit(5);
		}

		private java.util.TreeMap<String, Boolean> m_stringbool_;

		public int m_stringbool_size() {
			if (null != m_stringbool_ && has_m_stringbool()) {
				return m_stringbool_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringbool(java.util.TreeMap<String, Boolean> value) {
			if (null != value) {
				m_stringbool_ = value;
				set_has_m_stringbool();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Boolean>> m_stringbool_iterator() {
			if (null != m_stringbool_ && has_m_stringbool()) {
				return m_stringbool_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringbool(String key, Boolean value) {
			if (null == m_stringbool_) {
				m_stringbool_ = new java.util.TreeMap<String, Boolean>();
			}
			if (null != m_stringbool_ && null != key && null != value) {
				m_stringbool_.put(key, value);
				set_has_m_stringbool();
			}
		}
		public Boolean find_m_stringbool(String key) {
			if (null == m_stringbool_ && has_m_stringbool() && null != key) {
				return m_stringbool_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringbool(String key) {
			if (null != m_stringbool_ && has_m_stringbool() && null != key) {
				m_stringbool_.remove(key);
				if(0 == m_stringbool_.size()) {
					clear_has_m_stringbool();
				}
			}
		}
		public boolean m_stringbool_contains(String key) {
			if (null != m_stringbool_ && has_m_stringbool() && null != key) {
				return m_stringbool_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringbool() {
			if (has_m_stringbool()) {
				clear_has_m_stringbool();
			}
			if (m_stringbool_ != null) {
				m_stringbool_.clear();
			}
		}
		public void release_m_stringbool() {
			if (has_m_stringbool()) {
				clear_has_m_stringbool();
			}
			if (m_stringbool_ != null) {
				m_stringbool_ = null;
			}
		}
		public boolean has_m_stringbool() {
			return m_bits.HasBit(6);
		}
		private void set_has_m_stringbool() {
			m_bits.SetBit(6);
		}
		private void clear_has_m_stringbool() {
			m_bits.ClearBit(6);
		}

		private java.util.TreeMap<Integer, Integer> m_int32int32_;

		public int m_int32int32_size() {
			if (null != m_int32int32_ && has_m_int32int32()) {
				return m_int32int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32int32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_int32int32_ = value;
				set_has_m_int32int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_int32int32_iterator() {
			if (null != m_int32int32_ && has_m_int32int32()) {
				return m_int32int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32int32(Integer key, Integer value) {
			if (null == m_int32int32_) {
				m_int32int32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_int32int32_ && null != key && null != value) {
				m_int32int32_.put(key, value);
				set_has_m_int32int32();
			}
		}
		public Integer find_m_int32int32(Integer key) {
			if (null == m_int32int32_ && has_m_int32int32() && null != key) {
				return m_int32int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32int32(Integer key) {
			if (null != m_int32int32_ && has_m_int32int32() && null != key) {
				m_int32int32_.remove(key);
				if(0 == m_int32int32_.size()) {
					clear_has_m_int32int32();
				}
			}
		}
		public boolean m_int32int32_contains(Integer key) {
			if (null != m_int32int32_ && has_m_int32int32() && null != key) {
				return m_int32int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32int32() {
			if (has_m_int32int32()) {
				clear_has_m_int32int32();
			}
			if (m_int32int32_ != null) {
				m_int32int32_.clear();
			}
		}
		public void release_m_int32int32() {
			if (has_m_int32int32()) {
				clear_has_m_int32int32();
			}
			if (m_int32int32_ != null) {
				m_int32int32_ = null;
			}
		}
		public boolean has_m_int32int32() {
			return m_bits.HasBit(7);
		}
		private void set_has_m_int32int32() {
			m_bits.SetBit(7);
		}
		private void clear_has_m_int32int32() {
			m_bits.ClearBit(7);
		}

		private java.util.TreeMap<Integer, Integer> m_sint32int32_;

		public int m_sint32int32_size() {
			if (null != m_sint32int32_ && has_m_sint32int32()) {
				return m_sint32int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32int32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_sint32int32_ = value;
				set_has_m_sint32int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_sint32int32_iterator() {
			if (null != m_sint32int32_ && has_m_sint32int32()) {
				return m_sint32int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32int32(Integer key, Integer value) {
			if (null == m_sint32int32_) {
				m_sint32int32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_sint32int32_ && null != key && null != value) {
				m_sint32int32_.put(key, value);
				set_has_m_sint32int32();
			}
		}
		public Integer find_m_sint32int32(Integer key) {
			if (null == m_sint32int32_ && has_m_sint32int32() && null != key) {
				return m_sint32int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32int32(Integer key) {
			if (null != m_sint32int32_ && has_m_sint32int32() && null != key) {
				m_sint32int32_.remove(key);
				if(0 == m_sint32int32_.size()) {
					clear_has_m_sint32int32();
				}
			}
		}
		public boolean m_sint32int32_contains(Integer key) {
			if (null != m_sint32int32_ && has_m_sint32int32() && null != key) {
				return m_sint32int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32int32() {
			if (has_m_sint32int32()) {
				clear_has_m_sint32int32();
			}
			if (m_sint32int32_ != null) {
				m_sint32int32_.clear();
			}
		}
		public void release_m_sint32int32() {
			if (has_m_sint32int32()) {
				clear_has_m_sint32int32();
			}
			if (m_sint32int32_ != null) {
				m_sint32int32_ = null;
			}
		}
		public boolean has_m_sint32int32() {
			return m_bits.HasBit(8);
		}
		private void set_has_m_sint32int32() {
			m_bits.SetBit(8);
		}
		private void clear_has_m_sint32int32() {
			m_bits.ClearBit(8);
		}

		private java.util.TreeMap<Integer, Integer> m_uint32int32_;

		public int m_uint32int32_size() {
			if (null != m_uint32int32_ && has_m_uint32int32()) {
				return m_uint32int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32int32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_uint32int32_ = value;
				set_has_m_uint32int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_uint32int32_iterator() {
			if (null != m_uint32int32_ && has_m_uint32int32()) {
				return m_uint32int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32int32(Integer key, Integer value) {
			if (null == m_uint32int32_) {
				m_uint32int32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_uint32int32_ && null != key && null != value) {
				m_uint32int32_.put(key, value);
				set_has_m_uint32int32();
			}
		}
		public Integer find_m_uint32int32(Integer key) {
			if (null == m_uint32int32_ && has_m_uint32int32() && null != key) {
				return m_uint32int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32int32(Integer key) {
			if (null != m_uint32int32_ && has_m_uint32int32() && null != key) {
				m_uint32int32_.remove(key);
				if(0 == m_uint32int32_.size()) {
					clear_has_m_uint32int32();
				}
			}
		}
		public boolean m_uint32int32_contains(Integer key) {
			if (null != m_uint32int32_ && has_m_uint32int32() && null != key) {
				return m_uint32int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32int32() {
			if (has_m_uint32int32()) {
				clear_has_m_uint32int32();
			}
			if (m_uint32int32_ != null) {
				m_uint32int32_.clear();
			}
		}
		public void release_m_uint32int32() {
			if (has_m_uint32int32()) {
				clear_has_m_uint32int32();
			}
			if (m_uint32int32_ != null) {
				m_uint32int32_ = null;
			}
		}
		public boolean has_m_uint32int32() {
			return m_bits.HasBit(9);
		}
		private void set_has_m_uint32int32() {
			m_bits.SetBit(9);
		}
		private void clear_has_m_uint32int32() {
			m_bits.ClearBit(9);
		}

		private java.util.TreeMap<Long, Integer> m_int64int32_;

		public int m_int64int32_size() {
			if (null != m_int64int32_ && has_m_int64int32()) {
				return m_int64int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64int32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_int64int32_ = value;
				set_has_m_int64int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_int64int32_iterator() {
			if (null != m_int64int32_ && has_m_int64int32()) {
				return m_int64int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64int32(Long key, Integer value) {
			if (null == m_int64int32_) {
				m_int64int32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_int64int32_ && null != key && null != value) {
				m_int64int32_.put(key, value);
				set_has_m_int64int32();
			}
		}
		public Integer find_m_int64int32(Long key) {
			if (null == m_int64int32_ && has_m_int64int32() && null != key) {
				return m_int64int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64int32(Long key) {
			if (null != m_int64int32_ && has_m_int64int32() && null != key) {
				m_int64int32_.remove(key);
				if(0 == m_int64int32_.size()) {
					clear_has_m_int64int32();
				}
			}
		}
		public boolean m_int64int32_contains(Long key) {
			if (null != m_int64int32_ && has_m_int64int32() && null != key) {
				return m_int64int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64int32() {
			if (has_m_int64int32()) {
				clear_has_m_int64int32();
			}
			if (m_int64int32_ != null) {
				m_int64int32_.clear();
			}
		}
		public void release_m_int64int32() {
			if (has_m_int64int32()) {
				clear_has_m_int64int32();
			}
			if (m_int64int32_ != null) {
				m_int64int32_ = null;
			}
		}
		public boolean has_m_int64int32() {
			return m_bits.HasBit(10);
		}
		private void set_has_m_int64int32() {
			m_bits.SetBit(10);
		}
		private void clear_has_m_int64int32() {
			m_bits.ClearBit(10);
		}

		private java.util.TreeMap<Long, Integer> m_sint64int32_;

		public int m_sint64int32_size() {
			if (null != m_sint64int32_ && has_m_sint64int32()) {
				return m_sint64int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64int32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_sint64int32_ = value;
				set_has_m_sint64int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_sint64int32_iterator() {
			if (null != m_sint64int32_ && has_m_sint64int32()) {
				return m_sint64int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64int32(Long key, Integer value) {
			if (null == m_sint64int32_) {
				m_sint64int32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_sint64int32_ && null != key && null != value) {
				m_sint64int32_.put(key, value);
				set_has_m_sint64int32();
			}
		}
		public Integer find_m_sint64int32(Long key) {
			if (null == m_sint64int32_ && has_m_sint64int32() && null != key) {
				return m_sint64int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64int32(Long key) {
			if (null != m_sint64int32_ && has_m_sint64int32() && null != key) {
				m_sint64int32_.remove(key);
				if(0 == m_sint64int32_.size()) {
					clear_has_m_sint64int32();
				}
			}
		}
		public boolean m_sint64int32_contains(Long key) {
			if (null != m_sint64int32_ && has_m_sint64int32() && null != key) {
				return m_sint64int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64int32() {
			if (has_m_sint64int32()) {
				clear_has_m_sint64int32();
			}
			if (m_sint64int32_ != null) {
				m_sint64int32_.clear();
			}
		}
		public void release_m_sint64int32() {
			if (has_m_sint64int32()) {
				clear_has_m_sint64int32();
			}
			if (m_sint64int32_ != null) {
				m_sint64int32_ = null;
			}
		}
		public boolean has_m_sint64int32() {
			return m_bits.HasBit(11);
		}
		private void set_has_m_sint64int32() {
			m_bits.SetBit(11);
		}
		private void clear_has_m_sint64int32() {
			m_bits.ClearBit(11);
		}

		private java.util.TreeMap<Long, Integer> m_uint64int32_;

		public int m_uint64int32_size() {
			if (null != m_uint64int32_ && has_m_uint64int32()) {
				return m_uint64int32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64int32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_uint64int32_ = value;
				set_has_m_uint64int32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_uint64int32_iterator() {
			if (null != m_uint64int32_ && has_m_uint64int32()) {
				return m_uint64int32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64int32(Long key, Integer value) {
			if (null == m_uint64int32_) {
				m_uint64int32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_uint64int32_ && null != key && null != value) {
				m_uint64int32_.put(key, value);
				set_has_m_uint64int32();
			}
		}
		public Integer find_m_uint64int32(Long key) {
			if (null == m_uint64int32_ && has_m_uint64int32() && null != key) {
				return m_uint64int32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64int32(Long key) {
			if (null != m_uint64int32_ && has_m_uint64int32() && null != key) {
				m_uint64int32_.remove(key);
				if(0 == m_uint64int32_.size()) {
					clear_has_m_uint64int32();
				}
			}
		}
		public boolean m_uint64int32_contains(Long key) {
			if (null != m_uint64int32_ && has_m_uint64int32() && null != key) {
				return m_uint64int32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64int32() {
			if (has_m_uint64int32()) {
				clear_has_m_uint64int32();
			}
			if (m_uint64int32_ != null) {
				m_uint64int32_.clear();
			}
		}
		public void release_m_uint64int32() {
			if (has_m_uint64int32()) {
				clear_has_m_uint64int32();
			}
			if (m_uint64int32_ != null) {
				m_uint64int32_ = null;
			}
		}
		public boolean has_m_uint64int32() {
			return m_bits.HasBit(12);
		}
		private void set_has_m_uint64int32() {
			m_bits.SetBit(12);
		}
		private void clear_has_m_uint64int32() {
			m_bits.ClearBit(12);
		}

		private java.util.TreeMap<String, Integer> m_stringint32_;

		public int m_stringint32_size() {
			if (null != m_stringint32_ && has_m_stringint32()) {
				return m_stringint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringint32(java.util.TreeMap<String, Integer> value) {
			if (null != value) {
				m_stringint32_ = value;
				set_has_m_stringint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Integer>> m_stringint32_iterator() {
			if (null != m_stringint32_ && has_m_stringint32()) {
				return m_stringint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringint32(String key, Integer value) {
			if (null == m_stringint32_) {
				m_stringint32_ = new java.util.TreeMap<String, Integer>();
			}
			if (null != m_stringint32_ && null != key && null != value) {
				m_stringint32_.put(key, value);
				set_has_m_stringint32();
			}
		}
		public Integer find_m_stringint32(String key) {
			if (null == m_stringint32_ && has_m_stringint32() && null != key) {
				return m_stringint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringint32(String key) {
			if (null != m_stringint32_ && has_m_stringint32() && null != key) {
				m_stringint32_.remove(key);
				if(0 == m_stringint32_.size()) {
					clear_has_m_stringint32();
				}
			}
		}
		public boolean m_stringint32_contains(String key) {
			if (null != m_stringint32_ && has_m_stringint32() && null != key) {
				return m_stringint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringint32() {
			if (has_m_stringint32()) {
				clear_has_m_stringint32();
			}
			if (m_stringint32_ != null) {
				m_stringint32_.clear();
			}
		}
		public void release_m_stringint32() {
			if (has_m_stringint32()) {
				clear_has_m_stringint32();
			}
			if (m_stringint32_ != null) {
				m_stringint32_ = null;
			}
		}
		public boolean has_m_stringint32() {
			return m_bits.HasBit(13);
		}
		private void set_has_m_stringint32() {
			m_bits.SetBit(13);
		}
		private void clear_has_m_stringint32() {
			m_bits.ClearBit(13);
		}

		private java.util.TreeMap<Integer, Integer> m_int32sint32_;

		public int m_int32sint32_size() {
			if (null != m_int32sint32_ && has_m_int32sint32()) {
				return m_int32sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32sint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_int32sint32_ = value;
				set_has_m_int32sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_int32sint32_iterator() {
			if (null != m_int32sint32_ && has_m_int32sint32()) {
				return m_int32sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32sint32(Integer key, Integer value) {
			if (null == m_int32sint32_) {
				m_int32sint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_int32sint32_ && null != key && null != value) {
				m_int32sint32_.put(key, value);
				set_has_m_int32sint32();
			}
		}
		public Integer find_m_int32sint32(Integer key) {
			if (null == m_int32sint32_ && has_m_int32sint32() && null != key) {
				return m_int32sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32sint32(Integer key) {
			if (null != m_int32sint32_ && has_m_int32sint32() && null != key) {
				m_int32sint32_.remove(key);
				if(0 == m_int32sint32_.size()) {
					clear_has_m_int32sint32();
				}
			}
		}
		public boolean m_int32sint32_contains(Integer key) {
			if (null != m_int32sint32_ && has_m_int32sint32() && null != key) {
				return m_int32sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32sint32() {
			if (has_m_int32sint32()) {
				clear_has_m_int32sint32();
			}
			if (m_int32sint32_ != null) {
				m_int32sint32_.clear();
			}
		}
		public void release_m_int32sint32() {
			if (has_m_int32sint32()) {
				clear_has_m_int32sint32();
			}
			if (m_int32sint32_ != null) {
				m_int32sint32_ = null;
			}
		}
		public boolean has_m_int32sint32() {
			return m_bits.HasBit(14);
		}
		private void set_has_m_int32sint32() {
			m_bits.SetBit(14);
		}
		private void clear_has_m_int32sint32() {
			m_bits.ClearBit(14);
		}

		private java.util.TreeMap<Integer, Integer> m_sint32sint32_;

		public int m_sint32sint32_size() {
			if (null != m_sint32sint32_ && has_m_sint32sint32()) {
				return m_sint32sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32sint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_sint32sint32_ = value;
				set_has_m_sint32sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_sint32sint32_iterator() {
			if (null != m_sint32sint32_ && has_m_sint32sint32()) {
				return m_sint32sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32sint32(Integer key, Integer value) {
			if (null == m_sint32sint32_) {
				m_sint32sint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_sint32sint32_ && null != key && null != value) {
				m_sint32sint32_.put(key, value);
				set_has_m_sint32sint32();
			}
		}
		public Integer find_m_sint32sint32(Integer key) {
			if (null == m_sint32sint32_ && has_m_sint32sint32() && null != key) {
				return m_sint32sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32sint32(Integer key) {
			if (null != m_sint32sint32_ && has_m_sint32sint32() && null != key) {
				m_sint32sint32_.remove(key);
				if(0 == m_sint32sint32_.size()) {
					clear_has_m_sint32sint32();
				}
			}
		}
		public boolean m_sint32sint32_contains(Integer key) {
			if (null != m_sint32sint32_ && has_m_sint32sint32() && null != key) {
				return m_sint32sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32sint32() {
			if (has_m_sint32sint32()) {
				clear_has_m_sint32sint32();
			}
			if (m_sint32sint32_ != null) {
				m_sint32sint32_.clear();
			}
		}
		public void release_m_sint32sint32() {
			if (has_m_sint32sint32()) {
				clear_has_m_sint32sint32();
			}
			if (m_sint32sint32_ != null) {
				m_sint32sint32_ = null;
			}
		}
		public boolean has_m_sint32sint32() {
			return m_bits.HasBit(15);
		}
		private void set_has_m_sint32sint32() {
			m_bits.SetBit(15);
		}
		private void clear_has_m_sint32sint32() {
			m_bits.ClearBit(15);
		}

		private java.util.TreeMap<Integer, Integer> m_uint32sint32_;

		public int m_uint32sint32_size() {
			if (null != m_uint32sint32_ && has_m_uint32sint32()) {
				return m_uint32sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32sint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_uint32sint32_ = value;
				set_has_m_uint32sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_uint32sint32_iterator() {
			if (null != m_uint32sint32_ && has_m_uint32sint32()) {
				return m_uint32sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32sint32(Integer key, Integer value) {
			if (null == m_uint32sint32_) {
				m_uint32sint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_uint32sint32_ && null != key && null != value) {
				m_uint32sint32_.put(key, value);
				set_has_m_uint32sint32();
			}
		}
		public Integer find_m_uint32sint32(Integer key) {
			if (null == m_uint32sint32_ && has_m_uint32sint32() && null != key) {
				return m_uint32sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32sint32(Integer key) {
			if (null != m_uint32sint32_ && has_m_uint32sint32() && null != key) {
				m_uint32sint32_.remove(key);
				if(0 == m_uint32sint32_.size()) {
					clear_has_m_uint32sint32();
				}
			}
		}
		public boolean m_uint32sint32_contains(Integer key) {
			if (null != m_uint32sint32_ && has_m_uint32sint32() && null != key) {
				return m_uint32sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32sint32() {
			if (has_m_uint32sint32()) {
				clear_has_m_uint32sint32();
			}
			if (m_uint32sint32_ != null) {
				m_uint32sint32_.clear();
			}
		}
		public void release_m_uint32sint32() {
			if (has_m_uint32sint32()) {
				clear_has_m_uint32sint32();
			}
			if (m_uint32sint32_ != null) {
				m_uint32sint32_ = null;
			}
		}
		public boolean has_m_uint32sint32() {
			return m_bits.HasBit(16);
		}
		private void set_has_m_uint32sint32() {
			m_bits.SetBit(16);
		}
		private void clear_has_m_uint32sint32() {
			m_bits.ClearBit(16);
		}

		private java.util.TreeMap<Long, Integer> m_int64sint32_;

		public int m_int64sint32_size() {
			if (null != m_int64sint32_ && has_m_int64sint32()) {
				return m_int64sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64sint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_int64sint32_ = value;
				set_has_m_int64sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_int64sint32_iterator() {
			if (null != m_int64sint32_ && has_m_int64sint32()) {
				return m_int64sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64sint32(Long key, Integer value) {
			if (null == m_int64sint32_) {
				m_int64sint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_int64sint32_ && null != key && null != value) {
				m_int64sint32_.put(key, value);
				set_has_m_int64sint32();
			}
		}
		public Integer find_m_int64sint32(Long key) {
			if (null == m_int64sint32_ && has_m_int64sint32() && null != key) {
				return m_int64sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64sint32(Long key) {
			if (null != m_int64sint32_ && has_m_int64sint32() && null != key) {
				m_int64sint32_.remove(key);
				if(0 == m_int64sint32_.size()) {
					clear_has_m_int64sint32();
				}
			}
		}
		public boolean m_int64sint32_contains(Long key) {
			if (null != m_int64sint32_ && has_m_int64sint32() && null != key) {
				return m_int64sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64sint32() {
			if (has_m_int64sint32()) {
				clear_has_m_int64sint32();
			}
			if (m_int64sint32_ != null) {
				m_int64sint32_.clear();
			}
		}
		public void release_m_int64sint32() {
			if (has_m_int64sint32()) {
				clear_has_m_int64sint32();
			}
			if (m_int64sint32_ != null) {
				m_int64sint32_ = null;
			}
		}
		public boolean has_m_int64sint32() {
			return m_bits.HasBit(17);
		}
		private void set_has_m_int64sint32() {
			m_bits.SetBit(17);
		}
		private void clear_has_m_int64sint32() {
			m_bits.ClearBit(17);
		}

		private java.util.TreeMap<Long, Integer> m_sint64sint32_;

		public int m_sint64sint32_size() {
			if (null != m_sint64sint32_ && has_m_sint64sint32()) {
				return m_sint64sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64sint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_sint64sint32_ = value;
				set_has_m_sint64sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_sint64sint32_iterator() {
			if (null != m_sint64sint32_ && has_m_sint64sint32()) {
				return m_sint64sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64sint32(Long key, Integer value) {
			if (null == m_sint64sint32_) {
				m_sint64sint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_sint64sint32_ && null != key && null != value) {
				m_sint64sint32_.put(key, value);
				set_has_m_sint64sint32();
			}
		}
		public Integer find_m_sint64sint32(Long key) {
			if (null == m_sint64sint32_ && has_m_sint64sint32() && null != key) {
				return m_sint64sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64sint32(Long key) {
			if (null != m_sint64sint32_ && has_m_sint64sint32() && null != key) {
				m_sint64sint32_.remove(key);
				if(0 == m_sint64sint32_.size()) {
					clear_has_m_sint64sint32();
				}
			}
		}
		public boolean m_sint64sint32_contains(Long key) {
			if (null != m_sint64sint32_ && has_m_sint64sint32() && null != key) {
				return m_sint64sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64sint32() {
			if (has_m_sint64sint32()) {
				clear_has_m_sint64sint32();
			}
			if (m_sint64sint32_ != null) {
				m_sint64sint32_.clear();
			}
		}
		public void release_m_sint64sint32() {
			if (has_m_sint64sint32()) {
				clear_has_m_sint64sint32();
			}
			if (m_sint64sint32_ != null) {
				m_sint64sint32_ = null;
			}
		}
		public boolean has_m_sint64sint32() {
			return m_bits.HasBit(18);
		}
		private void set_has_m_sint64sint32() {
			m_bits.SetBit(18);
		}
		private void clear_has_m_sint64sint32() {
			m_bits.ClearBit(18);
		}

		private java.util.TreeMap<Long, Integer> m_uint64sint32_;

		public int m_uint64sint32_size() {
			if (null != m_uint64sint32_ && has_m_uint64sint32()) {
				return m_uint64sint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64sint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_uint64sint32_ = value;
				set_has_m_uint64sint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_uint64sint32_iterator() {
			if (null != m_uint64sint32_ && has_m_uint64sint32()) {
				return m_uint64sint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64sint32(Long key, Integer value) {
			if (null == m_uint64sint32_) {
				m_uint64sint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_uint64sint32_ && null != key && null != value) {
				m_uint64sint32_.put(key, value);
				set_has_m_uint64sint32();
			}
		}
		public Integer find_m_uint64sint32(Long key) {
			if (null == m_uint64sint32_ && has_m_uint64sint32() && null != key) {
				return m_uint64sint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64sint32(Long key) {
			if (null != m_uint64sint32_ && has_m_uint64sint32() && null != key) {
				m_uint64sint32_.remove(key);
				if(0 == m_uint64sint32_.size()) {
					clear_has_m_uint64sint32();
				}
			}
		}
		public boolean m_uint64sint32_contains(Long key) {
			if (null != m_uint64sint32_ && has_m_uint64sint32() && null != key) {
				return m_uint64sint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64sint32() {
			if (has_m_uint64sint32()) {
				clear_has_m_uint64sint32();
			}
			if (m_uint64sint32_ != null) {
				m_uint64sint32_.clear();
			}
		}
		public void release_m_uint64sint32() {
			if (has_m_uint64sint32()) {
				clear_has_m_uint64sint32();
			}
			if (m_uint64sint32_ != null) {
				m_uint64sint32_ = null;
			}
		}
		public boolean has_m_uint64sint32() {
			return m_bits.HasBit(19);
		}
		private void set_has_m_uint64sint32() {
			m_bits.SetBit(19);
		}
		private void clear_has_m_uint64sint32() {
			m_bits.ClearBit(19);
		}

		private java.util.TreeMap<String, Integer> m_stringsint32_;

		public int m_stringsint32_size() {
			if (null != m_stringsint32_ && has_m_stringsint32()) {
				return m_stringsint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringsint32(java.util.TreeMap<String, Integer> value) {
			if (null != value) {
				m_stringsint32_ = value;
				set_has_m_stringsint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Integer>> m_stringsint32_iterator() {
			if (null != m_stringsint32_ && has_m_stringsint32()) {
				return m_stringsint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringsint32(String key, Integer value) {
			if (null == m_stringsint32_) {
				m_stringsint32_ = new java.util.TreeMap<String, Integer>();
			}
			if (null != m_stringsint32_ && null != key && null != value) {
				m_stringsint32_.put(key, value);
				set_has_m_stringsint32();
			}
		}
		public Integer find_m_stringsint32(String key) {
			if (null == m_stringsint32_ && has_m_stringsint32() && null != key) {
				return m_stringsint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringsint32(String key) {
			if (null != m_stringsint32_ && has_m_stringsint32() && null != key) {
				m_stringsint32_.remove(key);
				if(0 == m_stringsint32_.size()) {
					clear_has_m_stringsint32();
				}
			}
		}
		public boolean m_stringsint32_contains(String key) {
			if (null != m_stringsint32_ && has_m_stringsint32() && null != key) {
				return m_stringsint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringsint32() {
			if (has_m_stringsint32()) {
				clear_has_m_stringsint32();
			}
			if (m_stringsint32_ != null) {
				m_stringsint32_.clear();
			}
		}
		public void release_m_stringsint32() {
			if (has_m_stringsint32()) {
				clear_has_m_stringsint32();
			}
			if (m_stringsint32_ != null) {
				m_stringsint32_ = null;
			}
		}
		public boolean has_m_stringsint32() {
			return m_bits.HasBit(20);
		}
		private void set_has_m_stringsint32() {
			m_bits.SetBit(20);
		}
		private void clear_has_m_stringsint32() {
			m_bits.ClearBit(20);
		}

		private java.util.TreeMap<Integer, Integer> m_int32uint32_;

		public int m_int32uint32_size() {
			if (null != m_int32uint32_ && has_m_int32uint32()) {
				return m_int32uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32uint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_int32uint32_ = value;
				set_has_m_int32uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_int32uint32_iterator() {
			if (null != m_int32uint32_ && has_m_int32uint32()) {
				return m_int32uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32uint32(Integer key, Integer value) {
			if (null == m_int32uint32_) {
				m_int32uint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_int32uint32_ && null != key && null != value) {
				m_int32uint32_.put(key, value);
				set_has_m_int32uint32();
			}
		}
		public Integer find_m_int32uint32(Integer key) {
			if (null == m_int32uint32_ && has_m_int32uint32() && null != key) {
				return m_int32uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32uint32(Integer key) {
			if (null != m_int32uint32_ && has_m_int32uint32() && null != key) {
				m_int32uint32_.remove(key);
				if(0 == m_int32uint32_.size()) {
					clear_has_m_int32uint32();
				}
			}
		}
		public boolean m_int32uint32_contains(Integer key) {
			if (null != m_int32uint32_ && has_m_int32uint32() && null != key) {
				return m_int32uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32uint32() {
			if (has_m_int32uint32()) {
				clear_has_m_int32uint32();
			}
			if (m_int32uint32_ != null) {
				m_int32uint32_.clear();
			}
		}
		public void release_m_int32uint32() {
			if (has_m_int32uint32()) {
				clear_has_m_int32uint32();
			}
			if (m_int32uint32_ != null) {
				m_int32uint32_ = null;
			}
		}
		public boolean has_m_int32uint32() {
			return m_bits.HasBit(21);
		}
		private void set_has_m_int32uint32() {
			m_bits.SetBit(21);
		}
		private void clear_has_m_int32uint32() {
			m_bits.ClearBit(21);
		}

		private java.util.TreeMap<Integer, Integer> m_sint32uint32_;

		public int m_sint32uint32_size() {
			if (null != m_sint32uint32_ && has_m_sint32uint32()) {
				return m_sint32uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32uint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_sint32uint32_ = value;
				set_has_m_sint32uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_sint32uint32_iterator() {
			if (null != m_sint32uint32_ && has_m_sint32uint32()) {
				return m_sint32uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32uint32(Integer key, Integer value) {
			if (null == m_sint32uint32_) {
				m_sint32uint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_sint32uint32_ && null != key && null != value) {
				m_sint32uint32_.put(key, value);
				set_has_m_sint32uint32();
			}
		}
		public Integer find_m_sint32uint32(Integer key) {
			if (null == m_sint32uint32_ && has_m_sint32uint32() && null != key) {
				return m_sint32uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32uint32(Integer key) {
			if (null != m_sint32uint32_ && has_m_sint32uint32() && null != key) {
				m_sint32uint32_.remove(key);
				if(0 == m_sint32uint32_.size()) {
					clear_has_m_sint32uint32();
				}
			}
		}
		public boolean m_sint32uint32_contains(Integer key) {
			if (null != m_sint32uint32_ && has_m_sint32uint32() && null != key) {
				return m_sint32uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32uint32() {
			if (has_m_sint32uint32()) {
				clear_has_m_sint32uint32();
			}
			if (m_sint32uint32_ != null) {
				m_sint32uint32_.clear();
			}
		}
		public void release_m_sint32uint32() {
			if (has_m_sint32uint32()) {
				clear_has_m_sint32uint32();
			}
			if (m_sint32uint32_ != null) {
				m_sint32uint32_ = null;
			}
		}
		public boolean has_m_sint32uint32() {
			return m_bits.HasBit(22);
		}
		private void set_has_m_sint32uint32() {
			m_bits.SetBit(22);
		}
		private void clear_has_m_sint32uint32() {
			m_bits.ClearBit(22);
		}

		private java.util.TreeMap<Integer, Integer> m_uint32uint32_;

		public int m_uint32uint32_size() {
			if (null != m_uint32uint32_ && has_m_uint32uint32()) {
				return m_uint32uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32uint32(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_uint32uint32_ = value;
				set_has_m_uint32uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_uint32uint32_iterator() {
			if (null != m_uint32uint32_ && has_m_uint32uint32()) {
				return m_uint32uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32uint32(Integer key, Integer value) {
			if (null == m_uint32uint32_) {
				m_uint32uint32_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_uint32uint32_ && null != key && null != value) {
				m_uint32uint32_.put(key, value);
				set_has_m_uint32uint32();
			}
		}
		public Integer find_m_uint32uint32(Integer key) {
			if (null == m_uint32uint32_ && has_m_uint32uint32() && null != key) {
				return m_uint32uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32uint32(Integer key) {
			if (null != m_uint32uint32_ && has_m_uint32uint32() && null != key) {
				m_uint32uint32_.remove(key);
				if(0 == m_uint32uint32_.size()) {
					clear_has_m_uint32uint32();
				}
			}
		}
		public boolean m_uint32uint32_contains(Integer key) {
			if (null != m_uint32uint32_ && has_m_uint32uint32() && null != key) {
				return m_uint32uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32uint32() {
			if (has_m_uint32uint32()) {
				clear_has_m_uint32uint32();
			}
			if (m_uint32uint32_ != null) {
				m_uint32uint32_.clear();
			}
		}
		public void release_m_uint32uint32() {
			if (has_m_uint32uint32()) {
				clear_has_m_uint32uint32();
			}
			if (m_uint32uint32_ != null) {
				m_uint32uint32_ = null;
			}
		}
		public boolean has_m_uint32uint32() {
			return m_bits.HasBit(23);
		}
		private void set_has_m_uint32uint32() {
			m_bits.SetBit(23);
		}
		private void clear_has_m_uint32uint32() {
			m_bits.ClearBit(23);
		}

		private java.util.TreeMap<Long, Integer> m_int64uint32_;

		public int m_int64uint32_size() {
			if (null != m_int64uint32_ && has_m_int64uint32()) {
				return m_int64uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64uint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_int64uint32_ = value;
				set_has_m_int64uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_int64uint32_iterator() {
			if (null != m_int64uint32_ && has_m_int64uint32()) {
				return m_int64uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64uint32(Long key, Integer value) {
			if (null == m_int64uint32_) {
				m_int64uint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_int64uint32_ && null != key && null != value) {
				m_int64uint32_.put(key, value);
				set_has_m_int64uint32();
			}
		}
		public Integer find_m_int64uint32(Long key) {
			if (null == m_int64uint32_ && has_m_int64uint32() && null != key) {
				return m_int64uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64uint32(Long key) {
			if (null != m_int64uint32_ && has_m_int64uint32() && null != key) {
				m_int64uint32_.remove(key);
				if(0 == m_int64uint32_.size()) {
					clear_has_m_int64uint32();
				}
			}
		}
		public boolean m_int64uint32_contains(Long key) {
			if (null != m_int64uint32_ && has_m_int64uint32() && null != key) {
				return m_int64uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64uint32() {
			if (has_m_int64uint32()) {
				clear_has_m_int64uint32();
			}
			if (m_int64uint32_ != null) {
				m_int64uint32_.clear();
			}
		}
		public void release_m_int64uint32() {
			if (has_m_int64uint32()) {
				clear_has_m_int64uint32();
			}
			if (m_int64uint32_ != null) {
				m_int64uint32_ = null;
			}
		}
		public boolean has_m_int64uint32() {
			return m_bits.HasBit(24);
		}
		private void set_has_m_int64uint32() {
			m_bits.SetBit(24);
		}
		private void clear_has_m_int64uint32() {
			m_bits.ClearBit(24);
		}

		private java.util.TreeMap<Long, Integer> m_sint64uint32_;

		public int m_sint64uint32_size() {
			if (null != m_sint64uint32_ && has_m_sint64uint32()) {
				return m_sint64uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64uint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_sint64uint32_ = value;
				set_has_m_sint64uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_sint64uint32_iterator() {
			if (null != m_sint64uint32_ && has_m_sint64uint32()) {
				return m_sint64uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64uint32(Long key, Integer value) {
			if (null == m_sint64uint32_) {
				m_sint64uint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_sint64uint32_ && null != key && null != value) {
				m_sint64uint32_.put(key, value);
				set_has_m_sint64uint32();
			}
		}
		public Integer find_m_sint64uint32(Long key) {
			if (null == m_sint64uint32_ && has_m_sint64uint32() && null != key) {
				return m_sint64uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64uint32(Long key) {
			if (null != m_sint64uint32_ && has_m_sint64uint32() && null != key) {
				m_sint64uint32_.remove(key);
				if(0 == m_sint64uint32_.size()) {
					clear_has_m_sint64uint32();
				}
			}
		}
		public boolean m_sint64uint32_contains(Long key) {
			if (null != m_sint64uint32_ && has_m_sint64uint32() && null != key) {
				return m_sint64uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64uint32() {
			if (has_m_sint64uint32()) {
				clear_has_m_sint64uint32();
			}
			if (m_sint64uint32_ != null) {
				m_sint64uint32_.clear();
			}
		}
		public void release_m_sint64uint32() {
			if (has_m_sint64uint32()) {
				clear_has_m_sint64uint32();
			}
			if (m_sint64uint32_ != null) {
				m_sint64uint32_ = null;
			}
		}
		public boolean has_m_sint64uint32() {
			return m_bits.HasBit(25);
		}
		private void set_has_m_sint64uint32() {
			m_bits.SetBit(25);
		}
		private void clear_has_m_sint64uint32() {
			m_bits.ClearBit(25);
		}

		private java.util.TreeMap<Long, Integer> m_uint64uint32_;

		public int m_uint64uint32_size() {
			if (null != m_uint64uint32_ && has_m_uint64uint32()) {
				return m_uint64uint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64uint32(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_uint64uint32_ = value;
				set_has_m_uint64uint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_uint64uint32_iterator() {
			if (null != m_uint64uint32_ && has_m_uint64uint32()) {
				return m_uint64uint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64uint32(Long key, Integer value) {
			if (null == m_uint64uint32_) {
				m_uint64uint32_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_uint64uint32_ && null != key && null != value) {
				m_uint64uint32_.put(key, value);
				set_has_m_uint64uint32();
			}
		}
		public Integer find_m_uint64uint32(Long key) {
			if (null == m_uint64uint32_ && has_m_uint64uint32() && null != key) {
				return m_uint64uint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64uint32(Long key) {
			if (null != m_uint64uint32_ && has_m_uint64uint32() && null != key) {
				m_uint64uint32_.remove(key);
				if(0 == m_uint64uint32_.size()) {
					clear_has_m_uint64uint32();
				}
			}
		}
		public boolean m_uint64uint32_contains(Long key) {
			if (null != m_uint64uint32_ && has_m_uint64uint32() && null != key) {
				return m_uint64uint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64uint32() {
			if (has_m_uint64uint32()) {
				clear_has_m_uint64uint32();
			}
			if (m_uint64uint32_ != null) {
				m_uint64uint32_.clear();
			}
		}
		public void release_m_uint64uint32() {
			if (has_m_uint64uint32()) {
				clear_has_m_uint64uint32();
			}
			if (m_uint64uint32_ != null) {
				m_uint64uint32_ = null;
			}
		}
		public boolean has_m_uint64uint32() {
			return m_bits.HasBit(26);
		}
		private void set_has_m_uint64uint32() {
			m_bits.SetBit(26);
		}
		private void clear_has_m_uint64uint32() {
			m_bits.ClearBit(26);
		}

		private java.util.TreeMap<String, Integer> m_stringuint32_;

		public int m_stringuint32_size() {
			if (null != m_stringuint32_ && has_m_stringuint32()) {
				return m_stringuint32_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringuint32(java.util.TreeMap<String, Integer> value) {
			if (null != value) {
				m_stringuint32_ = value;
				set_has_m_stringuint32();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Integer>> m_stringuint32_iterator() {
			if (null != m_stringuint32_ && has_m_stringuint32()) {
				return m_stringuint32_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringuint32(String key, Integer value) {
			if (null == m_stringuint32_) {
				m_stringuint32_ = new java.util.TreeMap<String, Integer>();
			}
			if (null != m_stringuint32_ && null != key && null != value) {
				m_stringuint32_.put(key, value);
				set_has_m_stringuint32();
			}
		}
		public Integer find_m_stringuint32(String key) {
			if (null == m_stringuint32_ && has_m_stringuint32() && null != key) {
				return m_stringuint32_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringuint32(String key) {
			if (null != m_stringuint32_ && has_m_stringuint32() && null != key) {
				m_stringuint32_.remove(key);
				if(0 == m_stringuint32_.size()) {
					clear_has_m_stringuint32();
				}
			}
		}
		public boolean m_stringuint32_contains(String key) {
			if (null != m_stringuint32_ && has_m_stringuint32() && null != key) {
				return m_stringuint32_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringuint32() {
			if (has_m_stringuint32()) {
				clear_has_m_stringuint32();
			}
			if (m_stringuint32_ != null) {
				m_stringuint32_.clear();
			}
		}
		public void release_m_stringuint32() {
			if (has_m_stringuint32()) {
				clear_has_m_stringuint32();
			}
			if (m_stringuint32_ != null) {
				m_stringuint32_ = null;
			}
		}
		public boolean has_m_stringuint32() {
			return m_bits.HasBit(27);
		}
		private void set_has_m_stringuint32() {
			m_bits.SetBit(27);
		}
		private void clear_has_m_stringuint32() {
			m_bits.ClearBit(27);
		}

		private java.util.TreeMap<Integer, Long> m_int32int64_;

		public int m_int32int64_size() {
			if (null != m_int32int64_ && has_m_int32int64()) {
				return m_int32int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32int64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_int32int64_ = value;
				set_has_m_int32int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_int32int64_iterator() {
			if (null != m_int32int64_ && has_m_int32int64()) {
				return m_int32int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32int64(Integer key, Long value) {
			if (null == m_int32int64_) {
				m_int32int64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_int32int64_ && null != key && null != value) {
				m_int32int64_.put(key, value);
				set_has_m_int32int64();
			}
		}
		public Long find_m_int32int64(Integer key) {
			if (null == m_int32int64_ && has_m_int32int64() && null != key) {
				return m_int32int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32int64(Integer key) {
			if (null != m_int32int64_ && has_m_int32int64() && null != key) {
				m_int32int64_.remove(key);
				if(0 == m_int32int64_.size()) {
					clear_has_m_int32int64();
				}
			}
		}
		public boolean m_int32int64_contains(Integer key) {
			if (null != m_int32int64_ && has_m_int32int64() && null != key) {
				return m_int32int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32int64() {
			if (has_m_int32int64()) {
				clear_has_m_int32int64();
			}
			if (m_int32int64_ != null) {
				m_int32int64_.clear();
			}
		}
		public void release_m_int32int64() {
			if (has_m_int32int64()) {
				clear_has_m_int32int64();
			}
			if (m_int32int64_ != null) {
				m_int32int64_ = null;
			}
		}
		public boolean has_m_int32int64() {
			return m_bits.HasBit(28);
		}
		private void set_has_m_int32int64() {
			m_bits.SetBit(28);
		}
		private void clear_has_m_int32int64() {
			m_bits.ClearBit(28);
		}

		private java.util.TreeMap<Integer, Long> m_sint32int64_;

		public int m_sint32int64_size() {
			if (null != m_sint32int64_ && has_m_sint32int64()) {
				return m_sint32int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32int64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_sint32int64_ = value;
				set_has_m_sint32int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_sint32int64_iterator() {
			if (null != m_sint32int64_ && has_m_sint32int64()) {
				return m_sint32int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32int64(Integer key, Long value) {
			if (null == m_sint32int64_) {
				m_sint32int64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_sint32int64_ && null != key && null != value) {
				m_sint32int64_.put(key, value);
				set_has_m_sint32int64();
			}
		}
		public Long find_m_sint32int64(Integer key) {
			if (null == m_sint32int64_ && has_m_sint32int64() && null != key) {
				return m_sint32int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32int64(Integer key) {
			if (null != m_sint32int64_ && has_m_sint32int64() && null != key) {
				m_sint32int64_.remove(key);
				if(0 == m_sint32int64_.size()) {
					clear_has_m_sint32int64();
				}
			}
		}
		public boolean m_sint32int64_contains(Integer key) {
			if (null != m_sint32int64_ && has_m_sint32int64() && null != key) {
				return m_sint32int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32int64() {
			if (has_m_sint32int64()) {
				clear_has_m_sint32int64();
			}
			if (m_sint32int64_ != null) {
				m_sint32int64_.clear();
			}
		}
		public void release_m_sint32int64() {
			if (has_m_sint32int64()) {
				clear_has_m_sint32int64();
			}
			if (m_sint32int64_ != null) {
				m_sint32int64_ = null;
			}
		}
		public boolean has_m_sint32int64() {
			return m_bits.HasBit(29);
		}
		private void set_has_m_sint32int64() {
			m_bits.SetBit(29);
		}
		private void clear_has_m_sint32int64() {
			m_bits.ClearBit(29);
		}

		private java.util.TreeMap<Integer, Long> m_uint32int64_;

		public int m_uint32int64_size() {
			if (null != m_uint32int64_ && has_m_uint32int64()) {
				return m_uint32int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32int64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_uint32int64_ = value;
				set_has_m_uint32int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_uint32int64_iterator() {
			if (null != m_uint32int64_ && has_m_uint32int64()) {
				return m_uint32int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32int64(Integer key, Long value) {
			if (null == m_uint32int64_) {
				m_uint32int64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_uint32int64_ && null != key && null != value) {
				m_uint32int64_.put(key, value);
				set_has_m_uint32int64();
			}
		}
		public Long find_m_uint32int64(Integer key) {
			if (null == m_uint32int64_ && has_m_uint32int64() && null != key) {
				return m_uint32int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32int64(Integer key) {
			if (null != m_uint32int64_ && has_m_uint32int64() && null != key) {
				m_uint32int64_.remove(key);
				if(0 == m_uint32int64_.size()) {
					clear_has_m_uint32int64();
				}
			}
		}
		public boolean m_uint32int64_contains(Integer key) {
			if (null != m_uint32int64_ && has_m_uint32int64() && null != key) {
				return m_uint32int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32int64() {
			if (has_m_uint32int64()) {
				clear_has_m_uint32int64();
			}
			if (m_uint32int64_ != null) {
				m_uint32int64_.clear();
			}
		}
		public void release_m_uint32int64() {
			if (has_m_uint32int64()) {
				clear_has_m_uint32int64();
			}
			if (m_uint32int64_ != null) {
				m_uint32int64_ = null;
			}
		}
		public boolean has_m_uint32int64() {
			return m_bits.HasBit(30);
		}
		private void set_has_m_uint32int64() {
			m_bits.SetBit(30);
		}
		private void clear_has_m_uint32int64() {
			m_bits.ClearBit(30);
		}

		private java.util.TreeMap<Long, Long> m_int64int64_;

		public int m_int64int64_size() {
			if (null != m_int64int64_ && has_m_int64int64()) {
				return m_int64int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64int64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_int64int64_ = value;
				set_has_m_int64int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_int64int64_iterator() {
			if (null != m_int64int64_ && has_m_int64int64()) {
				return m_int64int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64int64(Long key, Long value) {
			if (null == m_int64int64_) {
				m_int64int64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_int64int64_ && null != key && null != value) {
				m_int64int64_.put(key, value);
				set_has_m_int64int64();
			}
		}
		public Long find_m_int64int64(Long key) {
			if (null == m_int64int64_ && has_m_int64int64() && null != key) {
				return m_int64int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64int64(Long key) {
			if (null != m_int64int64_ && has_m_int64int64() && null != key) {
				m_int64int64_.remove(key);
				if(0 == m_int64int64_.size()) {
					clear_has_m_int64int64();
				}
			}
		}
		public boolean m_int64int64_contains(Long key) {
			if (null != m_int64int64_ && has_m_int64int64() && null != key) {
				return m_int64int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64int64() {
			if (has_m_int64int64()) {
				clear_has_m_int64int64();
			}
			if (m_int64int64_ != null) {
				m_int64int64_.clear();
			}
		}
		public void release_m_int64int64() {
			if (has_m_int64int64()) {
				clear_has_m_int64int64();
			}
			if (m_int64int64_ != null) {
				m_int64int64_ = null;
			}
		}
		public boolean has_m_int64int64() {
			return m_bits.HasBit(31);
		}
		private void set_has_m_int64int64() {
			m_bits.SetBit(31);
		}
		private void clear_has_m_int64int64() {
			m_bits.ClearBit(31);
		}

		private java.util.TreeMap<Long, Long> m_sint64int64_;

		public int m_sint64int64_size() {
			if (null != m_sint64int64_ && has_m_sint64int64()) {
				return m_sint64int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64int64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_sint64int64_ = value;
				set_has_m_sint64int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_sint64int64_iterator() {
			if (null != m_sint64int64_ && has_m_sint64int64()) {
				return m_sint64int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64int64(Long key, Long value) {
			if (null == m_sint64int64_) {
				m_sint64int64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_sint64int64_ && null != key && null != value) {
				m_sint64int64_.put(key, value);
				set_has_m_sint64int64();
			}
		}
		public Long find_m_sint64int64(Long key) {
			if (null == m_sint64int64_ && has_m_sint64int64() && null != key) {
				return m_sint64int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64int64(Long key) {
			if (null != m_sint64int64_ && has_m_sint64int64() && null != key) {
				m_sint64int64_.remove(key);
				if(0 == m_sint64int64_.size()) {
					clear_has_m_sint64int64();
				}
			}
		}
		public boolean m_sint64int64_contains(Long key) {
			if (null != m_sint64int64_ && has_m_sint64int64() && null != key) {
				return m_sint64int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64int64() {
			if (has_m_sint64int64()) {
				clear_has_m_sint64int64();
			}
			if (m_sint64int64_ != null) {
				m_sint64int64_.clear();
			}
		}
		public void release_m_sint64int64() {
			if (has_m_sint64int64()) {
				clear_has_m_sint64int64();
			}
			if (m_sint64int64_ != null) {
				m_sint64int64_ = null;
			}
		}
		public boolean has_m_sint64int64() {
			return m_bits.HasBit(32);
		}
		private void set_has_m_sint64int64() {
			m_bits.SetBit(32);
		}
		private void clear_has_m_sint64int64() {
			m_bits.ClearBit(32);
		}

		private java.util.TreeMap<Long, Long> m_uint64int64_;

		public int m_uint64int64_size() {
			if (null != m_uint64int64_ && has_m_uint64int64()) {
				return m_uint64int64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64int64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_uint64int64_ = value;
				set_has_m_uint64int64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_uint64int64_iterator() {
			if (null != m_uint64int64_ && has_m_uint64int64()) {
				return m_uint64int64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64int64(Long key, Long value) {
			if (null == m_uint64int64_) {
				m_uint64int64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_uint64int64_ && null != key && null != value) {
				m_uint64int64_.put(key, value);
				set_has_m_uint64int64();
			}
		}
		public Long find_m_uint64int64(Long key) {
			if (null == m_uint64int64_ && has_m_uint64int64() && null != key) {
				return m_uint64int64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64int64(Long key) {
			if (null != m_uint64int64_ && has_m_uint64int64() && null != key) {
				m_uint64int64_.remove(key);
				if(0 == m_uint64int64_.size()) {
					clear_has_m_uint64int64();
				}
			}
		}
		public boolean m_uint64int64_contains(Long key) {
			if (null != m_uint64int64_ && has_m_uint64int64() && null != key) {
				return m_uint64int64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64int64() {
			if (has_m_uint64int64()) {
				clear_has_m_uint64int64();
			}
			if (m_uint64int64_ != null) {
				m_uint64int64_.clear();
			}
		}
		public void release_m_uint64int64() {
			if (has_m_uint64int64()) {
				clear_has_m_uint64int64();
			}
			if (m_uint64int64_ != null) {
				m_uint64int64_ = null;
			}
		}
		public boolean has_m_uint64int64() {
			return m_bits.HasBit(33);
		}
		private void set_has_m_uint64int64() {
			m_bits.SetBit(33);
		}
		private void clear_has_m_uint64int64() {
			m_bits.ClearBit(33);
		}

		private java.util.TreeMap<String, Long> m_stringint64_;

		public int m_stringint64_size() {
			if (null != m_stringint64_ && has_m_stringint64()) {
				return m_stringint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringint64(java.util.TreeMap<String, Long> value) {
			if (null != value) {
				m_stringint64_ = value;
				set_has_m_stringint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Long>> m_stringint64_iterator() {
			if (null != m_stringint64_ && has_m_stringint64()) {
				return m_stringint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringint64(String key, Long value) {
			if (null == m_stringint64_) {
				m_stringint64_ = new java.util.TreeMap<String, Long>();
			}
			if (null != m_stringint64_ && null != key && null != value) {
				m_stringint64_.put(key, value);
				set_has_m_stringint64();
			}
		}
		public Long find_m_stringint64(String key) {
			if (null == m_stringint64_ && has_m_stringint64() && null != key) {
				return m_stringint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringint64(String key) {
			if (null != m_stringint64_ && has_m_stringint64() && null != key) {
				m_stringint64_.remove(key);
				if(0 == m_stringint64_.size()) {
					clear_has_m_stringint64();
				}
			}
		}
		public boolean m_stringint64_contains(String key) {
			if (null != m_stringint64_ && has_m_stringint64() && null != key) {
				return m_stringint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringint64() {
			if (has_m_stringint64()) {
				clear_has_m_stringint64();
			}
			if (m_stringint64_ != null) {
				m_stringint64_.clear();
			}
		}
		public void release_m_stringint64() {
			if (has_m_stringint64()) {
				clear_has_m_stringint64();
			}
			if (m_stringint64_ != null) {
				m_stringint64_ = null;
			}
		}
		public boolean has_m_stringint64() {
			return m_bits.HasBit(34);
		}
		private void set_has_m_stringint64() {
			m_bits.SetBit(34);
		}
		private void clear_has_m_stringint64() {
			m_bits.ClearBit(34);
		}

		private java.util.TreeMap<Integer, Long> m_int32sint64_;

		public int m_int32sint64_size() {
			if (null != m_int32sint64_ && has_m_int32sint64()) {
				return m_int32sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32sint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_int32sint64_ = value;
				set_has_m_int32sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_int32sint64_iterator() {
			if (null != m_int32sint64_ && has_m_int32sint64()) {
				return m_int32sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32sint64(Integer key, Long value) {
			if (null == m_int32sint64_) {
				m_int32sint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_int32sint64_ && null != key && null != value) {
				m_int32sint64_.put(key, value);
				set_has_m_int32sint64();
			}
		}
		public Long find_m_int32sint64(Integer key) {
			if (null == m_int32sint64_ && has_m_int32sint64() && null != key) {
				return m_int32sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32sint64(Integer key) {
			if (null != m_int32sint64_ && has_m_int32sint64() && null != key) {
				m_int32sint64_.remove(key);
				if(0 == m_int32sint64_.size()) {
					clear_has_m_int32sint64();
				}
			}
		}
		public boolean m_int32sint64_contains(Integer key) {
			if (null != m_int32sint64_ && has_m_int32sint64() && null != key) {
				return m_int32sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32sint64() {
			if (has_m_int32sint64()) {
				clear_has_m_int32sint64();
			}
			if (m_int32sint64_ != null) {
				m_int32sint64_.clear();
			}
		}
		public void release_m_int32sint64() {
			if (has_m_int32sint64()) {
				clear_has_m_int32sint64();
			}
			if (m_int32sint64_ != null) {
				m_int32sint64_ = null;
			}
		}
		public boolean has_m_int32sint64() {
			return m_bits.HasBit(35);
		}
		private void set_has_m_int32sint64() {
			m_bits.SetBit(35);
		}
		private void clear_has_m_int32sint64() {
			m_bits.ClearBit(35);
		}

		private java.util.TreeMap<Integer, Long> m_sint32sint64_;

		public int m_sint32sint64_size() {
			if (null != m_sint32sint64_ && has_m_sint32sint64()) {
				return m_sint32sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32sint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_sint32sint64_ = value;
				set_has_m_sint32sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_sint32sint64_iterator() {
			if (null != m_sint32sint64_ && has_m_sint32sint64()) {
				return m_sint32sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32sint64(Integer key, Long value) {
			if (null == m_sint32sint64_) {
				m_sint32sint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_sint32sint64_ && null != key && null != value) {
				m_sint32sint64_.put(key, value);
				set_has_m_sint32sint64();
			}
		}
		public Long find_m_sint32sint64(Integer key) {
			if (null == m_sint32sint64_ && has_m_sint32sint64() && null != key) {
				return m_sint32sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32sint64(Integer key) {
			if (null != m_sint32sint64_ && has_m_sint32sint64() && null != key) {
				m_sint32sint64_.remove(key);
				if(0 == m_sint32sint64_.size()) {
					clear_has_m_sint32sint64();
				}
			}
		}
		public boolean m_sint32sint64_contains(Integer key) {
			if (null != m_sint32sint64_ && has_m_sint32sint64() && null != key) {
				return m_sint32sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32sint64() {
			if (has_m_sint32sint64()) {
				clear_has_m_sint32sint64();
			}
			if (m_sint32sint64_ != null) {
				m_sint32sint64_.clear();
			}
		}
		public void release_m_sint32sint64() {
			if (has_m_sint32sint64()) {
				clear_has_m_sint32sint64();
			}
			if (m_sint32sint64_ != null) {
				m_sint32sint64_ = null;
			}
		}
		public boolean has_m_sint32sint64() {
			return m_bits.HasBit(36);
		}
		private void set_has_m_sint32sint64() {
			m_bits.SetBit(36);
		}
		private void clear_has_m_sint32sint64() {
			m_bits.ClearBit(36);
		}

		private java.util.TreeMap<Integer, Long> m_uint32sint64_;

		public int m_uint32sint64_size() {
			if (null != m_uint32sint64_ && has_m_uint32sint64()) {
				return m_uint32sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32sint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_uint32sint64_ = value;
				set_has_m_uint32sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_uint32sint64_iterator() {
			if (null != m_uint32sint64_ && has_m_uint32sint64()) {
				return m_uint32sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32sint64(Integer key, Long value) {
			if (null == m_uint32sint64_) {
				m_uint32sint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_uint32sint64_ && null != key && null != value) {
				m_uint32sint64_.put(key, value);
				set_has_m_uint32sint64();
			}
		}
		public Long find_m_uint32sint64(Integer key) {
			if (null == m_uint32sint64_ && has_m_uint32sint64() && null != key) {
				return m_uint32sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32sint64(Integer key) {
			if (null != m_uint32sint64_ && has_m_uint32sint64() && null != key) {
				m_uint32sint64_.remove(key);
				if(0 == m_uint32sint64_.size()) {
					clear_has_m_uint32sint64();
				}
			}
		}
		public boolean m_uint32sint64_contains(Integer key) {
			if (null != m_uint32sint64_ && has_m_uint32sint64() && null != key) {
				return m_uint32sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32sint64() {
			if (has_m_uint32sint64()) {
				clear_has_m_uint32sint64();
			}
			if (m_uint32sint64_ != null) {
				m_uint32sint64_.clear();
			}
		}
		public void release_m_uint32sint64() {
			if (has_m_uint32sint64()) {
				clear_has_m_uint32sint64();
			}
			if (m_uint32sint64_ != null) {
				m_uint32sint64_ = null;
			}
		}
		public boolean has_m_uint32sint64() {
			return m_bits.HasBit(37);
		}
		private void set_has_m_uint32sint64() {
			m_bits.SetBit(37);
		}
		private void clear_has_m_uint32sint64() {
			m_bits.ClearBit(37);
		}

		private java.util.TreeMap<Long, Long> m_int64sint64_;

		public int m_int64sint64_size() {
			if (null != m_int64sint64_ && has_m_int64sint64()) {
				return m_int64sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64sint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_int64sint64_ = value;
				set_has_m_int64sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_int64sint64_iterator() {
			if (null != m_int64sint64_ && has_m_int64sint64()) {
				return m_int64sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64sint64(Long key, Long value) {
			if (null == m_int64sint64_) {
				m_int64sint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_int64sint64_ && null != key && null != value) {
				m_int64sint64_.put(key, value);
				set_has_m_int64sint64();
			}
		}
		public Long find_m_int64sint64(Long key) {
			if (null == m_int64sint64_ && has_m_int64sint64() && null != key) {
				return m_int64sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64sint64(Long key) {
			if (null != m_int64sint64_ && has_m_int64sint64() && null != key) {
				m_int64sint64_.remove(key);
				if(0 == m_int64sint64_.size()) {
					clear_has_m_int64sint64();
				}
			}
		}
		public boolean m_int64sint64_contains(Long key) {
			if (null != m_int64sint64_ && has_m_int64sint64() && null != key) {
				return m_int64sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64sint64() {
			if (has_m_int64sint64()) {
				clear_has_m_int64sint64();
			}
			if (m_int64sint64_ != null) {
				m_int64sint64_.clear();
			}
		}
		public void release_m_int64sint64() {
			if (has_m_int64sint64()) {
				clear_has_m_int64sint64();
			}
			if (m_int64sint64_ != null) {
				m_int64sint64_ = null;
			}
		}
		public boolean has_m_int64sint64() {
			return m_bits.HasBit(38);
		}
		private void set_has_m_int64sint64() {
			m_bits.SetBit(38);
		}
		private void clear_has_m_int64sint64() {
			m_bits.ClearBit(38);
		}

		private java.util.TreeMap<Long, Long> m_sint64sint64_;

		public int m_sint64sint64_size() {
			if (null != m_sint64sint64_ && has_m_sint64sint64()) {
				return m_sint64sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64sint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_sint64sint64_ = value;
				set_has_m_sint64sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_sint64sint64_iterator() {
			if (null != m_sint64sint64_ && has_m_sint64sint64()) {
				return m_sint64sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64sint64(Long key, Long value) {
			if (null == m_sint64sint64_) {
				m_sint64sint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_sint64sint64_ && null != key && null != value) {
				m_sint64sint64_.put(key, value);
				set_has_m_sint64sint64();
			}
		}
		public Long find_m_sint64sint64(Long key) {
			if (null == m_sint64sint64_ && has_m_sint64sint64() && null != key) {
				return m_sint64sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64sint64(Long key) {
			if (null != m_sint64sint64_ && has_m_sint64sint64() && null != key) {
				m_sint64sint64_.remove(key);
				if(0 == m_sint64sint64_.size()) {
					clear_has_m_sint64sint64();
				}
			}
		}
		public boolean m_sint64sint64_contains(Long key) {
			if (null != m_sint64sint64_ && has_m_sint64sint64() && null != key) {
				return m_sint64sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64sint64() {
			if (has_m_sint64sint64()) {
				clear_has_m_sint64sint64();
			}
			if (m_sint64sint64_ != null) {
				m_sint64sint64_.clear();
			}
		}
		public void release_m_sint64sint64() {
			if (has_m_sint64sint64()) {
				clear_has_m_sint64sint64();
			}
			if (m_sint64sint64_ != null) {
				m_sint64sint64_ = null;
			}
		}
		public boolean has_m_sint64sint64() {
			return m_bits.HasBit(39);
		}
		private void set_has_m_sint64sint64() {
			m_bits.SetBit(39);
		}
		private void clear_has_m_sint64sint64() {
			m_bits.ClearBit(39);
		}

		private java.util.TreeMap<Long, Long> m_uint64sint64_;

		public int m_uint64sint64_size() {
			if (null != m_uint64sint64_ && has_m_uint64sint64()) {
				return m_uint64sint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64sint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_uint64sint64_ = value;
				set_has_m_uint64sint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_uint64sint64_iterator() {
			if (null != m_uint64sint64_ && has_m_uint64sint64()) {
				return m_uint64sint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64sint64(Long key, Long value) {
			if (null == m_uint64sint64_) {
				m_uint64sint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_uint64sint64_ && null != key && null != value) {
				m_uint64sint64_.put(key, value);
				set_has_m_uint64sint64();
			}
		}
		public Long find_m_uint64sint64(Long key) {
			if (null == m_uint64sint64_ && has_m_uint64sint64() && null != key) {
				return m_uint64sint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64sint64(Long key) {
			if (null != m_uint64sint64_ && has_m_uint64sint64() && null != key) {
				m_uint64sint64_.remove(key);
				if(0 == m_uint64sint64_.size()) {
					clear_has_m_uint64sint64();
				}
			}
		}
		public boolean m_uint64sint64_contains(Long key) {
			if (null != m_uint64sint64_ && has_m_uint64sint64() && null != key) {
				return m_uint64sint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64sint64() {
			if (has_m_uint64sint64()) {
				clear_has_m_uint64sint64();
			}
			if (m_uint64sint64_ != null) {
				m_uint64sint64_.clear();
			}
		}
		public void release_m_uint64sint64() {
			if (has_m_uint64sint64()) {
				clear_has_m_uint64sint64();
			}
			if (m_uint64sint64_ != null) {
				m_uint64sint64_ = null;
			}
		}
		public boolean has_m_uint64sint64() {
			return m_bits.HasBit(40);
		}
		private void set_has_m_uint64sint64() {
			m_bits.SetBit(40);
		}
		private void clear_has_m_uint64sint64() {
			m_bits.ClearBit(40);
		}

		private java.util.TreeMap<String, Long> m_stringsint64_;

		public int m_stringsint64_size() {
			if (null != m_stringsint64_ && has_m_stringsint64()) {
				return m_stringsint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringsint64(java.util.TreeMap<String, Long> value) {
			if (null != value) {
				m_stringsint64_ = value;
				set_has_m_stringsint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Long>> m_stringsint64_iterator() {
			if (null != m_stringsint64_ && has_m_stringsint64()) {
				return m_stringsint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringsint64(String key, Long value) {
			if (null == m_stringsint64_) {
				m_stringsint64_ = new java.util.TreeMap<String, Long>();
			}
			if (null != m_stringsint64_ && null != key && null != value) {
				m_stringsint64_.put(key, value);
				set_has_m_stringsint64();
			}
		}
		public Long find_m_stringsint64(String key) {
			if (null == m_stringsint64_ && has_m_stringsint64() && null != key) {
				return m_stringsint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringsint64(String key) {
			if (null != m_stringsint64_ && has_m_stringsint64() && null != key) {
				m_stringsint64_.remove(key);
				if(0 == m_stringsint64_.size()) {
					clear_has_m_stringsint64();
				}
			}
		}
		public boolean m_stringsint64_contains(String key) {
			if (null != m_stringsint64_ && has_m_stringsint64() && null != key) {
				return m_stringsint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringsint64() {
			if (has_m_stringsint64()) {
				clear_has_m_stringsint64();
			}
			if (m_stringsint64_ != null) {
				m_stringsint64_.clear();
			}
		}
		public void release_m_stringsint64() {
			if (has_m_stringsint64()) {
				clear_has_m_stringsint64();
			}
			if (m_stringsint64_ != null) {
				m_stringsint64_ = null;
			}
		}
		public boolean has_m_stringsint64() {
			return m_bits.HasBit(41);
		}
		private void set_has_m_stringsint64() {
			m_bits.SetBit(41);
		}
		private void clear_has_m_stringsint64() {
			m_bits.ClearBit(41);
		}

		private java.util.TreeMap<Integer, Long> m_int32uint64_;

		public int m_int32uint64_size() {
			if (null != m_int32uint64_ && has_m_int32uint64()) {
				return m_int32uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32uint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_int32uint64_ = value;
				set_has_m_int32uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_int32uint64_iterator() {
			if (null != m_int32uint64_ && has_m_int32uint64()) {
				return m_int32uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32uint64(Integer key, Long value) {
			if (null == m_int32uint64_) {
				m_int32uint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_int32uint64_ && null != key && null != value) {
				m_int32uint64_.put(key, value);
				set_has_m_int32uint64();
			}
		}
		public Long find_m_int32uint64(Integer key) {
			if (null == m_int32uint64_ && has_m_int32uint64() && null != key) {
				return m_int32uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32uint64(Integer key) {
			if (null != m_int32uint64_ && has_m_int32uint64() && null != key) {
				m_int32uint64_.remove(key);
				if(0 == m_int32uint64_.size()) {
					clear_has_m_int32uint64();
				}
			}
		}
		public boolean m_int32uint64_contains(Integer key) {
			if (null != m_int32uint64_ && has_m_int32uint64() && null != key) {
				return m_int32uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32uint64() {
			if (has_m_int32uint64()) {
				clear_has_m_int32uint64();
			}
			if (m_int32uint64_ != null) {
				m_int32uint64_.clear();
			}
		}
		public void release_m_int32uint64() {
			if (has_m_int32uint64()) {
				clear_has_m_int32uint64();
			}
			if (m_int32uint64_ != null) {
				m_int32uint64_ = null;
			}
		}
		public boolean has_m_int32uint64() {
			return m_bits.HasBit(42);
		}
		private void set_has_m_int32uint64() {
			m_bits.SetBit(42);
		}
		private void clear_has_m_int32uint64() {
			m_bits.ClearBit(42);
		}

		private java.util.TreeMap<Integer, Long> m_sint32uint64_;

		public int m_sint32uint64_size() {
			if (null != m_sint32uint64_ && has_m_sint32uint64()) {
				return m_sint32uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32uint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_sint32uint64_ = value;
				set_has_m_sint32uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_sint32uint64_iterator() {
			if (null != m_sint32uint64_ && has_m_sint32uint64()) {
				return m_sint32uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32uint64(Integer key, Long value) {
			if (null == m_sint32uint64_) {
				m_sint32uint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_sint32uint64_ && null != key && null != value) {
				m_sint32uint64_.put(key, value);
				set_has_m_sint32uint64();
			}
		}
		public Long find_m_sint32uint64(Integer key) {
			if (null == m_sint32uint64_ && has_m_sint32uint64() && null != key) {
				return m_sint32uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32uint64(Integer key) {
			if (null != m_sint32uint64_ && has_m_sint32uint64() && null != key) {
				m_sint32uint64_.remove(key);
				if(0 == m_sint32uint64_.size()) {
					clear_has_m_sint32uint64();
				}
			}
		}
		public boolean m_sint32uint64_contains(Integer key) {
			if (null != m_sint32uint64_ && has_m_sint32uint64() && null != key) {
				return m_sint32uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32uint64() {
			if (has_m_sint32uint64()) {
				clear_has_m_sint32uint64();
			}
			if (m_sint32uint64_ != null) {
				m_sint32uint64_.clear();
			}
		}
		public void release_m_sint32uint64() {
			if (has_m_sint32uint64()) {
				clear_has_m_sint32uint64();
			}
			if (m_sint32uint64_ != null) {
				m_sint32uint64_ = null;
			}
		}
		public boolean has_m_sint32uint64() {
			return m_bits.HasBit(43);
		}
		private void set_has_m_sint32uint64() {
			m_bits.SetBit(43);
		}
		private void clear_has_m_sint32uint64() {
			m_bits.ClearBit(43);
		}

		private java.util.TreeMap<Integer, Long> m_uint32uint64_;

		public int m_uint32uint64_size() {
			if (null != m_uint32uint64_ && has_m_uint32uint64()) {
				return m_uint32uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32uint64(java.util.TreeMap<Integer, Long> value) {
			if (null != value) {
				m_uint32uint64_ = value;
				set_has_m_uint32uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Long>> m_uint32uint64_iterator() {
			if (null != m_uint32uint64_ && has_m_uint32uint64()) {
				return m_uint32uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32uint64(Integer key, Long value) {
			if (null == m_uint32uint64_) {
				m_uint32uint64_ = new java.util.TreeMap<Integer, Long>();
			}
			if (null != m_uint32uint64_ && null != key && null != value) {
				m_uint32uint64_.put(key, value);
				set_has_m_uint32uint64();
			}
		}
		public Long find_m_uint32uint64(Integer key) {
			if (null == m_uint32uint64_ && has_m_uint32uint64() && null != key) {
				return m_uint32uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32uint64(Integer key) {
			if (null != m_uint32uint64_ && has_m_uint32uint64() && null != key) {
				m_uint32uint64_.remove(key);
				if(0 == m_uint32uint64_.size()) {
					clear_has_m_uint32uint64();
				}
			}
		}
		public boolean m_uint32uint64_contains(Integer key) {
			if (null != m_uint32uint64_ && has_m_uint32uint64() && null != key) {
				return m_uint32uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32uint64() {
			if (has_m_uint32uint64()) {
				clear_has_m_uint32uint64();
			}
			if (m_uint32uint64_ != null) {
				m_uint32uint64_.clear();
			}
		}
		public void release_m_uint32uint64() {
			if (has_m_uint32uint64()) {
				clear_has_m_uint32uint64();
			}
			if (m_uint32uint64_ != null) {
				m_uint32uint64_ = null;
			}
		}
		public boolean has_m_uint32uint64() {
			return m_bits.HasBit(44);
		}
		private void set_has_m_uint32uint64() {
			m_bits.SetBit(44);
		}
		private void clear_has_m_uint32uint64() {
			m_bits.ClearBit(44);
		}

		private java.util.TreeMap<Long, Long> m_int64uint64_;

		public int m_int64uint64_size() {
			if (null != m_int64uint64_ && has_m_int64uint64()) {
				return m_int64uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64uint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_int64uint64_ = value;
				set_has_m_int64uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_int64uint64_iterator() {
			if (null != m_int64uint64_ && has_m_int64uint64()) {
				return m_int64uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64uint64(Long key, Long value) {
			if (null == m_int64uint64_) {
				m_int64uint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_int64uint64_ && null != key && null != value) {
				m_int64uint64_.put(key, value);
				set_has_m_int64uint64();
			}
		}
		public Long find_m_int64uint64(Long key) {
			if (null == m_int64uint64_ && has_m_int64uint64() && null != key) {
				return m_int64uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64uint64(Long key) {
			if (null != m_int64uint64_ && has_m_int64uint64() && null != key) {
				m_int64uint64_.remove(key);
				if(0 == m_int64uint64_.size()) {
					clear_has_m_int64uint64();
				}
			}
		}
		public boolean m_int64uint64_contains(Long key) {
			if (null != m_int64uint64_ && has_m_int64uint64() && null != key) {
				return m_int64uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64uint64() {
			if (has_m_int64uint64()) {
				clear_has_m_int64uint64();
			}
			if (m_int64uint64_ != null) {
				m_int64uint64_.clear();
			}
		}
		public void release_m_int64uint64() {
			if (has_m_int64uint64()) {
				clear_has_m_int64uint64();
			}
			if (m_int64uint64_ != null) {
				m_int64uint64_ = null;
			}
		}
		public boolean has_m_int64uint64() {
			return m_bits.HasBit(45);
		}
		private void set_has_m_int64uint64() {
			m_bits.SetBit(45);
		}
		private void clear_has_m_int64uint64() {
			m_bits.ClearBit(45);
		}

		private java.util.TreeMap<Long, Long> m_sint64uint64_;

		public int m_sint64uint64_size() {
			if (null != m_sint64uint64_ && has_m_sint64uint64()) {
				return m_sint64uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64uint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_sint64uint64_ = value;
				set_has_m_sint64uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_sint64uint64_iterator() {
			if (null != m_sint64uint64_ && has_m_sint64uint64()) {
				return m_sint64uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64uint64(Long key, Long value) {
			if (null == m_sint64uint64_) {
				m_sint64uint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_sint64uint64_ && null != key && null != value) {
				m_sint64uint64_.put(key, value);
				set_has_m_sint64uint64();
			}
		}
		public Long find_m_sint64uint64(Long key) {
			if (null == m_sint64uint64_ && has_m_sint64uint64() && null != key) {
				return m_sint64uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64uint64(Long key) {
			if (null != m_sint64uint64_ && has_m_sint64uint64() && null != key) {
				m_sint64uint64_.remove(key);
				if(0 == m_sint64uint64_.size()) {
					clear_has_m_sint64uint64();
				}
			}
		}
		public boolean m_sint64uint64_contains(Long key) {
			if (null != m_sint64uint64_ && has_m_sint64uint64() && null != key) {
				return m_sint64uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64uint64() {
			if (has_m_sint64uint64()) {
				clear_has_m_sint64uint64();
			}
			if (m_sint64uint64_ != null) {
				m_sint64uint64_.clear();
			}
		}
		public void release_m_sint64uint64() {
			if (has_m_sint64uint64()) {
				clear_has_m_sint64uint64();
			}
			if (m_sint64uint64_ != null) {
				m_sint64uint64_ = null;
			}
		}
		public boolean has_m_sint64uint64() {
			return m_bits.HasBit(46);
		}
		private void set_has_m_sint64uint64() {
			m_bits.SetBit(46);
		}
		private void clear_has_m_sint64uint64() {
			m_bits.ClearBit(46);
		}

		private java.util.TreeMap<Long, Long> m_uint64uint64_;

		public int m_uint64uint64_size() {
			if (null != m_uint64uint64_ && has_m_uint64uint64()) {
				return m_uint64uint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64uint64(java.util.TreeMap<Long, Long> value) {
			if (null != value) {
				m_uint64uint64_ = value;
				set_has_m_uint64uint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Long>> m_uint64uint64_iterator() {
			if (null != m_uint64uint64_ && has_m_uint64uint64()) {
				return m_uint64uint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64uint64(Long key, Long value) {
			if (null == m_uint64uint64_) {
				m_uint64uint64_ = new java.util.TreeMap<Long, Long>();
			}
			if (null != m_uint64uint64_ && null != key && null != value) {
				m_uint64uint64_.put(key, value);
				set_has_m_uint64uint64();
			}
		}
		public Long find_m_uint64uint64(Long key) {
			if (null == m_uint64uint64_ && has_m_uint64uint64() && null != key) {
				return m_uint64uint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64uint64(Long key) {
			if (null != m_uint64uint64_ && has_m_uint64uint64() && null != key) {
				m_uint64uint64_.remove(key);
				if(0 == m_uint64uint64_.size()) {
					clear_has_m_uint64uint64();
				}
			}
		}
		public boolean m_uint64uint64_contains(Long key) {
			if (null != m_uint64uint64_ && has_m_uint64uint64() && null != key) {
				return m_uint64uint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64uint64() {
			if (has_m_uint64uint64()) {
				clear_has_m_uint64uint64();
			}
			if (m_uint64uint64_ != null) {
				m_uint64uint64_.clear();
			}
		}
		public void release_m_uint64uint64() {
			if (has_m_uint64uint64()) {
				clear_has_m_uint64uint64();
			}
			if (m_uint64uint64_ != null) {
				m_uint64uint64_ = null;
			}
		}
		public boolean has_m_uint64uint64() {
			return m_bits.HasBit(47);
		}
		private void set_has_m_uint64uint64() {
			m_bits.SetBit(47);
		}
		private void clear_has_m_uint64uint64() {
			m_bits.ClearBit(47);
		}

		private java.util.TreeMap<String, Long> m_stringuint64_;

		public int m_stringuint64_size() {
			if (null != m_stringuint64_ && has_m_stringuint64()) {
				return m_stringuint64_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringuint64(java.util.TreeMap<String, Long> value) {
			if (null != value) {
				m_stringuint64_ = value;
				set_has_m_stringuint64();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Long>> m_stringuint64_iterator() {
			if (null != m_stringuint64_ && has_m_stringuint64()) {
				return m_stringuint64_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringuint64(String key, Long value) {
			if (null == m_stringuint64_) {
				m_stringuint64_ = new java.util.TreeMap<String, Long>();
			}
			if (null != m_stringuint64_ && null != key && null != value) {
				m_stringuint64_.put(key, value);
				set_has_m_stringuint64();
			}
		}
		public Long find_m_stringuint64(String key) {
			if (null == m_stringuint64_ && has_m_stringuint64() && null != key) {
				return m_stringuint64_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringuint64(String key) {
			if (null != m_stringuint64_ && has_m_stringuint64() && null != key) {
				m_stringuint64_.remove(key);
				if(0 == m_stringuint64_.size()) {
					clear_has_m_stringuint64();
				}
			}
		}
		public boolean m_stringuint64_contains(String key) {
			if (null != m_stringuint64_ && has_m_stringuint64() && null != key) {
				return m_stringuint64_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringuint64() {
			if (has_m_stringuint64()) {
				clear_has_m_stringuint64();
			}
			if (m_stringuint64_ != null) {
				m_stringuint64_.clear();
			}
		}
		public void release_m_stringuint64() {
			if (has_m_stringuint64()) {
				clear_has_m_stringuint64();
			}
			if (m_stringuint64_ != null) {
				m_stringuint64_ = null;
			}
		}
		public boolean has_m_stringuint64() {
			return m_bits.HasBit(48);
		}
		private void set_has_m_stringuint64() {
			m_bits.SetBit(48);
		}
		private void clear_has_m_stringuint64() {
			m_bits.ClearBit(48);
		}

		private java.util.TreeMap<Integer, Float> m_int32float_;

		public int m_int32float_size() {
			if (null != m_int32float_ && has_m_int32float()) {
				return m_int32float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32float(java.util.TreeMap<Integer, Float> value) {
			if (null != value) {
				m_int32float_ = value;
				set_has_m_int32float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Float>> m_int32float_iterator() {
			if (null != m_int32float_ && has_m_int32float()) {
				return m_int32float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32float(Integer key, Float value) {
			if (null == m_int32float_) {
				m_int32float_ = new java.util.TreeMap<Integer, Float>();
			}
			if (null != m_int32float_ && null != key && null != value) {
				m_int32float_.put(key, value);
				set_has_m_int32float();
			}
		}
		public Float find_m_int32float(Integer key) {
			if (null == m_int32float_ && has_m_int32float() && null != key) {
				return m_int32float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32float(Integer key) {
			if (null != m_int32float_ && has_m_int32float() && null != key) {
				m_int32float_.remove(key);
				if(0 == m_int32float_.size()) {
					clear_has_m_int32float();
				}
			}
		}
		public boolean m_int32float_contains(Integer key) {
			if (null != m_int32float_ && has_m_int32float() && null != key) {
				return m_int32float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32float() {
			if (has_m_int32float()) {
				clear_has_m_int32float();
			}
			if (m_int32float_ != null) {
				m_int32float_.clear();
			}
		}
		public void release_m_int32float() {
			if (has_m_int32float()) {
				clear_has_m_int32float();
			}
			if (m_int32float_ != null) {
				m_int32float_ = null;
			}
		}
		public boolean has_m_int32float() {
			return m_bits.HasBit(49);
		}
		private void set_has_m_int32float() {
			m_bits.SetBit(49);
		}
		private void clear_has_m_int32float() {
			m_bits.ClearBit(49);
		}

		private java.util.TreeMap<Integer, Float> m_sint32float_;

		public int m_sint32float_size() {
			if (null != m_sint32float_ && has_m_sint32float()) {
				return m_sint32float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32float(java.util.TreeMap<Integer, Float> value) {
			if (null != value) {
				m_sint32float_ = value;
				set_has_m_sint32float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Float>> m_sint32float_iterator() {
			if (null != m_sint32float_ && has_m_sint32float()) {
				return m_sint32float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32float(Integer key, Float value) {
			if (null == m_sint32float_) {
				m_sint32float_ = new java.util.TreeMap<Integer, Float>();
			}
			if (null != m_sint32float_ && null != key && null != value) {
				m_sint32float_.put(key, value);
				set_has_m_sint32float();
			}
		}
		public Float find_m_sint32float(Integer key) {
			if (null == m_sint32float_ && has_m_sint32float() && null != key) {
				return m_sint32float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32float(Integer key) {
			if (null != m_sint32float_ && has_m_sint32float() && null != key) {
				m_sint32float_.remove(key);
				if(0 == m_sint32float_.size()) {
					clear_has_m_sint32float();
				}
			}
		}
		public boolean m_sint32float_contains(Integer key) {
			if (null != m_sint32float_ && has_m_sint32float() && null != key) {
				return m_sint32float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32float() {
			if (has_m_sint32float()) {
				clear_has_m_sint32float();
			}
			if (m_sint32float_ != null) {
				m_sint32float_.clear();
			}
		}
		public void release_m_sint32float() {
			if (has_m_sint32float()) {
				clear_has_m_sint32float();
			}
			if (m_sint32float_ != null) {
				m_sint32float_ = null;
			}
		}
		public boolean has_m_sint32float() {
			return m_bits.HasBit(50);
		}
		private void set_has_m_sint32float() {
			m_bits.SetBit(50);
		}
		private void clear_has_m_sint32float() {
			m_bits.ClearBit(50);
		}

		private java.util.TreeMap<Integer, Float> m_uint32float_;

		public int m_uint32float_size() {
			if (null != m_uint32float_ && has_m_uint32float()) {
				return m_uint32float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32float(java.util.TreeMap<Integer, Float> value) {
			if (null != value) {
				m_uint32float_ = value;
				set_has_m_uint32float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Float>> m_uint32float_iterator() {
			if (null != m_uint32float_ && has_m_uint32float()) {
				return m_uint32float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32float(Integer key, Float value) {
			if (null == m_uint32float_) {
				m_uint32float_ = new java.util.TreeMap<Integer, Float>();
			}
			if (null != m_uint32float_ && null != key && null != value) {
				m_uint32float_.put(key, value);
				set_has_m_uint32float();
			}
		}
		public Float find_m_uint32float(Integer key) {
			if (null == m_uint32float_ && has_m_uint32float() && null != key) {
				return m_uint32float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32float(Integer key) {
			if (null != m_uint32float_ && has_m_uint32float() && null != key) {
				m_uint32float_.remove(key);
				if(0 == m_uint32float_.size()) {
					clear_has_m_uint32float();
				}
			}
		}
		public boolean m_uint32float_contains(Integer key) {
			if (null != m_uint32float_ && has_m_uint32float() && null != key) {
				return m_uint32float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32float() {
			if (has_m_uint32float()) {
				clear_has_m_uint32float();
			}
			if (m_uint32float_ != null) {
				m_uint32float_.clear();
			}
		}
		public void release_m_uint32float() {
			if (has_m_uint32float()) {
				clear_has_m_uint32float();
			}
			if (m_uint32float_ != null) {
				m_uint32float_ = null;
			}
		}
		public boolean has_m_uint32float() {
			return m_bits.HasBit(51);
		}
		private void set_has_m_uint32float() {
			m_bits.SetBit(51);
		}
		private void clear_has_m_uint32float() {
			m_bits.ClearBit(51);
		}

		private java.util.TreeMap<Long, Float> m_int64float_;

		public int m_int64float_size() {
			if (null != m_int64float_ && has_m_int64float()) {
				return m_int64float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64float(java.util.TreeMap<Long, Float> value) {
			if (null != value) {
				m_int64float_ = value;
				set_has_m_int64float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Float>> m_int64float_iterator() {
			if (null != m_int64float_ && has_m_int64float()) {
				return m_int64float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64float(Long key, Float value) {
			if (null == m_int64float_) {
				m_int64float_ = new java.util.TreeMap<Long, Float>();
			}
			if (null != m_int64float_ && null != key && null != value) {
				m_int64float_.put(key, value);
				set_has_m_int64float();
			}
		}
		public Float find_m_int64float(Long key) {
			if (null == m_int64float_ && has_m_int64float() && null != key) {
				return m_int64float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64float(Long key) {
			if (null != m_int64float_ && has_m_int64float() && null != key) {
				m_int64float_.remove(key);
				if(0 == m_int64float_.size()) {
					clear_has_m_int64float();
				}
			}
		}
		public boolean m_int64float_contains(Long key) {
			if (null != m_int64float_ && has_m_int64float() && null != key) {
				return m_int64float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64float() {
			if (has_m_int64float()) {
				clear_has_m_int64float();
			}
			if (m_int64float_ != null) {
				m_int64float_.clear();
			}
		}
		public void release_m_int64float() {
			if (has_m_int64float()) {
				clear_has_m_int64float();
			}
			if (m_int64float_ != null) {
				m_int64float_ = null;
			}
		}
		public boolean has_m_int64float() {
			return m_bits.HasBit(52);
		}
		private void set_has_m_int64float() {
			m_bits.SetBit(52);
		}
		private void clear_has_m_int64float() {
			m_bits.ClearBit(52);
		}

		private java.util.TreeMap<Long, Float> m_sint64float_;

		public int m_sint64float_size() {
			if (null != m_sint64float_ && has_m_sint64float()) {
				return m_sint64float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64float(java.util.TreeMap<Long, Float> value) {
			if (null != value) {
				m_sint64float_ = value;
				set_has_m_sint64float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Float>> m_sint64float_iterator() {
			if (null != m_sint64float_ && has_m_sint64float()) {
				return m_sint64float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64float(Long key, Float value) {
			if (null == m_sint64float_) {
				m_sint64float_ = new java.util.TreeMap<Long, Float>();
			}
			if (null != m_sint64float_ && null != key && null != value) {
				m_sint64float_.put(key, value);
				set_has_m_sint64float();
			}
		}
		public Float find_m_sint64float(Long key) {
			if (null == m_sint64float_ && has_m_sint64float() && null != key) {
				return m_sint64float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64float(Long key) {
			if (null != m_sint64float_ && has_m_sint64float() && null != key) {
				m_sint64float_.remove(key);
				if(0 == m_sint64float_.size()) {
					clear_has_m_sint64float();
				}
			}
		}
		public boolean m_sint64float_contains(Long key) {
			if (null != m_sint64float_ && has_m_sint64float() && null != key) {
				return m_sint64float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64float() {
			if (has_m_sint64float()) {
				clear_has_m_sint64float();
			}
			if (m_sint64float_ != null) {
				m_sint64float_.clear();
			}
		}
		public void release_m_sint64float() {
			if (has_m_sint64float()) {
				clear_has_m_sint64float();
			}
			if (m_sint64float_ != null) {
				m_sint64float_ = null;
			}
		}
		public boolean has_m_sint64float() {
			return m_bits.HasBit(53);
		}
		private void set_has_m_sint64float() {
			m_bits.SetBit(53);
		}
		private void clear_has_m_sint64float() {
			m_bits.ClearBit(53);
		}

		private java.util.TreeMap<Long, Float> m_uint64float_;

		public int m_uint64float_size() {
			if (null != m_uint64float_ && has_m_uint64float()) {
				return m_uint64float_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64float(java.util.TreeMap<Long, Float> value) {
			if (null != value) {
				m_uint64float_ = value;
				set_has_m_uint64float();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Float>> m_uint64float_iterator() {
			if (null != m_uint64float_ && has_m_uint64float()) {
				return m_uint64float_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64float(Long key, Float value) {
			if (null == m_uint64float_) {
				m_uint64float_ = new java.util.TreeMap<Long, Float>();
			}
			if (null != m_uint64float_ && null != key && null != value) {
				m_uint64float_.put(key, value);
				set_has_m_uint64float();
			}
		}
		public Float find_m_uint64float(Long key) {
			if (null == m_uint64float_ && has_m_uint64float() && null != key) {
				return m_uint64float_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64float(Long key) {
			if (null != m_uint64float_ && has_m_uint64float() && null != key) {
				m_uint64float_.remove(key);
				if(0 == m_uint64float_.size()) {
					clear_has_m_uint64float();
				}
			}
		}
		public boolean m_uint64float_contains(Long key) {
			if (null != m_uint64float_ && has_m_uint64float() && null != key) {
				return m_uint64float_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64float() {
			if (has_m_uint64float()) {
				clear_has_m_uint64float();
			}
			if (m_uint64float_ != null) {
				m_uint64float_.clear();
			}
		}
		public void release_m_uint64float() {
			if (has_m_uint64float()) {
				clear_has_m_uint64float();
			}
			if (m_uint64float_ != null) {
				m_uint64float_ = null;
			}
		}
		public boolean has_m_uint64float() {
			return m_bits.HasBit(54);
		}
		private void set_has_m_uint64float() {
			m_bits.SetBit(54);
		}
		private void clear_has_m_uint64float() {
			m_bits.ClearBit(54);
		}

		private java.util.TreeMap<String, Float> m_stringfloat_;

		public int m_stringfloat_size() {
			if (null != m_stringfloat_ && has_m_stringfloat()) {
				return m_stringfloat_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringfloat(java.util.TreeMap<String, Float> value) {
			if (null != value) {
				m_stringfloat_ = value;
				set_has_m_stringfloat();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Float>> m_stringfloat_iterator() {
			if (null != m_stringfloat_ && has_m_stringfloat()) {
				return m_stringfloat_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringfloat(String key, Float value) {
			if (null == m_stringfloat_) {
				m_stringfloat_ = new java.util.TreeMap<String, Float>();
			}
			if (null != m_stringfloat_ && null != key && null != value) {
				m_stringfloat_.put(key, value);
				set_has_m_stringfloat();
			}
		}
		public Float find_m_stringfloat(String key) {
			if (null == m_stringfloat_ && has_m_stringfloat() && null != key) {
				return m_stringfloat_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringfloat(String key) {
			if (null != m_stringfloat_ && has_m_stringfloat() && null != key) {
				m_stringfloat_.remove(key);
				if(0 == m_stringfloat_.size()) {
					clear_has_m_stringfloat();
				}
			}
		}
		public boolean m_stringfloat_contains(String key) {
			if (null != m_stringfloat_ && has_m_stringfloat() && null != key) {
				return m_stringfloat_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringfloat() {
			if (has_m_stringfloat()) {
				clear_has_m_stringfloat();
			}
			if (m_stringfloat_ != null) {
				m_stringfloat_.clear();
			}
		}
		public void release_m_stringfloat() {
			if (has_m_stringfloat()) {
				clear_has_m_stringfloat();
			}
			if (m_stringfloat_ != null) {
				m_stringfloat_ = null;
			}
		}
		public boolean has_m_stringfloat() {
			return m_bits.HasBit(55);
		}
		private void set_has_m_stringfloat() {
			m_bits.SetBit(55);
		}
		private void clear_has_m_stringfloat() {
			m_bits.ClearBit(55);
		}

		private java.util.TreeMap<Integer, Double> m_int32double_;

		public int m_int32double_size() {
			if (null != m_int32double_ && has_m_int32double()) {
				return m_int32double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32double(java.util.TreeMap<Integer, Double> value) {
			if (null != value) {
				m_int32double_ = value;
				set_has_m_int32double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Double>> m_int32double_iterator() {
			if (null != m_int32double_ && has_m_int32double()) {
				return m_int32double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32double(Integer key, Double value) {
			if (null == m_int32double_) {
				m_int32double_ = new java.util.TreeMap<Integer, Double>();
			}
			if (null != m_int32double_ && null != key && null != value) {
				m_int32double_.put(key, value);
				set_has_m_int32double();
			}
		}
		public Double find_m_int32double(Integer key) {
			if (null == m_int32double_ && has_m_int32double() && null != key) {
				return m_int32double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32double(Integer key) {
			if (null != m_int32double_ && has_m_int32double() && null != key) {
				m_int32double_.remove(key);
				if(0 == m_int32double_.size()) {
					clear_has_m_int32double();
				}
			}
		}
		public boolean m_int32double_contains(Integer key) {
			if (null != m_int32double_ && has_m_int32double() && null != key) {
				return m_int32double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32double() {
			if (has_m_int32double()) {
				clear_has_m_int32double();
			}
			if (m_int32double_ != null) {
				m_int32double_.clear();
			}
		}
		public void release_m_int32double() {
			if (has_m_int32double()) {
				clear_has_m_int32double();
			}
			if (m_int32double_ != null) {
				m_int32double_ = null;
			}
		}
		public boolean has_m_int32double() {
			return m_bits.HasBit(56);
		}
		private void set_has_m_int32double() {
			m_bits.SetBit(56);
		}
		private void clear_has_m_int32double() {
			m_bits.ClearBit(56);
		}

		private java.util.TreeMap<Integer, Double> m_sint32double_;

		public int m_sint32double_size() {
			if (null != m_sint32double_ && has_m_sint32double()) {
				return m_sint32double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32double(java.util.TreeMap<Integer, Double> value) {
			if (null != value) {
				m_sint32double_ = value;
				set_has_m_sint32double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Double>> m_sint32double_iterator() {
			if (null != m_sint32double_ && has_m_sint32double()) {
				return m_sint32double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32double(Integer key, Double value) {
			if (null == m_sint32double_) {
				m_sint32double_ = new java.util.TreeMap<Integer, Double>();
			}
			if (null != m_sint32double_ && null != key && null != value) {
				m_sint32double_.put(key, value);
				set_has_m_sint32double();
			}
		}
		public Double find_m_sint32double(Integer key) {
			if (null == m_sint32double_ && has_m_sint32double() && null != key) {
				return m_sint32double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32double(Integer key) {
			if (null != m_sint32double_ && has_m_sint32double() && null != key) {
				m_sint32double_.remove(key);
				if(0 == m_sint32double_.size()) {
					clear_has_m_sint32double();
				}
			}
		}
		public boolean m_sint32double_contains(Integer key) {
			if (null != m_sint32double_ && has_m_sint32double() && null != key) {
				return m_sint32double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32double() {
			if (has_m_sint32double()) {
				clear_has_m_sint32double();
			}
			if (m_sint32double_ != null) {
				m_sint32double_.clear();
			}
		}
		public void release_m_sint32double() {
			if (has_m_sint32double()) {
				clear_has_m_sint32double();
			}
			if (m_sint32double_ != null) {
				m_sint32double_ = null;
			}
		}
		public boolean has_m_sint32double() {
			return m_bits.HasBit(57);
		}
		private void set_has_m_sint32double() {
			m_bits.SetBit(57);
		}
		private void clear_has_m_sint32double() {
			m_bits.ClearBit(57);
		}

		private java.util.TreeMap<Integer, Double> m_uint32double_;

		public int m_uint32double_size() {
			if (null != m_uint32double_ && has_m_uint32double()) {
				return m_uint32double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32double(java.util.TreeMap<Integer, Double> value) {
			if (null != value) {
				m_uint32double_ = value;
				set_has_m_uint32double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Double>> m_uint32double_iterator() {
			if (null != m_uint32double_ && has_m_uint32double()) {
				return m_uint32double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32double(Integer key, Double value) {
			if (null == m_uint32double_) {
				m_uint32double_ = new java.util.TreeMap<Integer, Double>();
			}
			if (null != m_uint32double_ && null != key && null != value) {
				m_uint32double_.put(key, value);
				set_has_m_uint32double();
			}
		}
		public Double find_m_uint32double(Integer key) {
			if (null == m_uint32double_ && has_m_uint32double() && null != key) {
				return m_uint32double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32double(Integer key) {
			if (null != m_uint32double_ && has_m_uint32double() && null != key) {
				m_uint32double_.remove(key);
				if(0 == m_uint32double_.size()) {
					clear_has_m_uint32double();
				}
			}
		}
		public boolean m_uint32double_contains(Integer key) {
			if (null != m_uint32double_ && has_m_uint32double() && null != key) {
				return m_uint32double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32double() {
			if (has_m_uint32double()) {
				clear_has_m_uint32double();
			}
			if (m_uint32double_ != null) {
				m_uint32double_.clear();
			}
		}
		public void release_m_uint32double() {
			if (has_m_uint32double()) {
				clear_has_m_uint32double();
			}
			if (m_uint32double_ != null) {
				m_uint32double_ = null;
			}
		}
		public boolean has_m_uint32double() {
			return m_bits.HasBit(58);
		}
		private void set_has_m_uint32double() {
			m_bits.SetBit(58);
		}
		private void clear_has_m_uint32double() {
			m_bits.ClearBit(58);
		}

		private java.util.TreeMap<Long, Double> m_int64double_;

		public int m_int64double_size() {
			if (null != m_int64double_ && has_m_int64double()) {
				return m_int64double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64double(java.util.TreeMap<Long, Double> value) {
			if (null != value) {
				m_int64double_ = value;
				set_has_m_int64double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Double>> m_int64double_iterator() {
			if (null != m_int64double_ && has_m_int64double()) {
				return m_int64double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64double(Long key, Double value) {
			if (null == m_int64double_) {
				m_int64double_ = new java.util.TreeMap<Long, Double>();
			}
			if (null != m_int64double_ && null != key && null != value) {
				m_int64double_.put(key, value);
				set_has_m_int64double();
			}
		}
		public Double find_m_int64double(Long key) {
			if (null == m_int64double_ && has_m_int64double() && null != key) {
				return m_int64double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64double(Long key) {
			if (null != m_int64double_ && has_m_int64double() && null != key) {
				m_int64double_.remove(key);
				if(0 == m_int64double_.size()) {
					clear_has_m_int64double();
				}
			}
		}
		public boolean m_int64double_contains(Long key) {
			if (null != m_int64double_ && has_m_int64double() && null != key) {
				return m_int64double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64double() {
			if (has_m_int64double()) {
				clear_has_m_int64double();
			}
			if (m_int64double_ != null) {
				m_int64double_.clear();
			}
		}
		public void release_m_int64double() {
			if (has_m_int64double()) {
				clear_has_m_int64double();
			}
			if (m_int64double_ != null) {
				m_int64double_ = null;
			}
		}
		public boolean has_m_int64double() {
			return m_bits.HasBit(59);
		}
		private void set_has_m_int64double() {
			m_bits.SetBit(59);
		}
		private void clear_has_m_int64double() {
			m_bits.ClearBit(59);
		}

		private java.util.TreeMap<Long, Double> m_sint64double_;

		public int m_sint64double_size() {
			if (null != m_sint64double_ && has_m_sint64double()) {
				return m_sint64double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64double(java.util.TreeMap<Long, Double> value) {
			if (null != value) {
				m_sint64double_ = value;
				set_has_m_sint64double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Double>> m_sint64double_iterator() {
			if (null != m_sint64double_ && has_m_sint64double()) {
				return m_sint64double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64double(Long key, Double value) {
			if (null == m_sint64double_) {
				m_sint64double_ = new java.util.TreeMap<Long, Double>();
			}
			if (null != m_sint64double_ && null != key && null != value) {
				m_sint64double_.put(key, value);
				set_has_m_sint64double();
			}
		}
		public Double find_m_sint64double(Long key) {
			if (null == m_sint64double_ && has_m_sint64double() && null != key) {
				return m_sint64double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64double(Long key) {
			if (null != m_sint64double_ && has_m_sint64double() && null != key) {
				m_sint64double_.remove(key);
				if(0 == m_sint64double_.size()) {
					clear_has_m_sint64double();
				}
			}
		}
		public boolean m_sint64double_contains(Long key) {
			if (null != m_sint64double_ && has_m_sint64double() && null != key) {
				return m_sint64double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64double() {
			if (has_m_sint64double()) {
				clear_has_m_sint64double();
			}
			if (m_sint64double_ != null) {
				m_sint64double_.clear();
			}
		}
		public void release_m_sint64double() {
			if (has_m_sint64double()) {
				clear_has_m_sint64double();
			}
			if (m_sint64double_ != null) {
				m_sint64double_ = null;
			}
		}
		public boolean has_m_sint64double() {
			return m_bits.HasBit(60);
		}
		private void set_has_m_sint64double() {
			m_bits.SetBit(60);
		}
		private void clear_has_m_sint64double() {
			m_bits.ClearBit(60);
		}

		private java.util.TreeMap<Long, Double> m_uint64double_;

		public int m_uint64double_size() {
			if (null != m_uint64double_ && has_m_uint64double()) {
				return m_uint64double_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64double(java.util.TreeMap<Long, Double> value) {
			if (null != value) {
				m_uint64double_ = value;
				set_has_m_uint64double();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Double>> m_uint64double_iterator() {
			if (null != m_uint64double_ && has_m_uint64double()) {
				return m_uint64double_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64double(Long key, Double value) {
			if (null == m_uint64double_) {
				m_uint64double_ = new java.util.TreeMap<Long, Double>();
			}
			if (null != m_uint64double_ && null != key && null != value) {
				m_uint64double_.put(key, value);
				set_has_m_uint64double();
			}
		}
		public Double find_m_uint64double(Long key) {
			if (null == m_uint64double_ && has_m_uint64double() && null != key) {
				return m_uint64double_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64double(Long key) {
			if (null != m_uint64double_ && has_m_uint64double() && null != key) {
				m_uint64double_.remove(key);
				if(0 == m_uint64double_.size()) {
					clear_has_m_uint64double();
				}
			}
		}
		public boolean m_uint64double_contains(Long key) {
			if (null != m_uint64double_ && has_m_uint64double() && null != key) {
				return m_uint64double_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64double() {
			if (has_m_uint64double()) {
				clear_has_m_uint64double();
			}
			if (m_uint64double_ != null) {
				m_uint64double_.clear();
			}
		}
		public void release_m_uint64double() {
			if (has_m_uint64double()) {
				clear_has_m_uint64double();
			}
			if (m_uint64double_ != null) {
				m_uint64double_ = null;
			}
		}
		public boolean has_m_uint64double() {
			return m_bits.HasBit(61);
		}
		private void set_has_m_uint64double() {
			m_bits.SetBit(61);
		}
		private void clear_has_m_uint64double() {
			m_bits.ClearBit(61);
		}

		private java.util.TreeMap<String, Double> m_stringdouble_;

		public int m_stringdouble_size() {
			if (null != m_stringdouble_ && has_m_stringdouble()) {
				return m_stringdouble_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringdouble(java.util.TreeMap<String, Double> value) {
			if (null != value) {
				m_stringdouble_ = value;
				set_has_m_stringdouble();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Double>> m_stringdouble_iterator() {
			if (null != m_stringdouble_ && has_m_stringdouble()) {
				return m_stringdouble_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringdouble(String key, Double value) {
			if (null == m_stringdouble_) {
				m_stringdouble_ = new java.util.TreeMap<String, Double>();
			}
			if (null != m_stringdouble_ && null != key && null != value) {
				m_stringdouble_.put(key, value);
				set_has_m_stringdouble();
			}
		}
		public Double find_m_stringdouble(String key) {
			if (null == m_stringdouble_ && has_m_stringdouble() && null != key) {
				return m_stringdouble_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringdouble(String key) {
			if (null != m_stringdouble_ && has_m_stringdouble() && null != key) {
				m_stringdouble_.remove(key);
				if(0 == m_stringdouble_.size()) {
					clear_has_m_stringdouble();
				}
			}
		}
		public boolean m_stringdouble_contains(String key) {
			if (null != m_stringdouble_ && has_m_stringdouble() && null != key) {
				return m_stringdouble_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringdouble() {
			if (has_m_stringdouble()) {
				clear_has_m_stringdouble();
			}
			if (m_stringdouble_ != null) {
				m_stringdouble_.clear();
			}
		}
		public void release_m_stringdouble() {
			if (has_m_stringdouble()) {
				clear_has_m_stringdouble();
			}
			if (m_stringdouble_ != null) {
				m_stringdouble_ = null;
			}
		}
		public boolean has_m_stringdouble() {
			return m_bits.HasBit(62);
		}
		private void set_has_m_stringdouble() {
			m_bits.SetBit(62);
		}
		private void clear_has_m_stringdouble() {
			m_bits.ClearBit(62);
		}

		private java.util.TreeMap<Integer, Integer> m_int32enum_;

		public int m_int32enum_size() {
			if (null != m_int32enum_ && has_m_int32enum()) {
				return m_int32enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32enum(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_int32enum_ = value;
				set_has_m_int32enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_int32enum_iterator() {
			if (null != m_int32enum_ && has_m_int32enum()) {
				return m_int32enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32enum(Integer key, Integer value) {
			if (null == m_int32enum_) {
				m_int32enum_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_int32enum_ && null != key && null != value) {
				m_int32enum_.put(key, value);
				set_has_m_int32enum();
			}
		}
		public Integer find_m_int32enum(Integer key) {
			if (null == m_int32enum_ && has_m_int32enum() && null != key) {
				return m_int32enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32enum(Integer key) {
			if (null != m_int32enum_ && has_m_int32enum() && null != key) {
				m_int32enum_.remove(key);
				if(0 == m_int32enum_.size()) {
					clear_has_m_int32enum();
				}
			}
		}
		public boolean m_int32enum_contains(Integer key) {
			if (null != m_int32enum_ && has_m_int32enum() && null != key) {
				return m_int32enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32enum() {
			if (has_m_int32enum()) {
				clear_has_m_int32enum();
			}
			if (m_int32enum_ != null) {
				m_int32enum_.clear();
			}
		}
		public void release_m_int32enum() {
			if (has_m_int32enum()) {
				clear_has_m_int32enum();
			}
			if (m_int32enum_ != null) {
				m_int32enum_ = null;
			}
		}
		public boolean has_m_int32enum() {
			return m_bits.HasBit(63);
		}
		private void set_has_m_int32enum() {
			m_bits.SetBit(63);
		}
		private void clear_has_m_int32enum() {
			m_bits.ClearBit(63);
		}

		private java.util.TreeMap<Integer, Integer> m_sint32enum_;

		public int m_sint32enum_size() {
			if (null != m_sint32enum_ && has_m_sint32enum()) {
				return m_sint32enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32enum(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_sint32enum_ = value;
				set_has_m_sint32enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_sint32enum_iterator() {
			if (null != m_sint32enum_ && has_m_sint32enum()) {
				return m_sint32enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32enum(Integer key, Integer value) {
			if (null == m_sint32enum_) {
				m_sint32enum_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_sint32enum_ && null != key && null != value) {
				m_sint32enum_.put(key, value);
				set_has_m_sint32enum();
			}
		}
		public Integer find_m_sint32enum(Integer key) {
			if (null == m_sint32enum_ && has_m_sint32enum() && null != key) {
				return m_sint32enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32enum(Integer key) {
			if (null != m_sint32enum_ && has_m_sint32enum() && null != key) {
				m_sint32enum_.remove(key);
				if(0 == m_sint32enum_.size()) {
					clear_has_m_sint32enum();
				}
			}
		}
		public boolean m_sint32enum_contains(Integer key) {
			if (null != m_sint32enum_ && has_m_sint32enum() && null != key) {
				return m_sint32enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32enum() {
			if (has_m_sint32enum()) {
				clear_has_m_sint32enum();
			}
			if (m_sint32enum_ != null) {
				m_sint32enum_.clear();
			}
		}
		public void release_m_sint32enum() {
			if (has_m_sint32enum()) {
				clear_has_m_sint32enum();
			}
			if (m_sint32enum_ != null) {
				m_sint32enum_ = null;
			}
		}
		public boolean has_m_sint32enum() {
			return m_bits.HasBit(64);
		}
		private void set_has_m_sint32enum() {
			m_bits.SetBit(64);
		}
		private void clear_has_m_sint32enum() {
			m_bits.ClearBit(64);
		}

		private java.util.TreeMap<Integer, Integer> m_uint32enum_;

		public int m_uint32enum_size() {
			if (null != m_uint32enum_ && has_m_uint32enum()) {
				return m_uint32enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32enum(java.util.TreeMap<Integer, Integer> value) {
			if (null != value) {
				m_uint32enum_ = value;
				set_has_m_uint32enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, Integer>> m_uint32enum_iterator() {
			if (null != m_uint32enum_ && has_m_uint32enum()) {
				return m_uint32enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32enum(Integer key, Integer value) {
			if (null == m_uint32enum_) {
				m_uint32enum_ = new java.util.TreeMap<Integer, Integer>();
			}
			if (null != m_uint32enum_ && null != key && null != value) {
				m_uint32enum_.put(key, value);
				set_has_m_uint32enum();
			}
		}
		public Integer find_m_uint32enum(Integer key) {
			if (null == m_uint32enum_ && has_m_uint32enum() && null != key) {
				return m_uint32enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32enum(Integer key) {
			if (null != m_uint32enum_ && has_m_uint32enum() && null != key) {
				m_uint32enum_.remove(key);
				if(0 == m_uint32enum_.size()) {
					clear_has_m_uint32enum();
				}
			}
		}
		public boolean m_uint32enum_contains(Integer key) {
			if (null != m_uint32enum_ && has_m_uint32enum() && null != key) {
				return m_uint32enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32enum() {
			if (has_m_uint32enum()) {
				clear_has_m_uint32enum();
			}
			if (m_uint32enum_ != null) {
				m_uint32enum_.clear();
			}
		}
		public void release_m_uint32enum() {
			if (has_m_uint32enum()) {
				clear_has_m_uint32enum();
			}
			if (m_uint32enum_ != null) {
				m_uint32enum_ = null;
			}
		}
		public boolean has_m_uint32enum() {
			return m_bits.HasBit(65);
		}
		private void set_has_m_uint32enum() {
			m_bits.SetBit(65);
		}
		private void clear_has_m_uint32enum() {
			m_bits.ClearBit(65);
		}

		private java.util.TreeMap<Long, Integer> m_int64enum_;

		public int m_int64enum_size() {
			if (null != m_int64enum_ && has_m_int64enum()) {
				return m_int64enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64enum(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_int64enum_ = value;
				set_has_m_int64enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_int64enum_iterator() {
			if (null != m_int64enum_ && has_m_int64enum()) {
				return m_int64enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64enum(Long key, Integer value) {
			if (null == m_int64enum_) {
				m_int64enum_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_int64enum_ && null != key && null != value) {
				m_int64enum_.put(key, value);
				set_has_m_int64enum();
			}
		}
		public Integer find_m_int64enum(Long key) {
			if (null == m_int64enum_ && has_m_int64enum() && null != key) {
				return m_int64enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64enum(Long key) {
			if (null != m_int64enum_ && has_m_int64enum() && null != key) {
				m_int64enum_.remove(key);
				if(0 == m_int64enum_.size()) {
					clear_has_m_int64enum();
				}
			}
		}
		public boolean m_int64enum_contains(Long key) {
			if (null != m_int64enum_ && has_m_int64enum() && null != key) {
				return m_int64enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64enum() {
			if (has_m_int64enum()) {
				clear_has_m_int64enum();
			}
			if (m_int64enum_ != null) {
				m_int64enum_.clear();
			}
		}
		public void release_m_int64enum() {
			if (has_m_int64enum()) {
				clear_has_m_int64enum();
			}
			if (m_int64enum_ != null) {
				m_int64enum_ = null;
			}
		}
		public boolean has_m_int64enum() {
			return m_bits.HasBit(66);
		}
		private void set_has_m_int64enum() {
			m_bits.SetBit(66);
		}
		private void clear_has_m_int64enum() {
			m_bits.ClearBit(66);
		}

		private java.util.TreeMap<Long, Integer> m_sint64enum_;

		public int m_sint64enum_size() {
			if (null != m_sint64enum_ && has_m_sint64enum()) {
				return m_sint64enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64enum(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_sint64enum_ = value;
				set_has_m_sint64enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_sint64enum_iterator() {
			if (null != m_sint64enum_ && has_m_sint64enum()) {
				return m_sint64enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64enum(Long key, Integer value) {
			if (null == m_sint64enum_) {
				m_sint64enum_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_sint64enum_ && null != key && null != value) {
				m_sint64enum_.put(key, value);
				set_has_m_sint64enum();
			}
		}
		public Integer find_m_sint64enum(Long key) {
			if (null == m_sint64enum_ && has_m_sint64enum() && null != key) {
				return m_sint64enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64enum(Long key) {
			if (null != m_sint64enum_ && has_m_sint64enum() && null != key) {
				m_sint64enum_.remove(key);
				if(0 == m_sint64enum_.size()) {
					clear_has_m_sint64enum();
				}
			}
		}
		public boolean m_sint64enum_contains(Long key) {
			if (null != m_sint64enum_ && has_m_sint64enum() && null != key) {
				return m_sint64enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64enum() {
			if (has_m_sint64enum()) {
				clear_has_m_sint64enum();
			}
			if (m_sint64enum_ != null) {
				m_sint64enum_.clear();
			}
		}
		public void release_m_sint64enum() {
			if (has_m_sint64enum()) {
				clear_has_m_sint64enum();
			}
			if (m_sint64enum_ != null) {
				m_sint64enum_ = null;
			}
		}
		public boolean has_m_sint64enum() {
			return m_bits.HasBit(67);
		}
		private void set_has_m_sint64enum() {
			m_bits.SetBit(67);
		}
		private void clear_has_m_sint64enum() {
			m_bits.ClearBit(67);
		}

		private java.util.TreeMap<Long, Integer> m_uint64enum_;

		public int m_uint64enum_size() {
			if (null != m_uint64enum_ && has_m_uint64enum()) {
				return m_uint64enum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64enum(java.util.TreeMap<Long, Integer> value) {
			if (null != value) {
				m_uint64enum_ = value;
				set_has_m_uint64enum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, Integer>> m_uint64enum_iterator() {
			if (null != m_uint64enum_ && has_m_uint64enum()) {
				return m_uint64enum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64enum(Long key, Integer value) {
			if (null == m_uint64enum_) {
				m_uint64enum_ = new java.util.TreeMap<Long, Integer>();
			}
			if (null != m_uint64enum_ && null != key && null != value) {
				m_uint64enum_.put(key, value);
				set_has_m_uint64enum();
			}
		}
		public Integer find_m_uint64enum(Long key) {
			if (null == m_uint64enum_ && has_m_uint64enum() && null != key) {
				return m_uint64enum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64enum(Long key) {
			if (null != m_uint64enum_ && has_m_uint64enum() && null != key) {
				m_uint64enum_.remove(key);
				if(0 == m_uint64enum_.size()) {
					clear_has_m_uint64enum();
				}
			}
		}
		public boolean m_uint64enum_contains(Long key) {
			if (null != m_uint64enum_ && has_m_uint64enum() && null != key) {
				return m_uint64enum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64enum() {
			if (has_m_uint64enum()) {
				clear_has_m_uint64enum();
			}
			if (m_uint64enum_ != null) {
				m_uint64enum_.clear();
			}
		}
		public void release_m_uint64enum() {
			if (has_m_uint64enum()) {
				clear_has_m_uint64enum();
			}
			if (m_uint64enum_ != null) {
				m_uint64enum_ = null;
			}
		}
		public boolean has_m_uint64enum() {
			return m_bits.HasBit(68);
		}
		private void set_has_m_uint64enum() {
			m_bits.SetBit(68);
		}
		private void clear_has_m_uint64enum() {
			m_bits.ClearBit(68);
		}

		private java.util.TreeMap<String, Integer> m_stringenum_;

		public int m_stringenum_size() {
			if (null != m_stringenum_ && has_m_stringenum()) {
				return m_stringenum_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringenum(java.util.TreeMap<String, Integer> value) {
			if (null != value) {
				m_stringenum_ = value;
				set_has_m_stringenum();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, Integer>> m_stringenum_iterator() {
			if (null != m_stringenum_ && has_m_stringenum()) {
				return m_stringenum_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringenum(String key, Integer value) {
			if (null == m_stringenum_) {
				m_stringenum_ = new java.util.TreeMap<String, Integer>();
			}
			if (null != m_stringenum_ && null != key && null != value) {
				m_stringenum_.put(key, value);
				set_has_m_stringenum();
			}
		}
		public Integer find_m_stringenum(String key) {
			if (null == m_stringenum_ && has_m_stringenum() && null != key) {
				return m_stringenum_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringenum(String key) {
			if (null != m_stringenum_ && has_m_stringenum() && null != key) {
				m_stringenum_.remove(key);
				if(0 == m_stringenum_.size()) {
					clear_has_m_stringenum();
				}
			}
		}
		public boolean m_stringenum_contains(String key) {
			if (null != m_stringenum_ && has_m_stringenum() && null != key) {
				return m_stringenum_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringenum() {
			if (has_m_stringenum()) {
				clear_has_m_stringenum();
			}
			if (m_stringenum_ != null) {
				m_stringenum_.clear();
			}
		}
		public void release_m_stringenum() {
			if (has_m_stringenum()) {
				clear_has_m_stringenum();
			}
			if (m_stringenum_ != null) {
				m_stringenum_ = null;
			}
		}
		public boolean has_m_stringenum() {
			return m_bits.HasBit(69);
		}
		private void set_has_m_stringenum() {
			m_bits.SetBit(69);
		}
		private void clear_has_m_stringenum() {
			m_bits.ClearBit(69);
		}

		private java.util.TreeMap<Integer, String> m_int32string_;

		public int m_int32string_size() {
			if (null != m_int32string_ && has_m_int32string()) {
				return m_int32string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int32string(java.util.TreeMap<Integer, String> value) {
			if (null != value) {
				m_int32string_ = value;
				set_has_m_int32string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, String>> m_int32string_iterator() {
			if (null != m_int32string_ && has_m_int32string()) {
				return m_int32string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int32string(Integer key, String value) {
			if (null == m_int32string_) {
				m_int32string_ = new java.util.TreeMap<Integer, String>();
			}
			if (null != m_int32string_ && null != key && null != value) {
				m_int32string_.put(key, value);
				set_has_m_int32string();
			}
		}
		public String find_m_int32string(Integer key) {
			if (null == m_int32string_ && has_m_int32string() && null != key) {
				return m_int32string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int32string(Integer key) {
			if (null != m_int32string_ && has_m_int32string() && null != key) {
				m_int32string_.remove(key);
				if(0 == m_int32string_.size()) {
					clear_has_m_int32string();
				}
			}
		}
		public boolean m_int32string_contains(Integer key) {
			if (null != m_int32string_ && has_m_int32string() && null != key) {
				return m_int32string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int32string() {
			if (has_m_int32string()) {
				clear_has_m_int32string();
			}
			if (m_int32string_ != null) {
				m_int32string_.clear();
			}
		}
		public void release_m_int32string() {
			if (has_m_int32string()) {
				clear_has_m_int32string();
			}
			if (m_int32string_ != null) {
				m_int32string_ = null;
			}
		}
		public boolean has_m_int32string() {
			return m_bits.HasBit(70);
		}
		private void set_has_m_int32string() {
			m_bits.SetBit(70);
		}
		private void clear_has_m_int32string() {
			m_bits.ClearBit(70);
		}

		private java.util.TreeMap<Integer, String> m_sint32string_;

		public int m_sint32string_size() {
			if (null != m_sint32string_ && has_m_sint32string()) {
				return m_sint32string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint32string(java.util.TreeMap<Integer, String> value) {
			if (null != value) {
				m_sint32string_ = value;
				set_has_m_sint32string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, String>> m_sint32string_iterator() {
			if (null != m_sint32string_ && has_m_sint32string()) {
				return m_sint32string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint32string(Integer key, String value) {
			if (null == m_sint32string_) {
				m_sint32string_ = new java.util.TreeMap<Integer, String>();
			}
			if (null != m_sint32string_ && null != key && null != value) {
				m_sint32string_.put(key, value);
				set_has_m_sint32string();
			}
		}
		public String find_m_sint32string(Integer key) {
			if (null == m_sint32string_ && has_m_sint32string() && null != key) {
				return m_sint32string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint32string(Integer key) {
			if (null != m_sint32string_ && has_m_sint32string() && null != key) {
				m_sint32string_.remove(key);
				if(0 == m_sint32string_.size()) {
					clear_has_m_sint32string();
				}
			}
		}
		public boolean m_sint32string_contains(Integer key) {
			if (null != m_sint32string_ && has_m_sint32string() && null != key) {
				return m_sint32string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint32string() {
			if (has_m_sint32string()) {
				clear_has_m_sint32string();
			}
			if (m_sint32string_ != null) {
				m_sint32string_.clear();
			}
		}
		public void release_m_sint32string() {
			if (has_m_sint32string()) {
				clear_has_m_sint32string();
			}
			if (m_sint32string_ != null) {
				m_sint32string_ = null;
			}
		}
		public boolean has_m_sint32string() {
			return m_bits.HasBit(71);
		}
		private void set_has_m_sint32string() {
			m_bits.SetBit(71);
		}
		private void clear_has_m_sint32string() {
			m_bits.ClearBit(71);
		}

		private java.util.TreeMap<Integer, String> m_uint32string_;

		public int m_uint32string_size() {
			if (null != m_uint32string_ && has_m_uint32string()) {
				return m_uint32string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint32string(java.util.TreeMap<Integer, String> value) {
			if (null != value) {
				m_uint32string_ = value;
				set_has_m_uint32string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, String>> m_uint32string_iterator() {
			if (null != m_uint32string_ && has_m_uint32string()) {
				return m_uint32string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint32string(Integer key, String value) {
			if (null == m_uint32string_) {
				m_uint32string_ = new java.util.TreeMap<Integer, String>();
			}
			if (null != m_uint32string_ && null != key && null != value) {
				m_uint32string_.put(key, value);
				set_has_m_uint32string();
			}
		}
		public String find_m_uint32string(Integer key) {
			if (null == m_uint32string_ && has_m_uint32string() && null != key) {
				return m_uint32string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint32string(Integer key) {
			if (null != m_uint32string_ && has_m_uint32string() && null != key) {
				m_uint32string_.remove(key);
				if(0 == m_uint32string_.size()) {
					clear_has_m_uint32string();
				}
			}
		}
		public boolean m_uint32string_contains(Integer key) {
			if (null != m_uint32string_ && has_m_uint32string() && null != key) {
				return m_uint32string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint32string() {
			if (has_m_uint32string()) {
				clear_has_m_uint32string();
			}
			if (m_uint32string_ != null) {
				m_uint32string_.clear();
			}
		}
		public void release_m_uint32string() {
			if (has_m_uint32string()) {
				clear_has_m_uint32string();
			}
			if (m_uint32string_ != null) {
				m_uint32string_ = null;
			}
		}
		public boolean has_m_uint32string() {
			return m_bits.HasBit(72);
		}
		private void set_has_m_uint32string() {
			m_bits.SetBit(72);
		}
		private void clear_has_m_uint32string() {
			m_bits.ClearBit(72);
		}

		private java.util.TreeMap<Long, String> m_int64string_;

		public int m_int64string_size() {
			if (null != m_int64string_ && has_m_int64string()) {
				return m_int64string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_int64string(java.util.TreeMap<Long, String> value) {
			if (null != value) {
				m_int64string_ = value;
				set_has_m_int64string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, String>> m_int64string_iterator() {
			if (null != m_int64string_ && has_m_int64string()) {
				return m_int64string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_int64string(Long key, String value) {
			if (null == m_int64string_) {
				m_int64string_ = new java.util.TreeMap<Long, String>();
			}
			if (null != m_int64string_ && null != key && null != value) {
				m_int64string_.put(key, value);
				set_has_m_int64string();
			}
		}
		public String find_m_int64string(Long key) {
			if (null == m_int64string_ && has_m_int64string() && null != key) {
				return m_int64string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_int64string(Long key) {
			if (null != m_int64string_ && has_m_int64string() && null != key) {
				m_int64string_.remove(key);
				if(0 == m_int64string_.size()) {
					clear_has_m_int64string();
				}
			}
		}
		public boolean m_int64string_contains(Long key) {
			if (null != m_int64string_ && has_m_int64string() && null != key) {
				return m_int64string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_int64string() {
			if (has_m_int64string()) {
				clear_has_m_int64string();
			}
			if (m_int64string_ != null) {
				m_int64string_.clear();
			}
		}
		public void release_m_int64string() {
			if (has_m_int64string()) {
				clear_has_m_int64string();
			}
			if (m_int64string_ != null) {
				m_int64string_ = null;
			}
		}
		public boolean has_m_int64string() {
			return m_bits.HasBit(73);
		}
		private void set_has_m_int64string() {
			m_bits.SetBit(73);
		}
		private void clear_has_m_int64string() {
			m_bits.ClearBit(73);
		}

		private java.util.TreeMap<Long, String> m_sint64string_;

		public int m_sint64string_size() {
			if (null != m_sint64string_ && has_m_sint64string()) {
				return m_sint64string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_sint64string(java.util.TreeMap<Long, String> value) {
			if (null != value) {
				m_sint64string_ = value;
				set_has_m_sint64string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, String>> m_sint64string_iterator() {
			if (null != m_sint64string_ && has_m_sint64string()) {
				return m_sint64string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_sint64string(Long key, String value) {
			if (null == m_sint64string_) {
				m_sint64string_ = new java.util.TreeMap<Long, String>();
			}
			if (null != m_sint64string_ && null != key && null != value) {
				m_sint64string_.put(key, value);
				set_has_m_sint64string();
			}
		}
		public String find_m_sint64string(Long key) {
			if (null == m_sint64string_ && has_m_sint64string() && null != key) {
				return m_sint64string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_sint64string(Long key) {
			if (null != m_sint64string_ && has_m_sint64string() && null != key) {
				m_sint64string_.remove(key);
				if(0 == m_sint64string_.size()) {
					clear_has_m_sint64string();
				}
			}
		}
		public boolean m_sint64string_contains(Long key) {
			if (null != m_sint64string_ && has_m_sint64string() && null != key) {
				return m_sint64string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_sint64string() {
			if (has_m_sint64string()) {
				clear_has_m_sint64string();
			}
			if (m_sint64string_ != null) {
				m_sint64string_.clear();
			}
		}
		public void release_m_sint64string() {
			if (has_m_sint64string()) {
				clear_has_m_sint64string();
			}
			if (m_sint64string_ != null) {
				m_sint64string_ = null;
			}
		}
		public boolean has_m_sint64string() {
			return m_bits.HasBit(74);
		}
		private void set_has_m_sint64string() {
			m_bits.SetBit(74);
		}
		private void clear_has_m_sint64string() {
			m_bits.ClearBit(74);
		}

		private java.util.TreeMap<Long, String> m_uint64string_;

		public int m_uint64string_size() {
			if (null != m_uint64string_ && has_m_uint64string()) {
				return m_uint64string_.size();
			} else {
				return 0;
			}
		}
		public void set_m_uint64string(java.util.TreeMap<Long, String> value) {
			if (null != value) {
				m_uint64string_ = value;
				set_has_m_uint64string();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Long, String>> m_uint64string_iterator() {
			if (null != m_uint64string_ && has_m_uint64string()) {
				return m_uint64string_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_uint64string(Long key, String value) {
			if (null == m_uint64string_) {
				m_uint64string_ = new java.util.TreeMap<Long, String>();
			}
			if (null != m_uint64string_ && null != key && null != value) {
				m_uint64string_.put(key, value);
				set_has_m_uint64string();
			}
		}
		public String find_m_uint64string(Long key) {
			if (null == m_uint64string_ && has_m_uint64string() && null != key) {
				return m_uint64string_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_uint64string(Long key) {
			if (null != m_uint64string_ && has_m_uint64string() && null != key) {
				m_uint64string_.remove(key);
				if(0 == m_uint64string_.size()) {
					clear_has_m_uint64string();
				}
			}
		}
		public boolean m_uint64string_contains(Long key) {
			if (null != m_uint64string_ && has_m_uint64string() && null != key) {
				return m_uint64string_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_uint64string() {
			if (has_m_uint64string()) {
				clear_has_m_uint64string();
			}
			if (m_uint64string_ != null) {
				m_uint64string_.clear();
			}
		}
		public void release_m_uint64string() {
			if (has_m_uint64string()) {
				clear_has_m_uint64string();
			}
			if (m_uint64string_ != null) {
				m_uint64string_ = null;
			}
		}
		public boolean has_m_uint64string() {
			return m_bits.HasBit(75);
		}
		private void set_has_m_uint64string() {
			m_bits.SetBit(75);
		}
		private void clear_has_m_uint64string() {
			m_bits.ClearBit(75);
		}

		private java.util.TreeMap<String, String> m_stringstring_;

		public int m_stringstring_size() {
			if (null != m_stringstring_ && has_m_stringstring()) {
				return m_stringstring_.size();
			} else {
				return 0;
			}
		}
		public void set_m_stringstring(java.util.TreeMap<String, String> value) {
			if (null != value) {
				m_stringstring_ = value;
				set_has_m_stringstring();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<String, String>> m_stringstring_iterator() {
			if (null != m_stringstring_ && has_m_stringstring()) {
				return m_stringstring_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_stringstring(String key, String value) {
			if (null == m_stringstring_) {
				m_stringstring_ = new java.util.TreeMap<String, String>();
			}
			if (null != m_stringstring_ && null != key && null != value) {
				m_stringstring_.put(key, value);
				set_has_m_stringstring();
			}
		}
		public String find_m_stringstring(String key) {
			if (null == m_stringstring_ && has_m_stringstring() && null != key) {
				return m_stringstring_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_stringstring(String key) {
			if (null != m_stringstring_ && has_m_stringstring() && null != key) {
				m_stringstring_.remove(key);
				if(0 == m_stringstring_.size()) {
					clear_has_m_stringstring();
				}
			}
		}
		public boolean m_stringstring_contains(String key) {
			if (null != m_stringstring_ && has_m_stringstring() && null != key) {
				return m_stringstring_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_stringstring() {
			if (has_m_stringstring()) {
				clear_has_m_stringstring();
			}
			if (m_stringstring_ != null) {
				m_stringstring_.clear();
			}
		}
		public void release_m_stringstring() {
			if (has_m_stringstring()) {
				clear_has_m_stringstring();
			}
			if (m_stringstring_ != null) {
				m_stringstring_ = null;
			}
		}
		public boolean has_m_stringstring() {
			return m_bits.HasBit(76);
		}
		private void set_has_m_stringstring() {
			m_bits.SetBit(76);
		}
		private void clear_has_m_stringstring() {
			m_bits.ClearBit(76);
		}

		public MsgTestMap() {

			m_bits = new common.miniproto.ProtoBitMap(77);
			m_int32bool_ = null;
			m_sint32bool_ = null;
			m_uint32bool_ = null;
			m_int64bool_ = null;
			m_sint64bool_ = null;
			m_uint64bool_ = null;
			m_stringbool_ = null;
			m_int32int32_ = null;
			m_sint32int32_ = null;
			m_uint32int32_ = null;
			m_int64int32_ = null;
			m_sint64int32_ = null;
			m_uint64int32_ = null;
			m_stringint32_ = null;
			m_int32sint32_ = null;
			m_sint32sint32_ = null;
			m_uint32sint32_ = null;
			m_int64sint32_ = null;
			m_sint64sint32_ = null;
			m_uint64sint32_ = null;
			m_stringsint32_ = null;
			m_int32uint32_ = null;
			m_sint32uint32_ = null;
			m_uint32uint32_ = null;
			m_int64uint32_ = null;
			m_sint64uint32_ = null;
			m_uint64uint32_ = null;
			m_stringuint32_ = null;
			m_int32int64_ = null;
			m_sint32int64_ = null;
			m_uint32int64_ = null;
			m_int64int64_ = null;
			m_sint64int64_ = null;
			m_uint64int64_ = null;
			m_stringint64_ = null;
			m_int32sint64_ = null;
			m_sint32sint64_ = null;
			m_uint32sint64_ = null;
			m_int64sint64_ = null;
			m_sint64sint64_ = null;
			m_uint64sint64_ = null;
			m_stringsint64_ = null;
			m_int32uint64_ = null;
			m_sint32uint64_ = null;
			m_uint32uint64_ = null;
			m_int64uint64_ = null;
			m_sint64uint64_ = null;
			m_uint64uint64_ = null;
			m_stringuint64_ = null;
			m_int32float_ = null;
			m_sint32float_ = null;
			m_uint32float_ = null;
			m_int64float_ = null;
			m_sint64float_ = null;
			m_uint64float_ = null;
			m_stringfloat_ = null;
			m_int32double_ = null;
			m_sint32double_ = null;
			m_uint32double_ = null;
			m_int64double_ = null;
			m_sint64double_ = null;
			m_uint64double_ = null;
			m_stringdouble_ = null;
			m_int32enum_ = null;
			m_sint32enum_ = null;
			m_uint32enum_ = null;
			m_int64enum_ = null;
			m_sint64enum_ = null;
			m_uint64enum_ = null;
			m_stringenum_ = null;
			m_int32string_ = null;
			m_sint32string_ = null;
			m_uint32string_ = null;
			m_int64string_ = null;
			m_sint64string_ = null;
			m_uint64string_ = null;
			m_stringstring_ = null;
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			if (has_m_int32bool()) {
				if (null != m_int32bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_sint32bool()) {
				if (null != m_sint32bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_uint32bool()) {
				if (null != m_uint32bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int64bool()) {
				if (null != m_int64bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_sint64bool()) {
				if (null != m_sint64bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_uint64bool()) {
				if (null != m_uint64bool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64bool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_stringbool()) {
				if (null != m_stringbool_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringbool_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int32int32()) {
				if (null != m_int32int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32int32()) {
				if (null != m_sint32int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_uint32int32()) {
				if (null != m_uint32int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_int64int32()) {
				if (null != m_int64int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint64int32()) {
				if (null != m_sint64int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_uint64int32()) {
				if (null != m_uint64int32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(13, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64int32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_stringint32()) {
				if (null != m_stringint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(14, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_int32sint32()) {
				if (null != m_int32sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(15, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_sint32sint32()) {
				if (null != m_sint32sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(16, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32sint32()) {
				if (null != m_uint32sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(17, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_int64sint32()) {
				if (null != m_int64sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(18, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_sint64sint32()) {
				if (null != m_sint64sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(19, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint64sint32()) {
				if (null != m_uint64sint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(20, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64sint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_stringsint32()) {
				if (null != m_stringsint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(21, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringsint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_int32uint32()) {
				if (null != m_int32uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(22, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_sint32uint32()) {
				if (null != m_sint32uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(23, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_uint32uint32()) {
				if (null != m_uint32uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(24, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64uint32()) {
				if (null != m_int64uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(25, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_sint64uint32()) {
				if (null != m_sint64uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(26, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_uint64uint32()) {
				if (null != m_uint64uint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(27, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64uint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_stringuint32()) {
				if (null != m_stringuint32_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(28, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringuint32_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int32int64()) {
				if (null != m_int32int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(29, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint32int64()) {
				if (null != m_sint32int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(30, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_uint32int64()) {
				if (null != m_uint32int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(31, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_int64int64()) {
				if (null != m_int64int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(32, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64int64()) {
				if (null != m_sint64int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(33, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_uint64int64()) {
				if (null != m_uint64int64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(34, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64int64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_stringint64()) {
				if (null != m_stringint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(35, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_int32sint64()) {
				if (null != m_int32sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(36, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_sint32sint64()) {
				if (null != m_sint32sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(37, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint32sint64()) {
				if (null != m_uint32sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(38, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_int64sint64()) {
				if (null != m_int64sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(39, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_sint64sint64()) {
				if (null != m_sint64sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(40, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64sint64()) {
				if (null != m_uint64sint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(41, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64sint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_stringsint64()) {
				if (null != m_stringsint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(42, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringsint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_int32uint64()) {
				if (null != m_int32uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(43, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_sint32uint64()) {
				if (null != m_sint32uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(44, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_uint32uint64()) {
				if (null != m_uint32uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(45, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_int64uint64()) {
				if (null != m_int64uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(46, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_sint64uint64()) {
				if (null != m_sint64uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(47, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_uint64uint64()) {
				if (null != m_uint64uint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(48, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64uint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_stringuint64()) {
				if (null != m_stringuint64_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(49, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringuint64_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_int32float()) {
				if (null != m_int32float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(50, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_sint32float()) {
				if (null != m_sint32float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(51, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_uint32float()) {
				if (null != m_uint32float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(52, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_int64float()) {
				if (null != m_int64float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(53, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_sint64float()) {
				if (null != m_sint64float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(54, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_uint64float()) {
				if (null != m_uint64float_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(55, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64float_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_stringfloat()) {
				if (null != m_stringfloat_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(56, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringfloat_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_int32double()) {
				if (null != m_int32double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(57, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_sint32double()) {
				if (null != m_sint32double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(58, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_uint32double()) {
				if (null != m_uint32double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(59, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_int64double()) {
				if (null != m_int64double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(60, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_sint64double()) {
				if (null != m_sint64double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(61, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_uint64double()) {
				if (null != m_uint64double_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(62, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64double_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_stringdouble()) {
				if (null != m_stringdouble_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(63, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringdouble_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_int32enum()) {
				if (null != m_int32enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(64, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_sint32enum()) {
				if (null != m_sint32enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(65, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_uint32enum()) {
				if (null != m_uint32enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(66, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_int64enum()) {
				if (null != m_int64enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(67, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_sint64enum()) {
				if (null != m_sint64enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(68, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_uint64enum()) {
				if (null != m_uint64enum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(69, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64enum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_stringenum()) {
				if (null != m_stringenum_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(70, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringenum_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_int32string()) {
				if (null != m_int32string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(71, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int32string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_sint32string()) {
				if (null != m_sint32string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(72, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint32string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_uint32string()) {
				if (null != m_uint32string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(73, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint32string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_int64string()) {
				if (null != m_int64string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(74, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_int64string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_sint64string()) {
				if (null != m_sint64string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(75, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_sint64string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_uint64string()) {
				if (null != m_uint64string_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(76, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_uint64string_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_stringstring()) {
				if (null != m_stringstring_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(77, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_stringstring_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

			if (has_m_int32bool()) {
				if (null != m_int32bool_) {
					common.miniproto.ProtoTool.KeyCode(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_sint32bool()) {
				if (null != m_sint32bool_) {
					common.miniproto.ProtoTool.KeyCode(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_uint32bool()) {
				if (null != m_uint32bool_) {
					common.miniproto.ProtoTool.KeyCode(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int64bool()) {
				if (null != m_int64bool_) {
					common.miniproto.ProtoTool.KeyCode(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_sint64bool()) {
				if (null != m_sint64bool_) {
					common.miniproto.ProtoTool.KeyCode(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_uint64bool()) {
				if (null != m_uint64bool_) {
					common.miniproto.ProtoTool.KeyCode(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_stringbool()) {
				if (null != m_stringbool_) {
					common.miniproto.ProtoTool.KeyCode(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringbool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
				}
			}
			if (has_m_int32int32()) {
				if (null != m_int32int32_) {
					common.miniproto.ProtoTool.KeyCode(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint32int32()) {
				if (null != m_sint32int32_) {
					common.miniproto.ProtoTool.KeyCode(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_uint32int32()) {
				if (null != m_uint32int32_) {
					common.miniproto.ProtoTool.KeyCode(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_int64int32()) {
				if (null != m_int64int32_) {
					common.miniproto.ProtoTool.KeyCode(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_sint64int32()) {
				if (null != m_sint64int32_) {
					common.miniproto.ProtoTool.KeyCode(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_uint64int32()) {
				if (null != m_uint64int32_) {
					common.miniproto.ProtoTool.KeyCode(13, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_stringint32()) {
				if (null != m_stringint32_) {
					common.miniproto.ProtoTool.KeyCode(14, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
				}
			}
			if (has_m_int32sint32()) {
				if (null != m_int32sint32_) {
					common.miniproto.ProtoTool.KeyCode(15, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_sint32sint32()) {
				if (null != m_sint32sint32_) {
					common.miniproto.ProtoTool.KeyCode(16, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint32sint32()) {
				if (null != m_uint32sint32_) {
					common.miniproto.ProtoTool.KeyCode(17, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_int64sint32()) {
				if (null != m_int64sint32_) {
					common.miniproto.ProtoTool.KeyCode(18, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_sint64sint32()) {
				if (null != m_sint64sint32_) {
					common.miniproto.ProtoTool.KeyCode(19, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_uint64sint32()) {
				if (null != m_uint64sint32_) {
					common.miniproto.ProtoTool.KeyCode(20, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_stringsint32()) {
				if (null != m_stringsint32_) {
					common.miniproto.ProtoTool.KeyCode(21, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringsint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
				}
			}
			if (has_m_int32uint32()) {
				if (null != m_int32uint32_) {
					common.miniproto.ProtoTool.KeyCode(22, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_sint32uint32()) {
				if (null != m_sint32uint32_) {
					common.miniproto.ProtoTool.KeyCode(23, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_uint32uint32()) {
				if (null != m_uint32uint32_) {
					common.miniproto.ProtoTool.KeyCode(24, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int64uint32()) {
				if (null != m_int64uint32_) {
					common.miniproto.ProtoTool.KeyCode(25, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_sint64uint32()) {
				if (null != m_sint64uint32_) {
					common.miniproto.ProtoTool.KeyCode(26, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_uint64uint32()) {
				if (null != m_uint64uint32_) {
					common.miniproto.ProtoTool.KeyCode(27, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_stringuint32()) {
				if (null != m_stringuint32_) {
					common.miniproto.ProtoTool.KeyCode(28, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringuint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
				}
			}
			if (has_m_int32int64()) {
				if (null != m_int32int64_) {
					common.miniproto.ProtoTool.KeyCode(29, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint32int64()) {
				if (null != m_sint32int64_) {
					common.miniproto.ProtoTool.KeyCode(30, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_uint32int64()) {
				if (null != m_uint32int64_) {
					common.miniproto.ProtoTool.KeyCode(31, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_int64int64()) {
				if (null != m_int64int64_) {
					common.miniproto.ProtoTool.KeyCode(32, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_sint64int64()) {
				if (null != m_sint64int64_) {
					common.miniproto.ProtoTool.KeyCode(33, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_uint64int64()) {
				if (null != m_uint64int64_) {
					common.miniproto.ProtoTool.KeyCode(34, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_stringint64()) {
				if (null != m_stringint64_) {
					common.miniproto.ProtoTool.KeyCode(35, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
				}
			}
			if (has_m_int32sint64()) {
				if (null != m_int32sint64_) {
					common.miniproto.ProtoTool.KeyCode(36, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_sint32sint64()) {
				if (null != m_sint32sint64_) {
					common.miniproto.ProtoTool.KeyCode(37, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint32sint64()) {
				if (null != m_uint32sint64_) {
					common.miniproto.ProtoTool.KeyCode(38, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_int64sint64()) {
				if (null != m_int64sint64_) {
					common.miniproto.ProtoTool.KeyCode(39, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_sint64sint64()) {
				if (null != m_sint64sint64_) {
					common.miniproto.ProtoTool.KeyCode(40, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_uint64sint64()) {
				if (null != m_uint64sint64_) {
					common.miniproto.ProtoTool.KeyCode(41, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_stringsint64()) {
				if (null != m_stringsint64_) {
					common.miniproto.ProtoTool.KeyCode(42, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringsint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
				}
			}
			if (has_m_int32uint64()) {
				if (null != m_int32uint64_) {
					common.miniproto.ProtoTool.KeyCode(43, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_sint32uint64()) {
				if (null != m_sint32uint64_) {
					common.miniproto.ProtoTool.KeyCode(44, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_uint32uint64()) {
				if (null != m_uint32uint64_) {
					common.miniproto.ProtoTool.KeyCode(45, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_int64uint64()) {
				if (null != m_int64uint64_) {
					common.miniproto.ProtoTool.KeyCode(46, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_sint64uint64()) {
				if (null != m_sint64uint64_) {
					common.miniproto.ProtoTool.KeyCode(47, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_uint64uint64()) {
				if (null != m_uint64uint64_) {
					common.miniproto.ProtoTool.KeyCode(48, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_stringuint64()) {
				if (null != m_stringuint64_) {
					common.miniproto.ProtoTool.KeyCode(49, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringuint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
				}
			}
			if (has_m_int32float()) {
				if (null != m_int32float_) {
					common.miniproto.ProtoTool.KeyCode(50, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_sint32float()) {
				if (null != m_sint32float_) {
					common.miniproto.ProtoTool.KeyCode(51, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_uint32float()) {
				if (null != m_uint32float_) {
					common.miniproto.ProtoTool.KeyCode(52, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_int64float()) {
				if (null != m_int64float_) {
					common.miniproto.ProtoTool.KeyCode(53, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_sint64float()) {
				if (null != m_sint64float_) {
					common.miniproto.ProtoTool.KeyCode(54, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_uint64float()) {
				if (null != m_uint64float_) {
					common.miniproto.ProtoTool.KeyCode(55, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_stringfloat()) {
				if (null != m_stringfloat_) {
					common.miniproto.ProtoTool.KeyCode(56, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringfloat_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
				}
			}
			if (has_m_int32double()) {
				if (null != m_int32double_) {
					common.miniproto.ProtoTool.KeyCode(57, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_sint32double()) {
				if (null != m_sint32double_) {
					common.miniproto.ProtoTool.KeyCode(58, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_uint32double()) {
				if (null != m_uint32double_) {
					common.miniproto.ProtoTool.KeyCode(59, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_int64double()) {
				if (null != m_int64double_) {
					common.miniproto.ProtoTool.KeyCode(60, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_sint64double()) {
				if (null != m_sint64double_) {
					common.miniproto.ProtoTool.KeyCode(61, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_uint64double()) {
				if (null != m_uint64double_) {
					common.miniproto.ProtoTool.KeyCode(62, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_stringdouble()) {
				if (null != m_stringdouble_) {
					common.miniproto.ProtoTool.KeyCode(63, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringdouble_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
				}
			}
			if (has_m_int32enum()) {
				if (null != m_int32enum_) {
					common.miniproto.ProtoTool.KeyCode(64, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_sint32enum()) {
				if (null != m_sint32enum_) {
					common.miniproto.ProtoTool.KeyCode(65, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_uint32enum()) {
				if (null != m_uint32enum_) {
					common.miniproto.ProtoTool.KeyCode(66, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_int64enum()) {
				if (null != m_int64enum_) {
					common.miniproto.ProtoTool.KeyCode(67, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_sint64enum()) {
				if (null != m_sint64enum_) {
					common.miniproto.ProtoTool.KeyCode(68, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_uint64enum()) {
				if (null != m_uint64enum_) {
					common.miniproto.ProtoTool.KeyCode(69, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_stringenum()) {
				if (null != m_stringenum_) {
					common.miniproto.ProtoTool.KeyCode(70, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringenum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
				}
			}
			if (has_m_int32string()) {
				if (null != m_int32string_) {
					common.miniproto.ProtoTool.KeyCode(71, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_sint32string()) {
				if (null != m_sint32string_) {
					common.miniproto.ProtoTool.KeyCode(72, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_uint32string()) {
				if (null != m_uint32string_) {
					common.miniproto.ProtoTool.KeyCode(73, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_int64string()) {
				if (null != m_int64string_) {
					common.miniproto.ProtoTool.KeyCode(74, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_int64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_sint64string()) {
				if (null != m_sint64string_) {
					common.miniproto.ProtoTool.KeyCode(75, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_sint64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_uint64string()) {
				if (null != m_uint64string_) {
					common.miniproto.ProtoTool.KeyCode(76, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_uint64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
			if (has_m_stringstring()) {
				if (null != m_stringstring_) {
					common.miniproto.ProtoTool.KeyCode(77, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_stringstring_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
				}
			}
		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					case 1 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32bool_) {
							m_int32bool_ = new java.util.TreeMap<Integer, Boolean>();
						}
						if (null != m_int32bool_) {
							common.miniproto.ProtoTool.MapDecode(m_int32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_int32bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 2 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32bool_) {
							m_sint32bool_ = new java.util.TreeMap<Integer, Boolean>();
						}
						if (null != m_sint32bool_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_sint32bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 3 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32bool_) {
							m_uint32bool_ = new java.util.TreeMap<Integer, Boolean>();
						}
						if (null != m_uint32bool_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_uint32bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 4 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64bool_) {
							m_int64bool_ = new java.util.TreeMap<Long, Boolean>();
						}
						if (null != m_int64bool_) {
							common.miniproto.ProtoTool.MapDecode(m_int64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_int64bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 5 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64bool_) {
							m_sint64bool_ = new java.util.TreeMap<Long, Boolean>();
						}
						if (null != m_sint64bool_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_sint64bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 6 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64bool_) {
							m_uint64bool_ = new java.util.TreeMap<Long, Boolean>();
						}
						if (null != m_uint64bool_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64bool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_uint64bool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 7 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringbool_) {
							m_stringbool_ = new java.util.TreeMap<String, Boolean>();
						}
						if (null != m_stringbool_) {
							common.miniproto.ProtoTool.MapDecode(m_stringbool_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Bool);
							set_has_m_stringbool();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 8 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32int32_) {
							m_int32int32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_int32int32_) {
							common.miniproto.ProtoTool.MapDecode(m_int32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_int32int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 9 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32int32_) {
							m_sint32int32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_sint32int32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_sint32int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 10 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32int32_) {
							m_uint32int32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_uint32int32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_uint32int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 11 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64int32_) {
							m_int64int32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_int64int32_) {
							common.miniproto.ProtoTool.MapDecode(m_int64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_int64int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 12 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64int32_) {
							m_sint64int32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_sint64int32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_sint64int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 13 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64int32_) {
							m_uint64int32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_uint64int32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64int32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_uint64int32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 14 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringint32_) {
							m_stringint32_ = new java.util.TreeMap<String, Integer>();
						}
						if (null != m_stringint32_) {
							common.miniproto.ProtoTool.MapDecode(m_stringint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32);
							set_has_m_stringint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 15 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32sint32_) {
							m_int32sint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_int32sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_int32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_int32sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 16 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32sint32_) {
							m_sint32sint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_sint32sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_sint32sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 17 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32sint32_) {
							m_uint32sint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_uint32sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_uint32sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 18 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64sint32_) {
							m_int64sint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_int64sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_int64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_int64sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 19 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64sint32_) {
							m_sint64sint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_sint64sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_sint64sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 20 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64sint32_) {
							m_uint64sint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_uint64sint32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64sint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_uint64sint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 21 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringsint32_) {
							m_stringsint32_ = new java.util.TreeMap<String, Integer>();
						}
						if (null != m_stringsint32_) {
							common.miniproto.ProtoTool.MapDecode(m_stringsint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32);
							set_has_m_stringsint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 22 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32uint32_) {
							m_int32uint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_int32uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_int32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_int32uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 23 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32uint32_) {
							m_sint32uint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_sint32uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_sint32uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 24 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32uint32_) {
							m_uint32uint32_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_uint32uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_uint32uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 25 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64uint32_) {
							m_int64uint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_int64uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_int64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_int64uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 26 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64uint32_) {
							m_sint64uint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_sint64uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_sint64uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 27 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64uint32_) {
							m_uint64uint32_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_uint64uint32_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64uint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_uint64uint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 28 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringuint32_) {
							m_stringuint32_ = new java.util.TreeMap<String, Integer>();
						}
						if (null != m_stringuint32_) {
							common.miniproto.ProtoTool.MapDecode(m_stringuint32_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32);
							set_has_m_stringuint32();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 29 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32int64_) {
							m_int32int64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_int32int64_) {
							common.miniproto.ProtoTool.MapDecode(m_int32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_int32int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 30 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32int64_) {
							m_sint32int64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_sint32int64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_sint32int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 31 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32int64_) {
							m_uint32int64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_uint32int64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_uint32int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 32 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64int64_) {
							m_int64int64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_int64int64_) {
							common.miniproto.ProtoTool.MapDecode(m_int64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_int64int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 33 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64int64_) {
							m_sint64int64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_sint64int64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_sint64int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 34 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64int64_) {
							m_uint64int64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_uint64int64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64int64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_uint64int64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 35 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringint64_) {
							m_stringint64_ = new java.util.TreeMap<String, Long>();
						}
						if (null != m_stringint64_) {
							common.miniproto.ProtoTool.MapDecode(m_stringint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64);
							set_has_m_stringint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 36 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32sint64_) {
							m_int32sint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_int32sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_int32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_int32sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 37 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32sint64_) {
							m_sint32sint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_sint32sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_sint32sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 38 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32sint64_) {
							m_uint32sint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_uint32sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_uint32sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 39 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64sint64_) {
							m_int64sint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_int64sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_int64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_int64sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 40 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64sint64_) {
							m_sint64sint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_sint64sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_sint64sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 41 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64sint64_) {
							m_uint64sint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_uint64sint64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64sint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_uint64sint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 42 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringsint64_) {
							m_stringsint64_ = new java.util.TreeMap<String, Long>();
						}
						if (null != m_stringsint64_) {
							common.miniproto.ProtoTool.MapDecode(m_stringsint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64);
							set_has_m_stringsint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 43 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32uint64_) {
							m_int32uint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_int32uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_int32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_int32uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 44 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32uint64_) {
							m_sint32uint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_sint32uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_sint32uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 45 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32uint64_) {
							m_uint32uint64_ = new java.util.TreeMap<Integer, Long>();
						}
						if (null != m_uint32uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_uint32uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 46 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64uint64_) {
							m_int64uint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_int64uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_int64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_int64uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 47 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64uint64_) {
							m_sint64uint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_sint64uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_sint64uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 48 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64uint64_) {
							m_uint64uint64_ = new java.util.TreeMap<Long, Long>();
						}
						if (null != m_uint64uint64_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64uint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_uint64uint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 49 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringuint64_) {
							m_stringuint64_ = new java.util.TreeMap<String, Long>();
						}
						if (null != m_stringuint64_) {
							common.miniproto.ProtoTool.MapDecode(m_stringuint64_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64);
							set_has_m_stringuint64();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 50 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32float_) {
							m_int32float_ = new java.util.TreeMap<Integer, Float>();
						}
						if (null != m_int32float_) {
							common.miniproto.ProtoTool.MapDecode(m_int32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_int32float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 51 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32float_) {
							m_sint32float_ = new java.util.TreeMap<Integer, Float>();
						}
						if (null != m_sint32float_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_sint32float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 52 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32float_) {
							m_uint32float_ = new java.util.TreeMap<Integer, Float>();
						}
						if (null != m_uint32float_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_uint32float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 53 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64float_) {
							m_int64float_ = new java.util.TreeMap<Long, Float>();
						}
						if (null != m_int64float_) {
							common.miniproto.ProtoTool.MapDecode(m_int64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_int64float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 54 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64float_) {
							m_sint64float_ = new java.util.TreeMap<Long, Float>();
						}
						if (null != m_sint64float_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_sint64float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 55 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64float_) {
							m_uint64float_ = new java.util.TreeMap<Long, Float>();
						}
						if (null != m_uint64float_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64float_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_uint64float();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 56 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringfloat_) {
							m_stringfloat_ = new java.util.TreeMap<String, Float>();
						}
						if (null != m_stringfloat_) {
							common.miniproto.ProtoTool.MapDecode(m_stringfloat_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Float);
							set_has_m_stringfloat();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 57 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32double_) {
							m_int32double_ = new java.util.TreeMap<Integer, Double>();
						}
						if (null != m_int32double_) {
							common.miniproto.ProtoTool.MapDecode(m_int32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_int32double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 58 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32double_) {
							m_sint32double_ = new java.util.TreeMap<Integer, Double>();
						}
						if (null != m_sint32double_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_sint32double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 59 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32double_) {
							m_uint32double_ = new java.util.TreeMap<Integer, Double>();
						}
						if (null != m_uint32double_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_uint32double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 60 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64double_) {
							m_int64double_ = new java.util.TreeMap<Long, Double>();
						}
						if (null != m_int64double_) {
							common.miniproto.ProtoTool.MapDecode(m_int64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_int64double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 61 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64double_) {
							m_sint64double_ = new java.util.TreeMap<Long, Double>();
						}
						if (null != m_sint64double_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_sint64double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 62 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64double_) {
							m_uint64double_ = new java.util.TreeMap<Long, Double>();
						}
						if (null != m_uint64double_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64double_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_uint64double();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 63 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringdouble_) {
							m_stringdouble_ = new java.util.TreeMap<String, Double>();
						}
						if (null != m_stringdouble_) {
							common.miniproto.ProtoTool.MapDecode(m_stringdouble_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Double);
							set_has_m_stringdouble();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 64 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32enum_) {
							m_int32enum_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_int32enum_) {
							common.miniproto.ProtoTool.MapDecode(m_int32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_int32enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 65 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32enum_) {
							m_sint32enum_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_sint32enum_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_sint32enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 66 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32enum_) {
							m_uint32enum_ = new java.util.TreeMap<Integer, Integer>();
						}
						if (null != m_uint32enum_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_uint32enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 67 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64enum_) {
							m_int64enum_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_int64enum_) {
							common.miniproto.ProtoTool.MapDecode(m_int64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_int64enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 68 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64enum_) {
							m_sint64enum_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_sint64enum_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_sint64enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 69 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64enum_) {
							m_uint64enum_ = new java.util.TreeMap<Long, Integer>();
						}
						if (null != m_uint64enum_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64enum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_uint64enum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 70 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringenum_) {
							m_stringenum_ = new java.util.TreeMap<String, Integer>();
						}
						if (null != m_stringenum_) {
							common.miniproto.ProtoTool.MapDecode(m_stringenum_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Enum);
							set_has_m_stringenum();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 71 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int32string_) {
							m_int32string_ = new java.util.TreeMap<Integer, String>();
						}
						if (null != m_int32string_) {
							common.miniproto.ProtoTool.MapDecode(m_int32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_int32string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 72 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint32string_) {
							m_sint32string_ = new java.util.TreeMap<Integer, String>();
						}
						if (null != m_sint32string_) {
							common.miniproto.ProtoTool.MapDecode(m_sint32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_sint32string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 73 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint32string_) {
							m_uint32string_ = new java.util.TreeMap<Integer, String>();
						}
						if (null != m_uint32string_) {
							common.miniproto.ProtoTool.MapDecode(m_uint32string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_uint32string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 74 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_int64string_) {
							m_int64string_ = new java.util.TreeMap<Long, String>();
						}
						if (null != m_int64string_) {
							common.miniproto.ProtoTool.MapDecode(m_int64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_int64string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 75 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_sint64string_) {
							m_sint64string_ = new java.util.TreeMap<Long, String>();
						}
						if (null != m_sint64string_) {
							common.miniproto.ProtoTool.MapDecode(m_sint64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_SFixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_sint64string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 76 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_uint64string_) {
							m_uint64string_ = new java.util.TreeMap<Long, String>();
						}
						if (null != m_uint64string_) {
							common.miniproto.ProtoTool.MapDecode(m_uint64string_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Fixed64, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_uint64string();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 77 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_stringstring_) {
							m_stringstring_ = new java.util.TreeMap<String, String>();
						}
						if (null != m_stringstring_) {
							common.miniproto.ProtoTool.MapDecode(m_stringstring_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String, common.miniproto.ProtoDefine.ProtoFieldType.PFT_String);
							set_has_m_stringstring();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					default:
						common.miniproto.ProtoTool.UnknownDecode(type, buf);
					break;
				}
			}
		}

		public void Clear() {

			clear_m_int32bool();
			clear_m_sint32bool();
			clear_m_uint32bool();
			clear_m_int64bool();
			clear_m_sint64bool();
			clear_m_uint64bool();
			clear_m_stringbool();
			clear_m_int32int32();
			clear_m_sint32int32();
			clear_m_uint32int32();
			clear_m_int64int32();
			clear_m_sint64int32();
			clear_m_uint64int32();
			clear_m_stringint32();
			clear_m_int32sint32();
			clear_m_sint32sint32();
			clear_m_uint32sint32();
			clear_m_int64sint32();
			clear_m_sint64sint32();
			clear_m_uint64sint32();
			clear_m_stringsint32();
			clear_m_int32uint32();
			clear_m_sint32uint32();
			clear_m_uint32uint32();
			clear_m_int64uint32();
			clear_m_sint64uint32();
			clear_m_uint64uint32();
			clear_m_stringuint32();
			clear_m_int32int64();
			clear_m_sint32int64();
			clear_m_uint32int64();
			clear_m_int64int64();
			clear_m_sint64int64();
			clear_m_uint64int64();
			clear_m_stringint64();
			clear_m_int32sint64();
			clear_m_sint32sint64();
			clear_m_uint32sint64();
			clear_m_int64sint64();
			clear_m_sint64sint64();
			clear_m_uint64sint64();
			clear_m_stringsint64();
			clear_m_int32uint64();
			clear_m_sint32uint64();
			clear_m_uint32uint64();
			clear_m_int64uint64();
			clear_m_sint64uint64();
			clear_m_uint64uint64();
			clear_m_stringuint64();
			clear_m_int32float();
			clear_m_sint32float();
			clear_m_uint32float();
			clear_m_int64float();
			clear_m_sint64float();
			clear_m_uint64float();
			clear_m_stringfloat();
			clear_m_int32double();
			clear_m_sint32double();
			clear_m_uint32double();
			clear_m_int64double();
			clear_m_sint64double();
			clear_m_uint64double();
			clear_m_stringdouble();
			clear_m_int32enum();
			clear_m_sint32enum();
			clear_m_uint32enum();
			clear_m_int64enum();
			clear_m_sint64enum();
			clear_m_uint64enum();
			clear_m_stringenum();
			clear_m_int32string();
			clear_m_sint32string();
			clear_m_uint32string();
			clear_m_int64string();
			clear_m_sint64string();
			clear_m_uint64string();
			clear_m_stringstring();
		}

		public void Release() {

			release_m_int32bool();
			release_m_sint32bool();
			release_m_uint32bool();
			release_m_int64bool();
			release_m_sint64bool();
			release_m_uint64bool();
			release_m_stringbool();
			release_m_int32int32();
			release_m_sint32int32();
			release_m_uint32int32();
			release_m_int64int32();
			release_m_sint64int32();
			release_m_uint64int32();
			release_m_stringint32();
			release_m_int32sint32();
			release_m_sint32sint32();
			release_m_uint32sint32();
			release_m_int64sint32();
			release_m_sint64sint32();
			release_m_uint64sint32();
			release_m_stringsint32();
			release_m_int32uint32();
			release_m_sint32uint32();
			release_m_uint32uint32();
			release_m_int64uint32();
			release_m_sint64uint32();
			release_m_uint64uint32();
			release_m_stringuint32();
			release_m_int32int64();
			release_m_sint32int64();
			release_m_uint32int64();
			release_m_int64int64();
			release_m_sint64int64();
			release_m_uint64int64();
			release_m_stringint64();
			release_m_int32sint64();
			release_m_sint32sint64();
			release_m_uint32sint64();
			release_m_int64sint64();
			release_m_sint64sint64();
			release_m_uint64sint64();
			release_m_stringsint64();
			release_m_int32uint64();
			release_m_sint32uint64();
			release_m_uint32uint64();
			release_m_int64uint64();
			release_m_sint64uint64();
			release_m_uint64uint64();
			release_m_stringuint64();
			release_m_int32float();
			release_m_sint32float();
			release_m_uint32float();
			release_m_int64float();
			release_m_sint64float();
			release_m_uint64float();
			release_m_stringfloat();
			release_m_int32double();
			release_m_sint32double();
			release_m_uint32double();
			release_m_int64double();
			release_m_sint64double();
			release_m_uint64double();
			release_m_stringdouble();
			release_m_int32enum();
			release_m_sint32enum();
			release_m_uint32enum();
			release_m_int64enum();
			release_m_sint64enum();
			release_m_uint64enum();
			release_m_stringenum();
			release_m_int32string();
			release_m_sint32string();
			release_m_uint32string();
			release_m_int64string();
			release_m_sint64string();
			release_m_uint64string();
			release_m_stringstring();
		}
	};


	public static class MsgTest extends common.miniproto.ProtoBase {

		private common.miniproto.ProtoBitMap m_bits;

		private common.proto1.Proto1.MsgTestSingular m_testsingular_;

		public common.proto1.Proto1.MsgTestSingular get_m_testsingular() {
			if (has_m_testsingular()) {
				return m_testsingular_;
			} else {
				return null;
			}
		}
		public void set_m_testsingular(common.proto1.Proto1.MsgTestSingular value) {
			if (null != value) {
				m_testsingular_ = value;
				set_has_m_testsingular();
			}
		}
		public void clear_m_testsingular() {
			if (has_m_testsingular()) {
				clear_has_m_testsingular();
			}
			if (null != m_testsingular_) {
				m_testsingular_.Clear();
			}
		}
		public void release_m_testsingular() {
			if (has_m_testsingular()) {
				clear_has_m_testsingular();
			}
			if (null != m_testsingular_) {
				m_testsingular_ = null;
			}
		}
		public boolean has_m_testsingular() {
			return m_bits.HasBit(0);
		}
		private void set_has_m_testsingular() {
			m_bits.SetBit(0);
		}
		private void clear_has_m_testsingular() {
			m_bits.ClearBit(0);
		}

		private java.util.ArrayList<common.proto1.Proto1.MsgTestSingular> m_testsingular_array_;

		public int m_testsingular_array_size() {
			if (null != m_testsingular_array_ && has_m_testsingular_array()) {
				return m_testsingular_array_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testsingular_array(java.util.ArrayList<common.proto1.Proto1.MsgTestSingular> value) {
			if (null != value) {
				m_testsingular_array_ = value;
				set_has_m_testsingular_array();
			}
		}
		public java.util.Iterator<common.proto1.Proto1.MsgTestSingular> m_testsingular_array_iterator() {
			if (null != m_testsingular_array_ && has_m_testsingular_array()) {
				return m_testsingular_array_.iterator();
			} else {
				return null;
			}
		}
		public common.proto1.Proto1.MsgTestSingular get_m_testsingular_array(int index) {
			if (null != m_testsingular_array_ && has_m_testsingular_array()) {
				return m_testsingular_array_.get(index);
			} else {
				throw new NullPointerException("has not m_testsingular_array_");
			}
		}
		public void set_m_testsingular_array(int index, common.proto1.Proto1.MsgTestSingular value) {
			if (null == m_testsingular_array_) {
				m_testsingular_array_ = new java.util.ArrayList<common.proto1.Proto1.MsgTestSingular>();
			}
			if (null != m_testsingular_array_ && has_m_testsingular_array() && null != value) {
				m_testsingular_array_.set(index, value);
				set_has_m_testsingular_array();
			}
		}
		public void add_m_testsingular_array(common.proto1.Proto1.MsgTestSingular value) {
			if (null == m_testsingular_array_) {
				m_testsingular_array_ = new java.util.ArrayList<common.proto1.Proto1.MsgTestSingular>();
			}
			if (null != m_testsingular_array_ && null != value) {
				m_testsingular_array_.add(value);
				set_has_m_testsingular_array();
			}
		}
		public void clear_m_testsingular_array() {
			if (has_m_testsingular_array()) {
				clear_has_m_testsingular_array();
			}
			if (m_testsingular_array_ != null) {
				m_testsingular_array_.clear();
			}
		}
		public void release_m_testsingular_array() {
			if (has_m_testsingular_array()) {
				clear_has_m_testsingular_array();
			}
			if (m_testsingular_array_ != null) {
				m_testsingular_array_ = null;
			}
		}
		public boolean has_m_testsingular_array() {
			return m_bits.HasBit(1);
		}
		private void set_has_m_testsingular_array() {
			m_bits.SetBit(1);
		}
		private void clear_has_m_testsingular_array() {
			m_bits.ClearBit(1);
		}

		private java.util.TreeMap<Integer, common.proto1.Proto1.MsgTestSingular> m_testsingular_map_;

		public int m_testsingular_map_size() {
			if (null != m_testsingular_map_ && has_m_testsingular_map()) {
				return m_testsingular_map_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testsingular_map(java.util.TreeMap<Integer, common.proto1.Proto1.MsgTestSingular> value) {
			if (null != value) {
				m_testsingular_map_ = value;
				set_has_m_testsingular_map();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, common.proto1.Proto1.MsgTestSingular>> m_testsingular_map_iterator() {
			if (null != m_testsingular_map_ && has_m_testsingular_map()) {
				return m_testsingular_map_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_testsingular_map(Integer key, common.proto1.Proto1.MsgTestSingular value) {
			if (null == m_testsingular_map_) {
				m_testsingular_map_ = new java.util.TreeMap<Integer, common.proto1.Proto1.MsgTestSingular>();
			}
			if (null != m_testsingular_map_ && null != key && null != value) {
				m_testsingular_map_.put(key, value);
				set_has_m_testsingular_map();
			}
		}
		public common.proto1.Proto1.MsgTestSingular find_m_testsingular_map(Integer key) {
			if (null == m_testsingular_map_ && has_m_testsingular_map() && null != key) {
				return m_testsingular_map_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_testsingular_map(Integer key) {
			if (null != m_testsingular_map_ && has_m_testsingular_map() && null != key) {
				m_testsingular_map_.remove(key);
				if(0 == m_testsingular_map_.size()) {
					clear_has_m_testsingular_map();
				}
			}
		}
		public boolean m_testsingular_map_contains(Integer key) {
			if (null != m_testsingular_map_ && has_m_testsingular_map() && null != key) {
				return m_testsingular_map_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_testsingular_map() {
			if (has_m_testsingular_map()) {
				clear_has_m_testsingular_map();
			}
			if (m_testsingular_map_ != null) {
				m_testsingular_map_.clear();
			}
		}
		public void release_m_testsingular_map() {
			if (has_m_testsingular_map()) {
				clear_has_m_testsingular_map();
			}
			if (m_testsingular_map_ != null) {
				m_testsingular_map_ = null;
			}
		}
		public boolean has_m_testsingular_map() {
			return m_bits.HasBit(2);
		}
		private void set_has_m_testsingular_map() {
			m_bits.SetBit(2);
		}
		private void clear_has_m_testsingular_map() {
			m_bits.ClearBit(2);
		}

		private common.proto2.Proto2.MsgTestArray m_testarray_;

		public common.proto2.Proto2.MsgTestArray get_m_testarray() {
			if (has_m_testarray()) {
				return m_testarray_;
			} else {
				return null;
			}
		}
		public void set_m_testarray(common.proto2.Proto2.MsgTestArray value) {
			if (null != value) {
				m_testarray_ = value;
				set_has_m_testarray();
			}
		}
		public void clear_m_testarray() {
			if (has_m_testarray()) {
				clear_has_m_testarray();
			}
			if (null != m_testarray_) {
				m_testarray_.Clear();
			}
		}
		public void release_m_testarray() {
			if (has_m_testarray()) {
				clear_has_m_testarray();
			}
			if (null != m_testarray_) {
				m_testarray_ = null;
			}
		}
		public boolean has_m_testarray() {
			return m_bits.HasBit(3);
		}
		private void set_has_m_testarray() {
			m_bits.SetBit(3);
		}
		private void clear_has_m_testarray() {
			m_bits.ClearBit(3);
		}

		private java.util.ArrayList<common.proto2.Proto2.MsgTestArray> m_testarray_array_;

		public int m_testarray_array_size() {
			if (null != m_testarray_array_ && has_m_testarray_array()) {
				return m_testarray_array_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testarray_array(java.util.ArrayList<common.proto2.Proto2.MsgTestArray> value) {
			if (null != value) {
				m_testarray_array_ = value;
				set_has_m_testarray_array();
			}
		}
		public java.util.Iterator<common.proto2.Proto2.MsgTestArray> m_testarray_array_iterator() {
			if (null != m_testarray_array_ && has_m_testarray_array()) {
				return m_testarray_array_.iterator();
			} else {
				return null;
			}
		}
		public common.proto2.Proto2.MsgTestArray get_m_testarray_array(int index) {
			if (null != m_testarray_array_ && has_m_testarray_array()) {
				return m_testarray_array_.get(index);
			} else {
				throw new NullPointerException("has not m_testarray_array_");
			}
		}
		public void set_m_testarray_array(int index, common.proto2.Proto2.MsgTestArray value) {
			if (null == m_testarray_array_) {
				m_testarray_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestArray>();
			}
			if (null != m_testarray_array_ && has_m_testarray_array() && null != value) {
				m_testarray_array_.set(index, value);
				set_has_m_testarray_array();
			}
		}
		public void add_m_testarray_array(common.proto2.Proto2.MsgTestArray value) {
			if (null == m_testarray_array_) {
				m_testarray_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestArray>();
			}
			if (null != m_testarray_array_ && null != value) {
				m_testarray_array_.add(value);
				set_has_m_testarray_array();
			}
		}
		public void clear_m_testarray_array() {
			if (has_m_testarray_array()) {
				clear_has_m_testarray_array();
			}
			if (m_testarray_array_ != null) {
				m_testarray_array_.clear();
			}
		}
		public void release_m_testarray_array() {
			if (has_m_testarray_array()) {
				clear_has_m_testarray_array();
			}
			if (m_testarray_array_ != null) {
				m_testarray_array_ = null;
			}
		}
		public boolean has_m_testarray_array() {
			return m_bits.HasBit(4);
		}
		private void set_has_m_testarray_array() {
			m_bits.SetBit(4);
		}
		private void clear_has_m_testarray_array() {
			m_bits.ClearBit(4);
		}

		private java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestArray> m_testarray_map_;

		public int m_testarray_map_size() {
			if (null != m_testarray_map_ && has_m_testarray_map()) {
				return m_testarray_map_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testarray_map(java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestArray> value) {
			if (null != value) {
				m_testarray_map_ = value;
				set_has_m_testarray_map();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, common.proto2.Proto2.MsgTestArray>> m_testarray_map_iterator() {
			if (null != m_testarray_map_ && has_m_testarray_map()) {
				return m_testarray_map_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_testarray_map(Integer key, common.proto2.Proto2.MsgTestArray value) {
			if (null == m_testarray_map_) {
				m_testarray_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestArray>();
			}
			if (null != m_testarray_map_ && null != key && null != value) {
				m_testarray_map_.put(key, value);
				set_has_m_testarray_map();
			}
		}
		public common.proto2.Proto2.MsgTestArray find_m_testarray_map(Integer key) {
			if (null == m_testarray_map_ && has_m_testarray_map() && null != key) {
				return m_testarray_map_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_testarray_map(Integer key) {
			if (null != m_testarray_map_ && has_m_testarray_map() && null != key) {
				m_testarray_map_.remove(key);
				if(0 == m_testarray_map_.size()) {
					clear_has_m_testarray_map();
				}
			}
		}
		public boolean m_testarray_map_contains(Integer key) {
			if (null != m_testarray_map_ && has_m_testarray_map() && null != key) {
				return m_testarray_map_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_testarray_map() {
			if (has_m_testarray_map()) {
				clear_has_m_testarray_map();
			}
			if (m_testarray_map_ != null) {
				m_testarray_map_.clear();
			}
		}
		public void release_m_testarray_map() {
			if (has_m_testarray_map()) {
				clear_has_m_testarray_map();
			}
			if (m_testarray_map_ != null) {
				m_testarray_map_ = null;
			}
		}
		public boolean has_m_testarray_map() {
			return m_bits.HasBit(5);
		}
		private void set_has_m_testarray_map() {
			m_bits.SetBit(5);
		}
		private void clear_has_m_testarray_map() {
			m_bits.ClearBit(5);
		}

		private common.proto2.Proto2.MsgTestSet m_testset_;

		public common.proto2.Proto2.MsgTestSet get_m_testset() {
			if (has_m_testset()) {
				return m_testset_;
			} else {
				return null;
			}
		}
		public void set_m_testset(common.proto2.Proto2.MsgTestSet value) {
			if (null != value) {
				m_testset_ = value;
				set_has_m_testset();
			}
		}
		public void clear_m_testset() {
			if (has_m_testset()) {
				clear_has_m_testset();
			}
			if (null != m_testset_) {
				m_testset_.Clear();
			}
		}
		public void release_m_testset() {
			if (has_m_testset()) {
				clear_has_m_testset();
			}
			if (null != m_testset_) {
				m_testset_ = null;
			}
		}
		public boolean has_m_testset() {
			return m_bits.HasBit(6);
		}
		private void set_has_m_testset() {
			m_bits.SetBit(6);
		}
		private void clear_has_m_testset() {
			m_bits.ClearBit(6);
		}

		private java.util.ArrayList<common.proto2.Proto2.MsgTestSet> m_testset_array_;

		public int m_testset_array_size() {
			if (null != m_testset_array_ && has_m_testset_array()) {
				return m_testset_array_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testset_array(java.util.ArrayList<common.proto2.Proto2.MsgTestSet> value) {
			if (null != value) {
				m_testset_array_ = value;
				set_has_m_testset_array();
			}
		}
		public java.util.Iterator<common.proto2.Proto2.MsgTestSet> m_testset_array_iterator() {
			if (null != m_testset_array_ && has_m_testset_array()) {
				return m_testset_array_.iterator();
			} else {
				return null;
			}
		}
		public common.proto2.Proto2.MsgTestSet get_m_testset_array(int index) {
			if (null != m_testset_array_ && has_m_testset_array()) {
				return m_testset_array_.get(index);
			} else {
				throw new NullPointerException("has not m_testset_array_");
			}
		}
		public void set_m_testset_array(int index, common.proto2.Proto2.MsgTestSet value) {
			if (null == m_testset_array_) {
				m_testset_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestSet>();
			}
			if (null != m_testset_array_ && has_m_testset_array() && null != value) {
				m_testset_array_.set(index, value);
				set_has_m_testset_array();
			}
		}
		public void add_m_testset_array(common.proto2.Proto2.MsgTestSet value) {
			if (null == m_testset_array_) {
				m_testset_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestSet>();
			}
			if (null != m_testset_array_ && null != value) {
				m_testset_array_.add(value);
				set_has_m_testset_array();
			}
		}
		public void clear_m_testset_array() {
			if (has_m_testset_array()) {
				clear_has_m_testset_array();
			}
			if (m_testset_array_ != null) {
				m_testset_array_.clear();
			}
		}
		public void release_m_testset_array() {
			if (has_m_testset_array()) {
				clear_has_m_testset_array();
			}
			if (m_testset_array_ != null) {
				m_testset_array_ = null;
			}
		}
		public boolean has_m_testset_array() {
			return m_bits.HasBit(7);
		}
		private void set_has_m_testset_array() {
			m_bits.SetBit(7);
		}
		private void clear_has_m_testset_array() {
			m_bits.ClearBit(7);
		}

		private java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestSet> m_testset_map_;

		public int m_testset_map_size() {
			if (null != m_testset_map_ && has_m_testset_map()) {
				return m_testset_map_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testset_map(java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestSet> value) {
			if (null != value) {
				m_testset_map_ = value;
				set_has_m_testset_map();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, common.proto2.Proto2.MsgTestSet>> m_testset_map_iterator() {
			if (null != m_testset_map_ && has_m_testset_map()) {
				return m_testset_map_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_testset_map(Integer key, common.proto2.Proto2.MsgTestSet value) {
			if (null == m_testset_map_) {
				m_testset_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestSet>();
			}
			if (null != m_testset_map_ && null != key && null != value) {
				m_testset_map_.put(key, value);
				set_has_m_testset_map();
			}
		}
		public common.proto2.Proto2.MsgTestSet find_m_testset_map(Integer key) {
			if (null == m_testset_map_ && has_m_testset_map() && null != key) {
				return m_testset_map_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_testset_map(Integer key) {
			if (null != m_testset_map_ && has_m_testset_map() && null != key) {
				m_testset_map_.remove(key);
				if(0 == m_testset_map_.size()) {
					clear_has_m_testset_map();
				}
			}
		}
		public boolean m_testset_map_contains(Integer key) {
			if (null != m_testset_map_ && has_m_testset_map() && null != key) {
				return m_testset_map_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_testset_map() {
			if (has_m_testset_map()) {
				clear_has_m_testset_map();
			}
			if (m_testset_map_ != null) {
				m_testset_map_.clear();
			}
		}
		public void release_m_testset_map() {
			if (has_m_testset_map()) {
				clear_has_m_testset_map();
			}
			if (m_testset_map_ != null) {
				m_testset_map_ = null;
			}
		}
		public boolean has_m_testset_map() {
			return m_bits.HasBit(8);
		}
		private void set_has_m_testset_map() {
			m_bits.SetBit(8);
		}
		private void clear_has_m_testset_map() {
			m_bits.ClearBit(8);
		}

		private common.proto2.Proto2.MsgTestMap m_testmap_;

		public common.proto2.Proto2.MsgTestMap get_m_testmap() {
			if (has_m_testmap()) {
				return m_testmap_;
			} else {
				return null;
			}
		}
		public void set_m_testmap(common.proto2.Proto2.MsgTestMap value) {
			if (null != value) {
				m_testmap_ = value;
				set_has_m_testmap();
			}
		}
		public void clear_m_testmap() {
			if (has_m_testmap()) {
				clear_has_m_testmap();
			}
			if (null != m_testmap_) {
				m_testmap_.Clear();
			}
		}
		public void release_m_testmap() {
			if (has_m_testmap()) {
				clear_has_m_testmap();
			}
			if (null != m_testmap_) {
				m_testmap_ = null;
			}
		}
		public boolean has_m_testmap() {
			return m_bits.HasBit(9);
		}
		private void set_has_m_testmap() {
			m_bits.SetBit(9);
		}
		private void clear_has_m_testmap() {
			m_bits.ClearBit(9);
		}

		private java.util.ArrayList<common.proto2.Proto2.MsgTestMap> m_testmap_array_;

		public int m_testmap_array_size() {
			if (null != m_testmap_array_ && has_m_testmap_array()) {
				return m_testmap_array_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testmap_array(java.util.ArrayList<common.proto2.Proto2.MsgTestMap> value) {
			if (null != value) {
				m_testmap_array_ = value;
				set_has_m_testmap_array();
			}
		}
		public java.util.Iterator<common.proto2.Proto2.MsgTestMap> m_testmap_array_iterator() {
			if (null != m_testmap_array_ && has_m_testmap_array()) {
				return m_testmap_array_.iterator();
			} else {
				return null;
			}
		}
		public common.proto2.Proto2.MsgTestMap get_m_testmap_array(int index) {
			if (null != m_testmap_array_ && has_m_testmap_array()) {
				return m_testmap_array_.get(index);
			} else {
				throw new NullPointerException("has not m_testmap_array_");
			}
		}
		public void set_m_testmap_array(int index, common.proto2.Proto2.MsgTestMap value) {
			if (null == m_testmap_array_) {
				m_testmap_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestMap>();
			}
			if (null != m_testmap_array_ && has_m_testmap_array() && null != value) {
				m_testmap_array_.set(index, value);
				set_has_m_testmap_array();
			}
		}
		public void add_m_testmap_array(common.proto2.Proto2.MsgTestMap value) {
			if (null == m_testmap_array_) {
				m_testmap_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestMap>();
			}
			if (null != m_testmap_array_ && null != value) {
				m_testmap_array_.add(value);
				set_has_m_testmap_array();
			}
		}
		public void clear_m_testmap_array() {
			if (has_m_testmap_array()) {
				clear_has_m_testmap_array();
			}
			if (m_testmap_array_ != null) {
				m_testmap_array_.clear();
			}
		}
		public void release_m_testmap_array() {
			if (has_m_testmap_array()) {
				clear_has_m_testmap_array();
			}
			if (m_testmap_array_ != null) {
				m_testmap_array_ = null;
			}
		}
		public boolean has_m_testmap_array() {
			return m_bits.HasBit(10);
		}
		private void set_has_m_testmap_array() {
			m_bits.SetBit(10);
		}
		private void clear_has_m_testmap_array() {
			m_bits.ClearBit(10);
		}

		private java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestMap> m_testmap_map_;

		public int m_testmap_map_size() {
			if (null != m_testmap_map_ && has_m_testmap_map()) {
				return m_testmap_map_.size();
			} else {
				return 0;
			}
		}
		public void set_m_testmap_map(java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestMap> value) {
			if (null != value) {
				m_testmap_map_ = value;
				set_has_m_testmap_map();
			}
		}
		public java.util.Iterator<java.util.Map.Entry<Integer, common.proto2.Proto2.MsgTestMap>> m_testmap_map_iterator() {
			if (null != m_testmap_map_ && has_m_testmap_map()) {
				return m_testmap_map_.entrySet().iterator();
			} else {
				return null;
			}
		}
		public void add_m_testmap_map(Integer key, common.proto2.Proto2.MsgTestMap value) {
			if (null == m_testmap_map_) {
				m_testmap_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestMap>();
			}
			if (null != m_testmap_map_ && null != key && null != value) {
				m_testmap_map_.put(key, value);
				set_has_m_testmap_map();
			}
		}
		public common.proto2.Proto2.MsgTestMap find_m_testmap_map(Integer key) {
			if (null == m_testmap_map_ && has_m_testmap_map() && null != key) {
				return m_testmap_map_.get(key);
			} else {
				return null;
			}
		}
		public void remove_m_testmap_map(Integer key) {
			if (null != m_testmap_map_ && has_m_testmap_map() && null != key) {
				m_testmap_map_.remove(key);
				if(0 == m_testmap_map_.size()) {
					clear_has_m_testmap_map();
				}
			}
		}
		public boolean m_testmap_map_contains(Integer key) {
			if (null != m_testmap_map_ && has_m_testmap_map() && null != key) {
				return m_testmap_map_.containsKey(key);
			} else {
				return false;
			}
		}
		public void clear_m_testmap_map() {
			if (has_m_testmap_map()) {
				clear_has_m_testmap_map();
			}
			if (m_testmap_map_ != null) {
				m_testmap_map_.clear();
			}
		}
		public void release_m_testmap_map() {
			if (has_m_testmap_map()) {
				clear_has_m_testmap_map();
			}
			if (m_testmap_map_ != null) {
				m_testmap_map_ = null;
			}
		}
		public boolean has_m_testmap_map() {
			return m_bits.HasBit(11);
		}
		private void set_has_m_testmap_map() {
			m_bits.SetBit(11);
		}
		private void clear_has_m_testmap_map() {
			m_bits.ClearBit(11);
		}

		public MsgTest() {

			m_bits = new common.miniproto.ProtoBitMap(12);
			m_testsingular_ = null;
			m_testsingular_array_ = null;
			m_testsingular_map_ = null;
			m_testarray_ = null;
			m_testarray_array_ = null;
			m_testarray_map_ = null;
			m_testset_ = null;
			m_testset_array_ = null;
			m_testset_map_ = null;
			m_testmap_ = null;
			m_testmap_array_ = null;
			m_testmap_map_ = null;
		}

		public int ByteSize() throws IOException {

			int bytes = 0;

			if (has_m_testsingular()) {
				if (null != m_testsingular_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MessageByteSize(m_testsingular_);
				}
			}
			if (has_m_testsingular_array()) {
				if (null != m_testsingular_array_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testsingular_array_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testsingular_map()) {
				if (null != m_testsingular_map_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_testsingular_map_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testarray()) {
				if (null != m_testarray_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MessageByteSize(m_testarray_);
				}
			}
			if (has_m_testarray_array()) {
				if (null != m_testarray_array_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testarray_array_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testarray_map()) {
				if (null != m_testarray_map_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_testarray_map_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testset()) {
				if (null != m_testset_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MessageByteSize(m_testset_);
				}
			}
			if (has_m_testset_array()) {
				if (null != m_testset_array_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testset_array_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testset_map()) {
				if (null != m_testset_map_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_testset_map_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testmap()) {
				if (null != m_testmap_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MessageByteSize(m_testmap_);
				}
			}
			if (has_m_testmap_array()) {
				if (null != m_testmap_array_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testmap_array_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testmap_map()) {
				if (null != m_testmap_map_) {
					bytes += common.miniproto.ProtoTool.KeyByteSize(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += common.miniproto.ProtoTool.MapByteSize(m_testmap_map_, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}

			return bytes;
		}

		public void Code(OutputStream buf, int size) throws IOException {

			if (has_m_testsingular()) {
				if (null != m_testsingular_) {
					common.miniproto.ProtoTool.KeyCode(1, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MessageCode(m_testsingular_, buf);
				}
			}
			if (has_m_testsingular_array()) {
				if (null != m_testsingular_array_) {
					common.miniproto.ProtoTool.KeyCode(2, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_testsingular_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testsingular_map()) {
				if (null != m_testsingular_map_) {
					common.miniproto.ProtoTool.KeyCode(3, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_testsingular_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testarray()) {
				if (null != m_testarray_) {
					common.miniproto.ProtoTool.KeyCode(4, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MessageCode(m_testarray_, buf);
				}
			}
			if (has_m_testarray_array()) {
				if (null != m_testarray_array_) {
					common.miniproto.ProtoTool.KeyCode(5, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_testarray_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testarray_map()) {
				if (null != m_testarray_map_) {
					common.miniproto.ProtoTool.KeyCode(6, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_testarray_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testset()) {
				if (null != m_testset_) {
					common.miniproto.ProtoTool.KeyCode(7, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MessageCode(m_testset_, buf);
				}
			}
			if (has_m_testset_array()) {
				if (null != m_testset_array_) {
					common.miniproto.ProtoTool.KeyCode(8, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_testset_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testset_map()) {
				if (null != m_testset_map_) {
					common.miniproto.ProtoTool.KeyCode(9, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_testset_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testmap()) {
				if (null != m_testmap_) {
					common.miniproto.ProtoTool.KeyCode(10, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MessageCode(m_testmap_, buf);
				}
			}
			if (has_m_testmap_array()) {
				if (null != m_testmap_array_) {
					common.miniproto.ProtoTool.KeyCode(11, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.ArrayCode(m_testmap_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
			if (has_m_testmap_map()) {
				if (null != m_testmap_map_) {
					common.miniproto.ProtoTool.KeyCode(12, common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					common.miniproto.ProtoTool.MapCode(m_testmap_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message);
				}
			}
		}

		public void Decode(InputStream buf, int size) throws IOException {

			int oldPos = buf.available();
			while ((oldPos - buf.available()) < size) {
				int key = common.miniproto.ProtoTool.KeyDecode(buf);
				common.miniproto.ProtoDefine.ProtoWireType type = common.miniproto.ProtoDefine.ProtoWireType.valueOf(key & 0x7);
				switch (key) {
					case 1 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_testsingular_ = common.miniproto.ProtoTool.MessageDecode(buf, common.proto1.Proto1.MsgTestSingular.class);
						set_has_m_testsingular();
					}
					break;
					case 2 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testsingular_array_) {
							m_testsingular_array_ = new java.util.ArrayList<common.proto1.Proto1.MsgTestSingular>();
						}
						if (null != m_testsingular_array_) {
							common.miniproto.ProtoTool.ArrayDecode(m_testsingular_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto1.Proto1.MsgTestSingular.class);
							set_has_m_testsingular_array();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 3 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testsingular_map_) {
							m_testsingular_map_ = new java.util.TreeMap<Integer, common.proto1.Proto1.MsgTestSingular>();
						}
						if (null != m_testsingular_map_) {
							common.miniproto.ProtoTool.MapDecode(m_testsingular_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto1.Proto1.MsgTestSingular.class);
							set_has_m_testsingular_map();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 4 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_testarray_ = common.miniproto.ProtoTool.MessageDecode(buf, common.proto2.Proto2.MsgTestArray.class);
						set_has_m_testarray();
					}
					break;
					case 5 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testarray_array_) {
							m_testarray_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestArray>();
						}
						if (null != m_testarray_array_) {
							common.miniproto.ProtoTool.ArrayDecode(m_testarray_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestArray.class);
							set_has_m_testarray_array();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 6 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testarray_map_) {
							m_testarray_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestArray>();
						}
						if (null != m_testarray_map_) {
							common.miniproto.ProtoTool.MapDecode(m_testarray_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestArray.class);
							set_has_m_testarray_map();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 7 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_testset_ = common.miniproto.ProtoTool.MessageDecode(buf, common.proto2.Proto2.MsgTestSet.class);
						set_has_m_testset();
					}
					break;
					case 8 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testset_array_) {
							m_testset_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestSet>();
						}
						if (null != m_testset_array_) {
							common.miniproto.ProtoTool.ArrayDecode(m_testset_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestSet.class);
							set_has_m_testset_array();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 9 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testset_map_) {
							m_testset_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestSet>();
						}
						if (null != m_testset_map_) {
							common.miniproto.ProtoTool.MapDecode(m_testset_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestSet.class);
							set_has_m_testset_map();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 10 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						m_testmap_ = common.miniproto.ProtoTool.MessageDecode(buf, common.proto2.Proto2.MsgTestMap.class);
						set_has_m_testmap();
					}
					break;
					case 11 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testmap_array_) {
							m_testmap_array_ = new java.util.ArrayList<common.proto2.Proto2.MsgTestMap>();
						}
						if (null != m_testmap_array_) {
							common.miniproto.ProtoTool.ArrayDecode(m_testmap_array_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestMap.class);
							set_has_m_testmap_array();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					case 12 << 3 | common.miniproto.ProtoDefine.ProtoWireType.PWT_LengthDelimited_VALUE : {
						if (null == m_testmap_map_) {
							m_testmap_map_ = new java.util.TreeMap<Integer, common.proto2.Proto2.MsgTestMap>();
						}
						if (null != m_testmap_map_) {
							common.miniproto.ProtoTool.MapDecode(m_testmap_map_, buf, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Int32, common.miniproto.ProtoDefine.ProtoFieldType.PFT_Message, common.proto2.Proto2.MsgTestMap.class);
							set_has_m_testmap_map();
						} else {
							common.miniproto.ProtoTool.UnknownDecode(type, buf);
						}
					}
					break;
					default:
						common.miniproto.ProtoTool.UnknownDecode(type, buf);
					break;
				}
			}
		}

		public void Clear() {

			clear_m_testsingular();
			clear_m_testsingular_array();
			clear_m_testsingular_map();
			clear_m_testarray();
			clear_m_testarray_array();
			clear_m_testarray_map();
			clear_m_testset();
			clear_m_testset_array();
			clear_m_testset_map();
			clear_m_testmap();
			clear_m_testmap_array();
			clear_m_testmap_map();
		}

		public void Release() {

			release_m_testsingular();
			release_m_testsingular_array();
			release_m_testsingular_map();
			release_m_testarray();
			release_m_testarray_array();
			release_m_testarray_map();
			release_m_testset();
			release_m_testset_array();
			release_m_testset_map();
			release_m_testmap();
			release_m_testmap_array();
			release_m_testmap_map();
		}
	};


}
