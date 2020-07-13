#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShouldIgnoreWhenEquipcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShouldIgnoreWhenEquip>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& slot() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(ShouldIgnoreWhenEquipcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x16A179C))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(ShouldIgnoreWhenEquipcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x16A180C))(this, s);
	}

};

}
