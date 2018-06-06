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

			// 提取文本文件内容，将文本中内容下标为[begin, end]之间（包括）的字符，提取到data中
			void GetData(std::string& data, unsigned int begin, unsigned int end);
			// 设置文本文件内容，用data中内容，替换掉文本中内容下标为[begin, end]之间（包括）的字符
			void SetData(const std::string& data, unsigned int begin, unsigned int end);

			// 获取文本文件内容长度
			unsigned int GetLen();
			// 设置文本文件内容长度
			void SetLen(unsigned int len);

			// 读取/保存文本文件
			bool Load(const std::string& fileName);
			bool Save(const std::string& fileName);

			// 文本数据最大支持10M
			static const unsigned int MaxDataLen = 10 * 1024 * 1024;

		private:
			unsigned int m_DataLen;
			char m_Data[MaxDataLen];
		};

	}
}

#endif