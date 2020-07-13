#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsValidcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsValid>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& ladderRank() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsValidcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x376E010))(this, it);
	}

};

}
