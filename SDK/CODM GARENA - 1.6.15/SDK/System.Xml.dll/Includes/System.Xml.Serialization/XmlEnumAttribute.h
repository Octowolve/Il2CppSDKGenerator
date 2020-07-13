#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlEnumAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlEnumAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
