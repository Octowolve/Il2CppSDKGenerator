#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetModeCareerDatacAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetModeCareerData>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetModeCareerDatacAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4A08DEC))(this, it);
	}

};

}
