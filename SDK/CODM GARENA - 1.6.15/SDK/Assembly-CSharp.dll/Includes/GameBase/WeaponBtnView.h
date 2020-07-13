#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponBtnView"));
	}

	template <typename T = uintptr_t> T& CurrentWeaponContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CurWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CurWeaponAmmo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& m_CurWeaponAmmoCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& m_CurWeaponCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CurWeaponHolder() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& AmmoRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_AmmoFreeLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_FirstWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NormalFiredColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_LowAmmoColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_NoAmmoColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_LastCarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& m_LastAmmoCount() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& infiniteAmmo() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& infiniteCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0xF9);
	}
	template <typename T = bool> T& mCleared() {
		return *(T*)((uintptr_t)this + 0xFA);
	}
	template <typename T = bool> T& m_ShowULTSkillWeapon() {
		return *(T*)((uintptr_t)this + 0xFB);
	}
	template <typename T = bool> T& IsForceUpdate() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& infiniteEnd() {
		return *(T*)((uintptr_t)this + 0xFD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInGamepad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInfiniteAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainWeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGunGameSwitchGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAmmoLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C59EDC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C59EE4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C59EF8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C59FB4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5A810))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5A8CC))(this);
	}
	template <typename T = bool> T IsCanTick() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5A8D4))(this);
	}
	template <typename T = void> T UpdateShowObject() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5AC88))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(WeaponBtnView*, float))(Il2CppBase() + 0x1C5AD20))(this, dt);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5B414))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C59690))(this);
	}
	template <typename T = bool> T NeedHideInGamepad() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5B4AC))(this);
	}
	template <typename T = void> T CheckInfiniteAmmo() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5AEC8))(this);
	}
	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5B550))(this);
	}
	template <typename T = void> T SetMainWeaponUI() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5B064))(this);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5B908))(this);
	}
	template <typename T = bool> T HasWeapon(int32_t weaponID) {
		return ((T (*)(WeaponBtnView*, int32_t))(Il2CppBase() + 0x1C5BBCC))(this, weaponID);
	}
	template <typename T = void> T UpdateCurWeaponBarView() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5887C))(this);
	}
	template <typename T = void> T SetCurrentWeaponIconColor(uintptr_t color) {
		return ((T (*)(WeaponBtnView*, uintptr_t))(Il2CppBase() + 0x1C5A484))(this, color);
	}
	template <typename T = void> T SetSwitchButtonEnabled(bool inEnabled) {
		return ((T (*)(WeaponBtnView*, bool))(Il2CppBase() + 0x1C5BD4C))(this, inEnabled);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(WeaponBtnView*, bool))(Il2CppBase() + 0x1C5BE64))(this, infinite);
	}
	template <typename T = void> T UpdateCurWeaponHolderData() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5C070))(this);
	}
	template <typename T = void> T OnGunGameSwitchGun(uintptr_t Msg) {
		return ((T (*)(WeaponBtnView*, uintptr_t))(Il2CppBase() + 0x1C5C2F4))(this, Msg);
	}
	template <typename T = void> T SetAmmoLabel(uintptr_t ammoLabel, Il2CppString* ammoCount, Il2CppString* carriedAmmo) {
		return ((T (*)(WeaponBtnView*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C5A620))(this, ammoLabel, ammoCount, carriedAmmo);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5C394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5C39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponBtnView*, float))(Il2CppBase() + 0x1C5C3A4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInGamepad() {
		return ((T (*)(WeaponBtnView*))(Il2CppBase() + 0x1C5C3AC))(this);
	}

};

}
