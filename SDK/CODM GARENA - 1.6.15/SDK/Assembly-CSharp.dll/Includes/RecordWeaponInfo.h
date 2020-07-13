#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecordWeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecordWeaponInfo"));
	}

	template <typename T = int32_t> T& WeaponFireCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& WeaponDamageHPMax() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WeaponShotSpeedMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeaponAddAmmoCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& WeaponInitAmmoCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& WeaponFinalAmmoCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& WeaponWithoutCostAmmoCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& WeaponDamageRadiusMax() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
