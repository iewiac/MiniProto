package common.miniproto;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.Iterator;

public class ProtoTool {
	// Zigzag编/解码
	public static int Zigzag(int value) {
		int res = (value << 1) ^ (value >> 31);
		return res;
	}
	public static long Zigzag(long value) {
		long res = (value << 1) ^ (value >> 63);
		return res;
	}
	public static int DeZigzag(int value) {
		int res = (value >>> 1) ^ -(value & 1);
		return res;
	}
	public static long DeZigzag(long value) {
		long res = (value >>> 1) ^ -(value & 1);
		return res;
	}

	// Varint Number编/解码
	public static int VarintByteSize(int value) {
		if (value >>> 7 == 0) {
			return 1;
		} else if (value >>> 14 == 0) {
			return 2;
		} else if (value >>> 21 == 0) {
			return 3;
		} else if (value >>> 28 == 0) {
			return 4;
		} else {
			return 5;
		}
	}
	public static int VarintByteSize(long value) {
		if (value >>> 35 == 0) {
			if (value >>> 7 == 0) {
				return 1;
			} else if (value >>> 14 == 0) {
				return 2;
			} else if (value >>> 21 == 0) {
				return 3;
			} else if (value >>> 28 == 0) {
				return 4;
			} else {
				return 5;
			}
		} else {
			if (value >>> 42 == 0) {
				return 6;
			} else if (value >>> 49 == 0) {
				return 7;
			} else if (value >>> 56 == 0) {
				return 8;
			} else if (value >>> 63 == 0) {
				return 9;
			} else {
				return 10;
			}
		}
	}
	public static void VarintCode(int value, OutputStream buf) throws IOException {
		while (true) {
			byte temp = (byte) (value & 0x7f);
			if ((value >>>= 7) != 0) {
				buf.write(temp | 0x80);
			} else {
				buf.write(temp);
				break;
			}
		}
	}
	public static void VarintCode(long value, OutputStream buf) throws IOException {
		while (true) {
			byte temp = (byte) (value & 0x7f);
			if ((value >>>= 7) != 0) {
				buf.write(temp | 0x80);
			} else {
				buf.write(temp);
				break;
			}
		}
	}
	public static int VarintDecode(int value, InputStream buf) throws IOException {
		int bytes = 0;
		int res = 0;
		while (true) {
			byte temp = (byte) buf.read();
			res = res | ((temp & 0x7f) << (7 * bytes));
			if ((temp & 0x80) != 0) {
				bytes++;
			} else {
				bytes++;
				break;
			}
		}
		return res;
	}
	public static long VarintDecode(long value, InputStream buf) throws IOException {
		int bytes = 0;
		long res = 0;
		while (true) {
			byte temp = (byte) buf.read();
			res = res | ((temp & 0x7f) << (7 * bytes));
			if ((temp & 0x80) != 0) {
				bytes++;
			} else {
				bytes++;
				break;
			}
		}
		return res;
	}
	// Fixed Number编/解码
	public static int FixedByteSize(int value) {
		return 4;
	}
	public static int FixedByteSize(long value) {
		return 8;
	}
	public static void FixedCode(int value, OutputStream buf) throws IOException {
		buf.write(value & 0xff);
		buf.write((value >>> 8) & 0xff);
		buf.write((value >>> 16) & 0xff);
		buf.write((value >>> 24) & 0xff);
	}
	public static void FixedCode(long value, OutputStream buf) throws IOException {
		buf.write((int) (value & 0xff));
		buf.write((int) ((value >>> 8) & 0xff));
		buf.write((int) ((value >>> 16) & 0xff));
		buf.write((int) ((value >>> 24) & 0xff));
		buf.write((int) ((value >>> 32) & 0xff));
		buf.write((int) ((value >>> 40) & 0xff));
		buf.write((int) ((value >>> 48) & 0xff));
		buf.write((int) ((value >>> 56) & 0xff));
	}
	public static int FixedDecode(int value, InputStream buf) throws IOException {
		value = 0;
		value = value | buf.read();
		value = value | (buf.read() << 8);
		value = value | (buf.read() << 16);
		value = value | (buf.read() << 24);
		return value;
	}
	public static long FixedDecode(long value, InputStream buf) throws IOException {
		value = 0;
		value = value | (long) buf.read();
		value = value | ((long) buf.read() << 8);
		value = value | ((long) buf.read() << 16);
		value = value | ((long) buf.read() << 24);
		value = value | ((long) buf.read() << 32);
		value = value | ((long) buf.read() << 40);
		value = value | ((long) buf.read() << 48);
		value = value | ((long) buf.read() << 56);
		return value;
	}
	
