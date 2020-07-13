#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayoutCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "LayoutCache"));
	}

	template <typename T = uintptr_t> T& topLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& layoutGroups() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& windows() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
