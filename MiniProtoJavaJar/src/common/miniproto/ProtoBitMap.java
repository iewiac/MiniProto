package common.miniproto;

public class ProtoBitMap {

	public ProtoBitMap(int count) {
		if (count != 0) {
			m_Bits = new byte[(count - 1) / 8 + 1];
		} else {
			m_Bits = new byte[1];
		}
	}
	
	public void SetBit(int index) {
		if (index < (m_Bits.length * 8)) {
			m_Bits[index / 8] |= (byte) (0x01 << (byte) (index % 8));
		}
	}
	public void ClearBit(int index) {
		if (index < (m_Bits.length * 8)) {
			m_Bits[index / 8] &= (byte) ~(0x01 << (byte) (index % 8));
		}
	}
	public boolean HasBit(int index) {
		if (index < (m_Bits.length * 8)) {
			return (m_Bits[index / 8] & (byte) (0x01 << (byte) (index % 8))) != 0;
		} else {
			return false;
		}
	}

	public void Clear() {
		for (int i = 0; i < m_Bits.length; i++) {
			m_Bits[i] = 0;
		}
	}

	private byte[] m_Bits = null;

	public String toString() {
		StringBuffer sb = new StringBuffer();
		sb.append("[");
		for (int i = 0; i < m_Bits.length; i++) {
			sb.append(m_Bits[i]);
			if (i < m_Bits.length - 1) {
				sb.append(", ");
			}
		}
		sb.append("]");
		return sb.toString();
	}
}