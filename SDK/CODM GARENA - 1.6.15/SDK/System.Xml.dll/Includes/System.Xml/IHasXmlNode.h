#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class IHasXmlNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "IHasXmlNode"));
	}


	template <typename T = uintptr_t> T GetNode() {
		return ((T (*)(IHasXmlNode*))(Il2CppBase() + 0x0))(this);
	}

};

}
