#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLegalScorecAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLegalScore>c__AnonStorey11"));
	}

	template <typename T = int32_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLegalScorecAnonStorey11*, uintptr_t))(Il2CppBase() + 0x4318770))(this, it);
	}

};

}
