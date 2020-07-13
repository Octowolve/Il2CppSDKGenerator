#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CalcWeaponFirecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CalcWeaponFire>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& impactInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CalcWeaponFirecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2EC78AC))(this, x);
	}

};

}
