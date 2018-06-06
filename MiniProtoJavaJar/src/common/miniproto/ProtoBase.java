package common.miniproto;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.lang.reflect.Field;

public abstract class ProtoBase {

	public ProtoBase() {

	}

	public abstract int ByteSize() throws IOException;

	public abstract void Code(OutputStream buf, int size) throws IOException;

	public abstract void Decode(InputStream buf, int size) throws IOException;

	public abstract void Clear();

	public abstract void Release();

	public boolean SerializeToStream(OutputStream buf, int size) {

		if (null != buf) {
			try {
				Code(buf, size);
			} catch (IOException e) {
				return false;
			}
			return true;
		} else {
			return false;
		}
	}

	public boolean ParseFromStream(InputStream buf, int size) {

		if (null != buf) {
			try {
				Clear();
				Decode(buf, size);
			} catch (IOException e) {
				return false;
			}
			return true;
		} else {
			return false;
		}
	}

	public String toString() {

		StringBuffer sb = new StringBuffer();
		sb.append("{");
		try {
			Field[] fields = this.getClass().getDeclaredFields();
			if (null != fields) {
				for (int i = 0; i < fields.length; i++) {
					Field field = fields[i];
					field.setAccessible(true);
					sb.append(field.getName());
					sb.append(":");
					sb.append(field.get(this).toString());
					if (i < fields.length - 1) {
						sb.append(", ");
					}
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		sb.append("}");
		return sb.toString();
	}
}
