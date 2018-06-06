#include "StringTool.h"

#include <string>
#include <vector>

#include <boost/regex.hpp>

using namespace common::tool;

using namespace std;
using namespace boost;

string StringTool::UpperCaseFirstChar(const string& str)
{
	string temp = str;

	if (temp.length() > 0)
	{
		if ('a' <= temp[0] && temp[0] <= 'z')
		{
			temp[0] = temp[0] - ('a' - 'A');
		}
	}

	return temp;
}

string StringTool::LowerCaseFirstChar(const string& str)
{
	string temp = str;

	if (temp.length() > 0)
	{
		if ('A' <= temp[0] && temp[0] <= 'Z')
		{
			temp[0] = temp[0] + ('a' - 'A');
		}
	}

	return temp;
}

string StringTool::UpperCase(const string& str)
{
	string temp = str;

	for (unsigned int i = 0; i < temp.length(); i++)
	{
		if ('a' <= temp[i] && temp[i] <= 'z')
		{
			temp[i] = temp[i] - ('a' - 'A');
		}
	}

	return temp;
}

string StringTool::LowerCase(const string& str)
{
	string temp = str;

	for (unsigned int i = 0; i < temp.length(); i++)
	{
		if ('A' <= temp[i] && temp[i] <= 'Z')
		{
			temp[i] = temp[i] + ('a' - 'A');
		}
	}

	return temp;
}

string StringTool::TrimAll(const string& str)
{
	string temp;
	temp.reserve(str.size());

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' &&
			str[i] != '\t' &&
			str[i] != '\r' &&
			str[i] != '\n')
		{
			temp += str[i];
		}
	}

	return temp;
}

string StringTool::ReplaceAll(const string& str, const string& src, const string& des)
{
	string temp;
	temp.reserve(str.size());

	if (0 < src.length())
	{
		size_t pos = str.find(src);
		size_t lastpos = 0;
		while (pos != string::npos)
		{
			temp += str.substr(lastpos, pos - lastpos);
			temp += des;
			lastpos = pos + src.length();
			pos = str.find(src, lastpos);
		}
		if (lastpos != str.length())
		{
			temp += str.substr(lastpos, str.length() - lastpos);
		}
	}

	return temp;
}

string StringTool::ReplaceReg(const string& str, const string& src, const string& des)
{
	regex reg(src);
	return regex_replace(str, reg, des);
}

bool StringTool::SplitStr2List(const string& str, const string& split, vector<string>& values)
{
	size_t currPos = str.find(split);
	size_t lastPos = 0;
	while (currPos != string::npos)
	{
		values.push_back(str.substr(lastPos, currPos - lastPos));
		lastPos = currPos + split.length();
		currPos = str.find(split, lastPos);
	}
	values.push_back(str.substr(lastPos, str.length() - lastPos));

	return true;
}

bool StringTool::SplitStr2List(const string& str, const string& split, vector<unsigned int>& values)
{
	string temp = str;
	TrimAll(temp);

	size_t currPos = temp.find(split);
	size_t lastPos = 0;
	while (currPos != string::npos)
	{
		string strUInt = temp.substr(lastPos, currPos - lastPos);
		if (IsUInt(strUInt))
		{
			values.push_back(static_cast<unsigned int>(atoi(strUInt.c_str())));
		}
		else
		{
			return false;
		}
		lastPos = currPos + split.length();
		currPos = temp.find(split, lastPos);
	}
	string strUInt = temp.substr(lastPos, temp.length() - lastPos);
	if (IsUInt(strUInt))
	{
		values.push_back(static_cast<unsigned int>(atoi(strUInt.c_str())));
	}
	else
	{
		return false;
	}

	return true;
}

bool StringTool::SplitStr2List(const string& str, const string& split, vector<int>& values)
{
	string temp = str;
	TrimAll(temp);

	size_t currPos = temp.find(split);
	size_t lastPos = 0;
	while (currPos != string::npos)
	{
		string strInt = temp.substr(lastPos, currPos - lastPos);
		if (IsInt(strInt))
		{
			values.push_back(atoi(strInt.c_str()));
		}
		else
		{
			return false;
		}
		lastPos = currPos + split.length();
		currPos = temp.find(split, lastPos);
	}
	string strInt = temp.substr(lastPos, temp.length() - lastPos);
	if (IsInt(strInt))
	{
		values.push_back(atoi(strInt.c_str()));
	}
	else
	{
		return false;
	}

	return true;
}

