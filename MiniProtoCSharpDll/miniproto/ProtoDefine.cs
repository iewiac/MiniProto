using System;

namespace common
{
    namespace miniproto
    {

        // proto字段类型
        public enum ProtoFieldType
        {
            PFT_Bool = 0,   // bool
            PFT_Int32,      // int32
            PFT_SInt32,     // sint32
            PFT_UInt32,     // uint32
            PFT_SFixed32,   // sfixed32
            PFT_Fixed32,    // fixed32
            PFT_Int64,      // int64
            PFT_SInt64,     // sint64
            PFT_UInt64,     // uint64
            PFT_SFixed64,   // sfixed64
            PFT_Fixed64,    // fixed64
            PFT_Enum,       // enum
            PFT_Float,      // float
            PFT_Double,     // double
            PFT_String,     // string
            PFT_Message,    // message
        };

        // proto字段类型
        public enum ProtoWireType
        {
            PWT_Varint = 0,         // int32, int64, uint32, uint64, sint32, sint64, bool, enum
            PWT_64bit,              // fixed64, sfixed64, double
            PWT_LengthDelimited,    // string, bytes, messages, proto3 repeated, miniproto repeated
            PWT_StartGroup,         // unused
            PWT_EndGroup,           // unused
            PWT_32bit,              // fixed32, sfixed32, float
            PWT_Unknown,            // invalid type
        };

        // proto字段类型重定义，主要用于编解码函数的重载
        public abstract class ProtoType
        {
            public abstract ProtoWireType GetWireType();
        }
        public class ProtoBool : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoInt32 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoSInt32 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoUInt32 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoSFixed32 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_32bit;
            }
        }
        public class ProtoFixed32 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_32bit;
            }
        }
        public class ProtoInt64 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoSInt64 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoUInt64 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoSFixed64 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_64bit;
            }
        }
        public class ProtoFixed64 : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_64bit;
            }
        }
        public class ProtoEnum : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_Varint;
            }
        }
        public class ProtoFloat : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_32bit;
            }
        }
        public class ProtoDouble : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_64bit;
            }
        }
        public class ProtoString : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_LengthDelimited;
            }
        }
        public class ProtoMessage : ProtoType
        {
            public override ProtoWireType GetWireType()
            {
                return ProtoWireType.PWT_LengthDelimited;
            }
        }

        public static class ProtoDefine
        {
            // 解码失败时，throw UnknownWireTypeException
            public static readonly string UnknownWireTypeException = "UnknownWireTypeException";

            // proto字段类型各自定义各自的常量对象，用于函数重载
            public static readonly ProtoBool CommonProtoBool = new ProtoBool();
            public static readonly ProtoInt32 CommonProtoInt32 = new ProtoInt32();
            public static readonly ProtoSInt32 CommonProtoSInt32 = new ProtoSInt32();
            public static readonly ProtoUInt32 CommonProtoUInt32 = new ProtoUInt32();
            public static readonly ProtoSFixed32 CommonProtoSFixed32 = new ProtoSFixed32();
            public static readonly ProtoFixed32 CommonProtoFixed32 = new ProtoFixed32();
            public static readonly ProtoInt64 CommonProtoInt64 = new ProtoInt64();
            public static readonly ProtoSInt64 CommonProtoSInt64 = new ProtoSInt64();
            public static readonly ProtoUInt64 CommonProtoUInt64 = new ProtoUInt64();
            public static readonly ProtoSFixed64 CommonProtoSFixed64 = new ProtoSFixed64();
            public static readonly ProtoFixed64 CommonProtoFixed64 = new ProtoFixed64();
            public static readonly ProtoEnum CommonProtoEnum = new ProtoEnum();
            public static readonly ProtoFloat CommonProtoFloat = new ProtoFloat();
            public static readonly ProtoDouble CommonProtoDouble = new ProtoDouble();
            public static readonly ProtoString CommonProtoString = new ProtoString();
            public static readonly ProtoMessage CommonProtoMessage = new ProtoMessage();
        }
    }
}