#include "CsvReader.h"

#include <string.h>

namespace common{
	namespace tool{

		const unsigned int MaxLineLen = 10240;
		const std::string CsvSplit = ",";

		CsvReader::CsvReader()
		{
			m_names.clear();
			m_values.clear();
		}

		CsvReader::~CsvReader()
		{
			m_names.clear();
			m_values.clear();

			if (m_file)
			{
				m_file.close();
			}
		}

		size_t CsvReader::ReadLine(bool firstLine)
		{
			if (m_file)
			{
				char line[MaxLineLen];
				memset(line, 0x00, sizeof(char)* MaxLineLen);
				m_file.getline(line, MaxLineLen);
				size_t len = strlen(line);

				// 去除首行BOM
				if (3 <= len)
				{
					if (firstLine)
					{
						if (0xEF == (unsigned char)line[0] &&
							0xBB == (unsigned char)line[1] &&
							0xBF == (unsigned char)line[2])
						{
							memcpy(line, line + 3, len + 1 - 3);
							len = len - 3;
						}
					}
				}

				// 去除每行末尾\r\n
				while (1 <= len)
				{
					if ('\r' == line[len - 1] || '\n' == line[len - 1])
					{
						line[len - 1] = '\0';
						len = len - 1;
					}
					else
					{
						break;
					}
				}

				if (0 < len)
				{
					m_values.clear();
					StringTool::SplitStr2List(line, CsvSplit, m_values);
				}

				return len;
			}
			else
			{
				return 0;
			}
		}

		const std::vector<std::string>& CsvReader::GetLine()
		{
			return m_values;
		}

		bool CsvReader::CheckLine()
		{
			if (m_values.size() == m_names.size())
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::OpenFile(const std::string& file_path_name)
		{
			m_file.open(file_path_name.c_str(), std::ios::in);
			if (m_file)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::LoadFile(const std::string& file_path_name)
		{
			m_file.open(file_path_name.c_str(), std::ios::in);
			if (m_file)
			{
				// 读列名称
				ReadLine(true);
				// 保存列名称，用于字段验证，和根据列名称取列下标
				for (size_t i = 0; i < m_values.size(); i++)
				{
					m_names[StringTool::UpperCaseFirstChar(m_values[i])] = i;
				}

				// 读列类型
				ReadLine();

				// 读注释
				ReadLine();

				return true;
			}
			else
			{
				return false;
			}
		}

		size_t CsvReader::Name2Index(const std::string& name)
		{
			std::map<std::string, size_t>::iterator it = m_names.find(name);
			if (it != m_names.end())
			{
				return it->second;
			}
			else
			{
				return -1;
			}
		}

		bool CsvReader::GetValueList(size_t index, std::vector<std::string>& values, const std::string& split)
		{
			if (index < m_values.size())
			{
				if (0 < m_values[index].length())
				{
					StringTool::SplitStr2List(m_values[index], split, values);
				}

				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValue(size_t index, std::string& value)
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

		bool CsvReader::GetValueList(size_t index, std::vector<unsigned int>& values, const std::string& split)
		{
			if (index < m_values.size())
			{
				if (0 < m_values[index].length())
				{
					return StringTool::SplitStr2List(m_values[index], split, values);
				}

				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValue(size_t index, unsigned int& value)
		{
			if (index < m_values.size())
			{
				if (StringTool::IsUInt(m_values[index]))
				{
					value = static_cast<unsigned int>(atoi(m_values[index].c_str()));
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValueList(size_t index, std::vector<int>& values, const std::string& split)
		{
			if (index < m_values.size())
			{
				if (0 < m_values[index].length())
				{
					return StringTool::SplitStr2List(m_values[index], split, values);
				}

				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValue(size_t index, int& value)
		{
			if (index < m_values.size())
			{
				if (StringTool::IsInt(m_values[index]))
				{
					value = atoi(m_values[index].c_str());
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValueList(size_t index, std::vector<float>& values, const std::string& split)
		{
			if (index < m_values.size())
			{
				if (0 < m_values[index].length())
				{
					return StringTool::SplitStr2List(m_values[index], split, values);
				}

				return true;
			}
			else
			{
				return false;
			}
		}

		bool CsvReader::GetValue(size_t index, float& value)
		{
			if (index < m_values.size())
			{
				if (StringTool::IsFloat(m_values[index]))
				{
					value = static_cast<float>(atof(m_values[index].c_str()));
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}

	}
}