bool StringTool::SplitStr2List(const string& str, const string& split, vector<float>& values)
{
	string temp = str;
	TrimAll(temp);

	size_t currPos = temp.find(split);
	size_t lastPos = 0;
	while (currPos != string::npos)
	{
		string strFloat = temp.substr(lastPos, currPos - lastPos);
		if (IsFloat(strFloat))
		{
			values.push_back(static_cast<float>(atof(strFloat.c_str())));
		}
		else
		{
			return false;
		}
		lastPos = currPos + split.length();
		currPos = temp.find(split, lastPos);
	}
	string strFloat = temp.substr(lastPos, temp.length() - lastPos);
	if (IsFloat(strFloat))
	{
		values.push_back(static_cast<float>(atof(strFloat.c_str())));
	}
	else
	{
		return false;
	}

	return true;
}

bool StringTool::IsUInt(const string& str)
{
	regex reg("(0)|([1-9][0-9]*)"); // 0 或者 1-9开头后面若干个0-9的数字
	return regex_match(str, reg);
}

bool StringTool::IsInt(const string& str)
{
	regex reg("(0)|([-]?[1-9][0-9]*)"); // 0 或者 正负1-9开头后面若干个0-9的数字
	return regex_match(str, reg);
}

bool StringTool::IsFloat(const string& str)
{
	regex reg(
				"("
					"0([.]0+)?" // 0 后面跟 小数点 再跟若干个0（如果有小数点，则后面的数字字符串长度必须大于0）
				")"
				"|"
				"("
					"[-]?0[.][0-9]*[1-9][0-9]*" // 正负 0 后面跟 小数点 再跟一个不为0的数字字符串
				")"
				"|"
				"("
					"[-]?([1-9][0-9]*)([.][0-9]+)?" // 正负 1-9开头后面若干个0-9的数字 后面跟 小数点 再跟数字字符串（如果有小数点，则后面的数字字符串长度必须大于0）
				")"
			);
	return regex_match(str, reg);
}

bool StringTool::IsDateTime(const string& str)
{
	regex reg(
				"[1-9][0-9]?[0-9]?[0-9]?" // 年，1-9开头，后面最多3个0-9的数字
				"[-]"
				"("
					"(0?[1-9])|(1[0-2])" // 月，01 - 09（十位的0可以没有），10 - 12
				")"
				"[-]"
				"("
					"(0?[1-9])|([1-2][0-9])|(3[0-1])" // 日，01 - 09（十位的0可以没有），10 - 29，30 - 31 
				")"
				"[ ]"
				"("
					"([0-1]?[0-9])|(2[0-3])" // 时，00 - 19（十位的0可以没有）， 20 - 23
				")"
				"[:]"
				"[0-5]?[0-9]" // 分， 00 - 59（十位的0可以没有）
				"[:]"
				"[0-5]?[0-9]" // 秒， 00 - 59（十位的0可以没有）
			);
	return regex_match(str, reg);
}

bool StringTool::IsTime(const string& str)
{
	regex reg(	
				"("
					"([0-1]?[0-9])|(2[0-3])" // 时，00 - 19（十位的0可以没有）， 20 - 23
				")"
				"[:]"
				"[0-5]?[0-9]" // 分， 00 - 59（十位的0可以没有）
				"("
					"[:]"
					"[0-5]?[0-9]" // 秒（可以没有）， 00 - 59（十位的0可以没有）
				")?"
			);
	return regex_match(str, reg);
}

bool StringTool::IsRang(const std::string& str)
{
	regex reg(
				"("
					"(0)|([-]?[1-9][0-9]*)" // 0 或者 正负1-9开头后面若干个0-9的数字
				")"
				"[-]"
				"("
					"(0)|([-]?[1-9][0-9]*)" // 0 或者 正负1-9开头后面若干个0-9的数字
				")");
	return regex_match(str, reg);
}

