#include "XmlReader.h"

#include <string> 
#include <vector> 
#include <fstream>

#include <boost/property_tree/ptree.hpp> 
#include <boost/property_tree/xml_parser.hpp> 

using namespace common::tool;

using namespace std;

using namespace boost::property_tree;

XmlReader::XmlReader()
{

}
XmlReader::~XmlReader()
{

}

bool XmlReader::LoadFile(const string& pathName)
{
	ifstream file(pathName.c_str());
	if (file)
	{
		xml_parser::read_xml(file, m_Pt);
		return true;
	}
	else
	{
		return false;
	}
}

const ptree& XmlReader::GetRoot()
{
	return m_Pt;
}

bool XmlReader::GetAttrs(const ptree& tag, vector<const ptree*>& attrs)
{
	for (auto& itNode : tag)
	{
		if (itNode.first == "<xmlattr>")
		{
			attrs.push_back(&(itNode.second));
		}
		else if (itNode.first == "<xmlcomment>")
		{

		}
		else
		{

		}
	}
	return true;
}

bool XmlReader::GetNodes(const ptree& tag, vector<const ptree*>& nodes)
{
	for (auto& itNode : tag)
	{
		if (itNode.first == "<xmlattr>")
		{

		}
		else if (itNode.first == "<xmlcomment>")
		{

		}
		else
		{
			nodes.push_back(&(itNode.second));
		}
	}
	return true;
}

bool XmlReader::GetNodes(const ptree& tag, const string& childName, vector<const ptree*>& nodes)
{
	for (auto& itNode : tag)
	{
		if (itNode.first == "<xmlattr>")
		{

		}
		else if (itNode.first == "<xmlcomment>")
		{

		}
		else
		{
			if (itNode.first == childName)
			{
				nodes.push_back(&(itNode.second));
			}
		}
	}
	return true;
}

bool XmlReader::GetValue(const ptree& tag, string& value, const string& default)
{
	value = tag.get<string>("", default);
	return true;
}
bool XmlReader::GetValue(const ptree& tag, float& value, const float& default)
{
	value = tag.get<float>("", default);
	return true;
}
bool XmlReader::GetValue(const ptree& tag, int& value, const int& default)
{
	value = tag.get<int>("", default);
	return true;
}
bool XmlReader::GetValue(const ptree& tag, unsigned int& value, const unsigned int& default)
{
	value = tag.get<unsigned int>("", default);
	return true;
}

bool XmlReader::GetAttr(const ptree& tag, const string& attrName, string& value, const string& default)
{
	value = tag.get<string>("<xmlattr>." + attrName, default);
	return true;
}
bool XmlReader::GetAttr(const ptree& tag, const string& attrName, float& value, const float& default)
{
	value = tag.get<float>("<xmlattr>." + attrName, default);
	return true;
}
bool XmlReader::GetAttr(const ptree& tag, const string& attrName, int& value, const int& default)
{
	value = tag.get<int>("<xmlattr>." + attrName, default);
	return true;
}
bool XmlReader::GetAttr(const ptree& tag, const string& attrName, unsigned int& value, const unsigned int& default)
{
	value = tag.get<unsigned int>("<xmlattr>." + attrName, default);
	return true;
}