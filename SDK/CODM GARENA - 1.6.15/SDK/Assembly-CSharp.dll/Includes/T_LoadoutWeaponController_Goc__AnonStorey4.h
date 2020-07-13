#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLoadoutWeaponControllerGocAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_LoadoutWeaponController_Go>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLoadoutWeaponControllerGocAnonStorey4*))(Il2CppBase() + 0x1F68D88))(this);
	}
	template <typename T = void> T m__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(TLoadoutWeaponControllerGocAnonStorey4*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F68F3C))(this, tutorialType, info);
	}

};

}
