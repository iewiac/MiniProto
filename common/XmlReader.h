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

			//����xml�ļ�
			bool LoadFile(const std::string& pathName);

			//��ȡ���ڵ�
			const boost::property_tree::ptree& GetRoot();

			//��ȡ�ӽڵ��б�
			bool GetNodes(const boost::property_tree::ptree& tag, std::vector<const boost::property_tree::ptree*>& nodes);
			bool GetNodes(const boost::property_tree::ptree& tag, const std::string& childName, std::vector<const boost::property_tree::ptree*>& nodes);
			
			//��ȡ�ڵ������б�
			bool GetAttrs(const boost::property_tree::ptree& tag, std::vector<const boost::property_tree::ptree*>& attrs);

			//��ȡĳ������µ�һֵ <theme>value</theme>
			bool GetValue(const boost::property_tree::ptree& tag, std::string& value, const std::string& default = "");
			bool GetValue(const boost::property_tree::ptree& tag, float& value, const float& default = 0.0f);
			bool GetValue(const boost::property_tree::ptree& tag, int& value, const int& default = 0);
			bool GetValue(const boost::property_tree::ptree& tag, unsigned int& value, const unsigned int& default = 0);

			//��ȡ�ڵ��ĳ������ֵ <theme attr="value"/>
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