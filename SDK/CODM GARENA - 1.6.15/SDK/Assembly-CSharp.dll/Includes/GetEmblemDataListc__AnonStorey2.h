#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEmblemDataListcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetEmblemDataList>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetEmblemDataListcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4A081E0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetEmblemDataListcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4A08214))(this, it);
	}

};

}
