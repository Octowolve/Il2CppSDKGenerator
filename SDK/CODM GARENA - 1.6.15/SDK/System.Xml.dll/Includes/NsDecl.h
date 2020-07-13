#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NsDecl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "NsDecl"));
	}

	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Uri() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
