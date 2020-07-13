#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEThrowWeaponItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEThrowWeaponItem"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& ReloadStartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& ReloadDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFromItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeAutoReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReloadStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_WeaponId() {
		return ((T (*)(PVEThrowWeaponItem*))(Il2CppBase() + 0x2DCCC18))(this);
	}
	template <typename T = void> T set_WeaponId(int32_t value) {
		return ((T (*)(PVEThrowWeaponItem*, int32_t))(Il2CppBase() + 0x2DCF754))(this, value);
	}
	template <typename T = float> T get_ReloadStartTime() {
		return ((T (*)(PVEThrowWeaponItem*))(Il2CppBase() + 0x2DCF75C))(this);
	}
	template <typename T = void> T set_ReloadStartTime(float value) {
		return ((T (*)(PVEThrowWeaponItem*, float))(Il2CppBase() + 0x2DCF188))(this, value);
	}
	template <typename T = float> T get_ReloadDuration() {
		return ((T (*)(PVEThrowWeaponItem*))(Il2CppBase() + 0x2DCF764))(this);
	}
	template <typename T = void> T set_ReloadDuration(float value) {
		return ((T (*)(PVEThrowWeaponItem*, float))(Il2CppBase() + 0x2DCF180))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEThrowWeaponItem*))(Il2CppBase() + 0x2DCF76C))(this);
	}
	template <typename T = void> T UpdateContent(bool force) {
		return ((T (*)(PVEThrowWeaponItem*, bool))(Il2CppBase() + 0x2DCEA30))(this, force);
	}
	template <typename T = void> T SetWeaponItem(uintptr_t owner, int32_t weaponId) {
		return ((T (*)(PVEThrowWeaponItem*, uintptr_t, int32_t))(Il2CppBase() + 0x2DCECDC))(this, owner, weaponId);
	}
	template <typename T = void> T SetFromItem(uintptr_t item) {
		return ((T (*)(PVEThrowWeaponItem*, uintptr_t))(Il2CppBase() + 0x2DCD94C))(this, item);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(PVEThrowWeaponItem*))(Il2CppBase() + 0x2DCF874))(this);
	}
	template <typename T = void> T OnThrowWeaponClick(uintptr_t obj) {
		return ((T (*)(PVEThrowWeaponItem*, uintptr_t))(Il2CppBase() + 0x2DCF9D8))(this, obj);
	}
	template <typename T = void> T SetGrenadeAutoReload(float reloadTime) {
		return ((T (*)(PVEThrowWeaponItem*, float))(Il2CppBase() + 0x2DCF198))(this, reloadTime);
	}
	template <typename T = void> T SetReloadStartTime(float reloadTime, float reloadStartTime) {
		return ((T (*)(PVEThrowWeaponItem*, float, float))(Il2CppBase() + 0x2DCF4D4))(this, reloadTime, reloadStartTime);
	}

};

}
