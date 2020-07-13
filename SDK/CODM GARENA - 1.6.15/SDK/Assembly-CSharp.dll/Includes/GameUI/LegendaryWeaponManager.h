#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LegendaryWeaponManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LegendaryWeaponManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ShowWeaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ShowSpecialWeapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Receive() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLegendaryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatineeAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpecialWeaponShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpecialWeaponGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsLegendaryWeapon(uint32_t ItemID) {
		return ((T (*)(LegendaryWeaponManager*, uint32_t))(Il2CppBase() + 0x2338450))(this, ItemID);
	}
	template <typename T = uint32_t> T GetMatineeAnimation(uint32_t WeaponID) {
		return ((T (*)(LegendaryWeaponManager*, uint32_t))(Il2CppBase() + 0x233858C))(this, WeaponID);
	}
	template <typename T = void> T SpecialWeaponShow() {
		return ((T (*)(LegendaryWeaponManager*))(Il2CppBase() + 0x23386D8))(this);
	}
	template <typename T = void> T SpecialWeaponGet() {
		return ((T (*)(LegendaryWeaponManager*))(Il2CppBase() + 0x2338A00))(this);
	}

};

}
