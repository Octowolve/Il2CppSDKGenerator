#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetRankInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetRankInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetRankInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3D730D0))(this, s);
	}

};

}
