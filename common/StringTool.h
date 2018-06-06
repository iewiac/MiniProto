#ifndef __StringTool_h__
#define __StringTool_h__

#include <string>
#include <vector>

namespace common{
	namespace tool{

		class StringTool
		{
		public:
			// 字符串首字母大写
			static std::string UpperCaseFirstChar(const std::string& str);
			static std::string LowerCaseFirstChar(const std::string& str);

			// 字符串全字母大/小写
			static std::string UpperCase(const std::string& str);
			static std::string LowerCase(const std::string& str);

			// 去除字符串str中的所有制表符：' '，'\t'，'\r'，'\n'
			static std::string TrimAll(const std::string& str);

			// 将字符串str中所有的字符串src替换成字符串des
			static std::string ReplaceAll(const std::string& str, const std::string& src, const std::string& des);
			// 将字符串str中所有符合src格式（正则表达式）的字符串替换成字符串des
			static std::string ReplaceReg(const std::string& str, const std::string& src, const std::string& des);

			// 对字符串按指定分隔符进行分割，返回分割后的内容列表
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<std::string>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<unsigned int>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<int>& values);
			static bool SplitStr2List(const std::string& str, const std::string& split, std::vector<float>& values);
			
			// 判断字符串是否是一个合法的无符号数
			static bool IsUInt(const std::string& str);
			// 判断字符串是否是一个合法的数字
			static bool IsInt(const std::string& str);
			// 判断字符串是否是一个合法的浮点数
			static bool IsFloat(const std::string& str);
			// 判断字符串是否是一个符合“YYYY-MM-DD hh-mm-ss”格式的时间
			static bool IsDateTime(const std::string& str);
			// 判断字符串是否是一个符合“hh-mm(-ss)”格式的时间
			static bool IsTime(const std::string& str);
			// 判断字符串是否是一个符合“int-int”格式的区间范围
			static bool IsRang(const std::string& str);

			// 将符合“YYYY-MM-DD hh-mm-ss”格式的字符串转换成距离1970-1-1 00:00:00经过的秒数
			static bool String2DateTime(const std::string& str, time_t& datetime);
			// 将符合“hh-mm-ss”格式的字符串转换成距离当天00:00:00经过的秒数
			static bool String2Time(const std::string& str, time_t& time);
			// 将符合“int-int”格式的区间转换成区间的起始值 和 终止值
			static bool String2Rang(const std::string& str, int (&rang)[2]);

			// 返回一个字符串是否是合法的utf8编码
			static bool IsUtf8(const std::string& str);

			// Gbk和Utf8互转，返回转换后的字符串
			static std::string GbkToUtf8(const std::string& gbk);
			static std::string Utf8ToGbk(const std::string& utf8);

			// Unicode和Utf8互转，返回转换后的字符串
			static void UnicodeToUtf8(std::string& utf8, const std::wstring& unicode);
			static void Utf8ToUnicode(std::wstring& unicode, const std::string& utf8);

			// 单宽字节互转
#ifdef UNICODE
			static std::wstring MbStrToWcStr(const std::string& mbs, const wchar_t* language);
			static std::string WcStrToMbStr(const std::wstring& wcs, const wchar_t* language);
#else
			static std::wstring MbStrToWcStr(const std::string& mbs, const char* language);
			static std::string WcStrToMbStr(const std::wstring& wcs, const char* language);
#endif

		private:
			// Unicode和Utf8互转，获取转换后的字符数
			static size_t UnicodeToUtf8Length(const std::wstring& unicode);
			static size_t Utf8ToUnicodeLength(const std::string& utf8);
		};

	}
}

#endif