#ifndef __Proto1__
#define __Proto1__

#include "ProtoBase.h"
#include "ProtoBuf.h"
#include "ProtoTool.h"
#include "ProtoBitMap.h"

namespace common {
namespace proto1 {

enum EnumBase
{
	EnumBase_1 = 0,
	EnumBase_2 = 100,
	EnumBase_3 = 22,
};

enum EnumTest
{
	EnumTest_1 = 1,
	EnumTest_2 = 3,
	EnumTest_3 = 3,
	EnumTest_4 = 3,
	EnumTest_5 = 4,
};

template <template<typename> class A = std::allocator>
class MsgNull : public common::miniproto::ProtoBase
{
public:
	MsgNull();
	MsgNull(const MsgNull<A>& other);
	MsgNull(MsgNull<A>&& other);
	virtual ~MsgNull();
	MsgNull<A>& operator = (const MsgNull<A>& other);
	MsgNull<A>& operator = (MsgNull<A>&& other);

public:
	virtual common::miniproto::byte_size ByteSize() const;
	virtual common::miniproto::byte_size Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const;
	virtual common::miniproto::byte_size Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size);
	virtual common::miniproto::byte_size Code(std::ostream& buf, common::miniproto::byte_size size) const;
	virtual common::miniproto::byte_size Decode(std::istream& buf, common::miniproto::byte_size size);

public:
	void Clear();
	void Release();

private:
	common::miniproto::ProtoBitMap<0> m_bits;
};

template <template<typename> class A>
MsgNull<A>::MsgNull()
{
}

template <template<typename> class A>
MsgNull<A>::MsgNull(const MsgNull<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgNull<A>::MsgNull(MsgNull<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgNull<A>::~MsgNull()
{
}

template <template<typename> class A>
MsgNull<A>& MsgNull<A>::operator = (const MsgNull<A>& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	return *this;
}

template <template<typename> class A>
MsgNull<A>& MsgNull<A>::operator = (MsgNull<A>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgNull<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgNull<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgNull<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgNull<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			default:
			bytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);
			break;
		}
	}
	
	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgNull<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			default:
			bytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);
			break;
		}
	}
	
	return bytes;
}

template <template<typename> class A>
void MsgNull<A>::Clear()
{
}

template <template<typename> class A>
void MsgNull<A>::Release()
{
}

template <template<typename> class A = std::allocator>
class MsgTestSingular : public common::miniproto::ProtoBase
{
public:
	MsgTestSingular();
	MsgTestSingular(const MsgTestSingular<A>& other);
	MsgTestSingular(MsgTestSingular<A>&& other);
	virtual ~MsgTestSingular();
	MsgTestSingular<A>& operator = (const MsgTestSingular<A>& other);
	MsgTestSingular<A>& operator = (MsgTestSingular<A>&& other);

public:
	virtual common::miniproto::byte_size ByteSize() const;
	virtual common::miniproto::byte_size Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const;
	virtual common::miniproto::byte_size Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size);
	virtual common::miniproto::byte_size Code(std::ostream& buf, common::miniproto::byte_size size) const;
	virtual common::miniproto::byte_size Decode(std::istream& buf, common::miniproto::byte_size size);

public:
	void Clear();
	void Release();

public:
	void set_m_bool(const bool& value);
	void set_m_bool(bool&& value);
public:
	const bool& m_bool() const;
public:
	void clear_m_bool();
	void release_m_bool();
public:
	bool has_m_bool() const;
private:
	void set_has_m_bool();
	void clear_has_m_bool();
private:
	bool m_bool_;

public:
	void set_m_int32(const common::miniproto::int32& value);
	void set_m_int32(common::miniproto::int32&& value);
public:
	const common::miniproto::int32& m_int32() const;
public:
	void clear_m_int32();
	void release_m_int32();
public:
	bool has_m_int32() const;
private:
	void set_has_m_int32();
	void clear_has_m_int32();
private:
	common::miniproto::int32 m_int32_;

public:
	void set_m_sint32(const common::miniproto::int32& value);
	void set_m_sint32(common::miniproto::int32&& value);
public:
	const common::miniproto::int32& m_sint32() const;
public:
	void clear_m_sint32();
	void release_m_sint32();
public:
	bool has_m_sint32() const;
private:
	void set_has_m_sint32();
	void clear_has_m_sint32();
private:
	common::miniproto::int32 m_sint32_;

