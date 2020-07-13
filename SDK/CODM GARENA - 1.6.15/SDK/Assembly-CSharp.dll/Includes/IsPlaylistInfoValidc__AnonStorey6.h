#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsPlayListInfoValidcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsPlayListInfoValid>c__AnonStorey6"));
	}

	template <typename T = uint32_t> T& temp() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsPlayListInfoValidcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x4318B48))(this, it);
	}

};

}
