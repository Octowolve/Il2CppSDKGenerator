#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathItem"));
	}


	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XPathItem*))(Il2CppBase() + 0x0))(this);
	}

};

}
