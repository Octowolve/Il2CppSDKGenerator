#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameUIScene"));
	}

	template <typename T = uintptr_t> T& mEndRoundView() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_PropHuntChooseItemHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_PropHuntTopScoreBoardViewController() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_PropHuntEndGameHUD() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> T& m_GuideNoviceViewController() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = bool> T& m_GuideFlag() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCrossHairPlayerInfoHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChooseItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefeshTeamatesName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropHuntPrepareStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropHuntHideStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropHuntSeekStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndRoundMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBaseCoinTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPropHuntGuideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePropHuntGuideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceTeamRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A4A4C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A4B08))(this);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(PropHuntGameUIScene*, uint32_t))(Il2CppBase() + 0x34A4E00))(this, playerID);
	}
	template <typename T = void> T LoadCrossHairPlayerInfoHUD() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A4EA0))(this);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A4F38))(this, msg);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A5238))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A537C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntGameUIScene*, float))(Il2CppBase() + 0x34A54C4))(this, deltaTime);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A5598))(this);
	}
	template <typename T = void> T OnNotifyLocalPlayerRespawn(uintptr_t Msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A5848))(this, Msg);
	}
	template <typename T = void> T ShowChooseItemView(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A599C))(this, msg);
	}
	template <typename T = void> T RefeshTeamatesName(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A5B44))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A5C60))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A5D14))(this, msg);
	}
	template <typename T = void> T OnPropHuntPrepareStart(float prepareTime) {
		return ((T (*)(PropHuntGameUIScene*, float))(Il2CppBase() + 0x349E9D8))(this, prepareTime);
	}
	template <typename T = void> T OnPropHuntHideStart(float hideTime) {
		return ((T (*)(PropHuntGameUIScene*, float))(Il2CppBase() + 0x349F4BC))(this, hideTime);
	}
	template <typename T = void> T OnPropHuntSeekStart() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A00F8))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A6880))(this, roundResult);
	}
	template <typename T = void> T PlayEndRoundMusic() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A6C74))(this);
	}
	template <typename T = void> T ShowBaseCoinTips() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A619C))(this);
	}
	template <typename T = void> T ShowPropHuntGuideView() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A64CC))(this);
	}
	template <typename T = void> T ClosePropHuntGuideView() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A67AC))(this);
	}
	template <typename T = void> T OnQuitVoiceRoomFinish(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(PropHuntGameUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x34A6F00))(this, roomName, memberId);
	}
	template <typename T = void> T OnNotifyEnterVoiceRoomFinish(uintptr_t Msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A7354))(this, Msg);
	}
	template <typename T = void> T TryToEnterVoiceTeamRoom() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A7660))(this);
	}
	template <typename T = Il2CppString*> T GetTeamGVoiceRoomName() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A7ECC))(this);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A8200))(this, msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A83B0))(this, Msg);
	}
	template <typename T = void> T CloseVoiceBtn() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A7C0C))(this);
	}
	template <typename T = void> T ShowVoiceBtn() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A7D6C))(this);
	}
	template <typename T = bool> T get_bShowCampAnimHUD() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A8480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A8488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltSkillHud(uint32_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uint32_t))(Il2CppBase() + 0x34A8490))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadCrossHairPlayerInfoHUD() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A8498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A84A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A84B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntGameUIScene*, float))(Il2CppBase() + 0x34A84B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A84C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLocalPlayerRespawn(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEndRoundMusic() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A84E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQuitVoiceRoomFinish(Il2CppString* P0, int32_t P1) {
		return ((T (*)(PropHuntGameUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x34A84F0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyEnterVoiceRoomFinish(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A84F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryToEnterVoiceTeamRoom() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A8500))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetTeamGVoiceRoomName() {
		return ((T (*)(PropHuntGameUIScene*))(Il2CppBase() + 0x34A8508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(PropHuntGameUIScene*, uintptr_t))(Il2CppBase() + 0x34A8510))(this, P0);
	}

};

}
