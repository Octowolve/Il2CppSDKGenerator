#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FlattenHierarchycAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FlattenHierarchy>c__AnonStorey1"));
	}

	template <typename T = void*> T& IgnoreFlattenFilter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& dirty() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t child) {
		return ((T (*)(FlattenHierarchycAnonStorey1*, uintptr_t))(Il2CppBase() + 0x422B48C))(this, child);
	}

};

}
