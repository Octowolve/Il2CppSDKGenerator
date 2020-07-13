#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayChipItemAnimcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayChipItemAnim>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& chip() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayChipItemAnimcAnonStorey1*))(Il2CppBase() + 0x3DBC02C))(this);
	}

};

}