bool StringTool::String2DateTime(const std::string& str, time_t& datetime)
{
	tm _tm;
	int year = 1900, month = 1, day = 0, hour = 0, minute = 0, second = 0;
	int ret = sscanf(str.c_str(), "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
	if (ret != 6)
	{
		return false;
	}
	_tm.tm_year = year - 1900;
	_tm.tm_mon = month - 1;
	_tm.tm_mday = day;
	_tm.tm_hour = hour;
	_tm.tm_min = minute;
	_tm.tm_sec = second;
	_tm.tm_isdst = 0;
	datetime = mktime(&_tm);
	return true;
}

bool StringTool::String2Time(const std::string& str, time_t& time)
{
	int hour = 0, minute = 0, second = 0;
	int ret = sscanf(str.c_str(), "%d:%d:%d", &hour, &minute, &second);
	if (ret != 2 && ret != 3)
	{
		return false;
	}
	time = hour * 60 * 60 + minute * 60 + second;
	return true;
}

bool StringTool::String2Rang(const std::string& str, int(&rang)[2])
{
	int ret = sscanf(str.c_str(), "%d-%d", &(rang[0]), &(rang[1]));
	if (ret != 2)
	{
		return false;
	}
	return true;
}

bool StringTool::IsUtf8(const string& str)
{
	unsigned int nBytes = 0;
	bool bAllAscii = true;

	for (size_t i = 0; i < str.length(); i++)
	{
		unsigned char ch = str[i];

		// 判断是否ASCII编码，如果不是，说明有可能是UTF-8，ASCII一个字节用7位编码，最高位标记为0，0xxxxxxx
		if ((ch & 0x80) != 0)
		{
			bAllAscii = false;
		}

		// 如果不是ASCII码，计算字节数(校验是否符合UTF8规则)
		if (nBytes == 0)
		{
			if (ch >= 0x80)
			{
				if (ch >= 0xFC && ch <= 0xFD)
				{
					nBytes = 6;
				}
				else if (ch >= 0xF8)
				{
					nBytes = 5;
				}
				else if (ch >= 0xF0)
				{
					nBytes = 4;
				}
				else if (ch >= 0xE0)
				{
					nBytes = 3;
				}
				else if (ch >= 0xC0)
				{
					nBytes = 2;
				}
				else
				{
					return false;
				}
				nBytes--;
			}
		}
		// 多字节符的非首字节，应为10xxxxxx
		else
		{
			if ((ch & 0xC0) != 0x80)
			{
				return false;
			}
			nBytes--;
		}
	}

	if (nBytes > 0)
	{
		return false;
	}

	// 如果全部都是ASCII, 说明不是UTF-8
	if (bAllAscii)
	{
		return false;
	}

	return true;
}

string StringTool::GbkToUtf8(const string& gbk)
{
#ifdef WIN32
#ifdef UNICODE
	wstring unicode = MbStrToWcStr(gbk, L"chs");
#else // UNICODE
	wstring unicode = MbStrToWcStr(gbk, "chs");
#endif // UNICODE
#else // WIN32
#ifdef UNICODE
	wstring unicode = MbStrToWcStr(gbk, L"zh_CN.GB18030");
#else // UNICODE
	wstring unicode = MbStrToWcStr(gbk, "zh_CN.GB18030");
#endif // UNICODE
#endif // WIN32

	string utf8;
	UnicodeToUtf8(utf8, unicode);

	return utf8;
}

string StringTool::Utf8ToGbk(const string& utf8)
{
	wstring unicode;
	Utf8ToUnicode(unicode, utf8);

#ifdef WIN32
#ifdef UNICODE
	string gbk = WcStrToMbStr(unicode, L"chs");
#else // UNICODE
	string gbk = WcStrToMbStr(unicode, "chs");
#endif // UNICODE
#else // WIN32
#ifdef UNICODE
	string gbk = WcStrToMbStr(unicode, L"zh_CN.GB18030");
#else // UNICODE
	string gbk = WcStrToMbStr(unicode, "zh_CN.GB18030");
#endif // UNICODE
#endif // WIN32

	return gbk;
}

void StringTool::UnicodeToUtf8(string& utf8, const wstring& unicode)
{
	size_t mbLen = UnicodeToUtf8Length(unicode) + 1;
	if (1 < mbLen)
	{
		utf8.resize(mbLen);

		size_t utf8Pos = 0;
		size_t unicodePos = 0;

		size_t unicodeLen = unicode.length();
		while (unicodePos < unicodeLen)
		{
			unsigned short unicodeCh = unicode[unicodePos];

			// 0x0800 - 0xffff => 1110 XXXX, 10XX XXXX, 10XX XXXX
			if (0x0800 <= unicodeCh)
			{
				utf8[utf8Pos + 0] = ((unicodeCh >> 12) & 0x0F) | 0xE0;
				utf8[utf8Pos + 1] = ((unicodeCh >> 6) & 0x3F) | 0x80;
				utf8[utf8Pos + 2] = (unicodeCh & 0x3F) | 0x80;

				unicodePos += 1;
				utf8Pos += 3;
			}
			// 0x0080 - 0x07ff => 110X XXXX, 10XX XXXX
			else if (0x0080 <= unicodeCh && unicodeCh < 0x07FF)
			{
				utf8[utf8Pos + 0] = ((unicodeCh >> 6) & 0x1F) | 0xC0;
				utf8[utf8Pos + 1] = (unicodeCh & 0x3F) | 0x80;

				unicodePos += 1;
				utf8Pos += 2;
			}
			// unicodeCh < 0x0080 // 0x0000 - 0x007f => 0XXX XXXX
			else
			{
				utf8[utf8Pos + 0] = unicodeCh & 0x7F;

				unicodePos += 1;
				utf8Pos += 1;
			}
		}

		utf8[utf8Pos] = 0;
	}
}

void StringTool::Utf8ToUnicode(wstring& unicode, const string& utf8)
{
	size_t wcLen = Utf8ToUnicodeLength(utf8) + 1;
	if (1 < wcLen)
	{
		unicode.resize(wcLen);

		size_t utf8Pos = 0;
		size_t unicodePos = 0;

		size_t utf8Len = utf8.length();
		while (utf8Pos < utf8Len)
		{
			unsigned short utfCh0 = utf8[utf8Pos + 0] & 0xFF;

			// 1111 110X, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX
			// 1111 10XX, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX
			// 1111 0XXX, 10XX XXXX, 10XX XXXX, 10XX XXXX 
			if (0xF0 <= utfCh0)
			{
				break; // 需要UCS-4，未处理
			}
			// 1110 XXXX, 10XX XXXX, 10XX XXXX
			else if (0xE0 <= utfCh0 && utfCh0 < 0xF0)
			{
				unsigned short utfCh1 = utf8[utf8Pos + 1] & 0xFF;
				unsigned short utfCh2 = utf8[utf8Pos + 2] & 0xFF;
				unicode[unicodePos] = ((((utfCh0 << 4) & 0xF0) + ((utfCh1 >> 2) & 0x0F)) << 8) + (((utfCh1 << 6) & 0xC0) + (utfCh2 & 0x3F));

				utf8Pos += 3;
				unicodePos += 1;
			}
			// 110X XXXX, 10XX XXXX
			else if (0xC0 <= utfCh0 && utfCh0 < 0xE0)
			{
				unsigned short utfCh1 = utf8[utf8Pos + 1] & 0xFF;
				unicode[unicodePos] = (((utfCh0 >> 2) & 0x07) << 8) + ((utfCh0 << 6) & 0xC0 + utfCh1 & 0x3F);

				utf8Pos += 2;
				unicodePos += 1;
			}
			// 10XX XXXX 
			else if (0x80 <= utfCh0 && utfCh0 < 0xC0)
			{
				break; // 非法情况，Utf8首字节不存在该种编码
			}
			// 0XXX XXXX
			else
			{
				unicode[unicodePos] = utfCh0;

				utf8Pos += 1;
				unicodePos += 1;
			}
		}

		unicode[unicodePos] = 0;
	}
}

size_t StringTool::UnicodeToUtf8Length(const wstring& unicode)
{
	size_t chars = 0;

	size_t unicodeLen = unicode.length();
	size_t unicodePos = 0;
	while (unicodePos < unicodeLen)
	{
		unsigned short unicodeCh = unicode[unicodePos];

		// 0x0800 - 0xffff => 1110 XXXX, 10XX XXXX, 10XX XXXX
		if (0x0800 <= unicodeCh)
		{
			unicodePos += 1;
			chars += 3;
		}
		// 0x0080 - 0x07ff => 110X XXXX, 10XX XXXX
		else if (0x0080 <= unicodeCh && unicodeCh < 0x07FF)
		{
			unicodePos += 1;
			chars += 2;
		}
		// unicodeCh < 0x0080 // 0x0000 - 0x007f => 0XXX XXXX
		else
		{
			unicodePos += 1;
			chars += 1;
		}
	}

	return chars;
}

size_t StringTool::Utf8ToUnicodeLength(const string& utf8)
{
	size_t wchars = 0;

	size_t utf8Len = utf8.length();
	size_t utf8Pos = 0;
	while (utf8Pos < utf8Len)
	{
		unsigned char utf8Ch = utf8[utf8Pos];

		// 1111 110X, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX
		// 1111 10XX, 10XX XXXX, 10XX XXXX, 10XX XXXX, 10XX XXXX
		// 1111 0XXX, 10XX XXXX, 10XX XXXX, 10XX XXXX 
		if (0xF0 <= utf8Ch)
		{
			return 0; // 需要UCS-4，未处理
		}
		// 1110 XXXX, 10XX XXXX, 10XX XXXX
		else if (0xE0 <= utf8Ch && utf8Ch < 0xF0)
		{
			utf8Pos += 3;
			wchars += 1;
		}
		// 110X XXXX, 10XX XXXX
		else if (0xC0 <= utf8Ch && utf8Ch < 0xE0)
		{
			utf8Pos += 2;
			wchars += 1;
		}
		// 10XX XXXX 
		else if (0x80 <= utf8Ch && utf8Ch < 0xC0)
		{
			return 0; // 非法情况，Utf8首字节不存在该种编码
		}
		// 0XXX XXXX
		else
		{
			utf8Pos += 1;
			wchars += 1;
		}
	}

	return wchars;
}

#ifdef UNICODE
wstring StringTool::MbStrToWcStr(const string& mbs, const wchar_t* language)
#else
wstring StringTool::MbStrToWcStr(const string& mbs, const char* language)
#endif
{
	wstring wcs;

#ifdef UNICODE
	wstring curLocale = _wsetlocale(LC_ALL, NULL);
	_wsetlocale(LC_ALL, language);
#else
	string curLocale = setlocale(LC_ALL, NULL);
	setlocale(LC_ALL, language);
#endif

	int wcLen = mbstowcs(NULL, mbs.c_str(), 0) + 1;
	if (1 < wcLen)
	{
		wchar_t* wcBuf = new wchar_t[wcLen];
		if (NULL != wcBuf)
		{
			wmemset(wcBuf, 0, wcLen);
			mbstowcs(wcBuf, mbs.c_str(), wcLen);
		}

		wcs = wcBuf;

		if (NULL != wcBuf)
		{
			delete[] wcBuf;
			wcBuf = NULL;
		}
	}

#ifdef UNICODE
	_wsetlocale(LC_ALL, curLocale.c_str());
#else
	setlocale(LC_ALL, curLocale.c_str());
#endif

	return wcs;
}

#ifdef UNICODE
string StringTool::WcStrToMbStr(const wstring& wcs, const wchar_t* language)
#else
string StringTool::WcStrToMbStr(const wstring& wcs, const char* language)
#endif
{
	string mbs;

#ifdef UNICODE
	wstring curLocale = _wsetlocale(LC_ALL, NULL);
	_wsetlocale(LC_ALL, language);
#else
	string curLocale = setlocale(LC_ALL, NULL);
	setlocale(LC_ALL, language);
#endif

	int mbLen = wcstombs(NULL, wcs.c_str(), 0) + 1;
	if (1 < mbLen)
	{
		char* mbBuf = new char[mbLen];
		if (NULL != mbBuf)
		{
			memset(mbBuf, 0, mbLen);
			wcstombs(mbBuf, wcs.c_str(), mbLen);
		}

		mbs = mbBuf;

		if (NULL != mbBuf)
		{
			delete[] mbBuf;
			mbBuf = NULL;
		}
	}

#ifdef UNICODE
	_wsetlocale(LC_ALL, curLocale.c_str());
#else
	setlocale(LC_ALL, curLocale.c_str());
#endif

	return mbs;
}