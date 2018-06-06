using System;
using System.IO;
using System.Text;
using System.Collections.Generic;

namespace common {
namespace proto1 {

public enum EnumBase
{
	[System.ComponentModel.Description("EnumBase_1")]
	EnumBase_1 = 0,
	[System.ComponentModel.Description("EnumBase_2")]
	EnumBase_2 = 100,
	[System.ComponentModel.Description("EnumBase_3")]
	EnumBase_3 = 22,
};


public enum EnumTest
{
	[System.ComponentModel.Description("EnumTest_1")]
	EnumTest_1 = 1,
	[System.ComponentModel.Description("EnumTest_2")]
	EnumTest_2 = 3,
	[System.ComponentModel.Description("EnumTest_3")]
	EnumTest_3 = 3,
	[System.ComponentModel.Description("EnumTest_4")]
	EnumTest_4 = 3,
	[System.ComponentModel.Description("EnumTest_5")]
	EnumTest_5 = 4,
};


public class MsgNull : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	public MsgNull()
	{
		m_bits = new common.miniproto.ProtoBitMap(0);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
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
				default:
				bytes += common.miniproto.ProtoTool.UnknownDecode(type, buf);
				break;
			}
		}
		
		return bytes;
	}

	public override void Clear()
	{
	}

	public override void Release()
	{
	}
};


public class MsgTestSingular : common.miniproto.ProtoBase
{
	private common.miniproto.ProtoBitMap m_bits;

