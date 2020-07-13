#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLockTargetcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLockTarget>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t s) {
		return ((T (*)(OnLockTargetcAnonStorey0*, uint32_t))(Il2CppBase() + 0x1BFACC0))(this, s);
	}

};

}
