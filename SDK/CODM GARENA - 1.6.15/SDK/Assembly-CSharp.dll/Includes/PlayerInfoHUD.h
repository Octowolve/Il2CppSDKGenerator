#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInfoHUD"));
	}

	template <typename T = uintptr_t> T& m_GodProgressBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Tips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TipsHideTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_NetworkTips() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_WeaponTips() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_ShowFPSLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_PreMatchLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_ScreenHitEffectController() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_PvpRoundStart() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_FireBlockIcon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> static T& NETWORK_TIPS_TIME_OUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_DisableBloodEffect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& NoAmmoColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LowAmmoColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& ReloadingColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& m_WeaponTip() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& LOW_AMMO_RATE() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_LastFPS() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& m_LastPawnDebugString() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_CurCrossHairView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEventCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRoundStartTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundStartTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_m_GodProgressBar_EventCountdownCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLocalPlayerHurt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyKillStreakTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireBlockPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGameCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideGameCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F50BC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F50C4))(this);
	}
	template <typename T = bool> T get_disableBloodEffect() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F50D0))(this);
	}
	template <typename T = void> T set_disableBloodEffect(bool value) {
		return ((T (*)(PlayerInfoHUD*, bool))(Il2CppBase() + 0x47F50D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F50E0))(this);
	}
	template <typename T = void> T OnEventCallBack(uintptr_t Msg) {
		return ((T (*)(PlayerInfoHUD*, uintptr_t))(Il2CppBase() + 0x47F52BC))(this, Msg);
	}
	template <typename T = void> T HideRoundStartTips() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F5BD4))(this);
	}
	template <typename T = void> T ShowRoundStartTips() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F5D34))(this);
	}
	template <typename T = void> T ShowWeaponTips(bool show) {
		return ((T (*)(PlayerInfoHUD*, bool))(Il2CppBase() + 0x47F5E94))(this, show);
	}
	template <typename T = void> T UpdateWeaponTips(uintptr_t pawn) {
		return ((T (*)(PlayerInfoHUD*, uintptr_t))(Il2CppBase() + 0x47F6208))(this, pawn);
	}
	template <typename T = void> T m_GodProgressBar_EventCountdownCompleted() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F6438))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F65A0))(this);
	}
	template <typename T = void> T OnTimer() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F6854))(this);
	}
	template <typename T = void> T NotifyLocalPlayerHurt(uintptr_t info) {
		return ((T (*)(PlayerInfoHUD*, uintptr_t))(Il2CppBase() + 0x47F6994))(this, info);
	}
	template <typename T = void> T NotifyKillStreakTweenFinished(bool show) {
		return ((T (*)(PlayerInfoHUD*, bool))(Il2CppBase() + 0x47F6C18))(this, show);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F6DE8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PlayerInfoHUD*, float))(Il2CppBase() + 0x47F6DF0))(this, dt);
	}
	template <typename T = void> T UpdateFireBlockPos() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F7320))(this);
	}
	template <typename T = void> T ShowGameCommonTips(int32_t tipIdx, Il2CppString* tips, float duration) {
		return ((T (*)(PlayerInfoHUD*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x47F58E0))(this, tipIdx, tips, duration);
	}
	template <typename T = void> T HideGameCommonTips(int32_t tipIdx) {
		return ((T (*)(PlayerInfoHUD*, int32_t))(Il2CppBase() + 0x47F5AB0))(this, tipIdx);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F7BA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PlayerInfoHUD*))(Il2CppBase() + 0x47F7BB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PlayerInfoHUD*, float))(Il2CppBase() + 0x47F7BB8))(this, P0);
	}

};

}
