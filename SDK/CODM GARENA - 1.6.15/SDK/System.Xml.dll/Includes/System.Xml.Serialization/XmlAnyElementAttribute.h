#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlAnyElementAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlAnyElementAttribute"));
	}

	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