	private bool m_bool_;
	public bool m_bool
	{
		get
		{
			return m_bool_;
		}
		set
		{
			m_bool_ = value;
			set_has_m_bool();
		}
	}
	public void clear_m_bool()
	{
		if (has_m_bool())
		{
			clear_has_m_bool();
		}
	}
	public void release_m_bool()
	{
		if (has_m_bool())
		{
			clear_has_m_bool();
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

	private int m_int32_;
	public int m_int32
	{
		get
		{
			return m_int32_;
		}
		set
		{
			m_int32_ = value;
			set_has_m_int32();
		}
	}
	public void clear_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
		}
	}
	public void release_m_int32()
	{
		if (has_m_int32())
		{
			clear_has_m_int32();
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

	private int m_sint32_;
	public int m_sint32
	{
		get
		{
			return m_sint32_;
		}
		set
		{
			m_sint32_ = value;
			set_has_m_sint32();
		}
	}
	public void clear_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
		}
	}
	public void release_m_sint32()
	{
		if (has_m_sint32())
		{
			clear_has_m_sint32();
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

	private uint m_uint32_;
	public uint m_uint32
	{
		get
		{
			return m_uint32_;
		}
		set
		{
			m_uint32_ = value;
			set_has_m_uint32();
		}
	}
	public void clear_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
		}
	}
	public void release_m_uint32()
	{
		if (has_m_uint32())
		{
			clear_has_m_uint32();
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

	private long m_int64_;
	public long m_int64
	{
		get
		{
			return m_int64_;
		}
		set
		{
			m_int64_ = value;
			set_has_m_int64();
		}
	}
	public void clear_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
		}
	}
	public void release_m_int64()
	{
		if (has_m_int64())
		{
			clear_has_m_int64();
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

	private long m_sint64_;
	public long m_sint64
	{
		get
		{
			return m_sint64_;
		}
		set
		{
			m_sint64_ = value;
			set_has_m_sint64();
		}
	}
	public void clear_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
		}
	}
	public void release_m_sint64()
	{
		if (has_m_sint64())
		{
			clear_has_m_sint64();
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

	private ulong m_uint64_;
	public ulong m_uint64
	{
		get
		{
			return m_uint64_;
		}
		set
		{
			m_uint64_ = value;
			set_has_m_uint64();
		}
	}
	public void clear_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
		}
	}
	public void release_m_uint64()
	{
		if (has_m_uint64())
		{
			clear_has_m_uint64();
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

	private float m_float_;
	public float m_float
	{
		get
		{
			return m_float_;
		}
		set
		{
			m_float_ = value;
			set_has_m_float();
		}
	}
	public void clear_m_float()
	{
		if (has_m_float())
		{
			clear_has_m_float();
		}
	}
	public void release_m_float()
	{
		if (has_m_float())
		{
			clear_has_m_float();
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

	private double m_double_;
	public double m_double
	{
		get
		{
			return m_double_;
		}
		set
		{
			m_double_ = value;
			set_has_m_double();
		}
	}
	public void clear_m_double()
	{
		if (has_m_double())
		{
			clear_has_m_double();
		}
	}
	public void release_m_double()
	{
		if (has_m_double())
		{
			clear_has_m_double();
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

	private common.proto1.EnumTest m_enum_;
	public common.proto1.EnumTest m_enum
	{
		get
		{
			return m_enum_;
		}
		set
		{
			m_enum_ = value;
			set_has_m_enum();
		}
	}
	public void clear_m_enum()
	{
		if (has_m_enum())
		{
			clear_has_m_enum();
		}
	}
	public void release_m_enum()
	{
		if (has_m_enum())
		{
			clear_has_m_enum();
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

	private string m_string_;
	public string m_string
	{
		get
		{
			return m_string_;
		}
		set
		{
			m_string_ = value;
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
			m_string_.Remove(0, m_string_.Length);
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

	private string m_bytes_;
	public string m_bytes
	{
		get
		{
			return m_bytes_;
		}
		set
		{
			m_bytes_ = value;
			set_has_m_bytes();
		}
	}
	public void clear_m_bytes()
	{
		if (has_m_bytes())
		{
			clear_has_m_bytes();
		}
		if (m_bytes_ != null)
		{
			m_bytes_.Remove(0, m_bytes_.Length);
		}
	}
	public void release_m_bytes()
	{
		if (has_m_bytes())
		{
			clear_has_m_bytes();
		}
		if (m_bytes_ != null)
		{
			m_bytes_ = null;
		}
	}
	public bool has_m_bytes()
	{
		return m_bits.HasBit(11);
	}
	private void set_has_m_bytes()
	{
		m_bits.SetBit(11);
	}
	private void clear_has_m_bytes()
	{
		m_bits.ClearBit(11);
	}

	public MsgTestSingular()
	{
		m_bits = new common.miniproto.ProtoBitMap(12);
		m_bool_ = default(bool);
		m_int32_ = default(int);
		m_sint32_ = default(int);
		m_uint32_ = default(uint);
		m_int64_ = default(long);
		m_sint64_ = default(long);
		m_uint64_ = default(ulong);
		m_float_ = default(float);
		m_double_ = default(double);
		m_enum_ = default(common.proto1.EnumTest);
		m_string_ = default(string);
		m_bytes_ = default(string);
	}

	public override ulong ByteSize()
	{
		ulong bytes = 0;
		
		if (has_m_bool())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(1u, (uint)common.miniproto.ProtoWireType.PWT_Varint);
			bytes += common.miniproto.ProtoTool.BoolByteSize(m_bool_);
		}
		if (has_m_int32())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(2u, (uint)common.miniproto.ProtoWireType.PWT_Varint);
			bytes += common.miniproto.ProtoTool.Int32ByteSize(m_int32_);
		}
		if (has_m_sint32())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(3u, (uint)common.miniproto.ProtoWireType.PWT_32bit);
			bytes += common.miniproto.ProtoTool.SFixed32ByteSize(m_sint32_);
		}
		if (has_m_uint32())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(4u, (uint)common.miniproto.ProtoWireType.PWT_32bit);
			bytes += common.miniproto.ProtoTool.Fixed32ByteSize(m_uint32_);
		}
		if (has_m_int64())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(5u, (uint)common.miniproto.ProtoWireType.PWT_Varint);
			bytes += common.miniproto.ProtoTool.Int64ByteSize(m_int64_);
		}
		if (has_m_sint64())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(6u, (uint)common.miniproto.ProtoWireType.PWT_64bit);
			bytes += common.miniproto.ProtoTool.SFixed64ByteSize(m_sint64_);
		}
		if (has_m_uint64())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(7u, (uint)common.miniproto.ProtoWireType.PWT_64bit);
			bytes += common.miniproto.ProtoTool.Fixed64ByteSize(m_uint64_);
		}
		if (has_m_float())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(8u, (uint)common.miniproto.ProtoWireType.PWT_32bit);
			bytes += common.miniproto.ProtoTool.FloatByteSize(m_float_);
		}
		if (has_m_double())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(9u, (uint)common.miniproto.ProtoWireType.PWT_64bit);
			bytes += common.miniproto.ProtoTool.DoubleByteSize(m_double_);
		}
		if (has_m_enum())
		{
			bytes += common.miniproto.ProtoTool.KeyByteSize(10u, (uint)common.miniproto.ProtoWireType.PWT_Varint);
			bytes += common.miniproto.ProtoTool.EnumByteSize(m_enum_);
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.StringByteSize(m_string_);
			}
		}
		if (has_m_bytes())
		{
			if (null != m_bytes_)
			{
				bytes += common.miniproto.ProtoTool.KeyByteSize(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited);
				bytes += common.miniproto.ProtoTool.StringByteSize(m_bytes_);
			}
		}

		return bytes;
	}

