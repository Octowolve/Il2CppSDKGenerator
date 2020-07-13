#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NsScope
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "NsScope"));
	}

	template <typename T = int32_t> T& DeclCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& DefaultNamespace() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
