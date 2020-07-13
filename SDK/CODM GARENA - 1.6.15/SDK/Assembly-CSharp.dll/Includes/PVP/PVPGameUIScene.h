#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameUIScene"));
	}

	template <typename T = uintptr_t> T& mSwitchBagController() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_PVPScoreViewController() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& m_KillMessageHUD() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& mPickUpGuide() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& m_HasDroppedWeapon() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& m_HasPickedUpItem() {
		return *(T*)((uintptr_t)this + 0x17D);
	}
	template <typename T = uintptr_t> T& m_GrenadeIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& m_GrenadeStickIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& m_GrenadePickUpHUD() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& m_EndRoundView() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& m_ExplodeTipController() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& m_BloodAndStreakHUD() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& m_PVPGameIndicatorViewOnTeamBOTMode() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> static T& TECHNIQUE_HUD_DISPLAY_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_SentryGunPawnTopFlagHudMap() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SentryGunPawnTopFlagHudList() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& m_DeadReplayHUD() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& m_MatchOBController() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& m_CarePackageOpenHUD() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_CarePackageTipsHUD() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& m_CarePackageIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& m_NuclearBombCountdownHUD() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& m_StreakIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& m_AirstrikeIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& m_BRSwitchSprintingHUD() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& m_WarningHud() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& m_SelfExplodingProgressHud() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& m_WeaponOverHeatHud() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& m_GoliathHPProgressHud() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& m_GoliathGlassHud() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& m_GoliathOverHeatProgressHud() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> T& m_ElectricCDHud() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& m_LockTargetEnemyHud() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> T& m_PowerupTipsHud() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_BRSignController() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& m_BRSignMenuHUD() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& m_BRSignTipsHUD() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& m_MatchResult() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppString*> T& m_RoundStartTips() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppString*> T& m_RoundStartTipsKey() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& m_IsFirstTick() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& m_CurrentRoundResult() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& m_TacticalMapHelicopterSpotController() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& m_VTOLViewChangeMask() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& m_BRChatController() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& m_VehicleDroneController() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& m_VehicleDronePerspectiveHUD() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uintptr_t> T& m_VehicleReconController() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& m_OpenScreenHUD() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = uintptr_t> T& m_CampShowHUD() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& m_ModeTipsShowHUD() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = bool> T& NeedShowModeTipsAnim() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = bool> T& bHadShowCampAnim() {
		return *(T*)((uintptr_t)this + 0x231);
	}
	template <typename T = uintptr_t> T& m_ExpBuffHUD() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uintptr_t> T& m_OpenSceneHUD() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& m_VNGHUD() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& m_ScorePanelController() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& mLastUpdateTick() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> static T& UPDATE_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& HasCreateObserverIndicatorHUD() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& m_VTOLFireBtnController() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uintptr_t> T& m_VTOLLeftFireBtnController() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& m_VTOLChangePosBtnHud() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& m_VTOLMissileFireBtnHud() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& m_VTOLLocationBarHud() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& m_VTOLIndicatorsHud() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& m_VTOLBehitHud() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ScreenEffectDic() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> T& m_CurrentActiveAssetID() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& m_CurrentActiveShowState() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> T& pendingScreenEffectId() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MP1_Init_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowVNG18HUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateExpBuffHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowExpBuffHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOpenSceneHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOpenSceneHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCampShowHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateElectricCDHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLockTargetEnemyHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePowerupTipsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShadowbladeLockEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShadowbladeShowHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowShadowbladeKillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowElectricCDHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetElectricAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleCampShowHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowCampHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampHUDWhenNoBagShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHalfwayJoinLadderMatchHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGrenadeStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyExplodeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGoToWinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewTargetWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillInfoNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillInfoNotify_ScrollingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowMatchPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpdateInGameViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScorePanelView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFeedBackHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponOverHeatHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSelfExplodingProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathHPProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathGlassHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathWeaponOverHeatProgressHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateKillInfoController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBloodHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSwitchSprintingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWarningHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndRoundMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatchResultVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadModeIntroductionController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateObserverIndicatorHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSentryGunPawnInitEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSentryGunPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchHelicopterWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyDisHudToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyDisHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestructibleSceneObjectInfoHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestructibleSceneObjectInfoHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyVehicleRecon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLViewChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLIndicatorsHudShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLIndicatorsHudHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVTOLController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideVTOLController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLBehit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLControlBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVTOLControlEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRecoveNormalUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSignsUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSignsMenuHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignSystemEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignOperatOperateBtnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSelfExplodingProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowGoliathHPProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowGoliathGlassHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowGoliathWeaponOverHeatProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickPanelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyVehicleDroneControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleDroneUIHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowBloodAndStreakHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAddVehicleDronePerspectiveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveVehicleDronePerspectiveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyVehicleDroneTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowOpenScreenHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleReconUIHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuideOnEnterCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuideOnLeaveCarePackageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCarePackageTipsHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddCarePackageIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveCarePackageIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateCarePackageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowNuclearBombCountdownHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInterruptOpeningCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchSprintingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyReleaseOrDestroyStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddStreakIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveStreakIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddAirstrikeIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveAirstrikeIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveAllAirstrikeIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnElectricShockCarInfoChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNewGuideManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNewGuideMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPickUpPowerUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PowerUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadScreenEffectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScorePanelCampMININame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameEndScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}

	template <typename T = void> T MP1_Init_3() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF33F4))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF35E4))(this);
	}
	template <typename T = uintptr_t> T get_MatchResult() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF35EC))(this);
	}
	template <typename T = void> T set_MatchResult(uintptr_t value) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF35F4))(this, value);
	}
	template <typename T = void> T set_RoundStartTips(Il2CppString* value) {
		return ((T (*)(PVPGameUIScene*, Il2CppString*))(Il2CppBase() + 0x2AF35FC))(this, value);
	}
	template <typename T = void> T set_RoundStartTipsKey(Il2CppString* value) {
		return ((T (*)(PVPGameUIScene*, Il2CppString*))(Il2CppBase() + 0x2AF3604))(this, value);
	}
	template <typename T = bool> T get_HasShowCampAnim() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF360C))(this);
	}
	template <typename T = bool> T get_NeedShowExpBuffHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF3614))(this);
	}
	template <typename T = Il2CppVector3> T get_ExpBuffHUDPosition() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF361C))(this);
	}
	template <typename T = Il2CppVector3> T get_VNGBuffHUDPosition() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF3658))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF3698))(this);
	}
	template <typename T = void> T CheckShowVNG18HUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF4F2C))(this);
	}
	template <typename T = void> T OnNotifyPrepareTime(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF518C))(this, Msg);
	}
	template <typename T = void> T CreateLevelObjectInteractiveHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF551C))(this);
	}
	template <typename T = bool> T get_bShowCampAnimHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF5648))(this);
	}
	template <typename T = void> T CreateExpBuffHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF5650))(this);
	}
	template <typename T = void> T CheckShowExpBuffHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF58B4))(this);
	}
	template <typename T = void> T CreateOpenSceneHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF5B14))(this);
	}
	template <typename T = void> T ShowOpenSceneHUD(bool bShow) {
		return ((T (*)(PVPGameUIScene*, bool))(Il2CppBase() + 0x2AF5C44))(this, bShow);
	}
	template <typename T = void> T CreateCampShowHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF5DD0))(this);
	}
	template <typename T = void> T CreateElectricCDHud() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF4A14))(this);
	}
	template <typename T = void> T CreateLockTargetEnemyHud() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF4BC8))(this);
	}
	template <typename T = void> T CreatePowerupTipsHud() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF4DAC))(this);
	}
	template <typename T = void> T OnNotifyShadowbladeLockEnemy(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF6454))(this, obj);
	}
	template <typename T = void> T OnNotifyShadowbladeShowHud(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF6704))(this, obj);
	}
	template <typename T = void> T OnShowShadowbladeKillInfo(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF6898))(this, obj);
	}
	template <typename T = void> T OnShowElectricCDHud(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF6A2C))(this, obj);
	}
	template <typename T = void> T OnSetElectricAlpha(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF6CB8))(this, obj);
	}
	template <typename T = void> T ToggleCampShowHUD(bool bShow, Il2CppString* CampSpriteName, Il2CppString* ModeSpriteName, Il2CppString* modeName, Il2CppString* CampText) {
		return ((T (*)(PVPGameUIScene*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2AF6194))(this, bShow, CampSpriteName, ModeSpriteName, modeName, CampText);
	}
	template <typename T = void> T DoShowCampHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF6E78))(this);
	}
	template <typename T = void> T ShowCampHUDWhenNoBagShow() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF7310))(this);
	}
	template <typename T = bool> T get_IsCreatePVPBloodHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF73C0))(this);
	}
	template <typename T = void> T CheckHalfwayJoinLadderMatchHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF48AC))(this);
	}
	template <typename T = uintptr_t> T GetChatController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF73C8))(this);
	}
	template <typename T = void> T OnNotifyGrenadeStick(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7468))(this, msg);
	}
	template <typename T = void> T OnNotifyExplodeDamage(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7704))(this, Msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF798C))(this, msg);
	}
	template <typename T = void> T OnNotifyGoToWinnerCircle(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7B48))(this, msg);
	}
	template <typename T = void> T GoToWinnerCircle() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF7C14))(this);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7CF4))(this, msg);
	}
	template <typename T = bool> T get_IsShowFirstChangeAutoFireTips() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF7E00))(this);
	}
	template <typename T = void> T OnViewTargetWeaponChanged(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7E08))(this, msg);
	}
	template <typename T = void> T OnMissileControl(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF7EBC))(this, msg);
	}
	template <typename T = void> T OnKillInfoNotify(uintptr_t killInfo) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF8078))(this, killInfo);
	}
	template <typename T = void> T OnKillInfoNotify_ScrollingInfo(uintptr_t killInfo) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF8270))(this, killInfo);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVPGameUIScene*, float))(Il2CppBase() + 0x2AF8398))(this, deltaTime);
	}
	template <typename T = void> T TryShowMatchPrepare() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF8738))(this);
	}
	template <typename T = void> T OnLocalPlayerRestart(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF87E0))(this, msg);
	}
	template <typename T = void> T OnDropWeapon(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF88A0))(this, msg);
	}
	template <typename T = void> T OnItemPickUp(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF894C))(this, msg);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF89F8))(this);
	}
	template <typename T = void> T CheckUpdateInGameViews() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF863C))(this);
	}
	template <typename T = void> T UpdateScorePanelView() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF8D64))(this);
	}
	template <typename T = void> T CloseScorePanel() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF8E28))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF8EFC))(this, msg);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AF90E8))(this, msg);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF9790))(this);
	}
	template <typename T = void> T CreateFeedBackHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF984C))(this);
	}
	template <typename T = void> T CreateWeaponOverHeatHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF99B8))(this);
	}
	template <typename T = void> T CreateSelfExplodingProgressHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF9B38))(this);
	}
	template <typename T = void> T CreateGoliathHPProgressHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF9CB8))(this);
	}
	template <typename T = void> T CreateGoliathGlassHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF9E38))(this);
	}
	template <typename T = void> T CreateGoliathWeaponOverHeatProgressHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AF9FB4))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFA134))(this);
	}
	template <typename T = void> T CreateKillInfoController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFA380))(this);
	}
	template <typename T = void> T CreateBloodHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFA6A4))(this);
	}
	template <typename T = void> T CreateSwitchSprintingHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFA7F0))(this);
	}
	template <typename T = void> T CreateWarningHud() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFA904))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFAA88))(this, msg);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFB2C4))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFB64C))(this, msg);
	}
	template <typename T = void> T TimerShowEndRoundView(uintptr_t result) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFBBEC))(this, result);
	}
	template <typename T = void> T PlayEndRoundMusic() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFBCBC))(this);
	}
	template <typename T = void> T PlayMatchResultVoice(uintptr_t gameResult) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFBF14))(this, gameResult);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFC280))(this, Msg);
	}
	template <typename T = void> T OnStartSpectating(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFC354))(this, msg);
	}
	template <typename T = void> T OnEndSpectating(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFC3F4))(this, msg);
	}
	template <typename T = void> T SelectBag(int32_t bagId) {
		return ((T (*)(PVPGameUIScene*, int32_t))(Il2CppBase() + 0x2AFC494))(this, bagId);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFC5F8))(this);
	}
	template <typename T = void> T LoadModeIntroductionController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFC8C8))(this);
	}
	template <typename T = void> T CreateObserverIndicatorHUD(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFC960))(this, msg);
	}
	template <typename T = void> T OnSentryGunPawnInitEnd(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFCA84))(this, msg);
	}
	template <typename T = void> T OnSentryGunPawnDie(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFD16C))(this, msg);
	}
	template <typename T = void> T OnSwitchHelicopterWeapon(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFD520))(this, msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFD7FC))(this, msg);
	}
	template <typename T = void> T OnEnemyDisHudToggle(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFD91C))(this, msg);
	}
	template <typename T = void> T OnEnemyDisHudRemove(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFDA38))(this, msg);
	}
	template <typename T = bool> T NeedShowName(uintptr_t teamMemberer) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFDD4C))(this, teamMemberer);
	}
	template <typename T = void> T OnPawnTopNameHudAdd(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFE0CC))(this, msg);
	}
	template <typename T = void> T OnPawnTopNameHudRemove(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFE360))(this, msg);
	}
	template <typename T = void> T OnDestructibleSceneObjectInfoHudAdd(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFE580))(this, msg);
	}
	template <typename T = void> T OnDestructibleSceneObjectInfoHudRemove(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFE7B8))(this, msg);
	}
	template <typename T = void> T OnNotifyVehicleRecon(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFE9F0))(this, msg);
	}
	template <typename T = void> T OnDeadReplayBegin(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFEB84))(this, msg);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFF22C))(this, msg);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFF6E8))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFF794))(this);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFF928))(this, Msg);
	}
	template <typename T = void> T OnShowObserverHud(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFFE98))(this, Msg);
	}
	template <typename T = bool> T get_IsCreateKillStreakHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2AFFF74))(this);
	}
	template <typename T = void> T OnVTOLViewChange(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2AFFF7C))(this, Msg);
	}
	template <typename T = void> T OnVTOLIndicatorsHudShow(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B00134))(this, Msg);
	}
	template <typename T = void> T OnVTOLIndicatorsHudHide(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B00420))(this, Msg);
	}
	template <typename T = void> T ShowVTOLController(uint32_t VTOLActorID) {
		return ((T (*)(PVPGameUIScene*, uint32_t))(Il2CppBase() + 0x2B0054C))(this, VTOLActorID);
	}
	template <typename T = void> T HideVTOLController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B00E4C))(this);
	}
	template <typename T = void> T OnVTOLBehit(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B011A8))(this, Msg);
	}
	template <typename T = void> T OnVTOLControlBegin(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B01334))(this, Msg);
	}
	template <typename T = void> T OnVTOLControlEnd(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B01570))(this, Msg);
	}
	template <typename T = void> T DelayRecoveNormalUI() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B0186C))(this);
	}
	template <typename T = void> T CreateSignsUI() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B01C40))(this);
	}
	template <typename T = void> T CreateSignsMenuHud() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B01E80))(this);
	}
	template <typename T = bool> T IsSignSystemEnable() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B01FF0))(this);
	}
	template <typename T = void> T OnSignOperatOperateBtnDragStart(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02140))(this, obj);
	}
	template <typename T = void> T OnShowSelfExplodingProgress(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02274))(this, obj);
	}
	template <typename T = void> T OnRefreshWeaponHotValue(uintptr_t obj) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02428))(this, obj);
	}
	template <typename T = void> T OnShowGoliathHPProgress(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B025A8))(this, msg);
	}
	template <typename T = void> T OnShowGoliathGlassHud(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02750))(this, msg);
	}
	template <typename T = void> T OnShowGoliathWeaponOverHeatProgress(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B028F8))(this, msg);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02AAC))(this, msg);
	}
	template <typename T = uintptr_t> T GetJoyStickPanelType() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B02B4C))(this);
	}
	template <typename T = void> T OnNotifyVehicleDroneControl(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B02BEC))(this, msg);
	}
	template <typename T = void> T VehicleDroneUIHandler(bool isShow, uintptr_t owner) {
		return ((T (*)(PVPGameUIScene*, bool, uintptr_t))(Il2CppBase() + 0x2B02DB8))(this, isShow, owner);
	}
	template <typename T = void> T OnNotifyShowBloodAndStreakHUD(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B03230))(this, msg);
	}
	template <typename T = void> T OnNotifyAddVehicleDronePerspectiveItem(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B033C4))(this, msg);
	}
	template <typename T = void> T OnNotifyRemoveVehicleDronePerspectiveItem(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B036B0))(this, msg);
	}
	template <typename T = void> T OnNotifyVehicleDroneTakeDamage(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B03828))(this, msg);
	}
	template <typename T = void> T OnNotifyShowOpenScreenHUD(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0394C))(this, msg);
	}
	template <typename T = void> T VehicleReconUIHandler(bool isShow, uintptr_t owner) {
		return ((T (*)(PVPGameUIScene*, bool, uintptr_t))(Il2CppBase() + 0x2B03B44))(this, isShow, owner);
	}
	template <typename T = void> T OnEnterCarePackageTrigger(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B03D24))(this, Msg);
	}
	template <typename T = void> T OnLeaveCarePackageTrigger(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0462C))(this, Msg);
	}
	template <typename T = void> T NewGuideOnEnterCarePackageTrigger(uint32_t actorID) {
		return ((T (*)(PVPGameUIScene*, uint32_t))(Il2CppBase() + 0x2B04268))(this, actorID);
	}
	template <typename T = void> T NewGuideOnLeaveCarePackageTrigger(uint32_t actorID) {
		return ((T (*)(PVPGameUIScene*, uint32_t))(Il2CppBase() + 0x2B048AC))(this, actorID);
	}
	template <typename T = void> T OnShowCarePackageTipsHUD(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B04BAC))(this, Msg);
	}
	template <typename T = void> T OnAddCarePackageIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B04EF8))(this, Msg);
	}
	template <typename T = void> T OnRemoveCarePackageIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B05144))(this, Msg);
	}
	template <typename T = void> T OnUpdateCarePackageInfo(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B052C0))(this, Msg);
	}
	template <typename T = void> T OnShowNuclearBombCountdownHUD(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B055D4))(this, Msg);
	}
	template <typename T = void> T OnInterruptOpeningCarePackage(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B05854))(this, Msg);
	}
	template <typename T = void> T OnSwitchSprintingHUD(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B05990))(this, Msg);
	}
	template <typename T = void> T OnNotifyReleaseOrDestroyStreak(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B05B3C))(this, Msg);
	}
	template <typename T = void> T OnAddStreakIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B05ED0))(this, Msg);
	}
	template <typename T = void> T OnRemoveStreakIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B06420))(this, Msg);
	}
	template <typename T = void> T OnAddAirstrikeIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B065C4))(this, Msg);
	}
	template <typename T = void> T OnRemoveAirstrikeIndicator(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B068D4))(this, Msg);
	}
	template <typename T = void> T OnRemoveAllAirstrikeIndicators(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B06A50))(this, Msg);
	}
	template <typename T = void> T OnElectricShockCarInfoChanged(uintptr_t Msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B06B6C))(this, Msg);
	}
	template <typename T = uintptr_t> T CreateNewGuideManager() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B06DE0))(this);
	}
	template <typename T = bool> T IsNewGuideMode() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B06F1C))(this);
	}
	template <typename T = void> T OnNotifyPickUpPowerUp(uintptr_t msg) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B06FFC))(this, msg);
	}
	template <typename T = void> T PowerUpEffect(uintptr_t pickupConf) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B07250))(this, pickupConf);
	}
	template <typename T = void> T ShowScreenEffect(bool show, int32_t assetId) {
		return ((T (*)(PVPGameUIScene*, bool, int32_t))(Il2CppBase() + 0x2B074C8))(this, show, assetId);
	}
	template <typename T = void> static T SetEffectActive(bool show, uintptr_t effect) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x2B077B0))(0, show, effect);
	}
	template <typename T = void> T CreateScreenEffect(int32_t assetId) {
		return ((T (*)(PVPGameUIScene*, int32_t))(Il2CppBase() + 0x2B07630))(this, assetId);
	}
	template <typename T = void> T OnLoadScreenEffectComplete(uintptr_t effect) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B078CC))(this, effect);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampIconName(uintptr_t camp) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B07AF0))(this, camp);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampName(uintptr_t camp) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B07C30))(this, camp);
	}
	template <typename T = Il2CppString*> T GetScorePanelCampMININame(uintptr_t camp) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B07D70))(this, camp);
	}
	template <typename T = int32_t> T GetGameEndScore(uintptr_t camp) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B07EB0))(this, camp);
	}
	template <typename T = void> T MP1_Init_3m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(PVPGameUIScene*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B080A8))(this, tutorialType, info);
	}
	template <typename T = void> static T MP1_Init_3m__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B08638))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B08784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLevelObjectInteractiveHUD() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B0878C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowCampHUDWhenNoBagShow() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B08794))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetChatController() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B0879C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyQuitGame(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewTargetWeaponChanged(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMissileControl(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillInfoNotify(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPGameUIScene*, float))(Il2CppBase() + 0x2B087CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryShowMatchPrepare() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B087D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerRestart(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B087E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseScorePanel() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B087EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerLoginOrLogoutNotify(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B087FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B08804))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0880C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B08814))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SelectBag(int32_t P0) {
		return ((T (*)(PVPGameUIScene*, int32_t))(Il2CppBase() + 0x2B0881C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSwitchBag() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B08824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnemyDisHudToggle(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0882C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnemyDisHudRemove(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B08834))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnTopNameHudAdd(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0883C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnTopNameHudRemove(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B08844))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B0884C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B08854))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowObserverHud(uintptr_t P0) {
		return ((T (*)(PVPGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B0885C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetJoyStickPanelType() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B08864))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateNewGuideManager() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B0886C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNewGuideMode() {
		return ((T (*)(PVPGameUIScene*))(Il2CppBase() + 0x2B08874))(this);
	}

};

}
