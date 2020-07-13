#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlNodeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "XmlNodeInfo"));
	}

	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LocalName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& NS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& HasSimple() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasElements() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& XmlLang() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& XmlSpace() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
