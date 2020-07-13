#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContextItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "ContextItem"));
	}

	template <typename T = Il2CppString*> T& BaseURI() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& XmlLang() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& XmlSpace() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
