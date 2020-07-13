#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEThrowWeaponBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEThrowWeaponBtnHUD"));
	}

	template <typename T = int32_t> T& SelectedIndex() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ThrowWeaponTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ExpandBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& UnExpandBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ExpandPanel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& WeaponGrid() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_CacheRelodadTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<int32_t>*> T& grenadeList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMoveUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMoveDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadUnexpand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadExpand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeAutoRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeResetRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponAndUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExpandClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnExpandClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreateThrowWeaponItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateThrowWeaponItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeAutoReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeResetReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCBCE8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCBF0C))(this);
	}
	template <typename T = void> T MoveWeapon(int32_t delta) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, int32_t))(Il2CppBase() + 0x2DCC0E4))(this, delta);
	}
	template <typename T = bool> T GamepadMoveUp() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCC2EC))(this);
	}
	template <typename T = bool> T GamepadMoveDown() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCC3A8))(this);
	}
	template <typename T = bool> T GamepadUnexpand() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCC46C))(this);
	}
	template <typename T = bool> T GamepadThrowWeapon() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCC734))(this);
	}
	template <typename T = bool> T GamepadExpand() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCCA04))(this);
	}
	template <typename T = void> T OnGrenadeAutoRecover(uintptr_t msg) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCCC20))(this, msg);
	}
	template <typename T = void> T OnGrenadeResetRecover(uintptr_t msg) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCCF80))(this, msg);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCD3CC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCD4EC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCD4F4))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCD504))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCD5A8))(this);
	}
	template <typename T = void> T SwitchWeaponAndUse(uintptr_t weapon) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCC570))(this, weapon);
	}
	template <typename T = void> T SetCurrentWeapon(uintptr_t weapon) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCD7A8))(this, weapon);
	}
	template <typename T = void> T HideCurrentWeapon() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCDA38))(this);
	}
	template <typename T = void> T OnWeaponUse(uintptr_t obj) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCC7E0))(this, obj);
	}
	template <typename T = void> T SelectThrowWeapon(int32_t weaponId) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, int32_t))(Il2CppBase() + 0x2DCDB24))(this, weaponId);
	}
	template <typename T = void> T OnExpandClick(uintptr_t obj) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCE0BC))(this, obj);
	}
	template <typename T = void> T OnUnExpandClick(uintptr_t obj) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, uintptr_t))(Il2CppBase() + 0x2DCC62C))(this, obj);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCE1EC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, float))(Il2CppBase() + 0x2DCE1F4))(this, dt);
	}
	template <typename T = void> T CheckCreateThrowWeaponItem(Il2CppList<int32_t>* weaponIds) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, Il2CppList<int32_t>*))(Il2CppBase() + 0x2DCE610))(this, weaponIds);
	}
	template <typename T = uintptr_t> T CreateThrowWeaponItem(int32_t weaponId) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, int32_t))(Il2CppBase() + 0x2DCEDA8))(this, weaponId);
	}
	template <typename T = void> T OnSwitchGrenade(int32_t weaponId) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, int32_t))(Il2CppBase() + 0x2DCDBD4))(this, weaponId);
	}
	template <typename T = void> T SetGrenadeAutoReload(float reloadTime, int32_t itemId) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, float, int32_t))(Il2CppBase() + 0x2DCCD58))(this, reloadTime, itemId);
	}
	template <typename T = void> T SetGrenadeResetReload(int32_t itemId, float restTime, float reloadTime) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, int32_t, float, float))(Il2CppBase() + 0x2DCD154))(this, itemId, restTime, reloadTime);
	}
	template <typename T = void> T CacheTime(float reloadTime, int32_t itemId, float restTime) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, float, int32_t, float))(Il2CppBase() + 0x2DCF2C4))(this, reloadTime, itemId, restTime);
	}
	template <typename T = void> T OnWeaponUsem__0() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF620))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF628))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PVEThrowWeaponBtnHUD*))(Il2CppBase() + 0x2DCF638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEThrowWeaponBtnHUD*, float))(Il2CppBase() + 0x2DCF640))(this, P0);
	}

};

}
