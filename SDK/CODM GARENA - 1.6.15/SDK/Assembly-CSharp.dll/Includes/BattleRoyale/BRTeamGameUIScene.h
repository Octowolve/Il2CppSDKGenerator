#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameUIScene"));
	}

	template <typename T = float> T& m_WaitForRespawnTime() {
		return *(T*)((uintptr_t)this + 0x3F8);
	}
	template <typename T = uintptr_t> T& m_TeamGameScoreInfoController() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = uintptr_t> T& m_TeamGameScorePanelController() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = uintptr_t> T& m_TeamGameGuideNoviceController() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = uintptr_t> T& m_ScoreBroadcastTipsController() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = float> T& m_LastGameScoreInfoViewUpdateTick() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = float> static T& GAME_SCORE_INFO_VIEW_TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastBroadcastTipsViewTickTime() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = float> static T& GAME_BROADCAST_TIPS_VIEW_TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_GameScorePanelLastTickTime() {
		return *(T*)((uintptr_t)this + 0x414);
	}
	template <typename T = float> T& GAME_SCORE_PANEL_TICK_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x418);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRTeamRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRTeamScoreBroadcastTipsView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBroadcastScoreTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBroadcastScoreTipsLastMinutes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBroadcastScoreTipsWithoutAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBroadcastTipsLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitShowGuidePicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuideItemRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpGameSomethingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpCommonTipsHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampHUDWhenNoBagShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTipsCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRTeamScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRGameScoreInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBRTeamScoreInfoViewController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterLastArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTickGameScoreViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTickScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNormalWaitSpectatorHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRLocalPlayerDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init_BRNearbyModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncRespawnWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRespawnTipsAndSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlackScreenOnLocalPlayerDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBagViewPickupDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameCommunicationLineMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayShowSelectChipHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262D15C))(this);
	}
	template <typename T = void> T OnBRTeamRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262D780))(this, msg);
	}
	template <typename T = void> T CreateBRTeamScoreBroadcastTipsView() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262D64C))(this);
	}
	template <typename T = void> T OnBroadcastScoreTips(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262D8B0))(this, msg);
	}
	template <typename T = void> T OnBroadcastScoreTipsLastMinutes(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262DB48))(this, msg);
	}
	template <typename T = void> T OnBroadcastScoreTipsWithoutAnim(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262DCE0))(this, msg);
	}
	template <typename T = void> T TickBroadcastTipsLeftTime() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262DD94))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262DE6C))(this, msg);
	}
	template <typename T = void> T OnExitShowGuidePicture(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262E04C))(this, msg);
	}
	template <typename T = void> T OnGuideItemRegister(int32_t inGuideItemType) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x262E100))(this, inGuideItemType);
	}
	template <typename T = void> T CreatePvpGameSomethingController() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262E24C))(this);
	}
	template <typename T = void> T CreatePvpCommonTipsHUD() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262E36C))(this);
	}
	template <typename T = void> T ShowCampHUDWhenNoBagShow() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262E558))(this);
	}
	template <typename T = void> T ShowCommonTipsCampInfo() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262E5F0))(this);
	}
	template <typename T = void> T CreateBRTeamScorePanel() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262D4E4))(this);
	}
	template <typename T = void> T CreateBRGameScoreInfo() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262E9C0))(this);
	}
	template <typename T = void> T CreateBRTeamScoreInfoViewController() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262EA64))(this);
	}
	template <typename T = void> T OnEnterLastArea(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262EBC4))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerEndSwitchRole(uintptr_t inMsg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262ECD8))(this, inMsg);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRTeamGameUIScene*, float))(Il2CppBase() + 0x262F384))(this, dt);
	}
	template <typename T = void> T CheckTickGameScoreViews() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262F458))(this);
	}
	template <typename T = void> T TickLeftTime() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262F540))(this);
	}
	template <typename T = void> T CheckTickScorePanel() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262F5EC))(this);
	}
	template <typename T = void> T OnOpenScorePanel(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262F700))(this, msg);
	}
	template <typename T = void> T OnNotifyFeedBack(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262F7DC))(this, msg);
	}
	template <typename T = void> T ShowNormalWaitSpectatorHud(int32_t waitTime) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x262F87C))(this, waitTime);
	}
	template <typename T = void> T OnBRLocalPlayerDied(uintptr_t Msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262F91C))(this, Msg);
	}
	template <typename T = void> T Init_BRNearbyModule() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262F9D0))(this);
	}
	template <typename T = void> T OnSyncRespawnWaitTime(uintptr_t inMsg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x262FB4C))(this, inMsg);
	}
	template <typename T = void> T PlayRespawnTipsAndSound() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262FF8C))(this);
	}
	template <typename T = void> T BlackScreenOnLocalPlayerDie() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x262FD18))(this);
	}
	template <typename T = void> T OnNotifyBagViewPickupDone(int32_t itemID, int32_t posID) {
		return ((T (*)(BRTeamGameUIScene*, int32_t, int32_t))(Il2CppBase() + 0x26301CC))(this, itemID, posID);
	}
	template <typename T = bool> T CheckGameCommunicationLineMode(int32_t inID) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x263048C))(this, inID);
	}
	template <typename T = void> T UpdatePlayerInfo(uint32_t propertyID) {
		return ((T (*)(BRTeamGameUIScene*, uint32_t))(Il2CppBase() + 0x26305C4))(this, propertyID);
	}
	template <typename T = void> T OnDelayShowSelectChipHUD(uintptr_t inMsg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x2630820))(this, inMsg);
	}
	template <typename T = void> T OnPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x263093C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x2630A34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGuideItemRegister(int32_t P0) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x2630A3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreatePvpGameSomethingController() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreatePvpCommonTipsHUD() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowCampHUDWhenNoBagShow() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateBRGameScoreInfo() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTeamGameUIScene*, float))(Il2CppBase() + 0x2630A64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyFeedBack(uintptr_t P0) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x2630A6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowNormalWaitSpectatorHud(int32_t P0) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x2630A74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBRLocalPlayerDied(uintptr_t P0) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x2630A7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init_BRNearbyModule() {
		return ((T (*)(BRTeamGameUIScene*))(Il2CppBase() + 0x2630A84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyBagViewPickupDone(int32_t P0, int32_t P1) {
		return ((T (*)(BRTeamGameUIScene*, int32_t, int32_t))(Il2CppBase() + 0x2630A8C))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckGameCommunicationLineMode(int32_t P0) {
		return ((T (*)(BRTeamGameUIScene*, int32_t))(Il2CppBase() + 0x2630A94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerInfo(uint32_t P0) {
		return ((T (*)(BRTeamGameUIScene*, uint32_t))(Il2CppBase() + 0x2630A9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerLoginOrLogoutNotify(uintptr_t P0) {
		return ((T (*)(BRTeamGameUIScene*, uintptr_t))(Il2CppBase() + 0x2630AA4))(this, P0);
	}

};

}
