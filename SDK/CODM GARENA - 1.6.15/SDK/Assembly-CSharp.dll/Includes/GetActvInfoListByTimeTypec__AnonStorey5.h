#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetActvInfoListByTimeTypecAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActvInfoListByTimeType>c__AnonStorey5"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetActvInfoListByTimeTypecAnonStorey5*, uintptr_t))(Il2CppBase() + 0x434444C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetActvInfoListByTimeTypecAnonStorey5*, uintptr_t))(Il2CppBase() + 0x4344484))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetActvInfoListByTimeTypecAnonStorey5*, uintptr_t))(Il2CppBase() + 0x43444BC))(this, it);
	}

};

}
