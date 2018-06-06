using System;
using System.IO;
using System.Text;
using System.Collections.Generic;

namespace common {
namespace proto2 {

public enum EnumTest
{
	[System.ComponentModel.Description("EnumTest_1")]
	EnumTest_1 = 1,
	[System.ComponentModel.Description("EnumTest_2")]
	EnumTest_2 = 3,
	[System.ComponentModel.Description("EnumTest_3")]
	EnumTest_3 = 7,
};


public class MsgTestArray : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	private List<bool> m_bool_;
	public List<bool> m_bool
	{
		set
		{
			m_bool_ = value;
			set_has_m_bool();
		}
	}
	public int m_bool_size()
	{
		if (null != m_bool_ && has_m_bool())
		{
			return m_bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<bool>.Enumerator m_bool_enumerator()
	{
		if (null != m_bool_ && has_m_bool())
		{
			return m_bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_bool_");
		}
	}
	public void add_m_bool(bool value)
	{
		if (null == m_bool_)
		{
			m_bool = new List<bool>();
		}
		if (null != m_bool_)
		{
			m_bool_.Add(value);
			set_has_m_bool();
		}
	}
	public bool get_m_bool(int index)
	{
		if (null != m_bool_ && has_m_bool() && index < m_bool_.Count)
		{
			return m_bool_[index];
		}
		else
		{
			return default(bool);
		}
	}
	public void set_m_bool(int index, bool value)
	{
		if (null == m_bool_)
		{
			m_bool = new List<bool>();
		}
		if (null != m_bool_ && has_m_bool() && index < m_bool_.Count)
		{
			m_bool_[index] = value;
			set_has_m_bool();
		}
	}
	public void clear_m_bool()
	{
		if (has_m_bool())
		{
			clear_has_m_bool();
		}
		if (m_bool_ != null)
		{
			m_bool_.Clear();
		}
	}
	public void release_m_bool()
	{
		if (has_m_bool())
		{
			clear_has_m_bool();
		}
		if (m_bool_ != null)
		{
			m_bool_ = null;
		}
	}
	public bool has_m_bool()
	{
		return m_bits.HasBit(0);
	}
	private void set_has_m_bool()
	{
		m_bits.SetBit(0);
	}
	private void clear_has_m_bool()
	{
		m_bits.ClearBit(0);
	}

	private List<int> m_int32_;
	public List<int> m_int32
	{
		set
		{
			m_int32_ = value;
			set_has_m_int32();
		}
	}
	public int m_int32_size()
	{
		if (null != m_int32_ && has_m_int32())
		{
			return m_int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<int>.Enumerator m_int32_enumerator()
	{
		if (null != m_int32_ && has_m_int32())
		{
			return m_int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32_");
		}
	}
	public void add_m_int32(int value)
	{
		if (null == m_int32_)
		{
			m_int32 = new List<int>();
		}
		if (null != m_int32_)
		{
			m_int32_.Add(value);
			set_has_m_int32();
		}
	}
	public int get_m_int32(int index)
	{
		if (null != m_int32_ && has_m_int32() && index < m_int32_.Count)
		{
			return m_int32_[index];
		}
		else
		{
			return default(int);
		}
	}
	public void set_m_int32(int index, int value)
	{
		if (null == m_int32_)
		{
			m_int32 = new List<int>();
		}
		if (null != m_int32_ && has_m_int32() && index < m_int32_.Count)
		{
			m_int32_[index] = value;
			set_has_m_int32();
		}
	}
	public void clear_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
		}
		if (m_int32_ != null)
		{
			m_int32_.Clear();
		}
	}
	public void release_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
		}
		if (m_int32_ != null)
		{
			m_int32_ = null;
		}
	}
	public bool has_m_int32()
	{
		return m_bits.HasBit(1);
	}
	private void set_has_m_int32()
	{
		m_bits.SetBit(1);
	}
	private void clear_has_m_int32()
	{
		m_bits.ClearBit(1);
	}