	// proto key编/解码
	public static int KeyByteSize(int num, ProtoDefine.ProtoWireType type) {
		int bytes = 0;
		bytes += VarintByteSize(num << 3 | type.getValue());
		return bytes;
	}
	public static void KeyCode(int num, ProtoDefine.ProtoWireType type, OutputStream buf) throws IOException {
		VarintCode(num << 3 | type.getValue(), buf);
	}
	public static int KeyDecode(InputStream buf) throws IOException {
		return VarintDecode(0, buf);
	}

	// 未知字段解码
	public static void UnknownDecode(ProtoDefine.ProtoWireType type, InputStream buf) throws IOException {
		if (null != type) {
			switch (type) {
				case PWT_Varint : {
					VarintDecode(0, buf);
					break;
				}
				case PWT_64bit : {
					buf.skip(8);
					break;
				}
				case PWT_32bit : {
					buf.skip(4);
					break;
				}
				case PWT_LengthDelimited : {
					int length = VarintDecode(0, buf);
					buf.skip(length);
					break;
				}
				default : {
					throw new IOException(ProtoDefine.UnknownWriteTypeException);
				}
			}
		} else {
			throw new IOException(ProtoDefine.UnknownWriteTypeException);
		}
	}

	// 单个字段编/解码
	// 数组按proto2规则编/解码 {bytesize + element}
	// 数组按proto3规则编/解码 bytesize + {element}
	public static int BoolByteSize(Boolean value) {
		if (null != value) {
			return 1;
		}
		return 0;
	}
	public static void BoolCode(Boolean value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value ? 1 : 0, buf);
		}
	}
	public static Boolean BoolDecode(InputStream buf) throws IOException {
		return VarintDecode(0, buf) != 0 ? true : false;
	}

	public static int Int32ByteSize(Integer value) {
		if (null != value) {
			return VarintByteSize(value);
		}
		return 0;
	}
	public static void Int32Code(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value, buf);
		}
	}
	public static Integer Int32Decode(InputStream buf) throws IOException {
		return VarintDecode(0, buf);
	}

	public static int SInt32ByteSize(Integer value) {
		if (null != value) {
			return VarintByteSize(Zigzag(value));
		}
		return 0;
	}
	public static void SInt32Code(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(Zigzag(value), buf);
		}
	}
	public static Integer SInt32Decode(InputStream buf) throws IOException {
		return DeZigzag(VarintDecode(0, buf));
	}

	public static int UInt32ByteSize(Integer value) {
		if (null != value) {
			return VarintByteSize(value);
		}
		return 0;
	}
	public static void UInt32Code(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value, buf);
		}
	}
	public static Integer UInt32Decode(InputStream buf) throws IOException {
		return VarintDecode(0, buf);
	}

	public static int Int64ByteSize(Long value) {
		if (null != value) {
			return VarintByteSize(value);
		}
		return 0;
	}
	public static void Int64Code(Long value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value, buf);
		}
	}
	public static Long Int64Decode(InputStream buf) throws IOException {
		return VarintDecode(0L, buf);
	}

	public static int SInt64ByteSize(Long value) {
		if (null != value) {
			return VarintByteSize(Zigzag(value));
		}
		return 0;
	}
	public static void SInt64Code(Long value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(Zigzag(value), buf);
		}
	}
	public static Long SInt64Decode(InputStream buf) throws IOException {
		return DeZigzag(VarintDecode(0L, buf));
	}

	public static int UInt64ByteSize(Long value) {
		if (null != value) {
			return VarintByteSize(value);
		}
		return 0;
	}
	public static void UInt64Code(Long value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value, buf);
		}
	}
	public static Long UInt64Decode(InputStream buf) throws IOException {
		return VarintDecode(0L, buf);
	}

	public static int EnumByteSize(Integer value) {
		if (null != value) {
			return VarintByteSize(value);
		}
		return 0;
	}
	public static void EnumCode(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			VarintCode(value, buf);
		}
	}
	public static Integer EnumDecode(InputStream buf) throws IOException {
		return VarintDecode(0, buf);
	}

	public static int SFixed32ByteSize(Integer value) {
		if (null != value) {
			return FixedByteSize(value);
		}
		return 0;
	}
	public static void SFixed32Code(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(value, buf);
		}
	}
	public static Integer SFixed32Decode(InputStream buf) throws IOException {
		return FixedDecode(0, buf);
	}
	
	public static int Fixed32ByteSize(Integer value) {
		if (null != value) {
			return FixedByteSize(value);
		}
		return 0;
	}
	public static void Fixed32Code(Integer value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(value, buf);
		}
	}
	public static Integer Fixed32Decode(InputStream buf) throws IOException {
		return FixedDecode(0, buf);
	}
	
	public static int FloatByteSize(Float value) {
		if (null != value) {
			return FixedByteSize(Float.floatToIntBits(value));
		}
		return 0;
	}
	public static void FloatCode(Float value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(Float.floatToIntBits(value), buf);
		}
	}
	public static Float FloatDecode(InputStream buf) throws IOException {
		return Float.intBitsToFloat(FixedDecode(Float.floatToIntBits(0.0f), buf));
	}

	public static int SFixed64ByteSize(Long value) {
		if (null != value) {
			return FixedByteSize(value);
		}
		return 0;
	}
	public static void SFixed64Code(Long value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(value, buf);
		}
	}
	public static Long SFixed64Decode(InputStream buf) throws IOException {
		return FixedDecode(0L, buf);
	}

	public static int Fixed64ByteSize(Long value) {
		if (null != value) {
			return FixedByteSize(value);
		}
		return 0;
	}
	public static void Fixed64Code(Long value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(value, buf);
		}
	}
	public static Long Fixed64Decode(InputStream buf) throws IOException {
		return FixedDecode(0L, buf);
	}
	
	public static int DoubleByteSize(Double value) {
		if (null != value) {
			return FixedByteSize(Double.doubleToLongBits(value));
		}
		return 0;
	}
	public static void DoubleCode(Double value, OutputStream buf) throws IOException {
		if (null != value) {
			FixedCode(Double.doubleToLongBits(value), buf);
		}
	}
	public static Double DoubleDecode(InputStream buf) throws IOException {
		return Double.longBitsToDouble(FixedDecode(Double.doubleToLongBits(0.0), buf));
	}

	public static int StringByteSize(String value) throws IOException {
		if (null != value) {
			int bytes = 0;
			byte[] stringBytes = value.getBytes("UTF-8");
			bytes += VarintByteSize(stringBytes.length);
			bytes += stringBytes.length;
			return bytes;
		}
		return 0;
	}
	public static void StringCode(String value, OutputStream buf) throws IOException {
		if (null != value) {
			byte[] stringBytes = value.getBytes("UTF-8");
			VarintCode(stringBytes.length, buf);
			buf.write(stringBytes);
		}
	}
	public static String StringDecode(InputStream buf) throws IOException {
		int length = VarintDecode(0, buf);
		if (length > 0) {
			byte[] stringBytes = new byte[length];
			buf.read(stringBytes);
			return new String(stringBytes, "UTF-8");
		}
		return null;
	}

	public static <M extends ProtoBase> int MessageByteSize(M value) throws IOException {
		if (null != value) {
			int bytes = 0;
			int length = value.ByteSize();
			bytes += VarintByteSize(length);
			bytes += length;
			return bytes;
		}
		return 0;
	}
	public static <M extends ProtoBase> void MessageCode(M value, OutputStream buf) throws IOException {
		if (null != value) {
			int length = value.ByteSize();
			VarintCode(length, buf);
			value.Code(buf, length);
		}
	}
	public static <M extends ProtoBase> M MessageDecode(InputStream buf, Class<M> cls) throws IOException {
		int length = VarintDecode(0, buf);
		if (length > 0) {
			try {
				M value = cls.newInstance();
				value.Decode(buf, length);
				return value;
			} catch (InstantiationException e) {
				e.printStackTrace();
			} catch (IllegalAccessException e) {
				e.printStackTrace();
			}
		}
		return null;
	}

	private static <T> int EntryByteSize(T value, ProtoDefine.ProtoFieldType type) throws IOException {
		int bytes = 0;
		switch (type) {
			case PFT_Bool : {
				bytes += BoolByteSize((Boolean) value);
				break;
			}
			case PFT_Int32 : {
				bytes += Int32ByteSize((Integer) value);
				break;
			}
			case PFT_SInt32 : {
				bytes += SInt32ByteSize((Integer) value);
				break;
			}
			case PFT_UInt32 : {
				bytes += UInt32ByteSize((Integer) value);
				break;
			}
			case PFT_Int64 : {
				bytes += Int64ByteSize((Long) value);
				break;
			}
			case PFT_SInt64 : {
				bytes += SInt64ByteSize((Long) value);
				break;
			}
			case PFT_UInt64 : {
				bytes += UInt64ByteSize((Long) value);
				break;
			}
			case PFT_Enum : {
				bytes += EnumByteSize((Integer) value);
				break;
			}
			case PFT_Float : {
				bytes += FloatByteSize((Float) value);
				break;
			}
			case PFT_Double : {
				bytes += DoubleByteSize((Double) value);
				break;
			}
			case PFT_String : {
				bytes += StringByteSize((String) value);
				break;
			}
			case PFT_Message : {
				bytes += MessageByteSize((ProtoBase) value);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
		return bytes;
	}
	private static <T> void EntryCode(T value, OutputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		switch (type) {
			case PFT_Bool : {
				BoolCode((Boolean) value, buf);
				break;
			}
			case PFT_Int32 : {
				Int32Code((Integer) value, buf);
				break;
			}
			case PFT_Int64 : {
				Int64Code((Long) value, buf);
				break;
			}
			case PFT_SInt32 : {
				SInt32Code((Integer) value, buf);
				break;
			}
			case PFT_SInt64 : {
				SInt64Code((Long) value, buf);
				break;
			}
			case PFT_UInt32 : {
				UInt32Code((Integer) value, buf);
				break;
			}
			case PFT_UInt64 : {
				UInt64Code((Long) value, buf);
				break;
			}
			case PFT_Enum : {
				EnumCode((Integer) value, buf);
				break;
			}
			case PFT_Float : {
				FloatCode((Float) value, buf);
				break;
			}
			case PFT_Double : {
				DoubleCode((Double) value, buf);
				break;
			}
			case PFT_String : {
				StringCode((String) value, buf);
				break;
			}
			case PFT_Message : {
				MessageCode((ProtoBase) value, buf);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
	}
	@SuppressWarnings("unchecked")
	private static <T> void EntryDecode(Collection<T> values, InputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		switch (type) {
			case PFT_Bool : {
				values.add((T) BoolDecode(buf));
				break;
			}
			case PFT_Int32 : {
				values.add((T) Int32Decode(buf));
				break;
			}
			case PFT_Int64 : {
				values.add((T) Int64Decode(buf));
				break;
			}
			case PFT_SInt32 : {
				values.add((T) SInt32Decode(buf));
				break;
			}
			case PFT_SInt64 : {
				values.add((T) SInt64Decode(buf));
				break;
			}
			case PFT_UInt32 : {
				values.add((T) UInt32Decode(buf));
				break;
			}
			case PFT_UInt64 : {
				values.add((T) UInt64Decode(buf));
				break;
			}
			case PFT_Enum : {
				values.add((T) EnumDecode(buf));
				break;
			}
			case PFT_Float : {
				values.add((T) FloatDecode(buf));
				break;
			}
			case PFT_Double : {
				values.add((T) DoubleDecode(buf));
				break;
			}
			case PFT_String : {
				values.add((T) StringDecode(buf));
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
	}
	private static <T extends ProtoBase> void EntryDecode(Collection<T> values, InputStream buf, ProtoDefine.ProtoFieldType type, Class<T> cls) throws IOException {
		switch (type) {
			case PFT_Message : {
				values.add(MessageDecode(buf, cls));
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
	}

	private static <T> int ArrayByteSizeWithoutLength(List<T> values, ProtoDefine.ProtoFieldType type) throws IOException {
		int bytes = 0;
		Iterator<T> it = values.iterator();
		while (it.hasNext()) {
			bytes += EntryByteSize(it.next(), type);
		}
		return bytes;
	}
	public static <T> int ArrayByteSize(List<T> values, ProtoDefine.ProtoFieldType type) throws IOException {
		int bytes = 0;
		bytes += ArrayByteSizeWithoutLength(values, type);
		bytes += VarintByteSize(bytes);
		return bytes;
	}
	public static <T> void ArrayCode(List<T> values, OutputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		VarintCode(ArrayByteSizeWithoutLength(values, type), buf);
		Iterator<T> it = values.iterator();
		while (it.hasNext()) {
			EntryCode(it.next(), buf, type);
		}
	}
	public static <T> void ArrayDecode(List<T> values, InputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		int bufSize = VarintDecode(0, buf);
		int oldPos = buf.available();
		int newPos = oldPos;
		while (oldPos - newPos < bufSize) {
			EntryDecode(values, buf, type);
			newPos = buf.available();
		}
	}
	public static <T extends ProtoBase> void ArrayDecode(List<T> values, InputStream buf, ProtoDefine.ProtoFieldType type, Class<T> cls) throws IOException {
		int bufSize = VarintDecode(0, buf);
		int oldPos = buf.available();
		int newPos = oldPos;
		while (oldPos - newPos < bufSize) {
			EntryDecode(values, buf, type, cls);
			newPos = buf.available();
		}
	}

	private static <T> int SetByteSizeWithoutLength(Set<T> values, ProtoDefine.ProtoFieldType type) throws IOException {
		int bytes = 0;
		Iterator<T> it = values.iterator();
		while (it.hasNext()) {
			bytes += EntryByteSize(it.next(), type);
		}
		return bytes;
	}
	public static <T> int SetByteSize(Set<T> values, ProtoDefine.ProtoFieldType type) throws IOException {
		int bytes = 0;
		bytes += SetByteSizeWithoutLength(values, type);
		bytes += VarintByteSize(bytes);
		return bytes;
	}
	public static <T> void SetCode(Set<T> values, OutputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		VarintCode(SetByteSizeWithoutLength(values, type), buf);
		Iterator<T> it = values.iterator();
		while (it.hasNext()) {
			EntryCode(it.next(), buf, type);
		}
	}
	public static <T> void SetDecode(Set<T> values, InputStream buf, ProtoDefine.ProtoFieldType type) throws IOException {
		int bufSize = VarintDecode(0, buf);
		int oldPos = buf.available();
		int newPos = oldPos;
		while (oldPos - newPos < bufSize) {
			EntryDecode(values, buf, type);
			newPos = buf.available();
		}
	}

	private static <K, V> int EntryByteSizeWithoutLength(K key, V value, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		int bytes = 0;
		if (null != key && null != value) {
			switch (keyType) {
				case PFT_Int32 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += Int32ByteSize((Integer) key);
					break;
				}
				case PFT_Int64 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += Int64ByteSize((Long) key);
					break;
				}
				case PFT_SInt32 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += SInt32ByteSize((Integer) key);
					break;
				}
				case PFT_SInt64 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += SInt64ByteSize((Long) key);
					break;
				}
				case PFT_UInt32 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += UInt32ByteSize((Integer) key);
					break;
				}
				case PFT_UInt64 : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += UInt64ByteSize((Long) key);
					break;
				}
				case PFT_Enum : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += EnumByteSize((Integer) key);
					break;
				}
				case PFT_String : {
					bytes += KeyByteSize(1, ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += StringByteSize((String) key);
					break;
				}
				default : {
					throw new IOException(ProtoDefine.IncompatibleTypeException);
				}
			}
			switch (valueType) {
				case PFT_Bool : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += BoolByteSize((Boolean) value);
					break;
				}
				case PFT_Int32 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += Int32ByteSize((Integer) value);
					break;
				}
				case PFT_Int64 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += Int64ByteSize((Long) value);
					break;
				}
				case PFT_SInt32 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += SInt32ByteSize((Integer) value);
					break;
				}
				case PFT_SInt64 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += SInt64ByteSize((Long) value);
					break;
				}
				case PFT_UInt32 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += UInt32ByteSize((Integer) value);
					break;
				}
				case PFT_UInt64 : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += UInt64ByteSize((Long) value);
					break;
				}
				case PFT_Enum : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_Varint);
					bytes += EnumByteSize((Integer) value);
					break;
				}
				case PFT_Float : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_32bit);
					bytes += FloatByteSize((Float) value);
					break;
				}
				case PFT_Double : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_64bit);
					bytes += DoubleByteSize((Double) value);
					break;
				}
				case PFT_String : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += StringByteSize((String) value);
					break;
				}
				case PFT_Message : {
					bytes += KeyByteSize(2, ProtoDefine.ProtoWireType.PWT_LengthDelimited);
					bytes += MessageByteSize((ProtoBase) value);
					break;
				}
				default : {
					throw new IOException(ProtoDefine.IncompatibleTypeException);
				}
			}
		}
		return bytes;
	}
	public static <K, V> int EntryByteSize(K key, V value, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		int bytes = 0;
		bytes += EntryByteSizeWithoutLength(key, value, keyType, valueType);
		bytes += VarintByteSize(bytes);
		return bytes;
	}
	public static <K, V> void EntryCode(K key, V value, OutputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		VarintCode(EntryByteSizeWithoutLength(key, value, keyType, valueType), buf);
		if (null != key && null != value) {
			switch (keyType) {
				case PFT_Int32 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					Int32Code((Integer) key, buf);
					break;
				}
				case PFT_Int64 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					Int64Code((Long) key, buf);
					break;
				}
				case PFT_SInt32 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					SInt32Code((Integer) key, buf);
					break;
				}
				case PFT_SInt64 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					SInt64Code((Long) key, buf);
					break;
				}
				case PFT_UInt32 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					UInt32Code((Integer) key, buf);
					break;
				}
				case PFT_UInt64 : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					UInt64Code((Long) key, buf);
					break;
				}
				case PFT_Enum : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					EnumCode((Integer) key, buf);
					break;
				}
				case PFT_String : {
					KeyCode(1, ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					StringCode((String) key, buf);
					break;
				}
				default : {
					throw new IOException(ProtoDefine.IncompatibleTypeException);
				}
			}
			switch (valueType) {
				case PFT_Bool : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					BoolCode((Boolean) value, buf);
					break;
				}
				case PFT_Int32 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					Int32Code((Integer) value, buf);
					break;
				}
				case PFT_Int64 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					Int64Code((Long) value, buf);
					break;
				}
				case PFT_SInt32 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					SInt32Code((Integer) value, buf);
					break;
				}
				case PFT_SInt64 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					SInt64Code((Long) value, buf);
					break;
				}
				case PFT_UInt32 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					UInt32Code((Integer) value, buf);
					break;
				}
				case PFT_UInt64 : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					UInt64Code((Long) value, buf);
					break;
				}
				case PFT_Enum : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_Varint, buf);
					EnumCode((Integer) value, buf);
					break;
				}
				case PFT_Float : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_32bit, buf);
					FloatCode((Float) value, buf);
					break;
				}
				case PFT_Double : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_64bit, buf);
					DoubleCode((Double) value, buf);
					break;
				}
				case PFT_String : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					StringCode((String) value, buf);
					break;
				}
				case PFT_Message : {
					KeyCode(2, ProtoDefine.ProtoWireType.PWT_LengthDelimited, buf);
					MessageCode((ProtoBase) value, buf);
					break;
				}
				default : {
					throw new IOException(ProtoDefine.IncompatibleTypeException);
				}
			}
		}
	}
	@SuppressWarnings("unchecked")
	public static <K, V> void EntryDecode(Map<K, V> values, InputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		VarintDecode(0, buf); // decode length
		K key = null;
		V value = null;
		switch (keyType) {
			case PFT_Int32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) Int32Decode(buf);
				break;
			}
			case PFT_Int64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) Int64Decode(buf);
				break;
			}
			case PFT_SInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) SInt32Decode(buf);
				break;
			}
			case PFT_SInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) SInt64Decode(buf);
				break;
			}
			case PFT_UInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) UInt32Decode(buf);
				break;
			}
			case PFT_UInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) UInt64Decode(buf);
				break;
			}
			case PFT_Enum : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) EnumDecode(buf);
				break;
			}
			case PFT_String : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) StringDecode(buf);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
		switch (valueType) {
			case PFT_Bool : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) BoolDecode(buf);
				break;
			}
			case PFT_Int32 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) Int32Decode(buf);
				break;
			}
			case PFT_Int64 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) Int64Decode(buf);
				break;
			}
			case PFT_SInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) SInt32Decode(buf);
				break;
			}
			case PFT_SInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) SInt64Decode(buf);
				break;
			}
			case PFT_UInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) UInt32Decode(buf);
				break;
			}
			case PFT_UInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) UInt64Decode(buf);
				break;
			}
			case PFT_Enum : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) EnumDecode(buf);
				break;
			}
			case PFT_Float : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) FloatDecode(buf);
				break;
			}
			case PFT_Double : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) DoubleDecode(buf);
				break;
			}
			case PFT_String : {
				KeyDecode(buf); // decode tag << 3 | type
				value = (V) StringDecode(buf);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
		values.put(key, value);
	}
	@SuppressWarnings("unchecked")
	public static <K, V extends ProtoBase> void EntryDecode(Map<K, V> values, InputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType, Class<V> cls) throws IOException {
		VarintDecode(0, buf); // decode length
		K key = null;
		V value = null;
		switch (keyType) {
			case PFT_Int32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) Int32Decode(buf);
				break;
			}
			case PFT_Int64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) Int64Decode(buf);
				break;
			}
			case PFT_SInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) SInt32Decode(buf);
				break;
			}
			case PFT_SInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) SInt64Decode(buf);
				break;
			}
			case PFT_UInt32 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) UInt32Decode(buf);
				break;
			}
			case PFT_UInt64 : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) UInt64Decode(buf);
				break;
			}
			case PFT_Enum : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) EnumDecode(buf);
				break;
			}
			case PFT_String : {
				KeyDecode(buf); // decode tag << 3 | type
				key = (K) StringDecode(buf);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
		switch (valueType) {
			case PFT_Message : {
				KeyDecode(buf); // decode tag << 3 | type
				value = MessageDecode(buf, cls);
				break;
			}
			default : {
				throw new IOException(ProtoDefine.IncompatibleTypeException);
			}
		}
		values.put(key, value);
	}

	private static <K, V> int MapByteSizeWithoutLength(Map<K, V> values, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		int bytes = 0;
		Iterator<Map.Entry<K, V>> it = values.entrySet().iterator();
		while (it.hasNext()) {
			Map.Entry<K, V> entry = it.next();
			bytes += EntryByteSize(entry.getKey(), entry.getValue(), keyType, valueType);
		}
		return bytes;
	}
	public static <K, V> int MapByteSize(Map<K, V> values, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		int bytes = 0;
		bytes += MapByteSizeWithoutLength(values, keyType, valueType);
		bytes += VarintByteSize(bytes);
		return bytes;
	}
	public static <K, V> void MapCode(Map<K, V> values, OutputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		VarintCode(MapByteSizeWithoutLength(values, keyType, valueType), buf);
		Iterator<Map.Entry<K, V>> it = values.entrySet().iterator();
		while (it.hasNext()) {
			Map.Entry<K, V> entry = it.next();
			EntryCode(entry.getKey(), entry.getValue(), buf, keyType, valueType);
		}
	}
	public static <K, V> void MapDecode(Map<K, V> values, InputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType) throws IOException {
		int bufSize = VarintDecode(0, buf);
		int oldPos = buf.available();
		int newPos = oldPos;
		while (oldPos - newPos < bufSize) {
			EntryDecode(values, buf, keyType, valueType);
			newPos = buf.available();
		}
	}
	public static <K, V extends ProtoBase> void MapDecode(Map<K, V> values, InputStream buf, ProtoDefine.ProtoFieldType keyType, ProtoDefine.ProtoFieldType valueType, Class<V> cls) throws IOException {
		int bufSize = VarintDecode(0, buf);
		int oldPos = buf.available();
		int newPos = oldPos;
		while (oldPos - newPos < bufSize) {
			EntryDecode(values, buf, keyType, valueType, cls);
			newPos = buf.available();
		}
	}
}