public:
	void set_m_uint32(const common::miniproto::uint32& value);
	void set_m_uint32(common::miniproto::uint32&& value);
public:
	const common::miniproto::uint32& m_uint32() const;
public:
	void clear_m_uint32();
	void release_m_uint32();
public:
	bool has_m_uint32() const;
private:
	void set_has_m_uint32();
	void clear_has_m_uint32();
private:
	common::miniproto::uint32 m_uint32_;

public:
	void set_m_int64(const common::miniproto::int64& value);
	void set_m_int64(common::miniproto::int64&& value);
public:
	const common::miniproto::int64& m_int64() const;
public:
	void clear_m_int64();
	void release_m_int64();
public:
	bool has_m_int64() const;
private:
	void set_has_m_int64();
	void clear_has_m_int64();
private:
	common::miniproto::int64 m_int64_;

public:
	void set_m_sint64(const common::miniproto::int64& value);
	void set_m_sint64(common::miniproto::int64&& value);
public:
	const common::miniproto::int64& m_sint64() const;
public:
	void clear_m_sint64();
	void release_m_sint64();
public:
	bool has_m_sint64() const;
private:
	void set_has_m_sint64();
	void clear_has_m_sint64();
private:
	common::miniproto::int64 m_sint64_;

public:
	void set_m_uint64(const common::miniproto::uint64& value);
	void set_m_uint64(common::miniproto::uint64&& value);
public:
	const common::miniproto::uint64& m_uint64() const;
public:
	void clear_m_uint64();
	void release_m_uint64();
public:
	bool has_m_uint64() const;
private:
	void set_has_m_uint64();
	void clear_has_m_uint64();
private:
	common::miniproto::uint64 m_uint64_;

public:
	void set_m_float(const float& value);
	void set_m_float(float&& value);
public:
	const float& m_float() const;
public:
	void clear_m_float();
	void release_m_float();
public:
	bool has_m_float() const;
private:
	void set_has_m_float();
	void clear_has_m_float();
private:
	float m_float_;

public:
	void set_m_double(const double& value);
	void set_m_double(double&& value);
public:
	const double& m_double() const;
public:
	void clear_m_double();
	void release_m_double();
public:
	bool has_m_double() const;
private:
	void set_has_m_double();
	void clear_has_m_double();
private:
	double m_double_;

public:
	void set_m_enum(const common::proto1::EnumTest& value);
	void set_m_enum(common::proto1::EnumTest&& value);
public:
	const common::proto1::EnumTest& m_enum() const;
public:
	void clear_m_enum();
	void release_m_enum();
public:
	bool has_m_enum() const;
private:
	void set_has_m_enum();
	void clear_has_m_enum();
private:
	common::proto1::EnumTest m_enum_;

public:
	void set_m_string(const common::miniproto::String<A>& value);
	void set_m_string(common::miniproto::String<A>&& value);
	void set_m_string(const char* value);
	void set_m_string(const char* value, size_t size);
	common::miniproto::String<A>& m_string();
public:
	const common::miniproto::String<A>& m_string() const;
public:
	void clear_m_string();
	void release_m_string();
public:
	bool has_m_string() const;
private:
	void set_has_m_string();
	void clear_has_m_string();
private:
	common::miniproto::String<A> m_string_;

public:
	void set_m_bytes(const common::miniproto::String<A>& value);
	void set_m_bytes(common::miniproto::String<A>&& value);
	void set_m_bytes(const char* value);
	void set_m_bytes(const char* value, size_t size);
	common::miniproto::String<A>& m_bytes();
public:
	const common::miniproto::String<A>& m_bytes() const;
public:
	void clear_m_bytes();
	void release_m_bytes();
public:
	bool has_m_bytes() const;
private:
	void set_has_m_bytes();
	void clear_has_m_bytes();
private:
	common::miniproto::String<A> m_bytes_;

private:
	common::miniproto::ProtoBitMap<12> m_bits;
};

template <template<typename> class A>
MsgTestSingular<A>::MsgTestSingular()
{
}

