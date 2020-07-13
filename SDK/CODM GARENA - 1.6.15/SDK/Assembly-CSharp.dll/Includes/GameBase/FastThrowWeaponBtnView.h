#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FastThrowWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FastThrowWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& ThrowBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WidgetDestructive() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& WidgetTactical() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelDestructiveCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelTacticalCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& destructiveReloadBar() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& tacticalReloadBar() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& expandAnchor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& topUI() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& expandSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& collapseSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ChangeUI() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ExpandUI() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& secondaryBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& autoCollapseDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ForbiddenTimeLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_ShowTactical() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_DestructiveCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& m_TaticalCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& mPawnSpawnTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& destructiveReloadStartTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& destructiveReloadDuration() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& tacticalReloadStartTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& tacticalReloadDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CombatEffectGo() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& expandMode() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& expandSecondary() {
		return *(T*)((uintptr_t)this + 0xF9);
	}
	template <typename T = bool> T& currentBtnTactical() {
		return *(T*)((uintptr_t)this + 0xFA);
	}
	template <typename T = bool> T& m_ForbiddenThrowWeapon() {
		return *(T*)((uintptr_t)this + 0xFB);
	}
	template <typename T = float> T& m_ForbiddenThrowStartTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_ForbiddenThrowDuration() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& CombatEffectGoShowTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& IsShowCombatEffectGo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& CurButton() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_ShowTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTrophySystemPicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCombatAxe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrenadeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SettopUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPrepareLethal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPrepareTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadButtonBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadConfirmThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectSecondaryBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleExpand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Collapse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeModeThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderChangeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFastThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInRespawnSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInfectedPawnInRespawnSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToDestructive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeAutoReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForbiddenThrowWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4BAC))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4BB4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4BC0))(this);
	}
	template <typename T = bool> T get__CanGrenadeReload() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4BD4))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4CE8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4D8C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D5300))(this);
	}
	template <typename T = void> T OnTrophySystemPicked(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x31D402C))(this, msg);
	}
	template <typename T = void> T OnCombatAxe() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D4208))(this);
	}
	template <typename T = void> T UpdateGrenadeType(int32_t lethalCount, int32_t tacticalCount) {
		return ((T (*)(FastThrowWeaponBtnView*, int32_t, int32_t))(Il2CppBase() + 0x31D56C4))(this, lethalCount, tacticalCount);
	}
	template <typename T = void> T SettopUI(int32_t lethalCount, int32_t tacticalCount) {
		return ((T (*)(FastThrowWeaponBtnView*, int32_t, int32_t))(Il2CppBase() + 0x31D57B8))(this, lethalCount, tacticalCount);
	}
	template <typename T = void> T UpdateContent(bool force) {
		return ((T (*)(FastThrowWeaponBtnView*, bool))(Il2CppBase() + 0x31D5A48))(this, force);
	}
	template <typename T = bool> T ThrowGrenade(bool lethal, bool directly) {
		return ((T (*)(FastThrowWeaponBtnView*, bool, bool))(Il2CppBase() + 0x31D61C0))(this, lethal, directly);
	}
	template <typename T = bool> T OnGamepadPrepareLethal() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D64FC))(this);
	}
	template <typename T = bool> T OnGamepadPrepareTactical() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D65C0))(this);
	}
	template <typename T = bool> T OnGamepadButtonBegin() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D6688))(this);
	}
	template <typename T = bool> T OnGamepadConfirmThrow() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D67A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D6938))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D6CE0))(this);
	}
	template <typename T = void> T UpdateWeaponCount() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D7084))(this);
	}
	template <typename T = void> T OnSelectSecondaryBtn(uintptr_t _) {
		return ((T (*)(FastThrowWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x31D720C))(this, _);
	}
	template <typename T = void> T SelectThrowWeapon(bool tactical) {
		return ((T (*)(FastThrowWeaponBtnView*, bool))(Il2CppBase() + 0x31D6440))(this, tactical);
	}
	template <typename T = void> T ToggleExpand(bool expand) {
		return ((T (*)(FastThrowWeaponBtnView*, bool))(Il2CppBase() + 0x31D7930))(this, expand);
	}
	template <typename T = void> T Collapse() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D72FC))(this);
	}
	template <typename T = void> T ChangeModeThrow() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D5418))(this);
	}
	template <typename T = void> T OnSliderChangeClick(uintptr_t OBJ) {
		return ((T (*)(FastThrowWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x31D8238))(this, OBJ);
	}
	template <typename T = void> T ShowSwitchEffect() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D7EDC))(this);
	}
	template <typename T = void> T UpdateFastThrow() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D80AC))(this);
	}
	template <typename T = void> T TriggerThrow() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D765C))(this);
	}
	template <typename T = void> T OnPress(uintptr_t go, bool state) {
		return ((T (*)(FastThrowWeaponBtnView*, uintptr_t, bool))(Il2CppBase() + 0x31D845C))(this, go, state);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D852C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(FastThrowWeaponBtnView*, float))(Il2CppBase() + 0x31D8534))(this, dt);
	}
	template <typename T = bool> T IsPawnInRespawnSeconds() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D8B7C))(this);
	}
	template <typename T = bool> T IsInfectedPawnInRespawnSeconds() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D8DCC))(this);
	}
	template <typename T = void> T OnSwitchToTactical() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D73F4))(this);
	}
	template <typename T = void> T OnSwitchToDestructive() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D7528))(this);
	}
	template <typename T = void> T SetGrenadeAutoReload(float reloadTime, uintptr_t grenadeType) {
		return ((T (*)(FastThrowWeaponBtnView*, float, uintptr_t))(Il2CppBase() + 0x31D8FA4))(this, reloadTime, grenadeType);
	}
	template <typename T = void> T OnThrowWeaponFireEnd(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x31D9144))(this, msg);
	}
	template <typename T = void> T OnForbiddenThrowWeaponFire(float t) {
		return ((T (*)(FastThrowWeaponBtnView*, float))(Il2CppBase() + 0x31D91E4))(this, t);
	}
	template <typename T = void> T OnEnablem__0() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9314))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FastThrowWeaponBtnView*))(Il2CppBase() + 0x31D9348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(FastThrowWeaponBtnView*, float))(Il2CppBase() + 0x31D9350))(this, P0);
	}

};

}
