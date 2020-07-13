#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConfigWeaponAnimatorcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConfigWeaponAnimator>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetConfigWeaponAnimatorcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x28ECD6C))(this, it);
	}

};

}
