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

			// csv�ļ���
			bool OpenFile(const std::string& file_path_name);

			// csv�ļ��򿪣�������ǰ3������
			bool LoadFile(const std::string& file_path_name);

			// ��ȡһ�����ݣ�����ȥBOM��ÿ����βȥ���з���
			size_t ReadLine(bool firstLine = false);

			// ��ȡһ�����ݺ󣬻�ȡÿһ�е�ԭʼ����
			const std::vector<std::string>& GetLine();

			// У�������Ƿ������������ƥ��
			bool CheckLine();

			// ������������б�ţ���һ�б��Ϊ0
			size_t Name2Index(const std::string& name);

			// ȡ��ǰ�е�ĳһ�е�ֵ
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
			// �ļ�������
			std::ifstream m_file;

			// ������ <-> ���±� ӳ���
			std::map<std::string, size_t> m_names;
			// ��ǰ��ÿһ�е�ֵ
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