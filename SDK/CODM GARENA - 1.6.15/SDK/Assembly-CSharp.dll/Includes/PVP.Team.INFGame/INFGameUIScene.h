#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class INFGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "INFGameUIScene"));
	}

	template <typename T = Il2CppString*> static T& kUndeadSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kSurvivorSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& kUndeadLocID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& kSurvivorLocID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& m_InfectGamePerkProcessHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_InfectGameTipHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = bool> T& m_GuideFlag() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& m_GuideNoviceViewController() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefeshTeamatesName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLastSurvivor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLastSurvivorTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGuideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCampShowHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampMININame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameEndScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBloodHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceTeamRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40408D4))(this);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4040AC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4040B84))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4040E70))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4040FFC))(this);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4041194))(this, msg);
	}
	template <typename T = void> T GoToWinnerCircle() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40412A0))(this);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x404140C))(this, tacticalGPS);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40414F0))(this, msg);
	}
	template <typename T = void> T RefeshTeamatesName(uintptr_t msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40418A0))(this, msg);
	}
	template <typename T = void> T OnLastSurvivor(uintptr_t in_msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40419EC))(this, in_msg);
	}
	template <typename T = void> T ShowLastSurvivorTip() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4041B34))(this);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4041BFC))(this);
	}
	template <typename T = void> T ShowGuideView(uintptr_t msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4041EDC))(this, msg);
	}
	template <typename T = void> T CreateCampShowHUD() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x404211C))(this);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampIconName(uintptr_t camp) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40421E4))(this, camp);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampName(uintptr_t camp) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x404233C))(this, camp);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampMININame(uintptr_t camp) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4042494))(this, camp);
	}
	template <typename T = int32_t> T GetGameEndScore(uintptr_t camp) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40425EC))(this, camp);
	}
	template <typename T = void> T CreateBloodHUD() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4042764))(this);
	}
	template <typename T = void> T OnQuitVoiceRoomFinish(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(INFGameUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x40428E0))(this, roomName, memberId);
	}
	template <typename T = void> T OnNotifyEnterVoiceRoomFinish(uintptr_t Msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4042D64))(this, Msg);
	}
	template <typename T = void> T TryToEnterVoiceTeamRoom() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40430A0))(this);
	}
	template <typename T = Il2CppString*> T GetTeamGVoiceRoomName() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4043A20))(this);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4043D84))(this, msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4043E7C))(this, Msg);
	}
	template <typename T = void> T CloseVoiceBtn() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4043700))(this);
	}
	template <typename T = void> T ShowVoiceBtn() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4043890))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4044060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4044068))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4044070))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4044078))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4044080))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GoToWinnerCircle() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x4044088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalMapController(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4044090))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x4044098))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40440A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateCampShowHUD() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40440A8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetScorePanelCampIconName(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440B0))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetScorePanelCampName(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440B8))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetScorePanelCampMININame(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440C0))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetGameEndScore(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateBloodHUD() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40440D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQuitVoiceRoomFinish(Il2CppString* P0, int32_t P1) {
		return ((T (*)(INFGameUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x40440D8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyEnterVoiceRoomFinish(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryToEnterVoiceTeamRoom() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40440E8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetTeamGVoiceRoomName() {
		return ((T (*)(INFGameUIScene*))(Il2CppBase() + 0x40440F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(INFGameUIScene*, uintptr_t))(Il2CppBase() + 0x40440F8))(this, P0);
	}

};

}
