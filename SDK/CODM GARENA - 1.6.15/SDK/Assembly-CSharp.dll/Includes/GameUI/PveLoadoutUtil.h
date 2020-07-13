#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PveLoadoutUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PveLoadoutUtil"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffWallWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PveWeaponSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponInConfigSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveMeleeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PveMeleeSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPvePistolList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveUltList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetOffWallWeaponList() {
		return ((T (*)(PveLoadoutUtil*))(Il2CppBase() + 0x3AA2558))(this);
	}
	template <typename T = int32_t> T PveWeaponSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AA27DC))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponList(uintptr_t weaponConf) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t))(Il2CppBase() + 0x3AA2904))(this, weaponConf);
	}
	template <typename T = int32_t> T WeaponSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AA2DE8))(this, a, b);
	}
	template <typename T = int32_t> T WeaponInConfigSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AA2F90))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPveMeleeList(uintptr_t curEquipedItem) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t))(Il2CppBase() + 0x3AA3100))(this, curEquipedItem);
	}
	template <typename T = int32_t> T PveMeleeSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AA34A8))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPvePistolList(uintptr_t curEquipedItem) {
		return ((T (*)(PveLoadoutUtil*, uintptr_t))(Il2CppBase() + 0x3AA3624))(this, curEquipedItem);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetPveUltList() {
		return ((T (*)(PveLoadoutUtil*))(Il2CppBase() + 0x3AA3A0C))(this);
	}

};

}
