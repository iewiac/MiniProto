#ifndef __XmlReader_h__
#define __XmlReader_h__

#include <string> 
#include <vector> 
#include <boost/property_tree/ptree.hpp> 

namespace common {
	namespace tool {

		class XmlReader
		{
		public:
			XmlReader();
			~XmlReader();

			//加载xml文件
			bool LoadFile(const std::string& pathName);

			//获取根节点
			const boost::property_tree::ptree& GetRoot();

			//获取子节点列表
			bool GetNodes(const boost::property_tree::ptree& tag, std::vector<const boost::property_tree::ptree*>& nodes);
			bool GetNodes(const boost::property_tree::ptree& tag, const std::string& childName, std::vector<const boost::property_tree::ptree*>& nodes);
			
			//获取节点属性列表
			bool GetAttrs(const boost::property_tree::ptree& tag, std::vector<const boost::property_tree::ptree*>& attrs);

			//获取某个结点下单一值 <theme>value</theme>
			bool GetValue(const boost::property_tree::ptree& tag, std::string& value, const std::string& default = "");
			bool GetValue(const boost::property_tree::ptree& tag, float& value, const float& default = 0.0f);
			bool GetValue(const boost::property_tree::ptree& tag, int& value, const int& default = 0);
			bool GetValue(const boost::property_tree::ptree& tag, unsigned int& value, const unsigned int& default = 0);

			//获取节点的某个属性值 <theme attr="value"/>
			bool GetAttr(const boost::property_tree::ptree& tag, const std::string& attrName, std::string& value, const std::string& default = "");
			bool GetAttr(const boost::property_tree::ptree& tag, const std::string& attrName, float& value, const float& default = 0.0f);
			bool GetAttr(const boost::property_tree::ptree& tag, const std::string& attrName, int& value, const int& default = 0);
			bool GetAttr(const boost::property_tree::ptree& tag, const std::string& attrName, unsigned int& value, const unsigned int& default = 0);

		private:
			boost::property_tree::ptree m_Pt;
		};
	}
}

#endif