	public override ulong Code(Stream buf, ulong size)
	{
		ulong bytes = 0;
		
		if (has_m_bool())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(1u, (uint)common.miniproto.ProtoWireType.PWT_Varint, buf);
			bytes += common.miniproto.ProtoTool.BoolCode(m_bool_, buf);
		}
		if (has_m_int32())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(2u, (uint)common.miniproto.ProtoWireType.PWT_Varint, buf);
			bytes += common.miniproto.ProtoTool.Int32Code(m_int32_, buf);
		}
		if (has_m_sint32())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(3u, (uint)common.miniproto.ProtoWireType.PWT_32bit, buf);
			bytes += common.miniproto.ProtoTool.SFixed32Code(m_sint32_, buf);
		}
		if (has_m_uint32())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(4u, (uint)common.miniproto.ProtoWireType.PWT_32bit, buf);
			bytes += common.miniproto.ProtoTool.Fixed32Code(m_uint32_, buf);
		}
		if (has_m_int64())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(5u, (uint)common.miniproto.ProtoWireType.PWT_Varint, buf);
			bytes += common.miniproto.ProtoTool.Int64Code(m_int64_, buf);
		}
		if (has_m_sint64())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(6u, (uint)common.miniproto.ProtoWireType.PWT_64bit, buf);
			bytes += common.miniproto.ProtoTool.SFixed64Code(m_sint64_, buf);
		}
		if (has_m_uint64())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(7u, (uint)common.miniproto.ProtoWireType.PWT_64bit, buf);
			bytes += common.miniproto.ProtoTool.Fixed64Code(m_uint64_, buf);
		}
		if (has_m_float())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(8u, (uint)common.miniproto.ProtoWireType.PWT_32bit, buf);
			bytes += common.miniproto.ProtoTool.FloatCode(m_float_, buf);
		}
		if (has_m_double())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(9u, (uint)common.miniproto.ProtoWireType.PWT_64bit, buf);
			bytes += common.miniproto.ProtoTool.DoubleCode(m_double_, buf);
		}
		if (has_m_enum())
		{
			bytes += common.miniproto.ProtoTool.KeyCode(10u, (uint)common.miniproto.ProtoWireType.PWT_Varint, buf);
			bytes += common.miniproto.ProtoTool.EnumCode(m_enum_, buf);
		}
		if (has_m_string())
		{
			if (null != m_string_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(11u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.StringCode(m_string_, buf);
			}
		}
		if (has_m_bytes())
		{
			if (null != m_bytes_)
			{
				bytes += common.miniproto.ProtoTool.KeyCode(12u, (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited, buf);
				bytes += common.miniproto.ProtoTool.StringCode(m_bytes_, buf);
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
				case 1 << 3 | (uint)common.miniproto.ProtoWireType.PWT_Varint:
				{
					bytes += common.miniproto.ProtoTool.BoolDecode(ref m_bool_, buf);
					set_has_m_bool();
				}
				break;
				case 2 << 3 | (uint)common.miniproto.ProtoWireType.PWT_Varint:
				{
					bytes += common.miniproto.ProtoTool.Int32Decode(ref m_int32_, buf);
					set_has_m_int32();
				}
				break;
				case 3 << 3 | (uint)common.miniproto.ProtoWireType.PWT_32bit:
				{
					bytes += common.miniproto.ProtoTool.SFixed32Decode(ref m_sint32_, buf);
					set_has_m_sint32();
				}
				break;
				case 4 << 3 | (uint)common.miniproto.ProtoWireType.PWT_32bit:
				{
					bytes += common.miniproto.ProtoTool.Fixed32Decode(ref m_uint32_, buf);
					set_has_m_uint32();
				}
				break;
				case 5 << 3 | (uint)common.miniproto.ProtoWireType.PWT_Varint:
				{
					bytes += common.miniproto.ProtoTool.Int64Decode(ref m_int64_, buf);
					set_has_m_int64();
				}
				break;
				case 6 << 3 | (uint)common.miniproto.ProtoWireType.PWT_64bit:
				{
					bytes += common.miniproto.ProtoTool.SFixed64Decode(ref m_sint64_, buf);
					set_has_m_sint64();
				}
				break;
				case 7 << 3 | (uint)common.miniproto.ProtoWireType.PWT_64bit:
				{
					bytes += common.miniproto.ProtoTool.Fixed64Decode(ref m_uint64_, buf);
					set_has_m_uint64();
				}
				break;
				case 8 << 3 | (uint)common.miniproto.ProtoWireType.PWT_32bit:
				{
					bytes += common.miniproto.ProtoTool.FloatDecode(ref m_float_, buf);
					set_has_m_float();
				}
				break;
				case 9 << 3 | (uint)common.miniproto.ProtoWireType.PWT_64bit:
				{
					bytes += common.miniproto.ProtoTool.DoubleDecode(ref m_double_, buf);
					set_has_m_double();
				}
				break;
				case 10 << 3 | (uint)common.miniproto.ProtoWireType.PWT_Varint:
				{
					bytes += common.miniproto.ProtoTool.EnumDecode(ref m_enum_, buf);
					set_has_m_enum();
				}
				break;
				case 11 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					bytes += common.miniproto.ProtoTool.StringDecode(ref m_string_, buf);
					set_has_m_string();
				}
				break;
				case 12 << 3 | (uint)common.miniproto.ProtoWireType.PWT_LengthDelimited:
				{
					bytes += common.miniproto.ProtoTool.StringDecode(ref m_bytes_, buf);
					set_has_m_bytes();
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
		clear_m_bytes();
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
		release_m_bytes();
	}
};


} //namespace proto1
} //namespace common

