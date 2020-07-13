#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAttributeAdditionManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAttributeAdditionManager"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AdditionList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseCarriedAmmoFromGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseCurrentAmmoFromGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponPartAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdditionByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T GetBaseCarriedAmmoFromGame(uintptr_t weapon, uintptr_t carriedAmmoCount) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EB3490))(this, weapon, carriedAmmoCount);
	}
	template <typename T = void> T GetBaseCurrentAmmoFromGame(uintptr_t weapon, uintptr_t carriedAmmoCount) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EB36D0))(this, weapon, carriedAmmoCount);
	}
	template <typename T = void> T InitWeaponPartAddition(uintptr_t weapon) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t))(Il2CppBase() + 0x2EB38FC))(this, weapon);
	}
	template <typename T = void> T InitWeaponAddition(uintptr_t weapon) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t))(Il2CppBase() + 0x2EB3B18))(this, weapon);
	}
	template <typename T = void> T AddAddition(uintptr_t attribute, uintptr_t valueType, float value) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x2EB4044))(this, attribute, valueType, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponAttributeAdditionManager*))(Il2CppBase() + 0x2EB420C))(this);
	}
	template <typename T = float> T GetAdditionByBase(uintptr_t attribute, float baseValue) {
		return ((T (*)(WeaponAttributeAdditionManager*, uintptr_t, float))(Il2CppBase() + 0x2EB432C))(this, attribute, baseValue);
	}

};

}
