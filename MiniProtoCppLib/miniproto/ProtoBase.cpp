#include "ProtoBase.h"

namespace common
{
	namespace miniproto
	{

		ProtoBase::ProtoBase()
		{

		}

		ProtoBase::~ProtoBase()
		{

		}

		bool ProtoBase::SerializeToArray(ProtoBuf& buf, byte_size size) const
		{
			byte_size bytes = 0;

			try
			{
				bytes += Code(buf, size);
			}
			catch (...)
			{
				return false;
			}

			return bytes <= size;
		}

		bool ProtoBase::ParseFromArray(const ProtoBuf& buf, byte_size size)
		{
			byte_size bytes = 0;

			try
			{
				Clear();
				bytes += Decode(buf, size);
			}
			catch (...)
			{
				return false;
			}

			return bytes <= size;
		}

		bool ProtoBase::SerializeToStream(std::ostream& buf, byte_size size) const
		{
			byte_size bytes = 0;

			try
			{
				bytes += Code(buf, size);
			}
			catch (...)
			{
				return false;
			}

			return bytes <= size;
		}

		bool ProtoBase::ParseFromStream(std::istream& buf, byte_size size)
		{
			byte_size bytes = 0;

			try
			{
				Clear();
				bytes += Decode(buf, size);
			}
			catch (...)
			{
				return false;
			}

			return bytes <= size;
		}

	}
}