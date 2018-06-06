#ifndef __Proto2__
#define __Proto2__

#include "ProtoBase.h"
#include "ProtoBuf.h"
#include "ProtoTool.h"
#include "ProtoBitMap.h"

#include "Proto1.h"

namespace common {
namespace proto2 {

enum EnumTest
{
	EnumTest_1 = 1,
	EnumTest_2 = 3,
	EnumTest_3 = 7,
};

template <template<typename> class A = std::allocator>
class MsgTestArray : public common::miniproto::ProtoBase
{
public:
	MsgTestArray();
	MsgTestArray(const MsgTestArray<A>& other);
	MsgTestArray(MsgTestArray<A>&& other);
	virtual ~MsgTestArray();
	MsgTestArray<A>& operator = (const MsgTestArray<A>& other);
	MsgTestArray<A>& operator = (MsgTestArray<A>&& other);

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
	void reserve_m_bool(size_t size);
	void set_m_bool(common::miniproto::uint32 index, const bool& value);
	void set_m_bool(common::miniproto::uint32 index, bool&& value);
	void add_m_bool(const bool& value);
	void add_m_bool(bool&& value);
public:
	size_t m_bool_size() const;
	const bool& m_bool(common::miniproto::uint32 index) const;
public:
	void clear_m_bool();
	void release_m_bool();
public:
	bool has_m_bool() const;
private:
	void set_has_m_bool();
	void clear_has_m_bool();
private:
	common::miniproto::Array<bool, A> m_bool_;

public:
	void reserve_m_int32(size_t size);
	void set_m_int32(common::miniproto::uint32 index, const common::miniproto::int32& value);
	void set_m_int32(common::miniproto::uint32 index, common::miniproto::int32&& value);
	void add_m_int32(const common::miniproto::int32& value);
	void add_m_int32(common::miniproto::int32&& value);
public:
	size_t m_int32_size() const;
	const common::miniproto::int32& m_int32(common::miniproto::uint32 index) const;
public:
	void clear_m_int32();
	void release_m_int32();
public:
	bool has_m_int32() const;
private:
	void set_has_m_int32();
	void clear_has_m_int32();
private:
	common::miniproto::Array<common::miniproto::int32, A> m_int32_;

public:
	void reserve_m_sint32(size_t size);
	void set_m_sint32(common::miniproto::uint32 index, const common::miniproto::int32& value);
	void set_m_sint32(common::miniproto::uint32 index, common::miniproto::int32&& value);
	void add_m_sint32(const common::miniproto::int32& value);
	void add_m_sint32(common::miniproto::int32&& value);
public:
	size_t m_sint32_size() const;
	const common::miniproto::int32& m_sint32(common::miniproto::uint32 index) const;
public:
	void clear_m_sint32();
	void release_m_sint32();
public:
	bool has_m_sint32() const;
private:
	void set_has_m_sint32();
	void clear_has_m_sint32();
private:
	common::miniproto::Array<common::miniproto::int32, A> m_sint32_;

public:
	void reserve_m_uint32(size_t size);
	void set_m_uint32(common::miniproto::uint32 index, const common::miniproto::uint32& value);
	void set_m_uint32(common::miniproto::uint32 index, common::miniproto::uint32&& value);
	void add_m_uint32(const common::miniproto::uint32& value);
	void add_m_uint32(common::miniproto::uint32&& value);
public:
	size_t m_uint32_size() const;
	const common::miniproto::uint32& m_uint32(common::miniproto::uint32 index) const;
public:
	void clear_m_uint32();
	void release_m_uint32();
public:
	bool has_m_uint32() const;
private:
	void set_has_m_uint32();
	void clear_has_m_uint32();
private:
	common::miniproto::Array<common::miniproto::uint32, A> m_uint32_;

public:
	void reserve_m_int64(size_t size);
	void set_m_int64(common::miniproto::uint32 index, const common::miniproto::int64& value);
	void set_m_int64(common::miniproto::uint32 index, common::miniproto::int64&& value);
	void add_m_int64(const common::miniproto::int64& value);
	void add_m_int64(common::miniproto::int64&& value);
public:
	size_t m_int64_size() const;
	const common::miniproto::int64& m_int64(common::miniproto::uint32 index) const;
public:
	void clear_m_int64();
	void release_m_int64();
public:
	bool has_m_int64() const;
private:
	void set_has_m_int64();
	void clear_has_m_int64();
private:
	common::miniproto::Array<common::miniproto::int64, A> m_int64_;

public:
	void reserve_m_sint64(size_t size);
	void set_m_sint64(common::miniproto::uint32 index, const common::miniproto::int64& value);
	void set_m_sint64(common::miniproto::uint32 index, common::miniproto::int64&& value);
	void add_m_sint64(const common::miniproto::int64& value);
	void add_m_sint64(common::miniproto::int64&& value);
public:
	size_t m_sint64_size() const;
	const common::miniproto::int64& m_sint64(common::miniproto::uint32 index) const;
public:
	void clear_m_sint64();
	void release_m_sint64();
public:
	bool has_m_sint64() const;
private:
	void set_has_m_sint64();
	void clear_has_m_sint64();
private:
	common::miniproto::Array<common::miniproto::int64, A> m_sint64_;

public:
	void reserve_m_uint64(size_t size);
	void set_m_uint64(common::miniproto::uint32 index, const common::miniproto::uint64& value);
	void set_m_uint64(common::miniproto::uint32 index, common::miniproto::uint64&& value);
	void add_m_uint64(const common::miniproto::uint64& value);
	void add_m_uint64(common::miniproto::uint64&& value);
public:
	size_t m_uint64_size() const;
	const common::miniproto::uint64& m_uint64(common::miniproto::uint32 index) const;
public:
	void clear_m_uint64();
	void release_m_uint64();
public:
	bool has_m_uint64() const;
private:
	void set_has_m_uint64();
	void clear_has_m_uint64();
private:
	common::miniproto::Array<common::miniproto::uint64, A> m_uint64_;

public:
	void reserve_m_float(size_t size);
	void set_m_float(common::miniproto::uint32 index, const float& value);
	void set_m_float(common::miniproto::uint32 index, float&& value);
	void add_m_float(const float& value);
	void add_m_float(float&& value);
public:
	size_t m_float_size() const;
	const float& m_float(common::miniproto::uint32 index) const;
public:
	void clear_m_float();
	void release_m_float();
public:
	bool has_m_float() const;
private:
	void set_has_m_float();
	void clear_has_m_float();
private:
	common::miniproto::Array<float, A> m_float_;

public:
	void reserve_m_double(size_t size);
	void set_m_double(common::miniproto::uint32 index, const double& value);
	void set_m_double(common::miniproto::uint32 index, double&& value);
	void add_m_double(const double& value);
	void add_m_double(double&& value);
public:
	size_t m_double_size() const;
	const double& m_double(common::miniproto::uint32 index) const;
public:
	void clear_m_double();
	void release_m_double();
public:
	bool has_m_double() const;
private:
	void set_has_m_double();
	void clear_has_m_double();
private:
	common::miniproto::Array<double, A> m_double_;

public:
	void reserve_m_enum(size_t size);
	void set_m_enum(common::miniproto::uint32 index, const common::proto1::EnumTest& value);
	void set_m_enum(common::miniproto::uint32 index, common::proto1::EnumTest&& value);
	void add_m_enum(const common::proto1::EnumTest& value);
	void add_m_enum(common::proto1::EnumTest&& value);
public:
	size_t m_enum_size() const;
	const common::proto1::EnumTest& m_enum(common::miniproto::uint32 index) const;
public:
	void clear_m_enum();
	void release_m_enum();
public:
	bool has_m_enum() const;
private:
	void set_has_m_enum();
	void clear_has_m_enum();
private:
	common::miniproto::Array<common::proto1::EnumTest, A> m_enum_;

public:
	void reserve_m_string(size_t size);
	void set_m_string(common::miniproto::uint32 index, const common::miniproto::String<A>& value);
	void set_m_string(common::miniproto::uint32 index, common::miniproto::String<A>&& value);
	void set_m_string(common::miniproto::uint32 index, const char* value);
	void set_m_string(common::miniproto::uint32 index, const char* value, size_t size);
	void add_m_string(const common::miniproto::String<A>& value);
	void add_m_string(common::miniproto::String<A>&& value);
	void add_m_string(const char* value);
	void add_m_string(const char* value, size_t size);
	common::miniproto::String<A>* add_m_string();
public:
	size_t m_string_size() const;
	const common::miniproto::String<A>& m_string(common::miniproto::uint32 index) const;
public:
	void clear_m_string();
	void release_m_string();
public:
	bool has_m_string() const;
private:
	void set_has_m_string();
	void clear_has_m_string();
private:
	common::miniproto::Array<common::miniproto::String<A>, A> m_string_;

private:
	common::miniproto::ProtoBitMap<11> m_bits;
};

template <template<typename> class A>
MsgTestArray<A>::MsgTestArray()
{
}

template <template<typename> class A>
MsgTestArray<A>::MsgTestArray(const MsgTestArray<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgTestArray<A>::MsgTestArray(MsgTestArray<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgTestArray<A>::~MsgTestArray()
{
}

template <template<typename> class A>
MsgTestArray<A>& MsgTestArray<A>::operator = (const MsgTestArray<A>& other)
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

	return *this;
}

template <template<typename> class A>
MsgTestArray<A>& MsgTestArray<A>::operator = (MsgTestArray<A>&& other)
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

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestArray<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(1, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_bool_, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(2, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_int32_, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(3, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_sint32_, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(4, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_uint32_, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(5, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_int64_, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(6, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_sint64_, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(7, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_uint64_, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(8, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_float_, common::miniproto::CommonProtoFloat);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(9, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_double_, common::miniproto::CommonProtoDouble);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(10, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_enum_, common::miniproto::CommonProtoEnum);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(11, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_string_, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestArray<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_bool_, buf, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_int32_, buf, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_int64_, buf, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_float_, buf, common::miniproto::CommonProtoFloat);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_double_, buf, common::miniproto::CommonProtoDouble);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_enum_, buf, common::miniproto::CommonProtoEnum);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_string_, buf, common::miniproto::CommonProtoString);
	}

	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTestArray<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_bool_, buf, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_int32_, buf, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_int64_, buf, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_float_, buf, common::miniproto::CommonProtoFloat);
	}
	if (has_m_double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_double_, buf, common::miniproto::CommonProtoDouble);
	}
	if (has_m_enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_enum_, buf, common::miniproto::CommonProtoEnum);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_string_, buf, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestArray<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_bool_, buf, common::miniproto::CommonProtoBool);
				set_has_m_bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_int32_, buf, common::miniproto::CommonProtoInt32);
				set_has_m_int32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_int64_, buf, common::miniproto::CommonProtoInt64);
				set_has_m_int64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_float_, buf, common::miniproto::CommonProtoFloat);
				set_has_m_float();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_double_, buf, common::miniproto::CommonProtoDouble);
				set_has_m_double();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_enum_, buf, common::miniproto::CommonProtoEnum);
				set_has_m_enum();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_string_, buf, common::miniproto::CommonProtoString);
				set_has_m_string();
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
common::miniproto::byte_size MsgTestArray<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_bool_, buf, common::miniproto::CommonProtoBool);
				set_has_m_bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_int32_, buf, common::miniproto::CommonProtoInt32);
				set_has_m_int32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_int64_, buf, common::miniproto::CommonProtoInt64);
				set_has_m_int64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_float_, buf, common::miniproto::CommonProtoFloat);
				set_has_m_float();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_double_, buf, common::miniproto::CommonProtoDouble);
				set_has_m_double();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_enum_, buf, common::miniproto::CommonProtoEnum);
				set_has_m_enum();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_string_, buf, common::miniproto::CommonProtoString);
				set_has_m_string();
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
void MsgTestArray<A>::Clear()
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

template <template<typename> class A>
void MsgTestArray<A>::Release()
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

template <template<typename> class A>
size_t MsgTestArray<A>::m_bool_size() const
{
	return m_bool_.size();
}
template <template<typename> class A>
const bool& MsgTestArray<A>::m_bool(common::miniproto::uint32 index) const
{
	return m_bool_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_bool(size_t size)
{
	m_bool_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_bool(common::miniproto::uint32 index, const bool& value)
{
	if (index < m_bool_.size())
	{
		m_bool_[index] = value;
		set_has_m_bool();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_bool(common::miniproto::uint32 index, bool&& value)
{
	if (index < m_bool_.size())
	{
		m_bool_[index] = std::move(value);
		set_has_m_bool();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_bool(const bool& value)
{
	m_bool_.push_back(value);
	set_has_m_bool();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_bool(bool&& value)
{
	m_bool_.push_back(std::move(value));
	set_has_m_bool();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_bool()
{
	if (has_m_bool())
	{
		clear_has_m_bool();
	}
	if (m_bool_.size() > 0)
	{
		m_bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_bool()
{
	if (has_m_bool())
	{
		clear_has_m_bool();
	}
	if (m_bool_.capacity() > 0)
	{
		m_bool_.swap(common::miniproto::Array<bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_bool() const
{
	return m_bits.HasBit(0);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_bool()
{
	m_bits.SetBit(0);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_bool()
{
	m_bits.ClearBit(0);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_int32_size() const
{
	return m_int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32& MsgTestArray<A>::m_int32(common::miniproto::uint32 index) const
{
	return m_int32_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_int32(size_t size)
{
	m_int32_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_int32(common::miniproto::uint32 index, const common::miniproto::int32& value)
{
	if (index < m_int32_.size())
	{
		m_int32_[index] = value;
		set_has_m_int32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_int32(common::miniproto::uint32 index, common::miniproto::int32&& value)
{
	if (index < m_int32_.size())
	{
		m_int32_[index] = std::move(value);
		set_has_m_int32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_int32(const common::miniproto::int32& value)
{
	m_int32_.push_back(value);
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_int32(common::miniproto::int32&& value)
{
	m_int32_.push_back(std::move(value));
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
	if (m_int32_.size() > 0)
	{
		m_int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
	if (m_int32_.capacity() > 0)
	{
		m_int32_.swap(common::miniproto::Array<common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_int32() const
{
	return m_bits.HasBit(1);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_int32()
{
	m_bits.SetBit(1);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_int32()
{
	m_bits.ClearBit(1);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_sint32_size() const
{
	return m_sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32& MsgTestArray<A>::m_sint32(common::miniproto::uint32 index) const
{
	return m_sint32_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_sint32(size_t size)
{
	m_sint32_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_sint32(common::miniproto::uint32 index, const common::miniproto::int32& value)
{
	if (index < m_sint32_.size())
	{
		m_sint32_[index] = value;
		set_has_m_sint32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_sint32(common::miniproto::uint32 index, common::miniproto::int32&& value)
{
	if (index < m_sint32_.size())
	{
		m_sint32_[index] = std::move(value);
		set_has_m_sint32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_sint32(const common::miniproto::int32& value)
{
	m_sint32_.push_back(value);
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_sint32(common::miniproto::int32&& value)
{
	m_sint32_.push_back(std::move(value));
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
	if (m_sint32_.size() > 0)
	{
		m_sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
	if (m_sint32_.capacity() > 0)
	{
		m_sint32_.swap(common::miniproto::Array<common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_sint32() const
{
	return m_bits.HasBit(2);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_sint32()
{
	m_bits.SetBit(2);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_sint32()
{
	m_bits.ClearBit(2);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_uint32_size() const
{
	return m_uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32& MsgTestArray<A>::m_uint32(common::miniproto::uint32 index) const
{
	return m_uint32_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_uint32(size_t size)
{
	m_uint32_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_uint32(common::miniproto::uint32 index, const common::miniproto::uint32& value)
{
	if (index < m_uint32_.size())
	{
		m_uint32_[index] = value;
		set_has_m_uint32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_uint32(common::miniproto::uint32 index, common::miniproto::uint32&& value)
{
	if (index < m_uint32_.size())
	{
		m_uint32_[index] = std::move(value);
		set_has_m_uint32();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_uint32(const common::miniproto::uint32& value)
{
	m_uint32_.push_back(value);
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_uint32(common::miniproto::uint32&& value)
{
	m_uint32_.push_back(std::move(value));
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
	if (m_uint32_.size() > 0)
	{
		m_uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
	if (m_uint32_.capacity() > 0)
	{
		m_uint32_.swap(common::miniproto::Array<common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_uint32() const
{
	return m_bits.HasBit(3);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_uint32()
{
	m_bits.SetBit(3);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_uint32()
{
	m_bits.ClearBit(3);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_int64_size() const
{
	return m_int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64& MsgTestArray<A>::m_int64(common::miniproto::uint32 index) const
{
	return m_int64_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_int64(size_t size)
{
	m_int64_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_int64(common::miniproto::uint32 index, const common::miniproto::int64& value)
{
	if (index < m_int64_.size())
	{
		m_int64_[index] = value;
		set_has_m_int64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_int64(common::miniproto::uint32 index, common::miniproto::int64&& value)
{
	if (index < m_int64_.size())
	{
		m_int64_[index] = std::move(value);
		set_has_m_int64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_int64(const common::miniproto::int64& value)
{
	m_int64_.push_back(value);
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_int64(common::miniproto::int64&& value)
{
	m_int64_.push_back(std::move(value));
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
	if (m_int64_.size() > 0)
	{
		m_int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
	if (m_int64_.capacity() > 0)
	{
		m_int64_.swap(common::miniproto::Array<common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_int64() const
{
	return m_bits.HasBit(4);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_int64()
{
	m_bits.SetBit(4);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_int64()
{
	m_bits.ClearBit(4);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_sint64_size() const
{
	return m_sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64& MsgTestArray<A>::m_sint64(common::miniproto::uint32 index) const
{
	return m_sint64_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_sint64(size_t size)
{
	m_sint64_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_sint64(common::miniproto::uint32 index, const common::miniproto::int64& value)
{
	if (index < m_sint64_.size())
	{
		m_sint64_[index] = value;
		set_has_m_sint64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_sint64(common::miniproto::uint32 index, common::miniproto::int64&& value)
{
	if (index < m_sint64_.size())
	{
		m_sint64_[index] = std::move(value);
		set_has_m_sint64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_sint64(const common::miniproto::int64& value)
{
	m_sint64_.push_back(value);
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_sint64(common::miniproto::int64&& value)
{
	m_sint64_.push_back(std::move(value));
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
	if (m_sint64_.size() > 0)
	{
		m_sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
	if (m_sint64_.capacity() > 0)
	{
		m_sint64_.swap(common::miniproto::Array<common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_sint64() const
{
	return m_bits.HasBit(5);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_sint64()
{
	m_bits.SetBit(5);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_sint64()
{
	m_bits.ClearBit(5);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_uint64_size() const
{
	return m_uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64& MsgTestArray<A>::m_uint64(common::miniproto::uint32 index) const
{
	return m_uint64_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_uint64(size_t size)
{
	m_uint64_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_uint64(common::miniproto::uint32 index, const common::miniproto::uint64& value)
{
	if (index < m_uint64_.size())
	{
		m_uint64_[index] = value;
		set_has_m_uint64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_uint64(common::miniproto::uint32 index, common::miniproto::uint64&& value)
{
	if (index < m_uint64_.size())
	{
		m_uint64_[index] = std::move(value);
		set_has_m_uint64();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_uint64(const common::miniproto::uint64& value)
{
	m_uint64_.push_back(value);
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_uint64(common::miniproto::uint64&& value)
{
	m_uint64_.push_back(std::move(value));
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
	if (m_uint64_.size() > 0)
	{
		m_uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
	if (m_uint64_.capacity() > 0)
	{
		m_uint64_.swap(common::miniproto::Array<common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_uint64() const
{
	return m_bits.HasBit(6);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_uint64()
{
	m_bits.SetBit(6);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_uint64()
{
	m_bits.ClearBit(6);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_float_size() const
{
	return m_float_.size();
}
template <template<typename> class A>
const float& MsgTestArray<A>::m_float(common::miniproto::uint32 index) const
{
	return m_float_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_float(size_t size)
{
	m_float_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_float(common::miniproto::uint32 index, const float& value)
{
	if (index < m_float_.size())
	{
		m_float_[index] = value;
		set_has_m_float();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_float(common::miniproto::uint32 index, float&& value)
{
	if (index < m_float_.size())
	{
		m_float_[index] = std::move(value);
		set_has_m_float();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_float(const float& value)
{
	m_float_.push_back(value);
	set_has_m_float();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_float(float&& value)
{
	m_float_.push_back(std::move(value));
	set_has_m_float();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_float()
{
	if (has_m_float())
	{
		clear_has_m_float();
	}
	if (m_float_.size() > 0)
	{
		m_float_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_float()
{
	if (has_m_float())
	{
		clear_has_m_float();
	}
	if (m_float_.capacity() > 0)
	{
		m_float_.swap(common::miniproto::Array<float, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_float() const
{
	return m_bits.HasBit(7);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_float()
{
	m_bits.SetBit(7);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_float()
{
	m_bits.ClearBit(7);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_double_size() const
{
	return m_double_.size();
}
template <template<typename> class A>
const double& MsgTestArray<A>::m_double(common::miniproto::uint32 index) const
{
	return m_double_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_double(size_t size)
{
	m_double_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_double(common::miniproto::uint32 index, const double& value)
{
	if (index < m_double_.size())
	{
		m_double_[index] = value;
		set_has_m_double();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_double(common::miniproto::uint32 index, double&& value)
{
	if (index < m_double_.size())
	{
		m_double_[index] = std::move(value);
		set_has_m_double();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_double(const double& value)
{
	m_double_.push_back(value);
	set_has_m_double();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_double(double&& value)
{
	m_double_.push_back(std::move(value));
	set_has_m_double();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_double()
{
	if (has_m_double())
	{
		clear_has_m_double();
	}
	if (m_double_.size() > 0)
	{
		m_double_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_double()
{
	if (has_m_double())
	{
		clear_has_m_double();
	}
	if (m_double_.capacity() > 0)
	{
		m_double_.swap(common::miniproto::Array<double, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_double() const
{
	return m_bits.HasBit(8);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_double()
{
	m_bits.SetBit(8);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_double()
{
	m_bits.ClearBit(8);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_enum_size() const
{
	return m_enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest& MsgTestArray<A>::m_enum(common::miniproto::uint32 index) const
{
	return m_enum_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_enum(size_t size)
{
	m_enum_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_enum(common::miniproto::uint32 index, const common::proto1::EnumTest& value)
{
	if (index < m_enum_.size())
	{
		m_enum_[index] = value;
		set_has_m_enum();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_enum(common::miniproto::uint32 index, common::proto1::EnumTest&& value)
{
	if (index < m_enum_.size())
	{
		m_enum_[index] = std::move(value);
		set_has_m_enum();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_enum(const common::proto1::EnumTest& value)
{
	m_enum_.push_back(value);
	set_has_m_enum();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_enum(common::proto1::EnumTest&& value)
{
	m_enum_.push_back(std::move(value));
	set_has_m_enum();
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_enum()
{
	if (has_m_enum())
	{
		clear_has_m_enum();
	}
	if (m_enum_.size() > 0)
	{
		m_enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::release_m_enum()
{
	if (has_m_enum())
	{
		clear_has_m_enum();
	}
	if (m_enum_.capacity() > 0)
	{
		m_enum_.swap(common::miniproto::Array<common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_enum() const
{
	return m_bits.HasBit(9);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_enum()
{
	m_bits.SetBit(9);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_enum()
{
	m_bits.ClearBit(9);
}

template <template<typename> class A>
size_t MsgTestArray<A>::m_string_size() const
{
	return m_string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>& MsgTestArray<A>::m_string(common::miniproto::uint32 index) const
{
	return m_string_[index];
}
template <template<typename> class A>
void MsgTestArray<A>::reserve_m_string(size_t size)
{
	m_string_.reserve(size);
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_string(common::miniproto::uint32 index, const common::miniproto::String<A>& value)
{
	if (index < m_string_.size())
	{
		m_string_[index] = value;
		set_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_string(common::miniproto::uint32 index, common::miniproto::String<A>&& value)
{
	if (index < m_string_.size())
	{
		m_string_[index] = std::move(value);
		set_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_string(common::miniproto::uint32 index, const char* value)
{
	if (index < m_string_.size())
	{
		m_string_[index].assign(value);
		set_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::set_m_string(common::miniproto::uint32 index, const char* value, size_t size)
{
	if (index < m_string_.size())
	{
		m_string_[index].assign(value, size);
		set_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_string(const common::miniproto::String<A>& value)
{
	m_string_.push_back(value);
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_string(common::miniproto::String<A>&& value)
{
	m_string_.push_back(std::move(value));
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_string(const char* value)
{
	common::miniproto::String<A> temp(value);
	m_string_.push_back(std::move(temp));
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestArray<A>::add_m_string(const char* value, size_t size)
{
	common::miniproto::String<A> temp(value, size);
	m_string_.push_back(std::move(temp));
	set_has_m_string();
}
template <template<typename> class A>
common::miniproto::String<A>* MsgTestArray<A>::add_m_string()
{
	size_t oldSize = m_string_.size();
	m_string_.resize(oldSize + 1);
	size_t newSize = m_string_.size();
	if (newSize > oldSize)
	{
		set_has_m_string();
		return &(m_string_[newSize - 1]);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
void MsgTestArray<A>::clear_m_string()
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
void MsgTestArray<A>::release_m_string()
{
	if (has_m_string())
	{
		clear_has_m_string();
	}
	if (m_string_.capacity() > 0)
	{
		m_string_.swap(common::miniproto::Array<common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestArray<A>::has_m_string() const
{
	return m_bits.HasBit(10);
}
template <template<typename> class A>
void MsgTestArray<A>::set_has_m_string()
{
	m_bits.SetBit(10);
}
template <template<typename> class A>
void MsgTestArray<A>::clear_has_m_string()
{
	m_bits.ClearBit(10);
}

template <template<typename> class A = std::allocator>
class MsgTestSet : public common::miniproto::ProtoBase
{
public:
	MsgTestSet();
	MsgTestSet(const MsgTestSet<A>& other);
	MsgTestSet(MsgTestSet<A>&& other);
	virtual ~MsgTestSet();
	MsgTestSet<A>& operator = (const MsgTestSet<A>& other);
	MsgTestSet<A>& operator = (MsgTestSet<A>&& other);

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
	void add_m_int32(const common::miniproto::int32& value);
	void add_m_int32(common::miniproto::int32&& value);
	void remove_m_int32(const common::miniproto::int32& value);
public:
	size_t m_int32_size() const;
	size_t m_int32_count(const common::miniproto::int32& value) const;
	common::miniproto::SetConstIt<common::miniproto::int32, A> m_int32_begin() const;
	common::miniproto::SetConstIt<common::miniproto::int32, A> m_int32_end() const;
public:
	void clear_m_int32();
	void release_m_int32();
public:
	bool has_m_int32() const;
private:
	void set_has_m_int32();
	void clear_has_m_int32();
private:
	common::miniproto::Set<common::miniproto::int32, A> m_int32_;

public:
	void add_m_sint32(const common::miniproto::int32& value);
	void add_m_sint32(common::miniproto::int32&& value);
	void remove_m_sint32(const common::miniproto::int32& value);
public:
	size_t m_sint32_size() const;
	size_t m_sint32_count(const common::miniproto::int32& value) const;
	common::miniproto::HashSetConstIt<common::miniproto::int32, A> m_sint32_begin() const;
	common::miniproto::HashSetConstIt<common::miniproto::int32, A> m_sint32_end() const;
public:
	void clear_m_sint32();
	void release_m_sint32();
public:
	bool has_m_sint32() const;
private:
	void set_has_m_sint32();
	void clear_has_m_sint32();
private:
	common::miniproto::HashSet<common::miniproto::int32, A> m_sint32_;

public:
	void add_m_uint32(const common::miniproto::uint32& value);
	void add_m_uint32(common::miniproto::uint32&& value);
	void remove_m_uint32(const common::miniproto::uint32& value);
public:
	size_t m_uint32_size() const;
	size_t m_uint32_count(const common::miniproto::uint32& value) const;
	common::miniproto::SetConstIt<common::miniproto::uint32, A> m_uint32_begin() const;
	common::miniproto::SetConstIt<common::miniproto::uint32, A> m_uint32_end() const;
public:
	void clear_m_uint32();
	void release_m_uint32();
public:
	bool has_m_uint32() const;
private:
	void set_has_m_uint32();
	void clear_has_m_uint32();
private:
	common::miniproto::Set<common::miniproto::uint32, A> m_uint32_;

public:
	void add_m_int64(const common::miniproto::int64& value);
	void add_m_int64(common::miniproto::int64&& value);
	void remove_m_int64(const common::miniproto::int64& value);
public:
	size_t m_int64_size() const;
	size_t m_int64_count(const common::miniproto::int64& value) const;
	common::miniproto::SetConstIt<common::miniproto::int64, A> m_int64_begin() const;
	common::miniproto::SetConstIt<common::miniproto::int64, A> m_int64_end() const;
public:
	void clear_m_int64();
	void release_m_int64();
public:
	bool has_m_int64() const;
private:
	void set_has_m_int64();
	void clear_has_m_int64();
private:
	common::miniproto::Set<common::miniproto::int64, A> m_int64_;

public:
	void add_m_sint64(const common::miniproto::int64& value);
	void add_m_sint64(common::miniproto::int64&& value);
	void remove_m_sint64(const common::miniproto::int64& value);
public:
	size_t m_sint64_size() const;
	size_t m_sint64_count(const common::miniproto::int64& value) const;
	common::miniproto::HashSetConstIt<common::miniproto::int64, A> m_sint64_begin() const;
	common::miniproto::HashSetConstIt<common::miniproto::int64, A> m_sint64_end() const;
public:
	void clear_m_sint64();
	void release_m_sint64();
public:
	bool has_m_sint64() const;
private:
	void set_has_m_sint64();
	void clear_has_m_sint64();
private:
	common::miniproto::HashSet<common::miniproto::int64, A> m_sint64_;

public:
	void add_m_uint64(const common::miniproto::uint64& value);
	void add_m_uint64(common::miniproto::uint64&& value);
	void remove_m_uint64(const common::miniproto::uint64& value);
public:
	size_t m_uint64_size() const;
	size_t m_uint64_count(const common::miniproto::uint64& value) const;
	common::miniproto::SetConstIt<common::miniproto::uint64, A> m_uint64_begin() const;
	common::miniproto::SetConstIt<common::miniproto::uint64, A> m_uint64_end() const;
public:
	void clear_m_uint64();
	void release_m_uint64();
public:
	bool has_m_uint64() const;
private:
	void set_has_m_uint64();
	void clear_has_m_uint64();
private:
	common::miniproto::Set<common::miniproto::uint64, A> m_uint64_;

public:
	void add_m_string(const common::miniproto::String<A>& value);
	void add_m_string(common::miniproto::String<A>&& value);
	void add_m_string(const char* value);
	void add_m_string(const char* value, size_t size);
	void remove_m_string(const common::miniproto::String<A>& value);
	void remove_m_string(const char* value);
	void remove_m_string(const char* value, size_t size);
public:
	size_t m_string_size() const;
	size_t m_string_count(const common::miniproto::String<A>& value) const;
	common::miniproto::HashSetConstIt<common::miniproto::String<A>, A> m_string_begin() const;
	common::miniproto::HashSetConstIt<common::miniproto::String<A>, A> m_string_end() const;
public:
	void clear_m_string();
	void release_m_string();
public:
	bool has_m_string() const;
private:
	void set_has_m_string();
	void clear_has_m_string();
private:
	common::miniproto::HashSet<common::miniproto::String<A>, A> m_string_;

private:
	common::miniproto::ProtoBitMap<7> m_bits;
};

template <template<typename> class A>
MsgTestSet<A>::MsgTestSet()
{
}

template <template<typename> class A>
MsgTestSet<A>::MsgTestSet(const MsgTestSet<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgTestSet<A>::MsgTestSet(MsgTestSet<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgTestSet<A>::~MsgTestSet()
{
}

template <template<typename> class A>
MsgTestSet<A>& MsgTestSet<A>::operator = (const MsgTestSet<A>& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

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
	if (other.has_m_string())
	{
		m_string_ = other.m_string_;
		set_has_m_string();
	}

	return *this;
}

template <template<typename> class A>
MsgTestSet<A>& MsgTestSet<A>::operator = (MsgTestSet<A>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

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
	if (other.has_m_string())
	{
		m_string_ = std::move(other.m_string_);
		other.clear_has_m_string();
		set_has_m_string();
	}

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSet<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(1, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_int32_, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(2, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_sint32_, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(3, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_uint32_, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(4, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_int64_, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(5, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_sint64_, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(6, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_uint64_, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(7, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::SetByteSize(m_string_, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSet<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_int32_, buf, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_int64_, buf, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_string_, buf, common::miniproto::CommonProtoString);
	}

	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTestSet<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_int32_, buf, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_int64_, buf, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::SetCode(m_string_, buf, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestSet<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_int32_, buf, common::miniproto::CommonProtoInt32);
				set_has_m_int32();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_int64_, buf, common::miniproto::CommonProtoInt64);
				set_has_m_int64();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_string_, buf, common::miniproto::CommonProtoString);
				set_has_m_string();
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
common::miniproto::byte_size MsgTestSet<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_int32_, buf, common::miniproto::CommonProtoInt32);
				set_has_m_int32();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_sint32_, buf, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_uint32_, buf, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_int64_, buf, common::miniproto::CommonProtoInt64);
				set_has_m_int64();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_sint64_, buf, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_uint64_, buf, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::SetDecode(m_string_, buf, common::miniproto::CommonProtoString);
				set_has_m_string();
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
void MsgTestSet<A>::Clear()
{
	clear_m_int32();
	clear_m_sint32();
	clear_m_uint32();
	clear_m_int64();
	clear_m_sint64();
	clear_m_uint64();
	clear_m_string();
}

template <template<typename> class A>
void MsgTestSet<A>::Release()
{
	release_m_int32();
	release_m_sint32();
	release_m_uint32();
	release_m_int64();
	release_m_sint64();
	release_m_uint64();
	release_m_string();
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_int32_size() const
{
	return m_int32_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_int32_count(const common::miniproto::int32& value) const
{
	return m_int32_.count(value);
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::int32, A> MsgTestSet<A>::m_int32_begin() const
{
	return m_int32_.begin();
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::int32, A> MsgTestSet<A>::m_int32_end() const
{
	return m_int32_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_int32(const common::miniproto::int32& value)
{
	m_int32_.insert(value);
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_int32(common::miniproto::int32&& value)
{
	m_int32_.insert(std::move(value));
	set_has_m_int32();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_int32(const common::miniproto::int32& value)
{
	m_int32_.erase(value);
	if(0 == m_int32_.size())
	{
		clear_has_m_int32();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
	if (m_int32_.size() > 0)
	{
		m_int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_int32()
{
	if (has_m_int32())
	{
		clear_has_m_int32();
	}
	if (m_int32_.size() > 0)
	{
		m_int32_.swap(common::miniproto::Set<common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_int32() const
{
	return m_bits.HasBit(0);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_int32()
{
	m_bits.SetBit(0);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_int32()
{
	m_bits.ClearBit(0);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_sint32_size() const
{
	return m_sint32_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_sint32_count(const common::miniproto::int32& value) const
{
	return m_sint32_.count(value);
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::int32, A> MsgTestSet<A>::m_sint32_begin() const
{
	return m_sint32_.begin();
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::int32, A> MsgTestSet<A>::m_sint32_end() const
{
	return m_sint32_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_sint32(const common::miniproto::int32& value)
{
	m_sint32_.insert(value);
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_sint32(common::miniproto::int32&& value)
{
	m_sint32_.insert(std::move(value));
	set_has_m_sint32();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_sint32(const common::miniproto::int32& value)
{
	m_sint32_.erase(value);
	if(0 == m_sint32_.size())
	{
		clear_has_m_sint32();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
	if (m_sint32_.size() > 0)
	{
		m_sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_sint32()
{
	if (has_m_sint32())
	{
		clear_has_m_sint32();
	}
	if (m_sint32_.size() > 0)
	{
		m_sint32_.swap(common::miniproto::HashSet<common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_sint32() const
{
	return m_bits.HasBit(1);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_sint32()
{
	m_bits.SetBit(1);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_sint32()
{
	m_bits.ClearBit(1);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_uint32_size() const
{
	return m_uint32_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_uint32_count(const common::miniproto::uint32& value) const
{
	return m_uint32_.count(value);
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::uint32, A> MsgTestSet<A>::m_uint32_begin() const
{
	return m_uint32_.begin();
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::uint32, A> MsgTestSet<A>::m_uint32_end() const
{
	return m_uint32_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_uint32(const common::miniproto::uint32& value)
{
	m_uint32_.insert(value);
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_uint32(common::miniproto::uint32&& value)
{
	m_uint32_.insert(std::move(value));
	set_has_m_uint32();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_uint32(const common::miniproto::uint32& value)
{
	m_uint32_.erase(value);
	if(0 == m_uint32_.size())
	{
		clear_has_m_uint32();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
	if (m_uint32_.size() > 0)
	{
		m_uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_uint32()
{
	if (has_m_uint32())
	{
		clear_has_m_uint32();
	}
	if (m_uint32_.size() > 0)
	{
		m_uint32_.swap(common::miniproto::Set<common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_uint32() const
{
	return m_bits.HasBit(2);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_uint32()
{
	m_bits.SetBit(2);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_uint32()
{
	m_bits.ClearBit(2);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_int64_size() const
{
	return m_int64_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_int64_count(const common::miniproto::int64& value) const
{
	return m_int64_.count(value);
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::int64, A> MsgTestSet<A>::m_int64_begin() const
{
	return m_int64_.begin();
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::int64, A> MsgTestSet<A>::m_int64_end() const
{
	return m_int64_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_int64(const common::miniproto::int64& value)
{
	m_int64_.insert(value);
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_int64(common::miniproto::int64&& value)
{
	m_int64_.insert(std::move(value));
	set_has_m_int64();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_int64(const common::miniproto::int64& value)
{
	m_int64_.erase(value);
	if(0 == m_int64_.size())
	{
		clear_has_m_int64();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
	if (m_int64_.size() > 0)
	{
		m_int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_int64()
{
	if (has_m_int64())
	{
		clear_has_m_int64();
	}
	if (m_int64_.size() > 0)
	{
		m_int64_.swap(common::miniproto::Set<common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_int64() const
{
	return m_bits.HasBit(3);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_int64()
{
	m_bits.SetBit(3);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_int64()
{
	m_bits.ClearBit(3);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_sint64_size() const
{
	return m_sint64_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_sint64_count(const common::miniproto::int64& value) const
{
	return m_sint64_.count(value);
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::int64, A> MsgTestSet<A>::m_sint64_begin() const
{
	return m_sint64_.begin();
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::int64, A> MsgTestSet<A>::m_sint64_end() const
{
	return m_sint64_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_sint64(const common::miniproto::int64& value)
{
	m_sint64_.insert(value);
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_sint64(common::miniproto::int64&& value)
{
	m_sint64_.insert(std::move(value));
	set_has_m_sint64();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_sint64(const common::miniproto::int64& value)
{
	m_sint64_.erase(value);
	if(0 == m_sint64_.size())
	{
		clear_has_m_sint64();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
	if (m_sint64_.size() > 0)
	{
		m_sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_sint64()
{
	if (has_m_sint64())
	{
		clear_has_m_sint64();
	}
	if (m_sint64_.size() > 0)
	{
		m_sint64_.swap(common::miniproto::HashSet<common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_sint64() const
{
	return m_bits.HasBit(4);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_sint64()
{
	m_bits.SetBit(4);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_sint64()
{
	m_bits.ClearBit(4);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_uint64_size() const
{
	return m_uint64_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_uint64_count(const common::miniproto::uint64& value) const
{
	return m_uint64_.count(value);
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::uint64, A> MsgTestSet<A>::m_uint64_begin() const
{
	return m_uint64_.begin();
}
template <template<typename> class A>
common::miniproto::SetConstIt<common::miniproto::uint64, A> MsgTestSet<A>::m_uint64_end() const
{
	return m_uint64_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_uint64(const common::miniproto::uint64& value)
{
	m_uint64_.insert(value);
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_uint64(common::miniproto::uint64&& value)
{
	m_uint64_.insert(std::move(value));
	set_has_m_uint64();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_uint64(const common::miniproto::uint64& value)
{
	m_uint64_.erase(value);
	if(0 == m_uint64_.size())
	{
		clear_has_m_uint64();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
	if (m_uint64_.size() > 0)
	{
		m_uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::release_m_uint64()
{
	if (has_m_uint64())
	{
		clear_has_m_uint64();
	}
	if (m_uint64_.size() > 0)
	{
		m_uint64_.swap(common::miniproto::Set<common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_uint64() const
{
	return m_bits.HasBit(5);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_uint64()
{
	m_bits.SetBit(5);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_uint64()
{
	m_bits.ClearBit(5);
}

template <template<typename> class A>
size_t MsgTestSet<A>::m_string_size() const
{
	return m_string_.size();
}
template <template<typename> class A>
size_t MsgTestSet<A>::m_string_count(const common::miniproto::String<A>& value) const
{
	return m_string_.count(value);
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::String<A>, A> MsgTestSet<A>::m_string_begin() const
{
	return m_string_.begin();
}
template <template<typename> class A>
common::miniproto::HashSetConstIt<common::miniproto::String<A>, A> MsgTestSet<A>::m_string_end() const
{
	return m_string_.end();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_string(const common::miniproto::String<A>& value)
{
	m_string_.insert(value);
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_string(common::miniproto::String<A>&& value)
{
	m_string_.insert(std::move(value));
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_string(const char* value)
{
	common::miniproto::String<A> temp(value);
	m_string_.insert(std::move(temp));
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSet<A>::add_m_string(const char* value, size_t size)
{
	common::miniproto::String<A> temp(value, size);
	m_string_.insert(std::move(temp));
	set_has_m_string();
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_string(const common::miniproto::String<A>& value)
{
	m_string_.erase(value);
	if(0 == m_string_.size())
	{
		clear_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_string(const char* value)
{
	common::miniproto::String<A> temp(value);
	m_string_.erase(temp);
	if(0 == m_string_.size())
	{
		clear_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::remove_m_string(const char* value, size_t size)
{
	common::miniproto::String<A> temp(value, size);
	m_string_.erase(temp);
	if(0 == m_string_.size())
	{
		clear_has_m_string();
	}
}
template <template<typename> class A>
void MsgTestSet<A>::clear_m_string()
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
void MsgTestSet<A>::release_m_string()
{
	if (has_m_string())
	{
		clear_has_m_string();
	}
	if (m_string_.size() > 0)
	{
		m_string_.swap(common::miniproto::HashSet<common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestSet<A>::has_m_string() const
{
	return m_bits.HasBit(6);
}
template <template<typename> class A>
void MsgTestSet<A>::set_has_m_string()
{
	m_bits.SetBit(6);
}
template <template<typename> class A>
void MsgTestSet<A>::clear_has_m_string()
{
	m_bits.ClearBit(6);
}

template <template<typename> class A = std::allocator>
class MsgTestMap : public common::miniproto::ProtoBase
{
public:
	MsgTestMap();
	MsgTestMap(const MsgTestMap<A>& other);
	MsgTestMap(MsgTestMap<A>&& other);
	virtual ~MsgTestMap();
	MsgTestMap<A>& operator = (const MsgTestMap<A>& other);
	MsgTestMap<A>& operator = (MsgTestMap<A>&& other);

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
	void add_m_int32bool(const common::miniproto::int32& key, const bool& value);
	void add_m_int32bool(common::miniproto::int32&& key, const bool& value);
	void add_m_int32bool(const common::miniproto::int32& key, bool&& value);
	void add_m_int32bool(common::miniproto::int32&& key, bool&& value);
	void remove_m_int32bool(const common::miniproto::int32& key);
public:
	size_t m_int32bool_size() const;
	const bool* find_m_int32bool(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, bool, A> m_int32bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, bool, A> m_int32bool_end() const;
public:
	void clear_m_int32bool();
	void release_m_int32bool();
public:
	bool has_m_int32bool() const;
private:
	void set_has_m_int32bool();
	void clear_has_m_int32bool();
private:
	common::miniproto::Map<common::miniproto::int32, bool, A> m_int32bool_;

public:
	void add_m_sint32bool(const common::miniproto::int32& key, const bool& value);
	void add_m_sint32bool(common::miniproto::int32&& key, const bool& value);
	void add_m_sint32bool(const common::miniproto::int32& key, bool&& value);
	void add_m_sint32bool(common::miniproto::int32&& key, bool&& value);
	void remove_m_sint32bool(const common::miniproto::int32& key);
public:
	size_t m_sint32bool_size() const;
	const bool* find_m_sint32bool(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, bool, A> m_sint32bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, bool, A> m_sint32bool_end() const;
public:
	void clear_m_sint32bool();
	void release_m_sint32bool();
public:
	bool has_m_sint32bool() const;
private:
	void set_has_m_sint32bool();
	void clear_has_m_sint32bool();
private:
	common::miniproto::Map<common::miniproto::int32, bool, A> m_sint32bool_;

public:
	void add_m_uint32bool(const common::miniproto::uint32& key, const bool& value);
	void add_m_uint32bool(common::miniproto::uint32&& key, const bool& value);
	void add_m_uint32bool(const common::miniproto::uint32& key, bool&& value);
	void add_m_uint32bool(common::miniproto::uint32&& key, bool&& value);
	void remove_m_uint32bool(const common::miniproto::uint32& key);
public:
	size_t m_uint32bool_size() const;
	const bool* find_m_uint32bool(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, bool, A> m_uint32bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, bool, A> m_uint32bool_end() const;
public:
	void clear_m_uint32bool();
	void release_m_uint32bool();
public:
	bool has_m_uint32bool() const;
private:
	void set_has_m_uint32bool();
	void clear_has_m_uint32bool();
private:
	common::miniproto::Map<common::miniproto::uint32, bool, A> m_uint32bool_;

public:
	void add_m_int64bool(const common::miniproto::int64& key, const bool& value);
	void add_m_int64bool(common::miniproto::int64&& key, const bool& value);
	void add_m_int64bool(const common::miniproto::int64& key, bool&& value);
	void add_m_int64bool(common::miniproto::int64&& key, bool&& value);
	void remove_m_int64bool(const common::miniproto::int64& key);
public:
	size_t m_int64bool_size() const;
	const bool* find_m_int64bool(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, bool, A> m_int64bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, bool, A> m_int64bool_end() const;
public:
	void clear_m_int64bool();
	void release_m_int64bool();
public:
	bool has_m_int64bool() const;
private:
	void set_has_m_int64bool();
	void clear_has_m_int64bool();
private:
	common::miniproto::Map<common::miniproto::int64, bool, A> m_int64bool_;

public:
	void add_m_sint64bool(const common::miniproto::int64& key, const bool& value);
	void add_m_sint64bool(common::miniproto::int64&& key, const bool& value);
	void add_m_sint64bool(const common::miniproto::int64& key, bool&& value);
	void add_m_sint64bool(common::miniproto::int64&& key, bool&& value);
	void remove_m_sint64bool(const common::miniproto::int64& key);
public:
	size_t m_sint64bool_size() const;
	const bool* find_m_sint64bool(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, bool, A> m_sint64bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, bool, A> m_sint64bool_end() const;
public:
	void clear_m_sint64bool();
	void release_m_sint64bool();
public:
	bool has_m_sint64bool() const;
private:
	void set_has_m_sint64bool();
	void clear_has_m_sint64bool();
private:
	common::miniproto::Map<common::miniproto::int64, bool, A> m_sint64bool_;

public:
	void add_m_uint64bool(const common::miniproto::uint64& key, const bool& value);
	void add_m_uint64bool(common::miniproto::uint64&& key, const bool& value);
	void add_m_uint64bool(const common::miniproto::uint64& key, bool&& value);
	void add_m_uint64bool(common::miniproto::uint64&& key, bool&& value);
	void remove_m_uint64bool(const common::miniproto::uint64& key);
public:
	size_t m_uint64bool_size() const;
	const bool* find_m_uint64bool(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, bool, A> m_uint64bool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, bool, A> m_uint64bool_end() const;
public:
	void clear_m_uint64bool();
	void release_m_uint64bool();
public:
	bool has_m_uint64bool() const;
private:
	void set_has_m_uint64bool();
	void clear_has_m_uint64bool();
private:
	common::miniproto::Map<common::miniproto::uint64, bool, A> m_uint64bool_;

public:
	void add_m_stringbool(const common::miniproto::String<A>& key, const bool& value);
	void add_m_stringbool(common::miniproto::String<A>&& key, const bool& value);
	void add_m_stringbool(const common::miniproto::String<A>& key, bool&& value);
	void add_m_stringbool(common::miniproto::String<A>&& key, bool&& value);
	void add_m_stringbool(const char* key,                 const bool& value);
	void add_m_stringbool(const char* key,                       bool&& value);
	void add_m_stringbool(const char* key, size_t keySize, const bool& value);
	void add_m_stringbool(const char* key, size_t keySize,       bool&& value);
	void remove_m_stringbool(const common::miniproto::String<A>& key);
	void remove_m_stringbool(const char* key);
	void remove_m_stringbool(const char* key, size_t keySize);
public:
	size_t m_stringbool_size() const;
	const bool* find_m_stringbool(const common::miniproto::String<A>& key) const;
	const bool* find_m_stringbool(const char* key) const;
	const bool* find_m_stringbool(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, bool, A> m_stringbool_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, bool, A> m_stringbool_end() const;
public:
	void clear_m_stringbool();
	void release_m_stringbool();
public:
	bool has_m_stringbool() const;
private:
	void set_has_m_stringbool();
	void clear_has_m_stringbool();
private:
	common::miniproto::Map<common::miniproto::String<A>, bool, A> m_stringbool_;

public:
	void add_m_int32int32(const common::miniproto::int32& key, const common::miniproto::int32& value);
	void add_m_int32int32(common::miniproto::int32&& key, const common::miniproto::int32& value);
	void add_m_int32int32(const common::miniproto::int32& key, common::miniproto::int32&& value);
	void add_m_int32int32(common::miniproto::int32&& key, common::miniproto::int32&& value);
	void remove_m_int32int32(const common::miniproto::int32& key);
public:
	size_t m_int32int32_size() const;
	const common::miniproto::int32* find_m_int32int32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_int32int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_int32int32_end() const;
public:
	void clear_m_int32int32();
	void release_m_int32int32();
public:
	bool has_m_int32int32() const;
private:
	void set_has_m_int32int32();
	void clear_has_m_int32int32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A> m_int32int32_;

public:
	void add_m_sint32int32(const common::miniproto::int32& key, const common::miniproto::int32& value);
	void add_m_sint32int32(common::miniproto::int32&& key, const common::miniproto::int32& value);
	void add_m_sint32int32(const common::miniproto::int32& key, common::miniproto::int32&& value);
	void add_m_sint32int32(common::miniproto::int32&& key, common::miniproto::int32&& value);
	void remove_m_sint32int32(const common::miniproto::int32& key);
public:
	size_t m_sint32int32_size() const;
	const common::miniproto::int32* find_m_sint32int32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_sint32int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_sint32int32_end() const;
public:
	void clear_m_sint32int32();
	void release_m_sint32int32();
public:
	bool has_m_sint32int32() const;
private:
	void set_has_m_sint32int32();
	void clear_has_m_sint32int32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A> m_sint32int32_;

public:
	void add_m_uint32int32(const common::miniproto::uint32& key, const common::miniproto::int32& value);
	void add_m_uint32int32(common::miniproto::uint32&& key, const common::miniproto::int32& value);
	void add_m_uint32int32(const common::miniproto::uint32& key, common::miniproto::int32&& value);
	void add_m_uint32int32(common::miniproto::uint32&& key, common::miniproto::int32&& value);
	void remove_m_uint32int32(const common::miniproto::uint32& key);
public:
	size_t m_uint32int32_size() const;
	const common::miniproto::int32* find_m_uint32int32(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> m_uint32int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> m_uint32int32_end() const;
public:
	void clear_m_uint32int32();
	void release_m_uint32int32();
public:
	bool has_m_uint32int32() const;
private:
	void set_has_m_uint32int32();
	void clear_has_m_uint32int32();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::int32, A> m_uint32int32_;

public:
	void add_m_int64int32(const common::miniproto::int64& key, const common::miniproto::int32& value);
	void add_m_int64int32(common::miniproto::int64&& key, const common::miniproto::int32& value);
	void add_m_int64int32(const common::miniproto::int64& key, common::miniproto::int32&& value);
	void add_m_int64int32(common::miniproto::int64&& key, common::miniproto::int32&& value);
	void remove_m_int64int32(const common::miniproto::int64& key);
public:
	size_t m_int64int32_size() const;
	const common::miniproto::int32* find_m_int64int32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_int64int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_int64int32_end() const;
public:
	void clear_m_int64int32();
	void release_m_int64int32();
public:
	bool has_m_int64int32() const;
private:
	void set_has_m_int64int32();
	void clear_has_m_int64int32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A> m_int64int32_;

public:
	void add_m_sint64int32(const common::miniproto::int64& key, const common::miniproto::int32& value);
	void add_m_sint64int32(common::miniproto::int64&& key, const common::miniproto::int32& value);
	void add_m_sint64int32(const common::miniproto::int64& key, common::miniproto::int32&& value);
	void add_m_sint64int32(common::miniproto::int64&& key, common::miniproto::int32&& value);
	void remove_m_sint64int32(const common::miniproto::int64& key);
public:
	size_t m_sint64int32_size() const;
	const common::miniproto::int32* find_m_sint64int32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_sint64int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_sint64int32_end() const;
public:
	void clear_m_sint64int32();
	void release_m_sint64int32();
public:
	bool has_m_sint64int32() const;
private:
	void set_has_m_sint64int32();
	void clear_has_m_sint64int32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A> m_sint64int32_;

public:
	void add_m_uint64int32(const common::miniproto::uint64& key, const common::miniproto::int32& value);
	void add_m_uint64int32(common::miniproto::uint64&& key, const common::miniproto::int32& value);
	void add_m_uint64int32(const common::miniproto::uint64& key, common::miniproto::int32&& value);
	void add_m_uint64int32(common::miniproto::uint64&& key, common::miniproto::int32&& value);
	void remove_m_uint64int32(const common::miniproto::uint64& key);
public:
	size_t m_uint64int32_size() const;
	const common::miniproto::int32* find_m_uint64int32(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> m_uint64int32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> m_uint64int32_end() const;
public:
	void clear_m_uint64int32();
	void release_m_uint64int32();
public:
	bool has_m_uint64int32() const;
private:
	void set_has_m_uint64int32();
	void clear_has_m_uint64int32();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::int32, A> m_uint64int32_;

public:
	void add_m_stringint32(const common::miniproto::String<A>& key, const common::miniproto::int32& value);
	void add_m_stringint32(common::miniproto::String<A>&& key, const common::miniproto::int32& value);
	void add_m_stringint32(const common::miniproto::String<A>& key, common::miniproto::int32&& value);
	void add_m_stringint32(common::miniproto::String<A>&& key, common::miniproto::int32&& value);
	void add_m_stringint32(const char* key,                 const common::miniproto::int32& value);
	void add_m_stringint32(const char* key,                       common::miniproto::int32&& value);
	void add_m_stringint32(const char* key, size_t keySize, const common::miniproto::int32& value);
	void add_m_stringint32(const char* key, size_t keySize,       common::miniproto::int32&& value);
	void remove_m_stringint32(const common::miniproto::String<A>& key);
	void remove_m_stringint32(const char* key);
	void remove_m_stringint32(const char* key, size_t keySize);
public:
	size_t m_stringint32_size() const;
	const common::miniproto::int32* find_m_stringint32(const common::miniproto::String<A>& key) const;
	const common::miniproto::int32* find_m_stringint32(const char* key) const;
	const common::miniproto::int32* find_m_stringint32(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> m_stringint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> m_stringint32_end() const;
public:
	void clear_m_stringint32();
	void release_m_stringint32();
public:
	bool has_m_stringint32() const;
private:
	void set_has_m_stringint32();
	void clear_has_m_stringint32();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int32, A> m_stringint32_;

public:
	void add_m_int32sint32(const common::miniproto::int32& key, const common::miniproto::int32& value);
	void add_m_int32sint32(common::miniproto::int32&& key, const common::miniproto::int32& value);
	void add_m_int32sint32(const common::miniproto::int32& key, common::miniproto::int32&& value);
	void add_m_int32sint32(common::miniproto::int32&& key, common::miniproto::int32&& value);
	void remove_m_int32sint32(const common::miniproto::int32& key);
public:
	size_t m_int32sint32_size() const;
	const common::miniproto::int32* find_m_int32sint32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_int32sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_int32sint32_end() const;
public:
	void clear_m_int32sint32();
	void release_m_int32sint32();
public:
	bool has_m_int32sint32() const;
private:
	void set_has_m_int32sint32();
	void clear_has_m_int32sint32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A> m_int32sint32_;

public:
	void add_m_sint32sint32(const common::miniproto::int32& key, const common::miniproto::int32& value);
	void add_m_sint32sint32(common::miniproto::int32&& key, const common::miniproto::int32& value);
	void add_m_sint32sint32(const common::miniproto::int32& key, common::miniproto::int32&& value);
	void add_m_sint32sint32(common::miniproto::int32&& key, common::miniproto::int32&& value);
	void remove_m_sint32sint32(const common::miniproto::int32& key);
public:
	size_t m_sint32sint32_size() const;
	const common::miniproto::int32* find_m_sint32sint32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_sint32sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> m_sint32sint32_end() const;
public:
	void clear_m_sint32sint32();
	void release_m_sint32sint32();
public:
	bool has_m_sint32sint32() const;
private:
	void set_has_m_sint32sint32();
	void clear_has_m_sint32sint32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A> m_sint32sint32_;

public:
	void add_m_uint32sint32(const common::miniproto::uint32& key, const common::miniproto::int32& value);
	void add_m_uint32sint32(common::miniproto::uint32&& key, const common::miniproto::int32& value);
	void add_m_uint32sint32(const common::miniproto::uint32& key, common::miniproto::int32&& value);
	void add_m_uint32sint32(common::miniproto::uint32&& key, common::miniproto::int32&& value);
	void remove_m_uint32sint32(const common::miniproto::uint32& key);
public:
	size_t m_uint32sint32_size() const;
	const common::miniproto::int32* find_m_uint32sint32(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> m_uint32sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> m_uint32sint32_end() const;
public:
	void clear_m_uint32sint32();
	void release_m_uint32sint32();
public:
	bool has_m_uint32sint32() const;
private:
	void set_has_m_uint32sint32();
	void clear_has_m_uint32sint32();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::int32, A> m_uint32sint32_;

public:
	void add_m_int64sint32(const common::miniproto::int64& key, const common::miniproto::int32& value);
	void add_m_int64sint32(common::miniproto::int64&& key, const common::miniproto::int32& value);
	void add_m_int64sint32(const common::miniproto::int64& key, common::miniproto::int32&& value);
	void add_m_int64sint32(common::miniproto::int64&& key, common::miniproto::int32&& value);
	void remove_m_int64sint32(const common::miniproto::int64& key);
public:
	size_t m_int64sint32_size() const;
	const common::miniproto::int32* find_m_int64sint32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_int64sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_int64sint32_end() const;
public:
	void clear_m_int64sint32();
	void release_m_int64sint32();
public:
	bool has_m_int64sint32() const;
private:
	void set_has_m_int64sint32();
	void clear_has_m_int64sint32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A> m_int64sint32_;

public:
	void add_m_sint64sint32(const common::miniproto::int64& key, const common::miniproto::int32& value);
	void add_m_sint64sint32(common::miniproto::int64&& key, const common::miniproto::int32& value);
	void add_m_sint64sint32(const common::miniproto::int64& key, common::miniproto::int32&& value);
	void add_m_sint64sint32(common::miniproto::int64&& key, common::miniproto::int32&& value);
	void remove_m_sint64sint32(const common::miniproto::int64& key);
public:
	size_t m_sint64sint32_size() const;
	const common::miniproto::int32* find_m_sint64sint32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_sint64sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> m_sint64sint32_end() const;
public:
	void clear_m_sint64sint32();
	void release_m_sint64sint32();
public:
	bool has_m_sint64sint32() const;
private:
	void set_has_m_sint64sint32();
	void clear_has_m_sint64sint32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A> m_sint64sint32_;

public:
	void add_m_uint64sint32(const common::miniproto::uint64& key, const common::miniproto::int32& value);
	void add_m_uint64sint32(common::miniproto::uint64&& key, const common::miniproto::int32& value);
	void add_m_uint64sint32(const common::miniproto::uint64& key, common::miniproto::int32&& value);
	void add_m_uint64sint32(common::miniproto::uint64&& key, common::miniproto::int32&& value);
	void remove_m_uint64sint32(const common::miniproto::uint64& key);
public:
	size_t m_uint64sint32_size() const;
	const common::miniproto::int32* find_m_uint64sint32(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> m_uint64sint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> m_uint64sint32_end() const;
public:
	void clear_m_uint64sint32();
	void release_m_uint64sint32();
public:
	bool has_m_uint64sint32() const;
private:
	void set_has_m_uint64sint32();
	void clear_has_m_uint64sint32();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::int32, A> m_uint64sint32_;

public:
	void add_m_stringsint32(const common::miniproto::String<A>& key, const common::miniproto::int32& value);
	void add_m_stringsint32(common::miniproto::String<A>&& key, const common::miniproto::int32& value);
	void add_m_stringsint32(const common::miniproto::String<A>& key, common::miniproto::int32&& value);
	void add_m_stringsint32(common::miniproto::String<A>&& key, common::miniproto::int32&& value);
	void add_m_stringsint32(const char* key,                 const common::miniproto::int32& value);
	void add_m_stringsint32(const char* key,                       common::miniproto::int32&& value);
	void add_m_stringsint32(const char* key, size_t keySize, const common::miniproto::int32& value);
	void add_m_stringsint32(const char* key, size_t keySize,       common::miniproto::int32&& value);
	void remove_m_stringsint32(const common::miniproto::String<A>& key);
	void remove_m_stringsint32(const char* key);
	void remove_m_stringsint32(const char* key, size_t keySize);
public:
	size_t m_stringsint32_size() const;
	const common::miniproto::int32* find_m_stringsint32(const common::miniproto::String<A>& key) const;
	const common::miniproto::int32* find_m_stringsint32(const char* key) const;
	const common::miniproto::int32* find_m_stringsint32(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> m_stringsint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> m_stringsint32_end() const;
public:
	void clear_m_stringsint32();
	void release_m_stringsint32();
public:
	bool has_m_stringsint32() const;
private:
	void set_has_m_stringsint32();
	void clear_has_m_stringsint32();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int32, A> m_stringsint32_;

public:
	void add_m_int32uint32(const common::miniproto::int32& key, const common::miniproto::uint32& value);
	void add_m_int32uint32(common::miniproto::int32&& key, const common::miniproto::uint32& value);
	void add_m_int32uint32(const common::miniproto::int32& key, common::miniproto::uint32&& value);
	void add_m_int32uint32(common::miniproto::int32&& key, common::miniproto::uint32&& value);
	void remove_m_int32uint32(const common::miniproto::int32& key);
public:
	size_t m_int32uint32_size() const;
	const common::miniproto::uint32* find_m_int32uint32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> m_int32uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> m_int32uint32_end() const;
public:
	void clear_m_int32uint32();
	void release_m_int32uint32();
public:
	bool has_m_int32uint32() const;
private:
	void set_has_m_int32uint32();
	void clear_has_m_int32uint32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::uint32, A> m_int32uint32_;

public:
	void add_m_sint32uint32(const common::miniproto::int32& key, const common::miniproto::uint32& value);
	void add_m_sint32uint32(common::miniproto::int32&& key, const common::miniproto::uint32& value);
	void add_m_sint32uint32(const common::miniproto::int32& key, common::miniproto::uint32&& value);
	void add_m_sint32uint32(common::miniproto::int32&& key, common::miniproto::uint32&& value);
	void remove_m_sint32uint32(const common::miniproto::int32& key);
public:
	size_t m_sint32uint32_size() const;
	const common::miniproto::uint32* find_m_sint32uint32(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> m_sint32uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> m_sint32uint32_end() const;
public:
	void clear_m_sint32uint32();
	void release_m_sint32uint32();
public:
	bool has_m_sint32uint32() const;
private:
	void set_has_m_sint32uint32();
	void clear_has_m_sint32uint32();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::uint32, A> m_sint32uint32_;

public:
	void add_m_uint32uint32(const common::miniproto::uint32& key, const common::miniproto::uint32& value);
	void add_m_uint32uint32(common::miniproto::uint32&& key, const common::miniproto::uint32& value);
	void add_m_uint32uint32(const common::miniproto::uint32& key, common::miniproto::uint32&& value);
	void add_m_uint32uint32(common::miniproto::uint32&& key, common::miniproto::uint32&& value);
	void remove_m_uint32uint32(const common::miniproto::uint32& key);
public:
	size_t m_uint32uint32_size() const;
	const common::miniproto::uint32* find_m_uint32uint32(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint32, A> m_uint32uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint32, A> m_uint32uint32_end() const;
public:
	void clear_m_uint32uint32();
	void release_m_uint32uint32();
public:
	bool has_m_uint32uint32() const;
private:
	void set_has_m_uint32uint32();
	void clear_has_m_uint32uint32();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::uint32, A> m_uint32uint32_;

public:
	void add_m_int64uint32(const common::miniproto::int64& key, const common::miniproto::uint32& value);
	void add_m_int64uint32(common::miniproto::int64&& key, const common::miniproto::uint32& value);
	void add_m_int64uint32(const common::miniproto::int64& key, common::miniproto::uint32&& value);
	void add_m_int64uint32(common::miniproto::int64&& key, common::miniproto::uint32&& value);
	void remove_m_int64uint32(const common::miniproto::int64& key);
public:
	size_t m_int64uint32_size() const;
	const common::miniproto::uint32* find_m_int64uint32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> m_int64uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> m_int64uint32_end() const;
public:
	void clear_m_int64uint32();
	void release_m_int64uint32();
public:
	bool has_m_int64uint32() const;
private:
	void set_has_m_int64uint32();
	void clear_has_m_int64uint32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::uint32, A> m_int64uint32_;

public:
	void add_m_sint64uint32(const common::miniproto::int64& key, const common::miniproto::uint32& value);
	void add_m_sint64uint32(common::miniproto::int64&& key, const common::miniproto::uint32& value);
	void add_m_sint64uint32(const common::miniproto::int64& key, common::miniproto::uint32&& value);
	void add_m_sint64uint32(common::miniproto::int64&& key, common::miniproto::uint32&& value);
	void remove_m_sint64uint32(const common::miniproto::int64& key);
public:
	size_t m_sint64uint32_size() const;
	const common::miniproto::uint32* find_m_sint64uint32(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> m_sint64uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> m_sint64uint32_end() const;
public:
	void clear_m_sint64uint32();
	void release_m_sint64uint32();
public:
	bool has_m_sint64uint32() const;
private:
	void set_has_m_sint64uint32();
	void clear_has_m_sint64uint32();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::uint32, A> m_sint64uint32_;

public:
	void add_m_uint64uint32(const common::miniproto::uint64& key, const common::miniproto::uint32& value);
	void add_m_uint64uint32(common::miniproto::uint64&& key, const common::miniproto::uint32& value);
	void add_m_uint64uint32(const common::miniproto::uint64& key, common::miniproto::uint32&& value);
	void add_m_uint64uint32(common::miniproto::uint64&& key, common::miniproto::uint32&& value);
	void remove_m_uint64uint32(const common::miniproto::uint64& key);
public:
	size_t m_uint64uint32_size() const;
	const common::miniproto::uint32* find_m_uint64uint32(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint32, A> m_uint64uint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint32, A> m_uint64uint32_end() const;
public:
	void clear_m_uint64uint32();
	void release_m_uint64uint32();
public:
	bool has_m_uint64uint32() const;
private:
	void set_has_m_uint64uint32();
	void clear_has_m_uint64uint32();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::uint32, A> m_uint64uint32_;

public:
	void add_m_stringuint32(const common::miniproto::String<A>& key, const common::miniproto::uint32& value);
	void add_m_stringuint32(common::miniproto::String<A>&& key, const common::miniproto::uint32& value);
	void add_m_stringuint32(const common::miniproto::String<A>& key, common::miniproto::uint32&& value);
	void add_m_stringuint32(common::miniproto::String<A>&& key, common::miniproto::uint32&& value);
	void add_m_stringuint32(const char* key,                 const common::miniproto::uint32& value);
	void add_m_stringuint32(const char* key,                       common::miniproto::uint32&& value);
	void add_m_stringuint32(const char* key, size_t keySize, const common::miniproto::uint32& value);
	void add_m_stringuint32(const char* key, size_t keySize,       common::miniproto::uint32&& value);
	void remove_m_stringuint32(const common::miniproto::String<A>& key);
	void remove_m_stringuint32(const char* key);
	void remove_m_stringuint32(const char* key, size_t keySize);
public:
	size_t m_stringuint32_size() const;
	const common::miniproto::uint32* find_m_stringuint32(const common::miniproto::String<A>& key) const;
	const common::miniproto::uint32* find_m_stringuint32(const char* key) const;
	const common::miniproto::uint32* find_m_stringuint32(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint32, A> m_stringuint32_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint32, A> m_stringuint32_end() const;
public:
	void clear_m_stringuint32();
	void release_m_stringuint32();
public:
	bool has_m_stringuint32() const;
private:
	void set_has_m_stringuint32();
	void clear_has_m_stringuint32();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::uint32, A> m_stringuint32_;

public:
	void add_m_int32int64(const common::miniproto::int32& key, const common::miniproto::int64& value);
	void add_m_int32int64(common::miniproto::int32&& key, const common::miniproto::int64& value);
	void add_m_int32int64(const common::miniproto::int32& key, common::miniproto::int64&& value);
	void add_m_int32int64(common::miniproto::int32&& key, common::miniproto::int64&& value);
	void remove_m_int32int64(const common::miniproto::int32& key);
public:
	size_t m_int32int64_size() const;
	const common::miniproto::int64* find_m_int32int64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_int32int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_int32int64_end() const;
public:
	void clear_m_int32int64();
	void release_m_int32int64();
public:
	bool has_m_int32int64() const;
private:
	void set_has_m_int32int64();
	void clear_has_m_int32int64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A> m_int32int64_;

public:
	void add_m_sint32int64(const common::miniproto::int32& key, const common::miniproto::int64& value);
	void add_m_sint32int64(common::miniproto::int32&& key, const common::miniproto::int64& value);
	void add_m_sint32int64(const common::miniproto::int32& key, common::miniproto::int64&& value);
	void add_m_sint32int64(common::miniproto::int32&& key, common::miniproto::int64&& value);
	void remove_m_sint32int64(const common::miniproto::int32& key);
public:
	size_t m_sint32int64_size() const;
	const common::miniproto::int64* find_m_sint32int64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_sint32int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_sint32int64_end() const;
public:
	void clear_m_sint32int64();
	void release_m_sint32int64();
public:
	bool has_m_sint32int64() const;
private:
	void set_has_m_sint32int64();
	void clear_has_m_sint32int64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A> m_sint32int64_;

public:
	void add_m_uint32int64(const common::miniproto::uint32& key, const common::miniproto::int64& value);
	void add_m_uint32int64(common::miniproto::uint32&& key, const common::miniproto::int64& value);
	void add_m_uint32int64(const common::miniproto::uint32& key, common::miniproto::int64&& value);
	void add_m_uint32int64(common::miniproto::uint32&& key, common::miniproto::int64&& value);
	void remove_m_uint32int64(const common::miniproto::uint32& key);
public:
	size_t m_uint32int64_size() const;
	const common::miniproto::int64* find_m_uint32int64(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> m_uint32int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> m_uint32int64_end() const;
public:
	void clear_m_uint32int64();
	void release_m_uint32int64();
public:
	bool has_m_uint32int64() const;
private:
	void set_has_m_uint32int64();
	void clear_has_m_uint32int64();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::int64, A> m_uint32int64_;

public:
	void add_m_int64int64(const common::miniproto::int64& key, const common::miniproto::int64& value);
	void add_m_int64int64(common::miniproto::int64&& key, const common::miniproto::int64& value);
	void add_m_int64int64(const common::miniproto::int64& key, common::miniproto::int64&& value);
	void add_m_int64int64(common::miniproto::int64&& key, common::miniproto::int64&& value);
	void remove_m_int64int64(const common::miniproto::int64& key);
public:
	size_t m_int64int64_size() const;
	const common::miniproto::int64* find_m_int64int64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_int64int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_int64int64_end() const;
public:
	void clear_m_int64int64();
	void release_m_int64int64();
public:
	bool has_m_int64int64() const;
private:
	void set_has_m_int64int64();
	void clear_has_m_int64int64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A> m_int64int64_;

public:
	void add_m_sint64int64(const common::miniproto::int64& key, const common::miniproto::int64& value);
	void add_m_sint64int64(common::miniproto::int64&& key, const common::miniproto::int64& value);
	void add_m_sint64int64(const common::miniproto::int64& key, common::miniproto::int64&& value);
	void add_m_sint64int64(common::miniproto::int64&& key, common::miniproto::int64&& value);
	void remove_m_sint64int64(const common::miniproto::int64& key);
public:
	size_t m_sint64int64_size() const;
	const common::miniproto::int64* find_m_sint64int64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_sint64int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_sint64int64_end() const;
public:
	void clear_m_sint64int64();
	void release_m_sint64int64();
public:
	bool has_m_sint64int64() const;
private:
	void set_has_m_sint64int64();
	void clear_has_m_sint64int64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A> m_sint64int64_;

public:
	void add_m_uint64int64(const common::miniproto::uint64& key, const common::miniproto::int64& value);
	void add_m_uint64int64(common::miniproto::uint64&& key, const common::miniproto::int64& value);
	void add_m_uint64int64(const common::miniproto::uint64& key, common::miniproto::int64&& value);
	void add_m_uint64int64(common::miniproto::uint64&& key, common::miniproto::int64&& value);
	void remove_m_uint64int64(const common::miniproto::uint64& key);
public:
	size_t m_uint64int64_size() const;
	const common::miniproto::int64* find_m_uint64int64(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> m_uint64int64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> m_uint64int64_end() const;
public:
	void clear_m_uint64int64();
	void release_m_uint64int64();
public:
	bool has_m_uint64int64() const;
private:
	void set_has_m_uint64int64();
	void clear_has_m_uint64int64();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::int64, A> m_uint64int64_;

public:
	void add_m_stringint64(const common::miniproto::String<A>& key, const common::miniproto::int64& value);
	void add_m_stringint64(common::miniproto::String<A>&& key, const common::miniproto::int64& value);
	void add_m_stringint64(const common::miniproto::String<A>& key, common::miniproto::int64&& value);
	void add_m_stringint64(common::miniproto::String<A>&& key, common::miniproto::int64&& value);
	void add_m_stringint64(const char* key,                 const common::miniproto::int64& value);
	void add_m_stringint64(const char* key,                       common::miniproto::int64&& value);
	void add_m_stringint64(const char* key, size_t keySize, const common::miniproto::int64& value);
	void add_m_stringint64(const char* key, size_t keySize,       common::miniproto::int64&& value);
	void remove_m_stringint64(const common::miniproto::String<A>& key);
	void remove_m_stringint64(const char* key);
	void remove_m_stringint64(const char* key, size_t keySize);
public:
	size_t m_stringint64_size() const;
	const common::miniproto::int64* find_m_stringint64(const common::miniproto::String<A>& key) const;
	const common::miniproto::int64* find_m_stringint64(const char* key) const;
	const common::miniproto::int64* find_m_stringint64(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> m_stringint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> m_stringint64_end() const;
public:
	void clear_m_stringint64();
	void release_m_stringint64();
public:
	bool has_m_stringint64() const;
private:
	void set_has_m_stringint64();
	void clear_has_m_stringint64();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int64, A> m_stringint64_;

public:
	void add_m_int32sint64(const common::miniproto::int32& key, const common::miniproto::int64& value);
	void add_m_int32sint64(common::miniproto::int32&& key, const common::miniproto::int64& value);
	void add_m_int32sint64(const common::miniproto::int32& key, common::miniproto::int64&& value);
	void add_m_int32sint64(common::miniproto::int32&& key, common::miniproto::int64&& value);
	void remove_m_int32sint64(const common::miniproto::int32& key);
public:
	size_t m_int32sint64_size() const;
	const common::miniproto::int64* find_m_int32sint64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_int32sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_int32sint64_end() const;
public:
	void clear_m_int32sint64();
	void release_m_int32sint64();
public:
	bool has_m_int32sint64() const;
private:
	void set_has_m_int32sint64();
	void clear_has_m_int32sint64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A> m_int32sint64_;

public:
	void add_m_sint32sint64(const common::miniproto::int32& key, const common::miniproto::int64& value);
	void add_m_sint32sint64(common::miniproto::int32&& key, const common::miniproto::int64& value);
	void add_m_sint32sint64(const common::miniproto::int32& key, common::miniproto::int64&& value);
	void add_m_sint32sint64(common::miniproto::int32&& key, common::miniproto::int64&& value);
	void remove_m_sint32sint64(const common::miniproto::int32& key);
public:
	size_t m_sint32sint64_size() const;
	const common::miniproto::int64* find_m_sint32sint64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_sint32sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> m_sint32sint64_end() const;
public:
	void clear_m_sint32sint64();
	void release_m_sint32sint64();
public:
	bool has_m_sint32sint64() const;
private:
	void set_has_m_sint32sint64();
	void clear_has_m_sint32sint64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A> m_sint32sint64_;

public:
	void add_m_uint32sint64(const common::miniproto::uint32& key, const common::miniproto::int64& value);
	void add_m_uint32sint64(common::miniproto::uint32&& key, const common::miniproto::int64& value);
	void add_m_uint32sint64(const common::miniproto::uint32& key, common::miniproto::int64&& value);
	void add_m_uint32sint64(common::miniproto::uint32&& key, common::miniproto::int64&& value);
	void remove_m_uint32sint64(const common::miniproto::uint32& key);
public:
	size_t m_uint32sint64_size() const;
	const common::miniproto::int64* find_m_uint32sint64(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> m_uint32sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> m_uint32sint64_end() const;
public:
	void clear_m_uint32sint64();
	void release_m_uint32sint64();
public:
	bool has_m_uint32sint64() const;
private:
	void set_has_m_uint32sint64();
	void clear_has_m_uint32sint64();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::int64, A> m_uint32sint64_;

public:
	void add_m_int64sint64(const common::miniproto::int64& key, const common::miniproto::int64& value);
	void add_m_int64sint64(common::miniproto::int64&& key, const common::miniproto::int64& value);
	void add_m_int64sint64(const common::miniproto::int64& key, common::miniproto::int64&& value);
	void add_m_int64sint64(common::miniproto::int64&& key, common::miniproto::int64&& value);
	void remove_m_int64sint64(const common::miniproto::int64& key);
public:
	size_t m_int64sint64_size() const;
	const common::miniproto::int64* find_m_int64sint64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_int64sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_int64sint64_end() const;
public:
	void clear_m_int64sint64();
	void release_m_int64sint64();
public:
	bool has_m_int64sint64() const;
private:
	void set_has_m_int64sint64();
	void clear_has_m_int64sint64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A> m_int64sint64_;

public:
	void add_m_sint64sint64(const common::miniproto::int64& key, const common::miniproto::int64& value);
	void add_m_sint64sint64(common::miniproto::int64&& key, const common::miniproto::int64& value);
	void add_m_sint64sint64(const common::miniproto::int64& key, common::miniproto::int64&& value);
	void add_m_sint64sint64(common::miniproto::int64&& key, common::miniproto::int64&& value);
	void remove_m_sint64sint64(const common::miniproto::int64& key);
public:
	size_t m_sint64sint64_size() const;
	const common::miniproto::int64* find_m_sint64sint64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_sint64sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> m_sint64sint64_end() const;
public:
	void clear_m_sint64sint64();
	void release_m_sint64sint64();
public:
	bool has_m_sint64sint64() const;
private:
	void set_has_m_sint64sint64();
	void clear_has_m_sint64sint64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A> m_sint64sint64_;

public:
	void add_m_uint64sint64(const common::miniproto::uint64& key, const common::miniproto::int64& value);
	void add_m_uint64sint64(common::miniproto::uint64&& key, const common::miniproto::int64& value);
	void add_m_uint64sint64(const common::miniproto::uint64& key, common::miniproto::int64&& value);
	void add_m_uint64sint64(common::miniproto::uint64&& key, common::miniproto::int64&& value);
	void remove_m_uint64sint64(const common::miniproto::uint64& key);
public:
	size_t m_uint64sint64_size() const;
	const common::miniproto::int64* find_m_uint64sint64(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> m_uint64sint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> m_uint64sint64_end() const;
public:
	void clear_m_uint64sint64();
	void release_m_uint64sint64();
public:
	bool has_m_uint64sint64() const;
private:
	void set_has_m_uint64sint64();
	void clear_has_m_uint64sint64();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::int64, A> m_uint64sint64_;

public:
	void add_m_stringsint64(const common::miniproto::String<A>& key, const common::miniproto::int64& value);
	void add_m_stringsint64(common::miniproto::String<A>&& key, const common::miniproto::int64& value);
	void add_m_stringsint64(const common::miniproto::String<A>& key, common::miniproto::int64&& value);
	void add_m_stringsint64(common::miniproto::String<A>&& key, common::miniproto::int64&& value);
	void add_m_stringsint64(const char* key,                 const common::miniproto::int64& value);
	void add_m_stringsint64(const char* key,                       common::miniproto::int64&& value);
	void add_m_stringsint64(const char* key, size_t keySize, const common::miniproto::int64& value);
	void add_m_stringsint64(const char* key, size_t keySize,       common::miniproto::int64&& value);
	void remove_m_stringsint64(const common::miniproto::String<A>& key);
	void remove_m_stringsint64(const char* key);
	void remove_m_stringsint64(const char* key, size_t keySize);
public:
	size_t m_stringsint64_size() const;
	const common::miniproto::int64* find_m_stringsint64(const common::miniproto::String<A>& key) const;
	const common::miniproto::int64* find_m_stringsint64(const char* key) const;
	const common::miniproto::int64* find_m_stringsint64(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> m_stringsint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> m_stringsint64_end() const;
public:
	void clear_m_stringsint64();
	void release_m_stringsint64();
public:
	bool has_m_stringsint64() const;
private:
	void set_has_m_stringsint64();
	void clear_has_m_stringsint64();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int64, A> m_stringsint64_;

public:
	void add_m_int32uint64(const common::miniproto::int32& key, const common::miniproto::uint64& value);
	void add_m_int32uint64(common::miniproto::int32&& key, const common::miniproto::uint64& value);
	void add_m_int32uint64(const common::miniproto::int32& key, common::miniproto::uint64&& value);
	void add_m_int32uint64(common::miniproto::int32&& key, common::miniproto::uint64&& value);
	void remove_m_int32uint64(const common::miniproto::int32& key);
public:
	size_t m_int32uint64_size() const;
	const common::miniproto::uint64* find_m_int32uint64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> m_int32uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> m_int32uint64_end() const;
public:
	void clear_m_int32uint64();
	void release_m_int32uint64();
public:
	bool has_m_int32uint64() const;
private:
	void set_has_m_int32uint64();
	void clear_has_m_int32uint64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::uint64, A> m_int32uint64_;

public:
	void add_m_sint32uint64(const common::miniproto::int32& key, const common::miniproto::uint64& value);
	void add_m_sint32uint64(common::miniproto::int32&& key, const common::miniproto::uint64& value);
	void add_m_sint32uint64(const common::miniproto::int32& key, common::miniproto::uint64&& value);
	void add_m_sint32uint64(common::miniproto::int32&& key, common::miniproto::uint64&& value);
	void remove_m_sint32uint64(const common::miniproto::int32& key);
public:
	size_t m_sint32uint64_size() const;
	const common::miniproto::uint64* find_m_sint32uint64(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> m_sint32uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> m_sint32uint64_end() const;
public:
	void clear_m_sint32uint64();
	void release_m_sint32uint64();
public:
	bool has_m_sint32uint64() const;
private:
	void set_has_m_sint32uint64();
	void clear_has_m_sint32uint64();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::uint64, A> m_sint32uint64_;

public:
	void add_m_uint32uint64(const common::miniproto::uint32& key, const common::miniproto::uint64& value);
	void add_m_uint32uint64(common::miniproto::uint32&& key, const common::miniproto::uint64& value);
	void add_m_uint32uint64(const common::miniproto::uint32& key, common::miniproto::uint64&& value);
	void add_m_uint32uint64(common::miniproto::uint32&& key, common::miniproto::uint64&& value);
	void remove_m_uint32uint64(const common::miniproto::uint32& key);
public:
	size_t m_uint32uint64_size() const;
	const common::miniproto::uint64* find_m_uint32uint64(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint64, A> m_uint32uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint64, A> m_uint32uint64_end() const;
public:
	void clear_m_uint32uint64();
	void release_m_uint32uint64();
public:
	bool has_m_uint32uint64() const;
private:
	void set_has_m_uint32uint64();
	void clear_has_m_uint32uint64();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::uint64, A> m_uint32uint64_;

public:
	void add_m_int64uint64(const common::miniproto::int64& key, const common::miniproto::uint64& value);
	void add_m_int64uint64(common::miniproto::int64&& key, const common::miniproto::uint64& value);
	void add_m_int64uint64(const common::miniproto::int64& key, common::miniproto::uint64&& value);
	void add_m_int64uint64(common::miniproto::int64&& key, common::miniproto::uint64&& value);
	void remove_m_int64uint64(const common::miniproto::int64& key);
public:
	size_t m_int64uint64_size() const;
	const common::miniproto::uint64* find_m_int64uint64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> m_int64uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> m_int64uint64_end() const;
public:
	void clear_m_int64uint64();
	void release_m_int64uint64();
public:
	bool has_m_int64uint64() const;
private:
	void set_has_m_int64uint64();
	void clear_has_m_int64uint64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::uint64, A> m_int64uint64_;

public:
	void add_m_sint64uint64(const common::miniproto::int64& key, const common::miniproto::uint64& value);
	void add_m_sint64uint64(common::miniproto::int64&& key, const common::miniproto::uint64& value);
	void add_m_sint64uint64(const common::miniproto::int64& key, common::miniproto::uint64&& value);
	void add_m_sint64uint64(common::miniproto::int64&& key, common::miniproto::uint64&& value);
	void remove_m_sint64uint64(const common::miniproto::int64& key);
public:
	size_t m_sint64uint64_size() const;
	const common::miniproto::uint64* find_m_sint64uint64(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> m_sint64uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> m_sint64uint64_end() const;
public:
	void clear_m_sint64uint64();
	void release_m_sint64uint64();
public:
	bool has_m_sint64uint64() const;
private:
	void set_has_m_sint64uint64();
	void clear_has_m_sint64uint64();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::uint64, A> m_sint64uint64_;

public:
	void add_m_uint64uint64(const common::miniproto::uint64& key, const common::miniproto::uint64& value);
	void add_m_uint64uint64(common::miniproto::uint64&& key, const common::miniproto::uint64& value);
	void add_m_uint64uint64(const common::miniproto::uint64& key, common::miniproto::uint64&& value);
	void add_m_uint64uint64(common::miniproto::uint64&& key, common::miniproto::uint64&& value);
	void remove_m_uint64uint64(const common::miniproto::uint64& key);
public:
	size_t m_uint64uint64_size() const;
	const common::miniproto::uint64* find_m_uint64uint64(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint64, A> m_uint64uint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint64, A> m_uint64uint64_end() const;
public:
	void clear_m_uint64uint64();
	void release_m_uint64uint64();
public:
	bool has_m_uint64uint64() const;
private:
	void set_has_m_uint64uint64();
	void clear_has_m_uint64uint64();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::uint64, A> m_uint64uint64_;

public:
	void add_m_stringuint64(const common::miniproto::String<A>& key, const common::miniproto::uint64& value);
	void add_m_stringuint64(common::miniproto::String<A>&& key, const common::miniproto::uint64& value);
	void add_m_stringuint64(const common::miniproto::String<A>& key, common::miniproto::uint64&& value);
	void add_m_stringuint64(common::miniproto::String<A>&& key, common::miniproto::uint64&& value);
	void add_m_stringuint64(const char* key,                 const common::miniproto::uint64& value);
	void add_m_stringuint64(const char* key,                       common::miniproto::uint64&& value);
	void add_m_stringuint64(const char* key, size_t keySize, const common::miniproto::uint64& value);
	void add_m_stringuint64(const char* key, size_t keySize,       common::miniproto::uint64&& value);
	void remove_m_stringuint64(const common::miniproto::String<A>& key);
	void remove_m_stringuint64(const char* key);
	void remove_m_stringuint64(const char* key, size_t keySize);
public:
	size_t m_stringuint64_size() const;
	const common::miniproto::uint64* find_m_stringuint64(const common::miniproto::String<A>& key) const;
	const common::miniproto::uint64* find_m_stringuint64(const char* key) const;
	const common::miniproto::uint64* find_m_stringuint64(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint64, A> m_stringuint64_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint64, A> m_stringuint64_end() const;
public:
	void clear_m_stringuint64();
	void release_m_stringuint64();
public:
	bool has_m_stringuint64() const;
private:
	void set_has_m_stringuint64();
	void clear_has_m_stringuint64();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::uint64, A> m_stringuint64_;

public:
	void add_m_int32float(const common::miniproto::int32& key, const float& value);
	void add_m_int32float(common::miniproto::int32&& key, const float& value);
	void add_m_int32float(const common::miniproto::int32& key, float&& value);
	void add_m_int32float(common::miniproto::int32&& key, float&& value);
	void remove_m_int32float(const common::miniproto::int32& key);
public:
	size_t m_int32float_size() const;
	const float* find_m_int32float(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, float, A> m_int32float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, float, A> m_int32float_end() const;
public:
	void clear_m_int32float();
	void release_m_int32float();
public:
	bool has_m_int32float() const;
private:
	void set_has_m_int32float();
	void clear_has_m_int32float();
private:
	common::miniproto::Map<common::miniproto::int32, float, A> m_int32float_;

public:
	void add_m_sint32float(const common::miniproto::int32& key, const float& value);
	void add_m_sint32float(common::miniproto::int32&& key, const float& value);
	void add_m_sint32float(const common::miniproto::int32& key, float&& value);
	void add_m_sint32float(common::miniproto::int32&& key, float&& value);
	void remove_m_sint32float(const common::miniproto::int32& key);
public:
	size_t m_sint32float_size() const;
	const float* find_m_sint32float(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, float, A> m_sint32float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, float, A> m_sint32float_end() const;
public:
	void clear_m_sint32float();
	void release_m_sint32float();
public:
	bool has_m_sint32float() const;
private:
	void set_has_m_sint32float();
	void clear_has_m_sint32float();
private:
	common::miniproto::Map<common::miniproto::int32, float, A> m_sint32float_;

public:
	void add_m_uint32float(const common::miniproto::uint32& key, const float& value);
	void add_m_uint32float(common::miniproto::uint32&& key, const float& value);
	void add_m_uint32float(const common::miniproto::uint32& key, float&& value);
	void add_m_uint32float(common::miniproto::uint32&& key, float&& value);
	void remove_m_uint32float(const common::miniproto::uint32& key);
public:
	size_t m_uint32float_size() const;
	const float* find_m_uint32float(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, float, A> m_uint32float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, float, A> m_uint32float_end() const;
public:
	void clear_m_uint32float();
	void release_m_uint32float();
public:
	bool has_m_uint32float() const;
private:
	void set_has_m_uint32float();
	void clear_has_m_uint32float();
private:
	common::miniproto::Map<common::miniproto::uint32, float, A> m_uint32float_;

public:
	void add_m_int64float(const common::miniproto::int64& key, const float& value);
	void add_m_int64float(common::miniproto::int64&& key, const float& value);
	void add_m_int64float(const common::miniproto::int64& key, float&& value);
	void add_m_int64float(common::miniproto::int64&& key, float&& value);
	void remove_m_int64float(const common::miniproto::int64& key);
public:
	size_t m_int64float_size() const;
	const float* find_m_int64float(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, float, A> m_int64float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, float, A> m_int64float_end() const;
public:
	void clear_m_int64float();
	void release_m_int64float();
public:
	bool has_m_int64float() const;
private:
	void set_has_m_int64float();
	void clear_has_m_int64float();
private:
	common::miniproto::Map<common::miniproto::int64, float, A> m_int64float_;

public:
	void add_m_sint64float(const common::miniproto::int64& key, const float& value);
	void add_m_sint64float(common::miniproto::int64&& key, const float& value);
	void add_m_sint64float(const common::miniproto::int64& key, float&& value);
	void add_m_sint64float(common::miniproto::int64&& key, float&& value);
	void remove_m_sint64float(const common::miniproto::int64& key);
public:
	size_t m_sint64float_size() const;
	const float* find_m_sint64float(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, float, A> m_sint64float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, float, A> m_sint64float_end() const;
public:
	void clear_m_sint64float();
	void release_m_sint64float();
public:
	bool has_m_sint64float() const;
private:
	void set_has_m_sint64float();
	void clear_has_m_sint64float();
private:
	common::miniproto::Map<common::miniproto::int64, float, A> m_sint64float_;

public:
	void add_m_uint64float(const common::miniproto::uint64& key, const float& value);
	void add_m_uint64float(common::miniproto::uint64&& key, const float& value);
	void add_m_uint64float(const common::miniproto::uint64& key, float&& value);
	void add_m_uint64float(common::miniproto::uint64&& key, float&& value);
	void remove_m_uint64float(const common::miniproto::uint64& key);
public:
	size_t m_uint64float_size() const;
	const float* find_m_uint64float(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, float, A> m_uint64float_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, float, A> m_uint64float_end() const;
public:
	void clear_m_uint64float();
	void release_m_uint64float();
public:
	bool has_m_uint64float() const;
private:
	void set_has_m_uint64float();
	void clear_has_m_uint64float();
private:
	common::miniproto::Map<common::miniproto::uint64, float, A> m_uint64float_;

public:
	void add_m_stringfloat(const common::miniproto::String<A>& key, const float& value);
	void add_m_stringfloat(common::miniproto::String<A>&& key, const float& value);
	void add_m_stringfloat(const common::miniproto::String<A>& key, float&& value);
	void add_m_stringfloat(common::miniproto::String<A>&& key, float&& value);
	void add_m_stringfloat(const char* key,                 const float& value);
	void add_m_stringfloat(const char* key,                       float&& value);
	void add_m_stringfloat(const char* key, size_t keySize, const float& value);
	void add_m_stringfloat(const char* key, size_t keySize,       float&& value);
	void remove_m_stringfloat(const common::miniproto::String<A>& key);
	void remove_m_stringfloat(const char* key);
	void remove_m_stringfloat(const char* key, size_t keySize);
public:
	size_t m_stringfloat_size() const;
	const float* find_m_stringfloat(const common::miniproto::String<A>& key) const;
	const float* find_m_stringfloat(const char* key) const;
	const float* find_m_stringfloat(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, float, A> m_stringfloat_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, float, A> m_stringfloat_end() const;
public:
	void clear_m_stringfloat();
	void release_m_stringfloat();
public:
	bool has_m_stringfloat() const;
private:
	void set_has_m_stringfloat();
	void clear_has_m_stringfloat();
private:
	common::miniproto::Map<common::miniproto::String<A>, float, A> m_stringfloat_;

public:
	void add_m_int32double(const common::miniproto::int32& key, const double& value);
	void add_m_int32double(common::miniproto::int32&& key, const double& value);
	void add_m_int32double(const common::miniproto::int32& key, double&& value);
	void add_m_int32double(common::miniproto::int32&& key, double&& value);
	void remove_m_int32double(const common::miniproto::int32& key);
public:
	size_t m_int32double_size() const;
	const double* find_m_int32double(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, double, A> m_int32double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, double, A> m_int32double_end() const;
public:
	void clear_m_int32double();
	void release_m_int32double();
public:
	bool has_m_int32double() const;
private:
	void set_has_m_int32double();
	void clear_has_m_int32double();
private:
	common::miniproto::Map<common::miniproto::int32, double, A> m_int32double_;

public:
	void add_m_sint32double(const common::miniproto::int32& key, const double& value);
	void add_m_sint32double(common::miniproto::int32&& key, const double& value);
	void add_m_sint32double(const common::miniproto::int32& key, double&& value);
	void add_m_sint32double(common::miniproto::int32&& key, double&& value);
	void remove_m_sint32double(const common::miniproto::int32& key);
public:
	size_t m_sint32double_size() const;
	const double* find_m_sint32double(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, double, A> m_sint32double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, double, A> m_sint32double_end() const;
public:
	void clear_m_sint32double();
	void release_m_sint32double();
public:
	bool has_m_sint32double() const;
private:
	void set_has_m_sint32double();
	void clear_has_m_sint32double();
private:
	common::miniproto::Map<common::miniproto::int32, double, A> m_sint32double_;

public:
	void add_m_uint32double(const common::miniproto::uint32& key, const double& value);
	void add_m_uint32double(common::miniproto::uint32&& key, const double& value);
	void add_m_uint32double(const common::miniproto::uint32& key, double&& value);
	void add_m_uint32double(common::miniproto::uint32&& key, double&& value);
	void remove_m_uint32double(const common::miniproto::uint32& key);
public:
	size_t m_uint32double_size() const;
	const double* find_m_uint32double(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, double, A> m_uint32double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, double, A> m_uint32double_end() const;
public:
	void clear_m_uint32double();
	void release_m_uint32double();
public:
	bool has_m_uint32double() const;
private:
	void set_has_m_uint32double();
	void clear_has_m_uint32double();
private:
	common::miniproto::Map<common::miniproto::uint32, double, A> m_uint32double_;

public:
	void add_m_int64double(const common::miniproto::int64& key, const double& value);
	void add_m_int64double(common::miniproto::int64&& key, const double& value);
	void add_m_int64double(const common::miniproto::int64& key, double&& value);
	void add_m_int64double(common::miniproto::int64&& key, double&& value);
	void remove_m_int64double(const common::miniproto::int64& key);
public:
	size_t m_int64double_size() const;
	const double* find_m_int64double(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, double, A> m_int64double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, double, A> m_int64double_end() const;
public:
	void clear_m_int64double();
	void release_m_int64double();
public:
	bool has_m_int64double() const;
private:
	void set_has_m_int64double();
	void clear_has_m_int64double();
private:
	common::miniproto::Map<common::miniproto::int64, double, A> m_int64double_;

public:
	void add_m_sint64double(const common::miniproto::int64& key, const double& value);
	void add_m_sint64double(common::miniproto::int64&& key, const double& value);
	void add_m_sint64double(const common::miniproto::int64& key, double&& value);
	void add_m_sint64double(common::miniproto::int64&& key, double&& value);
	void remove_m_sint64double(const common::miniproto::int64& key);
public:
	size_t m_sint64double_size() const;
	const double* find_m_sint64double(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, double, A> m_sint64double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, double, A> m_sint64double_end() const;
public:
	void clear_m_sint64double();
	void release_m_sint64double();
public:
	bool has_m_sint64double() const;
private:
	void set_has_m_sint64double();
	void clear_has_m_sint64double();
private:
	common::miniproto::Map<common::miniproto::int64, double, A> m_sint64double_;

public:
	void add_m_uint64double(const common::miniproto::uint64& key, const double& value);
	void add_m_uint64double(common::miniproto::uint64&& key, const double& value);
	void add_m_uint64double(const common::miniproto::uint64& key, double&& value);
	void add_m_uint64double(common::miniproto::uint64&& key, double&& value);
	void remove_m_uint64double(const common::miniproto::uint64& key);
public:
	size_t m_uint64double_size() const;
	const double* find_m_uint64double(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, double, A> m_uint64double_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, double, A> m_uint64double_end() const;
public:
	void clear_m_uint64double();
	void release_m_uint64double();
public:
	bool has_m_uint64double() const;
private:
	void set_has_m_uint64double();
	void clear_has_m_uint64double();
private:
	common::miniproto::Map<common::miniproto::uint64, double, A> m_uint64double_;

public:
	void add_m_stringdouble(const common::miniproto::String<A>& key, const double& value);
	void add_m_stringdouble(common::miniproto::String<A>&& key, const double& value);
	void add_m_stringdouble(const common::miniproto::String<A>& key, double&& value);
	void add_m_stringdouble(common::miniproto::String<A>&& key, double&& value);
	void add_m_stringdouble(const char* key,                 const double& value);
	void add_m_stringdouble(const char* key,                       double&& value);
	void add_m_stringdouble(const char* key, size_t keySize, const double& value);
	void add_m_stringdouble(const char* key, size_t keySize,       double&& value);
	void remove_m_stringdouble(const common::miniproto::String<A>& key);
	void remove_m_stringdouble(const char* key);
	void remove_m_stringdouble(const char* key, size_t keySize);
public:
	size_t m_stringdouble_size() const;
	const double* find_m_stringdouble(const common::miniproto::String<A>& key) const;
	const double* find_m_stringdouble(const char* key) const;
	const double* find_m_stringdouble(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, double, A> m_stringdouble_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, double, A> m_stringdouble_end() const;
public:
	void clear_m_stringdouble();
	void release_m_stringdouble();
public:
	bool has_m_stringdouble() const;
private:
	void set_has_m_stringdouble();
	void clear_has_m_stringdouble();
private:
	common::miniproto::Map<common::miniproto::String<A>, double, A> m_stringdouble_;

public:
	void add_m_int32enum(const common::miniproto::int32& key, const common::proto1::EnumTest& value);
	void add_m_int32enum(common::miniproto::int32&& key, const common::proto1::EnumTest& value);
	void add_m_int32enum(const common::miniproto::int32& key, common::proto1::EnumTest&& value);
	void add_m_int32enum(common::miniproto::int32&& key, common::proto1::EnumTest&& value);
	void remove_m_int32enum(const common::miniproto::int32& key);
public:
	size_t m_int32enum_size() const;
	const common::proto1::EnumTest* find_m_int32enum(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> m_int32enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> m_int32enum_end() const;
public:
	void clear_m_int32enum();
	void release_m_int32enum();
public:
	bool has_m_int32enum() const;
private:
	void set_has_m_int32enum();
	void clear_has_m_int32enum();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto1::EnumTest, A> m_int32enum_;

public:
	void add_m_sint32enum(const common::miniproto::int32& key, const common::proto1::EnumTest& value);
	void add_m_sint32enum(common::miniproto::int32&& key, const common::proto1::EnumTest& value);
	void add_m_sint32enum(const common::miniproto::int32& key, common::proto1::EnumTest&& value);
	void add_m_sint32enum(common::miniproto::int32&& key, common::proto1::EnumTest&& value);
	void remove_m_sint32enum(const common::miniproto::int32& key);
public:
	size_t m_sint32enum_size() const;
	const common::proto1::EnumTest* find_m_sint32enum(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> m_sint32enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> m_sint32enum_end() const;
public:
	void clear_m_sint32enum();
	void release_m_sint32enum();
public:
	bool has_m_sint32enum() const;
private:
	void set_has_m_sint32enum();
	void clear_has_m_sint32enum();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto1::EnumTest, A> m_sint32enum_;

public:
	void add_m_uint32enum(const common::miniproto::uint32& key, const common::proto1::EnumTest& value);
	void add_m_uint32enum(common::miniproto::uint32&& key, const common::proto1::EnumTest& value);
	void add_m_uint32enum(const common::miniproto::uint32& key, common::proto1::EnumTest&& value);
	void add_m_uint32enum(common::miniproto::uint32&& key, common::proto1::EnumTest&& value);
	void remove_m_uint32enum(const common::miniproto::uint32& key);
public:
	size_t m_uint32enum_size() const;
	const common::proto1::EnumTest* find_m_uint32enum(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::proto1::EnumTest, A> m_uint32enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::proto1::EnumTest, A> m_uint32enum_end() const;
public:
	void clear_m_uint32enum();
	void release_m_uint32enum();
public:
	bool has_m_uint32enum() const;
private:
	void set_has_m_uint32enum();
	void clear_has_m_uint32enum();
private:
	common::miniproto::Map<common::miniproto::uint32, common::proto1::EnumTest, A> m_uint32enum_;

public:
	void add_m_int64enum(const common::miniproto::int64& key, const common::proto1::EnumTest& value);
	void add_m_int64enum(common::miniproto::int64&& key, const common::proto1::EnumTest& value);
	void add_m_int64enum(const common::miniproto::int64& key, common::proto1::EnumTest&& value);
	void add_m_int64enum(common::miniproto::int64&& key, common::proto1::EnumTest&& value);
	void remove_m_int64enum(const common::miniproto::int64& key);
public:
	size_t m_int64enum_size() const;
	const common::proto1::EnumTest* find_m_int64enum(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> m_int64enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> m_int64enum_end() const;
public:
	void clear_m_int64enum();
	void release_m_int64enum();
public:
	bool has_m_int64enum() const;
private:
	void set_has_m_int64enum();
	void clear_has_m_int64enum();
private:
	common::miniproto::Map<common::miniproto::int64, common::proto1::EnumTest, A> m_int64enum_;

public:
	void add_m_sint64enum(const common::miniproto::int64& key, const common::proto1::EnumTest& value);
	void add_m_sint64enum(common::miniproto::int64&& key, const common::proto1::EnumTest& value);
	void add_m_sint64enum(const common::miniproto::int64& key, common::proto1::EnumTest&& value);
	void add_m_sint64enum(common::miniproto::int64&& key, common::proto1::EnumTest&& value);
	void remove_m_sint64enum(const common::miniproto::int64& key);
public:
	size_t m_sint64enum_size() const;
	const common::proto1::EnumTest* find_m_sint64enum(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> m_sint64enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> m_sint64enum_end() const;
public:
	void clear_m_sint64enum();
	void release_m_sint64enum();
public:
	bool has_m_sint64enum() const;
private:
	void set_has_m_sint64enum();
	void clear_has_m_sint64enum();
private:
	common::miniproto::Map<common::miniproto::int64, common::proto1::EnumTest, A> m_sint64enum_;

public:
	void add_m_uint64enum(const common::miniproto::uint64& key, const common::proto1::EnumTest& value);
	void add_m_uint64enum(common::miniproto::uint64&& key, const common::proto1::EnumTest& value);
	void add_m_uint64enum(const common::miniproto::uint64& key, common::proto1::EnumTest&& value);
	void add_m_uint64enum(common::miniproto::uint64&& key, common::proto1::EnumTest&& value);
	void remove_m_uint64enum(const common::miniproto::uint64& key);
public:
	size_t m_uint64enum_size() const;
	const common::proto1::EnumTest* find_m_uint64enum(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::proto1::EnumTest, A> m_uint64enum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::proto1::EnumTest, A> m_uint64enum_end() const;
public:
	void clear_m_uint64enum();
	void release_m_uint64enum();
public:
	bool has_m_uint64enum() const;
private:
	void set_has_m_uint64enum();
	void clear_has_m_uint64enum();
private:
	common::miniproto::Map<common::miniproto::uint64, common::proto1::EnumTest, A> m_uint64enum_;

public:
	void add_m_stringenum(const common::miniproto::String<A>& key, const common::proto1::EnumTest& value);
	void add_m_stringenum(common::miniproto::String<A>&& key, const common::proto1::EnumTest& value);
	void add_m_stringenum(const common::miniproto::String<A>& key, common::proto1::EnumTest&& value);
	void add_m_stringenum(common::miniproto::String<A>&& key, common::proto1::EnumTest&& value);
	void add_m_stringenum(const char* key,                 const common::proto1::EnumTest& value);
	void add_m_stringenum(const char* key,                       common::proto1::EnumTest&& value);
	void add_m_stringenum(const char* key, size_t keySize, const common::proto1::EnumTest& value);
	void add_m_stringenum(const char* key, size_t keySize,       common::proto1::EnumTest&& value);
	void remove_m_stringenum(const common::miniproto::String<A>& key);
	void remove_m_stringenum(const char* key);
	void remove_m_stringenum(const char* key, size_t keySize);
public:
	size_t m_stringenum_size() const;
	const common::proto1::EnumTest* find_m_stringenum(const common::miniproto::String<A>& key) const;
	const common::proto1::EnumTest* find_m_stringenum(const char* key) const;
	const common::proto1::EnumTest* find_m_stringenum(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::proto1::EnumTest, A> m_stringenum_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::proto1::EnumTest, A> m_stringenum_end() const;
public:
	void clear_m_stringenum();
	void release_m_stringenum();
public:
	bool has_m_stringenum() const;
private:
	void set_has_m_stringenum();
	void clear_has_m_stringenum();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::proto1::EnumTest, A> m_stringenum_;

public:
	void add_m_int32string(const common::miniproto::int32& key, const common::miniproto::String<A>& value);
	void add_m_int32string(common::miniproto::int32&& key, const common::miniproto::String<A>& value);
	void add_m_int32string(const common::miniproto::int32& key, common::miniproto::String<A>&& value);
	void add_m_int32string(common::miniproto::int32&& key, common::miniproto::String<A>&& value);
public:
	void add_m_int32string(const common::miniproto::int32& key, const char* value);
	void add_m_int32string(      common::miniproto::int32&& key, const char* value);
public:
	void add_m_int32string(const common::miniproto::int32& key,  const char* value, size_t valueSize);
	void add_m_int32string(      common::miniproto::int32&& key, const char* value, size_t valueSize);
	void remove_m_int32string(const common::miniproto::int32& key);
public:
	size_t m_int32string_size() const;
	const common::miniproto::String<A>* find_m_int32string(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> m_int32string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> m_int32string_end() const;
public:
	void clear_m_int32string();
	void release_m_int32string();
public:
	bool has_m_int32string() const;
private:
	void set_has_m_int32string();
	void clear_has_m_int32string();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::String<A>, A> m_int32string_;

public:
	void add_m_sint32string(const common::miniproto::int32& key, const common::miniproto::String<A>& value);
	void add_m_sint32string(common::miniproto::int32&& key, const common::miniproto::String<A>& value);
	void add_m_sint32string(const common::miniproto::int32& key, common::miniproto::String<A>&& value);
	void add_m_sint32string(common::miniproto::int32&& key, common::miniproto::String<A>&& value);
public:
	void add_m_sint32string(const common::miniproto::int32& key, const char* value);
	void add_m_sint32string(      common::miniproto::int32&& key, const char* value);
public:
	void add_m_sint32string(const common::miniproto::int32& key,  const char* value, size_t valueSize);
	void add_m_sint32string(      common::miniproto::int32&& key, const char* value, size_t valueSize);
	void remove_m_sint32string(const common::miniproto::int32& key);
public:
	size_t m_sint32string_size() const;
	const common::miniproto::String<A>* find_m_sint32string(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> m_sint32string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> m_sint32string_end() const;
public:
	void clear_m_sint32string();
	void release_m_sint32string();
public:
	bool has_m_sint32string() const;
private:
	void set_has_m_sint32string();
	void clear_has_m_sint32string();
private:
	common::miniproto::Map<common::miniproto::int32, common::miniproto::String<A>, A> m_sint32string_;

public:
	void add_m_uint32string(const common::miniproto::uint32& key, const common::miniproto::String<A>& value);
	void add_m_uint32string(common::miniproto::uint32&& key, const common::miniproto::String<A>& value);
	void add_m_uint32string(const common::miniproto::uint32& key, common::miniproto::String<A>&& value);
	void add_m_uint32string(common::miniproto::uint32&& key, common::miniproto::String<A>&& value);
public:
	void add_m_uint32string(const common::miniproto::uint32& key, const char* value);
	void add_m_uint32string(      common::miniproto::uint32&& key, const char* value);
public:
	void add_m_uint32string(const common::miniproto::uint32& key,  const char* value, size_t valueSize);
	void add_m_uint32string(      common::miniproto::uint32&& key, const char* value, size_t valueSize);
	void remove_m_uint32string(const common::miniproto::uint32& key);
public:
	size_t m_uint32string_size() const;
	const common::miniproto::String<A>* find_m_uint32string(const common::miniproto::uint32& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::String<A>, A> m_uint32string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::String<A>, A> m_uint32string_end() const;
public:
	void clear_m_uint32string();
	void release_m_uint32string();
public:
	bool has_m_uint32string() const;
private:
	void set_has_m_uint32string();
	void clear_has_m_uint32string();
private:
	common::miniproto::Map<common::miniproto::uint32, common::miniproto::String<A>, A> m_uint32string_;

public:
	void add_m_int64string(const common::miniproto::int64& key, const common::miniproto::String<A>& value);
	void add_m_int64string(common::miniproto::int64&& key, const common::miniproto::String<A>& value);
	void add_m_int64string(const common::miniproto::int64& key, common::miniproto::String<A>&& value);
	void add_m_int64string(common::miniproto::int64&& key, common::miniproto::String<A>&& value);
public:
	void add_m_int64string(const common::miniproto::int64& key, const char* value);
	void add_m_int64string(      common::miniproto::int64&& key, const char* value);
public:
	void add_m_int64string(const common::miniproto::int64& key,  const char* value, size_t valueSize);
	void add_m_int64string(      common::miniproto::int64&& key, const char* value, size_t valueSize);
	void remove_m_int64string(const common::miniproto::int64& key);
public:
	size_t m_int64string_size() const;
	const common::miniproto::String<A>* find_m_int64string(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> m_int64string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> m_int64string_end() const;
public:
	void clear_m_int64string();
	void release_m_int64string();
public:
	bool has_m_int64string() const;
private:
	void set_has_m_int64string();
	void clear_has_m_int64string();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::String<A>, A> m_int64string_;

public:
	void add_m_sint64string(const common::miniproto::int64& key, const common::miniproto::String<A>& value);
	void add_m_sint64string(common::miniproto::int64&& key, const common::miniproto::String<A>& value);
	void add_m_sint64string(const common::miniproto::int64& key, common::miniproto::String<A>&& value);
	void add_m_sint64string(common::miniproto::int64&& key, common::miniproto::String<A>&& value);
public:
	void add_m_sint64string(const common::miniproto::int64& key, const char* value);
	void add_m_sint64string(      common::miniproto::int64&& key, const char* value);
public:
	void add_m_sint64string(const common::miniproto::int64& key,  const char* value, size_t valueSize);
	void add_m_sint64string(      common::miniproto::int64&& key, const char* value, size_t valueSize);
	void remove_m_sint64string(const common::miniproto::int64& key);
public:
	size_t m_sint64string_size() const;
	const common::miniproto::String<A>* find_m_sint64string(const common::miniproto::int64& key) const;
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> m_sint64string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> m_sint64string_end() const;
public:
	void clear_m_sint64string();
	void release_m_sint64string();
public:
	bool has_m_sint64string() const;
private:
	void set_has_m_sint64string();
	void clear_has_m_sint64string();
private:
	common::miniproto::Map<common::miniproto::int64, common::miniproto::String<A>, A> m_sint64string_;

public:
	void add_m_uint64string(const common::miniproto::uint64& key, const common::miniproto::String<A>& value);
	void add_m_uint64string(common::miniproto::uint64&& key, const common::miniproto::String<A>& value);
	void add_m_uint64string(const common::miniproto::uint64& key, common::miniproto::String<A>&& value);
	void add_m_uint64string(common::miniproto::uint64&& key, common::miniproto::String<A>&& value);
public:
	void add_m_uint64string(const common::miniproto::uint64& key, const char* value);
	void add_m_uint64string(      common::miniproto::uint64&& key, const char* value);
public:
	void add_m_uint64string(const common::miniproto::uint64& key,  const char* value, size_t valueSize);
	void add_m_uint64string(      common::miniproto::uint64&& key, const char* value, size_t valueSize);
	void remove_m_uint64string(const common::miniproto::uint64& key);
public:
	size_t m_uint64string_size() const;
	const common::miniproto::String<A>* find_m_uint64string(const common::miniproto::uint64& key) const;
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::String<A>, A> m_uint64string_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::String<A>, A> m_uint64string_end() const;
public:
	void clear_m_uint64string();
	void release_m_uint64string();
public:
	bool has_m_uint64string() const;
private:
	void set_has_m_uint64string();
	void clear_has_m_uint64string();
private:
	common::miniproto::Map<common::miniproto::uint64, common::miniproto::String<A>, A> m_uint64string_;

public:
	void add_m_stringstring(const common::miniproto::String<A>& key, const common::miniproto::String<A>& value);
	void add_m_stringstring(common::miniproto::String<A>&& key, const common::miniproto::String<A>& value);
	void add_m_stringstring(const common::miniproto::String<A>& key, common::miniproto::String<A>&& value);
	void add_m_stringstring(common::miniproto::String<A>&& key, common::miniproto::String<A>&& value);
	void add_m_stringstring(const char* key,                 const common::miniproto::String<A>& value);
	void add_m_stringstring(const char* key,                       common::miniproto::String<A>&& value);
	void add_m_stringstring(const char* key, size_t keySize, const common::miniproto::String<A>& value);
	void add_m_stringstring(const char* key, size_t keySize,       common::miniproto::String<A>&& value);
public:
	void add_m_stringstring(const common::miniproto::String<A>& key, const char* value);
	void add_m_stringstring(      common::miniproto::String<A>&& key, const char* value);
	void add_m_stringstring(const char* key,                 const char* value);
	void add_m_stringstring(const char* key, size_t keySize, const char* value);
public:
	void add_m_stringstring(const common::miniproto::String<A>& key,  const char* value, size_t valueSize);
	void add_m_stringstring(      common::miniproto::String<A>&& key, const char* value, size_t valueSize);
	void add_m_stringstring(const char* key,                 const char* value, size_t valueSize);
	void add_m_stringstring(const char* key, size_t keySize, const char* value, size_t valueSize);
	void remove_m_stringstring(const common::miniproto::String<A>& key);
	void remove_m_stringstring(const char* key);
	void remove_m_stringstring(const char* key, size_t keySize);
public:
	size_t m_stringstring_size() const;
	const common::miniproto::String<A>* find_m_stringstring(const common::miniproto::String<A>& key) const;
	const common::miniproto::String<A>* find_m_stringstring(const char* key) const;
	const common::miniproto::String<A>* find_m_stringstring(const char* key, size_t keySize) const;
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::String<A>, A> m_stringstring_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::String<A>, A> m_stringstring_end() const;
public:
	void clear_m_stringstring();
	void release_m_stringstring();
public:
	bool has_m_stringstring() const;
private:
	void set_has_m_stringstring();
	void clear_has_m_stringstring();
private:
	common::miniproto::Map<common::miniproto::String<A>, common::miniproto::String<A>, A> m_stringstring_;

private:
	common::miniproto::ProtoBitMap<77> m_bits;
};

template <template<typename> class A>
MsgTestMap<A>::MsgTestMap()
{
}

template <template<typename> class A>
MsgTestMap<A>::MsgTestMap(const MsgTestMap<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgTestMap<A>::MsgTestMap(MsgTestMap<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgTestMap<A>::~MsgTestMap()
{
}

template <template<typename> class A>
MsgTestMap<A>& MsgTestMap<A>::operator = (const MsgTestMap<A>& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_int32bool())
	{
		m_int32bool_ = other.m_int32bool_;
		set_has_m_int32bool();
	}
	if (other.has_m_sint32bool())
	{
		m_sint32bool_ = other.m_sint32bool_;
		set_has_m_sint32bool();
	}
	if (other.has_m_uint32bool())
	{
		m_uint32bool_ = other.m_uint32bool_;
		set_has_m_uint32bool();
	}
	if (other.has_m_int64bool())
	{
		m_int64bool_ = other.m_int64bool_;
		set_has_m_int64bool();
	}
	if (other.has_m_sint64bool())
	{
		m_sint64bool_ = other.m_sint64bool_;
		set_has_m_sint64bool();
	}
	if (other.has_m_uint64bool())
	{
		m_uint64bool_ = other.m_uint64bool_;
		set_has_m_uint64bool();
	}
	if (other.has_m_stringbool())
	{
		m_stringbool_ = other.m_stringbool_;
		set_has_m_stringbool();
	}
	if (other.has_m_int32int32())
	{
		m_int32int32_ = other.m_int32int32_;
		set_has_m_int32int32();
	}
	if (other.has_m_sint32int32())
	{
		m_sint32int32_ = other.m_sint32int32_;
		set_has_m_sint32int32();
	}
	if (other.has_m_uint32int32())
	{
		m_uint32int32_ = other.m_uint32int32_;
		set_has_m_uint32int32();
	}
	if (other.has_m_int64int32())
	{
		m_int64int32_ = other.m_int64int32_;
		set_has_m_int64int32();
	}
	if (other.has_m_sint64int32())
	{
		m_sint64int32_ = other.m_sint64int32_;
		set_has_m_sint64int32();
	}
	if (other.has_m_uint64int32())
	{
		m_uint64int32_ = other.m_uint64int32_;
		set_has_m_uint64int32();
	}
	if (other.has_m_stringint32())
	{
		m_stringint32_ = other.m_stringint32_;
		set_has_m_stringint32();
	}
	if (other.has_m_int32sint32())
	{
		m_int32sint32_ = other.m_int32sint32_;
		set_has_m_int32sint32();
	}
	if (other.has_m_sint32sint32())
	{
		m_sint32sint32_ = other.m_sint32sint32_;
		set_has_m_sint32sint32();
	}
	if (other.has_m_uint32sint32())
	{
		m_uint32sint32_ = other.m_uint32sint32_;
		set_has_m_uint32sint32();
	}
	if (other.has_m_int64sint32())
	{
		m_int64sint32_ = other.m_int64sint32_;
		set_has_m_int64sint32();
	}
	if (other.has_m_sint64sint32())
	{
		m_sint64sint32_ = other.m_sint64sint32_;
		set_has_m_sint64sint32();
	}
	if (other.has_m_uint64sint32())
	{
		m_uint64sint32_ = other.m_uint64sint32_;
		set_has_m_uint64sint32();
	}
	if (other.has_m_stringsint32())
	{
		m_stringsint32_ = other.m_stringsint32_;
		set_has_m_stringsint32();
	}
	if (other.has_m_int32uint32())
	{
		m_int32uint32_ = other.m_int32uint32_;
		set_has_m_int32uint32();
	}
	if (other.has_m_sint32uint32())
	{
		m_sint32uint32_ = other.m_sint32uint32_;
		set_has_m_sint32uint32();
	}
	if (other.has_m_uint32uint32())
	{
		m_uint32uint32_ = other.m_uint32uint32_;
		set_has_m_uint32uint32();
	}
	if (other.has_m_int64uint32())
	{
		m_int64uint32_ = other.m_int64uint32_;
		set_has_m_int64uint32();
	}
	if (other.has_m_sint64uint32())
	{
		m_sint64uint32_ = other.m_sint64uint32_;
		set_has_m_sint64uint32();
	}
	if (other.has_m_uint64uint32())
	{
		m_uint64uint32_ = other.m_uint64uint32_;
		set_has_m_uint64uint32();
	}
	if (other.has_m_stringuint32())
	{
		m_stringuint32_ = other.m_stringuint32_;
		set_has_m_stringuint32();
	}
	if (other.has_m_int32int64())
	{
		m_int32int64_ = other.m_int32int64_;
		set_has_m_int32int64();
	}
	if (other.has_m_sint32int64())
	{
		m_sint32int64_ = other.m_sint32int64_;
		set_has_m_sint32int64();
	}
	if (other.has_m_uint32int64())
	{
		m_uint32int64_ = other.m_uint32int64_;
		set_has_m_uint32int64();
	}
	if (other.has_m_int64int64())
	{
		m_int64int64_ = other.m_int64int64_;
		set_has_m_int64int64();
	}
	if (other.has_m_sint64int64())
	{
		m_sint64int64_ = other.m_sint64int64_;
		set_has_m_sint64int64();
	}
	if (other.has_m_uint64int64())
	{
		m_uint64int64_ = other.m_uint64int64_;
		set_has_m_uint64int64();
	}
	if (other.has_m_stringint64())
	{
		m_stringint64_ = other.m_stringint64_;
		set_has_m_stringint64();
	}
	if (other.has_m_int32sint64())
	{
		m_int32sint64_ = other.m_int32sint64_;
		set_has_m_int32sint64();
	}
	if (other.has_m_sint32sint64())
	{
		m_sint32sint64_ = other.m_sint32sint64_;
		set_has_m_sint32sint64();
	}
	if (other.has_m_uint32sint64())
	{
		m_uint32sint64_ = other.m_uint32sint64_;
		set_has_m_uint32sint64();
	}
	if (other.has_m_int64sint64())
	{
		m_int64sint64_ = other.m_int64sint64_;
		set_has_m_int64sint64();
	}
	if (other.has_m_sint64sint64())
	{
		m_sint64sint64_ = other.m_sint64sint64_;
		set_has_m_sint64sint64();
	}
	if (other.has_m_uint64sint64())
	{
		m_uint64sint64_ = other.m_uint64sint64_;
		set_has_m_uint64sint64();
	}
	if (other.has_m_stringsint64())
	{
		m_stringsint64_ = other.m_stringsint64_;
		set_has_m_stringsint64();
	}
	if (other.has_m_int32uint64())
	{
		m_int32uint64_ = other.m_int32uint64_;
		set_has_m_int32uint64();
	}
	if (other.has_m_sint32uint64())
	{
		m_sint32uint64_ = other.m_sint32uint64_;
		set_has_m_sint32uint64();
	}
	if (other.has_m_uint32uint64())
	{
		m_uint32uint64_ = other.m_uint32uint64_;
		set_has_m_uint32uint64();
	}
	if (other.has_m_int64uint64())
	{
		m_int64uint64_ = other.m_int64uint64_;
		set_has_m_int64uint64();
	}
	if (other.has_m_sint64uint64())
	{
		m_sint64uint64_ = other.m_sint64uint64_;
		set_has_m_sint64uint64();
	}
	if (other.has_m_uint64uint64())
	{
		m_uint64uint64_ = other.m_uint64uint64_;
		set_has_m_uint64uint64();
	}
	if (other.has_m_stringuint64())
	{
		m_stringuint64_ = other.m_stringuint64_;
		set_has_m_stringuint64();
	}
	if (other.has_m_int32float())
	{
		m_int32float_ = other.m_int32float_;
		set_has_m_int32float();
	}
	if (other.has_m_sint32float())
	{
		m_sint32float_ = other.m_sint32float_;
		set_has_m_sint32float();
	}
	if (other.has_m_uint32float())
	{
		m_uint32float_ = other.m_uint32float_;
		set_has_m_uint32float();
	}
	if (other.has_m_int64float())
	{
		m_int64float_ = other.m_int64float_;
		set_has_m_int64float();
	}
	if (other.has_m_sint64float())
	{
		m_sint64float_ = other.m_sint64float_;
		set_has_m_sint64float();
	}
	if (other.has_m_uint64float())
	{
		m_uint64float_ = other.m_uint64float_;
		set_has_m_uint64float();
	}
	if (other.has_m_stringfloat())
	{
		m_stringfloat_ = other.m_stringfloat_;
		set_has_m_stringfloat();
	}
	if (other.has_m_int32double())
	{
		m_int32double_ = other.m_int32double_;
		set_has_m_int32double();
	}
	if (other.has_m_sint32double())
	{
		m_sint32double_ = other.m_sint32double_;
		set_has_m_sint32double();
	}
	if (other.has_m_uint32double())
	{
		m_uint32double_ = other.m_uint32double_;
		set_has_m_uint32double();
	}
	if (other.has_m_int64double())
	{
		m_int64double_ = other.m_int64double_;
		set_has_m_int64double();
	}
	if (other.has_m_sint64double())
	{
		m_sint64double_ = other.m_sint64double_;
		set_has_m_sint64double();
	}
	if (other.has_m_uint64double())
	{
		m_uint64double_ = other.m_uint64double_;
		set_has_m_uint64double();
	}
	if (other.has_m_stringdouble())
	{
		m_stringdouble_ = other.m_stringdouble_;
		set_has_m_stringdouble();
	}
	if (other.has_m_int32enum())
	{
		m_int32enum_ = other.m_int32enum_;
		set_has_m_int32enum();
	}
	if (other.has_m_sint32enum())
	{
		m_sint32enum_ = other.m_sint32enum_;
		set_has_m_sint32enum();
	}
	if (other.has_m_uint32enum())
	{
		m_uint32enum_ = other.m_uint32enum_;
		set_has_m_uint32enum();
	}
	if (other.has_m_int64enum())
	{
		m_int64enum_ = other.m_int64enum_;
		set_has_m_int64enum();
	}
	if (other.has_m_sint64enum())
	{
		m_sint64enum_ = other.m_sint64enum_;
		set_has_m_sint64enum();
	}
	if (other.has_m_uint64enum())
	{
		m_uint64enum_ = other.m_uint64enum_;
		set_has_m_uint64enum();
	}
	if (other.has_m_stringenum())
	{
		m_stringenum_ = other.m_stringenum_;
		set_has_m_stringenum();
	}
	if (other.has_m_int32string())
	{
		m_int32string_ = other.m_int32string_;
		set_has_m_int32string();
	}
	if (other.has_m_sint32string())
	{
		m_sint32string_ = other.m_sint32string_;
		set_has_m_sint32string();
	}
	if (other.has_m_uint32string())
	{
		m_uint32string_ = other.m_uint32string_;
		set_has_m_uint32string();
	}
	if (other.has_m_int64string())
	{
		m_int64string_ = other.m_int64string_;
		set_has_m_int64string();
	}
	if (other.has_m_sint64string())
	{
		m_sint64string_ = other.m_sint64string_;
		set_has_m_sint64string();
	}
	if (other.has_m_uint64string())
	{
		m_uint64string_ = other.m_uint64string_;
		set_has_m_uint64string();
	}
	if (other.has_m_stringstring())
	{
		m_stringstring_ = other.m_stringstring_;
		set_has_m_stringstring();
	}

	return *this;
}

template <template<typename> class A>
MsgTestMap<A>& MsgTestMap<A>::operator = (MsgTestMap<A>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_int32bool())
	{
		m_int32bool_ = std::move(other.m_int32bool_);
		other.clear_has_m_int32bool();
		set_has_m_int32bool();
	}
	if (other.has_m_sint32bool())
	{
		m_sint32bool_ = std::move(other.m_sint32bool_);
		other.clear_has_m_sint32bool();
		set_has_m_sint32bool();
	}
	if (other.has_m_uint32bool())
	{
		m_uint32bool_ = std::move(other.m_uint32bool_);
		other.clear_has_m_uint32bool();
		set_has_m_uint32bool();
	}
	if (other.has_m_int64bool())
	{
		m_int64bool_ = std::move(other.m_int64bool_);
		other.clear_has_m_int64bool();
		set_has_m_int64bool();
	}
	if (other.has_m_sint64bool())
	{
		m_sint64bool_ = std::move(other.m_sint64bool_);
		other.clear_has_m_sint64bool();
		set_has_m_sint64bool();
	}
	if (other.has_m_uint64bool())
	{
		m_uint64bool_ = std::move(other.m_uint64bool_);
		other.clear_has_m_uint64bool();
		set_has_m_uint64bool();
	}
	if (other.has_m_stringbool())
	{
		m_stringbool_ = std::move(other.m_stringbool_);
		other.clear_has_m_stringbool();
		set_has_m_stringbool();
	}
	if (other.has_m_int32int32())
	{
		m_int32int32_ = std::move(other.m_int32int32_);
		other.clear_has_m_int32int32();
		set_has_m_int32int32();
	}
	if (other.has_m_sint32int32())
	{
		m_sint32int32_ = std::move(other.m_sint32int32_);
		other.clear_has_m_sint32int32();
		set_has_m_sint32int32();
	}
	if (other.has_m_uint32int32())
	{
		m_uint32int32_ = std::move(other.m_uint32int32_);
		other.clear_has_m_uint32int32();
		set_has_m_uint32int32();
	}
	if (other.has_m_int64int32())
	{
		m_int64int32_ = std::move(other.m_int64int32_);
		other.clear_has_m_int64int32();
		set_has_m_int64int32();
	}
	if (other.has_m_sint64int32())
	{
		m_sint64int32_ = std::move(other.m_sint64int32_);
		other.clear_has_m_sint64int32();
		set_has_m_sint64int32();
	}
	if (other.has_m_uint64int32())
	{
		m_uint64int32_ = std::move(other.m_uint64int32_);
		other.clear_has_m_uint64int32();
		set_has_m_uint64int32();
	}
	if (other.has_m_stringint32())
	{
		m_stringint32_ = std::move(other.m_stringint32_);
		other.clear_has_m_stringint32();
		set_has_m_stringint32();
	}
	if (other.has_m_int32sint32())
	{
		m_int32sint32_ = std::move(other.m_int32sint32_);
		other.clear_has_m_int32sint32();
		set_has_m_int32sint32();
	}
	if (other.has_m_sint32sint32())
	{
		m_sint32sint32_ = std::move(other.m_sint32sint32_);
		other.clear_has_m_sint32sint32();
		set_has_m_sint32sint32();
	}
	if (other.has_m_uint32sint32())
	{
		m_uint32sint32_ = std::move(other.m_uint32sint32_);
		other.clear_has_m_uint32sint32();
		set_has_m_uint32sint32();
	}
	if (other.has_m_int64sint32())
	{
		m_int64sint32_ = std::move(other.m_int64sint32_);
		other.clear_has_m_int64sint32();
		set_has_m_int64sint32();
	}
	if (other.has_m_sint64sint32())
	{
		m_sint64sint32_ = std::move(other.m_sint64sint32_);
		other.clear_has_m_sint64sint32();
		set_has_m_sint64sint32();
	}
	if (other.has_m_uint64sint32())
	{
		m_uint64sint32_ = std::move(other.m_uint64sint32_);
		other.clear_has_m_uint64sint32();
		set_has_m_uint64sint32();
	}
	if (other.has_m_stringsint32())
	{
		m_stringsint32_ = std::move(other.m_stringsint32_);
		other.clear_has_m_stringsint32();
		set_has_m_stringsint32();
	}
	if (other.has_m_int32uint32())
	{
		m_int32uint32_ = std::move(other.m_int32uint32_);
		other.clear_has_m_int32uint32();
		set_has_m_int32uint32();
	}
	if (other.has_m_sint32uint32())
	{
		m_sint32uint32_ = std::move(other.m_sint32uint32_);
		other.clear_has_m_sint32uint32();
		set_has_m_sint32uint32();
	}
	if (other.has_m_uint32uint32())
	{
		m_uint32uint32_ = std::move(other.m_uint32uint32_);
		other.clear_has_m_uint32uint32();
		set_has_m_uint32uint32();
	}
	if (other.has_m_int64uint32())
	{
		m_int64uint32_ = std::move(other.m_int64uint32_);
		other.clear_has_m_int64uint32();
		set_has_m_int64uint32();
	}
	if (other.has_m_sint64uint32())
	{
		m_sint64uint32_ = std::move(other.m_sint64uint32_);
		other.clear_has_m_sint64uint32();
		set_has_m_sint64uint32();
	}
	if (other.has_m_uint64uint32())
	{
		m_uint64uint32_ = std::move(other.m_uint64uint32_);
		other.clear_has_m_uint64uint32();
		set_has_m_uint64uint32();
	}
	if (other.has_m_stringuint32())
	{
		m_stringuint32_ = std::move(other.m_stringuint32_);
		other.clear_has_m_stringuint32();
		set_has_m_stringuint32();
	}
	if (other.has_m_int32int64())
	{
		m_int32int64_ = std::move(other.m_int32int64_);
		other.clear_has_m_int32int64();
		set_has_m_int32int64();
	}
	if (other.has_m_sint32int64())
	{
		m_sint32int64_ = std::move(other.m_sint32int64_);
		other.clear_has_m_sint32int64();
		set_has_m_sint32int64();
	}
	if (other.has_m_uint32int64())
	{
		m_uint32int64_ = std::move(other.m_uint32int64_);
		other.clear_has_m_uint32int64();
		set_has_m_uint32int64();
	}
	if (other.has_m_int64int64())
	{
		m_int64int64_ = std::move(other.m_int64int64_);
		other.clear_has_m_int64int64();
		set_has_m_int64int64();
	}
	if (other.has_m_sint64int64())
	{
		m_sint64int64_ = std::move(other.m_sint64int64_);
		other.clear_has_m_sint64int64();
		set_has_m_sint64int64();
	}
	if (other.has_m_uint64int64())
	{
		m_uint64int64_ = std::move(other.m_uint64int64_);
		other.clear_has_m_uint64int64();
		set_has_m_uint64int64();
	}
	if (other.has_m_stringint64())
	{
		m_stringint64_ = std::move(other.m_stringint64_);
		other.clear_has_m_stringint64();
		set_has_m_stringint64();
	}
	if (other.has_m_int32sint64())
	{
		m_int32sint64_ = std::move(other.m_int32sint64_);
		other.clear_has_m_int32sint64();
		set_has_m_int32sint64();
	}
	if (other.has_m_sint32sint64())
	{
		m_sint32sint64_ = std::move(other.m_sint32sint64_);
		other.clear_has_m_sint32sint64();
		set_has_m_sint32sint64();
	}
	if (other.has_m_uint32sint64())
	{
		m_uint32sint64_ = std::move(other.m_uint32sint64_);
		other.clear_has_m_uint32sint64();
		set_has_m_uint32sint64();
	}
	if (other.has_m_int64sint64())
	{
		m_int64sint64_ = std::move(other.m_int64sint64_);
		other.clear_has_m_int64sint64();
		set_has_m_int64sint64();
	}
	if (other.has_m_sint64sint64())
	{
		m_sint64sint64_ = std::move(other.m_sint64sint64_);
		other.clear_has_m_sint64sint64();
		set_has_m_sint64sint64();
	}
	if (other.has_m_uint64sint64())
	{
		m_uint64sint64_ = std::move(other.m_uint64sint64_);
		other.clear_has_m_uint64sint64();
		set_has_m_uint64sint64();
	}
	if (other.has_m_stringsint64())
	{
		m_stringsint64_ = std::move(other.m_stringsint64_);
		other.clear_has_m_stringsint64();
		set_has_m_stringsint64();
	}
	if (other.has_m_int32uint64())
	{
		m_int32uint64_ = std::move(other.m_int32uint64_);
		other.clear_has_m_int32uint64();
		set_has_m_int32uint64();
	}
	if (other.has_m_sint32uint64())
	{
		m_sint32uint64_ = std::move(other.m_sint32uint64_);
		other.clear_has_m_sint32uint64();
		set_has_m_sint32uint64();
	}
	if (other.has_m_uint32uint64())
	{
		m_uint32uint64_ = std::move(other.m_uint32uint64_);
		other.clear_has_m_uint32uint64();
		set_has_m_uint32uint64();
	}
	if (other.has_m_int64uint64())
	{
		m_int64uint64_ = std::move(other.m_int64uint64_);
		other.clear_has_m_int64uint64();
		set_has_m_int64uint64();
	}
	if (other.has_m_sint64uint64())
	{
		m_sint64uint64_ = std::move(other.m_sint64uint64_);
		other.clear_has_m_sint64uint64();
		set_has_m_sint64uint64();
	}
	if (other.has_m_uint64uint64())
	{
		m_uint64uint64_ = std::move(other.m_uint64uint64_);
		other.clear_has_m_uint64uint64();
		set_has_m_uint64uint64();
	}
	if (other.has_m_stringuint64())
	{
		m_stringuint64_ = std::move(other.m_stringuint64_);
		other.clear_has_m_stringuint64();
		set_has_m_stringuint64();
	}
	if (other.has_m_int32float())
	{
		m_int32float_ = std::move(other.m_int32float_);
		other.clear_has_m_int32float();
		set_has_m_int32float();
	}
	if (other.has_m_sint32float())
	{
		m_sint32float_ = std::move(other.m_sint32float_);
		other.clear_has_m_sint32float();
		set_has_m_sint32float();
	}
	if (other.has_m_uint32float())
	{
		m_uint32float_ = std::move(other.m_uint32float_);
		other.clear_has_m_uint32float();
		set_has_m_uint32float();
	}
	if (other.has_m_int64float())
	{
		m_int64float_ = std::move(other.m_int64float_);
		other.clear_has_m_int64float();
		set_has_m_int64float();
	}
	if (other.has_m_sint64float())
	{
		m_sint64float_ = std::move(other.m_sint64float_);
		other.clear_has_m_sint64float();
		set_has_m_sint64float();
	}
	if (other.has_m_uint64float())
	{
		m_uint64float_ = std::move(other.m_uint64float_);
		other.clear_has_m_uint64float();
		set_has_m_uint64float();
	}
	if (other.has_m_stringfloat())
	{
		m_stringfloat_ = std::move(other.m_stringfloat_);
		other.clear_has_m_stringfloat();
		set_has_m_stringfloat();
	}
	if (other.has_m_int32double())
	{
		m_int32double_ = std::move(other.m_int32double_);
		other.clear_has_m_int32double();
		set_has_m_int32double();
	}
	if (other.has_m_sint32double())
	{
		m_sint32double_ = std::move(other.m_sint32double_);
		other.clear_has_m_sint32double();
		set_has_m_sint32double();
	}
	if (other.has_m_uint32double())
	{
		m_uint32double_ = std::move(other.m_uint32double_);
		other.clear_has_m_uint32double();
		set_has_m_uint32double();
	}
	if (other.has_m_int64double())
	{
		m_int64double_ = std::move(other.m_int64double_);
		other.clear_has_m_int64double();
		set_has_m_int64double();
	}
	if (other.has_m_sint64double())
	{
		m_sint64double_ = std::move(other.m_sint64double_);
		other.clear_has_m_sint64double();
		set_has_m_sint64double();
	}
	if (other.has_m_uint64double())
	{
		m_uint64double_ = std::move(other.m_uint64double_);
		other.clear_has_m_uint64double();
		set_has_m_uint64double();
	}
	if (other.has_m_stringdouble())
	{
		m_stringdouble_ = std::move(other.m_stringdouble_);
		other.clear_has_m_stringdouble();
		set_has_m_stringdouble();
	}
	if (other.has_m_int32enum())
	{
		m_int32enum_ = std::move(other.m_int32enum_);
		other.clear_has_m_int32enum();
		set_has_m_int32enum();
	}
	if (other.has_m_sint32enum())
	{
		m_sint32enum_ = std::move(other.m_sint32enum_);
		other.clear_has_m_sint32enum();
		set_has_m_sint32enum();
	}
	if (other.has_m_uint32enum())
	{
		m_uint32enum_ = std::move(other.m_uint32enum_);
		other.clear_has_m_uint32enum();
		set_has_m_uint32enum();
	}
	if (other.has_m_int64enum())
	{
		m_int64enum_ = std::move(other.m_int64enum_);
		other.clear_has_m_int64enum();
		set_has_m_int64enum();
	}
	if (other.has_m_sint64enum())
	{
		m_sint64enum_ = std::move(other.m_sint64enum_);
		other.clear_has_m_sint64enum();
		set_has_m_sint64enum();
	}
	if (other.has_m_uint64enum())
	{
		m_uint64enum_ = std::move(other.m_uint64enum_);
		other.clear_has_m_uint64enum();
		set_has_m_uint64enum();
	}
	if (other.has_m_stringenum())
	{
		m_stringenum_ = std::move(other.m_stringenum_);
		other.clear_has_m_stringenum();
		set_has_m_stringenum();
	}
	if (other.has_m_int32string())
	{
		m_int32string_ = std::move(other.m_int32string_);
		other.clear_has_m_int32string();
		set_has_m_int32string();
	}
	if (other.has_m_sint32string())
	{
		m_sint32string_ = std::move(other.m_sint32string_);
		other.clear_has_m_sint32string();
		set_has_m_sint32string();
	}
	if (other.has_m_uint32string())
	{
		m_uint32string_ = std::move(other.m_uint32string_);
		other.clear_has_m_uint32string();
		set_has_m_uint32string();
	}
	if (other.has_m_int64string())
	{
		m_int64string_ = std::move(other.m_int64string_);
		other.clear_has_m_int64string();
		set_has_m_int64string();
	}
	if (other.has_m_sint64string())
	{
		m_sint64string_ = std::move(other.m_sint64string_);
		other.clear_has_m_sint64string();
		set_has_m_sint64string();
	}
	if (other.has_m_uint64string())
	{
		m_uint64string_ = std::move(other.m_uint64string_);
		other.clear_has_m_uint64string();
		set_has_m_uint64string();
	}
	if (other.has_m_stringstring())
	{
		m_stringstring_ = std::move(other.m_stringstring_);
		other.clear_has_m_stringstring();
		set_has_m_stringstring();
	}

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestMap<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(1, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32bool_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(2, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32bool_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(3, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32bool_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_int64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(4, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64bool_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(5, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64bool_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(6, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64bool_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_stringbool())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(7, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringbool_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(8, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32int32_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(9, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32int32_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(10, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32int32_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(11, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64int32_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(12, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64int32_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(13, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64int32_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_stringint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(14, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringint32_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(15, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32sint32_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(16, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32sint32_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(17, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32sint32_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(18, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64sint32_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(19, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64sint32_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(20, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64sint32_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_stringsint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(21, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringsint32_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(22, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32uint32_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(23, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32uint32_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(24, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32uint32_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(25, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64uint32_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(26, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64uint32_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(27, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64uint32_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_stringuint32())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(28, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringuint32_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(29, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32int64_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(30, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32int64_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(31, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32int64_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(32, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64int64_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(33, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64int64_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(34, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64int64_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_stringint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(35, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringint64_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(36, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32sint64_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(37, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32sint64_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(38, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32sint64_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(39, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64sint64_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(40, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64sint64_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(41, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64sint64_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_stringsint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(42, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringsint64_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(43, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32uint64_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(44, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32uint64_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(45, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32uint64_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(46, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64uint64_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(47, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64uint64_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(48, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64uint64_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_stringuint64())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(49, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringuint64_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int32float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(50, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32float_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(51, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32float_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(52, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32float_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int64float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(53, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64float_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(54, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64float_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(55, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64float_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_stringfloat())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(56, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringfloat_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int32double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(57, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32double_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(58, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32double_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(59, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32double_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int64double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(60, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64double_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(61, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64double_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(62, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64double_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_stringdouble())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(63, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringdouble_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(64, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32enum_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(65, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32enum_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(66, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32enum_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(67, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64enum_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(68, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64enum_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(69, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64enum_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_stringenum())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(70, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringenum_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int32string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(71, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int32string_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoString);
	}
	if (has_m_sint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(72, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint32string_, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_uint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(73, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint32string_, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_int64string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(74, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_int64string_, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoString);
	}
	if (has_m_sint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(75, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_sint64string_, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_uint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(76, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_uint64string_, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_stringstring())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(77, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_stringstring_, common::miniproto::CommonProtoString, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestMap<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32bool_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32bool_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32bool_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_int64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64bool_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64bool_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64bool_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_stringbool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringbool_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32int32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32int32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32int32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64int32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64int32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(13, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64int32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_stringint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(14, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(15, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32sint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(16, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32sint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(17, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32sint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(18, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64sint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(19, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64sint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(20, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64sint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_stringsint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(21, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringsint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(22, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32uint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(23, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32uint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(24, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32uint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(25, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64uint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(26, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64uint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(27, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64uint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_stringuint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(28, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringuint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(29, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32int64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(30, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32int64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(31, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32int64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(32, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64int64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(33, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64int64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(34, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64int64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_stringint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(35, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(36, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32sint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(37, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32sint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(38, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32sint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(39, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64sint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(40, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64sint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(41, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64sint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_stringsint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(42, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringsint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(43, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32uint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(44, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32uint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(45, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32uint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(46, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64uint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(47, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64uint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(48, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64uint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_stringuint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(49, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringuint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(50, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32float_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(51, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32float_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(52, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32float_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(53, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64float_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(54, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64float_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(55, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64float_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_stringfloat())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(56, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringfloat_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(57, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32double_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(58, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32double_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(59, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32double_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(60, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64double_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(61, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64double_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(62, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64double_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_stringdouble())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(63, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringdouble_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(64, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32enum_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(65, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32enum_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(66, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32enum_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(67, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64enum_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(68, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64enum_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(69, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64enum_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_stringenum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(70, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringenum_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(71, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32string_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoString);
	}
	if (has_m_sint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(72, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32string_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_uint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(73, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32string_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_int64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(74, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64string_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoString);
	}
	if (has_m_sint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(75, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64string_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_uint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(76, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64string_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_stringstring())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(77, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringstring_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoString);
	}

	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTestMap<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_int32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32bool_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32bool_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint32bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32bool_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoBool);
	}
	if (has_m_int64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64bool_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoBool);
	}
	if (has_m_sint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64bool_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_uint64bool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64bool_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoBool);
	}
	if (has_m_stringbool())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringbool_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoBool);
	}
	if (has_m_int32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32int32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32int32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint32int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32int32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64int32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_sint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64int32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_uint64int32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(13, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64int32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt32);
	}
	if (has_m_stringint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(14, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt32);
	}
	if (has_m_int32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(15, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32sint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(16, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32sint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint32sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(17, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32sint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(18, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64sint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_sint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(19, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64sint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_uint64sint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(20, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64sint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_stringsint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(21, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringsint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed32);
	}
	if (has_m_int32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(22, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32uint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(23, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32uint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint32uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(24, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32uint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(25, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64uint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_sint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(26, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64uint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_uint64uint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(27, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64uint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_stringuint32())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(28, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringuint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed32);
	}
	if (has_m_int32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(29, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32int64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(30, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32int64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint32int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(31, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32int64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(32, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64int64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_sint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(33, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64int64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_uint64int64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(34, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64int64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt64);
	}
	if (has_m_stringint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(35, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt64);
	}
	if (has_m_int32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(36, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32sint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(37, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32sint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint32sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(38, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32sint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(39, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64sint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_sint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(40, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64sint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_uint64sint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(41, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64sint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_stringsint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(42, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringsint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed64);
	}
	if (has_m_int32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(43, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32uint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(44, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32uint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint32uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(45, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32uint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(46, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64uint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_sint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(47, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64uint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_uint64uint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(48, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64uint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_stringuint64())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(49, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringuint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed64);
	}
	if (has_m_int32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(50, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32float_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(51, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32float_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint32float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(52, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32float_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(53, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64float_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_sint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(54, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64float_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_uint64float())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(55, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64float_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFloat);
	}
	if (has_m_stringfloat())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(56, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringfloat_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFloat);
	}
	if (has_m_int32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(57, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32double_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(58, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32double_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint32double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(59, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32double_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(60, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64double_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_sint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(61, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64double_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_uint64double())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(62, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64double_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoDouble);
	}
	if (has_m_stringdouble())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(63, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringdouble_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoDouble);
	}
	if (has_m_int32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(64, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32enum_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(65, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32enum_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint32enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(66, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32enum_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(67, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64enum_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_sint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(68, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64enum_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_uint64enum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(69, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64enum_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoEnum);
	}
	if (has_m_stringenum())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(70, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringenum_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoEnum);
	}
	if (has_m_int32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(71, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int32string_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoString);
	}
	if (has_m_sint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(72, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint32string_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_uint32string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(73, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint32string_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoString);
	}
	if (has_m_int64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(74, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_int64string_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoString);
	}
	if (has_m_sint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(75, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_sint64string_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_uint64string())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(76, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_uint64string_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoString);
	}
	if (has_m_stringstring())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(77, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_stringstring_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoString);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTestMap<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32bool_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoBool);
				set_has_m_int32bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32bool_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoBool);
				set_has_m_sint32bool();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32bool_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoBool);
				set_has_m_uint32bool();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64bool_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoBool);
				set_has_m_int64bool();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64bool_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoBool);
				set_has_m_sint64bool();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64bool_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoBool);
				set_has_m_uint64bool();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringbool_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoBool);
				set_has_m_stringbool();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32int32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt32);
				set_has_m_int32int32();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32int32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt32);
				set_has_m_sint32int32();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32int32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt32);
				set_has_m_uint32int32();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64int32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt32);
				set_has_m_int64int32();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64int32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt32);
				set_has_m_sint64int32();
			}
			break;
			case 13 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64int32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt32);
				set_has_m_uint64int32();
			}
			break;
			case 14 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt32);
				set_has_m_stringint32();
			}
			break;
			case 15 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32sint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed32);
				set_has_m_int32sint32();
			}
			break;
			case 16 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32sint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32sint32();
			}
			break;
			case 17 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32sint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed32);
				set_has_m_uint32sint32();
			}
			break;
			case 18 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64sint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed32);
				set_has_m_int64sint32();
			}
			break;
			case 19 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64sint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint64sint32();
			}
			break;
			case 20 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64sint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed32);
				set_has_m_uint64sint32();
			}
			break;
			case 21 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringsint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed32);
				set_has_m_stringsint32();
			}
			break;
			case 22 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32uint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed32);
				set_has_m_int32uint32();
			}
			break;
			case 23 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32uint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed32);
				set_has_m_sint32uint32();
			}
			break;
			case 24 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32uint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32uint32();
			}
			break;
			case 25 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64uint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed32);
				set_has_m_int64uint32();
			}
			break;
			case 26 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64uint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed32);
				set_has_m_sint64uint32();
			}
			break;
			case 27 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64uint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed32);
				set_has_m_uint64uint32();
			}
			break;
			case 28 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringuint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed32);
				set_has_m_stringuint32();
			}
			break;
			case 29 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32int64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt64);
				set_has_m_int32int64();
			}
			break;
			case 30 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32int64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt64);
				set_has_m_sint32int64();
			}
			break;
			case 31 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32int64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt64);
				set_has_m_uint32int64();
			}
			break;
			case 32 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64int64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt64);
				set_has_m_int64int64();
			}
			break;
			case 33 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64int64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt64);
				set_has_m_sint64int64();
			}
			break;
			case 34 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64int64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt64);
				set_has_m_uint64int64();
			}
			break;
			case 35 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt64);
				set_has_m_stringint64();
			}
			break;
			case 36 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32sint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed64);
				set_has_m_int32sint64();
			}
			break;
			case 37 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32sint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint32sint64();
			}
			break;
			case 38 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32sint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed64);
				set_has_m_uint32sint64();
			}
			break;
			case 39 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64sint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed64);
				set_has_m_int64sint64();
			}
			break;
			case 40 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64sint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64sint64();
			}
			break;
			case 41 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64sint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed64);
				set_has_m_uint64sint64();
			}
			break;
			case 42 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringsint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed64);
				set_has_m_stringsint64();
			}
			break;
			case 43 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32uint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed64);
				set_has_m_int32uint64();
			}
			break;
			case 44 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32uint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed64);
				set_has_m_sint32uint64();
			}
			break;
			case 45 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32uint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed64);
				set_has_m_uint32uint64();
			}
			break;
			case 46 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64uint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed64);
				set_has_m_int64uint64();
			}
			break;
			case 47 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64uint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed64);
				set_has_m_sint64uint64();
			}
			break;
			case 48 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64uint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64uint64();
			}
			break;
			case 49 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringuint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed64);
				set_has_m_stringuint64();
			}
			break;
			case 50 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32float_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFloat);
				set_has_m_int32float();
			}
			break;
			case 51 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32float_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFloat);
				set_has_m_sint32float();
			}
			break;
			case 52 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32float_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFloat);
				set_has_m_uint32float();
			}
			break;
			case 53 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64float_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFloat);
				set_has_m_int64float();
			}
			break;
			case 54 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64float_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFloat);
				set_has_m_sint64float();
			}
			break;
			case 55 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64float_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFloat);
				set_has_m_uint64float();
			}
			break;
			case 56 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringfloat_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFloat);
				set_has_m_stringfloat();
			}
			break;
			case 57 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32double_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoDouble);
				set_has_m_int32double();
			}
			break;
			case 58 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32double_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoDouble);
				set_has_m_sint32double();
			}
			break;
			case 59 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32double_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoDouble);
				set_has_m_uint32double();
			}
			break;
			case 60 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64double_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoDouble);
				set_has_m_int64double();
			}
			break;
			case 61 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64double_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoDouble);
				set_has_m_sint64double();
			}
			break;
			case 62 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64double_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoDouble);
				set_has_m_uint64double();
			}
			break;
			case 63 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringdouble_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoDouble);
				set_has_m_stringdouble();
			}
			break;
			case 64 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32enum_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoEnum);
				set_has_m_int32enum();
			}
			break;
			case 65 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32enum_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoEnum);
				set_has_m_sint32enum();
			}
			break;
			case 66 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32enum_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoEnum);
				set_has_m_uint32enum();
			}
			break;
			case 67 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64enum_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoEnum);
				set_has_m_int64enum();
			}
			break;
			case 68 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64enum_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoEnum);
				set_has_m_sint64enum();
			}
			break;
			case 69 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64enum_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoEnum);
				set_has_m_uint64enum();
			}
			break;
			case 70 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringenum_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoEnum);
				set_has_m_stringenum();
			}
			break;
			case 71 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32string_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoString);
				set_has_m_int32string();
			}
			break;
			case 72 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32string_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoString);
				set_has_m_sint32string();
			}
			break;
			case 73 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32string_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoString);
				set_has_m_uint32string();
			}
			break;
			case 74 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64string_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoString);
				set_has_m_int64string();
			}
			break;
			case 75 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64string_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoString);
				set_has_m_sint64string();
			}
			break;
			case 76 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64string_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoString);
				set_has_m_uint64string();
			}
			break;
			case 77 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringstring_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoString);
				set_has_m_stringstring();
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
common::miniproto::byte_size MsgTestMap<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32bool_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoBool);
				set_has_m_int32bool();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32bool_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoBool);
				set_has_m_sint32bool();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32bool_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoBool);
				set_has_m_uint32bool();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64bool_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoBool);
				set_has_m_int64bool();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64bool_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoBool);
				set_has_m_sint64bool();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64bool_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoBool);
				set_has_m_uint64bool();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringbool_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoBool);
				set_has_m_stringbool();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32int32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt32);
				set_has_m_int32int32();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32int32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt32);
				set_has_m_sint32int32();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32int32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt32);
				set_has_m_uint32int32();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64int32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt32);
				set_has_m_int64int32();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64int32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt32);
				set_has_m_sint64int32();
			}
			break;
			case 13 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64int32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt32);
				set_has_m_uint64int32();
			}
			break;
			case 14 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt32);
				set_has_m_stringint32();
			}
			break;
			case 15 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32sint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed32);
				set_has_m_int32sint32();
			}
			break;
			case 16 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32sint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint32sint32();
			}
			break;
			case 17 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32sint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed32);
				set_has_m_uint32sint32();
			}
			break;
			case 18 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64sint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed32);
				set_has_m_int64sint32();
			}
			break;
			case 19 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64sint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed32);
				set_has_m_sint64sint32();
			}
			break;
			case 20 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64sint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed32);
				set_has_m_uint64sint32();
			}
			break;
			case 21 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringsint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed32);
				set_has_m_stringsint32();
			}
			break;
			case 22 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32uint32_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed32);
				set_has_m_int32uint32();
			}
			break;
			case 23 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32uint32_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed32);
				set_has_m_sint32uint32();
			}
			break;
			case 24 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32uint32_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed32);
				set_has_m_uint32uint32();
			}
			break;
			case 25 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64uint32_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed32);
				set_has_m_int64uint32();
			}
			break;
			case 26 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64uint32_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed32);
				set_has_m_sint64uint32();
			}
			break;
			case 27 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64uint32_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed32);
				set_has_m_uint64uint32();
			}
			break;
			case 28 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringuint32_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed32);
				set_has_m_stringuint32();
			}
			break;
			case 29 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32int64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoInt64);
				set_has_m_int32int64();
			}
			break;
			case 30 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32int64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoInt64);
				set_has_m_sint32int64();
			}
			break;
			case 31 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32int64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoInt64);
				set_has_m_uint32int64();
			}
			break;
			case 32 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64int64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoInt64);
				set_has_m_int64int64();
			}
			break;
			case 33 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64int64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoInt64);
				set_has_m_sint64int64();
			}
			break;
			case 34 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64int64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoInt64);
				set_has_m_uint64int64();
			}
			break;
			case 35 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoInt64);
				set_has_m_stringint64();
			}
			break;
			case 36 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32sint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoSFixed64);
				set_has_m_int32sint64();
			}
			break;
			case 37 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32sint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint32sint64();
			}
			break;
			case 38 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32sint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoSFixed64);
				set_has_m_uint32sint64();
			}
			break;
			case 39 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64sint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoSFixed64);
				set_has_m_int64sint64();
			}
			break;
			case 40 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64sint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoSFixed64);
				set_has_m_sint64sint64();
			}
			break;
			case 41 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64sint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoSFixed64);
				set_has_m_uint64sint64();
			}
			break;
			case 42 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringsint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoSFixed64);
				set_has_m_stringsint64();
			}
			break;
			case 43 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32uint64_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFixed64);
				set_has_m_int32uint64();
			}
			break;
			case 44 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32uint64_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFixed64);
				set_has_m_sint32uint64();
			}
			break;
			case 45 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32uint64_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFixed64);
				set_has_m_uint32uint64();
			}
			break;
			case 46 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64uint64_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFixed64);
				set_has_m_int64uint64();
			}
			break;
			case 47 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64uint64_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFixed64);
				set_has_m_sint64uint64();
			}
			break;
			case 48 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64uint64_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFixed64);
				set_has_m_uint64uint64();
			}
			break;
			case 49 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringuint64_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFixed64);
				set_has_m_stringuint64();
			}
			break;
			case 50 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32float_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoFloat);
				set_has_m_int32float();
			}
			break;
			case 51 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32float_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoFloat);
				set_has_m_sint32float();
			}
			break;
			case 52 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32float_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoFloat);
				set_has_m_uint32float();
			}
			break;
			case 53 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64float_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoFloat);
				set_has_m_int64float();
			}
			break;
			case 54 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64float_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoFloat);
				set_has_m_sint64float();
			}
			break;
			case 55 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64float_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoFloat);
				set_has_m_uint64float();
			}
			break;
			case 56 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringfloat_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoFloat);
				set_has_m_stringfloat();
			}
			break;
			case 57 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32double_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoDouble);
				set_has_m_int32double();
			}
			break;
			case 58 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32double_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoDouble);
				set_has_m_sint32double();
			}
			break;
			case 59 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32double_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoDouble);
				set_has_m_uint32double();
			}
			break;
			case 60 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64double_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoDouble);
				set_has_m_int64double();
			}
			break;
			case 61 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64double_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoDouble);
				set_has_m_sint64double();
			}
			break;
			case 62 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64double_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoDouble);
				set_has_m_uint64double();
			}
			break;
			case 63 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringdouble_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoDouble);
				set_has_m_stringdouble();
			}
			break;
			case 64 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32enum_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoEnum);
				set_has_m_int32enum();
			}
			break;
			case 65 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32enum_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoEnum);
				set_has_m_sint32enum();
			}
			break;
			case 66 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32enum_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoEnum);
				set_has_m_uint32enum();
			}
			break;
			case 67 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64enum_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoEnum);
				set_has_m_int64enum();
			}
			break;
			case 68 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64enum_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoEnum);
				set_has_m_sint64enum();
			}
			break;
			case 69 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64enum_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoEnum);
				set_has_m_uint64enum();
			}
			break;
			case 70 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringenum_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoEnum);
				set_has_m_stringenum();
			}
			break;
			case 71 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int32string_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoString);
				set_has_m_int32string();
			}
			break;
			case 72 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint32string_, buf, common::miniproto::CommonProtoSFixed32, common::miniproto::CommonProtoString);
				set_has_m_sint32string();
			}
			break;
			case 73 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint32string_, buf, common::miniproto::CommonProtoFixed32, common::miniproto::CommonProtoString);
				set_has_m_uint32string();
			}
			break;
			case 74 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_int64string_, buf, common::miniproto::CommonProtoInt64, common::miniproto::CommonProtoString);
				set_has_m_int64string();
			}
			break;
			case 75 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_sint64string_, buf, common::miniproto::CommonProtoSFixed64, common::miniproto::CommonProtoString);
				set_has_m_sint64string();
			}
			break;
			case 76 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_uint64string_, buf, common::miniproto::CommonProtoFixed64, common::miniproto::CommonProtoString);
				set_has_m_uint64string();
			}
			break;
			case 77 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_stringstring_, buf, common::miniproto::CommonProtoString, common::miniproto::CommonProtoString);
				set_has_m_stringstring();
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
void MsgTestMap<A>::Clear()
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

template <template<typename> class A>
void MsgTestMap<A>::Release()
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

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32bool_size() const
{
	return m_int32bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_int32bool(const common::miniproto::int32& key) const
{
	auto it = m_int32bool_.find(key);
	if (it != m_int32bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, bool, A> MsgTestMap<A>::m_int32bool_begin() const
{
	return m_int32bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, bool, A> MsgTestMap<A>::m_int32bool_end() const
{
	return m_int32bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32bool(const common::miniproto::int32& key, const bool& value)
{
	m_int32bool_[key] = value;
	set_has_m_int32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32bool(common::miniproto::int32&& key, const bool& value)
{
	m_int32bool_[std::move(key)] = value;
	set_has_m_int32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32bool(const common::miniproto::int32& key, bool&& value)
{
	m_int32bool_[key] = std::move(value);
	set_has_m_int32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32bool(common::miniproto::int32&& key, bool&& value)
{
	m_int32bool_[std::move(key)] = std::move(value);
	set_has_m_int32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32bool(const common::miniproto::int32& key)
{
	m_int32bool_.erase(key);
	if(0 == m_int32bool_.size())
	{
		clear_has_m_int32bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32bool()
{
	if (has_m_int32bool())
	{
		clear_has_m_int32bool();
	}
	if (m_int32bool_.size() > 0)
	{
		m_int32bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32bool()
{
	if (has_m_int32bool())
	{
		clear_has_m_int32bool();
	}
	if (m_int32bool_.size() > 0)
	{
		m_int32bool_.swap(common::miniproto::Map<common::miniproto::int32, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32bool() const
{
	return m_bits.HasBit(0);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32bool()
{
	m_bits.SetBit(0);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32bool()
{
	m_bits.ClearBit(0);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32bool_size() const
{
	return m_sint32bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_sint32bool(const common::miniproto::int32& key) const
{
	auto it = m_sint32bool_.find(key);
	if (it != m_sint32bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, bool, A> MsgTestMap<A>::m_sint32bool_begin() const
{
	return m_sint32bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, bool, A> MsgTestMap<A>::m_sint32bool_end() const
{
	return m_sint32bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32bool(const common::miniproto::int32& key, const bool& value)
{
	m_sint32bool_[key] = value;
	set_has_m_sint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32bool(common::miniproto::int32&& key, const bool& value)
{
	m_sint32bool_[std::move(key)] = value;
	set_has_m_sint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32bool(const common::miniproto::int32& key, bool&& value)
{
	m_sint32bool_[key] = std::move(value);
	set_has_m_sint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32bool(common::miniproto::int32&& key, bool&& value)
{
	m_sint32bool_[std::move(key)] = std::move(value);
	set_has_m_sint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32bool(const common::miniproto::int32& key)
{
	m_sint32bool_.erase(key);
	if(0 == m_sint32bool_.size())
	{
		clear_has_m_sint32bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32bool()
{
	if (has_m_sint32bool())
	{
		clear_has_m_sint32bool();
	}
	if (m_sint32bool_.size() > 0)
	{
		m_sint32bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32bool()
{
	if (has_m_sint32bool())
	{
		clear_has_m_sint32bool();
	}
	if (m_sint32bool_.size() > 0)
	{
		m_sint32bool_.swap(common::miniproto::Map<common::miniproto::int32, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32bool() const
{
	return m_bits.HasBit(1);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32bool()
{
	m_bits.SetBit(1);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32bool()
{
	m_bits.ClearBit(1);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32bool_size() const
{
	return m_uint32bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_uint32bool(const common::miniproto::uint32& key) const
{
	auto it = m_uint32bool_.find(key);
	if (it != m_uint32bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, bool, A> MsgTestMap<A>::m_uint32bool_begin() const
{
	return m_uint32bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, bool, A> MsgTestMap<A>::m_uint32bool_end() const
{
	return m_uint32bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32bool(const common::miniproto::uint32& key, const bool& value)
{
	m_uint32bool_[key] = value;
	set_has_m_uint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32bool(common::miniproto::uint32&& key, const bool& value)
{
	m_uint32bool_[std::move(key)] = value;
	set_has_m_uint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32bool(const common::miniproto::uint32& key, bool&& value)
{
	m_uint32bool_[key] = std::move(value);
	set_has_m_uint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32bool(common::miniproto::uint32&& key, bool&& value)
{
	m_uint32bool_[std::move(key)] = std::move(value);
	set_has_m_uint32bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32bool(const common::miniproto::uint32& key)
{
	m_uint32bool_.erase(key);
	if(0 == m_uint32bool_.size())
	{
		clear_has_m_uint32bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32bool()
{
	if (has_m_uint32bool())
	{
		clear_has_m_uint32bool();
	}
	if (m_uint32bool_.size() > 0)
	{
		m_uint32bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32bool()
{
	if (has_m_uint32bool())
	{
		clear_has_m_uint32bool();
	}
	if (m_uint32bool_.size() > 0)
	{
		m_uint32bool_.swap(common::miniproto::Map<common::miniproto::uint32, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32bool() const
{
	return m_bits.HasBit(2);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32bool()
{
	m_bits.SetBit(2);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32bool()
{
	m_bits.ClearBit(2);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64bool_size() const
{
	return m_int64bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_int64bool(const common::miniproto::int64& key) const
{
	auto it = m_int64bool_.find(key);
	if (it != m_int64bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, bool, A> MsgTestMap<A>::m_int64bool_begin() const
{
	return m_int64bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, bool, A> MsgTestMap<A>::m_int64bool_end() const
{
	return m_int64bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64bool(const common::miniproto::int64& key, const bool& value)
{
	m_int64bool_[key] = value;
	set_has_m_int64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64bool(common::miniproto::int64&& key, const bool& value)
{
	m_int64bool_[std::move(key)] = value;
	set_has_m_int64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64bool(const common::miniproto::int64& key, bool&& value)
{
	m_int64bool_[key] = std::move(value);
	set_has_m_int64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64bool(common::miniproto::int64&& key, bool&& value)
{
	m_int64bool_[std::move(key)] = std::move(value);
	set_has_m_int64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64bool(const common::miniproto::int64& key)
{
	m_int64bool_.erase(key);
	if(0 == m_int64bool_.size())
	{
		clear_has_m_int64bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64bool()
{
	if (has_m_int64bool())
	{
		clear_has_m_int64bool();
	}
	if (m_int64bool_.size() > 0)
	{
		m_int64bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64bool()
{
	if (has_m_int64bool())
	{
		clear_has_m_int64bool();
	}
	if (m_int64bool_.size() > 0)
	{
		m_int64bool_.swap(common::miniproto::Map<common::miniproto::int64, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64bool() const
{
	return m_bits.HasBit(3);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64bool()
{
	m_bits.SetBit(3);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64bool()
{
	m_bits.ClearBit(3);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64bool_size() const
{
	return m_sint64bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_sint64bool(const common::miniproto::int64& key) const
{
	auto it = m_sint64bool_.find(key);
	if (it != m_sint64bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, bool, A> MsgTestMap<A>::m_sint64bool_begin() const
{
	return m_sint64bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, bool, A> MsgTestMap<A>::m_sint64bool_end() const
{
	return m_sint64bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64bool(const common::miniproto::int64& key, const bool& value)
{
	m_sint64bool_[key] = value;
	set_has_m_sint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64bool(common::miniproto::int64&& key, const bool& value)
{
	m_sint64bool_[std::move(key)] = value;
	set_has_m_sint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64bool(const common::miniproto::int64& key, bool&& value)
{
	m_sint64bool_[key] = std::move(value);
	set_has_m_sint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64bool(common::miniproto::int64&& key, bool&& value)
{
	m_sint64bool_[std::move(key)] = std::move(value);
	set_has_m_sint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64bool(const common::miniproto::int64& key)
{
	m_sint64bool_.erase(key);
	if(0 == m_sint64bool_.size())
	{
		clear_has_m_sint64bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64bool()
{
	if (has_m_sint64bool())
	{
		clear_has_m_sint64bool();
	}
	if (m_sint64bool_.size() > 0)
	{
		m_sint64bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64bool()
{
	if (has_m_sint64bool())
	{
		clear_has_m_sint64bool();
	}
	if (m_sint64bool_.size() > 0)
	{
		m_sint64bool_.swap(common::miniproto::Map<common::miniproto::int64, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64bool() const
{
	return m_bits.HasBit(4);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64bool()
{
	m_bits.SetBit(4);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64bool()
{
	m_bits.ClearBit(4);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64bool_size() const
{
	return m_uint64bool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_uint64bool(const common::miniproto::uint64& key) const
{
	auto it = m_uint64bool_.find(key);
	if (it != m_uint64bool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, bool, A> MsgTestMap<A>::m_uint64bool_begin() const
{
	return m_uint64bool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, bool, A> MsgTestMap<A>::m_uint64bool_end() const
{
	return m_uint64bool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64bool(const common::miniproto::uint64& key, const bool& value)
{
	m_uint64bool_[key] = value;
	set_has_m_uint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64bool(common::miniproto::uint64&& key, const bool& value)
{
	m_uint64bool_[std::move(key)] = value;
	set_has_m_uint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64bool(const common::miniproto::uint64& key, bool&& value)
{
	m_uint64bool_[key] = std::move(value);
	set_has_m_uint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64bool(common::miniproto::uint64&& key, bool&& value)
{
	m_uint64bool_[std::move(key)] = std::move(value);
	set_has_m_uint64bool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64bool(const common::miniproto::uint64& key)
{
	m_uint64bool_.erase(key);
	if(0 == m_uint64bool_.size())
	{
		clear_has_m_uint64bool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64bool()
{
	if (has_m_uint64bool())
	{
		clear_has_m_uint64bool();
	}
	if (m_uint64bool_.size() > 0)
	{
		m_uint64bool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64bool()
{
	if (has_m_uint64bool())
	{
		clear_has_m_uint64bool();
	}
	if (m_uint64bool_.size() > 0)
	{
		m_uint64bool_.swap(common::miniproto::Map<common::miniproto::uint64, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64bool() const
{
	return m_bits.HasBit(5);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64bool()
{
	m_bits.SetBit(5);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64bool()
{
	m_bits.ClearBit(5);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringbool_size() const
{
	return m_stringbool_.size();
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_stringbool(const common::miniproto::String<A>& key) const
{
	auto it = m_stringbool_.find(key);
	if (it != m_stringbool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_stringbool(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringbool_.find(temp);
	if (it != m_stringbool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const bool* MsgTestMap<A>::find_m_stringbool(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringbool_.find(temp);
	if (it != m_stringbool_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, bool, A> MsgTestMap<A>::m_stringbool_begin() const
{
	return m_stringbool_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, bool, A> MsgTestMap<A>::m_stringbool_end() const
{
	return m_stringbool_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const common::miniproto::String<A>& key, const bool& value)
{
	m_stringbool_[key] = value;
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(common::miniproto::String<A>&& key, const bool& value)
{
	m_stringbool_[std::move(key)] = value;
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const common::miniproto::String<A>& key, bool&& value)
{
	m_stringbool_[key] = std::move(value);
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(common::miniproto::String<A>&& key, bool&& value)
{
	m_stringbool_[std::move(key)] = std::move(value);
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const char* key, const bool& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringbool_[std::move(tempKey)] = value;
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const char* key, bool&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringbool_[std::move(tempKey)] = std::move(value);
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const char* key, size_t keySize, const bool& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringbool_[std::move(tempKey)] = value;
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringbool(const char* key, size_t keySize, bool&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringbool_[std::move(tempKey)] = std::move(value);
	set_has_m_stringbool();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringbool(const common::miniproto::String<A>& key)
{
	m_stringbool_.erase(key);
	if(0 == m_stringbool_.size())
	{
		clear_has_m_stringbool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringbool(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringbool_.erase(temp);
	if(0 == m_stringbool_.size())
	{
		clear_has_m_stringbool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringbool(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringbool_.erase(temp);
	if(0 == m_stringbool_.size())
	{
		clear_has_m_stringbool();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringbool()
{
	if (has_m_stringbool())
	{
		clear_has_m_stringbool();
	}
	if (m_stringbool_.size() > 0)
	{
		m_stringbool_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringbool()
{
	if (has_m_stringbool())
	{
		clear_has_m_stringbool();
	}
	if (m_stringbool_.size() > 0)
	{
		m_stringbool_.swap(common::miniproto::Map<common::miniproto::String<A>, bool, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringbool() const
{
	return m_bits.HasBit(6);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringbool()
{
	m_bits.SetBit(6);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringbool()
{
	m_bits.ClearBit(6);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32int32_size() const
{
	return m_int32int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_int32int32(const common::miniproto::int32& key) const
{
	auto it = m_int32int32_.find(key);
	if (it != m_int32int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_int32int32_begin() const
{
	return m_int32int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_int32int32_end() const
{
	return m_int32int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int32(const common::miniproto::int32& key, const common::miniproto::int32& value)
{
	m_int32int32_[key] = value;
	set_has_m_int32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int32(common::miniproto::int32&& key, const common::miniproto::int32& value)
{
	m_int32int32_[std::move(key)] = value;
	set_has_m_int32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int32(const common::miniproto::int32& key, common::miniproto::int32&& value)
{
	m_int32int32_[key] = std::move(value);
	set_has_m_int32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int32(common::miniproto::int32&& key, common::miniproto::int32&& value)
{
	m_int32int32_[std::move(key)] = std::move(value);
	set_has_m_int32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32int32(const common::miniproto::int32& key)
{
	m_int32int32_.erase(key);
	if(0 == m_int32int32_.size())
	{
		clear_has_m_int32int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32int32()
{
	if (has_m_int32int32())
	{
		clear_has_m_int32int32();
	}
	if (m_int32int32_.size() > 0)
	{
		m_int32int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32int32()
{
	if (has_m_int32int32())
	{
		clear_has_m_int32int32();
	}
	if (m_int32int32_.size() > 0)
	{
		m_int32int32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32int32() const
{
	return m_bits.HasBit(7);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32int32()
{
	m_bits.SetBit(7);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32int32()
{
	m_bits.ClearBit(7);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32int32_size() const
{
	return m_sint32int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_sint32int32(const common::miniproto::int32& key) const
{
	auto it = m_sint32int32_.find(key);
	if (it != m_sint32int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_sint32int32_begin() const
{
	return m_sint32int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_sint32int32_end() const
{
	return m_sint32int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int32(const common::miniproto::int32& key, const common::miniproto::int32& value)
{
	m_sint32int32_[key] = value;
	set_has_m_sint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int32(common::miniproto::int32&& key, const common::miniproto::int32& value)
{
	m_sint32int32_[std::move(key)] = value;
	set_has_m_sint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int32(const common::miniproto::int32& key, common::miniproto::int32&& value)
{
	m_sint32int32_[key] = std::move(value);
	set_has_m_sint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int32(common::miniproto::int32&& key, common::miniproto::int32&& value)
{
	m_sint32int32_[std::move(key)] = std::move(value);
	set_has_m_sint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32int32(const common::miniproto::int32& key)
{
	m_sint32int32_.erase(key);
	if(0 == m_sint32int32_.size())
	{
		clear_has_m_sint32int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32int32()
{
	if (has_m_sint32int32())
	{
		clear_has_m_sint32int32();
	}
	if (m_sint32int32_.size() > 0)
	{
		m_sint32int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32int32()
{
	if (has_m_sint32int32())
	{
		clear_has_m_sint32int32();
	}
	if (m_sint32int32_.size() > 0)
	{
		m_sint32int32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32int32() const
{
	return m_bits.HasBit(8);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32int32()
{
	m_bits.SetBit(8);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32int32()
{
	m_bits.ClearBit(8);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32int32_size() const
{
	return m_uint32int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_uint32int32(const common::miniproto::uint32& key) const
{
	auto it = m_uint32int32_.find(key);
	if (it != m_uint32int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> MsgTestMap<A>::m_uint32int32_begin() const
{
	return m_uint32int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> MsgTestMap<A>::m_uint32int32_end() const
{
	return m_uint32int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int32(const common::miniproto::uint32& key, const common::miniproto::int32& value)
{
	m_uint32int32_[key] = value;
	set_has_m_uint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int32(common::miniproto::uint32&& key, const common::miniproto::int32& value)
{
	m_uint32int32_[std::move(key)] = value;
	set_has_m_uint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int32(const common::miniproto::uint32& key, common::miniproto::int32&& value)
{
	m_uint32int32_[key] = std::move(value);
	set_has_m_uint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int32(common::miniproto::uint32&& key, common::miniproto::int32&& value)
{
	m_uint32int32_[std::move(key)] = std::move(value);
	set_has_m_uint32int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32int32(const common::miniproto::uint32& key)
{
	m_uint32int32_.erase(key);
	if(0 == m_uint32int32_.size())
	{
		clear_has_m_uint32int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32int32()
{
	if (has_m_uint32int32())
	{
		clear_has_m_uint32int32();
	}
	if (m_uint32int32_.size() > 0)
	{
		m_uint32int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32int32()
{
	if (has_m_uint32int32())
	{
		clear_has_m_uint32int32();
	}
	if (m_uint32int32_.size() > 0)
	{
		m_uint32int32_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32int32() const
{
	return m_bits.HasBit(9);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32int32()
{
	m_bits.SetBit(9);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32int32()
{
	m_bits.ClearBit(9);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64int32_size() const
{
	return m_int64int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_int64int32(const common::miniproto::int64& key) const
{
	auto it = m_int64int32_.find(key);
	if (it != m_int64int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_int64int32_begin() const
{
	return m_int64int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_int64int32_end() const
{
	return m_int64int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int32(const common::miniproto::int64& key, const common::miniproto::int32& value)
{
	m_int64int32_[key] = value;
	set_has_m_int64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int32(common::miniproto::int64&& key, const common::miniproto::int32& value)
{
	m_int64int32_[std::move(key)] = value;
	set_has_m_int64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int32(const common::miniproto::int64& key, common::miniproto::int32&& value)
{
	m_int64int32_[key] = std::move(value);
	set_has_m_int64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int32(common::miniproto::int64&& key, common::miniproto::int32&& value)
{
	m_int64int32_[std::move(key)] = std::move(value);
	set_has_m_int64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64int32(const common::miniproto::int64& key)
{
	m_int64int32_.erase(key);
	if(0 == m_int64int32_.size())
	{
		clear_has_m_int64int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64int32()
{
	if (has_m_int64int32())
	{
		clear_has_m_int64int32();
	}
	if (m_int64int32_.size() > 0)
	{
		m_int64int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64int32()
{
	if (has_m_int64int32())
	{
		clear_has_m_int64int32();
	}
	if (m_int64int32_.size() > 0)
	{
		m_int64int32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64int32() const
{
	return m_bits.HasBit(10);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64int32()
{
	m_bits.SetBit(10);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64int32()
{
	m_bits.ClearBit(10);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64int32_size() const
{
	return m_sint64int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_sint64int32(const common::miniproto::int64& key) const
{
	auto it = m_sint64int32_.find(key);
	if (it != m_sint64int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_sint64int32_begin() const
{
	return m_sint64int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_sint64int32_end() const
{
	return m_sint64int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int32(const common::miniproto::int64& key, const common::miniproto::int32& value)
{
	m_sint64int32_[key] = value;
	set_has_m_sint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int32(common::miniproto::int64&& key, const common::miniproto::int32& value)
{
	m_sint64int32_[std::move(key)] = value;
	set_has_m_sint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int32(const common::miniproto::int64& key, common::miniproto::int32&& value)
{
	m_sint64int32_[key] = std::move(value);
	set_has_m_sint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int32(common::miniproto::int64&& key, common::miniproto::int32&& value)
{
	m_sint64int32_[std::move(key)] = std::move(value);
	set_has_m_sint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64int32(const common::miniproto::int64& key)
{
	m_sint64int32_.erase(key);
	if(0 == m_sint64int32_.size())
	{
		clear_has_m_sint64int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64int32()
{
	if (has_m_sint64int32())
	{
		clear_has_m_sint64int32();
	}
	if (m_sint64int32_.size() > 0)
	{
		m_sint64int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64int32()
{
	if (has_m_sint64int32())
	{
		clear_has_m_sint64int32();
	}
	if (m_sint64int32_.size() > 0)
	{
		m_sint64int32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64int32() const
{
	return m_bits.HasBit(11);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64int32()
{
	m_bits.SetBit(11);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64int32()
{
	m_bits.ClearBit(11);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64int32_size() const
{
	return m_uint64int32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_uint64int32(const common::miniproto::uint64& key) const
{
	auto it = m_uint64int32_.find(key);
	if (it != m_uint64int32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> MsgTestMap<A>::m_uint64int32_begin() const
{
	return m_uint64int32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> MsgTestMap<A>::m_uint64int32_end() const
{
	return m_uint64int32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int32(const common::miniproto::uint64& key, const common::miniproto::int32& value)
{
	m_uint64int32_[key] = value;
	set_has_m_uint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int32(common::miniproto::uint64&& key, const common::miniproto::int32& value)
{
	m_uint64int32_[std::move(key)] = value;
	set_has_m_uint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int32(const common::miniproto::uint64& key, common::miniproto::int32&& value)
{
	m_uint64int32_[key] = std::move(value);
	set_has_m_uint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int32(common::miniproto::uint64&& key, common::miniproto::int32&& value)
{
	m_uint64int32_[std::move(key)] = std::move(value);
	set_has_m_uint64int32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64int32(const common::miniproto::uint64& key)
{
	m_uint64int32_.erase(key);
	if(0 == m_uint64int32_.size())
	{
		clear_has_m_uint64int32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64int32()
{
	if (has_m_uint64int32())
	{
		clear_has_m_uint64int32();
	}
	if (m_uint64int32_.size() > 0)
	{
		m_uint64int32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64int32()
{
	if (has_m_uint64int32())
	{
		clear_has_m_uint64int32();
	}
	if (m_uint64int32_.size() > 0)
	{
		m_uint64int32_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64int32() const
{
	return m_bits.HasBit(12);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64int32()
{
	m_bits.SetBit(12);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64int32()
{
	m_bits.ClearBit(12);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringint32_size() const
{
	return m_stringint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringint32(const common::miniproto::String<A>& key) const
{
	auto it = m_stringint32_.find(key);
	if (it != m_stringint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringint32(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringint32_.find(temp);
	if (it != m_stringint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringint32(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringint32_.find(temp);
	if (it != m_stringint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> MsgTestMap<A>::m_stringint32_begin() const
{
	return m_stringint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> MsgTestMap<A>::m_stringint32_end() const
{
	return m_stringint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const common::miniproto::String<A>& key, const common::miniproto::int32& value)
{
	m_stringint32_[key] = value;
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(common::miniproto::String<A>&& key, const common::miniproto::int32& value)
{
	m_stringint32_[std::move(key)] = value;
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const common::miniproto::String<A>& key, common::miniproto::int32&& value)
{
	m_stringint32_[key] = std::move(value);
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(common::miniproto::String<A>&& key, common::miniproto::int32&& value)
{
	m_stringint32_[std::move(key)] = std::move(value);
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const char* key, const common::miniproto::int32& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringint32_[std::move(tempKey)] = value;
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const char* key, common::miniproto::int32&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const char* key, size_t keySize, const common::miniproto::int32& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringint32_[std::move(tempKey)] = value;
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint32(const char* key, size_t keySize, common::miniproto::int32&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint32(const common::miniproto::String<A>& key)
{
	m_stringint32_.erase(key);
	if(0 == m_stringint32_.size())
	{
		clear_has_m_stringint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint32(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringint32_.erase(temp);
	if(0 == m_stringint32_.size())
	{
		clear_has_m_stringint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint32(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringint32_.erase(temp);
	if(0 == m_stringint32_.size())
	{
		clear_has_m_stringint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringint32()
{
	if (has_m_stringint32())
	{
		clear_has_m_stringint32();
	}
	if (m_stringint32_.size() > 0)
	{
		m_stringint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringint32()
{
	if (has_m_stringint32())
	{
		clear_has_m_stringint32();
	}
	if (m_stringint32_.size() > 0)
	{
		m_stringint32_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringint32() const
{
	return m_bits.HasBit(13);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringint32()
{
	m_bits.SetBit(13);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringint32()
{
	m_bits.ClearBit(13);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32sint32_size() const
{
	return m_int32sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_int32sint32(const common::miniproto::int32& key) const
{
	auto it = m_int32sint32_.find(key);
	if (it != m_int32sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_int32sint32_begin() const
{
	return m_int32sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_int32sint32_end() const
{
	return m_int32sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint32(const common::miniproto::int32& key, const common::miniproto::int32& value)
{
	m_int32sint32_[key] = value;
	set_has_m_int32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint32(common::miniproto::int32&& key, const common::miniproto::int32& value)
{
	m_int32sint32_[std::move(key)] = value;
	set_has_m_int32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint32(const common::miniproto::int32& key, common::miniproto::int32&& value)
{
	m_int32sint32_[key] = std::move(value);
	set_has_m_int32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint32(common::miniproto::int32&& key, common::miniproto::int32&& value)
{
	m_int32sint32_[std::move(key)] = std::move(value);
	set_has_m_int32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32sint32(const common::miniproto::int32& key)
{
	m_int32sint32_.erase(key);
	if(0 == m_int32sint32_.size())
	{
		clear_has_m_int32sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32sint32()
{
	if (has_m_int32sint32())
	{
		clear_has_m_int32sint32();
	}
	if (m_int32sint32_.size() > 0)
	{
		m_int32sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32sint32()
{
	if (has_m_int32sint32())
	{
		clear_has_m_int32sint32();
	}
	if (m_int32sint32_.size() > 0)
	{
		m_int32sint32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32sint32() const
{
	return m_bits.HasBit(14);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32sint32()
{
	m_bits.SetBit(14);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32sint32()
{
	m_bits.ClearBit(14);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32sint32_size() const
{
	return m_sint32sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_sint32sint32(const common::miniproto::int32& key) const
{
	auto it = m_sint32sint32_.find(key);
	if (it != m_sint32sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_sint32sint32_begin() const
{
	return m_sint32sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int32, A> MsgTestMap<A>::m_sint32sint32_end() const
{
	return m_sint32sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint32(const common::miniproto::int32& key, const common::miniproto::int32& value)
{
	m_sint32sint32_[key] = value;
	set_has_m_sint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint32(common::miniproto::int32&& key, const common::miniproto::int32& value)
{
	m_sint32sint32_[std::move(key)] = value;
	set_has_m_sint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint32(const common::miniproto::int32& key, common::miniproto::int32&& value)
{
	m_sint32sint32_[key] = std::move(value);
	set_has_m_sint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint32(common::miniproto::int32&& key, common::miniproto::int32&& value)
{
	m_sint32sint32_[std::move(key)] = std::move(value);
	set_has_m_sint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32sint32(const common::miniproto::int32& key)
{
	m_sint32sint32_.erase(key);
	if(0 == m_sint32sint32_.size())
	{
		clear_has_m_sint32sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32sint32()
{
	if (has_m_sint32sint32())
	{
		clear_has_m_sint32sint32();
	}
	if (m_sint32sint32_.size() > 0)
	{
		m_sint32sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32sint32()
{
	if (has_m_sint32sint32())
	{
		clear_has_m_sint32sint32();
	}
	if (m_sint32sint32_.size() > 0)
	{
		m_sint32sint32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32sint32() const
{
	return m_bits.HasBit(15);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32sint32()
{
	m_bits.SetBit(15);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32sint32()
{
	m_bits.ClearBit(15);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32sint32_size() const
{
	return m_uint32sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_uint32sint32(const common::miniproto::uint32& key) const
{
	auto it = m_uint32sint32_.find(key);
	if (it != m_uint32sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> MsgTestMap<A>::m_uint32sint32_begin() const
{
	return m_uint32sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int32, A> MsgTestMap<A>::m_uint32sint32_end() const
{
	return m_uint32sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint32(const common::miniproto::uint32& key, const common::miniproto::int32& value)
{
	m_uint32sint32_[key] = value;
	set_has_m_uint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint32(common::miniproto::uint32&& key, const common::miniproto::int32& value)
{
	m_uint32sint32_[std::move(key)] = value;
	set_has_m_uint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint32(const common::miniproto::uint32& key, common::miniproto::int32&& value)
{
	m_uint32sint32_[key] = std::move(value);
	set_has_m_uint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint32(common::miniproto::uint32&& key, common::miniproto::int32&& value)
{
	m_uint32sint32_[std::move(key)] = std::move(value);
	set_has_m_uint32sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32sint32(const common::miniproto::uint32& key)
{
	m_uint32sint32_.erase(key);
	if(0 == m_uint32sint32_.size())
	{
		clear_has_m_uint32sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32sint32()
{
	if (has_m_uint32sint32())
	{
		clear_has_m_uint32sint32();
	}
	if (m_uint32sint32_.size() > 0)
	{
		m_uint32sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32sint32()
{
	if (has_m_uint32sint32())
	{
		clear_has_m_uint32sint32();
	}
	if (m_uint32sint32_.size() > 0)
	{
		m_uint32sint32_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32sint32() const
{
	return m_bits.HasBit(16);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32sint32()
{
	m_bits.SetBit(16);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32sint32()
{
	m_bits.ClearBit(16);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64sint32_size() const
{
	return m_int64sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_int64sint32(const common::miniproto::int64& key) const
{
	auto it = m_int64sint32_.find(key);
	if (it != m_int64sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_int64sint32_begin() const
{
	return m_int64sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_int64sint32_end() const
{
	return m_int64sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint32(const common::miniproto::int64& key, const common::miniproto::int32& value)
{
	m_int64sint32_[key] = value;
	set_has_m_int64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint32(common::miniproto::int64&& key, const common::miniproto::int32& value)
{
	m_int64sint32_[std::move(key)] = value;
	set_has_m_int64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint32(const common::miniproto::int64& key, common::miniproto::int32&& value)
{
	m_int64sint32_[key] = std::move(value);
	set_has_m_int64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint32(common::miniproto::int64&& key, common::miniproto::int32&& value)
{
	m_int64sint32_[std::move(key)] = std::move(value);
	set_has_m_int64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64sint32(const common::miniproto::int64& key)
{
	m_int64sint32_.erase(key);
	if(0 == m_int64sint32_.size())
	{
		clear_has_m_int64sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64sint32()
{
	if (has_m_int64sint32())
	{
		clear_has_m_int64sint32();
	}
	if (m_int64sint32_.size() > 0)
	{
		m_int64sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64sint32()
{
	if (has_m_int64sint32())
	{
		clear_has_m_int64sint32();
	}
	if (m_int64sint32_.size() > 0)
	{
		m_int64sint32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64sint32() const
{
	return m_bits.HasBit(17);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64sint32()
{
	m_bits.SetBit(17);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64sint32()
{
	m_bits.ClearBit(17);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64sint32_size() const
{
	return m_sint64sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_sint64sint32(const common::miniproto::int64& key) const
{
	auto it = m_sint64sint32_.find(key);
	if (it != m_sint64sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_sint64sint32_begin() const
{
	return m_sint64sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int32, A> MsgTestMap<A>::m_sint64sint32_end() const
{
	return m_sint64sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint32(const common::miniproto::int64& key, const common::miniproto::int32& value)
{
	m_sint64sint32_[key] = value;
	set_has_m_sint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint32(common::miniproto::int64&& key, const common::miniproto::int32& value)
{
	m_sint64sint32_[std::move(key)] = value;
	set_has_m_sint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint32(const common::miniproto::int64& key, common::miniproto::int32&& value)
{
	m_sint64sint32_[key] = std::move(value);
	set_has_m_sint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint32(common::miniproto::int64&& key, common::miniproto::int32&& value)
{
	m_sint64sint32_[std::move(key)] = std::move(value);
	set_has_m_sint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64sint32(const common::miniproto::int64& key)
{
	m_sint64sint32_.erase(key);
	if(0 == m_sint64sint32_.size())
	{
		clear_has_m_sint64sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64sint32()
{
	if (has_m_sint64sint32())
	{
		clear_has_m_sint64sint32();
	}
	if (m_sint64sint32_.size() > 0)
	{
		m_sint64sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64sint32()
{
	if (has_m_sint64sint32())
	{
		clear_has_m_sint64sint32();
	}
	if (m_sint64sint32_.size() > 0)
	{
		m_sint64sint32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64sint32() const
{
	return m_bits.HasBit(18);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64sint32()
{
	m_bits.SetBit(18);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64sint32()
{
	m_bits.ClearBit(18);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64sint32_size() const
{
	return m_uint64sint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_uint64sint32(const common::miniproto::uint64& key) const
{
	auto it = m_uint64sint32_.find(key);
	if (it != m_uint64sint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> MsgTestMap<A>::m_uint64sint32_begin() const
{
	return m_uint64sint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int32, A> MsgTestMap<A>::m_uint64sint32_end() const
{
	return m_uint64sint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint32(const common::miniproto::uint64& key, const common::miniproto::int32& value)
{
	m_uint64sint32_[key] = value;
	set_has_m_uint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint32(common::miniproto::uint64&& key, const common::miniproto::int32& value)
{
	m_uint64sint32_[std::move(key)] = value;
	set_has_m_uint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint32(const common::miniproto::uint64& key, common::miniproto::int32&& value)
{
	m_uint64sint32_[key] = std::move(value);
	set_has_m_uint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint32(common::miniproto::uint64&& key, common::miniproto::int32&& value)
{
	m_uint64sint32_[std::move(key)] = std::move(value);
	set_has_m_uint64sint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64sint32(const common::miniproto::uint64& key)
{
	m_uint64sint32_.erase(key);
	if(0 == m_uint64sint32_.size())
	{
		clear_has_m_uint64sint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64sint32()
{
	if (has_m_uint64sint32())
	{
		clear_has_m_uint64sint32();
	}
	if (m_uint64sint32_.size() > 0)
	{
		m_uint64sint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64sint32()
{
	if (has_m_uint64sint32())
	{
		clear_has_m_uint64sint32();
	}
	if (m_uint64sint32_.size() > 0)
	{
		m_uint64sint32_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64sint32() const
{
	return m_bits.HasBit(19);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64sint32()
{
	m_bits.SetBit(19);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64sint32()
{
	m_bits.ClearBit(19);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringsint32_size() const
{
	return m_stringsint32_.size();
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringsint32(const common::miniproto::String<A>& key) const
{
	auto it = m_stringsint32_.find(key);
	if (it != m_stringsint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringsint32(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringsint32_.find(temp);
	if (it != m_stringsint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int32* MsgTestMap<A>::find_m_stringsint32(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringsint32_.find(temp);
	if (it != m_stringsint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> MsgTestMap<A>::m_stringsint32_begin() const
{
	return m_stringsint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int32, A> MsgTestMap<A>::m_stringsint32_end() const
{
	return m_stringsint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const common::miniproto::String<A>& key, const common::miniproto::int32& value)
{
	m_stringsint32_[key] = value;
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(common::miniproto::String<A>&& key, const common::miniproto::int32& value)
{
	m_stringsint32_[std::move(key)] = value;
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const common::miniproto::String<A>& key, common::miniproto::int32&& value)
{
	m_stringsint32_[key] = std::move(value);
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(common::miniproto::String<A>&& key, common::miniproto::int32&& value)
{
	m_stringsint32_[std::move(key)] = std::move(value);
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const char* key, const common::miniproto::int32& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringsint32_[std::move(tempKey)] = value;
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const char* key, common::miniproto::int32&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringsint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const char* key, size_t keySize, const common::miniproto::int32& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringsint32_[std::move(tempKey)] = value;
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint32(const char* key, size_t keySize, common::miniproto::int32&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringsint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringsint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint32(const common::miniproto::String<A>& key)
{
	m_stringsint32_.erase(key);
	if(0 == m_stringsint32_.size())
	{
		clear_has_m_stringsint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint32(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringsint32_.erase(temp);
	if(0 == m_stringsint32_.size())
	{
		clear_has_m_stringsint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint32(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringsint32_.erase(temp);
	if(0 == m_stringsint32_.size())
	{
		clear_has_m_stringsint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringsint32()
{
	if (has_m_stringsint32())
	{
		clear_has_m_stringsint32();
	}
	if (m_stringsint32_.size() > 0)
	{
		m_stringsint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringsint32()
{
	if (has_m_stringsint32())
	{
		clear_has_m_stringsint32();
	}
	if (m_stringsint32_.size() > 0)
	{
		m_stringsint32_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringsint32() const
{
	return m_bits.HasBit(20);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringsint32()
{
	m_bits.SetBit(20);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringsint32()
{
	m_bits.ClearBit(20);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32uint32_size() const
{
	return m_int32uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_int32uint32(const common::miniproto::int32& key) const
{
	auto it = m_int32uint32_.find(key);
	if (it != m_int32uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> MsgTestMap<A>::m_int32uint32_begin() const
{
	return m_int32uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> MsgTestMap<A>::m_int32uint32_end() const
{
	return m_int32uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint32(const common::miniproto::int32& key, const common::miniproto::uint32& value)
{
	m_int32uint32_[key] = value;
	set_has_m_int32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint32(common::miniproto::int32&& key, const common::miniproto::uint32& value)
{
	m_int32uint32_[std::move(key)] = value;
	set_has_m_int32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint32(const common::miniproto::int32& key, common::miniproto::uint32&& value)
{
	m_int32uint32_[key] = std::move(value);
	set_has_m_int32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint32(common::miniproto::int32&& key, common::miniproto::uint32&& value)
{
	m_int32uint32_[std::move(key)] = std::move(value);
	set_has_m_int32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32uint32(const common::miniproto::int32& key)
{
	m_int32uint32_.erase(key);
	if(0 == m_int32uint32_.size())
	{
		clear_has_m_int32uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32uint32()
{
	if (has_m_int32uint32())
	{
		clear_has_m_int32uint32();
	}
	if (m_int32uint32_.size() > 0)
	{
		m_int32uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32uint32()
{
	if (has_m_int32uint32())
	{
		clear_has_m_int32uint32();
	}
	if (m_int32uint32_.size() > 0)
	{
		m_int32uint32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32uint32() const
{
	return m_bits.HasBit(21);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32uint32()
{
	m_bits.SetBit(21);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32uint32()
{
	m_bits.ClearBit(21);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32uint32_size() const
{
	return m_sint32uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_sint32uint32(const common::miniproto::int32& key) const
{
	auto it = m_sint32uint32_.find(key);
	if (it != m_sint32uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> MsgTestMap<A>::m_sint32uint32_begin() const
{
	return m_sint32uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint32, A> MsgTestMap<A>::m_sint32uint32_end() const
{
	return m_sint32uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint32(const common::miniproto::int32& key, const common::miniproto::uint32& value)
{
	m_sint32uint32_[key] = value;
	set_has_m_sint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint32(common::miniproto::int32&& key, const common::miniproto::uint32& value)
{
	m_sint32uint32_[std::move(key)] = value;
	set_has_m_sint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint32(const common::miniproto::int32& key, common::miniproto::uint32&& value)
{
	m_sint32uint32_[key] = std::move(value);
	set_has_m_sint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint32(common::miniproto::int32&& key, common::miniproto::uint32&& value)
{
	m_sint32uint32_[std::move(key)] = std::move(value);
	set_has_m_sint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32uint32(const common::miniproto::int32& key)
{
	m_sint32uint32_.erase(key);
	if(0 == m_sint32uint32_.size())
	{
		clear_has_m_sint32uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32uint32()
{
	if (has_m_sint32uint32())
	{
		clear_has_m_sint32uint32();
	}
	if (m_sint32uint32_.size() > 0)
	{
		m_sint32uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32uint32()
{
	if (has_m_sint32uint32())
	{
		clear_has_m_sint32uint32();
	}
	if (m_sint32uint32_.size() > 0)
	{
		m_sint32uint32_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32uint32() const
{
	return m_bits.HasBit(22);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32uint32()
{
	m_bits.SetBit(22);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32uint32()
{
	m_bits.ClearBit(22);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32uint32_size() const
{
	return m_uint32uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_uint32uint32(const common::miniproto::uint32& key) const
{
	auto it = m_uint32uint32_.find(key);
	if (it != m_uint32uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint32, A> MsgTestMap<A>::m_uint32uint32_begin() const
{
	return m_uint32uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint32, A> MsgTestMap<A>::m_uint32uint32_end() const
{
	return m_uint32uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint32(const common::miniproto::uint32& key, const common::miniproto::uint32& value)
{
	m_uint32uint32_[key] = value;
	set_has_m_uint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint32(common::miniproto::uint32&& key, const common::miniproto::uint32& value)
{
	m_uint32uint32_[std::move(key)] = value;
	set_has_m_uint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint32(const common::miniproto::uint32& key, common::miniproto::uint32&& value)
{
	m_uint32uint32_[key] = std::move(value);
	set_has_m_uint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint32(common::miniproto::uint32&& key, common::miniproto::uint32&& value)
{
	m_uint32uint32_[std::move(key)] = std::move(value);
	set_has_m_uint32uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32uint32(const common::miniproto::uint32& key)
{
	m_uint32uint32_.erase(key);
	if(0 == m_uint32uint32_.size())
	{
		clear_has_m_uint32uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32uint32()
{
	if (has_m_uint32uint32())
	{
		clear_has_m_uint32uint32();
	}
	if (m_uint32uint32_.size() > 0)
	{
		m_uint32uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32uint32()
{
	if (has_m_uint32uint32())
	{
		clear_has_m_uint32uint32();
	}
	if (m_uint32uint32_.size() > 0)
	{
		m_uint32uint32_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32uint32() const
{
	return m_bits.HasBit(23);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32uint32()
{
	m_bits.SetBit(23);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32uint32()
{
	m_bits.ClearBit(23);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64uint32_size() const
{
	return m_int64uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_int64uint32(const common::miniproto::int64& key) const
{
	auto it = m_int64uint32_.find(key);
	if (it != m_int64uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> MsgTestMap<A>::m_int64uint32_begin() const
{
	return m_int64uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> MsgTestMap<A>::m_int64uint32_end() const
{
	return m_int64uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint32(const common::miniproto::int64& key, const common::miniproto::uint32& value)
{
	m_int64uint32_[key] = value;
	set_has_m_int64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint32(common::miniproto::int64&& key, const common::miniproto::uint32& value)
{
	m_int64uint32_[std::move(key)] = value;
	set_has_m_int64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint32(const common::miniproto::int64& key, common::miniproto::uint32&& value)
{
	m_int64uint32_[key] = std::move(value);
	set_has_m_int64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint32(common::miniproto::int64&& key, common::miniproto::uint32&& value)
{
	m_int64uint32_[std::move(key)] = std::move(value);
	set_has_m_int64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64uint32(const common::miniproto::int64& key)
{
	m_int64uint32_.erase(key);
	if(0 == m_int64uint32_.size())
	{
		clear_has_m_int64uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64uint32()
{
	if (has_m_int64uint32())
	{
		clear_has_m_int64uint32();
	}
	if (m_int64uint32_.size() > 0)
	{
		m_int64uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64uint32()
{
	if (has_m_int64uint32())
	{
		clear_has_m_int64uint32();
	}
	if (m_int64uint32_.size() > 0)
	{
		m_int64uint32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64uint32() const
{
	return m_bits.HasBit(24);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64uint32()
{
	m_bits.SetBit(24);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64uint32()
{
	m_bits.ClearBit(24);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64uint32_size() const
{
	return m_sint64uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_sint64uint32(const common::miniproto::int64& key) const
{
	auto it = m_sint64uint32_.find(key);
	if (it != m_sint64uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> MsgTestMap<A>::m_sint64uint32_begin() const
{
	return m_sint64uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint32, A> MsgTestMap<A>::m_sint64uint32_end() const
{
	return m_sint64uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint32(const common::miniproto::int64& key, const common::miniproto::uint32& value)
{
	m_sint64uint32_[key] = value;
	set_has_m_sint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint32(common::miniproto::int64&& key, const common::miniproto::uint32& value)
{
	m_sint64uint32_[std::move(key)] = value;
	set_has_m_sint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint32(const common::miniproto::int64& key, common::miniproto::uint32&& value)
{
	m_sint64uint32_[key] = std::move(value);
	set_has_m_sint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint32(common::miniproto::int64&& key, common::miniproto::uint32&& value)
{
	m_sint64uint32_[std::move(key)] = std::move(value);
	set_has_m_sint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64uint32(const common::miniproto::int64& key)
{
	m_sint64uint32_.erase(key);
	if(0 == m_sint64uint32_.size())
	{
		clear_has_m_sint64uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64uint32()
{
	if (has_m_sint64uint32())
	{
		clear_has_m_sint64uint32();
	}
	if (m_sint64uint32_.size() > 0)
	{
		m_sint64uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64uint32()
{
	if (has_m_sint64uint32())
	{
		clear_has_m_sint64uint32();
	}
	if (m_sint64uint32_.size() > 0)
	{
		m_sint64uint32_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64uint32() const
{
	return m_bits.HasBit(25);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64uint32()
{
	m_bits.SetBit(25);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64uint32()
{
	m_bits.ClearBit(25);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64uint32_size() const
{
	return m_uint64uint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_uint64uint32(const common::miniproto::uint64& key) const
{
	auto it = m_uint64uint32_.find(key);
	if (it != m_uint64uint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint32, A> MsgTestMap<A>::m_uint64uint32_begin() const
{
	return m_uint64uint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint32, A> MsgTestMap<A>::m_uint64uint32_end() const
{
	return m_uint64uint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint32(const common::miniproto::uint64& key, const common::miniproto::uint32& value)
{
	m_uint64uint32_[key] = value;
	set_has_m_uint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint32(common::miniproto::uint64&& key, const common::miniproto::uint32& value)
{
	m_uint64uint32_[std::move(key)] = value;
	set_has_m_uint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint32(const common::miniproto::uint64& key, common::miniproto::uint32&& value)
{
	m_uint64uint32_[key] = std::move(value);
	set_has_m_uint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint32(common::miniproto::uint64&& key, common::miniproto::uint32&& value)
{
	m_uint64uint32_[std::move(key)] = std::move(value);
	set_has_m_uint64uint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64uint32(const common::miniproto::uint64& key)
{
	m_uint64uint32_.erase(key);
	if(0 == m_uint64uint32_.size())
	{
		clear_has_m_uint64uint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64uint32()
{
	if (has_m_uint64uint32())
	{
		clear_has_m_uint64uint32();
	}
	if (m_uint64uint32_.size() > 0)
	{
		m_uint64uint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64uint32()
{
	if (has_m_uint64uint32())
	{
		clear_has_m_uint64uint32();
	}
	if (m_uint64uint32_.size() > 0)
	{
		m_uint64uint32_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64uint32() const
{
	return m_bits.HasBit(26);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64uint32()
{
	m_bits.SetBit(26);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64uint32()
{
	m_bits.ClearBit(26);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringuint32_size() const
{
	return m_stringuint32_.size();
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_stringuint32(const common::miniproto::String<A>& key) const
{
	auto it = m_stringuint32_.find(key);
	if (it != m_stringuint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_stringuint32(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringuint32_.find(temp);
	if (it != m_stringuint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::uint32* MsgTestMap<A>::find_m_stringuint32(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringuint32_.find(temp);
	if (it != m_stringuint32_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint32, A> MsgTestMap<A>::m_stringuint32_begin() const
{
	return m_stringuint32_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint32, A> MsgTestMap<A>::m_stringuint32_end() const
{
	return m_stringuint32_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const common::miniproto::String<A>& key, const common::miniproto::uint32& value)
{
	m_stringuint32_[key] = value;
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(common::miniproto::String<A>&& key, const common::miniproto::uint32& value)
{
	m_stringuint32_[std::move(key)] = value;
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const common::miniproto::String<A>& key, common::miniproto::uint32&& value)
{
	m_stringuint32_[key] = std::move(value);
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(common::miniproto::String<A>&& key, common::miniproto::uint32&& value)
{
	m_stringuint32_[std::move(key)] = std::move(value);
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const char* key, const common::miniproto::uint32& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringuint32_[std::move(tempKey)] = value;
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const char* key, common::miniproto::uint32&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringuint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const char* key, size_t keySize, const common::miniproto::uint32& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringuint32_[std::move(tempKey)] = value;
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint32(const char* key, size_t keySize, common::miniproto::uint32&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringuint32_[std::move(tempKey)] = std::move(value);
	set_has_m_stringuint32();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint32(const common::miniproto::String<A>& key)
{
	m_stringuint32_.erase(key);
	if(0 == m_stringuint32_.size())
	{
		clear_has_m_stringuint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint32(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringuint32_.erase(temp);
	if(0 == m_stringuint32_.size())
	{
		clear_has_m_stringuint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint32(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringuint32_.erase(temp);
	if(0 == m_stringuint32_.size())
	{
		clear_has_m_stringuint32();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringuint32()
{
	if (has_m_stringuint32())
	{
		clear_has_m_stringuint32();
	}
	if (m_stringuint32_.size() > 0)
	{
		m_stringuint32_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringuint32()
{
	if (has_m_stringuint32())
	{
		clear_has_m_stringuint32();
	}
	if (m_stringuint32_.size() > 0)
	{
		m_stringuint32_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::uint32, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringuint32() const
{
	return m_bits.HasBit(27);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringuint32()
{
	m_bits.SetBit(27);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringuint32()
{
	m_bits.ClearBit(27);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32int64_size() const
{
	return m_int32int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_int32int64(const common::miniproto::int32& key) const
{
	auto it = m_int32int64_.find(key);
	if (it != m_int32int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_int32int64_begin() const
{
	return m_int32int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_int32int64_end() const
{
	return m_int32int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int64(const common::miniproto::int32& key, const common::miniproto::int64& value)
{
	m_int32int64_[key] = value;
	set_has_m_int32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int64(common::miniproto::int32&& key, const common::miniproto::int64& value)
{
	m_int32int64_[std::move(key)] = value;
	set_has_m_int32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int64(const common::miniproto::int32& key, common::miniproto::int64&& value)
{
	m_int32int64_[key] = std::move(value);
	set_has_m_int32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32int64(common::miniproto::int32&& key, common::miniproto::int64&& value)
{
	m_int32int64_[std::move(key)] = std::move(value);
	set_has_m_int32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32int64(const common::miniproto::int32& key)
{
	m_int32int64_.erase(key);
	if(0 == m_int32int64_.size())
	{
		clear_has_m_int32int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32int64()
{
	if (has_m_int32int64())
	{
		clear_has_m_int32int64();
	}
	if (m_int32int64_.size() > 0)
	{
		m_int32int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32int64()
{
	if (has_m_int32int64())
	{
		clear_has_m_int32int64();
	}
	if (m_int32int64_.size() > 0)
	{
		m_int32int64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32int64() const
{
	return m_bits.HasBit(28);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32int64()
{
	m_bits.SetBit(28);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32int64()
{
	m_bits.ClearBit(28);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32int64_size() const
{
	return m_sint32int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_sint32int64(const common::miniproto::int32& key) const
{
	auto it = m_sint32int64_.find(key);
	if (it != m_sint32int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_sint32int64_begin() const
{
	return m_sint32int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_sint32int64_end() const
{
	return m_sint32int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int64(const common::miniproto::int32& key, const common::miniproto::int64& value)
{
	m_sint32int64_[key] = value;
	set_has_m_sint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int64(common::miniproto::int32&& key, const common::miniproto::int64& value)
{
	m_sint32int64_[std::move(key)] = value;
	set_has_m_sint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int64(const common::miniproto::int32& key, common::miniproto::int64&& value)
{
	m_sint32int64_[key] = std::move(value);
	set_has_m_sint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32int64(common::miniproto::int32&& key, common::miniproto::int64&& value)
{
	m_sint32int64_[std::move(key)] = std::move(value);
	set_has_m_sint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32int64(const common::miniproto::int32& key)
{
	m_sint32int64_.erase(key);
	if(0 == m_sint32int64_.size())
	{
		clear_has_m_sint32int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32int64()
{
	if (has_m_sint32int64())
	{
		clear_has_m_sint32int64();
	}
	if (m_sint32int64_.size() > 0)
	{
		m_sint32int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32int64()
{
	if (has_m_sint32int64())
	{
		clear_has_m_sint32int64();
	}
	if (m_sint32int64_.size() > 0)
	{
		m_sint32int64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32int64() const
{
	return m_bits.HasBit(29);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32int64()
{
	m_bits.SetBit(29);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32int64()
{
	m_bits.ClearBit(29);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32int64_size() const
{
	return m_uint32int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_uint32int64(const common::miniproto::uint32& key) const
{
	auto it = m_uint32int64_.find(key);
	if (it != m_uint32int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> MsgTestMap<A>::m_uint32int64_begin() const
{
	return m_uint32int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> MsgTestMap<A>::m_uint32int64_end() const
{
	return m_uint32int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int64(const common::miniproto::uint32& key, const common::miniproto::int64& value)
{
	m_uint32int64_[key] = value;
	set_has_m_uint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int64(common::miniproto::uint32&& key, const common::miniproto::int64& value)
{
	m_uint32int64_[std::move(key)] = value;
	set_has_m_uint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int64(const common::miniproto::uint32& key, common::miniproto::int64&& value)
{
	m_uint32int64_[key] = std::move(value);
	set_has_m_uint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32int64(common::miniproto::uint32&& key, common::miniproto::int64&& value)
{
	m_uint32int64_[std::move(key)] = std::move(value);
	set_has_m_uint32int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32int64(const common::miniproto::uint32& key)
{
	m_uint32int64_.erase(key);
	if(0 == m_uint32int64_.size())
	{
		clear_has_m_uint32int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32int64()
{
	if (has_m_uint32int64())
	{
		clear_has_m_uint32int64();
	}
	if (m_uint32int64_.size() > 0)
	{
		m_uint32int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32int64()
{
	if (has_m_uint32int64())
	{
		clear_has_m_uint32int64();
	}
	if (m_uint32int64_.size() > 0)
	{
		m_uint32int64_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32int64() const
{
	return m_bits.HasBit(30);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32int64()
{
	m_bits.SetBit(30);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32int64()
{
	m_bits.ClearBit(30);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64int64_size() const
{
	return m_int64int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_int64int64(const common::miniproto::int64& key) const
{
	auto it = m_int64int64_.find(key);
	if (it != m_int64int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_int64int64_begin() const
{
	return m_int64int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_int64int64_end() const
{
	return m_int64int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int64(const common::miniproto::int64& key, const common::miniproto::int64& value)
{
	m_int64int64_[key] = value;
	set_has_m_int64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int64(common::miniproto::int64&& key, const common::miniproto::int64& value)
{
	m_int64int64_[std::move(key)] = value;
	set_has_m_int64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int64(const common::miniproto::int64& key, common::miniproto::int64&& value)
{
	m_int64int64_[key] = std::move(value);
	set_has_m_int64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64int64(common::miniproto::int64&& key, common::miniproto::int64&& value)
{
	m_int64int64_[std::move(key)] = std::move(value);
	set_has_m_int64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64int64(const common::miniproto::int64& key)
{
	m_int64int64_.erase(key);
	if(0 == m_int64int64_.size())
	{
		clear_has_m_int64int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64int64()
{
	if (has_m_int64int64())
	{
		clear_has_m_int64int64();
	}
	if (m_int64int64_.size() > 0)
	{
		m_int64int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64int64()
{
	if (has_m_int64int64())
	{
		clear_has_m_int64int64();
	}
	if (m_int64int64_.size() > 0)
	{
		m_int64int64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64int64() const
{
	return m_bits.HasBit(31);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64int64()
{
	m_bits.SetBit(31);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64int64()
{
	m_bits.ClearBit(31);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64int64_size() const
{
	return m_sint64int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_sint64int64(const common::miniproto::int64& key) const
{
	auto it = m_sint64int64_.find(key);
	if (it != m_sint64int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_sint64int64_begin() const
{
	return m_sint64int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_sint64int64_end() const
{
	return m_sint64int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int64(const common::miniproto::int64& key, const common::miniproto::int64& value)
{
	m_sint64int64_[key] = value;
	set_has_m_sint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int64(common::miniproto::int64&& key, const common::miniproto::int64& value)
{
	m_sint64int64_[std::move(key)] = value;
	set_has_m_sint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int64(const common::miniproto::int64& key, common::miniproto::int64&& value)
{
	m_sint64int64_[key] = std::move(value);
	set_has_m_sint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64int64(common::miniproto::int64&& key, common::miniproto::int64&& value)
{
	m_sint64int64_[std::move(key)] = std::move(value);
	set_has_m_sint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64int64(const common::miniproto::int64& key)
{
	m_sint64int64_.erase(key);
	if(0 == m_sint64int64_.size())
	{
		clear_has_m_sint64int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64int64()
{
	if (has_m_sint64int64())
	{
		clear_has_m_sint64int64();
	}
	if (m_sint64int64_.size() > 0)
	{
		m_sint64int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64int64()
{
	if (has_m_sint64int64())
	{
		clear_has_m_sint64int64();
	}
	if (m_sint64int64_.size() > 0)
	{
		m_sint64int64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64int64() const
{
	return m_bits.HasBit(32);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64int64()
{
	m_bits.SetBit(32);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64int64()
{
	m_bits.ClearBit(32);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64int64_size() const
{
	return m_uint64int64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_uint64int64(const common::miniproto::uint64& key) const
{
	auto it = m_uint64int64_.find(key);
	if (it != m_uint64int64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> MsgTestMap<A>::m_uint64int64_begin() const
{
	return m_uint64int64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> MsgTestMap<A>::m_uint64int64_end() const
{
	return m_uint64int64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int64(const common::miniproto::uint64& key, const common::miniproto::int64& value)
{
	m_uint64int64_[key] = value;
	set_has_m_uint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int64(common::miniproto::uint64&& key, const common::miniproto::int64& value)
{
	m_uint64int64_[std::move(key)] = value;
	set_has_m_uint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int64(const common::miniproto::uint64& key, common::miniproto::int64&& value)
{
	m_uint64int64_[key] = std::move(value);
	set_has_m_uint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64int64(common::miniproto::uint64&& key, common::miniproto::int64&& value)
{
	m_uint64int64_[std::move(key)] = std::move(value);
	set_has_m_uint64int64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64int64(const common::miniproto::uint64& key)
{
	m_uint64int64_.erase(key);
	if(0 == m_uint64int64_.size())
	{
		clear_has_m_uint64int64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64int64()
{
	if (has_m_uint64int64())
	{
		clear_has_m_uint64int64();
	}
	if (m_uint64int64_.size() > 0)
	{
		m_uint64int64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64int64()
{
	if (has_m_uint64int64())
	{
		clear_has_m_uint64int64();
	}
	if (m_uint64int64_.size() > 0)
	{
		m_uint64int64_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64int64() const
{
	return m_bits.HasBit(33);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64int64()
{
	m_bits.SetBit(33);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64int64()
{
	m_bits.ClearBit(33);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringint64_size() const
{
	return m_stringint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringint64(const common::miniproto::String<A>& key) const
{
	auto it = m_stringint64_.find(key);
	if (it != m_stringint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringint64(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringint64_.find(temp);
	if (it != m_stringint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringint64(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringint64_.find(temp);
	if (it != m_stringint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> MsgTestMap<A>::m_stringint64_begin() const
{
	return m_stringint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> MsgTestMap<A>::m_stringint64_end() const
{
	return m_stringint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const common::miniproto::String<A>& key, const common::miniproto::int64& value)
{
	m_stringint64_[key] = value;
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(common::miniproto::String<A>&& key, const common::miniproto::int64& value)
{
	m_stringint64_[std::move(key)] = value;
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const common::miniproto::String<A>& key, common::miniproto::int64&& value)
{
	m_stringint64_[key] = std::move(value);
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(common::miniproto::String<A>&& key, common::miniproto::int64&& value)
{
	m_stringint64_[std::move(key)] = std::move(value);
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const char* key, const common::miniproto::int64& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringint64_[std::move(tempKey)] = value;
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const char* key, common::miniproto::int64&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const char* key, size_t keySize, const common::miniproto::int64& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringint64_[std::move(tempKey)] = value;
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringint64(const char* key, size_t keySize, common::miniproto::int64&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint64(const common::miniproto::String<A>& key)
{
	m_stringint64_.erase(key);
	if(0 == m_stringint64_.size())
	{
		clear_has_m_stringint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint64(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringint64_.erase(temp);
	if(0 == m_stringint64_.size())
	{
		clear_has_m_stringint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringint64(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringint64_.erase(temp);
	if(0 == m_stringint64_.size())
	{
		clear_has_m_stringint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringint64()
{
	if (has_m_stringint64())
	{
		clear_has_m_stringint64();
	}
	if (m_stringint64_.size() > 0)
	{
		m_stringint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringint64()
{
	if (has_m_stringint64())
	{
		clear_has_m_stringint64();
	}
	if (m_stringint64_.size() > 0)
	{
		m_stringint64_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringint64() const
{
	return m_bits.HasBit(34);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringint64()
{
	m_bits.SetBit(34);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringint64()
{
	m_bits.ClearBit(34);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32sint64_size() const
{
	return m_int32sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_int32sint64(const common::miniproto::int32& key) const
{
	auto it = m_int32sint64_.find(key);
	if (it != m_int32sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_int32sint64_begin() const
{
	return m_int32sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_int32sint64_end() const
{
	return m_int32sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint64(const common::miniproto::int32& key, const common::miniproto::int64& value)
{
	m_int32sint64_[key] = value;
	set_has_m_int32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint64(common::miniproto::int32&& key, const common::miniproto::int64& value)
{
	m_int32sint64_[std::move(key)] = value;
	set_has_m_int32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint64(const common::miniproto::int32& key, common::miniproto::int64&& value)
{
	m_int32sint64_[key] = std::move(value);
	set_has_m_int32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32sint64(common::miniproto::int32&& key, common::miniproto::int64&& value)
{
	m_int32sint64_[std::move(key)] = std::move(value);
	set_has_m_int32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32sint64(const common::miniproto::int32& key)
{
	m_int32sint64_.erase(key);
	if(0 == m_int32sint64_.size())
	{
		clear_has_m_int32sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32sint64()
{
	if (has_m_int32sint64())
	{
		clear_has_m_int32sint64();
	}
	if (m_int32sint64_.size() > 0)
	{
		m_int32sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32sint64()
{
	if (has_m_int32sint64())
	{
		clear_has_m_int32sint64();
	}
	if (m_int32sint64_.size() > 0)
	{
		m_int32sint64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32sint64() const
{
	return m_bits.HasBit(35);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32sint64()
{
	m_bits.SetBit(35);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32sint64()
{
	m_bits.ClearBit(35);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32sint64_size() const
{
	return m_sint32sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_sint32sint64(const common::miniproto::int32& key) const
{
	auto it = m_sint32sint64_.find(key);
	if (it != m_sint32sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_sint32sint64_begin() const
{
	return m_sint32sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::int64, A> MsgTestMap<A>::m_sint32sint64_end() const
{
	return m_sint32sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint64(const common::miniproto::int32& key, const common::miniproto::int64& value)
{
	m_sint32sint64_[key] = value;
	set_has_m_sint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint64(common::miniproto::int32&& key, const common::miniproto::int64& value)
{
	m_sint32sint64_[std::move(key)] = value;
	set_has_m_sint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint64(const common::miniproto::int32& key, common::miniproto::int64&& value)
{
	m_sint32sint64_[key] = std::move(value);
	set_has_m_sint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32sint64(common::miniproto::int32&& key, common::miniproto::int64&& value)
{
	m_sint32sint64_[std::move(key)] = std::move(value);
	set_has_m_sint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32sint64(const common::miniproto::int32& key)
{
	m_sint32sint64_.erase(key);
	if(0 == m_sint32sint64_.size())
	{
		clear_has_m_sint32sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32sint64()
{
	if (has_m_sint32sint64())
	{
		clear_has_m_sint32sint64();
	}
	if (m_sint32sint64_.size() > 0)
	{
		m_sint32sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32sint64()
{
	if (has_m_sint32sint64())
	{
		clear_has_m_sint32sint64();
	}
	if (m_sint32sint64_.size() > 0)
	{
		m_sint32sint64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32sint64() const
{
	return m_bits.HasBit(36);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32sint64()
{
	m_bits.SetBit(36);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32sint64()
{
	m_bits.ClearBit(36);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32sint64_size() const
{
	return m_uint32sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_uint32sint64(const common::miniproto::uint32& key) const
{
	auto it = m_uint32sint64_.find(key);
	if (it != m_uint32sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> MsgTestMap<A>::m_uint32sint64_begin() const
{
	return m_uint32sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::int64, A> MsgTestMap<A>::m_uint32sint64_end() const
{
	return m_uint32sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint64(const common::miniproto::uint32& key, const common::miniproto::int64& value)
{
	m_uint32sint64_[key] = value;
	set_has_m_uint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint64(common::miniproto::uint32&& key, const common::miniproto::int64& value)
{
	m_uint32sint64_[std::move(key)] = value;
	set_has_m_uint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint64(const common::miniproto::uint32& key, common::miniproto::int64&& value)
{
	m_uint32sint64_[key] = std::move(value);
	set_has_m_uint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32sint64(common::miniproto::uint32&& key, common::miniproto::int64&& value)
{
	m_uint32sint64_[std::move(key)] = std::move(value);
	set_has_m_uint32sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32sint64(const common::miniproto::uint32& key)
{
	m_uint32sint64_.erase(key);
	if(0 == m_uint32sint64_.size())
	{
		clear_has_m_uint32sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32sint64()
{
	if (has_m_uint32sint64())
	{
		clear_has_m_uint32sint64();
	}
	if (m_uint32sint64_.size() > 0)
	{
		m_uint32sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32sint64()
{
	if (has_m_uint32sint64())
	{
		clear_has_m_uint32sint64();
	}
	if (m_uint32sint64_.size() > 0)
	{
		m_uint32sint64_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32sint64() const
{
	return m_bits.HasBit(37);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32sint64()
{
	m_bits.SetBit(37);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32sint64()
{
	m_bits.ClearBit(37);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64sint64_size() const
{
	return m_int64sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_int64sint64(const common::miniproto::int64& key) const
{
	auto it = m_int64sint64_.find(key);
	if (it != m_int64sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_int64sint64_begin() const
{
	return m_int64sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_int64sint64_end() const
{
	return m_int64sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint64(const common::miniproto::int64& key, const common::miniproto::int64& value)
{
	m_int64sint64_[key] = value;
	set_has_m_int64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint64(common::miniproto::int64&& key, const common::miniproto::int64& value)
{
	m_int64sint64_[std::move(key)] = value;
	set_has_m_int64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint64(const common::miniproto::int64& key, common::miniproto::int64&& value)
{
	m_int64sint64_[key] = std::move(value);
	set_has_m_int64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64sint64(common::miniproto::int64&& key, common::miniproto::int64&& value)
{
	m_int64sint64_[std::move(key)] = std::move(value);
	set_has_m_int64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64sint64(const common::miniproto::int64& key)
{
	m_int64sint64_.erase(key);
	if(0 == m_int64sint64_.size())
	{
		clear_has_m_int64sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64sint64()
{
	if (has_m_int64sint64())
	{
		clear_has_m_int64sint64();
	}
	if (m_int64sint64_.size() > 0)
	{
		m_int64sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64sint64()
{
	if (has_m_int64sint64())
	{
		clear_has_m_int64sint64();
	}
	if (m_int64sint64_.size() > 0)
	{
		m_int64sint64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64sint64() const
{
	return m_bits.HasBit(38);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64sint64()
{
	m_bits.SetBit(38);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64sint64()
{
	m_bits.ClearBit(38);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64sint64_size() const
{
	return m_sint64sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_sint64sint64(const common::miniproto::int64& key) const
{
	auto it = m_sint64sint64_.find(key);
	if (it != m_sint64sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_sint64sint64_begin() const
{
	return m_sint64sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::int64, A> MsgTestMap<A>::m_sint64sint64_end() const
{
	return m_sint64sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint64(const common::miniproto::int64& key, const common::miniproto::int64& value)
{
	m_sint64sint64_[key] = value;
	set_has_m_sint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint64(common::miniproto::int64&& key, const common::miniproto::int64& value)
{
	m_sint64sint64_[std::move(key)] = value;
	set_has_m_sint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint64(const common::miniproto::int64& key, common::miniproto::int64&& value)
{
	m_sint64sint64_[key] = std::move(value);
	set_has_m_sint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64sint64(common::miniproto::int64&& key, common::miniproto::int64&& value)
{
	m_sint64sint64_[std::move(key)] = std::move(value);
	set_has_m_sint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64sint64(const common::miniproto::int64& key)
{
	m_sint64sint64_.erase(key);
	if(0 == m_sint64sint64_.size())
	{
		clear_has_m_sint64sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64sint64()
{
	if (has_m_sint64sint64())
	{
		clear_has_m_sint64sint64();
	}
	if (m_sint64sint64_.size() > 0)
	{
		m_sint64sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64sint64()
{
	if (has_m_sint64sint64())
	{
		clear_has_m_sint64sint64();
	}
	if (m_sint64sint64_.size() > 0)
	{
		m_sint64sint64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64sint64() const
{
	return m_bits.HasBit(39);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64sint64()
{
	m_bits.SetBit(39);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64sint64()
{
	m_bits.ClearBit(39);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64sint64_size() const
{
	return m_uint64sint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_uint64sint64(const common::miniproto::uint64& key) const
{
	auto it = m_uint64sint64_.find(key);
	if (it != m_uint64sint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> MsgTestMap<A>::m_uint64sint64_begin() const
{
	return m_uint64sint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::int64, A> MsgTestMap<A>::m_uint64sint64_end() const
{
	return m_uint64sint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint64(const common::miniproto::uint64& key, const common::miniproto::int64& value)
{
	m_uint64sint64_[key] = value;
	set_has_m_uint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint64(common::miniproto::uint64&& key, const common::miniproto::int64& value)
{
	m_uint64sint64_[std::move(key)] = value;
	set_has_m_uint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint64(const common::miniproto::uint64& key, common::miniproto::int64&& value)
{
	m_uint64sint64_[key] = std::move(value);
	set_has_m_uint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64sint64(common::miniproto::uint64&& key, common::miniproto::int64&& value)
{
	m_uint64sint64_[std::move(key)] = std::move(value);
	set_has_m_uint64sint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64sint64(const common::miniproto::uint64& key)
{
	m_uint64sint64_.erase(key);
	if(0 == m_uint64sint64_.size())
	{
		clear_has_m_uint64sint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64sint64()
{
	if (has_m_uint64sint64())
	{
		clear_has_m_uint64sint64();
	}
	if (m_uint64sint64_.size() > 0)
	{
		m_uint64sint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64sint64()
{
	if (has_m_uint64sint64())
	{
		clear_has_m_uint64sint64();
	}
	if (m_uint64sint64_.size() > 0)
	{
		m_uint64sint64_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64sint64() const
{
	return m_bits.HasBit(40);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64sint64()
{
	m_bits.SetBit(40);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64sint64()
{
	m_bits.ClearBit(40);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringsint64_size() const
{
	return m_stringsint64_.size();
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringsint64(const common::miniproto::String<A>& key) const
{
	auto it = m_stringsint64_.find(key);
	if (it != m_stringsint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringsint64(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringsint64_.find(temp);
	if (it != m_stringsint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::int64* MsgTestMap<A>::find_m_stringsint64(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringsint64_.find(temp);
	if (it != m_stringsint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> MsgTestMap<A>::m_stringsint64_begin() const
{
	return m_stringsint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::int64, A> MsgTestMap<A>::m_stringsint64_end() const
{
	return m_stringsint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const common::miniproto::String<A>& key, const common::miniproto::int64& value)
{
	m_stringsint64_[key] = value;
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(common::miniproto::String<A>&& key, const common::miniproto::int64& value)
{
	m_stringsint64_[std::move(key)] = value;
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const common::miniproto::String<A>& key, common::miniproto::int64&& value)
{
	m_stringsint64_[key] = std::move(value);
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(common::miniproto::String<A>&& key, common::miniproto::int64&& value)
{
	m_stringsint64_[std::move(key)] = std::move(value);
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const char* key, const common::miniproto::int64& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringsint64_[std::move(tempKey)] = value;
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const char* key, common::miniproto::int64&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringsint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const char* key, size_t keySize, const common::miniproto::int64& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringsint64_[std::move(tempKey)] = value;
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringsint64(const char* key, size_t keySize, common::miniproto::int64&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringsint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringsint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint64(const common::miniproto::String<A>& key)
{
	m_stringsint64_.erase(key);
	if(0 == m_stringsint64_.size())
	{
		clear_has_m_stringsint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint64(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringsint64_.erase(temp);
	if(0 == m_stringsint64_.size())
	{
		clear_has_m_stringsint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringsint64(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringsint64_.erase(temp);
	if(0 == m_stringsint64_.size())
	{
		clear_has_m_stringsint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringsint64()
{
	if (has_m_stringsint64())
	{
		clear_has_m_stringsint64();
	}
	if (m_stringsint64_.size() > 0)
	{
		m_stringsint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringsint64()
{
	if (has_m_stringsint64())
	{
		clear_has_m_stringsint64();
	}
	if (m_stringsint64_.size() > 0)
	{
		m_stringsint64_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::int64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringsint64() const
{
	return m_bits.HasBit(41);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringsint64()
{
	m_bits.SetBit(41);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringsint64()
{
	m_bits.ClearBit(41);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32uint64_size() const
{
	return m_int32uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_int32uint64(const common::miniproto::int32& key) const
{
	auto it = m_int32uint64_.find(key);
	if (it != m_int32uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> MsgTestMap<A>::m_int32uint64_begin() const
{
	return m_int32uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> MsgTestMap<A>::m_int32uint64_end() const
{
	return m_int32uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint64(const common::miniproto::int32& key, const common::miniproto::uint64& value)
{
	m_int32uint64_[key] = value;
	set_has_m_int32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint64(common::miniproto::int32&& key, const common::miniproto::uint64& value)
{
	m_int32uint64_[std::move(key)] = value;
	set_has_m_int32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint64(const common::miniproto::int32& key, common::miniproto::uint64&& value)
{
	m_int32uint64_[key] = std::move(value);
	set_has_m_int32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32uint64(common::miniproto::int32&& key, common::miniproto::uint64&& value)
{
	m_int32uint64_[std::move(key)] = std::move(value);
	set_has_m_int32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32uint64(const common::miniproto::int32& key)
{
	m_int32uint64_.erase(key);
	if(0 == m_int32uint64_.size())
	{
		clear_has_m_int32uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32uint64()
{
	if (has_m_int32uint64())
	{
		clear_has_m_int32uint64();
	}
	if (m_int32uint64_.size() > 0)
	{
		m_int32uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32uint64()
{
	if (has_m_int32uint64())
	{
		clear_has_m_int32uint64();
	}
	if (m_int32uint64_.size() > 0)
	{
		m_int32uint64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32uint64() const
{
	return m_bits.HasBit(42);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32uint64()
{
	m_bits.SetBit(42);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32uint64()
{
	m_bits.ClearBit(42);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32uint64_size() const
{
	return m_sint32uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_sint32uint64(const common::miniproto::int32& key) const
{
	auto it = m_sint32uint64_.find(key);
	if (it != m_sint32uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> MsgTestMap<A>::m_sint32uint64_begin() const
{
	return m_sint32uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::uint64, A> MsgTestMap<A>::m_sint32uint64_end() const
{
	return m_sint32uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint64(const common::miniproto::int32& key, const common::miniproto::uint64& value)
{
	m_sint32uint64_[key] = value;
	set_has_m_sint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint64(common::miniproto::int32&& key, const common::miniproto::uint64& value)
{
	m_sint32uint64_[std::move(key)] = value;
	set_has_m_sint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint64(const common::miniproto::int32& key, common::miniproto::uint64&& value)
{
	m_sint32uint64_[key] = std::move(value);
	set_has_m_sint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32uint64(common::miniproto::int32&& key, common::miniproto::uint64&& value)
{
	m_sint32uint64_[std::move(key)] = std::move(value);
	set_has_m_sint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32uint64(const common::miniproto::int32& key)
{
	m_sint32uint64_.erase(key);
	if(0 == m_sint32uint64_.size())
	{
		clear_has_m_sint32uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32uint64()
{
	if (has_m_sint32uint64())
	{
		clear_has_m_sint32uint64();
	}
	if (m_sint32uint64_.size() > 0)
	{
		m_sint32uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32uint64()
{
	if (has_m_sint32uint64())
	{
		clear_has_m_sint32uint64();
	}
	if (m_sint32uint64_.size() > 0)
	{
		m_sint32uint64_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32uint64() const
{
	return m_bits.HasBit(43);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32uint64()
{
	m_bits.SetBit(43);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32uint64()
{
	m_bits.ClearBit(43);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32uint64_size() const
{
	return m_uint32uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_uint32uint64(const common::miniproto::uint32& key) const
{
	auto it = m_uint32uint64_.find(key);
	if (it != m_uint32uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint64, A> MsgTestMap<A>::m_uint32uint64_begin() const
{
	return m_uint32uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::uint64, A> MsgTestMap<A>::m_uint32uint64_end() const
{
	return m_uint32uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint64(const common::miniproto::uint32& key, const common::miniproto::uint64& value)
{
	m_uint32uint64_[key] = value;
	set_has_m_uint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint64(common::miniproto::uint32&& key, const common::miniproto::uint64& value)
{
	m_uint32uint64_[std::move(key)] = value;
	set_has_m_uint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint64(const common::miniproto::uint32& key, common::miniproto::uint64&& value)
{
	m_uint32uint64_[key] = std::move(value);
	set_has_m_uint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32uint64(common::miniproto::uint32&& key, common::miniproto::uint64&& value)
{
	m_uint32uint64_[std::move(key)] = std::move(value);
	set_has_m_uint32uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32uint64(const common::miniproto::uint32& key)
{
	m_uint32uint64_.erase(key);
	if(0 == m_uint32uint64_.size())
	{
		clear_has_m_uint32uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32uint64()
{
	if (has_m_uint32uint64())
	{
		clear_has_m_uint32uint64();
	}
	if (m_uint32uint64_.size() > 0)
	{
		m_uint32uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32uint64()
{
	if (has_m_uint32uint64())
	{
		clear_has_m_uint32uint64();
	}
	if (m_uint32uint64_.size() > 0)
	{
		m_uint32uint64_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32uint64() const
{
	return m_bits.HasBit(44);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32uint64()
{
	m_bits.SetBit(44);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32uint64()
{
	m_bits.ClearBit(44);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64uint64_size() const
{
	return m_int64uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_int64uint64(const common::miniproto::int64& key) const
{
	auto it = m_int64uint64_.find(key);
	if (it != m_int64uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> MsgTestMap<A>::m_int64uint64_begin() const
{
	return m_int64uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> MsgTestMap<A>::m_int64uint64_end() const
{
	return m_int64uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint64(const common::miniproto::int64& key, const common::miniproto::uint64& value)
{
	m_int64uint64_[key] = value;
	set_has_m_int64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint64(common::miniproto::int64&& key, const common::miniproto::uint64& value)
{
	m_int64uint64_[std::move(key)] = value;
	set_has_m_int64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint64(const common::miniproto::int64& key, common::miniproto::uint64&& value)
{
	m_int64uint64_[key] = std::move(value);
	set_has_m_int64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64uint64(common::miniproto::int64&& key, common::miniproto::uint64&& value)
{
	m_int64uint64_[std::move(key)] = std::move(value);
	set_has_m_int64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64uint64(const common::miniproto::int64& key)
{
	m_int64uint64_.erase(key);
	if(0 == m_int64uint64_.size())
	{
		clear_has_m_int64uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64uint64()
{
	if (has_m_int64uint64())
	{
		clear_has_m_int64uint64();
	}
	if (m_int64uint64_.size() > 0)
	{
		m_int64uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64uint64()
{
	if (has_m_int64uint64())
	{
		clear_has_m_int64uint64();
	}
	if (m_int64uint64_.size() > 0)
	{
		m_int64uint64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64uint64() const
{
	return m_bits.HasBit(45);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64uint64()
{
	m_bits.SetBit(45);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64uint64()
{
	m_bits.ClearBit(45);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64uint64_size() const
{
	return m_sint64uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_sint64uint64(const common::miniproto::int64& key) const
{
	auto it = m_sint64uint64_.find(key);
	if (it != m_sint64uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> MsgTestMap<A>::m_sint64uint64_begin() const
{
	return m_sint64uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::uint64, A> MsgTestMap<A>::m_sint64uint64_end() const
{
	return m_sint64uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint64(const common::miniproto::int64& key, const common::miniproto::uint64& value)
{
	m_sint64uint64_[key] = value;
	set_has_m_sint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint64(common::miniproto::int64&& key, const common::miniproto::uint64& value)
{
	m_sint64uint64_[std::move(key)] = value;
	set_has_m_sint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint64(const common::miniproto::int64& key, common::miniproto::uint64&& value)
{
	m_sint64uint64_[key] = std::move(value);
	set_has_m_sint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64uint64(common::miniproto::int64&& key, common::miniproto::uint64&& value)
{
	m_sint64uint64_[std::move(key)] = std::move(value);
	set_has_m_sint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64uint64(const common::miniproto::int64& key)
{
	m_sint64uint64_.erase(key);
	if(0 == m_sint64uint64_.size())
	{
		clear_has_m_sint64uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64uint64()
{
	if (has_m_sint64uint64())
	{
		clear_has_m_sint64uint64();
	}
	if (m_sint64uint64_.size() > 0)
	{
		m_sint64uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64uint64()
{
	if (has_m_sint64uint64())
	{
		clear_has_m_sint64uint64();
	}
	if (m_sint64uint64_.size() > 0)
	{
		m_sint64uint64_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64uint64() const
{
	return m_bits.HasBit(46);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64uint64()
{
	m_bits.SetBit(46);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64uint64()
{
	m_bits.ClearBit(46);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64uint64_size() const
{
	return m_uint64uint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_uint64uint64(const common::miniproto::uint64& key) const
{
	auto it = m_uint64uint64_.find(key);
	if (it != m_uint64uint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint64, A> MsgTestMap<A>::m_uint64uint64_begin() const
{
	return m_uint64uint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::uint64, A> MsgTestMap<A>::m_uint64uint64_end() const
{
	return m_uint64uint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint64(const common::miniproto::uint64& key, const common::miniproto::uint64& value)
{
	m_uint64uint64_[key] = value;
	set_has_m_uint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint64(common::miniproto::uint64&& key, const common::miniproto::uint64& value)
{
	m_uint64uint64_[std::move(key)] = value;
	set_has_m_uint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint64(const common::miniproto::uint64& key, common::miniproto::uint64&& value)
{
	m_uint64uint64_[key] = std::move(value);
	set_has_m_uint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64uint64(common::miniproto::uint64&& key, common::miniproto::uint64&& value)
{
	m_uint64uint64_[std::move(key)] = std::move(value);
	set_has_m_uint64uint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64uint64(const common::miniproto::uint64& key)
{
	m_uint64uint64_.erase(key);
	if(0 == m_uint64uint64_.size())
	{
		clear_has_m_uint64uint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64uint64()
{
	if (has_m_uint64uint64())
	{
		clear_has_m_uint64uint64();
	}
	if (m_uint64uint64_.size() > 0)
	{
		m_uint64uint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64uint64()
{
	if (has_m_uint64uint64())
	{
		clear_has_m_uint64uint64();
	}
	if (m_uint64uint64_.size() > 0)
	{
		m_uint64uint64_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64uint64() const
{
	return m_bits.HasBit(47);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64uint64()
{
	m_bits.SetBit(47);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64uint64()
{
	m_bits.ClearBit(47);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringuint64_size() const
{
	return m_stringuint64_.size();
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_stringuint64(const common::miniproto::String<A>& key) const
{
	auto it = m_stringuint64_.find(key);
	if (it != m_stringuint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_stringuint64(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringuint64_.find(temp);
	if (it != m_stringuint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::uint64* MsgTestMap<A>::find_m_stringuint64(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringuint64_.find(temp);
	if (it != m_stringuint64_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint64, A> MsgTestMap<A>::m_stringuint64_begin() const
{
	return m_stringuint64_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::uint64, A> MsgTestMap<A>::m_stringuint64_end() const
{
	return m_stringuint64_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const common::miniproto::String<A>& key, const common::miniproto::uint64& value)
{
	m_stringuint64_[key] = value;
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(common::miniproto::String<A>&& key, const common::miniproto::uint64& value)
{
	m_stringuint64_[std::move(key)] = value;
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const common::miniproto::String<A>& key, common::miniproto::uint64&& value)
{
	m_stringuint64_[key] = std::move(value);
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(common::miniproto::String<A>&& key, common::miniproto::uint64&& value)
{
	m_stringuint64_[std::move(key)] = std::move(value);
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const char* key, const common::miniproto::uint64& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringuint64_[std::move(tempKey)] = value;
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const char* key, common::miniproto::uint64&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringuint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const char* key, size_t keySize, const common::miniproto::uint64& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringuint64_[std::move(tempKey)] = value;
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringuint64(const char* key, size_t keySize, common::miniproto::uint64&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringuint64_[std::move(tempKey)] = std::move(value);
	set_has_m_stringuint64();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint64(const common::miniproto::String<A>& key)
{
	m_stringuint64_.erase(key);
	if(0 == m_stringuint64_.size())
	{
		clear_has_m_stringuint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint64(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringuint64_.erase(temp);
	if(0 == m_stringuint64_.size())
	{
		clear_has_m_stringuint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringuint64(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringuint64_.erase(temp);
	if(0 == m_stringuint64_.size())
	{
		clear_has_m_stringuint64();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringuint64()
{
	if (has_m_stringuint64())
	{
		clear_has_m_stringuint64();
	}
	if (m_stringuint64_.size() > 0)
	{
		m_stringuint64_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringuint64()
{
	if (has_m_stringuint64())
	{
		clear_has_m_stringuint64();
	}
	if (m_stringuint64_.size() > 0)
	{
		m_stringuint64_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::uint64, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringuint64() const
{
	return m_bits.HasBit(48);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringuint64()
{
	m_bits.SetBit(48);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringuint64()
{
	m_bits.ClearBit(48);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32float_size() const
{
	return m_int32float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_int32float(const common::miniproto::int32& key) const
{
	auto it = m_int32float_.find(key);
	if (it != m_int32float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, float, A> MsgTestMap<A>::m_int32float_begin() const
{
	return m_int32float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, float, A> MsgTestMap<A>::m_int32float_end() const
{
	return m_int32float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32float(const common::miniproto::int32& key, const float& value)
{
	m_int32float_[key] = value;
	set_has_m_int32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32float(common::miniproto::int32&& key, const float& value)
{
	m_int32float_[std::move(key)] = value;
	set_has_m_int32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32float(const common::miniproto::int32& key, float&& value)
{
	m_int32float_[key] = std::move(value);
	set_has_m_int32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32float(common::miniproto::int32&& key, float&& value)
{
	m_int32float_[std::move(key)] = std::move(value);
	set_has_m_int32float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32float(const common::miniproto::int32& key)
{
	m_int32float_.erase(key);
	if(0 == m_int32float_.size())
	{
		clear_has_m_int32float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32float()
{
	if (has_m_int32float())
	{
		clear_has_m_int32float();
	}
	if (m_int32float_.size() > 0)
	{
		m_int32float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32float()
{
	if (has_m_int32float())
	{
		clear_has_m_int32float();
	}
	if (m_int32float_.size() > 0)
	{
		m_int32float_.swap(common::miniproto::Map<common::miniproto::int32, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32float() const
{
	return m_bits.HasBit(49);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32float()
{
	m_bits.SetBit(49);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32float()
{
	m_bits.ClearBit(49);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32float_size() const
{
	return m_sint32float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_sint32float(const common::miniproto::int32& key) const
{
	auto it = m_sint32float_.find(key);
	if (it != m_sint32float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, float, A> MsgTestMap<A>::m_sint32float_begin() const
{
	return m_sint32float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, float, A> MsgTestMap<A>::m_sint32float_end() const
{
	return m_sint32float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32float(const common::miniproto::int32& key, const float& value)
{
	m_sint32float_[key] = value;
	set_has_m_sint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32float(common::miniproto::int32&& key, const float& value)
{
	m_sint32float_[std::move(key)] = value;
	set_has_m_sint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32float(const common::miniproto::int32& key, float&& value)
{
	m_sint32float_[key] = std::move(value);
	set_has_m_sint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32float(common::miniproto::int32&& key, float&& value)
{
	m_sint32float_[std::move(key)] = std::move(value);
	set_has_m_sint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32float(const common::miniproto::int32& key)
{
	m_sint32float_.erase(key);
	if(0 == m_sint32float_.size())
	{
		clear_has_m_sint32float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32float()
{
	if (has_m_sint32float())
	{
		clear_has_m_sint32float();
	}
	if (m_sint32float_.size() > 0)
	{
		m_sint32float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32float()
{
	if (has_m_sint32float())
	{
		clear_has_m_sint32float();
	}
	if (m_sint32float_.size() > 0)
	{
		m_sint32float_.swap(common::miniproto::Map<common::miniproto::int32, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32float() const
{
	return m_bits.HasBit(50);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32float()
{
	m_bits.SetBit(50);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32float()
{
	m_bits.ClearBit(50);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32float_size() const
{
	return m_uint32float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_uint32float(const common::miniproto::uint32& key) const
{
	auto it = m_uint32float_.find(key);
	if (it != m_uint32float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, float, A> MsgTestMap<A>::m_uint32float_begin() const
{
	return m_uint32float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, float, A> MsgTestMap<A>::m_uint32float_end() const
{
	return m_uint32float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32float(const common::miniproto::uint32& key, const float& value)
{
	m_uint32float_[key] = value;
	set_has_m_uint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32float(common::miniproto::uint32&& key, const float& value)
{
	m_uint32float_[std::move(key)] = value;
	set_has_m_uint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32float(const common::miniproto::uint32& key, float&& value)
{
	m_uint32float_[key] = std::move(value);
	set_has_m_uint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32float(common::miniproto::uint32&& key, float&& value)
{
	m_uint32float_[std::move(key)] = std::move(value);
	set_has_m_uint32float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32float(const common::miniproto::uint32& key)
{
	m_uint32float_.erase(key);
	if(0 == m_uint32float_.size())
	{
		clear_has_m_uint32float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32float()
{
	if (has_m_uint32float())
	{
		clear_has_m_uint32float();
	}
	if (m_uint32float_.size() > 0)
	{
		m_uint32float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32float()
{
	if (has_m_uint32float())
	{
		clear_has_m_uint32float();
	}
	if (m_uint32float_.size() > 0)
	{
		m_uint32float_.swap(common::miniproto::Map<common::miniproto::uint32, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32float() const
{
	return m_bits.HasBit(51);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32float()
{
	m_bits.SetBit(51);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32float()
{
	m_bits.ClearBit(51);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64float_size() const
{
	return m_int64float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_int64float(const common::miniproto::int64& key) const
{
	auto it = m_int64float_.find(key);
	if (it != m_int64float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, float, A> MsgTestMap<A>::m_int64float_begin() const
{
	return m_int64float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, float, A> MsgTestMap<A>::m_int64float_end() const
{
	return m_int64float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64float(const common::miniproto::int64& key, const float& value)
{
	m_int64float_[key] = value;
	set_has_m_int64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64float(common::miniproto::int64&& key, const float& value)
{
	m_int64float_[std::move(key)] = value;
	set_has_m_int64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64float(const common::miniproto::int64& key, float&& value)
{
	m_int64float_[key] = std::move(value);
	set_has_m_int64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64float(common::miniproto::int64&& key, float&& value)
{
	m_int64float_[std::move(key)] = std::move(value);
	set_has_m_int64float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64float(const common::miniproto::int64& key)
{
	m_int64float_.erase(key);
	if(0 == m_int64float_.size())
	{
		clear_has_m_int64float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64float()
{
	if (has_m_int64float())
	{
		clear_has_m_int64float();
	}
	if (m_int64float_.size() > 0)
	{
		m_int64float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64float()
{
	if (has_m_int64float())
	{
		clear_has_m_int64float();
	}
	if (m_int64float_.size() > 0)
	{
		m_int64float_.swap(common::miniproto::Map<common::miniproto::int64, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64float() const
{
	return m_bits.HasBit(52);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64float()
{
	m_bits.SetBit(52);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64float()
{
	m_bits.ClearBit(52);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64float_size() const
{
	return m_sint64float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_sint64float(const common::miniproto::int64& key) const
{
	auto it = m_sint64float_.find(key);
	if (it != m_sint64float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, float, A> MsgTestMap<A>::m_sint64float_begin() const
{
	return m_sint64float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, float, A> MsgTestMap<A>::m_sint64float_end() const
{
	return m_sint64float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64float(const common::miniproto::int64& key, const float& value)
{
	m_sint64float_[key] = value;
	set_has_m_sint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64float(common::miniproto::int64&& key, const float& value)
{
	m_sint64float_[std::move(key)] = value;
	set_has_m_sint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64float(const common::miniproto::int64& key, float&& value)
{
	m_sint64float_[key] = std::move(value);
	set_has_m_sint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64float(common::miniproto::int64&& key, float&& value)
{
	m_sint64float_[std::move(key)] = std::move(value);
	set_has_m_sint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64float(const common::miniproto::int64& key)
{
	m_sint64float_.erase(key);
	if(0 == m_sint64float_.size())
	{
		clear_has_m_sint64float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64float()
{
	if (has_m_sint64float())
	{
		clear_has_m_sint64float();
	}
	if (m_sint64float_.size() > 0)
	{
		m_sint64float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64float()
{
	if (has_m_sint64float())
	{
		clear_has_m_sint64float();
	}
	if (m_sint64float_.size() > 0)
	{
		m_sint64float_.swap(common::miniproto::Map<common::miniproto::int64, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64float() const
{
	return m_bits.HasBit(53);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64float()
{
	m_bits.SetBit(53);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64float()
{
	m_bits.ClearBit(53);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64float_size() const
{
	return m_uint64float_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_uint64float(const common::miniproto::uint64& key) const
{
	auto it = m_uint64float_.find(key);
	if (it != m_uint64float_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, float, A> MsgTestMap<A>::m_uint64float_begin() const
{
	return m_uint64float_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, float, A> MsgTestMap<A>::m_uint64float_end() const
{
	return m_uint64float_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64float(const common::miniproto::uint64& key, const float& value)
{
	m_uint64float_[key] = value;
	set_has_m_uint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64float(common::miniproto::uint64&& key, const float& value)
{
	m_uint64float_[std::move(key)] = value;
	set_has_m_uint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64float(const common::miniproto::uint64& key, float&& value)
{
	m_uint64float_[key] = std::move(value);
	set_has_m_uint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64float(common::miniproto::uint64&& key, float&& value)
{
	m_uint64float_[std::move(key)] = std::move(value);
	set_has_m_uint64float();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64float(const common::miniproto::uint64& key)
{
	m_uint64float_.erase(key);
	if(0 == m_uint64float_.size())
	{
		clear_has_m_uint64float();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64float()
{
	if (has_m_uint64float())
	{
		clear_has_m_uint64float();
	}
	if (m_uint64float_.size() > 0)
	{
		m_uint64float_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64float()
{
	if (has_m_uint64float())
	{
		clear_has_m_uint64float();
	}
	if (m_uint64float_.size() > 0)
	{
		m_uint64float_.swap(common::miniproto::Map<common::miniproto::uint64, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64float() const
{
	return m_bits.HasBit(54);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64float()
{
	m_bits.SetBit(54);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64float()
{
	m_bits.ClearBit(54);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringfloat_size() const
{
	return m_stringfloat_.size();
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_stringfloat(const common::miniproto::String<A>& key) const
{
	auto it = m_stringfloat_.find(key);
	if (it != m_stringfloat_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_stringfloat(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringfloat_.find(temp);
	if (it != m_stringfloat_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const float* MsgTestMap<A>::find_m_stringfloat(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringfloat_.find(temp);
	if (it != m_stringfloat_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, float, A> MsgTestMap<A>::m_stringfloat_begin() const
{
	return m_stringfloat_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, float, A> MsgTestMap<A>::m_stringfloat_end() const
{
	return m_stringfloat_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const common::miniproto::String<A>& key, const float& value)
{
	m_stringfloat_[key] = value;
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(common::miniproto::String<A>&& key, const float& value)
{
	m_stringfloat_[std::move(key)] = value;
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const common::miniproto::String<A>& key, float&& value)
{
	m_stringfloat_[key] = std::move(value);
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(common::miniproto::String<A>&& key, float&& value)
{
	m_stringfloat_[std::move(key)] = std::move(value);
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const char* key, const float& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringfloat_[std::move(tempKey)] = value;
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const char* key, float&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringfloat_[std::move(tempKey)] = std::move(value);
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const char* key, size_t keySize, const float& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringfloat_[std::move(tempKey)] = value;
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringfloat(const char* key, size_t keySize, float&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringfloat_[std::move(tempKey)] = std::move(value);
	set_has_m_stringfloat();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringfloat(const common::miniproto::String<A>& key)
{
	m_stringfloat_.erase(key);
	if(0 == m_stringfloat_.size())
	{
		clear_has_m_stringfloat();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringfloat(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringfloat_.erase(temp);
	if(0 == m_stringfloat_.size())
	{
		clear_has_m_stringfloat();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringfloat(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringfloat_.erase(temp);
	if(0 == m_stringfloat_.size())
	{
		clear_has_m_stringfloat();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringfloat()
{
	if (has_m_stringfloat())
	{
		clear_has_m_stringfloat();
	}
	if (m_stringfloat_.size() > 0)
	{
		m_stringfloat_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringfloat()
{
	if (has_m_stringfloat())
	{
		clear_has_m_stringfloat();
	}
	if (m_stringfloat_.size() > 0)
	{
		m_stringfloat_.swap(common::miniproto::Map<common::miniproto::String<A>, float, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringfloat() const
{
	return m_bits.HasBit(55);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringfloat()
{
	m_bits.SetBit(55);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringfloat()
{
	m_bits.ClearBit(55);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32double_size() const
{
	return m_int32double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_int32double(const common::miniproto::int32& key) const
{
	auto it = m_int32double_.find(key);
	if (it != m_int32double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, double, A> MsgTestMap<A>::m_int32double_begin() const
{
	return m_int32double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, double, A> MsgTestMap<A>::m_int32double_end() const
{
	return m_int32double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32double(const common::miniproto::int32& key, const double& value)
{
	m_int32double_[key] = value;
	set_has_m_int32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32double(common::miniproto::int32&& key, const double& value)
{
	m_int32double_[std::move(key)] = value;
	set_has_m_int32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32double(const common::miniproto::int32& key, double&& value)
{
	m_int32double_[key] = std::move(value);
	set_has_m_int32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32double(common::miniproto::int32&& key, double&& value)
{
	m_int32double_[std::move(key)] = std::move(value);
	set_has_m_int32double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32double(const common::miniproto::int32& key)
{
	m_int32double_.erase(key);
	if(0 == m_int32double_.size())
	{
		clear_has_m_int32double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32double()
{
	if (has_m_int32double())
	{
		clear_has_m_int32double();
	}
	if (m_int32double_.size() > 0)
	{
		m_int32double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32double()
{
	if (has_m_int32double())
	{
		clear_has_m_int32double();
	}
	if (m_int32double_.size() > 0)
	{
		m_int32double_.swap(common::miniproto::Map<common::miniproto::int32, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32double() const
{
	return m_bits.HasBit(56);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32double()
{
	m_bits.SetBit(56);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32double()
{
	m_bits.ClearBit(56);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32double_size() const
{
	return m_sint32double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_sint32double(const common::miniproto::int32& key) const
{
	auto it = m_sint32double_.find(key);
	if (it != m_sint32double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, double, A> MsgTestMap<A>::m_sint32double_begin() const
{
	return m_sint32double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, double, A> MsgTestMap<A>::m_sint32double_end() const
{
	return m_sint32double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32double(const common::miniproto::int32& key, const double& value)
{
	m_sint32double_[key] = value;
	set_has_m_sint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32double(common::miniproto::int32&& key, const double& value)
{
	m_sint32double_[std::move(key)] = value;
	set_has_m_sint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32double(const common::miniproto::int32& key, double&& value)
{
	m_sint32double_[key] = std::move(value);
	set_has_m_sint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32double(common::miniproto::int32&& key, double&& value)
{
	m_sint32double_[std::move(key)] = std::move(value);
	set_has_m_sint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32double(const common::miniproto::int32& key)
{
	m_sint32double_.erase(key);
	if(0 == m_sint32double_.size())
	{
		clear_has_m_sint32double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32double()
{
	if (has_m_sint32double())
	{
		clear_has_m_sint32double();
	}
	if (m_sint32double_.size() > 0)
	{
		m_sint32double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32double()
{
	if (has_m_sint32double())
	{
		clear_has_m_sint32double();
	}
	if (m_sint32double_.size() > 0)
	{
		m_sint32double_.swap(common::miniproto::Map<common::miniproto::int32, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32double() const
{
	return m_bits.HasBit(57);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32double()
{
	m_bits.SetBit(57);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32double()
{
	m_bits.ClearBit(57);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32double_size() const
{
	return m_uint32double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_uint32double(const common::miniproto::uint32& key) const
{
	auto it = m_uint32double_.find(key);
	if (it != m_uint32double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, double, A> MsgTestMap<A>::m_uint32double_begin() const
{
	return m_uint32double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, double, A> MsgTestMap<A>::m_uint32double_end() const
{
	return m_uint32double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32double(const common::miniproto::uint32& key, const double& value)
{
	m_uint32double_[key] = value;
	set_has_m_uint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32double(common::miniproto::uint32&& key, const double& value)
{
	m_uint32double_[std::move(key)] = value;
	set_has_m_uint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32double(const common::miniproto::uint32& key, double&& value)
{
	m_uint32double_[key] = std::move(value);
	set_has_m_uint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32double(common::miniproto::uint32&& key, double&& value)
{
	m_uint32double_[std::move(key)] = std::move(value);
	set_has_m_uint32double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32double(const common::miniproto::uint32& key)
{
	m_uint32double_.erase(key);
	if(0 == m_uint32double_.size())
	{
		clear_has_m_uint32double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32double()
{
	if (has_m_uint32double())
	{
		clear_has_m_uint32double();
	}
	if (m_uint32double_.size() > 0)
	{
		m_uint32double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32double()
{
	if (has_m_uint32double())
	{
		clear_has_m_uint32double();
	}
	if (m_uint32double_.size() > 0)
	{
		m_uint32double_.swap(common::miniproto::Map<common::miniproto::uint32, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32double() const
{
	return m_bits.HasBit(58);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32double()
{
	m_bits.SetBit(58);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32double()
{
	m_bits.ClearBit(58);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64double_size() const
{
	return m_int64double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_int64double(const common::miniproto::int64& key) const
{
	auto it = m_int64double_.find(key);
	if (it != m_int64double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, double, A> MsgTestMap<A>::m_int64double_begin() const
{
	return m_int64double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, double, A> MsgTestMap<A>::m_int64double_end() const
{
	return m_int64double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64double(const common::miniproto::int64& key, const double& value)
{
	m_int64double_[key] = value;
	set_has_m_int64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64double(common::miniproto::int64&& key, const double& value)
{
	m_int64double_[std::move(key)] = value;
	set_has_m_int64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64double(const common::miniproto::int64& key, double&& value)
{
	m_int64double_[key] = std::move(value);
	set_has_m_int64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64double(common::miniproto::int64&& key, double&& value)
{
	m_int64double_[std::move(key)] = std::move(value);
	set_has_m_int64double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64double(const common::miniproto::int64& key)
{
	m_int64double_.erase(key);
	if(0 == m_int64double_.size())
	{
		clear_has_m_int64double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64double()
{
	if (has_m_int64double())
	{
		clear_has_m_int64double();
	}
	if (m_int64double_.size() > 0)
	{
		m_int64double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64double()
{
	if (has_m_int64double())
	{
		clear_has_m_int64double();
	}
	if (m_int64double_.size() > 0)
	{
		m_int64double_.swap(common::miniproto::Map<common::miniproto::int64, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64double() const
{
	return m_bits.HasBit(59);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64double()
{
	m_bits.SetBit(59);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64double()
{
	m_bits.ClearBit(59);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64double_size() const
{
	return m_sint64double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_sint64double(const common::miniproto::int64& key) const
{
	auto it = m_sint64double_.find(key);
	if (it != m_sint64double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, double, A> MsgTestMap<A>::m_sint64double_begin() const
{
	return m_sint64double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, double, A> MsgTestMap<A>::m_sint64double_end() const
{
	return m_sint64double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64double(const common::miniproto::int64& key, const double& value)
{
	m_sint64double_[key] = value;
	set_has_m_sint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64double(common::miniproto::int64&& key, const double& value)
{
	m_sint64double_[std::move(key)] = value;
	set_has_m_sint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64double(const common::miniproto::int64& key, double&& value)
{
	m_sint64double_[key] = std::move(value);
	set_has_m_sint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64double(common::miniproto::int64&& key, double&& value)
{
	m_sint64double_[std::move(key)] = std::move(value);
	set_has_m_sint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64double(const common::miniproto::int64& key)
{
	m_sint64double_.erase(key);
	if(0 == m_sint64double_.size())
	{
		clear_has_m_sint64double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64double()
{
	if (has_m_sint64double())
	{
		clear_has_m_sint64double();
	}
	if (m_sint64double_.size() > 0)
	{
		m_sint64double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64double()
{
	if (has_m_sint64double())
	{
		clear_has_m_sint64double();
	}
	if (m_sint64double_.size() > 0)
	{
		m_sint64double_.swap(common::miniproto::Map<common::miniproto::int64, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64double() const
{
	return m_bits.HasBit(60);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64double()
{
	m_bits.SetBit(60);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64double()
{
	m_bits.ClearBit(60);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64double_size() const
{
	return m_uint64double_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_uint64double(const common::miniproto::uint64& key) const
{
	auto it = m_uint64double_.find(key);
	if (it != m_uint64double_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, double, A> MsgTestMap<A>::m_uint64double_begin() const
{
	return m_uint64double_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, double, A> MsgTestMap<A>::m_uint64double_end() const
{
	return m_uint64double_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64double(const common::miniproto::uint64& key, const double& value)
{
	m_uint64double_[key] = value;
	set_has_m_uint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64double(common::miniproto::uint64&& key, const double& value)
{
	m_uint64double_[std::move(key)] = value;
	set_has_m_uint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64double(const common::miniproto::uint64& key, double&& value)
{
	m_uint64double_[key] = std::move(value);
	set_has_m_uint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64double(common::miniproto::uint64&& key, double&& value)
{
	m_uint64double_[std::move(key)] = std::move(value);
	set_has_m_uint64double();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64double(const common::miniproto::uint64& key)
{
	m_uint64double_.erase(key);
	if(0 == m_uint64double_.size())
	{
		clear_has_m_uint64double();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64double()
{
	if (has_m_uint64double())
	{
		clear_has_m_uint64double();
	}
	if (m_uint64double_.size() > 0)
	{
		m_uint64double_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64double()
{
	if (has_m_uint64double())
	{
		clear_has_m_uint64double();
	}
	if (m_uint64double_.size() > 0)
	{
		m_uint64double_.swap(common::miniproto::Map<common::miniproto::uint64, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64double() const
{
	return m_bits.HasBit(61);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64double()
{
	m_bits.SetBit(61);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64double()
{
	m_bits.ClearBit(61);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringdouble_size() const
{
	return m_stringdouble_.size();
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_stringdouble(const common::miniproto::String<A>& key) const
{
	auto it = m_stringdouble_.find(key);
	if (it != m_stringdouble_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_stringdouble(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringdouble_.find(temp);
	if (it != m_stringdouble_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const double* MsgTestMap<A>::find_m_stringdouble(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringdouble_.find(temp);
	if (it != m_stringdouble_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, double, A> MsgTestMap<A>::m_stringdouble_begin() const
{
	return m_stringdouble_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, double, A> MsgTestMap<A>::m_stringdouble_end() const
{
	return m_stringdouble_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const common::miniproto::String<A>& key, const double& value)
{
	m_stringdouble_[key] = value;
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(common::miniproto::String<A>&& key, const double& value)
{
	m_stringdouble_[std::move(key)] = value;
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const common::miniproto::String<A>& key, double&& value)
{
	m_stringdouble_[key] = std::move(value);
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(common::miniproto::String<A>&& key, double&& value)
{
	m_stringdouble_[std::move(key)] = std::move(value);
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const char* key, const double& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringdouble_[std::move(tempKey)] = value;
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const char* key, double&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringdouble_[std::move(tempKey)] = std::move(value);
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const char* key, size_t keySize, const double& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringdouble_[std::move(tempKey)] = value;
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringdouble(const char* key, size_t keySize, double&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringdouble_[std::move(tempKey)] = std::move(value);
	set_has_m_stringdouble();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringdouble(const common::miniproto::String<A>& key)
{
	m_stringdouble_.erase(key);
	if(0 == m_stringdouble_.size())
	{
		clear_has_m_stringdouble();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringdouble(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringdouble_.erase(temp);
	if(0 == m_stringdouble_.size())
	{
		clear_has_m_stringdouble();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringdouble(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringdouble_.erase(temp);
	if(0 == m_stringdouble_.size())
	{
		clear_has_m_stringdouble();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringdouble()
{
	if (has_m_stringdouble())
	{
		clear_has_m_stringdouble();
	}
	if (m_stringdouble_.size() > 0)
	{
		m_stringdouble_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringdouble()
{
	if (has_m_stringdouble())
	{
		clear_has_m_stringdouble();
	}
	if (m_stringdouble_.size() > 0)
	{
		m_stringdouble_.swap(common::miniproto::Map<common::miniproto::String<A>, double, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringdouble() const
{
	return m_bits.HasBit(62);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringdouble()
{
	m_bits.SetBit(62);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringdouble()
{
	m_bits.ClearBit(62);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32enum_size() const
{
	return m_int32enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_int32enum(const common::miniproto::int32& key) const
{
	auto it = m_int32enum_.find(key);
	if (it != m_int32enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> MsgTestMap<A>::m_int32enum_begin() const
{
	return m_int32enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> MsgTestMap<A>::m_int32enum_end() const
{
	return m_int32enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32enum(const common::miniproto::int32& key, const common::proto1::EnumTest& value)
{
	m_int32enum_[key] = value;
	set_has_m_int32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32enum(common::miniproto::int32&& key, const common::proto1::EnumTest& value)
{
	m_int32enum_[std::move(key)] = value;
	set_has_m_int32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32enum(const common::miniproto::int32& key, common::proto1::EnumTest&& value)
{
	m_int32enum_[key] = std::move(value);
	set_has_m_int32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32enum(common::miniproto::int32&& key, common::proto1::EnumTest&& value)
{
	m_int32enum_[std::move(key)] = std::move(value);
	set_has_m_int32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32enum(const common::miniproto::int32& key)
{
	m_int32enum_.erase(key);
	if(0 == m_int32enum_.size())
	{
		clear_has_m_int32enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32enum()
{
	if (has_m_int32enum())
	{
		clear_has_m_int32enum();
	}
	if (m_int32enum_.size() > 0)
	{
		m_int32enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32enum()
{
	if (has_m_int32enum())
	{
		clear_has_m_int32enum();
	}
	if (m_int32enum_.size() > 0)
	{
		m_int32enum_.swap(common::miniproto::Map<common::miniproto::int32, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32enum() const
{
	return m_bits.HasBit(63);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32enum()
{
	m_bits.SetBit(63);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32enum()
{
	m_bits.ClearBit(63);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32enum_size() const
{
	return m_sint32enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_sint32enum(const common::miniproto::int32& key) const
{
	auto it = m_sint32enum_.find(key);
	if (it != m_sint32enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> MsgTestMap<A>::m_sint32enum_begin() const
{
	return m_sint32enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::EnumTest, A> MsgTestMap<A>::m_sint32enum_end() const
{
	return m_sint32enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32enum(const common::miniproto::int32& key, const common::proto1::EnumTest& value)
{
	m_sint32enum_[key] = value;
	set_has_m_sint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32enum(common::miniproto::int32&& key, const common::proto1::EnumTest& value)
{
	m_sint32enum_[std::move(key)] = value;
	set_has_m_sint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32enum(const common::miniproto::int32& key, common::proto1::EnumTest&& value)
{
	m_sint32enum_[key] = std::move(value);
	set_has_m_sint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32enum(common::miniproto::int32&& key, common::proto1::EnumTest&& value)
{
	m_sint32enum_[std::move(key)] = std::move(value);
	set_has_m_sint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32enum(const common::miniproto::int32& key)
{
	m_sint32enum_.erase(key);
	if(0 == m_sint32enum_.size())
	{
		clear_has_m_sint32enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32enum()
{
	if (has_m_sint32enum())
	{
		clear_has_m_sint32enum();
	}
	if (m_sint32enum_.size() > 0)
	{
		m_sint32enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32enum()
{
	if (has_m_sint32enum())
	{
		clear_has_m_sint32enum();
	}
	if (m_sint32enum_.size() > 0)
	{
		m_sint32enum_.swap(common::miniproto::Map<common::miniproto::int32, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32enum() const
{
	return m_bits.HasBit(64);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32enum()
{
	m_bits.SetBit(64);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32enum()
{
	m_bits.ClearBit(64);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32enum_size() const
{
	return m_uint32enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_uint32enum(const common::miniproto::uint32& key) const
{
	auto it = m_uint32enum_.find(key);
	if (it != m_uint32enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::proto1::EnumTest, A> MsgTestMap<A>::m_uint32enum_begin() const
{
	return m_uint32enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::proto1::EnumTest, A> MsgTestMap<A>::m_uint32enum_end() const
{
	return m_uint32enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32enum(const common::miniproto::uint32& key, const common::proto1::EnumTest& value)
{
	m_uint32enum_[key] = value;
	set_has_m_uint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32enum(common::miniproto::uint32&& key, const common::proto1::EnumTest& value)
{
	m_uint32enum_[std::move(key)] = value;
	set_has_m_uint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32enum(const common::miniproto::uint32& key, common::proto1::EnumTest&& value)
{
	m_uint32enum_[key] = std::move(value);
	set_has_m_uint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32enum(common::miniproto::uint32&& key, common::proto1::EnumTest&& value)
{
	m_uint32enum_[std::move(key)] = std::move(value);
	set_has_m_uint32enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32enum(const common::miniproto::uint32& key)
{
	m_uint32enum_.erase(key);
	if(0 == m_uint32enum_.size())
	{
		clear_has_m_uint32enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32enum()
{
	if (has_m_uint32enum())
	{
		clear_has_m_uint32enum();
	}
	if (m_uint32enum_.size() > 0)
	{
		m_uint32enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32enum()
{
	if (has_m_uint32enum())
	{
		clear_has_m_uint32enum();
	}
	if (m_uint32enum_.size() > 0)
	{
		m_uint32enum_.swap(common::miniproto::Map<common::miniproto::uint32, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32enum() const
{
	return m_bits.HasBit(65);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32enum()
{
	m_bits.SetBit(65);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32enum()
{
	m_bits.ClearBit(65);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64enum_size() const
{
	return m_int64enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_int64enum(const common::miniproto::int64& key) const
{
	auto it = m_int64enum_.find(key);
	if (it != m_int64enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> MsgTestMap<A>::m_int64enum_begin() const
{
	return m_int64enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> MsgTestMap<A>::m_int64enum_end() const
{
	return m_int64enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64enum(const common::miniproto::int64& key, const common::proto1::EnumTest& value)
{
	m_int64enum_[key] = value;
	set_has_m_int64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64enum(common::miniproto::int64&& key, const common::proto1::EnumTest& value)
{
	m_int64enum_[std::move(key)] = value;
	set_has_m_int64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64enum(const common::miniproto::int64& key, common::proto1::EnumTest&& value)
{
	m_int64enum_[key] = std::move(value);
	set_has_m_int64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64enum(common::miniproto::int64&& key, common::proto1::EnumTest&& value)
{
	m_int64enum_[std::move(key)] = std::move(value);
	set_has_m_int64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64enum(const common::miniproto::int64& key)
{
	m_int64enum_.erase(key);
	if(0 == m_int64enum_.size())
	{
		clear_has_m_int64enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64enum()
{
	if (has_m_int64enum())
	{
		clear_has_m_int64enum();
	}
	if (m_int64enum_.size() > 0)
	{
		m_int64enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64enum()
{
	if (has_m_int64enum())
	{
		clear_has_m_int64enum();
	}
	if (m_int64enum_.size() > 0)
	{
		m_int64enum_.swap(common::miniproto::Map<common::miniproto::int64, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64enum() const
{
	return m_bits.HasBit(66);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64enum()
{
	m_bits.SetBit(66);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64enum()
{
	m_bits.ClearBit(66);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64enum_size() const
{
	return m_sint64enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_sint64enum(const common::miniproto::int64& key) const
{
	auto it = m_sint64enum_.find(key);
	if (it != m_sint64enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> MsgTestMap<A>::m_sint64enum_begin() const
{
	return m_sint64enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::proto1::EnumTest, A> MsgTestMap<A>::m_sint64enum_end() const
{
	return m_sint64enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64enum(const common::miniproto::int64& key, const common::proto1::EnumTest& value)
{
	m_sint64enum_[key] = value;
	set_has_m_sint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64enum(common::miniproto::int64&& key, const common::proto1::EnumTest& value)
{
	m_sint64enum_[std::move(key)] = value;
	set_has_m_sint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64enum(const common::miniproto::int64& key, common::proto1::EnumTest&& value)
{
	m_sint64enum_[key] = std::move(value);
	set_has_m_sint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64enum(common::miniproto::int64&& key, common::proto1::EnumTest&& value)
{
	m_sint64enum_[std::move(key)] = std::move(value);
	set_has_m_sint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64enum(const common::miniproto::int64& key)
{
	m_sint64enum_.erase(key);
	if(0 == m_sint64enum_.size())
	{
		clear_has_m_sint64enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64enum()
{
	if (has_m_sint64enum())
	{
		clear_has_m_sint64enum();
	}
	if (m_sint64enum_.size() > 0)
	{
		m_sint64enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64enum()
{
	if (has_m_sint64enum())
	{
		clear_has_m_sint64enum();
	}
	if (m_sint64enum_.size() > 0)
	{
		m_sint64enum_.swap(common::miniproto::Map<common::miniproto::int64, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64enum() const
{
	return m_bits.HasBit(67);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64enum()
{
	m_bits.SetBit(67);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64enum()
{
	m_bits.ClearBit(67);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64enum_size() const
{
	return m_uint64enum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_uint64enum(const common::miniproto::uint64& key) const
{
	auto it = m_uint64enum_.find(key);
	if (it != m_uint64enum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::proto1::EnumTest, A> MsgTestMap<A>::m_uint64enum_begin() const
{
	return m_uint64enum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::proto1::EnumTest, A> MsgTestMap<A>::m_uint64enum_end() const
{
	return m_uint64enum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64enum(const common::miniproto::uint64& key, const common::proto1::EnumTest& value)
{
	m_uint64enum_[key] = value;
	set_has_m_uint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64enum(common::miniproto::uint64&& key, const common::proto1::EnumTest& value)
{
	m_uint64enum_[std::move(key)] = value;
	set_has_m_uint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64enum(const common::miniproto::uint64& key, common::proto1::EnumTest&& value)
{
	m_uint64enum_[key] = std::move(value);
	set_has_m_uint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64enum(common::miniproto::uint64&& key, common::proto1::EnumTest&& value)
{
	m_uint64enum_[std::move(key)] = std::move(value);
	set_has_m_uint64enum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64enum(const common::miniproto::uint64& key)
{
	m_uint64enum_.erase(key);
	if(0 == m_uint64enum_.size())
	{
		clear_has_m_uint64enum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64enum()
{
	if (has_m_uint64enum())
	{
		clear_has_m_uint64enum();
	}
	if (m_uint64enum_.size() > 0)
	{
		m_uint64enum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64enum()
{
	if (has_m_uint64enum())
	{
		clear_has_m_uint64enum();
	}
	if (m_uint64enum_.size() > 0)
	{
		m_uint64enum_.swap(common::miniproto::Map<common::miniproto::uint64, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64enum() const
{
	return m_bits.HasBit(68);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64enum()
{
	m_bits.SetBit(68);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64enum()
{
	m_bits.ClearBit(68);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringenum_size() const
{
	return m_stringenum_.size();
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_stringenum(const common::miniproto::String<A>& key) const
{
	auto it = m_stringenum_.find(key);
	if (it != m_stringenum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_stringenum(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringenum_.find(temp);
	if (it != m_stringenum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::proto1::EnumTest* MsgTestMap<A>::find_m_stringenum(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringenum_.find(temp);
	if (it != m_stringenum_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::proto1::EnumTest, A> MsgTestMap<A>::m_stringenum_begin() const
{
	return m_stringenum_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::proto1::EnumTest, A> MsgTestMap<A>::m_stringenum_end() const
{
	return m_stringenum_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const common::miniproto::String<A>& key, const common::proto1::EnumTest& value)
{
	m_stringenum_[key] = value;
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(common::miniproto::String<A>&& key, const common::proto1::EnumTest& value)
{
	m_stringenum_[std::move(key)] = value;
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const common::miniproto::String<A>& key, common::proto1::EnumTest&& value)
{
	m_stringenum_[key] = std::move(value);
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(common::miniproto::String<A>&& key, common::proto1::EnumTest&& value)
{
	m_stringenum_[std::move(key)] = std::move(value);
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const char* key, const common::proto1::EnumTest& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringenum_[std::move(tempKey)] = value;
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const char* key, common::proto1::EnumTest&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringenum_[std::move(tempKey)] = std::move(value);
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const char* key, size_t keySize, const common::proto1::EnumTest& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringenum_[std::move(tempKey)] = value;
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringenum(const char* key, size_t keySize, common::proto1::EnumTest&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringenum_[std::move(tempKey)] = std::move(value);
	set_has_m_stringenum();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringenum(const common::miniproto::String<A>& key)
{
	m_stringenum_.erase(key);
	if(0 == m_stringenum_.size())
	{
		clear_has_m_stringenum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringenum(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringenum_.erase(temp);
	if(0 == m_stringenum_.size())
	{
		clear_has_m_stringenum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringenum(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringenum_.erase(temp);
	if(0 == m_stringenum_.size())
	{
		clear_has_m_stringenum();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringenum()
{
	if (has_m_stringenum())
	{
		clear_has_m_stringenum();
	}
	if (m_stringenum_.size() > 0)
	{
		m_stringenum_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringenum()
{
	if (has_m_stringenum())
	{
		clear_has_m_stringenum();
	}
	if (m_stringenum_.size() > 0)
	{
		m_stringenum_.swap(common::miniproto::Map<common::miniproto::String<A>, common::proto1::EnumTest, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringenum() const
{
	return m_bits.HasBit(69);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringenum()
{
	m_bits.SetBit(69);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringenum()
{
	m_bits.ClearBit(69);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int32string_size() const
{
	return m_int32string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_int32string(const common::miniproto::int32& key) const
{
	auto it = m_int32string_.find(key);
	if (it != m_int32string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> MsgTestMap<A>::m_int32string_begin() const
{
	return m_int32string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> MsgTestMap<A>::m_int32string_end() const
{
	return m_int32string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(const common::miniproto::int32& key, const common::miniproto::String<A>& value)
{
	m_int32string_[key] = value;
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(common::miniproto::int32&& key, const common::miniproto::String<A>& value)
{
	m_int32string_[std::move(key)] = value;
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(const common::miniproto::int32& key, common::miniproto::String<A>&& value)
{
	m_int32string_[key] = std::move(value);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(common::miniproto::int32&& key, common::miniproto::String<A>&& value)
{
	m_int32string_[std::move(key)] = std::move(value);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(const common::miniproto::int32& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_int32string_[key] = std::move(tempValue);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(common::miniproto::int32&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_int32string_[std::move(key)] = std::move(tempValue);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(const common::miniproto::int32& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_int32string_[key] = std::move(tempValue);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int32string(common::miniproto::int32&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_int32string_[std::move(key)] = std::move(tempValue);
	set_has_m_int32string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int32string(const common::miniproto::int32& key)
{
	m_int32string_.erase(key);
	if(0 == m_int32string_.size())
	{
		clear_has_m_int32string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int32string()
{
	if (has_m_int32string())
	{
		clear_has_m_int32string();
	}
	if (m_int32string_.size() > 0)
	{
		m_int32string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int32string()
{
	if (has_m_int32string())
	{
		clear_has_m_int32string();
	}
	if (m_int32string_.size() > 0)
	{
		m_int32string_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int32string() const
{
	return m_bits.HasBit(70);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int32string()
{
	m_bits.SetBit(70);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int32string()
{
	m_bits.ClearBit(70);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint32string_size() const
{
	return m_sint32string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_sint32string(const common::miniproto::int32& key) const
{
	auto it = m_sint32string_.find(key);
	if (it != m_sint32string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> MsgTestMap<A>::m_sint32string_begin() const
{
	return m_sint32string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::miniproto::String<A>, A> MsgTestMap<A>::m_sint32string_end() const
{
	return m_sint32string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(const common::miniproto::int32& key, const common::miniproto::String<A>& value)
{
	m_sint32string_[key] = value;
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(common::miniproto::int32&& key, const common::miniproto::String<A>& value)
{
	m_sint32string_[std::move(key)] = value;
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(const common::miniproto::int32& key, common::miniproto::String<A>&& value)
{
	m_sint32string_[key] = std::move(value);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(common::miniproto::int32&& key, common::miniproto::String<A>&& value)
{
	m_sint32string_[std::move(key)] = std::move(value);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(const common::miniproto::int32& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_sint32string_[key] = std::move(tempValue);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(common::miniproto::int32&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_sint32string_[std::move(key)] = std::move(tempValue);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(const common::miniproto::int32& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_sint32string_[key] = std::move(tempValue);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint32string(common::miniproto::int32&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_sint32string_[std::move(key)] = std::move(tempValue);
	set_has_m_sint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint32string(const common::miniproto::int32& key)
{
	m_sint32string_.erase(key);
	if(0 == m_sint32string_.size())
	{
		clear_has_m_sint32string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint32string()
{
	if (has_m_sint32string())
	{
		clear_has_m_sint32string();
	}
	if (m_sint32string_.size() > 0)
	{
		m_sint32string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint32string()
{
	if (has_m_sint32string())
	{
		clear_has_m_sint32string();
	}
	if (m_sint32string_.size() > 0)
	{
		m_sint32string_.swap(common::miniproto::Map<common::miniproto::int32, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint32string() const
{
	return m_bits.HasBit(71);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint32string()
{
	m_bits.SetBit(71);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint32string()
{
	m_bits.ClearBit(71);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint32string_size() const
{
	return m_uint32string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_uint32string(const common::miniproto::uint32& key) const
{
	auto it = m_uint32string_.find(key);
	if (it != m_uint32string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::String<A>, A> MsgTestMap<A>::m_uint32string_begin() const
{
	return m_uint32string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint32, common::miniproto::String<A>, A> MsgTestMap<A>::m_uint32string_end() const
{
	return m_uint32string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(const common::miniproto::uint32& key, const common::miniproto::String<A>& value)
{
	m_uint32string_[key] = value;
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(common::miniproto::uint32&& key, const common::miniproto::String<A>& value)
{
	m_uint32string_[std::move(key)] = value;
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(const common::miniproto::uint32& key, common::miniproto::String<A>&& value)
{
	m_uint32string_[key] = std::move(value);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(common::miniproto::uint32&& key, common::miniproto::String<A>&& value)
{
	m_uint32string_[std::move(key)] = std::move(value);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(const common::miniproto::uint32& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_uint32string_[key] = std::move(tempValue);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(common::miniproto::uint32&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_uint32string_[std::move(key)] = std::move(tempValue);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(const common::miniproto::uint32& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_uint32string_[key] = std::move(tempValue);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint32string(common::miniproto::uint32&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_uint32string_[std::move(key)] = std::move(tempValue);
	set_has_m_uint32string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint32string(const common::miniproto::uint32& key)
{
	m_uint32string_.erase(key);
	if(0 == m_uint32string_.size())
	{
		clear_has_m_uint32string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint32string()
{
	if (has_m_uint32string())
	{
		clear_has_m_uint32string();
	}
	if (m_uint32string_.size() > 0)
	{
		m_uint32string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint32string()
{
	if (has_m_uint32string())
	{
		clear_has_m_uint32string();
	}
	if (m_uint32string_.size() > 0)
	{
		m_uint32string_.swap(common::miniproto::Map<common::miniproto::uint32, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint32string() const
{
	return m_bits.HasBit(72);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint32string()
{
	m_bits.SetBit(72);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint32string()
{
	m_bits.ClearBit(72);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_int64string_size() const
{
	return m_int64string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_int64string(const common::miniproto::int64& key) const
{
	auto it = m_int64string_.find(key);
	if (it != m_int64string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> MsgTestMap<A>::m_int64string_begin() const
{
	return m_int64string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> MsgTestMap<A>::m_int64string_end() const
{
	return m_int64string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(const common::miniproto::int64& key, const common::miniproto::String<A>& value)
{
	m_int64string_[key] = value;
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(common::miniproto::int64&& key, const common::miniproto::String<A>& value)
{
	m_int64string_[std::move(key)] = value;
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(const common::miniproto::int64& key, common::miniproto::String<A>&& value)
{
	m_int64string_[key] = std::move(value);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(common::miniproto::int64&& key, common::miniproto::String<A>&& value)
{
	m_int64string_[std::move(key)] = std::move(value);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(const common::miniproto::int64& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_int64string_[key] = std::move(tempValue);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(common::miniproto::int64&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_int64string_[std::move(key)] = std::move(tempValue);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(const common::miniproto::int64& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_int64string_[key] = std::move(tempValue);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_int64string(common::miniproto::int64&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_int64string_[std::move(key)] = std::move(tempValue);
	set_has_m_int64string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_int64string(const common::miniproto::int64& key)
{
	m_int64string_.erase(key);
	if(0 == m_int64string_.size())
	{
		clear_has_m_int64string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_int64string()
{
	if (has_m_int64string())
	{
		clear_has_m_int64string();
	}
	if (m_int64string_.size() > 0)
	{
		m_int64string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_int64string()
{
	if (has_m_int64string())
	{
		clear_has_m_int64string();
	}
	if (m_int64string_.size() > 0)
	{
		m_int64string_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_int64string() const
{
	return m_bits.HasBit(73);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_int64string()
{
	m_bits.SetBit(73);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_int64string()
{
	m_bits.ClearBit(73);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_sint64string_size() const
{
	return m_sint64string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_sint64string(const common::miniproto::int64& key) const
{
	auto it = m_sint64string_.find(key);
	if (it != m_sint64string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> MsgTestMap<A>::m_sint64string_begin() const
{
	return m_sint64string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int64, common::miniproto::String<A>, A> MsgTestMap<A>::m_sint64string_end() const
{
	return m_sint64string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(const common::miniproto::int64& key, const common::miniproto::String<A>& value)
{
	m_sint64string_[key] = value;
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(common::miniproto::int64&& key, const common::miniproto::String<A>& value)
{
	m_sint64string_[std::move(key)] = value;
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(const common::miniproto::int64& key, common::miniproto::String<A>&& value)
{
	m_sint64string_[key] = std::move(value);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(common::miniproto::int64&& key, common::miniproto::String<A>&& value)
{
	m_sint64string_[std::move(key)] = std::move(value);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(const common::miniproto::int64& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_sint64string_[key] = std::move(tempValue);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(common::miniproto::int64&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_sint64string_[std::move(key)] = std::move(tempValue);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(const common::miniproto::int64& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_sint64string_[key] = std::move(tempValue);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_sint64string(common::miniproto::int64&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_sint64string_[std::move(key)] = std::move(tempValue);
	set_has_m_sint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_sint64string(const common::miniproto::int64& key)
{
	m_sint64string_.erase(key);
	if(0 == m_sint64string_.size())
	{
		clear_has_m_sint64string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_sint64string()
{
	if (has_m_sint64string())
	{
		clear_has_m_sint64string();
	}
	if (m_sint64string_.size() > 0)
	{
		m_sint64string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_sint64string()
{
	if (has_m_sint64string())
	{
		clear_has_m_sint64string();
	}
	if (m_sint64string_.size() > 0)
	{
		m_sint64string_.swap(common::miniproto::Map<common::miniproto::int64, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_sint64string() const
{
	return m_bits.HasBit(74);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_sint64string()
{
	m_bits.SetBit(74);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_sint64string()
{
	m_bits.ClearBit(74);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_uint64string_size() const
{
	return m_uint64string_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_uint64string(const common::miniproto::uint64& key) const
{
	auto it = m_uint64string_.find(key);
	if (it != m_uint64string_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::String<A>, A> MsgTestMap<A>::m_uint64string_begin() const
{
	return m_uint64string_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::uint64, common::miniproto::String<A>, A> MsgTestMap<A>::m_uint64string_end() const
{
	return m_uint64string_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(const common::miniproto::uint64& key, const common::miniproto::String<A>& value)
{
	m_uint64string_[key] = value;
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(common::miniproto::uint64&& key, const common::miniproto::String<A>& value)
{
	m_uint64string_[std::move(key)] = value;
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(const common::miniproto::uint64& key, common::miniproto::String<A>&& value)
{
	m_uint64string_[key] = std::move(value);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(common::miniproto::uint64&& key, common::miniproto::String<A>&& value)
{
	m_uint64string_[std::move(key)] = std::move(value);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(const common::miniproto::uint64& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_uint64string_[key] = std::move(tempValue);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(common::miniproto::uint64&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_uint64string_[std::move(key)] = std::move(tempValue);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(const common::miniproto::uint64& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_uint64string_[key] = std::move(tempValue);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_uint64string(common::miniproto::uint64&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_uint64string_[std::move(key)] = std::move(tempValue);
	set_has_m_uint64string();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_uint64string(const common::miniproto::uint64& key)
{
	m_uint64string_.erase(key);
	if(0 == m_uint64string_.size())
	{
		clear_has_m_uint64string();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_uint64string()
{
	if (has_m_uint64string())
	{
		clear_has_m_uint64string();
	}
	if (m_uint64string_.size() > 0)
	{
		m_uint64string_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_uint64string()
{
	if (has_m_uint64string())
	{
		clear_has_m_uint64string();
	}
	if (m_uint64string_.size() > 0)
	{
		m_uint64string_.swap(common::miniproto::Map<common::miniproto::uint64, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_uint64string() const
{
	return m_bits.HasBit(75);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_uint64string()
{
	m_bits.SetBit(75);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_uint64string()
{
	m_bits.ClearBit(75);
}

template <template<typename> class A>
size_t MsgTestMap<A>::m_stringstring_size() const
{
	return m_stringstring_.size();
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_stringstring(const common::miniproto::String<A>& key) const
{
	auto it = m_stringstring_.find(key);
	if (it != m_stringstring_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_stringstring(const char* key) const
{
	common::miniproto::String<A> temp(key);
	auto it = m_stringstring_.find(temp);
	if (it != m_stringstring_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
const common::miniproto::String<A>* MsgTestMap<A>::find_m_stringstring(const char* key, size_t keySize) const
{
	common::miniproto::String<A> temp(key, keySize);
	auto it = m_stringstring_.find(temp);
	if (it != m_stringstring_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::String<A>, A> MsgTestMap<A>::m_stringstring_begin() const
{
	return m_stringstring_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::String<A>, common::miniproto::String<A>, A> MsgTestMap<A>::m_stringstring_end() const
{
	return m_stringstring_.end();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const common::miniproto::String<A>& key, const common::miniproto::String<A>& value)
{
	m_stringstring_[key] = value;
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(common::miniproto::String<A>&& key, const common::miniproto::String<A>& value)
{
	m_stringstring_[std::move(key)] = value;
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const common::miniproto::String<A>& key, common::miniproto::String<A>&& value)
{
	m_stringstring_[key] = std::move(value);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(common::miniproto::String<A>&& key, common::miniproto::String<A>&& value)
{
	m_stringstring_[std::move(key)] = std::move(value);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, const common::miniproto::String<A>& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringstring_[std::move(tempKey)] = value;
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, common::miniproto::String<A>&& value)
{
	common::miniproto::String<A> tempKey(key);
	m_stringstring_[std::move(tempKey)] = std::move(value);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, size_t keySize, const common::miniproto::String<A>& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringstring_[std::move(tempKey)] = value;
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, size_t keySize, common::miniproto::String<A>&& value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	m_stringstring_[std::move(tempKey)] = std::move(value);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const common::miniproto::String<A>& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_stringstring_[key] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(common::miniproto::String<A>&& key, const char* value)
{
	common::miniproto::String<A> tempValue(value);
	m_stringstring_[std::move(key)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, const char* value)
{
	common::miniproto::String<A> tempKey(key);
	common::miniproto::String<A> tempValue(value);
	m_stringstring_[std::move(tempKey)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, size_t keySize, const char* value)
{
	common::miniproto::String<A> tempKey(key, keySize);
	common::miniproto::String<A> tempValue(value);
	m_stringstring_[std::move(tempKey)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const common::miniproto::String<A>& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_stringstring_[key] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(common::miniproto::String<A>&& key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempValue(value, valueSize);
	m_stringstring_[std::move(key)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempKey(key);
	common::miniproto::String<A> tempValue(value, valueSize);
	m_stringstring_[std::move(tempKey)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::add_m_stringstring(const char* key, size_t keySize, const char* value, size_t valueSize)
{
	common::miniproto::String<A> tempKey(key, keySize);
	common::miniproto::String<A> tempValue(value, valueSize);
	m_stringstring_[std::move(tempKey)] = std::move(tempValue);
	set_has_m_stringstring();
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringstring(const common::miniproto::String<A>& key)
{
	m_stringstring_.erase(key);
	if(0 == m_stringstring_.size())
	{
		clear_has_m_stringstring();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringstring(const char* key)
{
	common::miniproto::String<A> temp(key);
	m_stringstring_.erase(temp);
	if(0 == m_stringstring_.size())
	{
		clear_has_m_stringstring();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::remove_m_stringstring(const char* key, size_t keySize)
{
	common::miniproto::String<A> temp(key, keySize);
	m_stringstring_.erase(temp);
	if(0 == m_stringstring_.size())
	{
		clear_has_m_stringstring();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::clear_m_stringstring()
{
	if (has_m_stringstring())
	{
		clear_has_m_stringstring();
	}
	if (m_stringstring_.size() > 0)
	{
		m_stringstring_.clear();
	}
}
template <template<typename> class A>
void MsgTestMap<A>::release_m_stringstring()
{
	if (has_m_stringstring())
	{
		clear_has_m_stringstring();
	}
	if (m_stringstring_.size() > 0)
	{
		m_stringstring_.swap(common::miniproto::Map<common::miniproto::String<A>, common::miniproto::String<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTestMap<A>::has_m_stringstring() const
{
	return m_bits.HasBit(76);
}
template <template<typename> class A>
void MsgTestMap<A>::set_has_m_stringstring()
{
	m_bits.SetBit(76);
}
template <template<typename> class A>
void MsgTestMap<A>::clear_has_m_stringstring()
{
	m_bits.ClearBit(76);
}

template <template<typename> class A = std::allocator>
class MsgTest : public common::miniproto::ProtoBase
{
public:
	MsgTest();
	MsgTest(const MsgTest<A>& other);
	MsgTest(MsgTest<A>&& other);
	virtual ~MsgTest();
	MsgTest<A>& operator = (const MsgTest<A>& other);
	MsgTest<A>& operator = (MsgTest<A>&& other);

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
	void set_m_testsingular(const common::proto1::MsgTestSingular<A>& value);
	void set_m_testsingular(common::proto1::MsgTestSingular<A>&& value);
	common::proto1::MsgTestSingular<A>& m_testsingular();
public:
	const common::proto1::MsgTestSingular<A>& m_testsingular() const;
public:
	void clear_m_testsingular();
	void release_m_testsingular();
public:
	bool has_m_testsingular() const;
private:
	void set_has_m_testsingular();
	void clear_has_m_testsingular();
private:
	common::proto1::MsgTestSingular<A> m_testsingular_;

public:
	void reserve_m_testsingular_array(size_t size);
	void set_m_testsingular_array(common::miniproto::uint32 index, const common::proto1::MsgTestSingular<A>& value);
	void set_m_testsingular_array(common::miniproto::uint32 index, common::proto1::MsgTestSingular<A>&& value);
	void add_m_testsingular_array(const common::proto1::MsgTestSingular<A>& value);
	void add_m_testsingular_array(common::proto1::MsgTestSingular<A>&& value);
	common::proto1::MsgTestSingular<A>* add_m_testsingular_array();
public:
	size_t m_testsingular_array_size() const;
	const common::proto1::MsgTestSingular<A>& m_testsingular_array(common::miniproto::uint32 index) const;
public:
	void clear_m_testsingular_array();
	void release_m_testsingular_array();
public:
	bool has_m_testsingular_array() const;
private:
	void set_has_m_testsingular_array();
	void clear_has_m_testsingular_array();
private:
	common::miniproto::Array<common::proto1::MsgTestSingular<A>, A> m_testsingular_array_;

public:
	void add_m_testsingular_map(const common::miniproto::int32& key, const common::proto1::MsgTestSingular<A>& value);
	void add_m_testsingular_map(common::miniproto::int32&& key, const common::proto1::MsgTestSingular<A>& value);
	void add_m_testsingular_map(const common::miniproto::int32& key, common::proto1::MsgTestSingular<A>&& value);
	void add_m_testsingular_map(common::miniproto::int32&& key, common::proto1::MsgTestSingular<A>&& value);
	void remove_m_testsingular_map(const common::miniproto::int32& key);
public:
	size_t m_testsingular_map_size() const;
	const common::proto1::MsgTestSingular<A>* find_m_testsingular_map(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A> m_testsingular_map_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A> m_testsingular_map_end() const;
public:
	void clear_m_testsingular_map();
	void release_m_testsingular_map();
public:
	bool has_m_testsingular_map() const;
private:
	void set_has_m_testsingular_map();
	void clear_has_m_testsingular_map();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A> m_testsingular_map_;

public:
	void set_m_testarray(const common::proto2::MsgTestArray<A>& value);
	void set_m_testarray(common::proto2::MsgTestArray<A>&& value);
	common::proto2::MsgTestArray<A>& m_testarray();
public:
	const common::proto2::MsgTestArray<A>& m_testarray() const;
public:
	void clear_m_testarray();
	void release_m_testarray();
public:
	bool has_m_testarray() const;
private:
	void set_has_m_testarray();
	void clear_has_m_testarray();
private:
	common::proto2::MsgTestArray<A> m_testarray_;

public:
	void reserve_m_testarray_array(size_t size);
	void set_m_testarray_array(common::miniproto::uint32 index, const common::proto2::MsgTestArray<A>& value);
	void set_m_testarray_array(common::miniproto::uint32 index, common::proto2::MsgTestArray<A>&& value);
	void add_m_testarray_array(const common::proto2::MsgTestArray<A>& value);
	void add_m_testarray_array(common::proto2::MsgTestArray<A>&& value);
	common::proto2::MsgTestArray<A>* add_m_testarray_array();
public:
	size_t m_testarray_array_size() const;
	const common::proto2::MsgTestArray<A>& m_testarray_array(common::miniproto::uint32 index) const;
public:
	void clear_m_testarray_array();
	void release_m_testarray_array();
public:
	bool has_m_testarray_array() const;
private:
	void set_has_m_testarray_array();
	void clear_has_m_testarray_array();
private:
	common::miniproto::Array<common::proto2::MsgTestArray<A>, A> m_testarray_array_;

public:
	void add_m_testarray_map(const common::miniproto::int32& key, const common::proto2::MsgTestArray<A>& value);
	void add_m_testarray_map(common::miniproto::int32&& key, const common::proto2::MsgTestArray<A>& value);
	void add_m_testarray_map(const common::miniproto::int32& key, common::proto2::MsgTestArray<A>&& value);
	void add_m_testarray_map(common::miniproto::int32&& key, common::proto2::MsgTestArray<A>&& value);
	void remove_m_testarray_map(const common::miniproto::int32& key);
public:
	size_t m_testarray_map_size() const;
	const common::proto2::MsgTestArray<A>* find_m_testarray_map(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestArray<A>, A> m_testarray_map_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestArray<A>, A> m_testarray_map_end() const;
public:
	void clear_m_testarray_map();
	void release_m_testarray_map();
public:
	bool has_m_testarray_map() const;
private:
	void set_has_m_testarray_map();
	void clear_has_m_testarray_map();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestArray<A>, A> m_testarray_map_;

public:
	void set_m_testset(const common::proto2::MsgTestSet<A>& value);
	void set_m_testset(common::proto2::MsgTestSet<A>&& value);
	common::proto2::MsgTestSet<A>& m_testset();
public:
	const common::proto2::MsgTestSet<A>& m_testset() const;
public:
	void clear_m_testset();
	void release_m_testset();
public:
	bool has_m_testset() const;
private:
	void set_has_m_testset();
	void clear_has_m_testset();
private:
	common::proto2::MsgTestSet<A> m_testset_;

public:
	void reserve_m_testset_array(size_t size);
	void set_m_testset_array(common::miniproto::uint32 index, const common::proto2::MsgTestSet<A>& value);
	void set_m_testset_array(common::miniproto::uint32 index, common::proto2::MsgTestSet<A>&& value);
	void add_m_testset_array(const common::proto2::MsgTestSet<A>& value);
	void add_m_testset_array(common::proto2::MsgTestSet<A>&& value);
	common::proto2::MsgTestSet<A>* add_m_testset_array();
public:
	size_t m_testset_array_size() const;
	const common::proto2::MsgTestSet<A>& m_testset_array(common::miniproto::uint32 index) const;
public:
	void clear_m_testset_array();
	void release_m_testset_array();
public:
	bool has_m_testset_array() const;
private:
	void set_has_m_testset_array();
	void clear_has_m_testset_array();
private:
	common::miniproto::Array<common::proto2::MsgTestSet<A>, A> m_testset_array_;

public:
	void add_m_testset_map(const common::miniproto::int32& key, const common::proto2::MsgTestSet<A>& value);
	void add_m_testset_map(common::miniproto::int32&& key, const common::proto2::MsgTestSet<A>& value);
	void add_m_testset_map(const common::miniproto::int32& key, common::proto2::MsgTestSet<A>&& value);
	void add_m_testset_map(common::miniproto::int32&& key, common::proto2::MsgTestSet<A>&& value);
	void remove_m_testset_map(const common::miniproto::int32& key);
public:
	size_t m_testset_map_size() const;
	const common::proto2::MsgTestSet<A>* find_m_testset_map(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestSet<A>, A> m_testset_map_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestSet<A>, A> m_testset_map_end() const;
public:
	void clear_m_testset_map();
	void release_m_testset_map();
public:
	bool has_m_testset_map() const;
private:
	void set_has_m_testset_map();
	void clear_has_m_testset_map();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestSet<A>, A> m_testset_map_;

public:
	void set_m_testmap(const common::proto2::MsgTestMap<A>& value);
	void set_m_testmap(common::proto2::MsgTestMap<A>&& value);
	common::proto2::MsgTestMap<A>& m_testmap();
public:
	const common::proto2::MsgTestMap<A>& m_testmap() const;
public:
	void clear_m_testmap();
	void release_m_testmap();
public:
	bool has_m_testmap() const;
private:
	void set_has_m_testmap();
	void clear_has_m_testmap();
private:
	common::proto2::MsgTestMap<A> m_testmap_;

public:
	void reserve_m_testmap_array(size_t size);
	void set_m_testmap_array(common::miniproto::uint32 index, const common::proto2::MsgTestMap<A>& value);
	void set_m_testmap_array(common::miniproto::uint32 index, common::proto2::MsgTestMap<A>&& value);
	void add_m_testmap_array(const common::proto2::MsgTestMap<A>& value);
	void add_m_testmap_array(common::proto2::MsgTestMap<A>&& value);
	common::proto2::MsgTestMap<A>* add_m_testmap_array();
public:
	size_t m_testmap_array_size() const;
	const common::proto2::MsgTestMap<A>& m_testmap_array(common::miniproto::uint32 index) const;
public:
	void clear_m_testmap_array();
	void release_m_testmap_array();
public:
	bool has_m_testmap_array() const;
private:
	void set_has_m_testmap_array();
	void clear_has_m_testmap_array();
private:
	common::miniproto::Array<common::proto2::MsgTestMap<A>, A> m_testmap_array_;

public:
	void add_m_testmap_map(const common::miniproto::int32& key, const common::proto2::MsgTestMap<A>& value);
	void add_m_testmap_map(common::miniproto::int32&& key, const common::proto2::MsgTestMap<A>& value);
	void add_m_testmap_map(const common::miniproto::int32& key, common::proto2::MsgTestMap<A>&& value);
	void add_m_testmap_map(common::miniproto::int32&& key, common::proto2::MsgTestMap<A>&& value);
	void remove_m_testmap_map(const common::miniproto::int32& key);
public:
	size_t m_testmap_map_size() const;
	const common::proto2::MsgTestMap<A>* find_m_testmap_map(const common::miniproto::int32& key) const;
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestMap<A>, A> m_testmap_map_begin() const; 
	common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestMap<A>, A> m_testmap_map_end() const;
public:
	void clear_m_testmap_map();
	void release_m_testmap_map();
public:
	bool has_m_testmap_map() const;
private:
	void set_has_m_testmap_map();
	void clear_has_m_testmap_map();
private:
	common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestMap<A>, A> m_testmap_map_;

private:
	common::miniproto::ProtoBitMap<12> m_bits;
};

template <template<typename> class A>
MsgTest<A>::MsgTest()
{
}

template <template<typename> class A>
MsgTest<A>::MsgTest(const MsgTest<A>& other)
{
	*this = other;
}

template <template<typename> class A>
MsgTest<A>::MsgTest(MsgTest<A>&& other)
{
	*this = std::move(other);
}

template <template<typename> class A>
MsgTest<A>::~MsgTest()
{
}

template <template<typename> class A>
MsgTest<A>& MsgTest<A>::operator = (const MsgTest<A>& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_testsingular())
	{
		m_testsingular_ = other.m_testsingular_;
		set_has_m_testsingular();
	}
	if (other.has_m_testsingular_array())
	{
		m_testsingular_array_ = other.m_testsingular_array_;
		set_has_m_testsingular_array();
	}
	if (other.has_m_testsingular_map())
	{
		m_testsingular_map_ = other.m_testsingular_map_;
		set_has_m_testsingular_map();
	}
	if (other.has_m_testarray())
	{
		m_testarray_ = other.m_testarray_;
		set_has_m_testarray();
	}
	if (other.has_m_testarray_array())
	{
		m_testarray_array_ = other.m_testarray_array_;
		set_has_m_testarray_array();
	}
	if (other.has_m_testarray_map())
	{
		m_testarray_map_ = other.m_testarray_map_;
		set_has_m_testarray_map();
	}
	if (other.has_m_testset())
	{
		m_testset_ = other.m_testset_;
		set_has_m_testset();
	}
	if (other.has_m_testset_array())
	{
		m_testset_array_ = other.m_testset_array_;
		set_has_m_testset_array();
	}
	if (other.has_m_testset_map())
	{
		m_testset_map_ = other.m_testset_map_;
		set_has_m_testset_map();
	}
	if (other.has_m_testmap())
	{
		m_testmap_ = other.m_testmap_;
		set_has_m_testmap();
	}
	if (other.has_m_testmap_array())
	{
		m_testmap_array_ = other.m_testmap_array_;
		set_has_m_testmap_array();
	}
	if (other.has_m_testmap_map())
	{
		m_testmap_map_ = other.m_testmap_map_;
		set_has_m_testmap_map();
	}

	return *this;
}

template <template<typename> class A>
MsgTest<A>& MsgTest<A>::operator = (MsgTest<A>&& other)
{
	if (this == &other)
	{
		return *this;
	}

	m_bits.Clear();

	if (other.has_m_testsingular())
	{
		m_testsingular_ = std::move(other.m_testsingular_);
		other.clear_has_m_testsingular();
		set_has_m_testsingular();
	}
	if (other.has_m_testsingular_array())
	{
		m_testsingular_array_ = std::move(other.m_testsingular_array_);
		other.clear_has_m_testsingular_array();
		set_has_m_testsingular_array();
	}
	if (other.has_m_testsingular_map())
	{
		m_testsingular_map_ = std::move(other.m_testsingular_map_);
		other.clear_has_m_testsingular_map();
		set_has_m_testsingular_map();
	}
	if (other.has_m_testarray())
	{
		m_testarray_ = std::move(other.m_testarray_);
		other.clear_has_m_testarray();
		set_has_m_testarray();
	}
	if (other.has_m_testarray_array())
	{
		m_testarray_array_ = std::move(other.m_testarray_array_);
		other.clear_has_m_testarray_array();
		set_has_m_testarray_array();
	}
	if (other.has_m_testarray_map())
	{
		m_testarray_map_ = std::move(other.m_testarray_map_);
		other.clear_has_m_testarray_map();
		set_has_m_testarray_map();
	}
	if (other.has_m_testset())
	{
		m_testset_ = std::move(other.m_testset_);
		other.clear_has_m_testset();
		set_has_m_testset();
	}
	if (other.has_m_testset_array())
	{
		m_testset_array_ = std::move(other.m_testset_array_);
		other.clear_has_m_testset_array();
		set_has_m_testset_array();
	}
	if (other.has_m_testset_map())
	{
		m_testset_map_ = std::move(other.m_testset_map_);
		other.clear_has_m_testset_map();
		set_has_m_testset_map();
	}
	if (other.has_m_testmap())
	{
		m_testmap_ = std::move(other.m_testmap_);
		other.clear_has_m_testmap();
		set_has_m_testmap();
	}
	if (other.has_m_testmap_array())
	{
		m_testmap_array_ = std::move(other.m_testmap_array_);
		other.clear_has_m_testmap_array();
		set_has_m_testmap_array();
	}
	if (other.has_m_testmap_map())
	{
		m_testmap_map_ = std::move(other.m_testmap_map_);
		other.clear_has_m_testmap_map();
		set_has_m_testmap_map();
	}

	return *this;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTest<A>::ByteSize() const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_testsingular())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(1, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MessageByteSize(m_testsingular_);
	}
	if (has_m_testsingular_array())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(2, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_testsingular_array_, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testsingular_map())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(3, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_testsingular_map_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(4, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MessageByteSize(m_testarray_);
	}
	if (has_m_testarray_array())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(5, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_testarray_array_, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray_map())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(6, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_testarray_map_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(7, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MessageByteSize(m_testset_);
	}
	if (has_m_testset_array())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(8, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_testset_array_, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset_map())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(9, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_testset_map_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(10, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MessageByteSize(m_testmap_);
	}
	if (has_m_testmap_array())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(11, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::ArrayByteSize(m_testmap_array_, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap_map())
	{
		bytes += common::miniproto::ProtoTool::KeyByteSize(12, common::miniproto::ProtoWireType::PWT_LengthDelimited);
		bytes += common::miniproto::ProtoTool::MapByteSize(m_testmap_map_, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTest<A>::Code(common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_testsingular())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testsingular_, buf);
	}
	if (has_m_testsingular_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testsingular_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testsingular_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testsingular_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testarray_, buf);
	}
	if (has_m_testarray_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testarray_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testarray_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testset_, buf);
	}
	if (has_m_testset_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testset_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testset_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testmap_, buf);
	}
	if (has_m_testmap_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testmap_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testmap_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}

	return bytes;
}
template <template<typename> class A>
common::miniproto::byte_size MsgTest<A>::Code(std::ostream& buf, common::miniproto::byte_size size) const
{
	common::miniproto::byte_size bytes = 0;
	
	if (has_m_testsingular())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(1, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testsingular_, buf);
	}
	if (has_m_testsingular_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(2, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testsingular_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testsingular_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(3, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testsingular_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(4, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testarray_, buf);
	}
	if (has_m_testarray_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(5, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testarray_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testarray_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(6, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testarray_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(7, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testset_, buf);
	}
	if (has_m_testset_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(8, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testset_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testset_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(9, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testset_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(10, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MessageCode(m_testmap_, buf);
	}
	if (has_m_testmap_array())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(11, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::ArrayCode(m_testmap_array_, buf, common::miniproto::CommonProtoMessage);
	}
	if (has_m_testmap_map())
	{
		bytes += common::miniproto::ProtoTool::KeyCode(12, common::miniproto::ProtoWireType::PWT_LengthDelimited, buf);
		bytes += common::miniproto::ProtoTool::MapCode(m_testmap_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
	}

	return bytes;
}

template <template<typename> class A>
common::miniproto::byte_size MsgTest<A>::Decode(const common::miniproto::ProtoBuf& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testsingular_, buf);
				set_has_m_testsingular();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testsingular_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testsingular_array();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testsingular_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testsingular_map();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testarray_, buf);
				set_has_m_testarray();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testarray_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testarray_array();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testarray_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testarray_map();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testset_, buf);
				set_has_m_testset();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testset_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testset_array();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testset_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testset_map();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testmap_, buf);
				set_has_m_testmap();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testmap_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testmap_array();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testmap_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testmap_map();
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
common::miniproto::byte_size MsgTest<A>::Decode(std::istream& buf, common::miniproto::byte_size size)
{
	common::miniproto::byte_size bytes = 0;
	
	unsigned int num = 0;
	unsigned int type = common::miniproto::ProtoWireType::PWT_Unknown;
	while (bytes < size)
	{
		bytes += common::miniproto::ProtoTool::KeyDecode(num, type, buf);
		switch (num << 3 | type)
		{
			case 1 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testsingular_, buf);
				set_has_m_testsingular();
			}
			break;
			case 2 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testsingular_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testsingular_array();
			}
			break;
			case 3 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testsingular_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testsingular_map();
			}
			break;
			case 4 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testarray_, buf);
				set_has_m_testarray();
			}
			break;
			case 5 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testarray_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testarray_array();
			}
			break;
			case 6 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testarray_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testarray_map();
			}
			break;
			case 7 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testset_, buf);
				set_has_m_testset();
			}
			break;
			case 8 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testset_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testset_array();
			}
			break;
			case 9 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testset_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testset_map();
			}
			break;
			case 10 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MessageDecode(m_testmap_, buf);
				set_has_m_testmap();
			}
			break;
			case 11 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::ArrayDecode(m_testmap_array_, buf, common::miniproto::CommonProtoMessage);
				set_has_m_testmap_array();
			}
			break;
			case 12 << 3 | common::miniproto::ProtoWireType::PWT_LengthDelimited:
			{
				bytes += common::miniproto::ProtoTool::MapDecode(m_testmap_map_, buf, common::miniproto::CommonProtoInt32, common::miniproto::CommonProtoMessage);
				set_has_m_testmap_map();
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
void MsgTest<A>::Clear()
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

template <template<typename> class A>
void MsgTest<A>::Release()
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

template <template<typename> class A>
const common::proto1::MsgTestSingular<A>& MsgTest<A>::m_testsingular() const
{
	return m_testsingular_;
}
template <template<typename> class A>
void MsgTest<A>::set_m_testsingular(const common::proto1::MsgTestSingular<A>& value)
{
	m_testsingular_ = value;
	set_has_m_testsingular();
}
template <template<typename> class A>
void MsgTest<A>::set_m_testsingular(common::proto1::MsgTestSingular<A>&& value)
{
	m_testsingular_ = std::move(value);
	set_has_m_testsingular();
}
template <template<typename> class A>
common::proto1::MsgTestSingular<A>& MsgTest<A>::m_testsingular()
{
	if (!has_m_testsingular())
	{
		clear_m_testsingular();
		set_has_m_testsingular();
	}
	return m_testsingular_;
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testsingular()
{
	if (has_m_testsingular())
	{
		clear_has_m_testsingular();
	}
	m_testsingular_.Clear();
}
template <template<typename> class A>
void MsgTest<A>::release_m_testsingular()
{
	if (has_m_testsingular())
	{
		clear_has_m_testsingular();
	}
	m_testsingular_.Release();
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testsingular() const
{
	return m_bits.HasBit(0);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testsingular()
{
	m_bits.SetBit(0);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testsingular()
{
	m_bits.ClearBit(0);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testsingular_array_size() const
{
	return m_testsingular_array_.size();
}
template <template<typename> class A>
const common::proto1::MsgTestSingular<A>& MsgTest<A>::m_testsingular_array(common::miniproto::uint32 index) const
{
	return m_testsingular_array_[index];
}
template <template<typename> class A>
void MsgTest<A>::reserve_m_testsingular_array(size_t size)
{
	m_testsingular_array_.reserve(size);
}
template <template<typename> class A>
void MsgTest<A>::set_m_testsingular_array(common::miniproto::uint32 index, const common::proto1::MsgTestSingular<A>& value)
{
	if (index < m_testsingular_array_.size())
	{
		m_testsingular_array_[index] = value;
		set_has_m_testsingular_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::set_m_testsingular_array(common::miniproto::uint32 index, common::proto1::MsgTestSingular<A>&& value)
{
	if (index < m_testsingular_array_.size())
	{
		m_testsingular_array_[index] = std::move(value);
		set_has_m_testsingular_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_array(const common::proto1::MsgTestSingular<A>& value)
{
	m_testsingular_array_.push_back(value);
	set_has_m_testsingular_array();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_array(common::proto1::MsgTestSingular<A>&& value)
{
	m_testsingular_array_.push_back(std::move(value));
	set_has_m_testsingular_array();
}
template <template<typename> class A>
common::proto1::MsgTestSingular<A>* MsgTest<A>::add_m_testsingular_array()
{
	size_t oldSize = m_testsingular_array_.size();
	m_testsingular_array_.resize(oldSize + 1);
	size_t newSize = m_testsingular_array_.size();
	if (newSize > oldSize)
	{
		set_has_m_testsingular_array();
		return &(m_testsingular_array_[newSize - 1]);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testsingular_array()
{
	if (has_m_testsingular_array())
	{
		clear_has_m_testsingular_array();
	}
	if (m_testsingular_array_.size() > 0)
	{
		m_testsingular_array_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testsingular_array()
{
	if (has_m_testsingular_array())
	{
		clear_has_m_testsingular_array();
	}
	if (m_testsingular_array_.capacity() > 0)
	{
		m_testsingular_array_.swap(common::miniproto::Array<common::proto1::MsgTestSingular<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testsingular_array() const
{
	return m_bits.HasBit(1);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testsingular_array()
{
	m_bits.SetBit(1);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testsingular_array()
{
	m_bits.ClearBit(1);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testsingular_map_size() const
{
	return m_testsingular_map_.size();
}
template <template<typename> class A>
const common::proto1::MsgTestSingular<A>* MsgTest<A>::find_m_testsingular_map(const common::miniproto::int32& key) const
{
	auto it = m_testsingular_map_.find(key);
	if (it != m_testsingular_map_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A> MsgTest<A>::m_testsingular_map_begin() const
{
	return m_testsingular_map_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A> MsgTest<A>::m_testsingular_map_end() const
{
	return m_testsingular_map_.end();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_map(const common::miniproto::int32& key, const common::proto1::MsgTestSingular<A>& value)
{
	m_testsingular_map_[key] = value;
	set_has_m_testsingular_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_map(common::miniproto::int32&& key, const common::proto1::MsgTestSingular<A>& value)
{
	m_testsingular_map_[std::move(key)] = value;
	set_has_m_testsingular_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_map(const common::miniproto::int32& key, common::proto1::MsgTestSingular<A>&& value)
{
	m_testsingular_map_[key] = std::move(value);
	set_has_m_testsingular_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testsingular_map(common::miniproto::int32&& key, common::proto1::MsgTestSingular<A>&& value)
{
	m_testsingular_map_[std::move(key)] = std::move(value);
	set_has_m_testsingular_map();
}
template <template<typename> class A>
void MsgTest<A>::remove_m_testsingular_map(const common::miniproto::int32& key)
{
	m_testsingular_map_.erase(key);
	if(0 == m_testsingular_map_.size())
	{
		clear_has_m_testsingular_map();
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testsingular_map()
{
	if (has_m_testsingular_map())
	{
		clear_has_m_testsingular_map();
	}
	if (m_testsingular_map_.size() > 0)
	{
		m_testsingular_map_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testsingular_map()
{
	if (has_m_testsingular_map())
	{
		clear_has_m_testsingular_map();
	}
	if (m_testsingular_map_.size() > 0)
	{
		m_testsingular_map_.swap(common::miniproto::Map<common::miniproto::int32, common::proto1::MsgTestSingular<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testsingular_map() const
{
	return m_bits.HasBit(2);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testsingular_map()
{
	m_bits.SetBit(2);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testsingular_map()
{
	m_bits.ClearBit(2);
}

template <template<typename> class A>
const common::proto2::MsgTestArray<A>& MsgTest<A>::m_testarray() const
{
	return m_testarray_;
}
template <template<typename> class A>
void MsgTest<A>::set_m_testarray(const common::proto2::MsgTestArray<A>& value)
{
	m_testarray_ = value;
	set_has_m_testarray();
}
template <template<typename> class A>
void MsgTest<A>::set_m_testarray(common::proto2::MsgTestArray<A>&& value)
{
	m_testarray_ = std::move(value);
	set_has_m_testarray();
}
template <template<typename> class A>
common::proto2::MsgTestArray<A>& MsgTest<A>::m_testarray()
{
	if (!has_m_testarray())
	{
		clear_m_testarray();
		set_has_m_testarray();
	}
	return m_testarray_;
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testarray()
{
	if (has_m_testarray())
	{
		clear_has_m_testarray();
	}
	m_testarray_.Clear();
}
template <template<typename> class A>
void MsgTest<A>::release_m_testarray()
{
	if (has_m_testarray())
	{
		clear_has_m_testarray();
	}
	m_testarray_.Release();
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testarray() const
{
	return m_bits.HasBit(3);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testarray()
{
	m_bits.SetBit(3);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testarray()
{
	m_bits.ClearBit(3);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testarray_array_size() const
{
	return m_testarray_array_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestArray<A>& MsgTest<A>::m_testarray_array(common::miniproto::uint32 index) const
{
	return m_testarray_array_[index];
}
template <template<typename> class A>
void MsgTest<A>::reserve_m_testarray_array(size_t size)
{
	m_testarray_array_.reserve(size);
}
template <template<typename> class A>
void MsgTest<A>::set_m_testarray_array(common::miniproto::uint32 index, const common::proto2::MsgTestArray<A>& value)
{
	if (index < m_testarray_array_.size())
	{
		m_testarray_array_[index] = value;
		set_has_m_testarray_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::set_m_testarray_array(common::miniproto::uint32 index, common::proto2::MsgTestArray<A>&& value)
{
	if (index < m_testarray_array_.size())
	{
		m_testarray_array_[index] = std::move(value);
		set_has_m_testarray_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_array(const common::proto2::MsgTestArray<A>& value)
{
	m_testarray_array_.push_back(value);
	set_has_m_testarray_array();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_array(common::proto2::MsgTestArray<A>&& value)
{
	m_testarray_array_.push_back(std::move(value));
	set_has_m_testarray_array();
}
template <template<typename> class A>
common::proto2::MsgTestArray<A>* MsgTest<A>::add_m_testarray_array()
{
	size_t oldSize = m_testarray_array_.size();
	m_testarray_array_.resize(oldSize + 1);
	size_t newSize = m_testarray_array_.size();
	if (newSize > oldSize)
	{
		set_has_m_testarray_array();
		return &(m_testarray_array_[newSize - 1]);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testarray_array()
{
	if (has_m_testarray_array())
	{
		clear_has_m_testarray_array();
	}
	if (m_testarray_array_.size() > 0)
	{
		m_testarray_array_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testarray_array()
{
	if (has_m_testarray_array())
	{
		clear_has_m_testarray_array();
	}
	if (m_testarray_array_.capacity() > 0)
	{
		m_testarray_array_.swap(common::miniproto::Array<common::proto2::MsgTestArray<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testarray_array() const
{
	return m_bits.HasBit(4);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testarray_array()
{
	m_bits.SetBit(4);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testarray_array()
{
	m_bits.ClearBit(4);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testarray_map_size() const
{
	return m_testarray_map_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestArray<A>* MsgTest<A>::find_m_testarray_map(const common::miniproto::int32& key) const
{
	auto it = m_testarray_map_.find(key);
	if (it != m_testarray_map_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestArray<A>, A> MsgTest<A>::m_testarray_map_begin() const
{
	return m_testarray_map_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestArray<A>, A> MsgTest<A>::m_testarray_map_end() const
{
	return m_testarray_map_.end();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_map(const common::miniproto::int32& key, const common::proto2::MsgTestArray<A>& value)
{
	m_testarray_map_[key] = value;
	set_has_m_testarray_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_map(common::miniproto::int32&& key, const common::proto2::MsgTestArray<A>& value)
{
	m_testarray_map_[std::move(key)] = value;
	set_has_m_testarray_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_map(const common::miniproto::int32& key, common::proto2::MsgTestArray<A>&& value)
{
	m_testarray_map_[key] = std::move(value);
	set_has_m_testarray_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testarray_map(common::miniproto::int32&& key, common::proto2::MsgTestArray<A>&& value)
{
	m_testarray_map_[std::move(key)] = std::move(value);
	set_has_m_testarray_map();
}
template <template<typename> class A>
void MsgTest<A>::remove_m_testarray_map(const common::miniproto::int32& key)
{
	m_testarray_map_.erase(key);
	if(0 == m_testarray_map_.size())
	{
		clear_has_m_testarray_map();
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testarray_map()
{
	if (has_m_testarray_map())
	{
		clear_has_m_testarray_map();
	}
	if (m_testarray_map_.size() > 0)
	{
		m_testarray_map_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testarray_map()
{
	if (has_m_testarray_map())
	{
		clear_has_m_testarray_map();
	}
	if (m_testarray_map_.size() > 0)
	{
		m_testarray_map_.swap(common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestArray<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testarray_map() const
{
	return m_bits.HasBit(5);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testarray_map()
{
	m_bits.SetBit(5);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testarray_map()
{
	m_bits.ClearBit(5);
}

template <template<typename> class A>
const common::proto2::MsgTestSet<A>& MsgTest<A>::m_testset() const
{
	return m_testset_;
}
template <template<typename> class A>
void MsgTest<A>::set_m_testset(const common::proto2::MsgTestSet<A>& value)
{
	m_testset_ = value;
	set_has_m_testset();
}
template <template<typename> class A>
void MsgTest<A>::set_m_testset(common::proto2::MsgTestSet<A>&& value)
{
	m_testset_ = std::move(value);
	set_has_m_testset();
}
template <template<typename> class A>
common::proto2::MsgTestSet<A>& MsgTest<A>::m_testset()
{
	if (!has_m_testset())
	{
		clear_m_testset();
		set_has_m_testset();
	}
	return m_testset_;
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testset()
{
	if (has_m_testset())
	{
		clear_has_m_testset();
	}
	m_testset_.Clear();
}
template <template<typename> class A>
void MsgTest<A>::release_m_testset()
{
	if (has_m_testset())
	{
		clear_has_m_testset();
	}
	m_testset_.Release();
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testset() const
{
	return m_bits.HasBit(6);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testset()
{
	m_bits.SetBit(6);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testset()
{
	m_bits.ClearBit(6);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testset_array_size() const
{
	return m_testset_array_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestSet<A>& MsgTest<A>::m_testset_array(common::miniproto::uint32 index) const
{
	return m_testset_array_[index];
}
template <template<typename> class A>
void MsgTest<A>::reserve_m_testset_array(size_t size)
{
	m_testset_array_.reserve(size);
}
template <template<typename> class A>
void MsgTest<A>::set_m_testset_array(common::miniproto::uint32 index, const common::proto2::MsgTestSet<A>& value)
{
	if (index < m_testset_array_.size())
	{
		m_testset_array_[index] = value;
		set_has_m_testset_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::set_m_testset_array(common::miniproto::uint32 index, common::proto2::MsgTestSet<A>&& value)
{
	if (index < m_testset_array_.size())
	{
		m_testset_array_[index] = std::move(value);
		set_has_m_testset_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_array(const common::proto2::MsgTestSet<A>& value)
{
	m_testset_array_.push_back(value);
	set_has_m_testset_array();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_array(common::proto2::MsgTestSet<A>&& value)
{
	m_testset_array_.push_back(std::move(value));
	set_has_m_testset_array();
}
template <template<typename> class A>
common::proto2::MsgTestSet<A>* MsgTest<A>::add_m_testset_array()
{
	size_t oldSize = m_testset_array_.size();
	m_testset_array_.resize(oldSize + 1);
	size_t newSize = m_testset_array_.size();
	if (newSize > oldSize)
	{
		set_has_m_testset_array();
		return &(m_testset_array_[newSize - 1]);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testset_array()
{
	if (has_m_testset_array())
	{
		clear_has_m_testset_array();
	}
	if (m_testset_array_.size() > 0)
	{
		m_testset_array_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testset_array()
{
	if (has_m_testset_array())
	{
		clear_has_m_testset_array();
	}
	if (m_testset_array_.capacity() > 0)
	{
		m_testset_array_.swap(common::miniproto::Array<common::proto2::MsgTestSet<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testset_array() const
{
	return m_bits.HasBit(7);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testset_array()
{
	m_bits.SetBit(7);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testset_array()
{
	m_bits.ClearBit(7);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testset_map_size() const
{
	return m_testset_map_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestSet<A>* MsgTest<A>::find_m_testset_map(const common::miniproto::int32& key) const
{
	auto it = m_testset_map_.find(key);
	if (it != m_testset_map_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestSet<A>, A> MsgTest<A>::m_testset_map_begin() const
{
	return m_testset_map_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestSet<A>, A> MsgTest<A>::m_testset_map_end() const
{
	return m_testset_map_.end();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_map(const common::miniproto::int32& key, const common::proto2::MsgTestSet<A>& value)
{
	m_testset_map_[key] = value;
	set_has_m_testset_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_map(common::miniproto::int32&& key, const common::proto2::MsgTestSet<A>& value)
{
	m_testset_map_[std::move(key)] = value;
	set_has_m_testset_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_map(const common::miniproto::int32& key, common::proto2::MsgTestSet<A>&& value)
{
	m_testset_map_[key] = std::move(value);
	set_has_m_testset_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testset_map(common::miniproto::int32&& key, common::proto2::MsgTestSet<A>&& value)
{
	m_testset_map_[std::move(key)] = std::move(value);
	set_has_m_testset_map();
}
template <template<typename> class A>
void MsgTest<A>::remove_m_testset_map(const common::miniproto::int32& key)
{
	m_testset_map_.erase(key);
	if(0 == m_testset_map_.size())
	{
		clear_has_m_testset_map();
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testset_map()
{
	if (has_m_testset_map())
	{
		clear_has_m_testset_map();
	}
	if (m_testset_map_.size() > 0)
	{
		m_testset_map_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testset_map()
{
	if (has_m_testset_map())
	{
		clear_has_m_testset_map();
	}
	if (m_testset_map_.size() > 0)
	{
		m_testset_map_.swap(common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestSet<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testset_map() const
{
	return m_bits.HasBit(8);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testset_map()
{
	m_bits.SetBit(8);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testset_map()
{
	m_bits.ClearBit(8);
}

template <template<typename> class A>
const common::proto2::MsgTestMap<A>& MsgTest<A>::m_testmap() const
{
	return m_testmap_;
}
template <template<typename> class A>
void MsgTest<A>::set_m_testmap(const common::proto2::MsgTestMap<A>& value)
{
	m_testmap_ = value;
	set_has_m_testmap();
}
template <template<typename> class A>
void MsgTest<A>::set_m_testmap(common::proto2::MsgTestMap<A>&& value)
{
	m_testmap_ = std::move(value);
	set_has_m_testmap();
}
template <template<typename> class A>
common::proto2::MsgTestMap<A>& MsgTest<A>::m_testmap()
{
	if (!has_m_testmap())
	{
		clear_m_testmap();
		set_has_m_testmap();
	}
	return m_testmap_;
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testmap()
{
	if (has_m_testmap())
	{
		clear_has_m_testmap();
	}
	m_testmap_.Clear();
}
template <template<typename> class A>
void MsgTest<A>::release_m_testmap()
{
	if (has_m_testmap())
	{
		clear_has_m_testmap();
	}
	m_testmap_.Release();
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testmap() const
{
	return m_bits.HasBit(9);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testmap()
{
	m_bits.SetBit(9);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testmap()
{
	m_bits.ClearBit(9);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testmap_array_size() const
{
	return m_testmap_array_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestMap<A>& MsgTest<A>::m_testmap_array(common::miniproto::uint32 index) const
{
	return m_testmap_array_[index];
}
template <template<typename> class A>
void MsgTest<A>::reserve_m_testmap_array(size_t size)
{
	m_testmap_array_.reserve(size);
}
template <template<typename> class A>
void MsgTest<A>::set_m_testmap_array(common::miniproto::uint32 index, const common::proto2::MsgTestMap<A>& value)
{
	if (index < m_testmap_array_.size())
	{
		m_testmap_array_[index] = value;
		set_has_m_testmap_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::set_m_testmap_array(common::miniproto::uint32 index, common::proto2::MsgTestMap<A>&& value)
{
	if (index < m_testmap_array_.size())
	{
		m_testmap_array_[index] = std::move(value);
		set_has_m_testmap_array();
	}
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_array(const common::proto2::MsgTestMap<A>& value)
{
	m_testmap_array_.push_back(value);
	set_has_m_testmap_array();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_array(common::proto2::MsgTestMap<A>&& value)
{
	m_testmap_array_.push_back(std::move(value));
	set_has_m_testmap_array();
}
template <template<typename> class A>
common::proto2::MsgTestMap<A>* MsgTest<A>::add_m_testmap_array()
{
	size_t oldSize = m_testmap_array_.size();
	m_testmap_array_.resize(oldSize + 1);
	size_t newSize = m_testmap_array_.size();
	if (newSize > oldSize)
	{
		set_has_m_testmap_array();
		return &(m_testmap_array_[newSize - 1]);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testmap_array()
{
	if (has_m_testmap_array())
	{
		clear_has_m_testmap_array();
	}
	if (m_testmap_array_.size() > 0)
	{
		m_testmap_array_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testmap_array()
{
	if (has_m_testmap_array())
	{
		clear_has_m_testmap_array();
	}
	if (m_testmap_array_.capacity() > 0)
	{
		m_testmap_array_.swap(common::miniproto::Array<common::proto2::MsgTestMap<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testmap_array() const
{
	return m_bits.HasBit(10);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testmap_array()
{
	m_bits.SetBit(10);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testmap_array()
{
	m_bits.ClearBit(10);
}

template <template<typename> class A>
size_t MsgTest<A>::m_testmap_map_size() const
{
	return m_testmap_map_.size();
}
template <template<typename> class A>
const common::proto2::MsgTestMap<A>* MsgTest<A>::find_m_testmap_map(const common::miniproto::int32& key) const
{
	auto it = m_testmap_map_.find(key);
	if (it != m_testmap_map_.end())
	{
		return &(it->second);
	}
	else
	{
		return NULL;
	}
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestMap<A>, A> MsgTest<A>::m_testmap_map_begin() const
{
	return m_testmap_map_.begin();
}
template <template<typename> class A>
common::miniproto::MapConstIt<common::miniproto::int32, common::proto2::MsgTestMap<A>, A> MsgTest<A>::m_testmap_map_end() const
{
	return m_testmap_map_.end();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_map(const common::miniproto::int32& key, const common::proto2::MsgTestMap<A>& value)
{
	m_testmap_map_[key] = value;
	set_has_m_testmap_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_map(common::miniproto::int32&& key, const common::proto2::MsgTestMap<A>& value)
{
	m_testmap_map_[std::move(key)] = value;
	set_has_m_testmap_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_map(const common::miniproto::int32& key, common::proto2::MsgTestMap<A>&& value)
{
	m_testmap_map_[key] = std::move(value);
	set_has_m_testmap_map();
}
template <template<typename> class A>
void MsgTest<A>::add_m_testmap_map(common::miniproto::int32&& key, common::proto2::MsgTestMap<A>&& value)
{
	m_testmap_map_[std::move(key)] = std::move(value);
	set_has_m_testmap_map();
}
template <template<typename> class A>
void MsgTest<A>::remove_m_testmap_map(const common::miniproto::int32& key)
{
	m_testmap_map_.erase(key);
	if(0 == m_testmap_map_.size())
	{
		clear_has_m_testmap_map();
	}
}
template <template<typename> class A>
void MsgTest<A>::clear_m_testmap_map()
{
	if (has_m_testmap_map())
	{
		clear_has_m_testmap_map();
	}
	if (m_testmap_map_.size() > 0)
	{
		m_testmap_map_.clear();
	}
}
template <template<typename> class A>
void MsgTest<A>::release_m_testmap_map()
{
	if (has_m_testmap_map())
	{
		clear_has_m_testmap_map();
	}
	if (m_testmap_map_.size() > 0)
	{
		m_testmap_map_.swap(common::miniproto::Map<common::miniproto::int32, common::proto2::MsgTestMap<A>, A>());
	}
}
template <template<typename> class A>
bool MsgTest<A>::has_m_testmap_map() const
{
	return m_bits.HasBit(11);
}
template <template<typename> class A>
void MsgTest<A>::set_has_m_testmap_map()
{
	m_bits.SetBit(11);
}
template <template<typename> class A>
void MsgTest<A>::clear_has_m_testmap_map()
{
	m_bits.ClearBit(11);
}

} //namespace proto2
} //namespace common

#endif
