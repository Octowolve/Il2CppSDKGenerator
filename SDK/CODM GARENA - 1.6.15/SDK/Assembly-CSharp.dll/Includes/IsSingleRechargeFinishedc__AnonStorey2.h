#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsSingleRechargeFinishedcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsSingleRechargeFinished>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsSingleRechargeFinishedcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x19AA358))(this, x);
	}

};

}
