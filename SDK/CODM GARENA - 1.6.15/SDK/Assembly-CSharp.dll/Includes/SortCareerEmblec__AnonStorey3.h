#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortCareerEmblecAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SortCareerEmble>c__AnonStorey3"));
	}

	template <typename T = bool> T& isUnlock() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SortCareerEmblecAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4A08420))(this, it);
	}

};

}
