#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsAccumulateRechargeOpencAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsAccumulateRechargeOpen>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsAccumulateRechargeOpencAnonStorey0*, uintptr_t))(Il2CppBase() + 0x19AA2B4))(this, x);
	}

};

}
