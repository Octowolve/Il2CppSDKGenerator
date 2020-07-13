#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class IXmlLineInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "IXmlLineInfo"));
	}


	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(IXmlLineInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(IXmlLineInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(IXmlLineInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
