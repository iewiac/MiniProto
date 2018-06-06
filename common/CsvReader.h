#ifndef __CsvReader_h__
#define __CsvReader_h__

#include <string>
#include <vector>
#include <map>
#include <fstream>

#include "StringTool.h"

namespace common{
	namespace tool{

		class CsvReader
		{
		public:
			CsvReader();
			~CsvReader();

			// csv文件打开
			bool OpenFile(const std::string& file_path_name);

			// csv文件打开，并处理前3行数据
			bool LoadFile(const std::string& file_path_name);

			// 读取一行数据（首行去BOM，每行行尾去换行符）
			size_t ReadLine(bool firstLine = false);

			// 读取一行数据后，获取每一列的原始内容
			const std::vector<std::string>& GetLine();

			// 校验列数是否和列名称数量匹配
			bool CheckLine();

			// 根据列名获得列编号，第一列编号为0
			size_t Name2Index(const std::string& name);

			// 取当前行的某一列的值
			bool GetValueList(size_t index, std::vector<std::string>& values, const std::string& split);

			bool GetValue(size_t index, std::string& value);

			bool GetValueList(size_t index, std::vector<unsigned int>& values, const std::string& split);

			bool GetValue(size_t index, unsigned int& value);

			bool GetValueList(size_t index, std::vector<int>& values, const std::string& split);

			bool GetValue(size_t index, int& value);

			bool GetValueList(size_t index, std::vector<float>& values, const std::string& split);

			bool GetValue(size_t index, float& value);

			template <class T>
			bool GetStructList(size_t index, std::vector<T>& values, const std::string& split);

			template <class T>
			bool GetStruct(size_t index, T& value);

		private:
			// 文件输入流
			std::ifstream m_file;

			// 列名称 <-> 列下标 映射表
			std::map<std::string, size_t> m_names;
			// 当前行每一列的值
			std::vector<std::string> m_values;
		};

		template <class T>
		bool CsvReader::GetStructList(size_t index, std::vector<T>& values, const std::string& split)
		{
			if (index < m_values.size())
			{
				std::vector<std::string> tempStrs;
				StringTool::SplitStr2List(m_values[index], split, tempStrs);
				for (size_t i = 0; i < tempStrs.size(); i++)
				{
					if (tempStrs[i].length() > 0)
					{
						T tempT;
						tempT = tempStrs[i];
						values.push_back(tempT);
					}
				}
				return true;
			}
			else
			{
				return false;
			}
		}

		template <class T>
		bool CsvReader::GetStruct(size_t index, T& value)
		{
			if (index < m_values.size())
			{
				value = m_values[index];
				return true;
			}
			else
			{
				return false;
			}
		}

	}
}

#endif