	private List<int> m_sint32_;
	public List<int> m_sint32
	{
		set
		{
			m_sint32_ = value;
			set_has_m_sint32();
		}
	}
	public int m_sint32_size()
	{
		if (null != m_sint32_ && has_m_sint32())
		{
			return m_sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<int>.Enumerator m_sint32_enumerator()
	{
		if (null != m_sint32_ && has_m_sint32())
		{
			return m_sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32_");
		}
	}
	public void add_m_sint32(int value)
	{
		if (null == m_sint32_)
		{
			m_sint32 = new List<int>();
		}
		if (null != m_sint32_)
		{
			m_sint32_.Add(value);
			set_has_m_sint32();
		}
	}
	public int get_m_sint32(int index)
	{
		if (null != m_sint32_ && has_m_sint32() && index < m_sint32_.Count)
		{
			return m_sint32_[index];
		}
		else
		{
			return default(int);
		}
	}
	public void set_m_sint32(int index, int value)
	{
		if (null == m_sint32_)
		{
			m_sint32 = new List<int>();
		}
		if (null != m_sint32_ && has_m_sint32() && index < m_sint32_.Count)
		{
			m_sint32_[index] = value;
			set_has_m_sint32();
		}
	}
	public void clear_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
		}
		if (m_sint32_ != null)
		{
			m_sint32_.Clear();
		}
	}
	public void release_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
		}
		if (m_sint32_ != null)
		{
			m_sint32_ = null;
		}
	}
	public bool has_m_sint32()
	{
		return m_bits.HasBit(2);
	}
	private void set_has_m_sint32()
	{
		m_bits.SetBit(2);
	}
	private void clear_has_m_sint32()
	{
		m_bits.ClearBit(2);
	}

	private List<uint> m_uint32_;
	public List<uint> m_uint32
	{
		set
		{
			m_uint32_ = value;
			set_has_m_uint32();
		}
	}
	public int m_uint32_size()
	{
		if (null != m_uint32_ && has_m_uint32())
		{
			return m_uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<uint>.Enumerator m_uint32_enumerator()
	{
		if (null != m_uint32_ && has_m_uint32())
		{
			return m_uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32_");
		}
	}
	public void add_m_uint32(uint value)
	{
		if (null == m_uint32_)
		{
			m_uint32 = new List<uint>();
		}
		if (null != m_uint32_)
		{
			m_uint32_.Add(value);
			set_has_m_uint32();
		}
	}
	public uint get_m_uint32(int index)
	{
		if (null != m_uint32_ && has_m_uint32() && index < m_uint32_.Count)
		{
			return m_uint32_[index];
		}
		else
		{
			return default(uint);
		}
	}
	public void set_m_uint32(int index, uint value)
	{
		if (null == m_uint32_)
		{
			m_uint32 = new List<uint>();
		}
		if (null != m_uint32_ && has_m_uint32() && index < m_uint32_.Count)
		{
			m_uint32_[index] = value;
			set_has_m_uint32();
		}
	}
	public void clear_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
		}
		if (m_uint32_ != null)
		{
			m_uint32_.Clear();
		}
	}
	public void release_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
		}
		if (m_uint32_ != null)
		{
			m_uint32_ = null;
		}
	}
	public bool has_m_uint32()
	{
		return m_bits.HasBit(3);
	}
	private void set_has_m_uint32()
	{
		m_bits.SetBit(3);
	}
	private void clear_has_m_uint32()
	{
		m_bits.ClearBit(3);
	}

	private List<long> m_int64_;
	public List<long> m_int64
	{
		set
		{
			m_int64_ = value;
			set_has_m_int64();
		}
	}
	public int m_int64_size()
	{
		if (null != m_int64_ && has_m_int64())
		{
			return m_int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<long>.Enumerator m_int64_enumerator()
	{
		if (null != m_int64_ && has_m_int64())
		{
			return m_int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64_");
		}
	}
	public void add_m_int64(long value)
	{
		if (null == m_int64_)
		{
			m_int64 = new List<long>();
		}
		if (null != m_int64_)
		{
			m_int64_.Add(value);
			set_has_m_int64();
		}
	}
	public long get_m_int64(int index)
	{
		if (null != m_int64_ && has_m_int64() && index < m_int64_.Count)
		{
			return m_int64_[index];
		}
		else
		{
			return default(long);
		}
	}
	public void set_m_int64(int index, long value)
	{
		if (null == m_int64_)
		{
			m_int64 = new List<long>();
		}
		if (null != m_int64_ && has_m_int64() && index < m_int64_.Count)
		{
			m_int64_[index] = value;
			set_has_m_int64();
		}
	}
	public void clear_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
		}
		if (m_int64_ != null)
		{
			m_int64_.Clear();
		}
	}
	public void release_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
		}
		if (m_int64_ != null)
		{
			m_int64_ = null;
		}
	}
	public bool has_m_int64()
	{
		return m_bits.HasBit(4);
	}
	private void set_has_m_int64()
	{
		m_bits.SetBit(4);
	}
	private void clear_has_m_int64()
	{
		m_bits.ClearBit(4);
	}

	private List<long> m_sint64_;
	public List<long> m_sint64
	{
		set
		{
			m_sint64_ = value;
			set_has_m_sint64();
		}
	}
	public int m_sint64_size()
	{
		if (null != m_sint64_ && has_m_sint64())
		{
			return m_sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<long>.Enumerator m_sint64_enumerator()
	{
		if (null != m_sint64_ && has_m_sint64())
		{
			return m_sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64_");
		}
	}
	public void add_m_sint64(long value)
	{
		if (null == m_sint64_)
		{
			m_sint64 = new List<long>();
		}
		if (null != m_sint64_)
		{
			m_sint64_.Add(value);
			set_has_m_sint64();
		}
	}
	public long get_m_sint64(int index)
	{
		if (null != m_sint64_ && has_m_sint64() && index < m_sint64_.Count)
		{
			return m_sint64_[index];
		}
		else
		{
			return default(long);
		}
	}
	public void set_m_sint64(int index, long value)
	{
		if (null == m_sint64_)
		{
			m_sint64 = new List<long>();
		}
		if (null != m_sint64_ && has_m_sint64() && index < m_sint64_.Count)
		{
			m_sint64_[index] = value;
			set_has_m_sint64();
		}
	}
	public void clear_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
		}
		if (m_sint64_ != null)
		{
			m_sint64_.Clear();
		}
	}
	public void release_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
		}
		if (m_sint64_ != null)
		{
			m_sint64_ = null;
		}
	}
	public bool has_m_sint64()
	{
		return m_bits.HasBit(5);
	}
	private void set_has_m_sint64()
	{
		m_bits.SetBit(5);
	}
	private void clear_has_m_sint64()
	{
		m_bits.ClearBit(5);
	}

	private List<ulong> m_uint64_;
	public List<ulong> m_uint64
	{
		set
		{
			m_uint64_ = value;
			set_has_m_uint64();
		}
	}
	public int m_uint64_size()
	{
		if (null != m_uint64_ && has_m_uint64())
		{
			return m_uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<ulong>.Enumerator m_uint64_enumerator()
	{
		if (null != m_uint64_ && has_m_uint64())
		{
			return m_uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64_");
		}
	}
	public void add_m_uint64(ulong value)
	{
		if (null == m_uint64_)
		{
			m_uint64 = new List<ulong>();
		}
		if (null != m_uint64_)
		{
			m_uint64_.Add(value);
			set_has_m_uint64();
		}
	}
	public ulong get_m_uint64(int index)
	{
		if (null != m_uint64_ && has_m_uint64() && index < m_uint64_.Count)
		{
			return m_uint64_[index];
		}
		else
		{
			return default(ulong);
		}
	}
	public void set_m_uint64(int index, ulong value)
	{
		if (null == m_uint64_)
		{
			m_uint64 = new List<ulong>();
		}
		if (null != m_uint64_ && has_m_uint64() && index < m_uint64_.Count)
		{
			m_uint64_[index] = value;
			set_has_m_uint64();
		}
	}
	public void clear_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
		}
		if (m_uint64_ != null)
		{
			m_uint64_.Clear();
		}
	}
	public void release_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
		}
		if (m_uint64_ != null)
		{
			m_uint64_ = null;
		}
	}
	public bool has_m_uint64()
	{
		return m_bits.HasBit(6);
	}
	private void set_has_m_uint64()
	{
		m_bits.SetBit(6);
	}
	private void clear_has_m_uint64()
	{
		m_bits.ClearBit(6);
	}

	private List<float> m_float_;
	public List<float> m_float
	{
		set
		{
			m_float_ = value;
			set_has_m_float();
		}
	}
	public int m_float_size()
	{
		if (null != m_float_ && has_m_float())
		{
			return m_float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<float>.Enumerator m_float_enumerator()
	{
		if (null != m_float_ && has_m_float())
		{
			return m_float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_float_");
		}
	}
	public void add_m_float(float value)
	{
		if (null == m_float_)
		{
			m_float = new List<float>();
		}
		if (null != m_float_)
		{
			m_float_.Add(value);
			set_has_m_float();
		}
	}
	public float get_m_float(int index)
	{
		if (null != m_float_ && has_m_float() && index < m_float_.Count)
		{
			return m_float_[index];
		}
		else
		{
			return default(float);
		}
	}
	public void set_m_float(int index, float value)
	{
		if (null == m_float_)
		{
			m_float = new List<float>();
		}
		if (null != m_float_ && has_m_float() && index < m_float_.Count)
		{
			m_float_[index] = value;
			set_has_m_float();
		}
	}
	public void clear_m_float()
	{
		if (has_m_float())
		{
			clear_has_m_float();
		}
		if (m_float_ != null)
		{
			m_float_.Clear();
		}
	}
	public void release_m_float()
	{
		if (has_m_float())
		{
			clear_has_m_float();
		}
		if (m_float_ != null)
		{
			m_float_ = null;
		}
	}
	public bool has_m_float()
	{
		return m_bits.HasBit(7);
	}
	private void set_has_m_float()
	{
		m_bits.SetBit(7);
	}
	private void clear_has_m_float()
	{
		m_bits.ClearBit(7);
	}

	private List<double> m_double_;
	public List<double> m_double
	{
		set
		{
			m_double_ = value;
			set_has_m_double();
		}
	}
	public int m_double_size()
	{
		if (null != m_double_ && has_m_double())
		{
			return m_double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<double>.Enumerator m_double_enumerator()
	{
		if (null != m_double_ && has_m_double())
		{
			return m_double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_double_");
		}
	}
	public void add_m_double(double value)
	{
		if (null == m_double_)
		{
			m_double = new List<double>();
		}
		if (null != m_double_)
		{
			m_double_.Add(value);
			set_has_m_double();
		}
	}
	public double get_m_double(int index)
	{
		if (null != m_double_ && has_m_double() && index < m_double_.Count)
		{
			return m_double_[index];
		}
		else
		{
			return default(double);
		}
	}
	public void set_m_double(int index, double value)
	{
		if (null == m_double_)
		{
			m_double = new List<double>();
		}
		if (null != m_double_ && has_m_double() && index < m_double_.Count)
		{
			m_double_[index] = value;
			set_has_m_double();
		}
	}
	public void clear_m_double()
	{
		if (has_m_double())
		{
			clear_has_m_double();
		}
		if (m_double_ != null)
		{
			m_double_.Clear();
		}
	}
	public void release_m_double()
	{
		if (has_m_double())
		{
			clear_has_m_double();
		}
		if (m_double_ != null)
		{
			m_double_ = null;
		}
	}
	public bool has_m_double()
	{
		return m_bits.HasBit(8);
	}
	private void set_has_m_double()
	{
		m_bits.SetBit(8);
	}
	private void clear_has_m_double()
	{
		m_bits.ClearBit(8);
	}

	private List<common.proto1.EnumTest> m_enum_;
	public List<common.proto1.EnumTest> m_enum
	{
		set
		{
			m_enum_ = value;
			set_has_m_enum();
		}
	}
	public int m_enum_size()
	{
		if (null != m_enum_ && has_m_enum())
		{
			return m_enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<common.proto1.EnumTest>.Enumerator m_enum_enumerator()
	{
		if (null != m_enum_ && has_m_enum())
		{
			return m_enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_enum_");
		}
	}
	public void add_m_enum(common.proto1.EnumTest value)
	{
		if (null == m_enum_)
		{
			m_enum = new List<common.proto1.EnumTest>();
		}
		if (null != m_enum_)
		{
			m_enum_.Add(value);
			set_has_m_enum();
		}
	}
	public common.proto1.EnumTest get_m_enum(int index)
	{
		if (null != m_enum_ && has_m_enum() && index < m_enum_.Count)
		{
			return m_enum_[index];
		}
		else
		{
			return default(common.proto1.EnumTest);
		}
	}
	public void set_m_enum(int index, common.proto1.EnumTest value)
	{
		if (null == m_enum_)
		{
			m_enum = new List<common.proto1.EnumTest>();
		}
		if (null != m_enum_ && has_m_enum() && index < m_enum_.Count)
		{
			m_enum_[index] = value;
			set_has_m_enum();
		}
	}
	public void clear_m_enum()
	{
		if (has_m_enum())
		{
			clear_has_m_enum();
		}
		if (m_enum_ != null)
		{
			m_enum_.Clear();
		}
	}
	public void release_m_enum()
	{
		if (has_m_enum())
		{
			clear_has_m_enum();
		}
		if (m_enum_ != null)
		{
			m_enum_ = null;
		}
	}
	public bool has_m_enum()
	{
		return m_bits.HasBit(9);
	}
	private void set_has_m_enum()
	{
		m_bits.SetBit(9);
	}
	private void clear_has_m_enum()
	{
		m_bits.ClearBit(9);
	}

	private List<string> m_string_;
	public List<string> m_string
	{
		set
		{
			m_string_ = value;
			set_has_m_string();
		}
	}
	public int m_string_size()
	{
		if (null != m_string_ && has_m_string())
		{
			return m_string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<string>.Enumerator m_string_enumerator()
	{
		if (null != m_string_ && has_m_string())
		{
			return m_string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_string_");
		}
	}
	public void add_m_string(string value)
	{
		if (null == m_string_)
		{
			m_string = new List<string>();
		}
		if (null != m_string_)
		{
			m_string_.Add(value);
			set_has_m_string();
		}
	}
	public string get_m_string(int index)
	{
		if (null != m_string_ && has_m_string() && index < m_string_.Count)
		{
			return m_string_[index];
		}
		else
		{
			return default(string);
		}
	}
	public void set_m_string(int index, string value)
	{
		if (null == m_string_)
		{
			m_string = new List<string>();
		}
		if (null != m_string_ && has_m_string() && index < m_string_.Count)
		{
			m_string_[index] = value;
			set_has_m_string();
		}
	}
	public void clear_m_string()
	{
		if (has_m_string())
		{
			clear_has_m_string();
		}
		if (m_string_ != null)
		{
			m_string_.Clear();
		}
	}
	public void release_m_string()
	{
		if (has_m_string())
		{
			clear_has_m_string();
		}
		if (m_string_ != null)
		{
			m_string_ = null;
		}
	}
	public bool has_m_string()
	{
		return m_bits.HasBit(10);
	}
	private void set_has_m_string()
	{
		m_bits.SetBit(10);
	}
	private void clear_has_m_string()
	{
		m_bits.ClearBit(10);
	}

	public MsgTestArray()
	{
		m_bits = new common.miniproto.ProtoBitMap(11);
		m_bool_ = default(List<bool>);
		m_int32_ = default(List<int>);
		m_sint32_ = default(List<int>);
		m_uint32_ = default(List<uint>);
		m_int64_ = default(List<long>);
		m_sint64_ = default(List<long>);
		m_uint64_ = default(List<ulong>);
		m_float_ = default(List<float>);
		m_double_ = default(List<double>);
		m_enum_ = default(List<common.proto1.EnumTest>);
		m_string_ = default(List<string>);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		if (has_m_bool())
		{
			if (null != m_bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_bool_, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int32())
		{
			if (null != m_int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_int32_, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32())
		{
			if (null != m_sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_sint32_, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32())
		{
			if (null != m_uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_uint32_, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64())
		{
			if (null != m_int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_int64_, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64())
		{
			if (null != m_sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_sint64_, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64())
		{
			if (null != m_uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_uint64_, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_float())
		{
			if (null != m_float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_float_, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_double())
		{
			if (null != m_double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_double_, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_enum())
		{
			if (null != m_enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_enum_, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_string_, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		if (has_m_bool())
		{
			if (null != m_bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_bool_, buf, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int32())
		{
			if (null != m_int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32())
		{
			if (null != m_sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32())
		{
			if (null != m_uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64())
		{
			if (null != m_int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64())
		{
			if (null != m_sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64())
		{
			if (null != m_uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_float())
		{
			if (null != m_float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_float_, buf, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_double())
		{
			if (null != m_double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_double_, buf, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_enum())
		{
			if (null != m_enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_enum_, buf, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_string_, buf, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Decode(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		uint num = 0;
		uint type = (uint)common.miniproto.ProtoWireType.PWT_Unknown;
		while (bytes < size)
		{
			bytes += common.miniproto.ProtoTool.KeyDecode(ref num, ref type, buf);
			switch (num << 3 | type)
			{
				case 1 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_bool_)
					{
						m_bool_ = new List<bool>();
					}
					if (null != m_bool_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_bool_, buf, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 2 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32_)
					{
						m_int32_ = new List<int>();
					}
					if (null != m_int32_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 3 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32_)
					{
						m_sint32_ = new List<int>();
					}
					if (null != m_sint32_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 4 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32_)
					{
						m_uint32_ = new List<uint>();
					}
					if (null != m_uint32_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 5 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64_)
					{
						m_int64_ = new List<long>();
					}
					if (null != m_int64_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 6 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64_)
					{
						m_sint64_ = new List<long>();
					}
					if (null != m_sint64_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 7 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64_)
					{
						m_uint64_ = new List<ulong>();
					}
					if (null != m_uint64_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 8 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_float_)
					{
						m_float_ = new List<float>();
					}
					if (null != m_float_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_float_, buf, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 9 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_double_)
					{
						m_double_ = new List<double>();
					}
					if (null != m_double_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_double_, buf, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 10 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_enum_)
					{
						m_enum_ = new List<common.proto1.EnumTest>();
					}
					if (null != m_enum_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_enum_, buf, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 11 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_string_)
					{
						m_string_ = new List<string>();
					}
					if (null != m_string_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_string_, buf, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				default:
				bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
				break;
			}
		}
		
		return bytes;
	}

	public override void Clear()
	{
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

	public override void Release()
	{
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


public class MsgTestSet : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	private SortedSet<int> m_int32_;
	public SortedSet<int> m_int32
	{
		set
		{
			m_int32_ = value;
			set_has_m_int32();
		}
	}
	public int m_int32_size()
	{
		if (null != m_int32_ && has_m_int32())
		{
			return m_int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public SortedSet<int>.Enumerator m_int32_enumerator()
	{
		if (null != m_int32_ && has_m_int32())
		{
			return m_int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32_");
		}
	}
	public void add_m_int32(int value)
	{
		if (null == m_int32_)
		{
			m_int32 = new SortedSet<int>();
		}
		if (null != m_int32_)
		{
			m_int32_.Add(value);
			set_has_m_int32();
		}
	}
	public void remove_m_int32(int value)
	{
		if (null != m_int32_)
		{
			m_int32_.Remove(value);
			if(0 == m_int32_.Count)
			{
				clear_has_m_int32();
			}
		}
	}
	public bool m_int32_contains(int value)
	{
		if (null != m_int32_ && has_m_int32())
		{
			return m_int32_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
		}
		if (m_int32_ != null)
		{
			m_int32_.Clear();
		}
	}
	public void release_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
		}
		if (m_int32_ != null)
		{
			m_int32_ = null;
		}
	}
	public bool has_m_int32()
	{
		return m_bits.HasBit(0);
	}
	private void set_has_m_int32()
	{
		m_bits.SetBit(0);
	}
	private void clear_has_m_int32()
	{
		m_bits.ClearBit(0);
	}

	private HashSet<int> m_sint32_;
	public HashSet<int> m_sint32
	{
		set
		{
			m_sint32_ = value;
			set_has_m_sint32();
		}
	}
	public int m_sint32_size()
	{
		if (null != m_sint32_ && has_m_sint32())
		{
			return m_sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public HashSet<int>.Enumerator m_sint32_enumerator()
	{
		if (null != m_sint32_ && has_m_sint32())
		{
			return m_sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32_");
		}
	}
	public void add_m_sint32(int value)
	{
		if (null == m_sint32_)
		{
			m_sint32 = new HashSet<int>();
		}
		if (null != m_sint32_)
		{
			m_sint32_.Add(value);
			set_has_m_sint32();
		}
	}
	public void remove_m_sint32(int value)
	{
		if (null != m_sint32_)
		{
			m_sint32_.Remove(value);
			if(0 == m_sint32_.Count)
			{
				clear_has_m_sint32();
			}
		}
	}
	public bool m_sint32_contains(int value)
	{
		if (null != m_sint32_ && has_m_sint32())
		{
			return m_sint32_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
		}
		if (m_sint32_ != null)
		{
			m_sint32_.Clear();
		}
	}
	public void release_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
		}
		if (m_sint32_ != null)
		{
			m_sint32_ = null;
		}
	}
	public bool has_m_sint32()
	{
		return m_bits.HasBit(1);
	}
	private void set_has_m_sint32()
	{
		m_bits.SetBit(1);
	}
	private void clear_has_m_sint32()
	{
		m_bits.ClearBit(1);
	}

	private SortedSet<uint> m_uint32_;
	public SortedSet<uint> m_uint32
	{
		set
		{
			m_uint32_ = value;
			set_has_m_uint32();
		}
	}
	public int m_uint32_size()
	{
		if (null != m_uint32_ && has_m_uint32())
		{
			return m_uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public SortedSet<uint>.Enumerator m_uint32_enumerator()
	{
		if (null != m_uint32_ && has_m_uint32())
		{
			return m_uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32_");
		}
	}
	public void add_m_uint32(uint value)
	{
		if (null == m_uint32_)
		{
			m_uint32 = new SortedSet<uint>();
		}
		if (null != m_uint32_)
		{
			m_uint32_.Add(value);
			set_has_m_uint32();
		}
	}
	public void remove_m_uint32(uint value)
	{
		if (null != m_uint32_)
		{
			m_uint32_.Remove(value);
			if(0 == m_uint32_.Count)
			{
				clear_has_m_uint32();
			}
		}
	}
	public bool m_uint32_contains(uint value)
	{
		if (null != m_uint32_ && has_m_uint32())
		{
			return m_uint32_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
		}
		if (m_uint32_ != null)
		{
			m_uint32_.Clear();
		}
	}
	public void release_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
		}
		if (m_uint32_ != null)
		{
			m_uint32_ = null;
		}
	}
	public bool has_m_uint32()
	{
		return m_bits.HasBit(2);
	}
	private void set_has_m_uint32()
	{
		m_bits.SetBit(2);
	}
	private void clear_has_m_uint32()
	{
		m_bits.ClearBit(2);
	}

	private SortedSet<long> m_int64_;
	public SortedSet<long> m_int64
	{
		set
		{
			m_int64_ = value;
			set_has_m_int64();
		}
	}
	public int m_int64_size()
	{
		if (null != m_int64_ && has_m_int64())
		{
			return m_int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public SortedSet<long>.Enumerator m_int64_enumerator()
	{
		if (null != m_int64_ && has_m_int64())
		{
			return m_int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64_");
		}
	}
	public void add_m_int64(long value)
	{
		if (null == m_int64_)
		{
			m_int64 = new SortedSet<long>();
		}
		if (null != m_int64_)
		{
			m_int64_.Add(value);
			set_has_m_int64();
		}
	}
	public void remove_m_int64(long value)
	{
		if (null != m_int64_)
		{
			m_int64_.Remove(value);
			if(0 == m_int64_.Count)
			{
				clear_has_m_int64();
			}
		}
	}
	public bool m_int64_contains(long value)
	{
		if (null != m_int64_ && has_m_int64())
		{
			return m_int64_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
		}
		if (m_int64_ != null)
		{
			m_int64_.Clear();
		}
	}
	public void release_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
		}
		if (m_int64_ != null)
		{
			m_int64_ = null;
		}
	}
	public bool has_m_int64()
	{
		return m_bits.HasBit(3);
	}
	private void set_has_m_int64()
	{
		m_bits.SetBit(3);
	}
	private void clear_has_m_int64()
	{
		m_bits.ClearBit(3);
	}

	private HashSet<long> m_sint64_;
	public HashSet<long> m_sint64
	{
		set
		{
			m_sint64_ = value;
			set_has_m_sint64();
		}
	}
	public int m_sint64_size()
	{
		if (null != m_sint64_ && has_m_sint64())
		{
			return m_sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public HashSet<long>.Enumerator m_sint64_enumerator()
	{
		if (null != m_sint64_ && has_m_sint64())
		{
			return m_sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64_");
		}
	}
	public void add_m_sint64(long value)
	{
		if (null == m_sint64_)
		{
			m_sint64 = new HashSet<long>();
		}
		if (null != m_sint64_)
		{
			m_sint64_.Add(value);
			set_has_m_sint64();
		}
	}
	public void remove_m_sint64(long value)
	{
		if (null != m_sint64_)
		{
			m_sint64_.Remove(value);
			if(0 == m_sint64_.Count)
			{
				clear_has_m_sint64();
			}
		}
	}
	public bool m_sint64_contains(long value)
	{
		if (null != m_sint64_ && has_m_sint64())
		{
			return m_sint64_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
		}
		if (m_sint64_ != null)
		{
			m_sint64_.Clear();
		}
	}
	public void release_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
		}
		if (m_sint64_ != null)
		{
			m_sint64_ = null;
		}
	}
	public bool has_m_sint64()
	{
		return m_bits.HasBit(4);
	}
	private void set_has_m_sint64()
	{
		m_bits.SetBit(4);
	}
	private void clear_has_m_sint64()
	{
		m_bits.ClearBit(4);
	}

	private SortedSet<ulong> m_uint64_;
	public SortedSet<ulong> m_uint64
	{
		set
		{
			m_uint64_ = value;
			set_has_m_uint64();
		}
	}
	public int m_uint64_size()
	{
		if (null != m_uint64_ && has_m_uint64())
		{
			return m_uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public SortedSet<ulong>.Enumerator m_uint64_enumerator()
	{
		if (null != m_uint64_ && has_m_uint64())
		{
			return m_uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64_");
		}
	}
	public void add_m_uint64(ulong value)
	{
		if (null == m_uint64_)
		{
			m_uint64 = new SortedSet<ulong>();
		}
		if (null != m_uint64_)
		{
			m_uint64_.Add(value);
			set_has_m_uint64();
		}
	}
	public void remove_m_uint64(ulong value)
	{
		if (null != m_uint64_)
		{
			m_uint64_.Remove(value);
			if(0 == m_uint64_.Count)
			{
				clear_has_m_uint64();
			}
		}
	}
	public bool m_uint64_contains(ulong value)
	{
		if (null != m_uint64_ && has_m_uint64())
		{
			return m_uint64_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
		}
		if (m_uint64_ != null)
		{
			m_uint64_.Clear();
		}
	}
	public void release_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
		}
		if (m_uint64_ != null)
		{
			m_uint64_ = null;
		}
	}
	public bool has_m_uint64()
	{
		return m_bits.HasBit(5);
	}
	private void set_has_m_uint64()
	{
		m_bits.SetBit(5);
	}
	private void clear_has_m_uint64()
	{
		m_bits.ClearBit(5);
	}

	private HashSet<string> m_string_;
	public HashSet<string> m_string
	{
		set
		{
			m_string_ = value;
			set_has_m_string();
		}
	}
	public int m_string_size()
	{
		if (null != m_string_ && has_m_string())
		{
			return m_string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public HashSet<string>.Enumerator m_string_enumerator()
	{
		if (null != m_string_ && has_m_string())
		{
			return m_string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_string_");
		}
	}
	public void add_m_string(string value)
	{
		if (null == m_string_)
		{
			m_string = new HashSet<string>();
		}
		if (null != m_string_)
		{
			m_string_.Add(value);
			set_has_m_string();
		}
	}
	public void remove_m_string(string value)
	{
		if (null != m_string_)
		{
			m_string_.Remove(value);
			if(0 == m_string_.Count)
			{
				clear_has_m_string();
			}
		}
	}
	public bool m_string_contains(string value)
	{
		if (null != m_string_ && has_m_string())
		{
			return m_string_.Contains(value);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_string()
	{
		if (has_m_string())
		{
			clear_has_m_string();
		}
		if (m_string_ != null)
		{
			m_string_.Clear();
		}
	}
	public void release_m_string()
	{
		if (has_m_string())
		{
			clear_has_m_string();
		}
		if (m_string_ != null)
		{
			m_string_ = null;
		}
	}
	public bool has_m_string()
	{
		return m_bits.HasBit(6);
	}
	private void set_has_m_string()
	{
		m_bits.SetBit(6);
	}
	private void clear_has_m_string()
	{
		m_bits.ClearBit(6);
	}

	public MsgTestSet()
	{
		m_bits = new common.miniproto.ProtoBitMap(7);
		m_int32_ = default(SortedSet<int>);
		m_sint32_ = default(HashSet<int>);
		m_uint32_ = default(SortedSet<uint>);
		m_int64_ = default(SortedSet<long>);
		m_sint64_ = default(HashSet<long>);
		m_uint64_ = default(SortedSet<ulong>);
		m_string_ = default(HashSet<string>);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		if (has_m_int32())
		{
			if (null != m_int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_int32_, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32())
		{
			if (null != m_sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_sint32_, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32())
		{
			if (null != m_uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_uint32_, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64())
		{
			if (null != m_int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_int64_, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64())
		{
			if (null != m_sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_sint64_, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64())
		{
			if (null != m_uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_uint64_, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.SetByteSize(m_string_, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		if (has_m_int32())
		{
			if (null != m_int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32())
		{
			if (null != m_sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32())
		{
			if (null != m_uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64())
		{
			if (null != m_int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64())
		{
			if (null != m_sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64())
		{
			if (null != m_uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.SetCode(m_string_, buf, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Decode(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		uint num = 0;
		uint type = (uint)common.miniproto.ProtoWireType.PWT_Unknown;
		while (bytes < size)
		{
			bytes += common.miniproto.ProtoTool.KeyDecode(ref num, ref type, buf);
			switch (num << 3 | type)
			{
				case 1 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32_)
					{
						m_int32_ = new SortedSet<int>();
					}
					if (null != m_int32_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 2 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32_)
					{
						m_sint32_ = new HashSet<int>();
					}
					if (null != m_sint32_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 3 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32_)
					{
						m_uint32_ = new SortedSet<uint>();
					}
					if (null != m_uint32_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 4 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64_)
					{
						m_int64_ = new SortedSet<long>();
					}
					if (null != m_int64_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 5 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64_)
					{
						m_sint64_ = new HashSet<long>();
					}
					if (null != m_sint64_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 6 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64_)
					{
						m_uint64_ = new SortedSet<ulong>();
					}
					if (null != m_uint64_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 7 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_string_)
					{
						m_string_ = new HashSet<string>();
					}
					if (null != m_string_)
					{
						bytes += common.miniproto.ProtoTool.SetDecode(m_string_, buf, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				default:
				bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
				break;
			}
		}
		
		return bytes;
	}

	public override void Clear()
	{
		clear_m_int32();
		clear_m_sint32();
		clear_m_uint32();
		clear_m_int64();
		clear_m_sint64();
		clear_m_uint64();
		clear_m_string();
	}

	public override void Release()
	{
		release_m_int32();
		release_m_sint32();
		release_m_uint32();
		release_m_int64();
		release_m_sint64();
		release_m_uint64();
		release_m_string();
	}
};


public class MsgTestMap : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	private Dictionary<int, bool> m_int32bool_;
	public Dictionary<int, bool> m_int32bool
	{
		set
		{
			m_int32bool_ = value;
			set_has_m_int32bool();
		}
	}
	public int m_int32bool_size()
	{
		if (null != m_int32bool_ && has_m_int32bool())
		{
			return m_int32bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, bool>.Enumerator m_int32bool_enumerator()
	{
		if (null != m_int32bool_ && has_m_int32bool())
		{
			return m_int32bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32bool_");
		}
	}
	public void add_m_int32bool(int key, bool value)
	{
		if (null == m_int32bool_)
		{
			m_int32bool = new Dictionary<int, bool>();
		}
		if (null != m_int32bool_)
		{
			m_int32bool_.Add(key, value);
			set_has_m_int32bool();
		}
	}
	public bool find_m_int32bool(int key)
	{
		if (null != m_int32bool_ && has_m_int32bool())
		{
			return m_int32bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32bool(int key)
	{
		if (null != m_int32bool_)
		{
			m_int32bool_.Remove(key);
			if(0 == m_int32bool_.Count)
			{
				clear_has_m_int32bool();
			}
		}
	}
	public bool m_int32bool_contains(int key)
	{
		if (null != m_int32bool_ && has_m_int32bool())
		{
			return m_int32bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32bool()
	{
		if (has_m_int32bool())
		{
			clear_has_m_int32bool();
		}
		if (m_int32bool_ != null)
		{
			m_int32bool_.Clear();
		}
	}
	public void release_m_int32bool()
	{
		if (has_m_int32bool())
		{
			clear_has_m_int32bool();
		}
		if (m_int32bool_ != null)
		{
			m_int32bool_ = null;
		}
	}
	public bool has_m_int32bool()
	{
		return m_bits.HasBit(0);
	}
	private void set_has_m_int32bool()
	{
		m_bits.SetBit(0);
	}
	private void clear_has_m_int32bool()
	{
		m_bits.ClearBit(0);
	}

	private Dictionary<int, bool> m_sint32bool_;
	public Dictionary<int, bool> m_sint32bool
	{
		set
		{
			m_sint32bool_ = value;
			set_has_m_sint32bool();
		}
	}
	public int m_sint32bool_size()
	{
		if (null != m_sint32bool_ && has_m_sint32bool())
		{
			return m_sint32bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, bool>.Enumerator m_sint32bool_enumerator()
	{
		if (null != m_sint32bool_ && has_m_sint32bool())
		{
			return m_sint32bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32bool_");
		}
	}
	public void add_m_sint32bool(int key, bool value)
	{
		if (null == m_sint32bool_)
		{
			m_sint32bool = new Dictionary<int, bool>();
		}
		if (null != m_sint32bool_)
		{
			m_sint32bool_.Add(key, value);
			set_has_m_sint32bool();
		}
	}
	public bool find_m_sint32bool(int key)
	{
		if (null != m_sint32bool_ && has_m_sint32bool())
		{
			return m_sint32bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32bool(int key)
	{
		if (null != m_sint32bool_)
		{
			m_sint32bool_.Remove(key);
			if(0 == m_sint32bool_.Count)
			{
				clear_has_m_sint32bool();
			}
		}
	}
	public bool m_sint32bool_contains(int key)
	{
		if (null != m_sint32bool_ && has_m_sint32bool())
		{
			return m_sint32bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32bool()
	{
		if (has_m_sint32bool())
		{
			clear_has_m_sint32bool();
		}
		if (m_sint32bool_ != null)
		{
			m_sint32bool_.Clear();
		}
	}
	public void release_m_sint32bool()
	{
		if (has_m_sint32bool())
		{
			clear_has_m_sint32bool();
		}
		if (m_sint32bool_ != null)
		{
			m_sint32bool_ = null;
		}
	}
	public bool has_m_sint32bool()
	{
		return m_bits.HasBit(1);
	}
	private void set_has_m_sint32bool()
	{
		m_bits.SetBit(1);
	}
	private void clear_has_m_sint32bool()
	{
		m_bits.ClearBit(1);
	}

	private Dictionary<uint, bool> m_uint32bool_;
	public Dictionary<uint, bool> m_uint32bool
	{
		set
		{
			m_uint32bool_ = value;
			set_has_m_uint32bool();
		}
	}
	public int m_uint32bool_size()
	{
		if (null != m_uint32bool_ && has_m_uint32bool())
		{
			return m_uint32bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, bool>.Enumerator m_uint32bool_enumerator()
	{
		if (null != m_uint32bool_ && has_m_uint32bool())
		{
			return m_uint32bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32bool_");
		}
	}
	public void add_m_uint32bool(uint key, bool value)
	{
		if (null == m_uint32bool_)
		{
			m_uint32bool = new Dictionary<uint, bool>();
		}
		if (null != m_uint32bool_)
		{
			m_uint32bool_.Add(key, value);
			set_has_m_uint32bool();
		}
	}
	public bool find_m_uint32bool(uint key)
	{
		if (null != m_uint32bool_ && has_m_uint32bool())
		{
			return m_uint32bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32bool(uint key)
	{
		if (null != m_uint32bool_)
		{
			m_uint32bool_.Remove(key);
			if(0 == m_uint32bool_.Count)
			{
				clear_has_m_uint32bool();
			}
		}
	}
	public bool m_uint32bool_contains(uint key)
	{
		if (null != m_uint32bool_ && has_m_uint32bool())
		{
			return m_uint32bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32bool()
	{
		if (has_m_uint32bool())
		{
			clear_has_m_uint32bool();
		}
		if (m_uint32bool_ != null)
		{
			m_uint32bool_.Clear();
		}
	}
	public void release_m_uint32bool()
	{
		if (has_m_uint32bool())
		{
			clear_has_m_uint32bool();
		}
		if (m_uint32bool_ != null)
		{
			m_uint32bool_ = null;
		}
	}
	public bool has_m_uint32bool()
	{
		return m_bits.HasBit(2);
	}
	private void set_has_m_uint32bool()
	{
		m_bits.SetBit(2);
	}
	private void clear_has_m_uint32bool()
	{
		m_bits.ClearBit(2);
	}

	private Dictionary<long, bool> m_int64bool_;
	public Dictionary<long, bool> m_int64bool
	{
		set
		{
			m_int64bool_ = value;
			set_has_m_int64bool();
		}
	}
	public int m_int64bool_size()
	{
		if (null != m_int64bool_ && has_m_int64bool())
		{
			return m_int64bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, bool>.Enumerator m_int64bool_enumerator()
	{
		if (null != m_int64bool_ && has_m_int64bool())
		{
			return m_int64bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64bool_");
		}
	}
	public void add_m_int64bool(long key, bool value)
	{
		if (null == m_int64bool_)
		{
			m_int64bool = new Dictionary<long, bool>();
		}
		if (null != m_int64bool_)
		{
			m_int64bool_.Add(key, value);
			set_has_m_int64bool();
		}
	}
	public bool find_m_int64bool(long key)
	{
		if (null != m_int64bool_ && has_m_int64bool())
		{
			return m_int64bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64bool(long key)
	{
		if (null != m_int64bool_)
		{
			m_int64bool_.Remove(key);
			if(0 == m_int64bool_.Count)
			{
				clear_has_m_int64bool();
			}
		}
	}
	public bool m_int64bool_contains(long key)
	{
		if (null != m_int64bool_ && has_m_int64bool())
		{
			return m_int64bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64bool()
	{
		if (has_m_int64bool())
		{
			clear_has_m_int64bool();
		}
		if (m_int64bool_ != null)
		{
			m_int64bool_.Clear();
		}
	}
	public void release_m_int64bool()
	{
		if (has_m_int64bool())
		{
			clear_has_m_int64bool();
		}
		if (m_int64bool_ != null)
		{
			m_int64bool_ = null;
		}
	}
	public bool has_m_int64bool()
	{
		return m_bits.HasBit(3);
	}
	private void set_has_m_int64bool()
	{
		m_bits.SetBit(3);
	}
	private void clear_has_m_int64bool()
	{
		m_bits.ClearBit(3);
	}

	private Dictionary<long, bool> m_sint64bool_;
	public Dictionary<long, bool> m_sint64bool
	{
		set
		{
			m_sint64bool_ = value;
			set_has_m_sint64bool();
		}
	}
	public int m_sint64bool_size()
	{
		if (null != m_sint64bool_ && has_m_sint64bool())
		{
			return m_sint64bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, bool>.Enumerator m_sint64bool_enumerator()
	{
		if (null != m_sint64bool_ && has_m_sint64bool())
		{
			return m_sint64bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64bool_");
		}
	}
	public void add_m_sint64bool(long key, bool value)
	{
		if (null == m_sint64bool_)
		{
			m_sint64bool = new Dictionary<long, bool>();
		}
		if (null != m_sint64bool_)
		{
			m_sint64bool_.Add(key, value);
			set_has_m_sint64bool();
		}
	}
	public bool find_m_sint64bool(long key)
	{
		if (null != m_sint64bool_ && has_m_sint64bool())
		{
			return m_sint64bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64bool(long key)
	{
		if (null != m_sint64bool_)
		{
			m_sint64bool_.Remove(key);
			if(0 == m_sint64bool_.Count)
			{
				clear_has_m_sint64bool();
			}
		}
	}
	public bool m_sint64bool_contains(long key)
	{
		if (null != m_sint64bool_ && has_m_sint64bool())
		{
			return m_sint64bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64bool()
	{
		if (has_m_sint64bool())
		{
			clear_has_m_sint64bool();
		}
		if (m_sint64bool_ != null)
		{
			m_sint64bool_.Clear();
		}
	}
	public void release_m_sint64bool()
	{
		if (has_m_sint64bool())
		{
			clear_has_m_sint64bool();
		}
		if (m_sint64bool_ != null)
		{
			m_sint64bool_ = null;
		}
	}
	public bool has_m_sint64bool()
	{
		return m_bits.HasBit(4);
	}
	private void set_has_m_sint64bool()
	{
		m_bits.SetBit(4);
	}
	private void clear_has_m_sint64bool()
	{
		m_bits.ClearBit(4);
	}

	private Dictionary<ulong, bool> m_uint64bool_;
	public Dictionary<ulong, bool> m_uint64bool
	{
		set
		{
			m_uint64bool_ = value;
			set_has_m_uint64bool();
		}
	}
	public int m_uint64bool_size()
	{
		if (null != m_uint64bool_ && has_m_uint64bool())
		{
			return m_uint64bool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, bool>.Enumerator m_uint64bool_enumerator()
	{
		if (null != m_uint64bool_ && has_m_uint64bool())
		{
			return m_uint64bool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64bool_");
		}
	}
	public void add_m_uint64bool(ulong key, bool value)
	{
		if (null == m_uint64bool_)
		{
			m_uint64bool = new Dictionary<ulong, bool>();
		}
		if (null != m_uint64bool_)
		{
			m_uint64bool_.Add(key, value);
			set_has_m_uint64bool();
		}
	}
	public bool find_m_uint64bool(ulong key)
	{
		if (null != m_uint64bool_ && has_m_uint64bool())
		{
			return m_uint64bool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64bool(ulong key)
	{
		if (null != m_uint64bool_)
		{
			m_uint64bool_.Remove(key);
			if(0 == m_uint64bool_.Count)
			{
				clear_has_m_uint64bool();
			}
		}
	}
	public bool m_uint64bool_contains(ulong key)
	{
		if (null != m_uint64bool_ && has_m_uint64bool())
		{
			return m_uint64bool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64bool()
	{
		if (has_m_uint64bool())
		{
			clear_has_m_uint64bool();
		}
		if (m_uint64bool_ != null)
		{
			m_uint64bool_.Clear();
		}
	}
	public void release_m_uint64bool()
	{
		if (has_m_uint64bool())
		{
			clear_has_m_uint64bool();
		}
		if (m_uint64bool_ != null)
		{
			m_uint64bool_ = null;
		}
	}
	public bool has_m_uint64bool()
	{
		return m_bits.HasBit(5);
	}
	private void set_has_m_uint64bool()
	{
		m_bits.SetBit(5);
	}
	private void clear_has_m_uint64bool()
	{
		m_bits.ClearBit(5);
	}

	private Dictionary<string, bool> m_stringbool_;
	public Dictionary<string, bool> m_stringbool
	{
		set
		{
			m_stringbool_ = value;
			set_has_m_stringbool();
		}
	}
	public int m_stringbool_size()
	{
		if (null != m_stringbool_ && has_m_stringbool())
		{
			return m_stringbool_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, bool>.Enumerator m_stringbool_enumerator()
	{
		if (null != m_stringbool_ && has_m_stringbool())
		{
			return m_stringbool_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringbool_");
		}
	}
	public void add_m_stringbool(string key, bool value)
	{
		if (null == m_stringbool_)
		{
			m_stringbool = new Dictionary<string, bool>();
		}
		if (null != m_stringbool_)
		{
			m_stringbool_.Add(key, value);
			set_has_m_stringbool();
		}
	}
	public bool find_m_stringbool(string key)
	{
		if (null != m_stringbool_ && has_m_stringbool())
		{
			return m_stringbool_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringbool(string key)
	{
		if (null != m_stringbool_)
		{
			m_stringbool_.Remove(key);
			if(0 == m_stringbool_.Count)
			{
				clear_has_m_stringbool();
			}
		}
	}
	public bool m_stringbool_contains(string key)
	{
		if (null != m_stringbool_ && has_m_stringbool())
		{
			return m_stringbool_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringbool()
	{
		if (has_m_stringbool())
		{
			clear_has_m_stringbool();
		}
		if (m_stringbool_ != null)
		{
			m_stringbool_.Clear();
		}
	}
	public void release_m_stringbool()
	{
		if (has_m_stringbool())
		{
			clear_has_m_stringbool();
		}
		if (m_stringbool_ != null)
		{
			m_stringbool_ = null;
		}
	}
	public bool has_m_stringbool()
	{
		return m_bits.HasBit(6);
	}
	private void set_has_m_stringbool()
	{
		m_bits.SetBit(6);
	}
	private void clear_has_m_stringbool()
	{
		m_bits.ClearBit(6);
	}

	private Dictionary<int, int> m_int32int32_;
	public Dictionary<int, int> m_int32int32
	{
		set
		{
			m_int32int32_ = value;
			set_has_m_int32int32();
		}
	}
	public int m_int32int32_size()
	{
		if (null != m_int32int32_ && has_m_int32int32())
		{
			return m_int32int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, int>.Enumerator m_int32int32_enumerator()
	{
		if (null != m_int32int32_ && has_m_int32int32())
		{
			return m_int32int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32int32_");
		}
	}
	public void add_m_int32int32(int key, int value)
	{
		if (null == m_int32int32_)
		{
			m_int32int32 = new Dictionary<int, int>();
		}
		if (null != m_int32int32_)
		{
			m_int32int32_.Add(key, value);
			set_has_m_int32int32();
		}
	}
	public int find_m_int32int32(int key)
	{
		if (null != m_int32int32_ && has_m_int32int32())
		{
			return m_int32int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32int32(int key)
	{
		if (null != m_int32int32_)
		{
			m_int32int32_.Remove(key);
			if(0 == m_int32int32_.Count)
			{
				clear_has_m_int32int32();
			}
		}
	}
	public bool m_int32int32_contains(int key)
	{
		if (null != m_int32int32_ && has_m_int32int32())
		{
			return m_int32int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32int32()
	{
		if (has_m_int32int32())
		{
			clear_has_m_int32int32();
		}
		if (m_int32int32_ != null)
		{
			m_int32int32_.Clear();
		}
	}
	public void release_m_int32int32()
	{
		if (has_m_int32int32())
		{
			clear_has_m_int32int32();
		}
		if (m_int32int32_ != null)
		{
			m_int32int32_ = null;
		}
	}
	public bool has_m_int32int32()
	{
		return m_bits.HasBit(7);
	}
	private void set_has_m_int32int32()
	{
		m_bits.SetBit(7);
	}
	private void clear_has_m_int32int32()
	{
		m_bits.ClearBit(7);
	}

	private Dictionary<int, int> m_sint32int32_;
	public Dictionary<int, int> m_sint32int32
	{
		set
		{
			m_sint32int32_ = value;
			set_has_m_sint32int32();
		}
	}
	public int m_sint32int32_size()
	{
		if (null != m_sint32int32_ && has_m_sint32int32())
		{
			return m_sint32int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, int>.Enumerator m_sint32int32_enumerator()
	{
		if (null != m_sint32int32_ && has_m_sint32int32())
		{
			return m_sint32int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32int32_");
		}
	}
	public void add_m_sint32int32(int key, int value)
	{
		if (null == m_sint32int32_)
		{
			m_sint32int32 = new Dictionary<int, int>();
		}
		if (null != m_sint32int32_)
		{
			m_sint32int32_.Add(key, value);
			set_has_m_sint32int32();
		}
	}
	public int find_m_sint32int32(int key)
	{
		if (null != m_sint32int32_ && has_m_sint32int32())
		{
			return m_sint32int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32int32(int key)
	{
		if (null != m_sint32int32_)
		{
			m_sint32int32_.Remove(key);
			if(0 == m_sint32int32_.Count)
			{
				clear_has_m_sint32int32();
			}
		}
	}
	public bool m_sint32int32_contains(int key)
	{
		if (null != m_sint32int32_ && has_m_sint32int32())
		{
			return m_sint32int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32int32()
	{
		if (has_m_sint32int32())
		{
			clear_has_m_sint32int32();
		}
		if (m_sint32int32_ != null)
		{
			m_sint32int32_.Clear();
		}
	}
	public void release_m_sint32int32()
	{
		if (has_m_sint32int32())
		{
			clear_has_m_sint32int32();
		}
		if (m_sint32int32_ != null)
		{
			m_sint32int32_ = null;
		}
	}
	public bool has_m_sint32int32()
	{
		return m_bits.HasBit(8);
	}
	private void set_has_m_sint32int32()
	{
		m_bits.SetBit(8);
	}
	private void clear_has_m_sint32int32()
	{
		m_bits.ClearBit(8);
	}

	private Dictionary<uint, int> m_uint32int32_;
	public Dictionary<uint, int> m_uint32int32
	{
		set
		{
			m_uint32int32_ = value;
			set_has_m_uint32int32();
		}
	}
	public int m_uint32int32_size()
	{
		if (null != m_uint32int32_ && has_m_uint32int32())
		{
			return m_uint32int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, int>.Enumerator m_uint32int32_enumerator()
	{
		if (null != m_uint32int32_ && has_m_uint32int32())
		{
			return m_uint32int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32int32_");
		}
	}
	public void add_m_uint32int32(uint key, int value)
	{
		if (null == m_uint32int32_)
		{
			m_uint32int32 = new Dictionary<uint, int>();
		}
		if (null != m_uint32int32_)
		{
			m_uint32int32_.Add(key, value);
			set_has_m_uint32int32();
		}
	}
	public int find_m_uint32int32(uint key)
	{
		if (null != m_uint32int32_ && has_m_uint32int32())
		{
			return m_uint32int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32int32(uint key)
	{
		if (null != m_uint32int32_)
		{
			m_uint32int32_.Remove(key);
			if(0 == m_uint32int32_.Count)
			{
				clear_has_m_uint32int32();
			}
		}
	}
	public bool m_uint32int32_contains(uint key)
	{
		if (null != m_uint32int32_ && has_m_uint32int32())
		{
			return m_uint32int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32int32()
	{
		if (has_m_uint32int32())
		{
			clear_has_m_uint32int32();
		}
		if (m_uint32int32_ != null)
		{
			m_uint32int32_.Clear();
		}
	}
	public void release_m_uint32int32()
	{
		if (has_m_uint32int32())
		{
			clear_has_m_uint32int32();
		}
		if (m_uint32int32_ != null)
		{
			m_uint32int32_ = null;
		}
	}
	public bool has_m_uint32int32()
	{
		return m_bits.HasBit(9);
	}
	private void set_has_m_uint32int32()
	{
		m_bits.SetBit(9);
	}
	private void clear_has_m_uint32int32()
	{
		m_bits.ClearBit(9);
	}

	private Dictionary<long, int> m_int64int32_;
	public Dictionary<long, int> m_int64int32
	{
		set
		{
			m_int64int32_ = value;
			set_has_m_int64int32();
		}
	}
	public int m_int64int32_size()
	{
		if (null != m_int64int32_ && has_m_int64int32())
		{
			return m_int64int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, int>.Enumerator m_int64int32_enumerator()
	{
		if (null != m_int64int32_ && has_m_int64int32())
		{
			return m_int64int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64int32_");
		}
	}
	public void add_m_int64int32(long key, int value)
	{
		if (null == m_int64int32_)
		{
			m_int64int32 = new Dictionary<long, int>();
		}
		if (null != m_int64int32_)
		{
			m_int64int32_.Add(key, value);
			set_has_m_int64int32();
		}
	}
	public int find_m_int64int32(long key)
	{
		if (null != m_int64int32_ && has_m_int64int32())
		{
			return m_int64int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64int32(long key)
	{
		if (null != m_int64int32_)
		{
			m_int64int32_.Remove(key);
			if(0 == m_int64int32_.Count)
			{
				clear_has_m_int64int32();
			}
		}
	}
	public bool m_int64int32_contains(long key)
	{
		if (null != m_int64int32_ && has_m_int64int32())
		{
			return m_int64int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64int32()
	{
		if (has_m_int64int32())
		{
			clear_has_m_int64int32();
		}
		if (m_int64int32_ != null)
		{
			m_int64int32_.Clear();
		}
	}
	public void release_m_int64int32()
	{
		if (has_m_int64int32())
		{
			clear_has_m_int64int32();
		}
		if (m_int64int32_ != null)
		{
			m_int64int32_ = null;
		}
	}
	public bool has_m_int64int32()
	{
		return m_bits.HasBit(10);
	}
	private void set_has_m_int64int32()
	{
		m_bits.SetBit(10);
	}
	private void clear_has_m_int64int32()
	{
		m_bits.ClearBit(10);
	}

	private Dictionary<long, int> m_sint64int32_;
	public Dictionary<long, int> m_sint64int32
	{
		set
		{
			m_sint64int32_ = value;
			set_has_m_sint64int32();
		}
	}
	public int m_sint64int32_size()
	{
		if (null != m_sint64int32_ && has_m_sint64int32())
		{
			return m_sint64int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, int>.Enumerator m_sint64int32_enumerator()
	{
		if (null != m_sint64int32_ && has_m_sint64int32())
		{
			return m_sint64int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64int32_");
		}
	}
	public void add_m_sint64int32(long key, int value)
	{
		if (null == m_sint64int32_)
		{
			m_sint64int32 = new Dictionary<long, int>();
		}
		if (null != m_sint64int32_)
		{
			m_sint64int32_.Add(key, value);
			set_has_m_sint64int32();
		}
	}
	public int find_m_sint64int32(long key)
	{
		if (null != m_sint64int32_ && has_m_sint64int32())
		{
			return m_sint64int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64int32(long key)
	{
		if (null != m_sint64int32_)
		{
			m_sint64int32_.Remove(key);
			if(0 == m_sint64int32_.Count)
			{
				clear_has_m_sint64int32();
			}
		}
	}
	public bool m_sint64int32_contains(long key)
	{
		if (null != m_sint64int32_ && has_m_sint64int32())
		{
			return m_sint64int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64int32()
	{
		if (has_m_sint64int32())
		{
			clear_has_m_sint64int32();
		}
		if (m_sint64int32_ != null)
		{
			m_sint64int32_.Clear();
		}
	}
	public void release_m_sint64int32()
	{
		if (has_m_sint64int32())
		{
			clear_has_m_sint64int32();
		}
		if (m_sint64int32_ != null)
		{
			m_sint64int32_ = null;
		}
	}
	public bool has_m_sint64int32()
	{
		return m_bits.HasBit(11);
	}
	private void set_has_m_sint64int32()
	{
		m_bits.SetBit(11);
	}
	private void clear_has_m_sint64int32()
	{
		m_bits.ClearBit(11);
	}

	private Dictionary<ulong, int> m_uint64int32_;
	public Dictionary<ulong, int> m_uint64int32
	{
		set
		{
			m_uint64int32_ = value;
			set_has_m_uint64int32();
		}
	}
	public int m_uint64int32_size()
	{
		if (null != m_uint64int32_ && has_m_uint64int32())
		{
			return m_uint64int32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, int>.Enumerator m_uint64int32_enumerator()
	{
		if (null != m_uint64int32_ && has_m_uint64int32())
		{
			return m_uint64int32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64int32_");
		}
	}
	public void add_m_uint64int32(ulong key, int value)
	{
		if (null == m_uint64int32_)
		{
			m_uint64int32 = new Dictionary<ulong, int>();
		}
		if (null != m_uint64int32_)
		{
			m_uint64int32_.Add(key, value);
			set_has_m_uint64int32();
		}
	}
	public int find_m_uint64int32(ulong key)
	{
		if (null != m_uint64int32_ && has_m_uint64int32())
		{
			return m_uint64int32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64int32(ulong key)
	{
		if (null != m_uint64int32_)
		{
			m_uint64int32_.Remove(key);
			if(0 == m_uint64int32_.Count)
			{
				clear_has_m_uint64int32();
			}
		}
	}
	public bool m_uint64int32_contains(ulong key)
	{
		if (null != m_uint64int32_ && has_m_uint64int32())
		{
			return m_uint64int32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64int32()
	{
		if (has_m_uint64int32())
		{
			clear_has_m_uint64int32();
		}
		if (m_uint64int32_ != null)
		{
			m_uint64int32_.Clear();
		}
	}
	public void release_m_uint64int32()
	{
		if (has_m_uint64int32())
		{
			clear_has_m_uint64int32();
		}
		if (m_uint64int32_ != null)
		{
			m_uint64int32_ = null;
		}
	}
	public bool has_m_uint64int32()
	{
		return m_bits.HasBit(12);
	}
	private void set_has_m_uint64int32()
	{
		m_bits.SetBit(12);
	}
	private void clear_has_m_uint64int32()
	{
		m_bits.ClearBit(12);
	}

	private Dictionary<string, int> m_stringint32_;
	public Dictionary<string, int> m_stringint32
	{
		set
		{
			m_stringint32_ = value;
			set_has_m_stringint32();
		}
	}
	public int m_stringint32_size()
	{
		if (null != m_stringint32_ && has_m_stringint32())
		{
			return m_stringint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, int>.Enumerator m_stringint32_enumerator()
	{
		if (null != m_stringint32_ && has_m_stringint32())
		{
			return m_stringint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringint32_");
		}
	}
	public void add_m_stringint32(string key, int value)
	{
		if (null == m_stringint32_)
		{
			m_stringint32 = new Dictionary<string, int>();
		}
		if (null != m_stringint32_)
		{
			m_stringint32_.Add(key, value);
			set_has_m_stringint32();
		}
	}
	public int find_m_stringint32(string key)
	{
		if (null != m_stringint32_ && has_m_stringint32())
		{
			return m_stringint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringint32(string key)
	{
		if (null != m_stringint32_)
		{
			m_stringint32_.Remove(key);
			if(0 == m_stringint32_.Count)
			{
				clear_has_m_stringint32();
			}
		}
	}
	public bool m_stringint32_contains(string key)
	{
		if (null != m_stringint32_ && has_m_stringint32())
		{
			return m_stringint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringint32()
	{
		if (has_m_stringint32())
		{
			clear_has_m_stringint32();
		}
		if (m_stringint32_ != null)
		{
			m_stringint32_.Clear();
		}
	}
	public void release_m_stringint32()
	{
		if (has_m_stringint32())
		{
			clear_has_m_stringint32();
		}
		if (m_stringint32_ != null)
		{
			m_stringint32_ = null;
		}
	}
	public bool has_m_stringint32()
	{
		return m_bits.HasBit(13);
	}
	private void set_has_m_stringint32()
	{
		m_bits.SetBit(13);
	}
	private void clear_has_m_stringint32()
	{
		m_bits.ClearBit(13);
	}

	private Dictionary<int, int> m_int32sint32_;
	public Dictionary<int, int> m_int32sint32
	{
		set
		{
			m_int32sint32_ = value;
			set_has_m_int32sint32();
		}
	}
	public int m_int32sint32_size()
	{
		if (null != m_int32sint32_ && has_m_int32sint32())
		{
			return m_int32sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, int>.Enumerator m_int32sint32_enumerator()
	{
		if (null != m_int32sint32_ && has_m_int32sint32())
		{
			return m_int32sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32sint32_");
		}
	}
	public void add_m_int32sint32(int key, int value)
	{
		if (null == m_int32sint32_)
		{
			m_int32sint32 = new Dictionary<int, int>();
		}
		if (null != m_int32sint32_)
		{
			m_int32sint32_.Add(key, value);
			set_has_m_int32sint32();
		}
	}
	public int find_m_int32sint32(int key)
	{
		if (null != m_int32sint32_ && has_m_int32sint32())
		{
			return m_int32sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32sint32(int key)
	{
		if (null != m_int32sint32_)
		{
			m_int32sint32_.Remove(key);
			if(0 == m_int32sint32_.Count)
			{
				clear_has_m_int32sint32();
			}
		}
	}
	public bool m_int32sint32_contains(int key)
	{
		if (null != m_int32sint32_ && has_m_int32sint32())
		{
			return m_int32sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32sint32()
	{
		if (has_m_int32sint32())
		{
			clear_has_m_int32sint32();
		}
		if (m_int32sint32_ != null)
		{
			m_int32sint32_.Clear();
		}
	}
	public void release_m_int32sint32()
	{
		if (has_m_int32sint32())
		{
			clear_has_m_int32sint32();
		}
		if (m_int32sint32_ != null)
		{
			m_int32sint32_ = null;
		}
	}
	public bool has_m_int32sint32()
	{
		return m_bits.HasBit(14);
	}
	private void set_has_m_int32sint32()
	{
		m_bits.SetBit(14);
	}
	private void clear_has_m_int32sint32()
	{
		m_bits.ClearBit(14);
	}

	private Dictionary<int, int> m_sint32sint32_;
	public Dictionary<int, int> m_sint32sint32
	{
		set
		{
			m_sint32sint32_ = value;
			set_has_m_sint32sint32();
		}
	}
	public int m_sint32sint32_size()
	{
		if (null != m_sint32sint32_ && has_m_sint32sint32())
		{
			return m_sint32sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, int>.Enumerator m_sint32sint32_enumerator()
	{
		if (null != m_sint32sint32_ && has_m_sint32sint32())
		{
			return m_sint32sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32sint32_");
		}
	}
	public void add_m_sint32sint32(int key, int value)
	{
		if (null == m_sint32sint32_)
		{
			m_sint32sint32 = new Dictionary<int, int>();
		}
		if (null != m_sint32sint32_)
		{
			m_sint32sint32_.Add(key, value);
			set_has_m_sint32sint32();
		}
	}
	public int find_m_sint32sint32(int key)
	{
		if (null != m_sint32sint32_ && has_m_sint32sint32())
		{
			return m_sint32sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32sint32(int key)
	{
		if (null != m_sint32sint32_)
		{
			m_sint32sint32_.Remove(key);
			if(0 == m_sint32sint32_.Count)
			{
				clear_has_m_sint32sint32();
			}
		}
	}
	public bool m_sint32sint32_contains(int key)
	{
		if (null != m_sint32sint32_ && has_m_sint32sint32())
		{
			return m_sint32sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32sint32()
	{
		if (has_m_sint32sint32())
		{
			clear_has_m_sint32sint32();
		}
		if (m_sint32sint32_ != null)
		{
			m_sint32sint32_.Clear();
		}
	}
	public void release_m_sint32sint32()
	{
		if (has_m_sint32sint32())
		{
			clear_has_m_sint32sint32();
		}
		if (m_sint32sint32_ != null)
		{
			m_sint32sint32_ = null;
		}
	}
	public bool has_m_sint32sint32()
	{
		return m_bits.HasBit(15);
	}
	private void set_has_m_sint32sint32()
	{
		m_bits.SetBit(15);
	}
	private void clear_has_m_sint32sint32()
	{
		m_bits.ClearBit(15);
	}

	private Dictionary<uint, int> m_uint32sint32_;
	public Dictionary<uint, int> m_uint32sint32
	{
		set
		{
			m_uint32sint32_ = value;
			set_has_m_uint32sint32();
		}
	}
	public int m_uint32sint32_size()
	{
		if (null != m_uint32sint32_ && has_m_uint32sint32())
		{
			return m_uint32sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, int>.Enumerator m_uint32sint32_enumerator()
	{
		if (null != m_uint32sint32_ && has_m_uint32sint32())
		{
			return m_uint32sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32sint32_");
		}
	}
	public void add_m_uint32sint32(uint key, int value)
	{
		if (null == m_uint32sint32_)
		{
			m_uint32sint32 = new Dictionary<uint, int>();
		}
		if (null != m_uint32sint32_)
		{
			m_uint32sint32_.Add(key, value);
			set_has_m_uint32sint32();
		}
	}
	public int find_m_uint32sint32(uint key)
	{
		if (null != m_uint32sint32_ && has_m_uint32sint32())
		{
			return m_uint32sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32sint32(uint key)
	{
		if (null != m_uint32sint32_)
		{
			m_uint32sint32_.Remove(key);
			if(0 == m_uint32sint32_.Count)
			{
				clear_has_m_uint32sint32();
			}
		}
	}
	public bool m_uint32sint32_contains(uint key)
	{
		if (null != m_uint32sint32_ && has_m_uint32sint32())
		{
			return m_uint32sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32sint32()
	{
		if (has_m_uint32sint32())
		{
			clear_has_m_uint32sint32();
		}
		if (m_uint32sint32_ != null)
		{
			m_uint32sint32_.Clear();
		}
	}
	public void release_m_uint32sint32()
	{
		if (has_m_uint32sint32())
		{
			clear_has_m_uint32sint32();
		}
		if (m_uint32sint32_ != null)
		{
			m_uint32sint32_ = null;
		}
	}
	public bool has_m_uint32sint32()
	{
		return m_bits.HasBit(16);
	}
	private void set_has_m_uint32sint32()
	{
		m_bits.SetBit(16);
	}
	private void clear_has_m_uint32sint32()
	{
		m_bits.ClearBit(16);
	}

	private Dictionary<long, int> m_int64sint32_;
	public Dictionary<long, int> m_int64sint32
	{
		set
		{
			m_int64sint32_ = value;
			set_has_m_int64sint32();
		}
	}
	public int m_int64sint32_size()
	{
		if (null != m_int64sint32_ && has_m_int64sint32())
		{
			return m_int64sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, int>.Enumerator m_int64sint32_enumerator()
	{
		if (null != m_int64sint32_ && has_m_int64sint32())
		{
			return m_int64sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64sint32_");
		}
	}
	public void add_m_int64sint32(long key, int value)
	{
		if (null == m_int64sint32_)
		{
			m_int64sint32 = new Dictionary<long, int>();
		}
		if (null != m_int64sint32_)
		{
			m_int64sint32_.Add(key, value);
			set_has_m_int64sint32();
		}
	}
	public int find_m_int64sint32(long key)
	{
		if (null != m_int64sint32_ && has_m_int64sint32())
		{
			return m_int64sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64sint32(long key)
	{
		if (null != m_int64sint32_)
		{
			m_int64sint32_.Remove(key);
			if(0 == m_int64sint32_.Count)
			{
				clear_has_m_int64sint32();
			}
		}
	}
	public bool m_int64sint32_contains(long key)
	{
		if (null != m_int64sint32_ && has_m_int64sint32())
		{
			return m_int64sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64sint32()
	{
		if (has_m_int64sint32())
		{
			clear_has_m_int64sint32();
		}
		if (m_int64sint32_ != null)
		{
			m_int64sint32_.Clear();
		}
	}
	public void release_m_int64sint32()
	{
		if (has_m_int64sint32())
		{
			clear_has_m_int64sint32();
		}
		if (m_int64sint32_ != null)
		{
			m_int64sint32_ = null;
		}
	}
	public bool has_m_int64sint32()
	{
		return m_bits.HasBit(17);
	}
	private void set_has_m_int64sint32()
	{
		m_bits.SetBit(17);
	}
	private void clear_has_m_int64sint32()
	{
		m_bits.ClearBit(17);
	}

	private Dictionary<long, int> m_sint64sint32_;
	public Dictionary<long, int> m_sint64sint32
	{
		set
		{
			m_sint64sint32_ = value;
			set_has_m_sint64sint32();
		}
	}
	public int m_sint64sint32_size()
	{
		if (null != m_sint64sint32_ && has_m_sint64sint32())
		{
			return m_sint64sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, int>.Enumerator m_sint64sint32_enumerator()
	{
		if (null != m_sint64sint32_ && has_m_sint64sint32())
		{
			return m_sint64sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64sint32_");
		}
	}
	public void add_m_sint64sint32(long key, int value)
	{
		if (null == m_sint64sint32_)
		{
			m_sint64sint32 = new Dictionary<long, int>();
		}
		if (null != m_sint64sint32_)
		{
			m_sint64sint32_.Add(key, value);
			set_has_m_sint64sint32();
		}
	}
	public int find_m_sint64sint32(long key)
	{
		if (null != m_sint64sint32_ && has_m_sint64sint32())
		{
			return m_sint64sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64sint32(long key)
	{
		if (null != m_sint64sint32_)
		{
			m_sint64sint32_.Remove(key);
			if(0 == m_sint64sint32_.Count)
			{
				clear_has_m_sint64sint32();
			}
		}
	}
	public bool m_sint64sint32_contains(long key)
	{
		if (null != m_sint64sint32_ && has_m_sint64sint32())
		{
			return m_sint64sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64sint32()
	{
		if (has_m_sint64sint32())
		{
			clear_has_m_sint64sint32();
		}
		if (m_sint64sint32_ != null)
		{
			m_sint64sint32_.Clear();
		}
	}
	public void release_m_sint64sint32()
	{
		if (has_m_sint64sint32())
		{
			clear_has_m_sint64sint32();
		}
		if (m_sint64sint32_ != null)
		{
			m_sint64sint32_ = null;
		}
	}
	public bool has_m_sint64sint32()
	{
		return m_bits.HasBit(18);
	}
	private void set_has_m_sint64sint32()
	{
		m_bits.SetBit(18);
	}
	private void clear_has_m_sint64sint32()
	{
		m_bits.ClearBit(18);
	}

	private Dictionary<ulong, int> m_uint64sint32_;
	public Dictionary<ulong, int> m_uint64sint32
	{
		set
		{
			m_uint64sint32_ = value;
			set_has_m_uint64sint32();
		}
	}
	public int m_uint64sint32_size()
	{
		if (null != m_uint64sint32_ && has_m_uint64sint32())
		{
			return m_uint64sint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, int>.Enumerator m_uint64sint32_enumerator()
	{
		if (null != m_uint64sint32_ && has_m_uint64sint32())
		{
			return m_uint64sint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64sint32_");
		}
	}
	public void add_m_uint64sint32(ulong key, int value)
	{
		if (null == m_uint64sint32_)
		{
			m_uint64sint32 = new Dictionary<ulong, int>();
		}
		if (null != m_uint64sint32_)
		{
			m_uint64sint32_.Add(key, value);
			set_has_m_uint64sint32();
		}
	}
	public int find_m_uint64sint32(ulong key)
	{
		if (null != m_uint64sint32_ && has_m_uint64sint32())
		{
			return m_uint64sint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64sint32(ulong key)
	{
		if (null != m_uint64sint32_)
		{
			m_uint64sint32_.Remove(key);
			if(0 == m_uint64sint32_.Count)
			{
				clear_has_m_uint64sint32();
			}
		}
	}
	public bool m_uint64sint32_contains(ulong key)
	{
		if (null != m_uint64sint32_ && has_m_uint64sint32())
		{
			return m_uint64sint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64sint32()
	{
		if (has_m_uint64sint32())
		{
			clear_has_m_uint64sint32();
		}
		if (m_uint64sint32_ != null)
		{
			m_uint64sint32_.Clear();
		}
	}
	public void release_m_uint64sint32()
	{
		if (has_m_uint64sint32())
		{
			clear_has_m_uint64sint32();
		}
		if (m_uint64sint32_ != null)
		{
			m_uint64sint32_ = null;
		}
	}
	public bool has_m_uint64sint32()
	{
		return m_bits.HasBit(19);
	}
	private void set_has_m_uint64sint32()
	{
		m_bits.SetBit(19);
	}
	private void clear_has_m_uint64sint32()
	{
		m_bits.ClearBit(19);
	}

	private Dictionary<string, int> m_stringsint32_;
	public Dictionary<string, int> m_stringsint32
	{
		set
		{
			m_stringsint32_ = value;
			set_has_m_stringsint32();
		}
	}
	public int m_stringsint32_size()
	{
		if (null != m_stringsint32_ && has_m_stringsint32())
		{
			return m_stringsint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, int>.Enumerator m_stringsint32_enumerator()
	{
		if (null != m_stringsint32_ && has_m_stringsint32())
		{
			return m_stringsint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringsint32_");
		}
	}
	public void add_m_stringsint32(string key, int value)
	{
		if (null == m_stringsint32_)
		{
			m_stringsint32 = new Dictionary<string, int>();
		}
		if (null != m_stringsint32_)
		{
			m_stringsint32_.Add(key, value);
			set_has_m_stringsint32();
		}
	}
	public int find_m_stringsint32(string key)
	{
		if (null != m_stringsint32_ && has_m_stringsint32())
		{
			return m_stringsint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringsint32(string key)
	{
		if (null != m_stringsint32_)
		{
			m_stringsint32_.Remove(key);
			if(0 == m_stringsint32_.Count)
			{
				clear_has_m_stringsint32();
			}
		}
	}
	public bool m_stringsint32_contains(string key)
	{
		if (null != m_stringsint32_ && has_m_stringsint32())
		{
			return m_stringsint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringsint32()
	{
		if (has_m_stringsint32())
		{
			clear_has_m_stringsint32();
		}
		if (m_stringsint32_ != null)
		{
			m_stringsint32_.Clear();
		}
	}
	public void release_m_stringsint32()
	{
		if (has_m_stringsint32())
		{
			clear_has_m_stringsint32();
		}
		if (m_stringsint32_ != null)
		{
			m_stringsint32_ = null;
		}
	}
	public bool has_m_stringsint32()
	{
		return m_bits.HasBit(20);
	}
	private void set_has_m_stringsint32()
	{
		m_bits.SetBit(20);
	}
	private void clear_has_m_stringsint32()
	{
		m_bits.ClearBit(20);
	}

	private Dictionary<int, uint> m_int32uint32_;
	public Dictionary<int, uint> m_int32uint32
	{
		set
		{
			m_int32uint32_ = value;
			set_has_m_int32uint32();
		}
	}
	public int m_int32uint32_size()
	{
		if (null != m_int32uint32_ && has_m_int32uint32())
		{
			return m_int32uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, uint>.Enumerator m_int32uint32_enumerator()
	{
		if (null != m_int32uint32_ && has_m_int32uint32())
		{
			return m_int32uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32uint32_");
		}
	}
	public void add_m_int32uint32(int key, uint value)
	{
		if (null == m_int32uint32_)
		{
			m_int32uint32 = new Dictionary<int, uint>();
		}
		if (null != m_int32uint32_)
		{
			m_int32uint32_.Add(key, value);
			set_has_m_int32uint32();
		}
	}
	public uint find_m_int32uint32(int key)
	{
		if (null != m_int32uint32_ && has_m_int32uint32())
		{
			return m_int32uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32uint32(int key)
	{
		if (null != m_int32uint32_)
		{
			m_int32uint32_.Remove(key);
			if(0 == m_int32uint32_.Count)
			{
				clear_has_m_int32uint32();
			}
		}
	}
	public bool m_int32uint32_contains(int key)
	{
		if (null != m_int32uint32_ && has_m_int32uint32())
		{
			return m_int32uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32uint32()
	{
		if (has_m_int32uint32())
		{
			clear_has_m_int32uint32();
		}
		if (m_int32uint32_ != null)
		{
			m_int32uint32_.Clear();
		}
	}
	public void release_m_int32uint32()
	{
		if (has_m_int32uint32())
		{
			clear_has_m_int32uint32();
		}
		if (m_int32uint32_ != null)
		{
			m_int32uint32_ = null;
		}
	}
	public bool has_m_int32uint32()
	{
		return m_bits.HasBit(21);
	}
	private void set_has_m_int32uint32()
	{
		m_bits.SetBit(21);
	}
	private void clear_has_m_int32uint32()
	{
		m_bits.ClearBit(21);
	}

	private Dictionary<int, uint> m_sint32uint32_;
	public Dictionary<int, uint> m_sint32uint32
	{
		set
		{
			m_sint32uint32_ = value;
			set_has_m_sint32uint32();
		}
	}
	public int m_sint32uint32_size()
	{
		if (null != m_sint32uint32_ && has_m_sint32uint32())
		{
			return m_sint32uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, uint>.Enumerator m_sint32uint32_enumerator()
	{
		if (null != m_sint32uint32_ && has_m_sint32uint32())
		{
			return m_sint32uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32uint32_");
		}
	}
	public void add_m_sint32uint32(int key, uint value)
	{
		if (null == m_sint32uint32_)
		{
			m_sint32uint32 = new Dictionary<int, uint>();
		}
		if (null != m_sint32uint32_)
		{
			m_sint32uint32_.Add(key, value);
			set_has_m_sint32uint32();
		}
	}
	public uint find_m_sint32uint32(int key)
	{
		if (null != m_sint32uint32_ && has_m_sint32uint32())
		{
			return m_sint32uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32uint32(int key)
	{
		if (null != m_sint32uint32_)
		{
			m_sint32uint32_.Remove(key);
			if(0 == m_sint32uint32_.Count)
			{
				clear_has_m_sint32uint32();
			}
		}
	}
	public bool m_sint32uint32_contains(int key)
	{
		if (null != m_sint32uint32_ && has_m_sint32uint32())
		{
			return m_sint32uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32uint32()
	{
		if (has_m_sint32uint32())
		{
			clear_has_m_sint32uint32();
		}
		if (m_sint32uint32_ != null)
		{
			m_sint32uint32_.Clear();
		}
	}
	public void release_m_sint32uint32()
	{
		if (has_m_sint32uint32())
		{
			clear_has_m_sint32uint32();
		}
		if (m_sint32uint32_ != null)
		{
			m_sint32uint32_ = null;
		}
	}
	public bool has_m_sint32uint32()
	{
		return m_bits.HasBit(22);
	}
	private void set_has_m_sint32uint32()
	{
		m_bits.SetBit(22);
	}
	private void clear_has_m_sint32uint32()
	{
		m_bits.ClearBit(22);
	}

	private Dictionary<uint, uint> m_uint32uint32_;
	public Dictionary<uint, uint> m_uint32uint32
	{
		set
		{
			m_uint32uint32_ = value;
			set_has_m_uint32uint32();
		}
	}
	public int m_uint32uint32_size()
	{
		if (null != m_uint32uint32_ && has_m_uint32uint32())
		{
			return m_uint32uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, uint>.Enumerator m_uint32uint32_enumerator()
	{
		if (null != m_uint32uint32_ && has_m_uint32uint32())
		{
			return m_uint32uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32uint32_");
		}
	}
	public void add_m_uint32uint32(uint key, uint value)
	{
		if (null == m_uint32uint32_)
		{
			m_uint32uint32 = new Dictionary<uint, uint>();
		}
		if (null != m_uint32uint32_)
		{
			m_uint32uint32_.Add(key, value);
			set_has_m_uint32uint32();
		}
	}
	public uint find_m_uint32uint32(uint key)
	{
		if (null != m_uint32uint32_ && has_m_uint32uint32())
		{
			return m_uint32uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32uint32(uint key)
	{
		if (null != m_uint32uint32_)
		{
			m_uint32uint32_.Remove(key);
			if(0 == m_uint32uint32_.Count)
			{
				clear_has_m_uint32uint32();
			}
		}
	}
	public bool m_uint32uint32_contains(uint key)
	{
		if (null != m_uint32uint32_ && has_m_uint32uint32())
		{
			return m_uint32uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32uint32()
	{
		if (has_m_uint32uint32())
		{
			clear_has_m_uint32uint32();
		}
		if (m_uint32uint32_ != null)
		{
			m_uint32uint32_.Clear();
		}
	}
	public void release_m_uint32uint32()
	{
		if (has_m_uint32uint32())
		{
			clear_has_m_uint32uint32();
		}
		if (m_uint32uint32_ != null)
		{
			m_uint32uint32_ = null;
		}
	}
	public bool has_m_uint32uint32()
	{
		return m_bits.HasBit(23);
	}
	private void set_has_m_uint32uint32()
	{
		m_bits.SetBit(23);
	}
	private void clear_has_m_uint32uint32()
	{
		m_bits.ClearBit(23);
	}

	private Dictionary<long, uint> m_int64uint32_;
	public Dictionary<long, uint> m_int64uint32
	{
		set
		{
			m_int64uint32_ = value;
			set_has_m_int64uint32();
		}
	}
	public int m_int64uint32_size()
	{
		if (null != m_int64uint32_ && has_m_int64uint32())
		{
			return m_int64uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, uint>.Enumerator m_int64uint32_enumerator()
	{
		if (null != m_int64uint32_ && has_m_int64uint32())
		{
			return m_int64uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64uint32_");
		}
	}
	public void add_m_int64uint32(long key, uint value)
	{
		if (null == m_int64uint32_)
		{
			m_int64uint32 = new Dictionary<long, uint>();
		}
		if (null != m_int64uint32_)
		{
			m_int64uint32_.Add(key, value);
			set_has_m_int64uint32();
		}
	}
	public uint find_m_int64uint32(long key)
	{
		if (null != m_int64uint32_ && has_m_int64uint32())
		{
			return m_int64uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64uint32(long key)
	{
		if (null != m_int64uint32_)
		{
			m_int64uint32_.Remove(key);
			if(0 == m_int64uint32_.Count)
			{
				clear_has_m_int64uint32();
			}
		}
	}
	public bool m_int64uint32_contains(long key)
	{
		if (null != m_int64uint32_ && has_m_int64uint32())
		{
			return m_int64uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64uint32()
	{
		if (has_m_int64uint32())
		{
			clear_has_m_int64uint32();
		}
		if (m_int64uint32_ != null)
		{
			m_int64uint32_.Clear();
		}
	}
	public void release_m_int64uint32()
	{
		if (has_m_int64uint32())
		{
			clear_has_m_int64uint32();
		}
		if (m_int64uint32_ != null)
		{
			m_int64uint32_ = null;
		}
	}
	public bool has_m_int64uint32()
	{
		return m_bits.HasBit(24);
	}
	private void set_has_m_int64uint32()
	{
		m_bits.SetBit(24);
	}
	private void clear_has_m_int64uint32()
	{
		m_bits.ClearBit(24);
	}

	private Dictionary<long, uint> m_sint64uint32_;
	public Dictionary<long, uint> m_sint64uint32
	{
		set
		{
			m_sint64uint32_ = value;
			set_has_m_sint64uint32();
		}
	}
	public int m_sint64uint32_size()
	{
		if (null != m_sint64uint32_ && has_m_sint64uint32())
		{
			return m_sint64uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, uint>.Enumerator m_sint64uint32_enumerator()
	{
		if (null != m_sint64uint32_ && has_m_sint64uint32())
		{
			return m_sint64uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64uint32_");
		}
	}
	public void add_m_sint64uint32(long key, uint value)
	{
		if (null == m_sint64uint32_)
		{
			m_sint64uint32 = new Dictionary<long, uint>();
		}
		if (null != m_sint64uint32_)
		{
			m_sint64uint32_.Add(key, value);
			set_has_m_sint64uint32();
		}
	}
	public uint find_m_sint64uint32(long key)
	{
		if (null != m_sint64uint32_ && has_m_sint64uint32())
		{
			return m_sint64uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64uint32(long key)
	{
		if (null != m_sint64uint32_)
		{
			m_sint64uint32_.Remove(key);
			if(0 == m_sint64uint32_.Count)
			{
				clear_has_m_sint64uint32();
			}
		}
	}
	public bool m_sint64uint32_contains(long key)
	{
		if (null != m_sint64uint32_ && has_m_sint64uint32())
		{
			return m_sint64uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64uint32()
	{
		if (has_m_sint64uint32())
		{
			clear_has_m_sint64uint32();
		}
		if (m_sint64uint32_ != null)
		{
			m_sint64uint32_.Clear();
		}
	}
	public void release_m_sint64uint32()
	{
		if (has_m_sint64uint32())
		{
			clear_has_m_sint64uint32();
		}
		if (m_sint64uint32_ != null)
		{
			m_sint64uint32_ = null;
		}
	}
	public bool has_m_sint64uint32()
	{
		return m_bits.HasBit(25);
	}
	private void set_has_m_sint64uint32()
	{
		m_bits.SetBit(25);
	}
	private void clear_has_m_sint64uint32()
	{
		m_bits.ClearBit(25);
	}

	private Dictionary<ulong, uint> m_uint64uint32_;
	public Dictionary<ulong, uint> m_uint64uint32
	{
		set
		{
			m_uint64uint32_ = value;
			set_has_m_uint64uint32();
		}
	}
	public int m_uint64uint32_size()
	{
		if (null != m_uint64uint32_ && has_m_uint64uint32())
		{
			return m_uint64uint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, uint>.Enumerator m_uint64uint32_enumerator()
	{
		if (null != m_uint64uint32_ && has_m_uint64uint32())
		{
			return m_uint64uint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64uint32_");
		}
	}
	public void add_m_uint64uint32(ulong key, uint value)
	{
		if (null == m_uint64uint32_)
		{
			m_uint64uint32 = new Dictionary<ulong, uint>();
		}
		if (null != m_uint64uint32_)
		{
			m_uint64uint32_.Add(key, value);
			set_has_m_uint64uint32();
		}
	}
	public uint find_m_uint64uint32(ulong key)
	{
		if (null != m_uint64uint32_ && has_m_uint64uint32())
		{
			return m_uint64uint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64uint32(ulong key)
	{
		if (null != m_uint64uint32_)
		{
			m_uint64uint32_.Remove(key);
			if(0 == m_uint64uint32_.Count)
			{
				clear_has_m_uint64uint32();
			}
		}
	}
	public bool m_uint64uint32_contains(ulong key)
	{
		if (null != m_uint64uint32_ && has_m_uint64uint32())
		{
			return m_uint64uint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64uint32()
	{
		if (has_m_uint64uint32())
		{
			clear_has_m_uint64uint32();
		}
		if (m_uint64uint32_ != null)
		{
			m_uint64uint32_.Clear();
		}
	}
	public void release_m_uint64uint32()
	{
		if (has_m_uint64uint32())
		{
			clear_has_m_uint64uint32();
		}
		if (m_uint64uint32_ != null)
		{
			m_uint64uint32_ = null;
		}
	}
	public bool has_m_uint64uint32()
	{
		return m_bits.HasBit(26);
	}
	private void set_has_m_uint64uint32()
	{
		m_bits.SetBit(26);
	}
	private void clear_has_m_uint64uint32()
	{
		m_bits.ClearBit(26);
	}

	private Dictionary<string, uint> m_stringuint32_;
	public Dictionary<string, uint> m_stringuint32
	{
		set
		{
			m_stringuint32_ = value;
			set_has_m_stringuint32();
		}
	}
	public int m_stringuint32_size()
	{
		if (null != m_stringuint32_ && has_m_stringuint32())
		{
			return m_stringuint32_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, uint>.Enumerator m_stringuint32_enumerator()
	{
		if (null != m_stringuint32_ && has_m_stringuint32())
		{
			return m_stringuint32_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringuint32_");
		}
	}
	public void add_m_stringuint32(string key, uint value)
	{
		if (null == m_stringuint32_)
		{
			m_stringuint32 = new Dictionary<string, uint>();
		}
		if (null != m_stringuint32_)
		{
			m_stringuint32_.Add(key, value);
			set_has_m_stringuint32();
		}
	}
	public uint find_m_stringuint32(string key)
	{
		if (null != m_stringuint32_ && has_m_stringuint32())
		{
			return m_stringuint32_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringuint32(string key)
	{
		if (null != m_stringuint32_)
		{
			m_stringuint32_.Remove(key);
			if(0 == m_stringuint32_.Count)
			{
				clear_has_m_stringuint32();
			}
		}
	}
	public bool m_stringuint32_contains(string key)
	{
		if (null != m_stringuint32_ && has_m_stringuint32())
		{
			return m_stringuint32_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringuint32()
	{
		if (has_m_stringuint32())
		{
			clear_has_m_stringuint32();
		}
		if (m_stringuint32_ != null)
		{
			m_stringuint32_.Clear();
		}
	}
	public void release_m_stringuint32()
	{
		if (has_m_stringuint32())
		{
			clear_has_m_stringuint32();
		}
		if (m_stringuint32_ != null)
		{
			m_stringuint32_ = null;
		}
	}
	public bool has_m_stringuint32()
	{
		return m_bits.HasBit(27);
	}
	private void set_has_m_stringuint32()
	{
		m_bits.SetBit(27);
	}
	private void clear_has_m_stringuint32()
	{
		m_bits.ClearBit(27);
	}

	private Dictionary<int, long> m_int32int64_;
	public Dictionary<int, long> m_int32int64
	{
		set
		{
			m_int32int64_ = value;
			set_has_m_int32int64();
		}
	}
	public int m_int32int64_size()
	{
		if (null != m_int32int64_ && has_m_int32int64())
		{
			return m_int32int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, long>.Enumerator m_int32int64_enumerator()
	{
		if (null != m_int32int64_ && has_m_int32int64())
		{
			return m_int32int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32int64_");
		}
	}
	public void add_m_int32int64(int key, long value)
	{
		if (null == m_int32int64_)
		{
			m_int32int64 = new Dictionary<int, long>();
		}
		if (null != m_int32int64_)
		{
			m_int32int64_.Add(key, value);
			set_has_m_int32int64();
		}
	}
	public long find_m_int32int64(int key)
	{
		if (null != m_int32int64_ && has_m_int32int64())
		{
			return m_int32int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32int64(int key)
	{
		if (null != m_int32int64_)
		{
			m_int32int64_.Remove(key);
			if(0 == m_int32int64_.Count)
			{
				clear_has_m_int32int64();
			}
		}
	}
	public bool m_int32int64_contains(int key)
	{
		if (null != m_int32int64_ && has_m_int32int64())
		{
			return m_int32int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32int64()
	{
		if (has_m_int32int64())
		{
			clear_has_m_int32int64();
		}
		if (m_int32int64_ != null)
		{
			m_int32int64_.Clear();
		}
	}
	public void release_m_int32int64()
	{
		if (has_m_int32int64())
		{
			clear_has_m_int32int64();
		}
		if (m_int32int64_ != null)
		{
			m_int32int64_ = null;
		}
	}
	public bool has_m_int32int64()
	{
		return m_bits.HasBit(28);
	}
	private void set_has_m_int32int64()
	{
		m_bits.SetBit(28);
	}
	private void clear_has_m_int32int64()
	{
		m_bits.ClearBit(28);
	}

	private Dictionary<int, long> m_sint32int64_;
	public Dictionary<int, long> m_sint32int64
	{
		set
		{
			m_sint32int64_ = value;
			set_has_m_sint32int64();
		}
	}
	public int m_sint32int64_size()
	{
		if (null != m_sint32int64_ && has_m_sint32int64())
		{
			return m_sint32int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, long>.Enumerator m_sint32int64_enumerator()
	{
		if (null != m_sint32int64_ && has_m_sint32int64())
		{
			return m_sint32int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32int64_");
		}
	}
	public void add_m_sint32int64(int key, long value)
	{
		if (null == m_sint32int64_)
		{
			m_sint32int64 = new Dictionary<int, long>();
		}
		if (null != m_sint32int64_)
		{
			m_sint32int64_.Add(key, value);
			set_has_m_sint32int64();
		}
	}
	public long find_m_sint32int64(int key)
	{
		if (null != m_sint32int64_ && has_m_sint32int64())
		{
			return m_sint32int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32int64(int key)
	{
		if (null != m_sint32int64_)
		{
			m_sint32int64_.Remove(key);
			if(0 == m_sint32int64_.Count)
			{
				clear_has_m_sint32int64();
			}
		}
	}
	public bool m_sint32int64_contains(int key)
	{
		if (null != m_sint32int64_ && has_m_sint32int64())
		{
			return m_sint32int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32int64()
	{
		if (has_m_sint32int64())
		{
			clear_has_m_sint32int64();
		}
		if (m_sint32int64_ != null)
		{
			m_sint32int64_.Clear();
		}
	}
	public void release_m_sint32int64()
	{
		if (has_m_sint32int64())
		{
			clear_has_m_sint32int64();
		}
		if (m_sint32int64_ != null)
		{
			m_sint32int64_ = null;
		}
	}
	public bool has_m_sint32int64()
	{
		return m_bits.HasBit(29);
	}
	private void set_has_m_sint32int64()
	{
		m_bits.SetBit(29);
	}
	private void clear_has_m_sint32int64()
	{
		m_bits.ClearBit(29);
	}

	private Dictionary<uint, long> m_uint32int64_;
	public Dictionary<uint, long> m_uint32int64
	{
		set
		{
			m_uint32int64_ = value;
			set_has_m_uint32int64();
		}
	}
	public int m_uint32int64_size()
	{
		if (null != m_uint32int64_ && has_m_uint32int64())
		{
			return m_uint32int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, long>.Enumerator m_uint32int64_enumerator()
	{
		if (null != m_uint32int64_ && has_m_uint32int64())
		{
			return m_uint32int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32int64_");
		}
	}
	public void add_m_uint32int64(uint key, long value)
	{
		if (null == m_uint32int64_)
		{
			m_uint32int64 = new Dictionary<uint, long>();
		}
		if (null != m_uint32int64_)
		{
			m_uint32int64_.Add(key, value);
			set_has_m_uint32int64();
		}
	}
	public long find_m_uint32int64(uint key)
	{
		if (null != m_uint32int64_ && has_m_uint32int64())
		{
			return m_uint32int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32int64(uint key)
	{
		if (null != m_uint32int64_)
		{
			m_uint32int64_.Remove(key);
			if(0 == m_uint32int64_.Count)
			{
				clear_has_m_uint32int64();
			}
		}
	}
	public bool m_uint32int64_contains(uint key)
	{
		if (null != m_uint32int64_ && has_m_uint32int64())
		{
			return m_uint32int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32int64()
	{
		if (has_m_uint32int64())
		{
			clear_has_m_uint32int64();
		}
		if (m_uint32int64_ != null)
		{
			m_uint32int64_.Clear();
		}
	}
	public void release_m_uint32int64()
	{
		if (has_m_uint32int64())
		{
			clear_has_m_uint32int64();
		}
		if (m_uint32int64_ != null)
		{
			m_uint32int64_ = null;
		}
	}
	public bool has_m_uint32int64()
	{
		return m_bits.HasBit(30);
	}
	private void set_has_m_uint32int64()
	{
		m_bits.SetBit(30);
	}
	private void clear_has_m_uint32int64()
	{
		m_bits.ClearBit(30);
	}

	private Dictionary<long, long> m_int64int64_;
	public Dictionary<long, long> m_int64int64
	{
		set
		{
			m_int64int64_ = value;
			set_has_m_int64int64();
		}
	}
	public int m_int64int64_size()
	{
		if (null != m_int64int64_ && has_m_int64int64())
		{
			return m_int64int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, long>.Enumerator m_int64int64_enumerator()
	{
		if (null != m_int64int64_ && has_m_int64int64())
		{
			return m_int64int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64int64_");
		}
	}
	public void add_m_int64int64(long key, long value)
	{
		if (null == m_int64int64_)
		{
			m_int64int64 = new Dictionary<long, long>();
		}
		if (null != m_int64int64_)
		{
			m_int64int64_.Add(key, value);
			set_has_m_int64int64();
		}
	}
	public long find_m_int64int64(long key)
	{
		if (null != m_int64int64_ && has_m_int64int64())
		{
			return m_int64int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64int64(long key)
	{
		if (null != m_int64int64_)
		{
			m_int64int64_.Remove(key);
			if(0 == m_int64int64_.Count)
			{
				clear_has_m_int64int64();
			}
		}
	}
	public bool m_int64int64_contains(long key)
	{
		if (null != m_int64int64_ && has_m_int64int64())
		{
			return m_int64int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64int64()
	{
		if (has_m_int64int64())
		{
			clear_has_m_int64int64();
		}
		if (m_int64int64_ != null)
		{
			m_int64int64_.Clear();
		}
	}
	public void release_m_int64int64()
	{
		if (has_m_int64int64())
		{
			clear_has_m_int64int64();
		}
		if (m_int64int64_ != null)
		{
			m_int64int64_ = null;
		}
	}
	public bool has_m_int64int64()
	{
		return m_bits.HasBit(31);
	}
	private void set_has_m_int64int64()
	{
		m_bits.SetBit(31);
	}
	private void clear_has_m_int64int64()
	{
		m_bits.ClearBit(31);
	}

	private Dictionary<long, long> m_sint64int64_;
	public Dictionary<long, long> m_sint64int64
	{
		set
		{
			m_sint64int64_ = value;
			set_has_m_sint64int64();
		}
	}
	public int m_sint64int64_size()
	{
		if (null != m_sint64int64_ && has_m_sint64int64())
		{
			return m_sint64int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, long>.Enumerator m_sint64int64_enumerator()
	{
		if (null != m_sint64int64_ && has_m_sint64int64())
		{
			return m_sint64int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64int64_");
		}
	}
	public void add_m_sint64int64(long key, long value)
	{
		if (null == m_sint64int64_)
		{
			m_sint64int64 = new Dictionary<long, long>();
		}
		if (null != m_sint64int64_)
		{
			m_sint64int64_.Add(key, value);
			set_has_m_sint64int64();
		}
	}
	public long find_m_sint64int64(long key)
	{
		if (null != m_sint64int64_ && has_m_sint64int64())
		{
			return m_sint64int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64int64(long key)
	{
		if (null != m_sint64int64_)
		{
			m_sint64int64_.Remove(key);
			if(0 == m_sint64int64_.Count)
			{
				clear_has_m_sint64int64();
			}
		}
	}
	public bool m_sint64int64_contains(long key)
	{
		if (null != m_sint64int64_ && has_m_sint64int64())
		{
			return m_sint64int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64int64()
	{
		if (has_m_sint64int64())
		{
			clear_has_m_sint64int64();
		}
		if (m_sint64int64_ != null)
		{
			m_sint64int64_.Clear();
		}
	}
	public void release_m_sint64int64()
	{
		if (has_m_sint64int64())
		{
			clear_has_m_sint64int64();
		}
		if (m_sint64int64_ != null)
		{
			m_sint64int64_ = null;
		}
	}
	public bool has_m_sint64int64()
	{
		return m_bits.HasBit(32);
	}
	private void set_has_m_sint64int64()
	{
		m_bits.SetBit(32);
	}
	private void clear_has_m_sint64int64()
	{
		m_bits.ClearBit(32);
	}

	private Dictionary<ulong, long> m_uint64int64_;
	public Dictionary<ulong, long> m_uint64int64
	{
		set
		{
			m_uint64int64_ = value;
			set_has_m_uint64int64();
		}
	}
	public int m_uint64int64_size()
	{
		if (null != m_uint64int64_ && has_m_uint64int64())
		{
			return m_uint64int64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, long>.Enumerator m_uint64int64_enumerator()
	{
		if (null != m_uint64int64_ && has_m_uint64int64())
		{
			return m_uint64int64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64int64_");
		}
	}
	public void add_m_uint64int64(ulong key, long value)
	{
		if (null == m_uint64int64_)
		{
			m_uint64int64 = new Dictionary<ulong, long>();
		}
		if (null != m_uint64int64_)
		{
			m_uint64int64_.Add(key, value);
			set_has_m_uint64int64();
		}
	}
	public long find_m_uint64int64(ulong key)
	{
		if (null != m_uint64int64_ && has_m_uint64int64())
		{
			return m_uint64int64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64int64(ulong key)
	{
		if (null != m_uint64int64_)
		{
			m_uint64int64_.Remove(key);
			if(0 == m_uint64int64_.Count)
			{
				clear_has_m_uint64int64();
			}
		}
	}
	public bool m_uint64int64_contains(ulong key)
	{
		if (null != m_uint64int64_ && has_m_uint64int64())
		{
			return m_uint64int64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64int64()
	{
		if (has_m_uint64int64())
		{
			clear_has_m_uint64int64();
		}
		if (m_uint64int64_ != null)
		{
			m_uint64int64_.Clear();
		}
	}
	public void release_m_uint64int64()
	{
		if (has_m_uint64int64())
		{
			clear_has_m_uint64int64();
		}
		if (m_uint64int64_ != null)
		{
			m_uint64int64_ = null;
		}
	}
	public bool has_m_uint64int64()
	{
		return m_bits.HasBit(33);
	}
	private void set_has_m_uint64int64()
	{
		m_bits.SetBit(33);
	}
	private void clear_has_m_uint64int64()
	{
		m_bits.ClearBit(33);
	}

	private Dictionary<string, long> m_stringint64_;
	public Dictionary<string, long> m_stringint64
	{
		set
		{
			m_stringint64_ = value;
			set_has_m_stringint64();
		}
	}
	public int m_stringint64_size()
	{
		if (null != m_stringint64_ && has_m_stringint64())
		{
			return m_stringint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, long>.Enumerator m_stringint64_enumerator()
	{
		if (null != m_stringint64_ && has_m_stringint64())
		{
			return m_stringint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringint64_");
		}
	}
	public void add_m_stringint64(string key, long value)
	{
		if (null == m_stringint64_)
		{
			m_stringint64 = new Dictionary<string, long>();
		}
		if (null != m_stringint64_)
		{
			m_stringint64_.Add(key, value);
			set_has_m_stringint64();
		}
	}
	public long find_m_stringint64(string key)
	{
		if (null != m_stringint64_ && has_m_stringint64())
		{
			return m_stringint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringint64(string key)
	{
		if (null != m_stringint64_)
		{
			m_stringint64_.Remove(key);
			if(0 == m_stringint64_.Count)
			{
				clear_has_m_stringint64();
			}
		}
	}
	public bool m_stringint64_contains(string key)
	{
		if (null != m_stringint64_ && has_m_stringint64())
		{
			return m_stringint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringint64()
	{
		if (has_m_stringint64())
		{
			clear_has_m_stringint64();
		}
		if (m_stringint64_ != null)
		{
			m_stringint64_.Clear();
		}
	}
	public void release_m_stringint64()
	{
		if (has_m_stringint64())
		{
			clear_has_m_stringint64();
		}
		if (m_stringint64_ != null)
		{
			m_stringint64_ = null;
		}
	}
	public bool has_m_stringint64()
	{
		return m_bits.HasBit(34);
	}
	private void set_has_m_stringint64()
	{
		m_bits.SetBit(34);
	}
	private void clear_has_m_stringint64()
	{
		m_bits.ClearBit(34);
	}

	private Dictionary<int, long> m_int32sint64_;
	public Dictionary<int, long> m_int32sint64
	{
		set
		{
			m_int32sint64_ = value;
			set_has_m_int32sint64();
		}
	}
	public int m_int32sint64_size()
	{
		if (null != m_int32sint64_ && has_m_int32sint64())
		{
			return m_int32sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, long>.Enumerator m_int32sint64_enumerator()
	{
		if (null != m_int32sint64_ && has_m_int32sint64())
		{
			return m_int32sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32sint64_");
		}
	}
	public void add_m_int32sint64(int key, long value)
	{
		if (null == m_int32sint64_)
		{
			m_int32sint64 = new Dictionary<int, long>();
		}
		if (null != m_int32sint64_)
		{
			m_int32sint64_.Add(key, value);
			set_has_m_int32sint64();
		}
	}
	public long find_m_int32sint64(int key)
	{
		if (null != m_int32sint64_ && has_m_int32sint64())
		{
			return m_int32sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32sint64(int key)
	{
		if (null != m_int32sint64_)
		{
			m_int32sint64_.Remove(key);
			if(0 == m_int32sint64_.Count)
			{
				clear_has_m_int32sint64();
			}
		}
	}
	public bool m_int32sint64_contains(int key)
	{
		if (null != m_int32sint64_ && has_m_int32sint64())
		{
			return m_int32sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32sint64()
	{
		if (has_m_int32sint64())
		{
			clear_has_m_int32sint64();
		}
		if (m_int32sint64_ != null)
		{
			m_int32sint64_.Clear();
		}
	}
	public void release_m_int32sint64()
	{
		if (has_m_int32sint64())
		{
			clear_has_m_int32sint64();
		}
		if (m_int32sint64_ != null)
		{
			m_int32sint64_ = null;
		}
	}
	public bool has_m_int32sint64()
	{
		return m_bits.HasBit(35);
	}
	private void set_has_m_int32sint64()
	{
		m_bits.SetBit(35);
	}
	private void clear_has_m_int32sint64()
	{
		m_bits.ClearBit(35);
	}

	private Dictionary<int, long> m_sint32sint64_;
	public Dictionary<int, long> m_sint32sint64
	{
		set
		{
			m_sint32sint64_ = value;
			set_has_m_sint32sint64();
		}
	}
	public int m_sint32sint64_size()
	{
		if (null != m_sint32sint64_ && has_m_sint32sint64())
		{
			return m_sint32sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, long>.Enumerator m_sint32sint64_enumerator()
	{
		if (null != m_sint32sint64_ && has_m_sint32sint64())
		{
			return m_sint32sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32sint64_");
		}
	}
	public void add_m_sint32sint64(int key, long value)
	{
		if (null == m_sint32sint64_)
		{
			m_sint32sint64 = new Dictionary<int, long>();
		}
		if (null != m_sint32sint64_)
		{
			m_sint32sint64_.Add(key, value);
			set_has_m_sint32sint64();
		}
	}
	public long find_m_sint32sint64(int key)
	{
		if (null != m_sint32sint64_ && has_m_sint32sint64())
		{
			return m_sint32sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32sint64(int key)
	{
		if (null != m_sint32sint64_)
		{
			m_sint32sint64_.Remove(key);
			if(0 == m_sint32sint64_.Count)
			{
				clear_has_m_sint32sint64();
			}
		}
	}
	public bool m_sint32sint64_contains(int key)
	{
		if (null != m_sint32sint64_ && has_m_sint32sint64())
		{
			return m_sint32sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32sint64()
	{
		if (has_m_sint32sint64())
		{
			clear_has_m_sint32sint64();
		}
		if (m_sint32sint64_ != null)
		{
			m_sint32sint64_.Clear();
		}
	}
	public void release_m_sint32sint64()
	{
		if (has_m_sint32sint64())
		{
			clear_has_m_sint32sint64();
		}
		if (m_sint32sint64_ != null)
		{
			m_sint32sint64_ = null;
		}
	}
	public bool has_m_sint32sint64()
	{
		return m_bits.HasBit(36);
	}
	private void set_has_m_sint32sint64()
	{
		m_bits.SetBit(36);
	}
	private void clear_has_m_sint32sint64()
	{
		m_bits.ClearBit(36);
	}

	private Dictionary<uint, long> m_uint32sint64_;
	public Dictionary<uint, long> m_uint32sint64
	{
		set
		{
			m_uint32sint64_ = value;
			set_has_m_uint32sint64();
		}
	}
	public int m_uint32sint64_size()
	{
		if (null != m_uint32sint64_ && has_m_uint32sint64())
		{
			return m_uint32sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, long>.Enumerator m_uint32sint64_enumerator()
	{
		if (null != m_uint32sint64_ && has_m_uint32sint64())
		{
			return m_uint32sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32sint64_");
		}
	}
	public void add_m_uint32sint64(uint key, long value)
	{
		if (null == m_uint32sint64_)
		{
			m_uint32sint64 = new Dictionary<uint, long>();
		}
		if (null != m_uint32sint64_)
		{
			m_uint32sint64_.Add(key, value);
			set_has_m_uint32sint64();
		}
	}
	public long find_m_uint32sint64(uint key)
	{
		if (null != m_uint32sint64_ && has_m_uint32sint64())
		{
			return m_uint32sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32sint64(uint key)
	{
		if (null != m_uint32sint64_)
		{
			m_uint32sint64_.Remove(key);
			if(0 == m_uint32sint64_.Count)
			{
				clear_has_m_uint32sint64();
			}
		}
	}
	public bool m_uint32sint64_contains(uint key)
	{
		if (null != m_uint32sint64_ && has_m_uint32sint64())
		{
			return m_uint32sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32sint64()
	{
		if (has_m_uint32sint64())
		{
			clear_has_m_uint32sint64();
		}
		if (m_uint32sint64_ != null)
		{
			m_uint32sint64_.Clear();
		}
	}
	public void release_m_uint32sint64()
	{
		if (has_m_uint32sint64())
		{
			clear_has_m_uint32sint64();
		}
		if (m_uint32sint64_ != null)
		{
			m_uint32sint64_ = null;
		}
	}
	public bool has_m_uint32sint64()
	{
		return m_bits.HasBit(37);
	}
	private void set_has_m_uint32sint64()
	{
		m_bits.SetBit(37);
	}
	private void clear_has_m_uint32sint64()
	{
		m_bits.ClearBit(37);
	}

	private Dictionary<long, long> m_int64sint64_;
	public Dictionary<long, long> m_int64sint64
	{
		set
		{
			m_int64sint64_ = value;
			set_has_m_int64sint64();
		}
	}
	public int m_int64sint64_size()
	{
		if (null != m_int64sint64_ && has_m_int64sint64())
		{
			return m_int64sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, long>.Enumerator m_int64sint64_enumerator()
	{
		if (null != m_int64sint64_ && has_m_int64sint64())
		{
			return m_int64sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64sint64_");
		}
	}
	public void add_m_int64sint64(long key, long value)
	{
		if (null == m_int64sint64_)
		{
			m_int64sint64 = new Dictionary<long, long>();
		}
		if (null != m_int64sint64_)
		{
			m_int64sint64_.Add(key, value);
			set_has_m_int64sint64();
		}
	}
	public long find_m_int64sint64(long key)
	{
		if (null != m_int64sint64_ && has_m_int64sint64())
		{
			return m_int64sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64sint64(long key)
	{
		if (null != m_int64sint64_)
		{
			m_int64sint64_.Remove(key);
			if(0 == m_int64sint64_.Count)
			{
				clear_has_m_int64sint64();
			}
		}
	}
	public bool m_int64sint64_contains(long key)
	{
		if (null != m_int64sint64_ && has_m_int64sint64())
		{
			return m_int64sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64sint64()
	{
		if (has_m_int64sint64())
		{
			clear_has_m_int64sint64();
		}
		if (m_int64sint64_ != null)
		{
			m_int64sint64_.Clear();
		}
	}
	public void release_m_int64sint64()
	{
		if (has_m_int64sint64())
		{
			clear_has_m_int64sint64();
		}
		if (m_int64sint64_ != null)
		{
			m_int64sint64_ = null;
		}
	}
	public bool has_m_int64sint64()
	{
		return m_bits.HasBit(38);
	}
	private void set_has_m_int64sint64()
	{
		m_bits.SetBit(38);
	}
	private void clear_has_m_int64sint64()
	{
		m_bits.ClearBit(38);
	}

	private Dictionary<long, long> m_sint64sint64_;
	public Dictionary<long, long> m_sint64sint64
	{
		set
		{
			m_sint64sint64_ = value;
			set_has_m_sint64sint64();
		}
	}
	public int m_sint64sint64_size()
	{
		if (null != m_sint64sint64_ && has_m_sint64sint64())
		{
			return m_sint64sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, long>.Enumerator m_sint64sint64_enumerator()
	{
		if (null != m_sint64sint64_ && has_m_sint64sint64())
		{
			return m_sint64sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64sint64_");
		}
	}
	public void add_m_sint64sint64(long key, long value)
	{
		if (null == m_sint64sint64_)
		{
			m_sint64sint64 = new Dictionary<long, long>();
		}
		if (null != m_sint64sint64_)
		{
			m_sint64sint64_.Add(key, value);
			set_has_m_sint64sint64();
		}
	}
	public long find_m_sint64sint64(long key)
	{
		if (null != m_sint64sint64_ && has_m_sint64sint64())
		{
			return m_sint64sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64sint64(long key)
	{
		if (null != m_sint64sint64_)
		{
			m_sint64sint64_.Remove(key);
			if(0 == m_sint64sint64_.Count)
			{
				clear_has_m_sint64sint64();
			}
		}
	}
	public bool m_sint64sint64_contains(long key)
	{
		if (null != m_sint64sint64_ && has_m_sint64sint64())
		{
			return m_sint64sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64sint64()
	{
		if (has_m_sint64sint64())
		{
			clear_has_m_sint64sint64();
		}
		if (m_sint64sint64_ != null)
		{
			m_sint64sint64_.Clear();
		}
	}
	public void release_m_sint64sint64()
	{
		if (has_m_sint64sint64())
		{
			clear_has_m_sint64sint64();
		}
		if (m_sint64sint64_ != null)
		{
			m_sint64sint64_ = null;
		}
	}
	public bool has_m_sint64sint64()
	{
		return m_bits.HasBit(39);
	}
	private void set_has_m_sint64sint64()
	{
		m_bits.SetBit(39);
	}
	private void clear_has_m_sint64sint64()
	{
		m_bits.ClearBit(39);
	}

	private Dictionary<ulong, long> m_uint64sint64_;
	public Dictionary<ulong, long> m_uint64sint64
	{
		set
		{
			m_uint64sint64_ = value;
			set_has_m_uint64sint64();
		}
	}
	public int m_uint64sint64_size()
	{
		if (null != m_uint64sint64_ && has_m_uint64sint64())
		{
			return m_uint64sint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, long>.Enumerator m_uint64sint64_enumerator()
	{
		if (null != m_uint64sint64_ && has_m_uint64sint64())
		{
			return m_uint64sint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64sint64_");
		}
	}
	public void add_m_uint64sint64(ulong key, long value)
	{
		if (null == m_uint64sint64_)
		{
			m_uint64sint64 = new Dictionary<ulong, long>();
		}
		if (null != m_uint64sint64_)
		{
			m_uint64sint64_.Add(key, value);
			set_has_m_uint64sint64();
		}
	}
	public long find_m_uint64sint64(ulong key)
	{
		if (null != m_uint64sint64_ && has_m_uint64sint64())
		{
			return m_uint64sint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64sint64(ulong key)
	{
		if (null != m_uint64sint64_)
		{
			m_uint64sint64_.Remove(key);
			if(0 == m_uint64sint64_.Count)
			{
				clear_has_m_uint64sint64();
			}
		}
	}
	public bool m_uint64sint64_contains(ulong key)
	{
		if (null != m_uint64sint64_ && has_m_uint64sint64())
		{
			return m_uint64sint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64sint64()
	{
		if (has_m_uint64sint64())
		{
			clear_has_m_uint64sint64();
		}
		if (m_uint64sint64_ != null)
		{
			m_uint64sint64_.Clear();
		}
	}
	public void release_m_uint64sint64()
	{
		if (has_m_uint64sint64())
		{
			clear_has_m_uint64sint64();
		}
		if (m_uint64sint64_ != null)
		{
			m_uint64sint64_ = null;
		}
	}
	public bool has_m_uint64sint64()
	{
		return m_bits.HasBit(40);
	}
	private void set_has_m_uint64sint64()
	{
		m_bits.SetBit(40);
	}
	private void clear_has_m_uint64sint64()
	{
		m_bits.ClearBit(40);
	}

	private Dictionary<string, long> m_stringsint64_;
	public Dictionary<string, long> m_stringsint64
	{
		set
		{
			m_stringsint64_ = value;
			set_has_m_stringsint64();
		}
	}
	public int m_stringsint64_size()
	{
		if (null != m_stringsint64_ && has_m_stringsint64())
		{
			return m_stringsint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, long>.Enumerator m_stringsint64_enumerator()
	{
		if (null != m_stringsint64_ && has_m_stringsint64())
		{
			return m_stringsint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringsint64_");
		}
	}
	public void add_m_stringsint64(string key, long value)
	{
		if (null == m_stringsint64_)
		{
			m_stringsint64 = new Dictionary<string, long>();
		}
		if (null != m_stringsint64_)
		{
			m_stringsint64_.Add(key, value);
			set_has_m_stringsint64();
		}
	}
	public long find_m_stringsint64(string key)
	{
		if (null != m_stringsint64_ && has_m_stringsint64())
		{
			return m_stringsint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringsint64(string key)
	{
		if (null != m_stringsint64_)
		{
			m_stringsint64_.Remove(key);
			if(0 == m_stringsint64_.Count)
			{
				clear_has_m_stringsint64();
			}
		}
	}
	public bool m_stringsint64_contains(string key)
	{
		if (null != m_stringsint64_ && has_m_stringsint64())
		{
			return m_stringsint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringsint64()
	{
		if (has_m_stringsint64())
		{
			clear_has_m_stringsint64();
		}
		if (m_stringsint64_ != null)
		{
			m_stringsint64_.Clear();
		}
	}
	public void release_m_stringsint64()
	{
		if (has_m_stringsint64())
		{
			clear_has_m_stringsint64();
		}
		if (m_stringsint64_ != null)
		{
			m_stringsint64_ = null;
		}
	}
	public bool has_m_stringsint64()
	{
		return m_bits.HasBit(41);
	}
	private void set_has_m_stringsint64()
	{
		m_bits.SetBit(41);
	}
	private void clear_has_m_stringsint64()
	{
		m_bits.ClearBit(41);
	}

	private Dictionary<int, ulong> m_int32uint64_;
	public Dictionary<int, ulong> m_int32uint64
	{
		set
		{
			m_int32uint64_ = value;
			set_has_m_int32uint64();
		}
	}
	public int m_int32uint64_size()
	{
		if (null != m_int32uint64_ && has_m_int32uint64())
		{
			return m_int32uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, ulong>.Enumerator m_int32uint64_enumerator()
	{
		if (null != m_int32uint64_ && has_m_int32uint64())
		{
			return m_int32uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32uint64_");
		}
	}
	public void add_m_int32uint64(int key, ulong value)
	{
		if (null == m_int32uint64_)
		{
			m_int32uint64 = new Dictionary<int, ulong>();
		}
		if (null != m_int32uint64_)
		{
			m_int32uint64_.Add(key, value);
			set_has_m_int32uint64();
		}
	}
	public ulong find_m_int32uint64(int key)
	{
		if (null != m_int32uint64_ && has_m_int32uint64())
		{
			return m_int32uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32uint64(int key)
	{
		if (null != m_int32uint64_)
		{
			m_int32uint64_.Remove(key);
			if(0 == m_int32uint64_.Count)
			{
				clear_has_m_int32uint64();
			}
		}
	}
	public bool m_int32uint64_contains(int key)
	{
		if (null != m_int32uint64_ && has_m_int32uint64())
		{
			return m_int32uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32uint64()
	{
		if (has_m_int32uint64())
		{
			clear_has_m_int32uint64();
		}
		if (m_int32uint64_ != null)
		{
			m_int32uint64_.Clear();
		}
	}
	public void release_m_int32uint64()
	{
		if (has_m_int32uint64())
		{
			clear_has_m_int32uint64();
		}
		if (m_int32uint64_ != null)
		{
			m_int32uint64_ = null;
		}
	}
	public bool has_m_int32uint64()
	{
		return m_bits.HasBit(42);
	}
	private void set_has_m_int32uint64()
	{
		m_bits.SetBit(42);
	}
	private void clear_has_m_int32uint64()
	{
		m_bits.ClearBit(42);
	}

	private Dictionary<int, ulong> m_sint32uint64_;
	public Dictionary<int, ulong> m_sint32uint64
	{
		set
		{
			m_sint32uint64_ = value;
			set_has_m_sint32uint64();
		}
	}
	public int m_sint32uint64_size()
	{
		if (null != m_sint32uint64_ && has_m_sint32uint64())
		{
			return m_sint32uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, ulong>.Enumerator m_sint32uint64_enumerator()
	{
		if (null != m_sint32uint64_ && has_m_sint32uint64())
		{
			return m_sint32uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32uint64_");
		}
	}
	public void add_m_sint32uint64(int key, ulong value)
	{
		if (null == m_sint32uint64_)
		{
			m_sint32uint64 = new Dictionary<int, ulong>();
		}
		if (null != m_sint32uint64_)
		{
			m_sint32uint64_.Add(key, value);
			set_has_m_sint32uint64();
		}
	}
	public ulong find_m_sint32uint64(int key)
	{
		if (null != m_sint32uint64_ && has_m_sint32uint64())
		{
			return m_sint32uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32uint64(int key)
	{
		if (null != m_sint32uint64_)
		{
			m_sint32uint64_.Remove(key);
			if(0 == m_sint32uint64_.Count)
			{
				clear_has_m_sint32uint64();
			}
		}
	}
	public bool m_sint32uint64_contains(int key)
	{
		if (null != m_sint32uint64_ && has_m_sint32uint64())
		{
			return m_sint32uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32uint64()
	{
		if (has_m_sint32uint64())
		{
			clear_has_m_sint32uint64();
		}
		if (m_sint32uint64_ != null)
		{
			m_sint32uint64_.Clear();
		}
	}
	public void release_m_sint32uint64()
	{
		if (has_m_sint32uint64())
		{
			clear_has_m_sint32uint64();
		}
		if (m_sint32uint64_ != null)
		{
			m_sint32uint64_ = null;
		}
	}
	public bool has_m_sint32uint64()
	{
		return m_bits.HasBit(43);
	}
	private void set_has_m_sint32uint64()
	{
		m_bits.SetBit(43);
	}
	private void clear_has_m_sint32uint64()
	{
		m_bits.ClearBit(43);
	}

	private Dictionary<uint, ulong> m_uint32uint64_;
	public Dictionary<uint, ulong> m_uint32uint64
	{
		set
		{
			m_uint32uint64_ = value;
			set_has_m_uint32uint64();
		}
	}
	public int m_uint32uint64_size()
	{
		if (null != m_uint32uint64_ && has_m_uint32uint64())
		{
			return m_uint32uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, ulong>.Enumerator m_uint32uint64_enumerator()
	{
		if (null != m_uint32uint64_ && has_m_uint32uint64())
		{
			return m_uint32uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32uint64_");
		}
	}
	public void add_m_uint32uint64(uint key, ulong value)
	{
		if (null == m_uint32uint64_)
		{
			m_uint32uint64 = new Dictionary<uint, ulong>();
		}
		if (null != m_uint32uint64_)
		{
			m_uint32uint64_.Add(key, value);
			set_has_m_uint32uint64();
		}
	}
	public ulong find_m_uint32uint64(uint key)
	{
		if (null != m_uint32uint64_ && has_m_uint32uint64())
		{
			return m_uint32uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32uint64(uint key)
	{
		if (null != m_uint32uint64_)
		{
			m_uint32uint64_.Remove(key);
			if(0 == m_uint32uint64_.Count)
			{
				clear_has_m_uint32uint64();
			}
		}
	}
	public bool m_uint32uint64_contains(uint key)
	{
		if (null != m_uint32uint64_ && has_m_uint32uint64())
		{
			return m_uint32uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32uint64()
	{
		if (has_m_uint32uint64())
		{
			clear_has_m_uint32uint64();
		}
		if (m_uint32uint64_ != null)
		{
			m_uint32uint64_.Clear();
		}
	}
	public void release_m_uint32uint64()
	{
		if (has_m_uint32uint64())
		{
			clear_has_m_uint32uint64();
		}
		if (m_uint32uint64_ != null)
		{
			m_uint32uint64_ = null;
		}
	}
	public bool has_m_uint32uint64()
	{
		return m_bits.HasBit(44);
	}
	private void set_has_m_uint32uint64()
	{
		m_bits.SetBit(44);
	}
	private void clear_has_m_uint32uint64()
	{
		m_bits.ClearBit(44);
	}

	private Dictionary<long, ulong> m_int64uint64_;
	public Dictionary<long, ulong> m_int64uint64
	{
		set
		{
			m_int64uint64_ = value;
			set_has_m_int64uint64();
		}
	}
	public int m_int64uint64_size()
	{
		if (null != m_int64uint64_ && has_m_int64uint64())
		{
			return m_int64uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, ulong>.Enumerator m_int64uint64_enumerator()
	{
		if (null != m_int64uint64_ && has_m_int64uint64())
		{
			return m_int64uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64uint64_");
		}
	}
	public void add_m_int64uint64(long key, ulong value)
	{
		if (null == m_int64uint64_)
		{
			m_int64uint64 = new Dictionary<long, ulong>();
		}
		if (null != m_int64uint64_)
		{
			m_int64uint64_.Add(key, value);
			set_has_m_int64uint64();
		}
	}
	public ulong find_m_int64uint64(long key)
	{
		if (null != m_int64uint64_ && has_m_int64uint64())
		{
			return m_int64uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64uint64(long key)
	{
		if (null != m_int64uint64_)
		{
			m_int64uint64_.Remove(key);
			if(0 == m_int64uint64_.Count)
			{
				clear_has_m_int64uint64();
			}
		}
	}
	public bool m_int64uint64_contains(long key)
	{
		if (null != m_int64uint64_ && has_m_int64uint64())
		{
			return m_int64uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64uint64()
	{
		if (has_m_int64uint64())
		{
			clear_has_m_int64uint64();
		}
		if (m_int64uint64_ != null)
		{
			m_int64uint64_.Clear();
		}
	}
	public void release_m_int64uint64()
	{
		if (has_m_int64uint64())
		{
			clear_has_m_int64uint64();
		}
		if (m_int64uint64_ != null)
		{
			m_int64uint64_ = null;
		}
	}
	public bool has_m_int64uint64()
	{
		return m_bits.HasBit(45);
	}
	private void set_has_m_int64uint64()
	{
		m_bits.SetBit(45);
	}
	private void clear_has_m_int64uint64()
	{
		m_bits.ClearBit(45);
	}

	private Dictionary<long, ulong> m_sint64uint64_;
	public Dictionary<long, ulong> m_sint64uint64
	{
		set
		{
			m_sint64uint64_ = value;
			set_has_m_sint64uint64();
		}
	}
	public int m_sint64uint64_size()
	{
		if (null != m_sint64uint64_ && has_m_sint64uint64())
		{
			return m_sint64uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, ulong>.Enumerator m_sint64uint64_enumerator()
	{
		if (null != m_sint64uint64_ && has_m_sint64uint64())
		{
			return m_sint64uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64uint64_");
		}
	}
	public void add_m_sint64uint64(long key, ulong value)
	{
		if (null == m_sint64uint64_)
		{
			m_sint64uint64 = new Dictionary<long, ulong>();
		}
		if (null != m_sint64uint64_)
		{
			m_sint64uint64_.Add(key, value);
			set_has_m_sint64uint64();
		}
	}
	public ulong find_m_sint64uint64(long key)
	{
		if (null != m_sint64uint64_ && has_m_sint64uint64())
		{
			return m_sint64uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64uint64(long key)
	{
		if (null != m_sint64uint64_)
		{
			m_sint64uint64_.Remove(key);
			if(0 == m_sint64uint64_.Count)
			{
				clear_has_m_sint64uint64();
			}
		}
	}
	public bool m_sint64uint64_contains(long key)
	{
		if (null != m_sint64uint64_ && has_m_sint64uint64())
		{
			return m_sint64uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64uint64()
	{
		if (has_m_sint64uint64())
		{
			clear_has_m_sint64uint64();
		}
		if (m_sint64uint64_ != null)
		{
			m_sint64uint64_.Clear();
		}
	}
	public void release_m_sint64uint64()
	{
		if (has_m_sint64uint64())
		{
			clear_has_m_sint64uint64();
		}
		if (m_sint64uint64_ != null)
		{
			m_sint64uint64_ = null;
		}
	}
	public bool has_m_sint64uint64()
	{
		return m_bits.HasBit(46);
	}
	private void set_has_m_sint64uint64()
	{
		m_bits.SetBit(46);
	}
	private void clear_has_m_sint64uint64()
	{
		m_bits.ClearBit(46);
	}

	private Dictionary<ulong, ulong> m_uint64uint64_;
	public Dictionary<ulong, ulong> m_uint64uint64
	{
		set
		{
			m_uint64uint64_ = value;
			set_has_m_uint64uint64();
		}
	}
	public int m_uint64uint64_size()
	{
		if (null != m_uint64uint64_ && has_m_uint64uint64())
		{
			return m_uint64uint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, ulong>.Enumerator m_uint64uint64_enumerator()
	{
		if (null != m_uint64uint64_ && has_m_uint64uint64())
		{
			return m_uint64uint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64uint64_");
		}
	}
	public void add_m_uint64uint64(ulong key, ulong value)
	{
		if (null == m_uint64uint64_)
		{
			m_uint64uint64 = new Dictionary<ulong, ulong>();
		}
		if (null != m_uint64uint64_)
		{
			m_uint64uint64_.Add(key, value);
			set_has_m_uint64uint64();
		}
	}
	public ulong find_m_uint64uint64(ulong key)
	{
		if (null != m_uint64uint64_ && has_m_uint64uint64())
		{
			return m_uint64uint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64uint64(ulong key)
	{
		if (null != m_uint64uint64_)
		{
			m_uint64uint64_.Remove(key);
			if(0 == m_uint64uint64_.Count)
			{
				clear_has_m_uint64uint64();
			}
		}
	}
	public bool m_uint64uint64_contains(ulong key)
	{
		if (null != m_uint64uint64_ && has_m_uint64uint64())
		{
			return m_uint64uint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64uint64()
	{
		if (has_m_uint64uint64())
		{
			clear_has_m_uint64uint64();
		}
		if (m_uint64uint64_ != null)
		{
			m_uint64uint64_.Clear();
		}
	}
	public void release_m_uint64uint64()
	{
		if (has_m_uint64uint64())
		{
			clear_has_m_uint64uint64();
		}
		if (m_uint64uint64_ != null)
		{
			m_uint64uint64_ = null;
		}
	}
	public bool has_m_uint64uint64()
	{
		return m_bits.HasBit(47);
	}
	private void set_has_m_uint64uint64()
	{
		m_bits.SetBit(47);
	}
	private void clear_has_m_uint64uint64()
	{
		m_bits.ClearBit(47);
	}

	private Dictionary<string, ulong> m_stringuint64_;
	public Dictionary<string, ulong> m_stringuint64
	{
		set
		{
			m_stringuint64_ = value;
			set_has_m_stringuint64();
		}
	}
	public int m_stringuint64_size()
	{
		if (null != m_stringuint64_ && has_m_stringuint64())
		{
			return m_stringuint64_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, ulong>.Enumerator m_stringuint64_enumerator()
	{
		if (null != m_stringuint64_ && has_m_stringuint64())
		{
			return m_stringuint64_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringuint64_");
		}
	}
	public void add_m_stringuint64(string key, ulong value)
	{
		if (null == m_stringuint64_)
		{
			m_stringuint64 = new Dictionary<string, ulong>();
		}
		if (null != m_stringuint64_)
		{
			m_stringuint64_.Add(key, value);
			set_has_m_stringuint64();
		}
	}
	public ulong find_m_stringuint64(string key)
	{
		if (null != m_stringuint64_ && has_m_stringuint64())
		{
			return m_stringuint64_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringuint64(string key)
	{
		if (null != m_stringuint64_)
		{
			m_stringuint64_.Remove(key);
			if(0 == m_stringuint64_.Count)
			{
				clear_has_m_stringuint64();
			}
		}
	}
	public bool m_stringuint64_contains(string key)
	{
		if (null != m_stringuint64_ && has_m_stringuint64())
		{
			return m_stringuint64_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringuint64()
	{
		if (has_m_stringuint64())
		{
			clear_has_m_stringuint64();
		}
		if (m_stringuint64_ != null)
		{
			m_stringuint64_.Clear();
		}
	}
	public void release_m_stringuint64()
	{
		if (has_m_stringuint64())
		{
			clear_has_m_stringuint64();
		}
		if (m_stringuint64_ != null)
		{
			m_stringuint64_ = null;
		}
	}
	public bool has_m_stringuint64()
	{
		return m_bits.HasBit(48);
	}
	private void set_has_m_stringuint64()
	{
		m_bits.SetBit(48);
	}
	private void clear_has_m_stringuint64()
	{
		m_bits.ClearBit(48);
	}

	private Dictionary<int, float> m_int32float_;
	public Dictionary<int, float> m_int32float
	{
		set
		{
			m_int32float_ = value;
			set_has_m_int32float();
		}
	}
	public int m_int32float_size()
	{
		if (null != m_int32float_ && has_m_int32float())
		{
			return m_int32float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, float>.Enumerator m_int32float_enumerator()
	{
		if (null != m_int32float_ && has_m_int32float())
		{
			return m_int32float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32float_");
		}
	}
	public void add_m_int32float(int key, float value)
	{
		if (null == m_int32float_)
		{
			m_int32float = new Dictionary<int, float>();
		}
		if (null != m_int32float_)
		{
			m_int32float_.Add(key, value);
			set_has_m_int32float();
		}
	}
	public float find_m_int32float(int key)
	{
		if (null != m_int32float_ && has_m_int32float())
		{
			return m_int32float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32float(int key)
	{
		if (null != m_int32float_)
		{
			m_int32float_.Remove(key);
			if(0 == m_int32float_.Count)
			{
				clear_has_m_int32float();
			}
		}
	}
	public bool m_int32float_contains(int key)
	{
		if (null != m_int32float_ && has_m_int32float())
		{
			return m_int32float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32float()
	{
		if (has_m_int32float())
		{
			clear_has_m_int32float();
		}
		if (m_int32float_ != null)
		{
			m_int32float_.Clear();
		}
	}
	public void release_m_int32float()
	{
		if (has_m_int32float())
		{
			clear_has_m_int32float();
		}
		if (m_int32float_ != null)
		{
			m_int32float_ = null;
		}
	}
	public bool has_m_int32float()
	{
		return m_bits.HasBit(49);
	}
	private void set_has_m_int32float()
	{
		m_bits.SetBit(49);
	}
	private void clear_has_m_int32float()
	{
		m_bits.ClearBit(49);
	}

	private Dictionary<int, float> m_sint32float_;
	public Dictionary<int, float> m_sint32float
	{
		set
		{
			m_sint32float_ = value;
			set_has_m_sint32float();
		}
	}
	public int m_sint32float_size()
	{
		if (null != m_sint32float_ && has_m_sint32float())
		{
			return m_sint32float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, float>.Enumerator m_sint32float_enumerator()
	{
		if (null != m_sint32float_ && has_m_sint32float())
		{
			return m_sint32float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32float_");
		}
	}
	public void add_m_sint32float(int key, float value)
	{
		if (null == m_sint32float_)
		{
			m_sint32float = new Dictionary<int, float>();
		}
		if (null != m_sint32float_)
		{
			m_sint32float_.Add(key, value);
			set_has_m_sint32float();
		}
	}
	public float find_m_sint32float(int key)
	{
		if (null != m_sint32float_ && has_m_sint32float())
		{
			return m_sint32float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32float(int key)
	{
		if (null != m_sint32float_)
		{
			m_sint32float_.Remove(key);
			if(0 == m_sint32float_.Count)
			{
				clear_has_m_sint32float();
			}
		}
	}
	public bool m_sint32float_contains(int key)
	{
		if (null != m_sint32float_ && has_m_sint32float())
		{
			return m_sint32float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32float()
	{
		if (has_m_sint32float())
		{
			clear_has_m_sint32float();
		}
		if (m_sint32float_ != null)
		{
			m_sint32float_.Clear();
		}
	}
	public void release_m_sint32float()
	{
		if (has_m_sint32float())
		{
			clear_has_m_sint32float();
		}
		if (m_sint32float_ != null)
		{
			m_sint32float_ = null;
		}
	}
	public bool has_m_sint32float()
	{
		return m_bits.HasBit(50);
	}
	private void set_has_m_sint32float()
	{
		m_bits.SetBit(50);
	}
	private void clear_has_m_sint32float()
	{
		m_bits.ClearBit(50);
	}

	private Dictionary<uint, float> m_uint32float_;
	public Dictionary<uint, float> m_uint32float
	{
		set
		{
			m_uint32float_ = value;
			set_has_m_uint32float();
		}
	}
	public int m_uint32float_size()
	{
		if (null != m_uint32float_ && has_m_uint32float())
		{
			return m_uint32float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, float>.Enumerator m_uint32float_enumerator()
	{
		if (null != m_uint32float_ && has_m_uint32float())
		{
			return m_uint32float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32float_");
		}
	}
	public void add_m_uint32float(uint key, float value)
	{
		if (null == m_uint32float_)
		{
			m_uint32float = new Dictionary<uint, float>();
		}
		if (null != m_uint32float_)
		{
			m_uint32float_.Add(key, value);
			set_has_m_uint32float();
		}
	}
	public float find_m_uint32float(uint key)
	{
		if (null != m_uint32float_ && has_m_uint32float())
		{
			return m_uint32float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32float(uint key)
	{
		if (null != m_uint32float_)
		{
			m_uint32float_.Remove(key);
			if(0 == m_uint32float_.Count)
			{
				clear_has_m_uint32float();
			}
		}
	}
	public bool m_uint32float_contains(uint key)
	{
		if (null != m_uint32float_ && has_m_uint32float())
		{
			return m_uint32float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32float()
	{
		if (has_m_uint32float())
		{
			clear_has_m_uint32float();
		}
		if (m_uint32float_ != null)
		{
			m_uint32float_.Clear();
		}
	}
	public void release_m_uint32float()
	{
		if (has_m_uint32float())
		{
			clear_has_m_uint32float();
		}
		if (m_uint32float_ != null)
		{
			m_uint32float_ = null;
		}
	}
	public bool has_m_uint32float()
	{
		return m_bits.HasBit(51);
	}
	private void set_has_m_uint32float()
	{
		m_bits.SetBit(51);
	}
	private void clear_has_m_uint32float()
	{
		m_bits.ClearBit(51);
	}

	private Dictionary<long, float> m_int64float_;
	public Dictionary<long, float> m_int64float
	{
		set
		{
			m_int64float_ = value;
			set_has_m_int64float();
		}
	}
	public int m_int64float_size()
	{
		if (null != m_int64float_ && has_m_int64float())
		{
			return m_int64float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, float>.Enumerator m_int64float_enumerator()
	{
		if (null != m_int64float_ && has_m_int64float())
		{
			return m_int64float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64float_");
		}
	}
	public void add_m_int64float(long key, float value)
	{
		if (null == m_int64float_)
		{
			m_int64float = new Dictionary<long, float>();
		}
		if (null != m_int64float_)
		{
			m_int64float_.Add(key, value);
			set_has_m_int64float();
		}
	}
	public float find_m_int64float(long key)
	{
		if (null != m_int64float_ && has_m_int64float())
		{
			return m_int64float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64float(long key)
	{
		if (null != m_int64float_)
		{
			m_int64float_.Remove(key);
			if(0 == m_int64float_.Count)
			{
				clear_has_m_int64float();
			}
		}
	}
	public bool m_int64float_contains(long key)
	{
		if (null != m_int64float_ && has_m_int64float())
		{
			return m_int64float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64float()
	{
		if (has_m_int64float())
		{
			clear_has_m_int64float();
		}
		if (m_int64float_ != null)
		{
			m_int64float_.Clear();
		}
	}
	public void release_m_int64float()
	{
		if (has_m_int64float())
		{
			clear_has_m_int64float();
		}
		if (m_int64float_ != null)
		{
			m_int64float_ = null;
		}
	}
	public bool has_m_int64float()
	{
		return m_bits.HasBit(52);
	}
	private void set_has_m_int64float()
	{
		m_bits.SetBit(52);
	}
	private void clear_has_m_int64float()
	{
		m_bits.ClearBit(52);
	}

	private Dictionary<long, float> m_sint64float_;
	public Dictionary<long, float> m_sint64float
	{
		set
		{
			m_sint64float_ = value;
			set_has_m_sint64float();
		}
	}
	public int m_sint64float_size()
	{
		if (null != m_sint64float_ && has_m_sint64float())
		{
			return m_sint64float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, float>.Enumerator m_sint64float_enumerator()
	{
		if (null != m_sint64float_ && has_m_sint64float())
		{
			return m_sint64float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64float_");
		}
	}
	public void add_m_sint64float(long key, float value)
	{
		if (null == m_sint64float_)
		{
			m_sint64float = new Dictionary<long, float>();
		}
		if (null != m_sint64float_)
		{
			m_sint64float_.Add(key, value);
			set_has_m_sint64float();
		}
	}
	public float find_m_sint64float(long key)
	{
		if (null != m_sint64float_ && has_m_sint64float())
		{
			return m_sint64float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64float(long key)
	{
		if (null != m_sint64float_)
		{
			m_sint64float_.Remove(key);
			if(0 == m_sint64float_.Count)
			{
				clear_has_m_sint64float();
			}
		}
	}
	public bool m_sint64float_contains(long key)
	{
		if (null != m_sint64float_ && has_m_sint64float())
		{
			return m_sint64float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64float()
	{
		if (has_m_sint64float())
		{
			clear_has_m_sint64float();
		}
		if (m_sint64float_ != null)
		{
			m_sint64float_.Clear();
		}
	}
	public void release_m_sint64float()
	{
		if (has_m_sint64float())
		{
			clear_has_m_sint64float();
		}
		if (m_sint64float_ != null)
		{
			m_sint64float_ = null;
		}
	}
	public bool has_m_sint64float()
	{
		return m_bits.HasBit(53);
	}
	private void set_has_m_sint64float()
	{
		m_bits.SetBit(53);
	}
	private void clear_has_m_sint64float()
	{
		m_bits.ClearBit(53);
	}

	private Dictionary<ulong, float> m_uint64float_;
	public Dictionary<ulong, float> m_uint64float
	{
		set
		{
			m_uint64float_ = value;
			set_has_m_uint64float();
		}
	}
	public int m_uint64float_size()
	{
		if (null != m_uint64float_ && has_m_uint64float())
		{
			return m_uint64float_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, float>.Enumerator m_uint64float_enumerator()
	{
		if (null != m_uint64float_ && has_m_uint64float())
		{
			return m_uint64float_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64float_");
		}
	}
	public void add_m_uint64float(ulong key, float value)
	{
		if (null == m_uint64float_)
		{
			m_uint64float = new Dictionary<ulong, float>();
		}
		if (null != m_uint64float_)
		{
			m_uint64float_.Add(key, value);
			set_has_m_uint64float();
		}
	}
	public float find_m_uint64float(ulong key)
	{
		if (null != m_uint64float_ && has_m_uint64float())
		{
			return m_uint64float_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64float(ulong key)
	{
		if (null != m_uint64float_)
		{
			m_uint64float_.Remove(key);
			if(0 == m_uint64float_.Count)
			{
				clear_has_m_uint64float();
			}
		}
	}
	public bool m_uint64float_contains(ulong key)
	{
		if (null != m_uint64float_ && has_m_uint64float())
		{
			return m_uint64float_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64float()
	{
		if (has_m_uint64float())
		{
			clear_has_m_uint64float();
		}
		if (m_uint64float_ != null)
		{
			m_uint64float_.Clear();
		}
	}
	public void release_m_uint64float()
	{
		if (has_m_uint64float())
		{
			clear_has_m_uint64float();
		}
		if (m_uint64float_ != null)
		{
			m_uint64float_ = null;
		}
	}
	public bool has_m_uint64float()
	{
		return m_bits.HasBit(54);
	}
	private void set_has_m_uint64float()
	{
		m_bits.SetBit(54);
	}
	private void clear_has_m_uint64float()
	{
		m_bits.ClearBit(54);
	}

	private Dictionary<string, float> m_stringfloat_;
	public Dictionary<string, float> m_stringfloat
	{
		set
		{
			m_stringfloat_ = value;
			set_has_m_stringfloat();
		}
	}
	public int m_stringfloat_size()
	{
		if (null != m_stringfloat_ && has_m_stringfloat())
		{
			return m_stringfloat_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, float>.Enumerator m_stringfloat_enumerator()
	{
		if (null != m_stringfloat_ && has_m_stringfloat())
		{
			return m_stringfloat_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringfloat_");
		}
	}
	public void add_m_stringfloat(string key, float value)
	{
		if (null == m_stringfloat_)
		{
			m_stringfloat = new Dictionary<string, float>();
		}
		if (null != m_stringfloat_)
		{
			m_stringfloat_.Add(key, value);
			set_has_m_stringfloat();
		}
	}
	public float find_m_stringfloat(string key)
	{
		if (null != m_stringfloat_ && has_m_stringfloat())
		{
			return m_stringfloat_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringfloat(string key)
	{
		if (null != m_stringfloat_)
		{
			m_stringfloat_.Remove(key);
			if(0 == m_stringfloat_.Count)
			{
				clear_has_m_stringfloat();
			}
		}
	}
	public bool m_stringfloat_contains(string key)
	{
		if (null != m_stringfloat_ && has_m_stringfloat())
		{
			return m_stringfloat_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringfloat()
	{
		if (has_m_stringfloat())
		{
			clear_has_m_stringfloat();
		}
		if (m_stringfloat_ != null)
		{
			m_stringfloat_.Clear();
		}
	}
	public void release_m_stringfloat()
	{
		if (has_m_stringfloat())
		{
			clear_has_m_stringfloat();
		}
		if (m_stringfloat_ != null)
		{
			m_stringfloat_ = null;
		}
	}
	public bool has_m_stringfloat()
	{
		return m_bits.HasBit(55);
	}
	private void set_has_m_stringfloat()
	{
		m_bits.SetBit(55);
	}
	private void clear_has_m_stringfloat()
	{
		m_bits.ClearBit(55);
	}

	private Dictionary<int, double> m_int32double_;
	public Dictionary<int, double> m_int32double
	{
		set
		{
			m_int32double_ = value;
			set_has_m_int32double();
		}
	}
	public int m_int32double_size()
	{
		if (null != m_int32double_ && has_m_int32double())
		{
			return m_int32double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, double>.Enumerator m_int32double_enumerator()
	{
		if (null != m_int32double_ && has_m_int32double())
		{
			return m_int32double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32double_");
		}
	}
	public void add_m_int32double(int key, double value)
	{
		if (null == m_int32double_)
		{
			m_int32double = new Dictionary<int, double>();
		}
		if (null != m_int32double_)
		{
			m_int32double_.Add(key, value);
			set_has_m_int32double();
		}
	}
	public double find_m_int32double(int key)
	{
		if (null != m_int32double_ && has_m_int32double())
		{
			return m_int32double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32double(int key)
	{
		if (null != m_int32double_)
		{
			m_int32double_.Remove(key);
			if(0 == m_int32double_.Count)
			{
				clear_has_m_int32double();
			}
		}
	}
	public bool m_int32double_contains(int key)
	{
		if (null != m_int32double_ && has_m_int32double())
		{
			return m_int32double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32double()
	{
		if (has_m_int32double())
		{
			clear_has_m_int32double();
		}
		if (m_int32double_ != null)
		{
			m_int32double_.Clear();
		}
	}
	public void release_m_int32double()
	{
		if (has_m_int32double())
		{
			clear_has_m_int32double();
		}
		if (m_int32double_ != null)
		{
			m_int32double_ = null;
		}
	}
	public bool has_m_int32double()
	{
		return m_bits.HasBit(56);
	}
	private void set_has_m_int32double()
	{
		m_bits.SetBit(56);
	}
	private void clear_has_m_int32double()
	{
		m_bits.ClearBit(56);
	}

	private Dictionary<int, double> m_sint32double_;
	public Dictionary<int, double> m_sint32double
	{
		set
		{
			m_sint32double_ = value;
			set_has_m_sint32double();
		}
	}
	public int m_sint32double_size()
	{
		if (null != m_sint32double_ && has_m_sint32double())
		{
			return m_sint32double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, double>.Enumerator m_sint32double_enumerator()
	{
		if (null != m_sint32double_ && has_m_sint32double())
		{
			return m_sint32double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32double_");
		}
	}
	public void add_m_sint32double(int key, double value)
	{
		if (null == m_sint32double_)
		{
			m_sint32double = new Dictionary<int, double>();
		}
		if (null != m_sint32double_)
		{
			m_sint32double_.Add(key, value);
			set_has_m_sint32double();
		}
	}
	public double find_m_sint32double(int key)
	{
		if (null != m_sint32double_ && has_m_sint32double())
		{
			return m_sint32double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32double(int key)
	{
		if (null != m_sint32double_)
		{
			m_sint32double_.Remove(key);
			if(0 == m_sint32double_.Count)
			{
				clear_has_m_sint32double();
			}
		}
	}
	public bool m_sint32double_contains(int key)
	{
		if (null != m_sint32double_ && has_m_sint32double())
		{
			return m_sint32double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32double()
	{
		if (has_m_sint32double())
		{
			clear_has_m_sint32double();
		}
		if (m_sint32double_ != null)
		{
			m_sint32double_.Clear();
		}
	}
	public void release_m_sint32double()
	{
		if (has_m_sint32double())
		{
			clear_has_m_sint32double();
		}
		if (m_sint32double_ != null)
		{
			m_sint32double_ = null;
		}
	}
	public bool has_m_sint32double()
	{
		return m_bits.HasBit(57);
	}
	private void set_has_m_sint32double()
	{
		m_bits.SetBit(57);
	}
	private void clear_has_m_sint32double()
	{
		m_bits.ClearBit(57);
	}

	private Dictionary<uint, double> m_uint32double_;
	public Dictionary<uint, double> m_uint32double
	{
		set
		{
			m_uint32double_ = value;
			set_has_m_uint32double();
		}
	}
	public int m_uint32double_size()
	{
		if (null != m_uint32double_ && has_m_uint32double())
		{
			return m_uint32double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, double>.Enumerator m_uint32double_enumerator()
	{
		if (null != m_uint32double_ && has_m_uint32double())
		{
			return m_uint32double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32double_");
		}
	}
	public void add_m_uint32double(uint key, double value)
	{
		if (null == m_uint32double_)
		{
			m_uint32double = new Dictionary<uint, double>();
		}
		if (null != m_uint32double_)
		{
			m_uint32double_.Add(key, value);
			set_has_m_uint32double();
		}
	}
	public double find_m_uint32double(uint key)
	{
		if (null != m_uint32double_ && has_m_uint32double())
		{
			return m_uint32double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32double(uint key)
	{
		if (null != m_uint32double_)
		{
			m_uint32double_.Remove(key);
			if(0 == m_uint32double_.Count)
			{
				clear_has_m_uint32double();
			}
		}
	}
	public bool m_uint32double_contains(uint key)
	{
		if (null != m_uint32double_ && has_m_uint32double())
		{
			return m_uint32double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32double()
	{
		if (has_m_uint32double())
		{
			clear_has_m_uint32double();
		}
		if (m_uint32double_ != null)
		{
			m_uint32double_.Clear();
		}
	}
	public void release_m_uint32double()
	{
		if (has_m_uint32double())
		{
			clear_has_m_uint32double();
		}
		if (m_uint32double_ != null)
		{
			m_uint32double_ = null;
		}
	}
	public bool has_m_uint32double()
	{
		return m_bits.HasBit(58);
	}
	private void set_has_m_uint32double()
	{
		m_bits.SetBit(58);
	}
	private void clear_has_m_uint32double()
	{
		m_bits.ClearBit(58);
	}

	private Dictionary<long, double> m_int64double_;
	public Dictionary<long, double> m_int64double
	{
		set
		{
			m_int64double_ = value;
			set_has_m_int64double();
		}
	}
	public int m_int64double_size()
	{
		if (null != m_int64double_ && has_m_int64double())
		{
			return m_int64double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, double>.Enumerator m_int64double_enumerator()
	{
		if (null != m_int64double_ && has_m_int64double())
		{
			return m_int64double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64double_");
		}
	}
	public void add_m_int64double(long key, double value)
	{
		if (null == m_int64double_)
		{
			m_int64double = new Dictionary<long, double>();
		}
		if (null != m_int64double_)
		{
			m_int64double_.Add(key, value);
			set_has_m_int64double();
		}
	}
	public double find_m_int64double(long key)
	{
		if (null != m_int64double_ && has_m_int64double())
		{
			return m_int64double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64double(long key)
	{
		if (null != m_int64double_)
		{
			m_int64double_.Remove(key);
			if(0 == m_int64double_.Count)
			{
				clear_has_m_int64double();
			}
		}
	}
	public bool m_int64double_contains(long key)
	{
		if (null != m_int64double_ && has_m_int64double())
		{
			return m_int64double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64double()
	{
		if (has_m_int64double())
		{
			clear_has_m_int64double();
		}
		if (m_int64double_ != null)
		{
			m_int64double_.Clear();
		}
	}
	public void release_m_int64double()
	{
		if (has_m_int64double())
		{
			clear_has_m_int64double();
		}
		if (m_int64double_ != null)
		{
			m_int64double_ = null;
		}
	}
	public bool has_m_int64double()
	{
		return m_bits.HasBit(59);
	}
	private void set_has_m_int64double()
	{
		m_bits.SetBit(59);
	}
	private void clear_has_m_int64double()
	{
		m_bits.ClearBit(59);
	}

	private Dictionary<long, double> m_sint64double_;
	public Dictionary<long, double> m_sint64double
	{
		set
		{
			m_sint64double_ = value;
			set_has_m_sint64double();
		}
	}
	public int m_sint64double_size()
	{
		if (null != m_sint64double_ && has_m_sint64double())
		{
			return m_sint64double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, double>.Enumerator m_sint64double_enumerator()
	{
		if (null != m_sint64double_ && has_m_sint64double())
		{
			return m_sint64double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64double_");
		}
	}
	public void add_m_sint64double(long key, double value)
	{
		if (null == m_sint64double_)
		{
			m_sint64double = new Dictionary<long, double>();
		}
		if (null != m_sint64double_)
		{
			m_sint64double_.Add(key, value);
			set_has_m_sint64double();
		}
	}
	public double find_m_sint64double(long key)
	{
		if (null != m_sint64double_ && has_m_sint64double())
		{
			return m_sint64double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64double(long key)
	{
		if (null != m_sint64double_)
		{
			m_sint64double_.Remove(key);
			if(0 == m_sint64double_.Count)
			{
				clear_has_m_sint64double();
			}
		}
	}
	public bool m_sint64double_contains(long key)
	{
		if (null != m_sint64double_ && has_m_sint64double())
		{
			return m_sint64double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64double()
	{
		if (has_m_sint64double())
		{
			clear_has_m_sint64double();
		}
		if (m_sint64double_ != null)
		{
			m_sint64double_.Clear();
		}
	}
	public void release_m_sint64double()
	{
		if (has_m_sint64double())
		{
			clear_has_m_sint64double();
		}
		if (m_sint64double_ != null)
		{
			m_sint64double_ = null;
		}
	}
	public bool has_m_sint64double()
	{
		return m_bits.HasBit(60);
	}
	private void set_has_m_sint64double()
	{
		m_bits.SetBit(60);
	}
	private void clear_has_m_sint64double()
	{
		m_bits.ClearBit(60);
	}

	private Dictionary<ulong, double> m_uint64double_;
	public Dictionary<ulong, double> m_uint64double
	{
		set
		{
			m_uint64double_ = value;
			set_has_m_uint64double();
		}
	}
	public int m_uint64double_size()
	{
		if (null != m_uint64double_ && has_m_uint64double())
		{
			return m_uint64double_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, double>.Enumerator m_uint64double_enumerator()
	{
		if (null != m_uint64double_ && has_m_uint64double())
		{
			return m_uint64double_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64double_");
		}
	}
	public void add_m_uint64double(ulong key, double value)
	{
		if (null == m_uint64double_)
		{
			m_uint64double = new Dictionary<ulong, double>();
		}
		if (null != m_uint64double_)
		{
			m_uint64double_.Add(key, value);
			set_has_m_uint64double();
		}
	}
	public double find_m_uint64double(ulong key)
	{
		if (null != m_uint64double_ && has_m_uint64double())
		{
			return m_uint64double_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64double(ulong key)
	{
		if (null != m_uint64double_)
		{
			m_uint64double_.Remove(key);
			if(0 == m_uint64double_.Count)
			{
				clear_has_m_uint64double();
			}
		}
	}
	public bool m_uint64double_contains(ulong key)
	{
		if (null != m_uint64double_ && has_m_uint64double())
		{
			return m_uint64double_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64double()
	{
		if (has_m_uint64double())
		{
			clear_has_m_uint64double();
		}
		if (m_uint64double_ != null)
		{
			m_uint64double_.Clear();
		}
	}
	public void release_m_uint64double()
	{
		if (has_m_uint64double())
		{
			clear_has_m_uint64double();
		}
		if (m_uint64double_ != null)
		{
			m_uint64double_ = null;
		}
	}
	public bool has_m_uint64double()
	{
		return m_bits.HasBit(61);
	}
	private void set_has_m_uint64double()
	{
		m_bits.SetBit(61);
	}
	private void clear_has_m_uint64double()
	{
		m_bits.ClearBit(61);
	}

	private Dictionary<string, double> m_stringdouble_;
	public Dictionary<string, double> m_stringdouble
	{
		set
		{
			m_stringdouble_ = value;
			set_has_m_stringdouble();
		}
	}
	public int m_stringdouble_size()
	{
		if (null != m_stringdouble_ && has_m_stringdouble())
		{
			return m_stringdouble_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, double>.Enumerator m_stringdouble_enumerator()
	{
		if (null != m_stringdouble_ && has_m_stringdouble())
		{
			return m_stringdouble_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringdouble_");
		}
	}
	public void add_m_stringdouble(string key, double value)
	{
		if (null == m_stringdouble_)
		{
			m_stringdouble = new Dictionary<string, double>();
		}
		if (null != m_stringdouble_)
		{
			m_stringdouble_.Add(key, value);
			set_has_m_stringdouble();
		}
	}
	public double find_m_stringdouble(string key)
	{
		if (null != m_stringdouble_ && has_m_stringdouble())
		{
			return m_stringdouble_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringdouble(string key)
	{
		if (null != m_stringdouble_)
		{
			m_stringdouble_.Remove(key);
			if(0 == m_stringdouble_.Count)
			{
				clear_has_m_stringdouble();
			}
		}
	}
	public bool m_stringdouble_contains(string key)
	{
		if (null != m_stringdouble_ && has_m_stringdouble())
		{
			return m_stringdouble_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringdouble()
	{
		if (has_m_stringdouble())
		{
			clear_has_m_stringdouble();
		}
		if (m_stringdouble_ != null)
		{
			m_stringdouble_.Clear();
		}
	}
	public void release_m_stringdouble()
	{
		if (has_m_stringdouble())
		{
			clear_has_m_stringdouble();
		}
		if (m_stringdouble_ != null)
		{
			m_stringdouble_ = null;
		}
	}
	public bool has_m_stringdouble()
	{
		return m_bits.HasBit(62);
	}
	private void set_has_m_stringdouble()
	{
		m_bits.SetBit(62);
	}
	private void clear_has_m_stringdouble()
	{
		m_bits.ClearBit(62);
	}

	private Dictionary<int, common.proto1.EnumTest> m_int32enum_;
	public Dictionary<int, common.proto1.EnumTest> m_int32enum
	{
		set
		{
			m_int32enum_ = value;
			set_has_m_int32enum();
		}
	}
	public int m_int32enum_size()
	{
		if (null != m_int32enum_ && has_m_int32enum())
		{
			return m_int32enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto1.EnumTest>.Enumerator m_int32enum_enumerator()
	{
		if (null != m_int32enum_ && has_m_int32enum())
		{
			return m_int32enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32enum_");
		}
	}
	public void add_m_int32enum(int key, common.proto1.EnumTest value)
	{
		if (null == m_int32enum_)
		{
			m_int32enum = new Dictionary<int, common.proto1.EnumTest>();
		}
		if (null != m_int32enum_)
		{
			m_int32enum_.Add(key, value);
			set_has_m_int32enum();
		}
	}
	public common.proto1.EnumTest find_m_int32enum(int key)
	{
		if (null != m_int32enum_ && has_m_int32enum())
		{
			return m_int32enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32enum(int key)
	{
		if (null != m_int32enum_)
		{
			m_int32enum_.Remove(key);
			if(0 == m_int32enum_.Count)
			{
				clear_has_m_int32enum();
			}
		}
	}
	public bool m_int32enum_contains(int key)
	{
		if (null != m_int32enum_ && has_m_int32enum())
		{
			return m_int32enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32enum()
	{
		if (has_m_int32enum())
		{
			clear_has_m_int32enum();
		}
		if (m_int32enum_ != null)
		{
			m_int32enum_.Clear();
		}
	}
	public void release_m_int32enum()
	{
		if (has_m_int32enum())
		{
			clear_has_m_int32enum();
		}
		if (m_int32enum_ != null)
		{
			m_int32enum_ = null;
		}
	}
	public bool has_m_int32enum()
	{
		return m_bits.HasBit(63);
	}
	private void set_has_m_int32enum()
	{
		m_bits.SetBit(63);
	}
	private void clear_has_m_int32enum()
	{
		m_bits.ClearBit(63);
	}

	private Dictionary<int, common.proto1.EnumTest> m_sint32enum_;
	public Dictionary<int, common.proto1.EnumTest> m_sint32enum
	{
		set
		{
			m_sint32enum_ = value;
			set_has_m_sint32enum();
		}
	}
	public int m_sint32enum_size()
	{
		if (null != m_sint32enum_ && has_m_sint32enum())
		{
			return m_sint32enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto1.EnumTest>.Enumerator m_sint32enum_enumerator()
	{
		if (null != m_sint32enum_ && has_m_sint32enum())
		{
			return m_sint32enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32enum_");
		}
	}
	public void add_m_sint32enum(int key, common.proto1.EnumTest value)
	{
		if (null == m_sint32enum_)
		{
			m_sint32enum = new Dictionary<int, common.proto1.EnumTest>();
		}
		if (null != m_sint32enum_)
		{
			m_sint32enum_.Add(key, value);
			set_has_m_sint32enum();
		}
	}
	public common.proto1.EnumTest find_m_sint32enum(int key)
	{
		if (null != m_sint32enum_ && has_m_sint32enum())
		{
			return m_sint32enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32enum(int key)
	{
		if (null != m_sint32enum_)
		{
			m_sint32enum_.Remove(key);
			if(0 == m_sint32enum_.Count)
			{
				clear_has_m_sint32enum();
			}
		}
	}
	public bool m_sint32enum_contains(int key)
	{
		if (null != m_sint32enum_ && has_m_sint32enum())
		{
			return m_sint32enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32enum()
	{
		if (has_m_sint32enum())
		{
			clear_has_m_sint32enum();
		}
		if (m_sint32enum_ != null)
		{
			m_sint32enum_.Clear();
		}
	}
	public void release_m_sint32enum()
	{
		if (has_m_sint32enum())
		{
			clear_has_m_sint32enum();
		}
		if (m_sint32enum_ != null)
		{
			m_sint32enum_ = null;
		}
	}
	public bool has_m_sint32enum()
	{
		return m_bits.HasBit(64);
	}
	private void set_has_m_sint32enum()
	{
		m_bits.SetBit(64);
	}
	private void clear_has_m_sint32enum()
	{
		m_bits.ClearBit(64);
	}

	private Dictionary<uint, common.proto1.EnumTest> m_uint32enum_;
	public Dictionary<uint, common.proto1.EnumTest> m_uint32enum
	{
		set
		{
			m_uint32enum_ = value;
			set_has_m_uint32enum();
		}
	}
	public int m_uint32enum_size()
	{
		if (null != m_uint32enum_ && has_m_uint32enum())
		{
			return m_uint32enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, common.proto1.EnumTest>.Enumerator m_uint32enum_enumerator()
	{
		if (null != m_uint32enum_ && has_m_uint32enum())
		{
			return m_uint32enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32enum_");
		}
	}
	public void add_m_uint32enum(uint key, common.proto1.EnumTest value)
	{
		if (null == m_uint32enum_)
		{
			m_uint32enum = new Dictionary<uint, common.proto1.EnumTest>();
		}
		if (null != m_uint32enum_)
		{
			m_uint32enum_.Add(key, value);
			set_has_m_uint32enum();
		}
	}
	public common.proto1.EnumTest find_m_uint32enum(uint key)
	{
		if (null != m_uint32enum_ && has_m_uint32enum())
		{
			return m_uint32enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32enum(uint key)
	{
		if (null != m_uint32enum_)
		{
			m_uint32enum_.Remove(key);
			if(0 == m_uint32enum_.Count)
			{
				clear_has_m_uint32enum();
			}
		}
	}
	public bool m_uint32enum_contains(uint key)
	{
		if (null != m_uint32enum_ && has_m_uint32enum())
		{
			return m_uint32enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32enum()
	{
		if (has_m_uint32enum())
		{
			clear_has_m_uint32enum();
		}
		if (m_uint32enum_ != null)
		{
			m_uint32enum_.Clear();
		}
	}
	public void release_m_uint32enum()
	{
		if (has_m_uint32enum())
		{
			clear_has_m_uint32enum();
		}
		if (m_uint32enum_ != null)
		{
			m_uint32enum_ = null;
		}
	}
	public bool has_m_uint32enum()
	{
		return m_bits.HasBit(65);
	}
	private void set_has_m_uint32enum()
	{
		m_bits.SetBit(65);
	}
	private void clear_has_m_uint32enum()
	{
		m_bits.ClearBit(65);
	}

	private Dictionary<long, common.proto1.EnumTest> m_int64enum_;
	public Dictionary<long, common.proto1.EnumTest> m_int64enum
	{
		set
		{
			m_int64enum_ = value;
			set_has_m_int64enum();
		}
	}
	public int m_int64enum_size()
	{
		if (null != m_int64enum_ && has_m_int64enum())
		{
			return m_int64enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, common.proto1.EnumTest>.Enumerator m_int64enum_enumerator()
	{
		if (null != m_int64enum_ && has_m_int64enum())
		{
			return m_int64enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64enum_");
		}
	}
	public void add_m_int64enum(long key, common.proto1.EnumTest value)
	{
		if (null == m_int64enum_)
		{
			m_int64enum = new Dictionary<long, common.proto1.EnumTest>();
		}
		if (null != m_int64enum_)
		{
			m_int64enum_.Add(key, value);
			set_has_m_int64enum();
		}
	}
	public common.proto1.EnumTest find_m_int64enum(long key)
	{
		if (null != m_int64enum_ && has_m_int64enum())
		{
			return m_int64enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64enum(long key)
	{
		if (null != m_int64enum_)
		{
			m_int64enum_.Remove(key);
			if(0 == m_int64enum_.Count)
			{
				clear_has_m_int64enum();
			}
		}
	}
	public bool m_int64enum_contains(long key)
	{
		if (null != m_int64enum_ && has_m_int64enum())
		{
			return m_int64enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64enum()
	{
		if (has_m_int64enum())
		{
			clear_has_m_int64enum();
		}
		if (m_int64enum_ != null)
		{
			m_int64enum_.Clear();
		}
	}
	public void release_m_int64enum()
	{
		if (has_m_int64enum())
		{
			clear_has_m_int64enum();
		}
		if (m_int64enum_ != null)
		{
			m_int64enum_ = null;
		}
	}
	public bool has_m_int64enum()
	{
		return m_bits.HasBit(66);
	}
	private void set_has_m_int64enum()
	{
		m_bits.SetBit(66);
	}
	private void clear_has_m_int64enum()
	{
		m_bits.ClearBit(66);
	}

	private Dictionary<long, common.proto1.EnumTest> m_sint64enum_;
	public Dictionary<long, common.proto1.EnumTest> m_sint64enum
	{
		set
		{
			m_sint64enum_ = value;
			set_has_m_sint64enum();
		}
	}
	public int m_sint64enum_size()
	{
		if (null != m_sint64enum_ && has_m_sint64enum())
		{
			return m_sint64enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, common.proto1.EnumTest>.Enumerator m_sint64enum_enumerator()
	{
		if (null != m_sint64enum_ && has_m_sint64enum())
		{
			return m_sint64enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64enum_");
		}
	}
	public void add_m_sint64enum(long key, common.proto1.EnumTest value)
	{
		if (null == m_sint64enum_)
		{
			m_sint64enum = new Dictionary<long, common.proto1.EnumTest>();
		}
		if (null != m_sint64enum_)
		{
			m_sint64enum_.Add(key, value);
			set_has_m_sint64enum();
		}
	}
	public common.proto1.EnumTest find_m_sint64enum(long key)
	{
		if (null != m_sint64enum_ && has_m_sint64enum())
		{
			return m_sint64enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64enum(long key)
	{
		if (null != m_sint64enum_)
		{
			m_sint64enum_.Remove(key);
			if(0 == m_sint64enum_.Count)
			{
				clear_has_m_sint64enum();
			}
		}
	}
	public bool m_sint64enum_contains(long key)
	{
		if (null != m_sint64enum_ && has_m_sint64enum())
		{
			return m_sint64enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64enum()
	{
		if (has_m_sint64enum())
		{
			clear_has_m_sint64enum();
		}
		if (m_sint64enum_ != null)
		{
			m_sint64enum_.Clear();
		}
	}
	public void release_m_sint64enum()
	{
		if (has_m_sint64enum())
		{
			clear_has_m_sint64enum();
		}
		if (m_sint64enum_ != null)
		{
			m_sint64enum_ = null;
		}
	}
	public bool has_m_sint64enum()
	{
		return m_bits.HasBit(67);
	}
	private void set_has_m_sint64enum()
	{
		m_bits.SetBit(67);
	}
	private void clear_has_m_sint64enum()
	{
		m_bits.ClearBit(67);
	}

	private Dictionary<ulong, common.proto1.EnumTest> m_uint64enum_;
	public Dictionary<ulong, common.proto1.EnumTest> m_uint64enum
	{
		set
		{
			m_uint64enum_ = value;
			set_has_m_uint64enum();
		}
	}
	public int m_uint64enum_size()
	{
		if (null != m_uint64enum_ && has_m_uint64enum())
		{
			return m_uint64enum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, common.proto1.EnumTest>.Enumerator m_uint64enum_enumerator()
	{
		if (null != m_uint64enum_ && has_m_uint64enum())
		{
			return m_uint64enum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64enum_");
		}
	}
	public void add_m_uint64enum(ulong key, common.proto1.EnumTest value)
	{
		if (null == m_uint64enum_)
		{
			m_uint64enum = new Dictionary<ulong, common.proto1.EnumTest>();
		}
		if (null != m_uint64enum_)
		{
			m_uint64enum_.Add(key, value);
			set_has_m_uint64enum();
		}
	}
	public common.proto1.EnumTest find_m_uint64enum(ulong key)
	{
		if (null != m_uint64enum_ && has_m_uint64enum())
		{
			return m_uint64enum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64enum(ulong key)
	{
		if (null != m_uint64enum_)
		{
			m_uint64enum_.Remove(key);
			if(0 == m_uint64enum_.Count)
			{
				clear_has_m_uint64enum();
			}
		}
	}
	public bool m_uint64enum_contains(ulong key)
	{
		if (null != m_uint64enum_ && has_m_uint64enum())
		{
			return m_uint64enum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64enum()
	{
		if (has_m_uint64enum())
		{
			clear_has_m_uint64enum();
		}
		if (m_uint64enum_ != null)
		{
			m_uint64enum_.Clear();
		}
	}
	public void release_m_uint64enum()
	{
		if (has_m_uint64enum())
		{
			clear_has_m_uint64enum();
		}
		if (m_uint64enum_ != null)
		{
			m_uint64enum_ = null;
		}
	}
	public bool has_m_uint64enum()
	{
		return m_bits.HasBit(68);
	}
	private void set_has_m_uint64enum()
	{
		m_bits.SetBit(68);
	}
	private void clear_has_m_uint64enum()
	{
		m_bits.ClearBit(68);
	}

	private Dictionary<string, common.proto1.EnumTest> m_stringenum_;
	public Dictionary<string, common.proto1.EnumTest> m_stringenum
	{
		set
		{
			m_stringenum_ = value;
			set_has_m_stringenum();
		}
	}
	public int m_stringenum_size()
	{
		if (null != m_stringenum_ && has_m_stringenum())
		{
			return m_stringenum_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, common.proto1.EnumTest>.Enumerator m_stringenum_enumerator()
	{
		if (null != m_stringenum_ && has_m_stringenum())
		{
			return m_stringenum_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringenum_");
		}
	}
	public void add_m_stringenum(string key, common.proto1.EnumTest value)
	{
		if (null == m_stringenum_)
		{
			m_stringenum = new Dictionary<string, common.proto1.EnumTest>();
		}
		if (null != m_stringenum_)
		{
			m_stringenum_.Add(key, value);
			set_has_m_stringenum();
		}
	}
	public common.proto1.EnumTest find_m_stringenum(string key)
	{
		if (null != m_stringenum_ && has_m_stringenum())
		{
			return m_stringenum_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringenum(string key)
	{
		if (null != m_stringenum_)
		{
			m_stringenum_.Remove(key);
			if(0 == m_stringenum_.Count)
			{
				clear_has_m_stringenum();
			}
		}
	}
	public bool m_stringenum_contains(string key)
	{
		if (null != m_stringenum_ && has_m_stringenum())
		{
			return m_stringenum_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringenum()
	{
		if (has_m_stringenum())
		{
			clear_has_m_stringenum();
		}
		if (m_stringenum_ != null)
		{
			m_stringenum_.Clear();
		}
	}
	public void release_m_stringenum()
	{
		if (has_m_stringenum())
		{
			clear_has_m_stringenum();
		}
		if (m_stringenum_ != null)
		{
			m_stringenum_ = null;
		}
	}
	public bool has_m_stringenum()
	{
		return m_bits.HasBit(69);
	}
	private void set_has_m_stringenum()
	{
		m_bits.SetBit(69);
	}
	private void clear_has_m_stringenum()
	{
		m_bits.ClearBit(69);
	}

	private Dictionary<int, string> m_int32string_;
	public Dictionary<int, string> m_int32string
	{
		set
		{
			m_int32string_ = value;
			set_has_m_int32string();
		}
	}
	public int m_int32string_size()
	{
		if (null != m_int32string_ && has_m_int32string())
		{
			return m_int32string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, string>.Enumerator m_int32string_enumerator()
	{
		if (null != m_int32string_ && has_m_int32string())
		{
			return m_int32string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int32string_");
		}
	}
	public void add_m_int32string(int key, string value)
	{
		if (null == m_int32string_)
		{
			m_int32string = new Dictionary<int, string>();
		}
		if (null != m_int32string_)
		{
			m_int32string_.Add(key, value);
			set_has_m_int32string();
		}
	}
	public string find_m_int32string(int key)
	{
		if (null != m_int32string_ && has_m_int32string())
		{
			return m_int32string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int32string(int key)
	{
		if (null != m_int32string_)
		{
			m_int32string_.Remove(key);
			if(0 == m_int32string_.Count)
			{
				clear_has_m_int32string();
			}
		}
	}
	public bool m_int32string_contains(int key)
	{
		if (null != m_int32string_ && has_m_int32string())
		{
			return m_int32string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int32string()
	{
		if (has_m_int32string())
		{
			clear_has_m_int32string();
		}
		if (m_int32string_ != null)
		{
			m_int32string_.Clear();
		}
	}
	public void release_m_int32string()
	{
		if (has_m_int32string())
		{
			clear_has_m_int32string();
		}
		if (m_int32string_ != null)
		{
			m_int32string_ = null;
		}
	}
	public bool has_m_int32string()
	{
		return m_bits.HasBit(70);
	}
	private void set_has_m_int32string()
	{
		m_bits.SetBit(70);
	}
	private void clear_has_m_int32string()
	{
		m_bits.ClearBit(70);
	}

	private Dictionary<int, string> m_sint32string_;
	public Dictionary<int, string> m_sint32string
	{
		set
		{
			m_sint32string_ = value;
			set_has_m_sint32string();
		}
	}
	public int m_sint32string_size()
	{
		if (null != m_sint32string_ && has_m_sint32string())
		{
			return m_sint32string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, string>.Enumerator m_sint32string_enumerator()
	{
		if (null != m_sint32string_ && has_m_sint32string())
		{
			return m_sint32string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint32string_");
		}
	}
	public void add_m_sint32string(int key, string value)
	{
		if (null == m_sint32string_)
		{
			m_sint32string = new Dictionary<int, string>();
		}
		if (null != m_sint32string_)
		{
			m_sint32string_.Add(key, value);
			set_has_m_sint32string();
		}
	}
	public string find_m_sint32string(int key)
	{
		if (null != m_sint32string_ && has_m_sint32string())
		{
			return m_sint32string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint32string(int key)
	{
		if (null != m_sint32string_)
		{
			m_sint32string_.Remove(key);
			if(0 == m_sint32string_.Count)
			{
				clear_has_m_sint32string();
			}
		}
	}
	public bool m_sint32string_contains(int key)
	{
		if (null != m_sint32string_ && has_m_sint32string())
		{
			return m_sint32string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint32string()
	{
		if (has_m_sint32string())
		{
			clear_has_m_sint32string();
		}
		if (m_sint32string_ != null)
		{
			m_sint32string_.Clear();
		}
	}
	public void release_m_sint32string()
	{
		if (has_m_sint32string())
		{
			clear_has_m_sint32string();
		}
		if (m_sint32string_ != null)
		{
			m_sint32string_ = null;
		}
	}
	public bool has_m_sint32string()
	{
		return m_bits.HasBit(71);
	}
	private void set_has_m_sint32string()
	{
		m_bits.SetBit(71);
	}
	private void clear_has_m_sint32string()
	{
		m_bits.ClearBit(71);
	}

	private Dictionary<uint, string> m_uint32string_;
	public Dictionary<uint, string> m_uint32string
	{
		set
		{
			m_uint32string_ = value;
			set_has_m_uint32string();
		}
	}
	public int m_uint32string_size()
	{
		if (null != m_uint32string_ && has_m_uint32string())
		{
			return m_uint32string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<uint, string>.Enumerator m_uint32string_enumerator()
	{
		if (null != m_uint32string_ && has_m_uint32string())
		{
			return m_uint32string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint32string_");
		}
	}
	public void add_m_uint32string(uint key, string value)
	{
		if (null == m_uint32string_)
		{
			m_uint32string = new Dictionary<uint, string>();
		}
		if (null != m_uint32string_)
		{
			m_uint32string_.Add(key, value);
			set_has_m_uint32string();
		}
	}
	public string find_m_uint32string(uint key)
	{
		if (null != m_uint32string_ && has_m_uint32string())
		{
			return m_uint32string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint32string(uint key)
	{
		if (null != m_uint32string_)
		{
			m_uint32string_.Remove(key);
			if(0 == m_uint32string_.Count)
			{
				clear_has_m_uint32string();
			}
		}
	}
	public bool m_uint32string_contains(uint key)
	{
		if (null != m_uint32string_ && has_m_uint32string())
		{
			return m_uint32string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint32string()
	{
		if (has_m_uint32string())
		{
			clear_has_m_uint32string();
		}
		if (m_uint32string_ != null)
		{
			m_uint32string_.Clear();
		}
	}
	public void release_m_uint32string()
	{
		if (has_m_uint32string())
		{
			clear_has_m_uint32string();
		}
		if (m_uint32string_ != null)
		{
			m_uint32string_ = null;
		}
	}
	public bool has_m_uint32string()
	{
		return m_bits.HasBit(72);
	}
	private void set_has_m_uint32string()
	{
		m_bits.SetBit(72);
	}
	private void clear_has_m_uint32string()
	{
		m_bits.ClearBit(72);
	}

	private Dictionary<long, string> m_int64string_;
	public Dictionary<long, string> m_int64string
	{
		set
		{
			m_int64string_ = value;
			set_has_m_int64string();
		}
	}
	public int m_int64string_size()
	{
		if (null != m_int64string_ && has_m_int64string())
		{
			return m_int64string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, string>.Enumerator m_int64string_enumerator()
	{
		if (null != m_int64string_ && has_m_int64string())
		{
			return m_int64string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_int64string_");
		}
	}
	public void add_m_int64string(long key, string value)
	{
		if (null == m_int64string_)
		{
			m_int64string = new Dictionary<long, string>();
		}
		if (null != m_int64string_)
		{
			m_int64string_.Add(key, value);
			set_has_m_int64string();
		}
	}
	public string find_m_int64string(long key)
	{
		if (null != m_int64string_ && has_m_int64string())
		{
			return m_int64string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_int64string(long key)
	{
		if (null != m_int64string_)
		{
			m_int64string_.Remove(key);
			if(0 == m_int64string_.Count)
			{
				clear_has_m_int64string();
			}
		}
	}
	public bool m_int64string_contains(long key)
	{
		if (null != m_int64string_ && has_m_int64string())
		{
			return m_int64string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_int64string()
	{
		if (has_m_int64string())
		{
			clear_has_m_int64string();
		}
		if (m_int64string_ != null)
		{
			m_int64string_.Clear();
		}
	}
	public void release_m_int64string()
	{
		if (has_m_int64string())
		{
			clear_has_m_int64string();
		}
		if (m_int64string_ != null)
		{
			m_int64string_ = null;
		}
	}
	public bool has_m_int64string()
	{
		return m_bits.HasBit(73);
	}
	private void set_has_m_int64string()
	{
		m_bits.SetBit(73);
	}
	private void clear_has_m_int64string()
	{
		m_bits.ClearBit(73);
	}

	private Dictionary<long, string> m_sint64string_;
	public Dictionary<long, string> m_sint64string
	{
		set
		{
			m_sint64string_ = value;
			set_has_m_sint64string();
		}
	}
	public int m_sint64string_size()
	{
		if (null != m_sint64string_ && has_m_sint64string())
		{
			return m_sint64string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<long, string>.Enumerator m_sint64string_enumerator()
	{
		if (null != m_sint64string_ && has_m_sint64string())
		{
			return m_sint64string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_sint64string_");
		}
	}
	public void add_m_sint64string(long key, string value)
	{
		if (null == m_sint64string_)
		{
			m_sint64string = new Dictionary<long, string>();
		}
		if (null != m_sint64string_)
		{
			m_sint64string_.Add(key, value);
			set_has_m_sint64string();
		}
	}
	public string find_m_sint64string(long key)
	{
		if (null != m_sint64string_ && has_m_sint64string())
		{
			return m_sint64string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_sint64string(long key)
	{
		if (null != m_sint64string_)
		{
			m_sint64string_.Remove(key);
			if(0 == m_sint64string_.Count)
			{
				clear_has_m_sint64string();
			}
		}
	}
	public bool m_sint64string_contains(long key)
	{
		if (null != m_sint64string_ && has_m_sint64string())
		{
			return m_sint64string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_sint64string()
	{
		if (has_m_sint64string())
		{
			clear_has_m_sint64string();
		}
		if (m_sint64string_ != null)
		{
			m_sint64string_.Clear();
		}
	}
	public void release_m_sint64string()
	{
		if (has_m_sint64string())
		{
			clear_has_m_sint64string();
		}
		if (m_sint64string_ != null)
		{
			m_sint64string_ = null;
		}
	}
	public bool has_m_sint64string()
	{
		return m_bits.HasBit(74);
	}
	private void set_has_m_sint64string()
	{
		m_bits.SetBit(74);
	}
	private void clear_has_m_sint64string()
	{
		m_bits.ClearBit(74);
	}

	private Dictionary<ulong, string> m_uint64string_;
	public Dictionary<ulong, string> m_uint64string
	{
		set
		{
			m_uint64string_ = value;
			set_has_m_uint64string();
		}
	}
	public int m_uint64string_size()
	{
		if (null != m_uint64string_ && has_m_uint64string())
		{
			return m_uint64string_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<ulong, string>.Enumerator m_uint64string_enumerator()
	{
		if (null != m_uint64string_ && has_m_uint64string())
		{
			return m_uint64string_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_uint64string_");
		}
	}
	public void add_m_uint64string(ulong key, string value)
	{
		if (null == m_uint64string_)
		{
			m_uint64string = new Dictionary<ulong, string>();
		}
		if (null != m_uint64string_)
		{
			m_uint64string_.Add(key, value);
			set_has_m_uint64string();
		}
	}
	public string find_m_uint64string(ulong key)
	{
		if (null != m_uint64string_ && has_m_uint64string())
		{
			return m_uint64string_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_uint64string(ulong key)
	{
		if (null != m_uint64string_)
		{
			m_uint64string_.Remove(key);
			if(0 == m_uint64string_.Count)
			{
				clear_has_m_uint64string();
			}
		}
	}
	public bool m_uint64string_contains(ulong key)
	{
		if (null != m_uint64string_ && has_m_uint64string())
		{
			return m_uint64string_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_uint64string()
	{
		if (has_m_uint64string())
		{
			clear_has_m_uint64string();
		}
		if (m_uint64string_ != null)
		{
			m_uint64string_.Clear();
		}
	}
	public void release_m_uint64string()
	{
		if (has_m_uint64string())
		{
			clear_has_m_uint64string();
		}
		if (m_uint64string_ != null)
		{
			m_uint64string_ = null;
		}
	}
	public bool has_m_uint64string()
	{
		return m_bits.HasBit(75);
	}
	private void set_has_m_uint64string()
	{
		m_bits.SetBit(75);
	}
	private void clear_has_m_uint64string()
	{
		m_bits.ClearBit(75);
	}

	private Dictionary<string, string> m_stringstring_;
	public Dictionary<string, string> m_stringstring
	{
		set
		{
			m_stringstring_ = value;
			set_has_m_stringstring();
		}
	}
	public int m_stringstring_size()
	{
		if (null != m_stringstring_ && has_m_stringstring())
		{
			return m_stringstring_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<string, string>.Enumerator m_stringstring_enumerator()
	{
		if (null != m_stringstring_ && has_m_stringstring())
		{
			return m_stringstring_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_stringstring_");
		}
	}
	public void add_m_stringstring(string key, string value)
	{
		if (null == m_stringstring_)
		{
			m_stringstring = new Dictionary<string, string>();
		}
		if (null != m_stringstring_)
		{
			m_stringstring_.Add(key, value);
			set_has_m_stringstring();
		}
	}
	public string find_m_stringstring(string key)
	{
		if (null != m_stringstring_ && has_m_stringstring())
		{
			return m_stringstring_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_stringstring(string key)
	{
		if (null != m_stringstring_)
		{
			m_stringstring_.Remove(key);
			if(0 == m_stringstring_.Count)
			{
				clear_has_m_stringstring();
			}
		}
	}
	public bool m_stringstring_contains(string key)
	{
		if (null != m_stringstring_ && has_m_stringstring())
		{
			return m_stringstring_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_stringstring()
	{
		if (has_m_stringstring())
		{
			clear_has_m_stringstring();
		}
		if (m_stringstring_ != null)
		{
			m_stringstring_.Clear();
		}
	}
	public void release_m_stringstring()
	{
		if (has_m_stringstring())
		{
			clear_has_m_stringstring();
		}
		if (m_stringstring_ != null)
		{
			m_stringstring_ = null;
		}
	}
	public bool has_m_stringstring()
	{
		return m_bits.HasBit(76);
	}
	private void set_has_m_stringstring()
	{
		m_bits.SetBit(76);
	}
	private void clear_has_m_stringstring()
	{
		m_bits.ClearBit(76);
	}

	public MsgTestMap()
	{
		m_bits = new common.miniproto.ProtoBitMap(77);
		m_int32bool_ = default(Dictionary<int, bool>);
		m_sint32bool_ = default(Dictionary<int, bool>);
		m_uint32bool_ = default(Dictionary<uint, bool>);
		m_int64bool_ = default(Dictionary<long, bool>);
		m_sint64bool_ = default(Dictionary<long, bool>);
		m_uint64bool_ = default(Dictionary<ulong, bool>);
		m_stringbool_ = default(Dictionary<string, bool>);
		m_int32int32_ = default(Dictionary<int, int>);
		m_sint32int32_ = default(Dictionary<int, int>);
		m_uint32int32_ = default(Dictionary<uint, int>);
		m_int64int32_ = default(Dictionary<long, int>);
		m_sint64int32_ = default(Dictionary<long, int>);
		m_uint64int32_ = default(Dictionary<ulong, int>);
		m_stringint32_ = default(Dictionary<string, int>);
		m_int32sint32_ = default(Dictionary<int, int>);
		m_sint32sint32_ = default(Dictionary<int, int>);
		m_uint32sint32_ = default(Dictionary<uint, int>);
		m_int64sint32_ = default(Dictionary<long, int>);
		m_sint64sint32_ = default(Dictionary<long, int>);
		m_uint64sint32_ = default(Dictionary<ulong, int>);
		m_stringsint32_ = default(Dictionary<string, int>);
		m_int32uint32_ = default(Dictionary<int, uint>);
		m_sint32uint32_ = default(Dictionary<int, uint>);
		m_uint32uint32_ = default(Dictionary<uint, uint>);
		m_int64uint32_ = default(Dictionary<long, uint>);
		m_sint64uint32_ = default(Dictionary<long, uint>);
		m_uint64uint32_ = default(Dictionary<ulong, uint>);
		m_stringuint32_ = default(Dictionary<string, uint>);
		m_int32int64_ = default(Dictionary<int, long>);
		m_sint32int64_ = default(Dictionary<int, long>);
		m_uint32int64_ = default(Dictionary<uint, long>);
		m_int64int64_ = default(Dictionary<long, long>);
		m_sint64int64_ = default(Dictionary<long, long>);
		m_uint64int64_ = default(Dictionary<ulong, long>);
		m_stringint64_ = default(Dictionary<string, long>);
		m_int32sint64_ = default(Dictionary<int, long>);
		m_sint32sint64_ = default(Dictionary<int, long>);
		m_uint32sint64_ = default(Dictionary<uint, long>);
		m_int64sint64_ = default(Dictionary<long, long>);
		m_sint64sint64_ = default(Dictionary<long, long>);
		m_uint64sint64_ = default(Dictionary<ulong, long>);
		m_stringsint64_ = default(Dictionary<string, long>);
		m_int32uint64_ = default(Dictionary<int, ulong>);
		m_sint32uint64_ = default(Dictionary<int, ulong>);
		m_uint32uint64_ = default(Dictionary<uint, ulong>);
		m_int64uint64_ = default(Dictionary<long, ulong>);
		m_sint64uint64_ = default(Dictionary<long, ulong>);
		m_uint64uint64_ = default(Dictionary<ulong, ulong>);
		m_stringuint64_ = default(Dictionary<string, ulong>);
		m_int32float_ = default(Dictionary<int, float>);
		m_sint32float_ = default(Dictionary<int, float>);
		m_uint32float_ = default(Dictionary<uint, float>);
		m_int64float_ = default(Dictionary<long, float>);
		m_sint64float_ = default(Dictionary<long, float>);
		m_uint64float_ = default(Dictionary<ulong, float>);
		m_stringfloat_ = default(Dictionary<string, float>);
		m_int32double_ = default(Dictionary<int, double>);
		m_sint32double_ = default(Dictionary<int, double>);
		m_uint32double_ = default(Dictionary<uint, double>);
		m_int64double_ = default(Dictionary<long, double>);
		m_sint64double_ = default(Dictionary<long, double>);
		m_uint64double_ = default(Dictionary<ulong, double>);
		m_stringdouble_ = default(Dictionary<string, double>);
		m_int32enum_ = default(Dictionary<int, common.proto1.EnumTest>);
		m_sint32enum_ = default(Dictionary<int, common.proto1.EnumTest>);
		m_uint32enum_ = default(Dictionary<uint, common.proto1.EnumTest>);
		m_int64enum_ = default(Dictionary<long, common.proto1.EnumTest>);
		m_sint64enum_ = default(Dictionary<long, common.proto1.EnumTest>);
		m_uint64enum_ = default(Dictionary<ulong, common.proto1.EnumTest>);
		m_stringenum_ = default(Dictionary<string, common.proto1.EnumTest>);
		m_int32string_ = default(Dictionary<int, string>);
		m_sint32string_ = default(Dictionary<int, string>);
		m_uint32string_ = default(Dictionary<uint, string>);
		m_int64string_ = default(Dictionary<long, string>);
		m_sint64string_ = default(Dictionary<long, string>);
		m_uint64string_ = default(Dictionary<ulong, string>);
		m_stringstring_ = default(Dictionary<string, string>);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		if (has_m_int32bool())
		{
			if (null != m_int32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32bool_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_sint32bool())
		{
			if (null != m_sint32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32bool_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_uint32bool())
		{
			if (null != m_uint32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32bool_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int64bool())
		{
			if (null != m_int64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64bool_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_sint64bool())
		{
			if (null != m_sint64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64bool_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_uint64bool())
		{
			if (null != m_uint64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64bool_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_stringbool())
		{
			if (null != m_stringbool_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringbool_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int32int32())
		{
			if (null != m_int32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32int32_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32int32())
		{
			if (null != m_sint32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32int32_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_uint32int32())
		{
			if (null != m_uint32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32int32_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_int64int32())
		{
			if (null != m_int64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64int32_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint64int32())
		{
			if (null != m_sint64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64int32_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_uint64int32())
		{
			if (null != m_uint64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(13u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64int32_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_stringint32())
		{
			if (null != m_stringint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(14u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringint32_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_int32sint32())
		{
			if (null != m_int32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(15u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32sint32_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_sint32sint32())
		{
			if (null != m_sint32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(16u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32sint32_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32sint32())
		{
			if (null != m_uint32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(17u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32sint32_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_int64sint32())
		{
			if (null != m_int64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(18u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64sint32_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_sint64sint32())
		{
			if (null != m_sint64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(19u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64sint32_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint64sint32())
		{
			if (null != m_uint64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(20u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64sint32_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_stringsint32())
		{
			if (null != m_stringsint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(21u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringsint32_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_int32uint32())
		{
			if (null != m_int32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(22u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32uint32_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_sint32uint32())
		{
			if (null != m_sint32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(23u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32uint32_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_uint32uint32())
		{
			if (null != m_uint32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(24u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32uint32_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64uint32())
		{
			if (null != m_int64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(25u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64uint32_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_sint64uint32())
		{
			if (null != m_sint64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(26u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64uint32_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_uint64uint32())
		{
			if (null != m_uint64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(27u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64uint32_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_stringuint32())
		{
			if (null != m_stringuint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(28u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringuint32_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int32int64())
		{
			if (null != m_int32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(29u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32int64_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint32int64())
		{
			if (null != m_sint32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(30u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32int64_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_uint32int64())
		{
			if (null != m_uint32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(31u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32int64_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_int64int64())
		{
			if (null != m_int64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(32u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64int64_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64int64())
		{
			if (null != m_sint64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(33u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64int64_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_uint64int64())
		{
			if (null != m_uint64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(34u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64int64_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_stringint64())
		{
			if (null != m_stringint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(35u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringint64_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_int32sint64())
		{
			if (null != m_int32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(36u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32sint64_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_sint32sint64())
		{
			if (null != m_sint32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(37u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32sint64_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint32sint64())
		{
			if (null != m_uint32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(38u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32sint64_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_int64sint64())
		{
			if (null != m_int64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(39u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64sint64_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_sint64sint64())
		{
			if (null != m_sint64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(40u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64sint64_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64sint64())
		{
			if (null != m_uint64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(41u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64sint64_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_stringsint64())
		{
			if (null != m_stringsint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(42u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringsint64_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_int32uint64())
		{
			if (null != m_int32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(43u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32uint64_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_sint32uint64())
		{
			if (null != m_sint32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(44u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32uint64_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_uint32uint64())
		{
			if (null != m_uint32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(45u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32uint64_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_int64uint64())
		{
			if (null != m_int64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(46u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64uint64_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_sint64uint64())
		{
			if (null != m_sint64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(47u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64uint64_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_uint64uint64())
		{
			if (null != m_uint64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(48u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64uint64_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_stringuint64())
		{
			if (null != m_stringuint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(49u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringuint64_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_int32float())
		{
			if (null != m_int32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(50u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32float_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_sint32float())
		{
			if (null != m_sint32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(51u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32float_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_uint32float())
		{
			if (null != m_uint32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(52u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32float_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_int64float())
		{
			if (null != m_int64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(53u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64float_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_sint64float())
		{
			if (null != m_sint64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(54u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64float_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_uint64float())
		{
			if (null != m_uint64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(55u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64float_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_stringfloat())
		{
			if (null != m_stringfloat_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(56u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringfloat_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_int32double())
		{
			if (null != m_int32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(57u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32double_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_sint32double())
		{
			if (null != m_sint32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(58u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32double_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_uint32double())
		{
			if (null != m_uint32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(59u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32double_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_int64double())
		{
			if (null != m_int64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(60u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64double_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_sint64double())
		{
			if (null != m_sint64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(61u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64double_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_uint64double())
		{
			if (null != m_uint64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(62u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64double_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_stringdouble())
		{
			if (null != m_stringdouble_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(63u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringdouble_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_int32enum())
		{
			if (null != m_int32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(64u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32enum_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_sint32enum())
		{
			if (null != m_sint32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(65u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32enum_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_uint32enum())
		{
			if (null != m_uint32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(66u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32enum_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_int64enum())
		{
			if (null != m_int64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(67u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64enum_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_sint64enum())
		{
			if (null != m_sint64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(68u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64enum_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_uint64enum())
		{
			if (null != m_uint64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(69u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64enum_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_stringenum())
		{
			if (null != m_stringenum_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(70u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringenum_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_int32string())
		{
			if (null != m_int32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(71u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int32string_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_sint32string())
		{
			if (null != m_sint32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(72u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint32string_, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_uint32string())
		{
			if (null != m_uint32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(73u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint32string_, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_int64string())
		{
			if (null != m_int64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(74u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_int64string_, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_sint64string())
		{
			if (null != m_sint64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(75u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_sint64string_, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_uint64string())
		{
			if (null != m_uint64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(76u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_uint64string_, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_stringstring())
		{
			if (null != m_stringstring_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(77u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_stringstring_, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		if (has_m_int32bool())
		{
			if (null != m_int32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32bool_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_sint32bool())
		{
			if (null != m_sint32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32bool_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_uint32bool())
		{
			if (null != m_uint32bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32bool_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int64bool())
		{
			if (null != m_int64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64bool_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_sint64bool())
		{
			if (null != m_sint64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64bool_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_uint64bool())
		{
			if (null != m_uint64bool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64bool_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_stringbool())
		{
			if (null != m_stringbool_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringbool_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoBool);
			}
		}
		if (has_m_int32int32())
		{
			if (null != m_int32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint32int32())
		{
			if (null != m_sint32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32int32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_uint32int32())
		{
			if (null != m_uint32int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32int32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_int64int32())
		{
			if (null != m_int64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_sint64int32())
		{
			if (null != m_sint64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64int32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_uint64int32())
		{
			if (null != m_uint64int32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(13u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64int32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_stringint32())
		{
			if (null != m_stringint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(14u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt32);
			}
		}
		if (has_m_int32sint32())
		{
			if (null != m_int32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(15u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_sint32sint32())
		{
			if (null != m_sint32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(16u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint32sint32())
		{
			if (null != m_uint32sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(17u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_int64sint32())
		{
			if (null != m_int64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(18u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_sint64sint32())
		{
			if (null != m_sint64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(19u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_uint64sint32())
		{
			if (null != m_uint64sint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(20u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_stringsint32())
		{
			if (null != m_stringsint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(21u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringsint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed32);
			}
		}
		if (has_m_int32uint32())
		{
			if (null != m_int32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(22u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_sint32uint32())
		{
			if (null != m_sint32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(23u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_uint32uint32())
		{
			if (null != m_uint32uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(24u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int64uint32())
		{
			if (null != m_int64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(25u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_sint64uint32())
		{
			if (null != m_sint64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(26u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_uint64uint32())
		{
			if (null != m_uint64uint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(27u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_stringuint32())
		{
			if (null != m_stringuint32_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(28u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringuint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed32);
			}
		}
		if (has_m_int32int64())
		{
			if (null != m_int32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(29u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint32int64())
		{
			if (null != m_sint32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(30u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32int64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_uint32int64())
		{
			if (null != m_uint32int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(31u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32int64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_int64int64())
		{
			if (null != m_int64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(32u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_sint64int64())
		{
			if (null != m_sint64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(33u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64int64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_uint64int64())
		{
			if (null != m_uint64int64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(34u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64int64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_stringint64())
		{
			if (null != m_stringint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(35u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt64);
			}
		}
		if (has_m_int32sint64())
		{
			if (null != m_int32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(36u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_sint32sint64())
		{
			if (null != m_sint32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(37u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint32sint64())
		{
			if (null != m_uint32sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(38u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_int64sint64())
		{
			if (null != m_int64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(39u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_sint64sint64())
		{
			if (null != m_sint64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(40u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_uint64sint64())
		{
			if (null != m_uint64sint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(41u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_stringsint64())
		{
			if (null != m_stringsint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(42u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringsint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed64);
			}
		}
		if (has_m_int32uint64())
		{
			if (null != m_int32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(43u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_sint32uint64())
		{
			if (null != m_sint32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(44u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_uint32uint64())
		{
			if (null != m_uint32uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(45u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_int64uint64())
		{
			if (null != m_int64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(46u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_sint64uint64())
		{
			if (null != m_sint64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(47u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_uint64uint64())
		{
			if (null != m_uint64uint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(48u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_stringuint64())
		{
			if (null != m_stringuint64_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(49u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringuint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed64);
			}
		}
		if (has_m_int32float())
		{
			if (null != m_int32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(50u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32float_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_sint32float())
		{
			if (null != m_sint32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(51u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32float_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_uint32float())
		{
			if (null != m_uint32float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(52u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32float_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_int64float())
		{
			if (null != m_int64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(53u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64float_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_sint64float())
		{
			if (null != m_sint64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(54u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64float_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_uint64float())
		{
			if (null != m_uint64float_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(55u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64float_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_stringfloat())
		{
			if (null != m_stringfloat_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(56u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringfloat_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFloat);
			}
		}
		if (has_m_int32double())
		{
			if (null != m_int32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(57u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32double_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_sint32double())
		{
			if (null != m_sint32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(58u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32double_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_uint32double())
		{
			if (null != m_uint32double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(59u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32double_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_int64double())
		{
			if (null != m_int64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(60u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64double_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_sint64double())
		{
			if (null != m_sint64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(61u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64double_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_uint64double())
		{
			if (null != m_uint64double_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(62u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64double_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_stringdouble())
		{
			if (null != m_stringdouble_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(63u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringdouble_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoDouble);
			}
		}
		if (has_m_int32enum())
		{
			if (null != m_int32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(64u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32enum_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_sint32enum())
		{
			if (null != m_sint32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(65u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32enum_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_uint32enum())
		{
			if (null != m_uint32enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(66u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32enum_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_int64enum())
		{
			if (null != m_int64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(67u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64enum_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_sint64enum())
		{
			if (null != m_sint64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(68u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64enum_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_uint64enum())
		{
			if (null != m_uint64enum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(69u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64enum_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_stringenum())
		{
			if (null != m_stringenum_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(70u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringenum_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoEnum);
			}
		}
		if (has_m_int32string())
		{
			if (null != m_int32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(71u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int32string_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_sint32string())
		{
			if (null != m_sint32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(72u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint32string_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_uint32string())
		{
			if (null != m_uint32string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(73u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint32string_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_int64string())
		{
			if (null != m_int64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(74u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_int64string_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_sint64string())
		{
			if (null != m_sint64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(75u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_sint64string_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_uint64string())
		{
			if (null != m_uint64string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(76u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_uint64string_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}
		if (has_m_stringstring())
		{
			if (null != m_stringstring_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(77u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_stringstring_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoString);
			}
		}

		return bytes;
	}

	public override ulong Decode(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		uint num = 0;
		uint type = (uint)common.miniproto.ProtoWireType.PWT_Unknown;
		while (bytes < size)
		{
			bytes += common.miniproto.ProtoTool.KeyDecode(ref num, ref type, buf);
			switch (num << 3 | type)
			{
				case 1 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32bool_)
					{
						m_int32bool_ = new Dictionary<int, bool>();
					}
					if (null != m_int32bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32bool_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_int32bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 2 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32bool_)
					{
						m_sint32bool_ = new Dictionary<int, bool>();
					}
					if (null != m_sint32bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32bool_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_sint32bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 3 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32bool_)
					{
						m_uint32bool_ = new Dictionary<uint, bool>();
					}
					if (null != m_uint32bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32bool_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_uint32bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 4 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64bool_)
					{
						m_int64bool_ = new Dictionary<long, bool>();
					}
					if (null != m_int64bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64bool_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_int64bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 5 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64bool_)
					{
						m_sint64bool_ = new Dictionary<long, bool>();
					}
					if (null != m_sint64bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64bool_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_sint64bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 6 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64bool_)
					{
						m_uint64bool_ = new Dictionary<ulong, bool>();
					}
					if (null != m_uint64bool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64bool_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_uint64bool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 7 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringbool_)
					{
						m_stringbool_ = new Dictionary<string, bool>();
					}
					if (null != m_stringbool_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringbool_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoBool);
						set_has_m_stringbool();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 8 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32int32_)
					{
						m_int32int32_ = new Dictionary<int, int>();
					}
					if (null != m_int32int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_int32int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 9 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32int32_)
					{
						m_sint32int32_ = new Dictionary<int, int>();
					}
					if (null != m_sint32int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32int32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_sint32int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 10 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32int32_)
					{
						m_uint32int32_ = new Dictionary<uint, int>();
					}
					if (null != m_uint32int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32int32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_uint32int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 11 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64int32_)
					{
						m_int64int32_ = new Dictionary<long, int>();
					}
					if (null != m_int64int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64int32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_int64int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 12 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64int32_)
					{
						m_sint64int32_ = new Dictionary<long, int>();
					}
					if (null != m_sint64int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64int32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_sint64int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 13 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64int32_)
					{
						m_uint64int32_ = new Dictionary<ulong, int>();
					}
					if (null != m_uint64int32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64int32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_uint64int32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 14 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringint32_)
					{
						m_stringint32_ = new Dictionary<string, int>();
					}
					if (null != m_stringint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt32);
						set_has_m_stringint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 15 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32sint32_)
					{
						m_int32sint32_ = new Dictionary<int, int>();
					}
					if (null != m_int32sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_int32sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 16 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32sint32_)
					{
						m_sint32sint32_ = new Dictionary<int, int>();
					}
					if (null != m_sint32sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_sint32sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 17 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32sint32_)
					{
						m_uint32sint32_ = new Dictionary<uint, int>();
					}
					if (null != m_uint32sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32sint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_uint32sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 18 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64sint32_)
					{
						m_int64sint32_ = new Dictionary<long, int>();
					}
					if (null != m_int64sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_int64sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 19 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64sint32_)
					{
						m_sint64sint32_ = new Dictionary<long, int>();
					}
					if (null != m_sint64sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_sint64sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 20 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64sint32_)
					{
						m_uint64sint32_ = new Dictionary<ulong, int>();
					}
					if (null != m_uint64sint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64sint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_uint64sint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 21 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringsint32_)
					{
						m_stringsint32_ = new Dictionary<string, int>();
					}
					if (null != m_stringsint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringsint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed32);
						set_has_m_stringsint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 22 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32uint32_)
					{
						m_int32uint32_ = new Dictionary<int, uint>();
					}
					if (null != m_int32uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_int32uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 23 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32uint32_)
					{
						m_sint32uint32_ = new Dictionary<int, uint>();
					}
					if (null != m_sint32uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_sint32uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 24 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32uint32_)
					{
						m_uint32uint32_ = new Dictionary<uint, uint>();
					}
					if (null != m_uint32uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_uint32uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 25 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64uint32_)
					{
						m_int64uint32_ = new Dictionary<long, uint>();
					}
					if (null != m_int64uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_int64uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 26 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64uint32_)
					{
						m_sint64uint32_ = new Dictionary<long, uint>();
					}
					if (null != m_sint64uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_sint64uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 27 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64uint32_)
					{
						m_uint64uint32_ = new Dictionary<ulong, uint>();
					}
					if (null != m_uint64uint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64uint32_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_uint64uint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 28 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringuint32_)
					{
						m_stringuint32_ = new Dictionary<string, uint>();
					}
					if (null != m_stringuint32_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringuint32_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed32);
						set_has_m_stringuint32();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 29 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32int64_)
					{
						m_int32int64_ = new Dictionary<int, long>();
					}
					if (null != m_int32int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_int32int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 30 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32int64_)
					{
						m_sint32int64_ = new Dictionary<int, long>();
					}
					if (null != m_sint32int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32int64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_sint32int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 31 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32int64_)
					{
						m_uint32int64_ = new Dictionary<uint, long>();
					}
					if (null != m_uint32int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32int64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_uint32int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 32 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64int64_)
					{
						m_int64int64_ = new Dictionary<long, long>();
					}
					if (null != m_int64int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64int64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_int64int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 33 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64int64_)
					{
						m_sint64int64_ = new Dictionary<long, long>();
					}
					if (null != m_sint64int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64int64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_sint64int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 34 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64int64_)
					{
						m_uint64int64_ = new Dictionary<ulong, long>();
					}
					if (null != m_uint64int64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64int64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_uint64int64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 35 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringint64_)
					{
						m_stringint64_ = new Dictionary<string, long>();
					}
					if (null != m_stringint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoInt64);
						set_has_m_stringint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 36 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32sint64_)
					{
						m_int32sint64_ = new Dictionary<int, long>();
					}
					if (null != m_int32sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_int32sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 37 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32sint64_)
					{
						m_sint32sint64_ = new Dictionary<int, long>();
					}
					if (null != m_sint32sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_sint32sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 38 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32sint64_)
					{
						m_uint32sint64_ = new Dictionary<uint, long>();
					}
					if (null != m_uint32sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32sint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_uint32sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 39 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64sint64_)
					{
						m_int64sint64_ = new Dictionary<long, long>();
					}
					if (null != m_int64sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_int64sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 40 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64sint64_)
					{
						m_sint64sint64_ = new Dictionary<long, long>();
					}
					if (null != m_sint64sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_sint64sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 41 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64sint64_)
					{
						m_uint64sint64_ = new Dictionary<ulong, long>();
					}
					if (null != m_uint64sint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64sint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_uint64sint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 42 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringsint64_)
					{
						m_stringsint64_ = new Dictionary<string, long>();
					}
					if (null != m_stringsint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringsint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoSFixed64);
						set_has_m_stringsint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 43 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32uint64_)
					{
						m_int32uint64_ = new Dictionary<int, ulong>();
					}
					if (null != m_int32uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_int32uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 44 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32uint64_)
					{
						m_sint32uint64_ = new Dictionary<int, ulong>();
					}
					if (null != m_sint32uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_sint32uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 45 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32uint64_)
					{
						m_uint32uint64_ = new Dictionary<uint, ulong>();
					}
					if (null != m_uint32uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_uint32uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 46 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64uint64_)
					{
						m_int64uint64_ = new Dictionary<long, ulong>();
					}
					if (null != m_int64uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_int64uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 47 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64uint64_)
					{
						m_sint64uint64_ = new Dictionary<long, ulong>();
					}
					if (null != m_sint64uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_sint64uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 48 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64uint64_)
					{
						m_uint64uint64_ = new Dictionary<ulong, ulong>();
					}
					if (null != m_uint64uint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64uint64_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_uint64uint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 49 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringuint64_)
					{
						m_stringuint64_ = new Dictionary<string, ulong>();
					}
					if (null != m_stringuint64_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringuint64_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFixed64);
						set_has_m_stringuint64();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 50 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32float_)
					{
						m_int32float_ = new Dictionary<int, float>();
					}
					if (null != m_int32float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32float_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_int32float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 51 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32float_)
					{
						m_sint32float_ = new Dictionary<int, float>();
					}
					if (null != m_sint32float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32float_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_sint32float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 52 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32float_)
					{
						m_uint32float_ = new Dictionary<uint, float>();
					}
					if (null != m_uint32float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32float_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_uint32float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 53 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64float_)
					{
						m_int64float_ = new Dictionary<long, float>();
					}
					if (null != m_int64float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64float_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_int64float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 54 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64float_)
					{
						m_sint64float_ = new Dictionary<long, float>();
					}
					if (null != m_sint64float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64float_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_sint64float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 55 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64float_)
					{
						m_uint64float_ = new Dictionary<ulong, float>();
					}
					if (null != m_uint64float_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64float_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_uint64float();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 56 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringfloat_)
					{
						m_stringfloat_ = new Dictionary<string, float>();
					}
					if (null != m_stringfloat_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringfloat_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoFloat);
						set_has_m_stringfloat();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 57 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32double_)
					{
						m_int32double_ = new Dictionary<int, double>();
					}
					if (null != m_int32double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32double_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_int32double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 58 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32double_)
					{
						m_sint32double_ = new Dictionary<int, double>();
					}
					if (null != m_sint32double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32double_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_sint32double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 59 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32double_)
					{
						m_uint32double_ = new Dictionary<uint, double>();
					}
					if (null != m_uint32double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32double_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_uint32double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 60 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64double_)
					{
						m_int64double_ = new Dictionary<long, double>();
					}
					if (null != m_int64double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64double_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_int64double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 61 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64double_)
					{
						m_sint64double_ = new Dictionary<long, double>();
					}
					if (null != m_sint64double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64double_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_sint64double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 62 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64double_)
					{
						m_uint64double_ = new Dictionary<ulong, double>();
					}
					if (null != m_uint64double_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64double_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_uint64double();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 63 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringdouble_)
					{
						m_stringdouble_ = new Dictionary<string, double>();
					}
					if (null != m_stringdouble_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringdouble_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoDouble);
						set_has_m_stringdouble();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 64 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32enum_)
					{
						m_int32enum_ = new Dictionary<int, common.proto1.EnumTest>();
					}
					if (null != m_int32enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32enum_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_int32enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 65 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32enum_)
					{
						m_sint32enum_ = new Dictionary<int, common.proto1.EnumTest>();
					}
					if (null != m_sint32enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32enum_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_sint32enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 66 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32enum_)
					{
						m_uint32enum_ = new Dictionary<uint, common.proto1.EnumTest>();
					}
					if (null != m_uint32enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32enum_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_uint32enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 67 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64enum_)
					{
						m_int64enum_ = new Dictionary<long, common.proto1.EnumTest>();
					}
					if (null != m_int64enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64enum_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_int64enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 68 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64enum_)
					{
						m_sint64enum_ = new Dictionary<long, common.proto1.EnumTest>();
					}
					if (null != m_sint64enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64enum_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_sint64enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 69 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64enum_)
					{
						m_uint64enum_ = new Dictionary<ulong, common.proto1.EnumTest>();
					}
					if (null != m_uint64enum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64enum_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_uint64enum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 70 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringenum_)
					{
						m_stringenum_ = new Dictionary<string, common.proto1.EnumTest>();
					}
					if (null != m_stringenum_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringenum_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoEnum);
						set_has_m_stringenum();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 71 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int32string_)
					{
						m_int32string_ = new Dictionary<int, string>();
					}
					if (null != m_int32string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int32string_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_int32string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 72 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint32string_)
					{
						m_sint32string_ = new Dictionary<int, string>();
					}
					if (null != m_sint32string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint32string_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed32, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_sint32string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 73 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint32string_)
					{
						m_uint32string_ = new Dictionary<uint, string>();
					}
					if (null != m_uint32string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint32string_, buf, common.miniproto.ProtoDefine.CommonProtoFixed32, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_uint32string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 74 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_int64string_)
					{
						m_int64string_ = new Dictionary<long, string>();
					}
					if (null != m_int64string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_int64string_, buf, common.miniproto.ProtoDefine.CommonProtoInt64, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_int64string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 75 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_sint64string_)
					{
						m_sint64string_ = new Dictionary<long, string>();
					}
					if (null != m_sint64string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_sint64string_, buf, common.miniproto.ProtoDefine.CommonProtoSFixed64, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_sint64string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 76 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_uint64string_)
					{
						m_uint64string_ = new Dictionary<ulong, string>();
					}
					if (null != m_uint64string_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_uint64string_, buf, common.miniproto.ProtoDefine.CommonProtoFixed64, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_uint64string();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 77 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_stringstring_)
					{
						m_stringstring_ = new Dictionary<string, string>();
					}
					if (null != m_stringstring_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_stringstring_, buf, common.miniproto.ProtoDefine.CommonProtoString, common.miniproto.ProtoDefine.CommonProtoString);
						set_has_m_stringstring();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				default:
				bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
				break;
			}
		}
		
		return bytes;
	}

	public override void Clear()
	{
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

	public override void Release()
	{
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


public class MsgTest : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	private common.proto1.MsgTestSingular m_testsingular_;
	public common.proto1.MsgTestSingular m_testsingular
	{
		get
		{
			return m_testsingular_;
		}
		set
		{
			m_testsingular_ = value;
			set_has_m_testsingular();
		}
	}
	public void clear_m_testsingular()
	{
		if (has_m_testsingular())
		{
			clear_has_m_testsingular();
		}
		if (null != m_testsingular_)
		{
			m_testsingular_.Clear();
		}
	}
	public void release_m_testsingular()
	{
		if (has_m_testsingular())
		{
			clear_has_m_testsingular();
		}
		if (null != m_testsingular_)
		{
			m_testsingular_ = null;
		}
	}
	public bool has_m_testsingular()
	{
		return m_bits.HasBit(0);
	}
	private void set_has_m_testsingular()
	{
		m_bits.SetBit(0);
	}
	private void clear_has_m_testsingular()
	{
		m_bits.ClearBit(0);
	}

	private List<common.proto1.MsgTestSingular> m_testsingular_array_;
	public List<common.proto1.MsgTestSingular> m_testsingular_array
	{
		set
		{
			m_testsingular_array_ = value;
			set_has_m_testsingular_array();
		}
	}
	public int m_testsingular_array_size()
	{
		if (null != m_testsingular_array_ && has_m_testsingular_array())
		{
			return m_testsingular_array_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<common.proto1.MsgTestSingular>.Enumerator m_testsingular_array_enumerator()
	{
		if (null != m_testsingular_array_ && has_m_testsingular_array())
		{
			return m_testsingular_array_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testsingular_array_");
		}
	}
	public void add_m_testsingular_array(common.proto1.MsgTestSingular value)
	{
		if (null == m_testsingular_array_)
		{
			m_testsingular_array = new List<common.proto1.MsgTestSingular>();
		}
		if (null != m_testsingular_array_)
		{
			m_testsingular_array_.Add(value);
			set_has_m_testsingular_array();
		}
	}
	public common.proto1.MsgTestSingular get_m_testsingular_array(int index)
	{
		if (null != m_testsingular_array_ && has_m_testsingular_array() && index < m_testsingular_array_.Count)
		{
			return m_testsingular_array_[index];
		}
		else
		{
			return default(common.proto1.MsgTestSingular);
		}
	}
	public void set_m_testsingular_array(int index, common.proto1.MsgTestSingular value)
	{
		if (null == m_testsingular_array_)
		{
			m_testsingular_array = new List<common.proto1.MsgTestSingular>();
		}
		if (null != m_testsingular_array_ && has_m_testsingular_array() && index < m_testsingular_array_.Count)
		{
			m_testsingular_array_[index] = value;
			set_has_m_testsingular_array();
		}
	}
	public void clear_m_testsingular_array()
	{
		if (has_m_testsingular_array())
		{
			clear_has_m_testsingular_array();
		}
		if (m_testsingular_array_ != null)
		{
			m_testsingular_array_.Clear();
		}
	}
	public void release_m_testsingular_array()
	{
		if (has_m_testsingular_array())
		{
			clear_has_m_testsingular_array();
		}
		if (m_testsingular_array_ != null)
		{
			m_testsingular_array_ = null;
		}
	}
	public bool has_m_testsingular_array()
	{
		return m_bits.HasBit(1);
	}
	private void set_has_m_testsingular_array()
	{
		m_bits.SetBit(1);
	}
	private void clear_has_m_testsingular_array()
	{
		m_bits.ClearBit(1);
	}

	private Dictionary<int, common.proto1.MsgTestSingular> m_testsingular_map_;
	public Dictionary<int, common.proto1.MsgTestSingular> m_testsingular_map
	{
		set
		{
			m_testsingular_map_ = value;
			set_has_m_testsingular_map();
		}
	}
	public int m_testsingular_map_size()
	{
		if (null != m_testsingular_map_ && has_m_testsingular_map())
		{
			return m_testsingular_map_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto1.MsgTestSingular>.Enumerator m_testsingular_map_enumerator()
	{
		if (null != m_testsingular_map_ && has_m_testsingular_map())
		{
			return m_testsingular_map_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testsingular_map_");
		}
	}
	public void add_m_testsingular_map(int key, common.proto1.MsgTestSingular value)
	{
		if (null == m_testsingular_map_)
		{
			m_testsingular_map = new Dictionary<int, common.proto1.MsgTestSingular>();
		}
		if (null != m_testsingular_map_)
		{
			m_testsingular_map_.Add(key, value);
			set_has_m_testsingular_map();
		}
	}
	public common.proto1.MsgTestSingular find_m_testsingular_map(int key)
	{
		if (null != m_testsingular_map_ && has_m_testsingular_map())
		{
			return m_testsingular_map_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_testsingular_map(int key)
	{
		if (null != m_testsingular_map_)
		{
			m_testsingular_map_.Remove(key);
			if(0 == m_testsingular_map_.Count)
			{
				clear_has_m_testsingular_map();
			}
		}
	}
	public bool m_testsingular_map_contains(int key)
	{
		if (null != m_testsingular_map_ && has_m_testsingular_map())
		{
			return m_testsingular_map_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_testsingular_map()
	{
		if (has_m_testsingular_map())
		{
			clear_has_m_testsingular_map();
		}
		if (m_testsingular_map_ != null)
		{
			m_testsingular_map_.Clear();
		}
	}
	public void release_m_testsingular_map()
	{
		if (has_m_testsingular_map())
		{
			clear_has_m_testsingular_map();
		}
		if (m_testsingular_map_ != null)
		{
			m_testsingular_map_ = null;
		}
	}
	public bool has_m_testsingular_map()
	{
		return m_bits.HasBit(2);
	}
	private void set_has_m_testsingular_map()
	{
		m_bits.SetBit(2);
	}
	private void clear_has_m_testsingular_map()
	{
		m_bits.ClearBit(2);
	}

	private common.proto2.MsgTestArray m_testarray_;
	public common.proto2.MsgTestArray m_testarray
	{
		get
		{
			return m_testarray_;
		}
		set
		{
			m_testarray_ = value;
			set_has_m_testarray();
		}
	}
	public void clear_m_testarray()
	{
		if (has_m_testarray())
		{
			clear_has_m_testarray();
		}
		if (null != m_testarray_)
		{
			m_testarray_.Clear();
		}
	}
	public void release_m_testarray()
	{
		if (has_m_testarray())
		{
			clear_has_m_testarray();
		}
		if (null != m_testarray_)
		{
			m_testarray_ = null;
		}
	}
	public bool has_m_testarray()
	{
		return m_bits.HasBit(3);
	}
	private void set_has_m_testarray()
	{
		m_bits.SetBit(3);
	}
	private void clear_has_m_testarray()
	{
		m_bits.ClearBit(3);
	}

	private List<common.proto2.MsgTestArray> m_testarray_array_;
	public List<common.proto2.MsgTestArray> m_testarray_array
	{
		set
		{
			m_testarray_array_ = value;
			set_has_m_testarray_array();
		}
	}
	public int m_testarray_array_size()
	{
		if (null != m_testarray_array_ && has_m_testarray_array())
		{
			return m_testarray_array_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<common.proto2.MsgTestArray>.Enumerator m_testarray_array_enumerator()
	{
		if (null != m_testarray_array_ && has_m_testarray_array())
		{
			return m_testarray_array_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testarray_array_");
		}
	}
	public void add_m_testarray_array(common.proto2.MsgTestArray value)
	{
		if (null == m_testarray_array_)
		{
			m_testarray_array = new List<common.proto2.MsgTestArray>();
		}
		if (null != m_testarray_array_)
		{
			m_testarray_array_.Add(value);
			set_has_m_testarray_array();
		}
	}
	public common.proto2.MsgTestArray get_m_testarray_array(int index)
	{
		if (null != m_testarray_array_ && has_m_testarray_array() && index < m_testarray_array_.Count)
		{
			return m_testarray_array_[index];
		}
		else
		{
			return default(common.proto2.MsgTestArray);
		}
	}
	public void set_m_testarray_array(int index, common.proto2.MsgTestArray value)
	{
		if (null == m_testarray_array_)
		{
			m_testarray_array = new List<common.proto2.MsgTestArray>();
		}
		if (null != m_testarray_array_ && has_m_testarray_array() && index < m_testarray_array_.Count)
		{
			m_testarray_array_[index] = value;
			set_has_m_testarray_array();
		}
	}
	public void clear_m_testarray_array()
	{
		if (has_m_testarray_array())
		{
			clear_has_m_testarray_array();
		}
		if (m_testarray_array_ != null)
		{
			m_testarray_array_.Clear();
		}
	}
	public void release_m_testarray_array()
	{
		if (has_m_testarray_array())
		{
			clear_has_m_testarray_array();
		}
		if (m_testarray_array_ != null)
		{
			m_testarray_array_ = null;
		}
	}
	public bool has_m_testarray_array()
	{
		return m_bits.HasBit(4);
	}
	private void set_has_m_testarray_array()
	{
		m_bits.SetBit(4);
	}
	private void clear_has_m_testarray_array()
	{
		m_bits.ClearBit(4);
	}

	private Dictionary<int, common.proto2.MsgTestArray> m_testarray_map_;
	public Dictionary<int, common.proto2.MsgTestArray> m_testarray_map
	{
		set
		{
			m_testarray_map_ = value;
			set_has_m_testarray_map();
		}
	}
	public int m_testarray_map_size()
	{
		if (null != m_testarray_map_ && has_m_testarray_map())
		{
			return m_testarray_map_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto2.MsgTestArray>.Enumerator m_testarray_map_enumerator()
	{
		if (null != m_testarray_map_ && has_m_testarray_map())
		{
			return m_testarray_map_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testarray_map_");
		}
	}
	public void add_m_testarray_map(int key, common.proto2.MsgTestArray value)
	{
		if (null == m_testarray_map_)
		{
			m_testarray_map = new Dictionary<int, common.proto2.MsgTestArray>();
		}
		if (null != m_testarray_map_)
		{
			m_testarray_map_.Add(key, value);
			set_has_m_testarray_map();
		}
	}
	public common.proto2.MsgTestArray find_m_testarray_map(int key)
	{
		if (null != m_testarray_map_ && has_m_testarray_map())
		{
			return m_testarray_map_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_testarray_map(int key)
	{
		if (null != m_testarray_map_)
		{
			m_testarray_map_.Remove(key);
			if(0 == m_testarray_map_.Count)
			{
				clear_has_m_testarray_map();
			}
		}
	}
	public bool m_testarray_map_contains(int key)
	{
		if (null != m_testarray_map_ && has_m_testarray_map())
		{
			return m_testarray_map_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_testarray_map()
	{
		if (has_m_testarray_map())
		{
			clear_has_m_testarray_map();
		}
		if (m_testarray_map_ != null)
		{
			m_testarray_map_.Clear();
		}
	}
	public void release_m_testarray_map()
	{
		if (has_m_testarray_map())
		{
			clear_has_m_testarray_map();
		}
		if (m_testarray_map_ != null)
		{
			m_testarray_map_ = null;
		}
	}
	public bool has_m_testarray_map()
	{
		return m_bits.HasBit(5);
	}
	private void set_has_m_testarray_map()
	{
		m_bits.SetBit(5);
	}
	private void clear_has_m_testarray_map()
	{
		m_bits.ClearBit(5);
	}

	private common.proto2.MsgTestSet m_testset_;
	public common.proto2.MsgTestSet m_testset
	{
		get
		{
			return m_testset_;
		}
		set
		{
			m_testset_ = value;
			set_has_m_testset();
		}
	}
	public void clear_m_testset()
	{
		if (has_m_testset())
		{
			clear_has_m_testset();
		}
		if (null != m_testset_)
		{
			m_testset_.Clear();
		}
	}
	public void release_m_testset()
	{
		if (has_m_testset())
		{
			clear_has_m_testset();
		}
		if (null != m_testset_)
		{
			m_testset_ = null;
		}
	}
	public bool has_m_testset()
	{
		return m_bits.HasBit(6);
	}
	private void set_has_m_testset()
	{
		m_bits.SetBit(6);
	}
	private void clear_has_m_testset()
	{
		m_bits.ClearBit(6);
	}

	private List<common.proto2.MsgTestSet> m_testset_array_;
	public List<common.proto2.MsgTestSet> m_testset_array
	{
		set
		{
			m_testset_array_ = value;
			set_has_m_testset_array();
		}
	}
	public int m_testset_array_size()
	{
		if (null != m_testset_array_ && has_m_testset_array())
		{
			return m_testset_array_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<common.proto2.MsgTestSet>.Enumerator m_testset_array_enumerator()
	{
		if (null != m_testset_array_ && has_m_testset_array())
		{
			return m_testset_array_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testset_array_");
		}
	}
	public void add_m_testset_array(common.proto2.MsgTestSet value)
	{
		if (null == m_testset_array_)
		{
			m_testset_array = new List<common.proto2.MsgTestSet>();
		}
		if (null != m_testset_array_)
		{
			m_testset_array_.Add(value);
			set_has_m_testset_array();
		}
	}
	public common.proto2.MsgTestSet get_m_testset_array(int index)
	{
		if (null != m_testset_array_ && has_m_testset_array() && index < m_testset_array_.Count)
		{
			return m_testset_array_[index];
		}
		else
		{
			return default(common.proto2.MsgTestSet);
		}
	}
	public void set_m_testset_array(int index, common.proto2.MsgTestSet value)
	{
		if (null == m_testset_array_)
		{
			m_testset_array = new List<common.proto2.MsgTestSet>();
		}
		if (null != m_testset_array_ && has_m_testset_array() && index < m_testset_array_.Count)
		{
			m_testset_array_[index] = value;
			set_has_m_testset_array();
		}
	}
	public void clear_m_testset_array()
	{
		if (has_m_testset_array())
		{
			clear_has_m_testset_array();
		}
		if (m_testset_array_ != null)
		{
			m_testset_array_.Clear();
		}
	}
	public void release_m_testset_array()
	{
		if (has_m_testset_array())
		{
			clear_has_m_testset_array();
		}
		if (m_testset_array_ != null)
		{
			m_testset_array_ = null;
		}
	}
	public bool has_m_testset_array()
	{
		return m_bits.HasBit(7);
	}
	private void set_has_m_testset_array()
	{
		m_bits.SetBit(7);
	}
	private void clear_has_m_testset_array()
	{
		m_bits.ClearBit(7);
	}

	private Dictionary<int, common.proto2.MsgTestSet> m_testset_map_;
	public Dictionary<int, common.proto2.MsgTestSet> m_testset_map
	{
		set
		{
			m_testset_map_ = value;
			set_has_m_testset_map();
		}
	}
	public int m_testset_map_size()
	{
		if (null != m_testset_map_ && has_m_testset_map())
		{
			return m_testset_map_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto2.MsgTestSet>.Enumerator m_testset_map_enumerator()
	{
		if (null != m_testset_map_ && has_m_testset_map())
		{
			return m_testset_map_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testset_map_");
		}
	}
	public void add_m_testset_map(int key, common.proto2.MsgTestSet value)
	{
		if (null == m_testset_map_)
		{
			m_testset_map = new Dictionary<int, common.proto2.MsgTestSet>();
		}
		if (null != m_testset_map_)
		{
			m_testset_map_.Add(key, value);
			set_has_m_testset_map();
		}
	}
	public common.proto2.MsgTestSet find_m_testset_map(int key)
	{
		if (null != m_testset_map_ && has_m_testset_map())
		{
			return m_testset_map_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_testset_map(int key)
	{
		if (null != m_testset_map_)
		{
			m_testset_map_.Remove(key);
			if(0 == m_testset_map_.Count)
			{
				clear_has_m_testset_map();
			}
		}
	}
	public bool m_testset_map_contains(int key)
	{
		if (null != m_testset_map_ && has_m_testset_map())
		{
			return m_testset_map_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_testset_map()
	{
		if (has_m_testset_map())
		{
			clear_has_m_testset_map();
		}
		if (m_testset_map_ != null)
		{
			m_testset_map_.Clear();
		}
	}
	public void release_m_testset_map()
	{
		if (has_m_testset_map())
		{
			clear_has_m_testset_map();
		}
		if (m_testset_map_ != null)
		{
			m_testset_map_ = null;
		}
	}
	public bool has_m_testset_map()
	{
		return m_bits.HasBit(8);
	}
	private void set_has_m_testset_map()
	{
		m_bits.SetBit(8);
	}
	private void clear_has_m_testset_map()
	{
		m_bits.ClearBit(8);
	}

	private common.proto2.MsgTestMap m_testmap_;
	public common.proto2.MsgTestMap m_testmap
	{
		get
		{
			return m_testmap_;
		}
		set
		{
			m_testmap_ = value;
			set_has_m_testmap();
		}
	}
	public void clear_m_testmap()
	{
		if (has_m_testmap())
		{
			clear_has_m_testmap();
		}
		if (null != m_testmap_)
		{
			m_testmap_.Clear();
		}
	}
	public void release_m_testmap()
	{
		if (has_m_testmap())
		{
			clear_has_m_testmap();
		}
		if (null != m_testmap_)
		{
			m_testmap_ = null;
		}
	}
	public bool has_m_testmap()
	{
		return m_bits.HasBit(9);
	}
	private void set_has_m_testmap()
	{
		m_bits.SetBit(9);
	}
	private void clear_has_m_testmap()
	{
		m_bits.ClearBit(9);
	}

	private List<common.proto2.MsgTestMap> m_testmap_array_;
	public List<common.proto2.MsgTestMap> m_testmap_array
	{
		set
		{
			m_testmap_array_ = value;
			set_has_m_testmap_array();
		}
	}
	public int m_testmap_array_size()
	{
		if (null != m_testmap_array_ && has_m_testmap_array())
		{
			return m_testmap_array_.Count;
		}
		else
		{
			return 0;
		}
	}
	public List<common.proto2.MsgTestMap>.Enumerator m_testmap_array_enumerator()
	{
		if (null != m_testmap_array_ && has_m_testmap_array())
		{
			return m_testmap_array_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testmap_array_");
		}
	}
	public void add_m_testmap_array(common.proto2.MsgTestMap value)
	{
		if (null == m_testmap_array_)
		{
			m_testmap_array = new List<common.proto2.MsgTestMap>();
		}
		if (null != m_testmap_array_)
		{
			m_testmap_array_.Add(value);
			set_has_m_testmap_array();
		}
	}
	public common.proto2.MsgTestMap get_m_testmap_array(int index)
	{
		if (null != m_testmap_array_ && has_m_testmap_array() && index < m_testmap_array_.Count)
		{
			return m_testmap_array_[index];
		}
		else
		{
			return default(common.proto2.MsgTestMap);
		}
	}
	public void set_m_testmap_array(int index, common.proto2.MsgTestMap value)
	{
		if (null == m_testmap_array_)
		{
			m_testmap_array = new List<common.proto2.MsgTestMap>();
		}
		if (null != m_testmap_array_ && has_m_testmap_array() && index < m_testmap_array_.Count)
		{
			m_testmap_array_[index] = value;
			set_has_m_testmap_array();
		}
	}
	public void clear_m_testmap_array()
	{
		if (has_m_testmap_array())
		{
			clear_has_m_testmap_array();
		}
		if (m_testmap_array_ != null)
		{
			m_testmap_array_.Clear();
		}
	}
	public void release_m_testmap_array()
	{
		if (has_m_testmap_array())
		{
			clear_has_m_testmap_array();
		}
		if (m_testmap_array_ != null)
		{
			m_testmap_array_ = null;
		}
	}
	public bool has_m_testmap_array()
	{
		return m_bits.HasBit(10);
	}
	private void set_has_m_testmap_array()
	{
		m_bits.SetBit(10);
	}
	private void clear_has_m_testmap_array()
	{
		m_bits.ClearBit(10);
	}

	private Dictionary<int, common.proto2.MsgTestMap> m_testmap_map_;
	public Dictionary<int, common.proto2.MsgTestMap> m_testmap_map
	{
		set
		{
			m_testmap_map_ = value;
			set_has_m_testmap_map();
		}
	}
	public int m_testmap_map_size()
	{
		if (null != m_testmap_map_ && has_m_testmap_map())
		{
			return m_testmap_map_.Count;
		}
		else
		{
			return 0;
		}
	}
	public Dictionary<int, common.proto2.MsgTestMap>.Enumerator m_testmap_map_enumerator()
	{
		if (null != m_testmap_map_ && has_m_testmap_map())
		{
			return m_testmap_map_.GetEnumerator();
		}
		else
		{
			throw new NullReferenceException("has not m_testmap_map_");
		}
	}
	public void add_m_testmap_map(int key, common.proto2.MsgTestMap value)
	{
		if (null == m_testmap_map_)
		{
			m_testmap_map = new Dictionary<int, common.proto2.MsgTestMap>();
		}
		if (null != m_testmap_map_)
		{
			m_testmap_map_.Add(key, value);
			set_has_m_testmap_map();
		}
	}
	public common.proto2.MsgTestMap find_m_testmap_map(int key)
	{
		if (null != m_testmap_map_ && has_m_testmap_map())
		{
			return m_testmap_map_[key];
		}
		else
		{
			throw new System.Collections.Generic.KeyNotFoundException();
		}
	}
	public void remove_m_testmap_map(int key)
	{
		if (null != m_testmap_map_)
		{
			m_testmap_map_.Remove(key);
			if(0 == m_testmap_map_.Count)
			{
				clear_has_m_testmap_map();
			}
		}
	}
	public bool m_testmap_map_contains(int key)
	{
		if (null != m_testmap_map_ && has_m_testmap_map())
		{
			return m_testmap_map_.ContainsKey(key);
		}
		else
		{
			return false;
		}
	}
	public void clear_m_testmap_map()
	{
		if (has_m_testmap_map())
		{
			clear_has_m_testmap_map();
		}
		if (m_testmap_map_ != null)
		{
			m_testmap_map_.Clear();
		}
	}
	public void release_m_testmap_map()
	{
		if (has_m_testmap_map())
		{
			clear_has_m_testmap_map();
		}
		if (m_testmap_map_ != null)
		{
			m_testmap_map_ = null;
		}
	}
	public bool has_m_testmap_map()
	{
		return m_bits.HasBit(11);
	}
	private void set_has_m_testmap_map()
	{
		m_bits.SetBit(11);
	}
	private void clear_has_m_testmap_map()
	{
		m_bits.ClearBit(11);
	}

	public MsgTest()
	{
		m_bits = new common.miniproto.ProtoBitMap(12);
		m_testsingular_ = default(common.proto1.MsgTestSingular);
		m_testsingular_array_ = default(List<common.proto1.MsgTestSingular>);
		m_testsingular_map_ = default(Dictionary<int, common.proto1.MsgTestSingular>);
		m_testarray_ = default(common.proto2.MsgTestArray);
		m_testarray_array_ = default(List<common.proto2.MsgTestArray>);
		m_testarray_map_ = default(Dictionary<int, common.proto2.MsgTestArray>);
		m_testset_ = default(common.proto2.MsgTestSet);
		m_testset_array_ = default(List<common.proto2.MsgTestSet>);
		m_testset_map_ = default(Dictionary<int, common.proto2.MsgTestSet>);
		m_testmap_ = default(common.proto2.MsgTestMap);
		m_testmap_array_ = default(List<common.proto2.MsgTestMap>);
		m_testmap_map_ = default(Dictionary<int, common.proto2.MsgTestMap>);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		if (has_m_testsingular())
		{
			if (null != m_testsingular_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.MessageByteSize(m_testsingular_);
			}
		}
		if (has_m_testsingular_array())
		{
			if (null != m_testsingular_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testsingular_array_, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testsingular_map())
		{
			if (null != m_testsingular_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_testsingular_map_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testarray())
		{
			if (null != m_testarray_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.MessageByteSize(m_testarray_);
			}
		}
		if (has_m_testarray_array())
		{
			if (null != m_testarray_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testarray_array_, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testarray_map())
		{
			if (null != m_testarray_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_testarray_map_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testset())
		{
			if (null != m_testset_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.MessageByteSize(m_testset_);
			}
		}
		if (has_m_testset_array())
		{
			if (null != m_testset_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testset_array_, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testset_map())
		{
			if (null != m_testset_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_testset_map_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testmap())
		{
			if (null != m_testmap_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.MessageByteSize(m_testmap_);
			}
		}
		if (has_m_testmap_array())
		{
			if (null != m_testmap_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.ArrayByteSize(m_testmap_array_, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testmap_map())
		{
			if (null != m_testmap_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.DictionaryByteSize(m_testmap_map_, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}

		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		if (has_m_testsingular())
		{
			if (null != m_testsingular_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(1u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.MessageCode(m_testsingular_, buf);
			}
		}
		if (has_m_testsingular_array())
		{
			if (null != m_testsingular_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(2u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_testsingular_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testsingular_map())
		{
			if (null != m_testsingular_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(3u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_testsingular_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testarray())
		{
			if (null != m_testarray_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(4u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.MessageCode(m_testarray_, buf);
			}
		}
		if (has_m_testarray_array())
		{
			if (null != m_testarray_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(5u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_testarray_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testarray_map())
		{
			if (null != m_testarray_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(6u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_testarray_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testset())
		{
			if (null != m_testset_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(7u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.MessageCode(m_testset_, buf);
			}
		}
		if (has_m_testset_array())
		{
			if (null != m_testset_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(8u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_testset_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testset_map())
		{
			if (null != m_testset_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(9u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_testset_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testmap())
		{
			if (null != m_testmap_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(10u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.MessageCode(m_testmap_, buf);
			}
		}
		if (has_m_testmap_array())
		{
			if (null != m_testmap_array_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.ArrayCode(m_testmap_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}
		if (has_m_testmap_map())
		{
			if (null != m_testmap_map_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.DictionaryCode(m_testmap_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
			}
		}

		return bytes;
	}

	public override ulong Decode(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		uint num = 0;
		uint type = (uint)common.miniproto.ProtoWireType.PWT_Unknown;
		while (bytes < size)
		{
			bytes += common.miniproto.ProtoTool.KeyDecode(ref num, ref type, buf);
			switch (num << 3 | type)
			{
				case 1 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testsingular_)
					{
						m_testsingular_ = new common.proto1.MsgTestSingular();
					}
					if (null != m_testsingular_)
					{
						bytes += common.miniproto.ProtoTool.MessageDecode(ref m_testsingular_, buf);
						set_has_m_testsingular();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 2 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testsingular_array_)
					{
						m_testsingular_array_ = new List<common.proto1.MsgTestSingular>();
					}
					if (null != m_testsingular_array_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_testsingular_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testsingular_array();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 3 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testsingular_map_)
					{
						m_testsingular_map_ = new Dictionary<int, common.proto1.MsgTestSingular>();
					}
					if (null != m_testsingular_map_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_testsingular_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testsingular_map();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 4 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testarray_)
					{
						m_testarray_ = new common.proto2.MsgTestArray();
					}
					if (null != m_testarray_)
					{
						bytes += common.miniproto.ProtoTool.MessageDecode(ref m_testarray_, buf);
						set_has_m_testarray();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 5 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testarray_array_)
					{
						m_testarray_array_ = new List<common.proto2.MsgTestArray>();
					}
					if (null != m_testarray_array_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_testarray_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testarray_array();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 6 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testarray_map_)
					{
						m_testarray_map_ = new Dictionary<int, common.proto2.MsgTestArray>();
					}
					if (null != m_testarray_map_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_testarray_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testarray_map();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 7 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testset_)
					{
						m_testset_ = new common.proto2.MsgTestSet();
					}
					if (null != m_testset_)
					{
						bytes += common.miniproto.ProtoTool.MessageDecode(ref m_testset_, buf);
						set_has_m_testset();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 8 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testset_array_)
					{
						m_testset_array_ = new List<common.proto2.MsgTestSet>();
					}
					if (null != m_testset_array_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_testset_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testset_array();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 9 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testset_map_)
					{
						m_testset_map_ = new Dictionary<int, common.proto2.MsgTestSet>();
					}
					if (null != m_testset_map_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_testset_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testset_map();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 10 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testmap_)
					{
						m_testmap_ = new common.proto2.MsgTestMap();
					}
					if (null != m_testmap_)
					{
						bytes += common.miniproto.ProtoTool.MessageDecode(ref m_testmap_, buf);
						set_has_m_testmap();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 11 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testmap_array_)
					{
						m_testmap_array_ = new List<common.proto2.MsgTestMap>();
					}
					if (null != m_testmap_array_)
					{
						bytes += common.miniproto.ProtoTool.ArrayDecode(m_testmap_array_, buf, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testmap_array();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				case 12 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					if (null == m_testmap_map_)
					{
						m_testmap_map_ = new Dictionary<int, common.proto2.MsgTestMap>();
					}
					if (null != m_testmap_map_)
					{
						bytes += common.miniproto.ProtoTool.DictionaryDecode(m_testmap_map_, buf, common.miniproto.ProtoDefine.CommonProtoInt32, common.miniproto.ProtoDefine.CommonProtoMessage);
						set_has_m_testmap_map();
					}
					else
					{
						bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
					}
				}
				break;
				default:
				bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
				break;
			}
		}
		
		return bytes;
	}

	public override void Clear()
	{
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

	public override void Release()
	{
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


} //namespace proto2
} //namespace common

