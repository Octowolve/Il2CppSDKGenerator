#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameUIScene"));
	}

	template <typename T = uintptr_t> T& mEndRoundView() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& mBloodScoreHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& mGameLoadoutHUD() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_CureTeammatesController() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = bool> T& mShowLoadoutView() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = bool> T& m_SettingC4() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = float> T& m_C4SettingDuration() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = float> T& m_C4SettingTotalTime() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSettingC4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSettingC4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTurnWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCureTeammatesHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCureTeammatesTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_SettingC4() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7D86C))(this);
	}
	template <typename T = float> T get_C4SettingPercent() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7D874))(this);
	}
	template <typename T = void> T StartSettingC4(float extendTime) {
		return ((T (*)(TacticalCombatGameUIScene*, float))(Il2CppBase() + 0x3D7D89C))(this, extendTime);
	}
	template <typename T = void> T StopSettingC4() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7D958))(this);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7DA0C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7DAC8))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7DEC4))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7E11C))(this, roundResult);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7E1BC))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7E414))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7E540))(this, msg);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7EC8C))(this, msg);
	}
	template <typename T = void> T ShowTurnWeapon(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7ED98))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(TacticalCombatGameUIScene*, float))(Il2CppBase() + 0x3D7F0D8))(this, deltaTime);
	}
	template <typename T = void> T ShowCureTeammatesHud(bool show, bool checkTutorial) {
		return ((T (*)(TacticalCombatGameUIScene*, bool, bool))(Il2CppBase() + 0x3D7DCF4))(this, show, checkTutorial);
	}
	template <typename T = void> T OnCureTeammatesTrigger(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F1CC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7F334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(TacticalCombatGameUIScene*))(Il2CppBase() + 0x3D7F33C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F344))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F34C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F354))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F35C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncInventoryBag(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D7F364))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalCombatGameUIScene*, float))(Il2CppBase() + 0x3D7F36C))(this, P0);
	}

};

}
