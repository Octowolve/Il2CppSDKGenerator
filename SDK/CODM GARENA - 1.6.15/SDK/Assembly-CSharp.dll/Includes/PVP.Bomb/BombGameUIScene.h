#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_FunctionBtns() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceShutDownTicking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfUsingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfUsingItemInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoySticksMovementController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBombDefuserNumChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343CB40))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343CF98))(this, roundResult);
	}
	template <typename T = void> T OnForceShutDownTicking(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343D038))(this, msg);
	}
	template <typename T = void> T OnRoundCountChange(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343D1E8))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343D398))(this, msg);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(BombGameUIScene*, uint32_t))(Il2CppBase() + 0x343DAE4))(this, playerID);
	}
	template <typename T = void> T OnSelfUsingItem(uintptr_t Msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343DC04))(this, Msg);
	}
	template <typename T = void> T OnSelfUsingItemInterrupt(uintptr_t Msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343E14C))(this, Msg);
	}
	template <typename T = void> T CreateJoySticksMovementController(uintptr_t Msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343E474))(this, Msg);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343E678))(this, msg);
	}
	template <typename T = void> T OnDeadReplayBegin(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343E7B4))(this, msg);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343E914))(this, msg);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343EA74))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343EB30))(this);
	}
	template <typename T = void> T OnGameHUDLayoutChanged(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343ED7C))(this, msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343EE4C))(this, Msg);
	}
	template <typename T = void> T OnBombDefuserNumChanged(uintptr_t msg) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343EF9C))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BombGameUIScene*, float))(Il2CppBase() + 0x343F6F8))(this, deltaTime);
	}
	template <typename T = bool> T get_IsShowFirstChangeAutoFireTips() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343F828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343F830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F838))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F840))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltSkillHud(uint32_t P0) {
		return ((T (*)(BombGameUIScene*, uint32_t))(Il2CppBase() + 0x343F848))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F850))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayBegin(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F858))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F860))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(BombGameUIScene*))(Il2CppBase() + 0x343F868))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDLayoutChanged(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F870))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(BombGameUIScene*, uintptr_t))(Il2CppBase() + 0x343F878))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BombGameUIScene*, float))(Il2CppBase() + 0x343F880))(this, P0);
	}

};

}
