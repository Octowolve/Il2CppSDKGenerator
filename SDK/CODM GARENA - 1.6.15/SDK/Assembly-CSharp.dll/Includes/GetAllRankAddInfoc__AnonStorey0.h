#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllRankAddInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllRankAddInfo>c__AnonStorey0"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetAllRankAddInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x43444F4))(this, it);
	}

};

}
