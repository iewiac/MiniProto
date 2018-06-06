#ifndef __FileData_h__
#define __FileData_h__

#include <string>

namespace common{
	namespace tool{

		class FileData
		{
		public:
			FileData();
			FileData(const FileData& other);
			~FileData();

			FileData& operator=(const FileData& other);

			// ��ȡ�ı��ļ����ݣ����ı��������±�Ϊ[begin, end]֮�䣨���������ַ�����ȡ��data��
			void GetData(std::string& data, unsigned int begin, unsigned int end);
			// �����ı��ļ����ݣ���data�����ݣ��滻���ı��������±�Ϊ[begin, end]֮�䣨���������ַ�
			void SetData(const std::string& data, unsigned int begin, unsigned int end);

			// ��ȡ�ı��ļ����ݳ���
			unsigned int GetLen();
			// �����ı��ļ����ݳ���
			void SetLen(unsigned int len);

			// ��ȡ/�����ı��ļ�
			bool Load(const std::string& fileName);
			bool Save(const std::string& fileName);

			// �ı��������֧��10M
			static const unsigned int MaxDataLen = 10 * 1024 * 1024;

		private:
			unsigned int m_DataLen;
			char m_Data[MaxDataLen];
		};

	}
}

#endif