#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentStreakMolotov
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_StreakMolotov"));
	}


	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponFireComponentStreakMolotov*))(Il2CppBase() + 0x23FDCBC))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentStreakMolotov*))(Il2CppBase() + 0x23FDEDC))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentStreakMolotov*))(Il2CppBase() + 0x23FDFA4))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammoCount) {
		return ((T (*)(WeaponFireComponentStreakMolotov*, int32_t))(Il2CppBase() + 0x23FE070))(this, ammoCount);
	}

};

}