template <template<typename> class A>
MsgTestSingular<A>::MsgTestSingular(const MsgTestSingular<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgTestSingular<A>::MsgTestSingular(MsgTestSingular<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgTestSingular<A>::~MsgTestSingular()
{
}

template <template<typename> class A>
MsgTestSingular<A>& MsgTestSingular<A>::operator = (const MsgTestSingular<A>& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_bool())
	{
		m_bool_ = other.m_bool_;
		set_has_m_bool();
	}
	if (other.has_m_int32())
	{
		m_int32_ = other.m_int32_;
		set_has_m_int32();
	}
	if (other.has_m_sint32())
	{
		m_sint32_ = other.m_sint32_;
		set_has_m_sint32();
	}
	if (other.has_m_uint32())
	{
		m_uint32_ = other.m_uint32_;
		set_has_m_uint32();
	}
	if (other.has_m_int64())
	{
		m_int64_ = other.m_int64_;
		set_has_m_int64();
	}
	if (other.has_m_sint64())
	{
		m_sint64_ = other.m_sint64_;
		set_has_m_sint64();
	}
	if (other.has_m_uint64())
	{
		m_uint64_ = other.m_uint64_;
		set_has_m_uint64();
	}
	if (other.has_m_float())
	{
		m_float_ = other.m_float_;
		set_has_m_float();
	}
	if (other.has_m_double())
	{
		m_double_ = other.m_double_;
		set_has_m_double();
	}
	if (other.has_m_enum())
	{
		m_enum_ = other.m_enum_;
		set_has_m_enum();
	}
	if (other.has_m_string())
	{
		m_string_ = other.m_string_;
		set_has_m_string();
	}
	if (other.has_m_bytes())
	{
		m_bytes_ = other.m_bytes_;
		set_has_m_bytes();
	}

	return *this;
}

template <template<typename> class A>
MsgTestSingular<A>& MsgTestSingular<A>::operator = (MsgTestSingular<A>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_bool())
	{
		m_bool_ = std::move(other.m_bool_);
		other.clear_has_m_bool();
		set_has_m_bool();
	}
	if (other.has_m_int32())
	{
		m_int32_ = std::move(other.m_int32_);
		other.clear_has_m_int32();
		set_has_m_int32();
	}
	if (other.has_m_sint32())
	{
		m_sint32_ = std::move(other.m_sint32_);
		other.clear_has_m_sint32();
		set_has_m_sint32();
	}
	if (other.has_m_uint32())
	{
		m_uint32_ = std::move(other.m_uint32_);
		other.clear_has_m_uint32();
		set_has_m_uint32();
	}
	if (other.has_m_int64())
	{
		m_int64_ = std::move(other.m_int64_);
		other.clear_has_m_int64();
		set_has_m_int64();
	}
	if (other.has_m_sint64())
	{
		m_sint64_ = std::move(other.m_sint64_);
		other.clear_has_m_sint64();
		set_has_m_sint64();
	}
	if (other.has_m_uint64())
	{
		m_uint64_ = std::move(other.m_uint64_);
		other.clear_has_m_uint64();
		set_has_m_uint64();
	}
	if (other.has_m_float())
	{
		m_float_ = std::move(other.m_float_);
		other.clear_has_m_float();
		set_has_m_float();
	}
	if (other.has_m_double())
	{
		m_double_ = std::move(other.m_double_);
		other.clear_has_m_double();
		set_has_m_double();
	}
	if (other.has_m_enum())
	{
		m_enum_ = std::move(other.m_enum_);
		other.clear_has_m_enum();
		set_has_m_enum();
	}
	if (other.has_m_string())
	{
		m_string_ = std::move(other.m_string_);
		other.clear_has_m_string();
		set_has_m_string();
	}
	if (other.has_m_bytes())
	{
		m_bytes_ = std::move(other.m_bytes_);
		other.clear_has_m_bytes();
		set_has_m_bytes();
	}

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSingular<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(1, common::miniproto::ProtoWireType::PWT_Varint);
		bytes += common::miniproto::ProtoTool::BoolByteSize(m_bool_);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(2, common::miniproto::ProtoWireType::PWT_Varint);
		bytes += common::miniproto::ProtoTool::Int32ByteSize(m_int32_);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(3, common::miniproto::ProtoWireType::PWT_32bit);
		bytes += common::miniproto::ProtoTool::SFixed32ByteSize(m_sint32_);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(4, common::miniproto::ProtoWireType::PWT_32bit);
		bytes += common::miniproto::ProtoTool::Fixed32ByteSize(m_uint32_);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(5, common::miniproto::ProtoWireType::PWT_Varint);
		bytes += common::miniproto::ProtoTool::Int64ByteSize(m_int64_);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(6, common::miniproto::ProtoWireType::PWT_64bit);
		bytes += common::miniproto::ProtoTool::SFixed64ByteSize(m_sint64_);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(7, common::miniproto::ProtoWireType::PWT_64bit);
		bytes += common::miniproto::ProtoTool::Fixed64ByteSize(m_uint64_);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(8, common::miniproto::ProtoWireType::PWT_32bit);
		bytes += common::miniproto::ProtoTool::FloatByteSize(m_float_);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(9, common::miniproto::ProtoWireType::PWT_64bit);
		bytes += common::miniproto::ProtoTool::DoubleByteSize(m_double_);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(10, common::miniproto::ProtoWireType::PWT_Varint);
		bytes += common::miniproto::ProtoTool::EnumByteSize(m_enum_);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(11, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::StringByteSize(m_string_);
	}
	if (has_m_bytes())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(12, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::StringByteSize(m_bytes_);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSingular<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::BoolCode(m_bool_, buf);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::Int32Code(m_int32_, buf);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::SFixed32Code(m_sint32_, buf);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::Fixed32Code(m_uint32_, buf);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::Int64Code(m_int64_, buf);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::SFixed64Code(m_sint64_, buf);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::Fixed64Code(m_uint64_, buf);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::FloatCode(m_float_, buf);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::DoubleCode(m_double_, buf);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::EnumCode(m_enum_, buf);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::StringCode(m_string_, buf);
	}
	if (has_m_bytes())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::StringCode(m_bytes_, buf);
	}

	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTestSingular<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::BoolCode(m_bool_, buf);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::Int32Code(m_int32_, buf);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::SFixed32Code(m_sint32_, buf);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::Fixed32Code(m_uint32_, buf);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::Int64Code(m_int64_, buf);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::SFixed64Code(m_sint64_, buf);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::Fixed64Code(m_uint64_, buf);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_32bit, buf);
		bytes += common::miniproto::ProtoTool::FloatCode(m_float_, buf);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_64bit, buf);
		bytes += common::miniproto::ProtoTool::DoubleCode(m_double_, buf);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_Varint, buf);
		bytes += common::miniproto::ProtoTool::EnumCode(m_enum_, buf);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::StringCode(m_string_, buf);
	}
	if (has_m_bytes())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::StringCode(m_bytes_, buf);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSingular<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::BoolDecode(m_bool_, buf);
				set_has_m_bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::Int32Decode(m_int32_, buf);
				set_has_m_int32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::SFixed32Decode(m_sint32_, buf);
				set_has_m_sint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::Fixed32Decode(m_uint32_, buf);
				set_has_m_uint32();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::Int64Decode(m_int64_, buf);
				set_has_m_int64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::SFixed64Decode(m_sint64_, buf);
				set_has_m_sint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::Fixed64Decode(m_uint64_, buf);
				set_has_m_uint64();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::FloatDecode(m_float_, buf);
				set_has_m_float();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::DoubleDecode(m_double_, buf);
				set_has_m_double();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::EnumDecode(m_enum_, buf);
				set_has_m_enum();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::StringDecode(m_string_, buf);
				set_has_m_string();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::StringDecode(m_bytes_, buf);
				set_has_m_bytes();
			}
			break;
			default:
			bytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);
			break;
		}
	}
	
	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTestSingular<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::BoolDecode(m_bool_, buf);
				set_has_m_bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::Int32Decode(m_int32_, buf);
				set_has_m_int32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::SFixed32Decode(m_sint32_, buf);
				set_has_m_sint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::Fixed32Decode(m_uint32_, buf);
				set_has_m_uint32();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::Int64Decode(m_int64_, buf);
				set_has_m_int64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::SFixed64Decode(m_sint64_, buf);
				set_has_m_sint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::Fixed64Decode(m_uint64_, buf);
				set_has_m_uint64();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_32bit:
			{
				bytes += common::miniproto::ProtoTool::FloatDecode(m_float_, buf);
				set_has_m_float();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_64bit:
			{
				bytes += common::miniproto::ProtoTool::DoubleDecode(m_double_, buf);
				set_has_m_double();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_Varint:
			{
				bytes += common::miniproto::ProtoTool::EnumDecode(m_enum_, buf);
				set_has_m_enum();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::StringDecode(m_string_, buf);
				set_has_m_string();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::StringDecode(m_bytes_, buf);
				set_has_m_bytes();
			}
			break;
			default:
			bytes += common::miniproto::ProtoTool::UnknownDecode(type, buf);
			break;
		}
	}
	
	return bytes;
}

