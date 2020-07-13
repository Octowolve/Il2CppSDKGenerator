#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ReAmmoBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ReAmmoBtnView"));
	}

	template <typename T = uintptr_t> T& ReAmmoBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CacheSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& IconA() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& IconB() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_ReAmmoBeginTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_ReAmmoDuration() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsDuringReAmmo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector2> T& m_ViewPos() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_Size() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Container2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0xC4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOccluded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReAmmoPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrAndNoWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReAmmoProgressMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideReAmmoProgressMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReAmmoUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReAmmoProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDEDBC))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDEEC8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDEF6C))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF02C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF038))(this);
	}
	template <typename T = void> T UpdateGeometry() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF0E8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF324))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF604))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF738))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF860))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDF908))(this);
	}
	template <typename T = bool> T IsOccluded(Il2CppVector2 pos, float radius) {
		return ((T (*)(ReAmmoBtnView*, Il2CppVector2, float))(Il2CppBase() + 0x2DDF9DC))(this, pos, radius);
	}
	template <typename T = void> T OnReAmmoPress(uintptr_t obj, bool state) {
		return ((T (*)(ReAmmoBtnView*, uintptr_t, bool))(Il2CppBase() + 0x2DDFAE8))(this, obj, state);
	}
	template <typename T = void> T OnDoReAmmo() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDE5F4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDFC98))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ReAmmoBtnView*, float))(Il2CppBase() + 0x2DDFCA0))(this, dt);
	}
	template <typename T = bool> T IsBrAndNoWeapon() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0188))(this);
	}
	template <typename T = void> T ShowReAmmoProgressMask(float duration) {
		return ((T (*)(ReAmmoBtnView*, float))(Il2CppBase() + 0x2DDDED0))(this, duration);
	}
	template <typename T = void> T HideReAmmoProgressMask() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDE228))(this);
	}
	template <typename T = void> T SetReAmmoUI(bool flag) {
		return ((T (*)(ReAmmoBtnView*, bool))(Il2CppBase() + 0x2DDF470))(this, flag);
	}
	template <typename T = void> T UpdateReAmmoProgress() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDFF74))(this);
	}
	template <typename T = void> T T_OnClick() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DDFBB8))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(ReAmmoBtnView*, uintptr_t))(Il2CppBase() + 0x2DE05D0))(this, clickHandler);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0680))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0690))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE0698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE06A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(ReAmmoBtnView*))(Il2CppBase() + 0x2DE06A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ReAmmoBtnView*, float))(Il2CppBase() + 0x2DE06B0))(this, P0);
	}

};

}
