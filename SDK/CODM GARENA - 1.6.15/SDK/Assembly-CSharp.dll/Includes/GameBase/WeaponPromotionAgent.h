#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mWPDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mSIDataStore() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUpgradeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqInventoryWeaponUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResInventoryWeaponUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_WPDataStore() {
		return ((T (*)(WeaponPromotionAgent*))(Il2CppBase() + 0x3A6C05C))(this);
	}
	template <typename T = uintptr_t> T get_SIDataStore() {
		return ((T (*)(WeaponPromotionAgent*))(Il2CppBase() + 0x3A6C10C))(this);
	}
	template <typename T = bool> T OnWeaponUpgradeNtf(uintptr_t message) {
		return ((T (*)(WeaponPromotionAgent*, uintptr_t))(Il2CppBase() + 0x3A6C1BC))(this, message);
	}
	template <typename T = void> T ReqInventoryWeaponUpgrade(Il2CppList<uintptr_t>* cardList, uintptr_t weaponData) {
		return ((T (*)(WeaponPromotionAgent*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3A6C6C4))(this, cardList, weaponData);
	}
	template <typename T = bool> T ResInventoryWeaponUpgrade(uintptr_t message) {
		return ((T (*)(WeaponPromotionAgent*, uintptr_t))(Il2CppBase() + 0x3A6C954))(this, message);
	}
	template <typename T = void> static T ResInventoryWeaponUpgradem__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A6D3D8))(0);
	}

};

}