template <template<typename> class A>
void MsgTestSingular<A>::Clear()
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

template <template<typename> class A>
void MsgTestSingular<A>::Release()
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

template <template<typename> class A>
const bool& MsgTestSingular<A>::m_bool() const
{
	return m_bool_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bool(const bool& value)
{
	m_bool_ = value;
	set_has_m_bool();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bool(bool&& value)
{
	m_bool_ = std::move(value);
	set_has_m_bool();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_bool()
{
	if (has_m_bool())
	{
		clear_has_m_bool();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_bool()
{
	if (has_m_bool())
	{
		clear_has_m_bool();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_bool() const
{
	return m_bits.HasBit(0);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_bool()
{
	m_bits.SetBit(0);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_bool()
{
	m_bits.ClearBit(0);
}

template <template<typename> class A>
const common::miniproto::int32& MsgTestSingular<A>::m_int32() const
{
	return m_int32_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_int32(const common::miniproto::int32& value)
{
	m_int32_ = value;
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_int32(common::miniproto::int32&& value)
{
	m_int32_ = std::move(value);
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_int32() const
{
	return m_bits.HasBit(1);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_int32()
{
	m_bits.SetBit(1);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_int32()
{
	m_bits.ClearBit(1);
}

template <template<typename> class A>
const common::miniproto::int32& MsgTestSingular<A>::m_sint32() const
{
	return m_sint32_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_sint32(const common::miniproto::int32& value)
{
	m_sint32_ = value;
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_sint32(common::miniproto::int32&& value)
{
	m_sint32_ = std::move(value);
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_sint32() const
{
	return m_bits.HasBit(2);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_sint32()
{
	m_bits.SetBit(2);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_sint32()
{
	m_bits.ClearBit(2);
}

template <template<typename> class A>
const common::miniproto::uint32& MsgTestSingular<A>::m_uint32() const
{
	return m_uint32_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_uint32(const common::miniproto::uint32& value)
{
	m_uint32_ = value;
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_uint32(common::miniproto::uint32&& value)
{
	m_uint32_ = std::move(value);
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_uint32() const
{
	return m_bits.HasBit(3);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_uint32()
{
	m_bits.SetBit(3);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_uint32()
{
	m_bits.ClearBit(3);
}

template <template<typename> class A>
const common::miniproto::int64& MsgTestSingular<A>::m_int64() const
{
	return m_int64_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_int64(const common::miniproto::int64& value)
{
	m_int64_ = value;
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_int64(common::miniproto::int64&& value)
{
	m_int64_ = std::move(value);
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_int64() const
{
	return m_bits.HasBit(4);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_int64()
{
	m_bits.SetBit(4);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_int64()
{
	m_bits.ClearBit(4);
}

template <template<typename> class A>
const common::miniproto::int64& MsgTestSingular<A>::m_sint64() const
{
	return m_sint64_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_sint64(const common::miniproto::int64& value)
{
	m_sint64_ = value;
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_sint64(common::miniproto::int64&& value)
{
	m_sint64_ = std::move(value);
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_sint64() const
{
	return m_bits.HasBit(5);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_sint64()
{
	m_bits.SetBit(5);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_sint64()
{
	m_bits.ClearBit(5);
}

template <template<typename> class A>
const common::miniproto::uint64& MsgTestSingular<A>::m_uint64() const
{
	return m_uint64_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_uint64(const common::miniproto::uint64& value)
{
	m_uint64_ = value;
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_uint64(common::miniproto::uint64&& value)
{
	m_uint64_ = std::move(value);
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_uint64() const
{
	return m_bits.HasBit(6);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_uint64()
{
	m_bits.SetBit(6);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_uint64()
{
	m_bits.ClearBit(6);
}

template <template<typename> class A>
const float& MsgTestSingular<A>::m_float() const
{
	return m_float_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_float(const float& value)
{
	m_float_ = value;
	set_has_m_float();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_float(float&& value)
{
	m_float_ = std::move(value);
	set_has_m_float();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_float()
{
	if (has_m_float())
	{
		clear_has_m_float();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_float()
{
	if (has_m_float())
	{
		clear_has_m_float();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_float() const
{
	return m_bits.HasBit(7);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_float()
{
	m_bits.SetBit(7);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_float()
{
	m_bits.ClearBit(7);
}

template <template<typename> class A>
const double& MsgTestSingular<A>::m_double() const
{
	return m_double_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_double(const double& value)
{
	m_double_ = value;
	set_has_m_double();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_double(double&& value)
{
	m_double_ = std::move(value);
	set_has_m_double();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_double()
{
	if (has_m_double())
	{
		clear_has_m_double();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_double()
{
	if (has_m_double())
	{
		clear_has_m_double();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_double() const
{
	return m_bits.HasBit(8);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_double()
{
	m_bits.SetBit(8);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_double()
{
	m_bits.ClearBit(8);
}

template <template<typename> class A>
const common::proto1::EnumTest& MsgTestSingular<A>::m_enum() const
{
	return m_enum_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_enum(const common::proto1::EnumTest& value)
{
	m_enum_ = value;
	set_has_m_enum();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_enum(common::proto1::EnumTest&& value)
{
	m_enum_ = std::move(value);
	set_has_m_enum();
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_enum()
{
	if (has_m_enum())
	{
		clear_has_m_enum();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_enum()
{
	if (has_m_enum())
	{
		clear_has_m_enum();
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_enum() const
{
	return m_bits.HasBit(9);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_enum()
{
	m_bits.SetBit(9);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_enum()
{
	m_bits.ClearBit(9);
}

template <template<typename> class A>
const common::miniproto::String<A>& MsgTestSingular<A>::m_string() const
{
	return m_string_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_string(const common::miniproto::String<A>& value)
{
	m_string_ = value;
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_string(common::miniproto::String<A>&& value)
{
	m_string_ = std::move(value);
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_string(const char* value)
{
	m_string_.assign(value);
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_string(const char* value, size_t size)
{
	m_string_.assign(value, size);
	set_has_m_string();
}
template <template<typename> class A>
common::miniproto::String<A>& MsgTestSingular<A>::m_string()
{
	if (!has_m_string())
	{
		clear_m_string();
		set_has_m_string();
	}
	return m_string_;
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_string()
{
	if (has_m_string())
	{
		clear_has_m_string();
	}
	if (m_string_.size() > 0)
	{
		m_string_.clear();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_string()
{
	if (has_m_string())
	{
		clear_has_m_string();
	}
	if (m_string_.capacity() > 0)
	{
		m_string_.swap(common::miniproto::String<A>());
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_string() const
{
	return m_bits.HasBit(10);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_string()
{
	m_bits.SetBit(10);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_string()
{
	m_bits.ClearBit(10);
}

template <template<typename> class A>
const common::miniproto::String<A>& MsgTestSingular<A>::m_bytes() const
{
	return m_bytes_;
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bytes(const common::miniproto::String<A>& value)
{
	m_bytes_ = value;
	set_has_m_bytes();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bytes(common::miniproto::String<A>&& value)
{
	m_bytes_ = std::move(value);
	set_has_m_bytes();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bytes(const char* value)
{
	m_bytes_.assign(value);
	set_has_m_bytes();
}
template <template<typename> class A>
void MsgTestSingular<A>::set_m_bytes(const char* value, size_t size)
{
	m_bytes_.assign(value, size);
	set_has_m_bytes();
}
template <template<typename> class A>
common::miniproto::String<A>& MsgTestSingular<A>::m_bytes()
{
	if (!has_m_bytes())
	{
		clear_m_bytes();
		set_has_m_bytes();
	}
	return m_bytes_;
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_m_bytes()
{
	if (has_m_bytes())
	{
		clear_has_m_bytes();
	}
	if (m_bytes_.size() > 0)
	{
		m_bytes_.clear();
	}
}
template <template<typename> class A>
void MsgTestSingular<A>::release_m_bytes()
{
	if (has_m_bytes())
	{
		clear_has_m_bytes();
	}
	if (m_bytes_.capacity() > 0)
	{
		m_bytes_.swap(common::miniproto::String<A>());
	}
}
template <template<typename> class A>
bool MsgTestSingular<A>::has_m_bytes() const
{
	return m_bits.HasBit(11);
}
template <template<typename> class A>
void MsgTestSingular<A>::set_has_m_bytes()
{
	m_bits.SetBit(11);
}
template <template<typename> class A>
void MsgTestSingular<A>::clear_has_m_bytes()
{
	m_bits.ClearBit(11);
}

} //namespace proto1
} //namespace common

#endif
