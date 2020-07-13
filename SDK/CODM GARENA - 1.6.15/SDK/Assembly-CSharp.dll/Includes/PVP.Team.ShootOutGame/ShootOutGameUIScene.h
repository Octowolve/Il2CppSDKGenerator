#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_shootOutMessageHUD() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_buffTimeHUD() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_goliathBuffTimeHUD() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& m_shootoutCampHUD() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = bool> T& m_countDownOver() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = bool> T& m_firstTimeGolithSpawn() {
		return *(T*)((uintptr_t)this + 0x291);
	}
	template <typename T = bool> T& m_replayShowTeamCampExchange() {
		return *(T*)((uintptr_t)this + 0x292);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltUsingStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltEnergyConsumeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltSkillEnergyUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePowerupTipsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBuffTimeHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathBuffTimeHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateShootOutCampHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampNameAndTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerChangeCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffModify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShootOutNotifyMessageBoxRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShootOutNotifyMessageGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefeshTeamatesName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareCountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowCampHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCampShowHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PowerUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpGameSomethingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadoutPvpGameToShowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = bool> T get_CountDownOver() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C37A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C37A8))(this);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C41FC))(this);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t message) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C42B8))(this, message);
	}
	template <typename T = void> T OnNotifyUltUsingStateChange(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C4358))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltEnergyConsumeAdd(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C43F8))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltSkillEnergyUpdate(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C4498))(this, Msg);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(ShootOutGameUIScene*, uint32_t))(Il2CppBase() + 0x34C4538))(this, playerID);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C45D8))(this);
	}
	template <typename T = void> T CreatePowerupTipsHud() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C3AFC))(this);
	}
	template <typename T = void> T CreateBuffTimeHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C3CBC))(this);
	}
	template <typename T = void> T CreateGoliathBuffTimeHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C3E7C))(this);
	}
	template <typename T = void> T CreateShootOutCampHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C403C))(this);
	}
	template <typename T = void> T ShowCampNameAndTarget() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C4740))(this);
	}
	template <typename T = void> T ShowCampExchange() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C4B68))(this);
	}
	template <typename T = void> T OnShowGoliath(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C4EAC))(this, msg);
	}
	template <typename T = void> T PlayerChangeCamp(uintptr_t eventMsg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C5054))(this, eventMsg);
	}
	template <typename T = void> T OnNotifyBuffAdd(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C5250))(this, Msg);
	}
	template <typename T = void> T OnNotifyBuffDelete(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C5824))(this, Msg);
	}
	template <typename T = void> T OnNotifyBuffModify(uintptr_t Msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C5CE8))(this, Msg);
	}
	template <typename T = void> T ShootOutNotifyMessageBoxRefresh(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C61AC))(this, msg);
	}
	template <typename T = void> T ShootOutNotifyMessageGoliath(Il2CppString* playerName, bool isLocal) {
		return ((T (*)(ShootOutGameUIScene*, Il2CppString*, bool))(Il2CppBase() + 0x34C1AD0))(this, playerName, isLocal);
	}
	template <typename T = void> T RefeshTeamatesName(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C64B0))(this, msg);
	}
	template <typename T = void> T PrepareCountDownOver(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C65CC))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerRestart(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C68D4))(this, msg);
	}
	template <typename T = void> T DoShowCampHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C6A78))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C6B20))(this);
	}
	template <typename T = void> T CreateCampShowHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C6BB8))(this);
	}
	template <typename T = void> T PowerUpEffect(uintptr_t pickupConf) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C6E84))(this, pickupConf);
	}
	template <typename T = void> T CreatePvpGameSomethingController() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C7164))(this);
	}
	template <typename T = void> T LoadoutPvpGameToShowTime(uintptr_t msg) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C7284))(this, msg);
	}
	template <typename T = void> T CreateLevelObjectInteractiveHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C7648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C7774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C777C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyUltUsingStateChange(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C7784))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyUltEnergyConsumeAdd(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C778C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyUltSkillEnergyUpdate(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C7794))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltSkillHud(uint32_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uint32_t))(Il2CppBase() + 0x34C779C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerRestart(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C77AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DoShowCampHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateCampShowHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PowerUpEffect(uintptr_t P0) {
		return ((T (*)(ShootOutGameUIScene*, uintptr_t))(Il2CppBase() + 0x34C77CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreatePvpGameSomethingController() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLevelObjectInteractiveHUD() {
		return ((T (*)(ShootOutGameUIScene*))(Il2CppBase() + 0x34C77DC))(this);
	}

};

}
