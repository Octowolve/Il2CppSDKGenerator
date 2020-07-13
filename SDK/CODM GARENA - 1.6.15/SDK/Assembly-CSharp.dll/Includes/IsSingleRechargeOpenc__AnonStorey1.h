#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsSingleRechargeOpencAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsSingleRechargeOpen>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsSingleRechargeOpencAnonStorey1*, uintptr_t))(Il2CppBase() + 0x19AA39C))(this, x);
	}

};

}
