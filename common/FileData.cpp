#include "FileData.h"

#include <string.h>
#include <fstream>

using namespace common::tool;

using namespace std;

FileData::FileData()
{
	m_DataLen = 0;
}
FileData::FileData(const FileData& other)
{
	*this = other;
}
FileData::~FileData()
{

}

FileData& FileData::operator=(const FileData& other)
{
	m_DataLen = other.m_DataLen;
	memcpy(m_Data, other.m_Data, other.m_DataLen);

	return *this;
}

void FileData::GetData(string& data, unsigned int begin, unsigned int end)
{
	if (begin <= end && end < MaxDataLen)
	{
		data.assign(m_Data + begin, end - begin + 1);
	}
}

void FileData::SetData(const string& data, unsigned int begin, unsigned int end)
{
	if (begin <= end && end < MaxDataLen && (end - begin + 1) <= data.length())
	{
		memcpy(m_Data + begin, data.c_str(), end - begin + 1);

		if (m_DataLen < end + 1)
		{
			m_DataLen = end + 1;
		}
	}
}

unsigned int FileData::GetLen()
{
	return m_DataLen;
}

void FileData::SetLen(unsigned int len)
{
	m_DataLen = len;
}

bool FileData::Load(const string& fileName)
{
	ifstream file;
	file.open(fileName.c_str(), ios::in | ios::binary | ios::ate);
	if (file)
	{
		m_DataLen = static_cast<unsigned int>(file.tellg());
		if (m_DataLen <= MaxDataLen)
		{
			file.seekg(0, ios::beg);
			memset(m_Data, 0x00, sizeof(m_Data));
			file.read(m_Data, m_DataLen);
		}
		file.close();

		return true;
	}
	else
	{
		return false;
	}
}

bool FileData::Save(const string& fileName)
{
	ofstream file;
	file.open(fileName.c_str(), ios::out | ios::trunc | ios::binary);
	if (file)
	{
		file.write(m_Data, m_DataLen);
		file.flush();
		file.close();

		return true;
	}
	else
	{
		return false;
	}
}