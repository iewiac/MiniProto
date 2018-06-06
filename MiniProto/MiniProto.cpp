// MiniProto.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>

#include <boost/filesystem.hpp>

#include "StringTool.h"

using namespace common::tool;

#include "ProtoParse.h"
#include "ProtoCodeTool.h"

void ParseProtoToCpp(const char* outDir, const ProtoParse& protoParse)
{
	std::map<std::string, ProtoFile>::const_iterator itFile = protoParse.m_Files.begin();
	while (itFile != protoParse.m_Files.end())
	{
		const ProtoFile& protoFile = itFile->second;

		// 生成头文件的完整路径名称
		std::string outFilePathName;
		outFilePathName.append(outDir);
		outFilePathName = StringTool::ReplaceAll(outFilePathName, "\\", "/");
		if (outFilePathName.length() > 0 &&
			outFilePathName.c_str()[outFilePathName.length() - 1] != '/')
		{
			outFilePathName.append("/");
		}
		if (!boost::filesystem::exists(outFilePathName.c_str()))
		{
			boost::filesystem::create_directories(outFilePathName.c_str());
		}
		outFilePathName.append(protoFile.m_FileName);
		outFilePathName.append(".h");

		// 打开文件，写文件
		std::ofstream of;
		of.open(outFilePathName, std::ios::out);
		if (of)
		{
			ProtoCodeTool::ProtoFile2Head(protoFile, of);
			of.close();
		}

		itFile++;
	}
}
void ParseProtoToJava(const char* outDir, const ProtoParse& protoParse)
{
	std::map<std::string, ProtoFile>::const_iterator itFile = protoParse.m_Files.begin();
	while (itFile != protoParse.m_Files.end())
	{
		const ProtoFile& protoFile = itFile->second;

		// 生成头文件的完整路径名称
		std::string outFilePathName;
		outFilePathName.append(outDir);
		outFilePathName = StringTool::ReplaceAll(outFilePathName, "\\", "/");
		if (outFilePathName.length() > 0 &&
			outFilePathName.c_str()[outFilePathName.length() - 1] != '/')
		{
			outFilePathName.append("/");
		}
		if (protoFile.m_Package.length() > 0)
		{
			outFilePathName.append(StringTool::ReplaceAll(protoFile.m_Package, ".", "/"));
			outFilePathName.append("/");
		}
		if (!boost::filesystem::exists(outFilePathName.c_str()))
		{
			boost::filesystem::create_directories(outFilePathName.c_str());
		}
		outFilePathName.append(protoFile.m_FileName);
		outFilePathName.append(".java");

		// 打开文件，写文件
		std::ofstream of;
		of.open(outFilePathName, std::ios::out);
		if (of)
		{
			ProtoCodeTool::ProtoFile2Java(protoFile, of);
			of.close();
		}

		itFile++;
	}
}
void ParseProtoToCs(const char* outDir, const ProtoParse& protoParse)
{
	std::map<std::string, ProtoFile>::const_iterator itFile = protoParse.m_Files.begin();
	while (itFile != protoParse.m_Files.end())
	{
		const ProtoFile& protoFile = itFile->second;

		// 生成头文件的完整路径名称
		std::string outFilePathName;
		outFilePathName.append(outDir);
		outFilePathName = StringTool::ReplaceAll(outFilePathName, "\\", "/");
		if (outFilePathName.length() > 0 &&
			outFilePathName.c_str()[outFilePathName.length() - 1] != '/')
		{
			outFilePathName.append("/");
		}
		if (!boost::filesystem::exists(outFilePathName.c_str()))
		{
			boost::filesystem::create_directories(outFilePathName.c_str());
		}
		outFilePathName.append(protoFile.m_FileName);
		outFilePathName.append(".cs");

		// 打开文件，写文件
		std::ofstream of;
		of.open(outFilePathName, std::ios::out);
		if (of)
		{
			ProtoCodeTool::ProtoFile2Cs(protoFile, of);
			of.close();
		}

		itFile++;
	}
}


int main(int argc, char* argv[])
{
	g_ProtoVersion = PRV_Proto2;
	std::vector<std::string> protoFileName;
	std::string cppPath = "";
	std::string csharpPath = "";
	std::string javaPath = "";

	for (int i = 1; i < argc; i++)
	{
		std::vector<std::string> values;
		StringTool::SplitStr2List(argv[i], "=", values);
		if (2 == values.size())
		{
			if (0 == strcmp(values[0].c_str(), "proto_version"))
			{
				g_ProtoVersion = (ProtoCodeVersion)atoi(values[1].c_str());
			}
			else if (0 == strcmp(values[0].c_str(), "proto_file"))
			{
				protoFileName.push_back(StringTool::ReplaceAll(values[1], "\\", "/"));
			}
			else if (0 == strcmp(values[0].c_str(), "cpp_path"))
			{
				cppPath = StringTool::ReplaceAll(values[1], "\\", "/");
			}
			else if (0 == strcmp(values[0].c_str(), "csharp_path"))
			{
				csharpPath = StringTool::ReplaceAll(values[1], "\\", "/");
			}
			else if (0 == strcmp(values[0].c_str(), "java_path"))
			{
				javaPath = StringTool::ReplaceAll(values[1], "\\", "/");
			}
		}
	}
	if (g_ProtoVersion != PRV_Proto2 && g_ProtoVersion != PRV_Proto3)
	{
		std::cout << "Invalid proto version, you can set it as 2 or 3." << std::endl;
	}

	static ProtoParse protoParse;
	for (size_t i = 0; i < protoFileName.size(); i++)
	{
		protoParse.ParseFile(protoFileName[i].c_str());
	}

	if (cppPath.length() > 0)
	{
		ParseProtoToCpp(cppPath.c_str(), protoParse);
	}
	if (csharpPath.length() > 0)
	{
		ParseProtoToCs(csharpPath.c_str(), protoParse);
	}
	if (javaPath.length() > 0)
	{
		ParseProtoToJava(javaPath.c_str(), protoParse);
	}

	system("pause");
}

