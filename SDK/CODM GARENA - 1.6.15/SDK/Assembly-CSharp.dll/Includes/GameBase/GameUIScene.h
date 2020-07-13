#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameUIScene"));
	}

	template <typename T = bool> T& m_DelayHandleEnterBattleScene() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& m_CurGame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_SettingsController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_JoySticksPanelController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_PlayerInfoHUD() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BlackScreenHUD() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_DebugInfoHUD() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_PauseBtnHUD() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CrossHairView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_TexCrossHairHUD() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_CrossHairPlayerInfoHUD() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_VoiceBtnHUD() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_NetworkStatusHUD() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_IDCollectionHUD() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_CollectionTipsMgrHUD() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_InGameMsgController() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_SpectatingView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_BattlePauseController() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GameLogoController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_KillConfirmHUD() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_LevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _FadeInOutHUD() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CODMissileCrossHair() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_ScoreHUD() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_FeedBackHUD() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_PerkFeedbackHUD() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_InjuredScreenEffect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_ExplosionScreenEffect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_GoliathInjuredScreenEffect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_UltSkillHud() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_VehicleHud() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_TankHud() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_WhiteScreenDic() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_TacticalRadarController() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_TacticalMapController() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_PauseMenuHUD() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_ShowThrowWeapon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_showSwitchKnifeButton() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& m_ShowWeaponView() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = bool> T& m_ShowReAmmoBtnView() {
		return *(T*)((uintptr_t)this + 0xCB);
	}
	template <typename T = bool> T& m_ShowQuickSwithWeaponBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_EnterLadderBtnController() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_PrepareCountDownView() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_PawnTopNameHUDWraper() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_DestructibleSceneObjectInfoHUD() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_EnemyDistanceHUDWraper() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_LocalPlayerRespawnTimes() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_IsDeadReplaying() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_BRCancelThrowingWeaponHUD() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_BRGrenadeExplodeCountdownHUD() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_MedkitScreenEffect() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_InteractiveInGameHUD() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_GamepadCursorHUD() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_GamepadQuickMessage() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_PvpCommonTipsHUD() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& mLoadoutPvpGameController() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& mLoadoutTimePvpGameController() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& bEnteringTeamVoiceRoom() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& bEnteringRangeVoiceRoom() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = bool> T& bEnteringFriendVoiceRoom() {
		return *(T*)((uintptr_t)this + 0x112);
	}
	template <typename T = uintptr_t> T& m_DebugHUD() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& m_AttackableInfoDebugHUD() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_DeathZoneWarningHUD() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& m_PawnTopAIDebugInfoHUD() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_NewGuideManager() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_ScreenEffectHUD() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& m_SpectatingFreeViewOperateHUD() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppString*> T& mCacheTeamVoiceRoomName() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& mCacheRangeVoiceRoomName() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppString*> T& mCacheFriendVoiceRoomName() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<uint64_t, bool>*>*> T& mCachePlayerVoiceStatusMap() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& mVoiceTickTimer() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& m_TimerOnSettlement() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& SettlementTime() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> static T& BRSettlementTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MPSettlementTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PVESettlementTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_TimerQuitGame() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& ReturnTime() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_OldCrossHairType() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OldCrossHairParams() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& m_OpticsChangeZoomBtnHUD() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_IsEnterMedkitState() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& m_CheckMedkitScreenEffectTimer() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheLayoutHUDs() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnNotifyEnterBattleScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnFadeInUIFinised() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateKillConfirmHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpectatingFreeViewHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePerspectiveUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPerspectiveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameHudStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfPlatformSupportVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryEnterVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableEnterVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceTeamRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceRangeRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRangeGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterVoiceFriendRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendGVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerSpeaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPlayerVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayerVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDroppedVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnVisibleByControllMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSystemSettingBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyVoiceDeviceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillInfoNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSniperFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterBattleScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettlementTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StarSettlementTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterSettlementFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillStreakTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPerkFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpectatingCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadZoneReconnectController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDroppedPickUpConfirmView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInGameMessageController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpGameSomethingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyScoring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyScoringPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowInGameMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowInGameCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireModeHUDPointTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireJoySticksTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUltSkillHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPrepareCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowJoySticksPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGamepadQuickMessageHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenQuickMessageView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCloseQuickMessageView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchMapView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoySticksPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNetworkStatusHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInjuredScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInjuredScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateExplosionScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGoliathInjuredScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHangupWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerEndMatchKick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KickOffMessageBoxCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCloseScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInGameCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeInUIFinised() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceFinishFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadSwitchStopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenStopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseStopPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStopPanelOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCrossHairUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCrossHairPlayerInfoHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCODMissileCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMissileCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEnterLadderBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowEnterLadderBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadOnlyCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeDetailTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewTargetWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoySticksSettingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetJoystickSettingsImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticUpdateControlMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateControlMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerTakedDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowGoliathHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitByPoison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTacticalRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTacticalMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPauseMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfGVoiceIDReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGvoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGVoiceMemberStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyVoiceCloseDetailPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalRadarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadTacticalGPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshTacticalComps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGamepadStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpticsWeaponPartCrossHairShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpticsWeaponPartCrossHairHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpticsWeaponPartChangeZoomBtnLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpticsWeaponPartChangeZoomBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpticsWeaponPartChangeZoomBtnHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyDisHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyDisHudToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyDisHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCampHUDWhenNoBagShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBagPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFireModePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPlayerRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOtherPlayerRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltskillChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySelectPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltUsingStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltEnergyConsumeAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltEnergyDissipating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUltSkillEnergyUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySetUseSkillBtnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInteractiveReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPvpSortedCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRemoveFirstPvpSortedCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowMatchPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllPawnFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileExploded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowWhiteScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAimingCloseBtnChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInjureNumberHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDebugLocalDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleSeatChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInteractiveInGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePvpCommonTipsHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickPanelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonTipsCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateVehicleHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTankHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScreenEffectHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnMedkitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMedkitEnterState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterMedkitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnterMedkitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndHideMedkitScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenSizeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateJoysticksView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponPrepareState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponCountdownState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponCountdownChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameCommunicationLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameCommunicationLineItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameCommunicationLineSceneMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyApplicationPauseAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameCommunicationLineMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyKillConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTacticalMapMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNewGuideManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDownNewGuideManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNewGuideMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateDeathPawnBloodBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleShowDeathZoneWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLayoutHUDCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetLayoutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCacheLayoutView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGameHUDLayoutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}

	template <typename T = uintptr_t> T get_DialogHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E90D80))(this);
	}
	template <typename T = uintptr_t> T get_InGameTutorialHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E90F1C))(this);
	}
	template <typename T = void> T T_OnNotifyEnterBattleScene() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E910B8))(this);
	}
	template <typename T = void> T T_OnFadeInUIFinised() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91174))(this);
	}
	template <typename T = uintptr_t> T get_joySticksPanelController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91220))(this);
	}
	template <typename T = bool> T get_IsJoysticksPanelCreated() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91228))(this);
	}
	template <typename T = uintptr_t> T get_m_FadeInOutHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91238))(this);
	}
	template <typename T = uintptr_t> T get_CODCrossHair() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91368))(this);
	}
	template <typename T = uintptr_t> T get_CurrentCrossHairView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E914F0))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E914F8))(this);
	}
	template <typename T = uintptr_t> T get_UltSkillGameHud() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91500))(this);
	}
	template <typename T = uintptr_t> T get_TacticalRadarController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91508))(this);
	}
	template <typename T = uintptr_t> T get_TacticalMapController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91510))(this);
	}
	template <typename T = bool> T get_ShowThrowWeapon() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91518))(this);
	}
	template <typename T = void> T set_ShowThrowWeapon(bool value) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E91520))(this, value);
	}
	template <typename T = bool> T get_ShowSwitchKnifeButton() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91528))(this);
	}
	template <typename T = void> T set_ShowSwitchKnifeButton(bool value) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E91530))(this, value);
	}
	template <typename T = bool> T get_FastThrowWeaponForce() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91538))(this);
	}
	template <typename T = bool> T get_ShowWeaponView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91540))(this);
	}
	template <typename T = bool> T get_ShowReAmmoBtnView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91548))(this);
	}
	template <typename T = void> T set_ShowReAmmoBtnView(bool value) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E91550))(this, value);
	}
	template <typename T = bool> T get_ShowQuickSwithWeaponBtn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91558))(this);
	}
	template <typename T = void> T set_ShowQuickSwithWeaponBtn(bool value) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E91560))(this, value);
	}
	template <typename T = uintptr_t> T get_EnterLadderBtnCtrl() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91568))(this);
	}
	template <typename T = bool> T get_EnableUIFadeIn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91570))(this);
	}
	template <typename T = bool> T get_DuringUIFadeIn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91578))(this);
	}
	template <typename T = uintptr_t> T get_PawnTopNameHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91580))(this);
	}
	template <typename T = bool> T get_isFirstTimeResapwn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91588))(this);
	}
	template <typename T = uintptr_t> T get_CacheInteractiveInGameHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E91598))(this);
	}
	template <typename T = uintptr_t> T get_GameLogoControllerInstance() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E915A0))(this);
	}
	template <typename T = uintptr_t> T get_PawnTopAIDebugInfoHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E915A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E915B0))(this);
	}
	template <typename T = void> T CreateKillConfirmHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9550C))(this);
	}
	template <typename T = void> T CreateSpectatingFreeViewHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E95390))(this);
	}
	template <typename T = void> T CreatePerspectiveUI() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E94854))(this);
	}
	template <typename T = void> T InitPerspectiveCamera(uintptr_t uiCamera) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E95688))(this, uiCamera);
	}
	template <typename T = void> T OnNotifyGameHudStateChanged(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E95A40))(this, msg);
	}
	template <typename T = Il2CppString*> T get_CacheTeamVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E962A4))(this);
	}
	template <typename T = Il2CppString*> T get_CacheRangeVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E962AC))(this);
	}
	template <typename T = Il2CppString*> T get_CacheFriendVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E962B4))(this);
	}
	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E962BC))(this);
	}
	template <typename T = bool> T IfPlatformSupportVoice() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9635C))(this);
	}
	template <typename T = bool> T InitGVoice() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E963FC))(this);
	}
	template <typename T = bool> T TryEnterVoiceRoom(uintptr_t mode) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E965D8))(this, mode);
	}
	template <typename T = bool> T DisableEnterVoiceRoom() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E96808))(this);
	}
	template <typename T = void> T TryToEnterVoiceTeamRoom() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E96950))(this);
	}
	template <typename T = Il2CppString*> T GetTeamGVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E973B8))(this);
	}
	template <typename T = void> T TryToEnterVoiceRangeRoom() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E97650))(this);
	}
	template <typename T = Il2CppString*> T GetRangeGVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E976E8))(this);
	}
	template <typename T = void> T TryToEnterVoiceFriendRoom() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E977D8))(this);
	}
	template <typename T = Il2CppString*> T GetFriendGVoiceRoomName() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E97BE0))(this);
	}
	template <typename T = bool> T IsPlayerSpeaking(Il2CppString* roomName, uint64_t playerId) {
		return ((T (*)(GameUIScene*, Il2CppString*, uint64_t))(Il2CppBase() + 0x1E98058))(this, roomName, playerId);
	}
	template <typename T = void> T TickPlayerVoiceStatus(float dt) {
		return ((T (*)(GameUIScene*, float))(Il2CppBase() + 0x1E98228))(this, dt);
	}
	template <typename T = void> T CheckPlayerVoiceStatus(Il2CppString* roomName) {
		return ((T (*)(GameUIScene*, Il2CppString*))(Il2CppBase() + 0x1E98318))(this, roomName);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E98884))(this);
	}
	template <typename T = void> T OnNotifyDroppedVoiceRoom(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E98CD8))(this, msg);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GameUIScene*, float))(Il2CppBase() + 0x1E98E74))(this, dt);
	}
	template <typename T = void> T SetBtnVisibleByControllMode() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9914C))(this);
	}
	template <typename T = void> T LoadSystemSettingBtn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E99410))(this);
	}
	template <typename T = void> T LoadVoiceBtn(bool isShowVoice) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E994A8))(this, isShowVoice);
	}
	template <typename T = void> T OnNotifyVoiceDeviceChange(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E996CC))(this, msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E997F0))(this);
	}
	template <typename T = void> T OnKillInfoNotify(uintptr_t killInfo) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E99E9C))(this, killInfo);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E99F3C))(this, msg);
	}
	template <typename T = void> T CreateSniperFireBtn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9A194))(this);
	}
	template <typename T = void> T OnNotifyEnterBattleScene(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9A22C))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9A2E4))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9A500))(this, msg);
	}
	template <typename T = void> T SetSettlementTime() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9AC1C))(this);
	}
	template <typename T = void> T StarSettlementTimer() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9AD44))(this);
	}
	template <typename T = void> T EnterSettlementFlow(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9B034))(this, msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9B8F4))(this, msg);
	}
	template <typename T = void> T OnBlackScreen(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9BB9C))(this, Msg);
	}
	template <typename T = void> T OnFadeInOut(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9BCC4))(this, Msg);
	}
	template <typename T = void> T OnKillStreakTweenFinished(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9BF14))(this, msg);
	}
	template <typename T = void> T OnPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9C0BC))(this, msg);
	}
	template <typename T = void> T OnNotifyFeedBack(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9C15C))(this, msg);
	}
	template <typename T = void> T OnNotifyPerkFeedback(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9C650))(this, msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9C958))(this, Msg);
	}
	template <typename T = void> T RefreshSpectatingCrossHair(uintptr_t mode) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9D110))(this, mode);
	}
	template <typename T = void> T OnSpectateModeChange(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9D308))(this, Msg);
	}
	template <typename T = void> T OnShowObserverHud(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9D4B0))(this, Msg);
	}
	template <typename T = void> T LoadZoneReconnectController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9D5C0))(this);
	}
	template <typename T = void> T LoadDroppedPickUpConfirmView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9D71C))(this);
	}
	template <typename T = void> T OnEnterDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9D7CC))(this, inMsg);
	}
	template <typename T = void> T OnLeaveDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9D888))(this, inMsg);
	}
	template <typename T = void> T CreateInGameMessageController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9D928))(this);
	}
	template <typename T = void> T CreatePvpGameSomethingController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9DABC))(this);
	}
	template <typename T = void> T OnNotifyScoring(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9DCD8))(this, msg);
	}
	template <typename T = void> T OnNotifyScoringPVE(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9E024))(this, msg);
	}
	template <typename T = void> T OnShowInGameMessage(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9E1B8))(this, Msg);
	}
	template <typename T = void> T OnShowInGameCountDown(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9E668))(this, Msg);
	}
	template <typename T = void> T OnShowClimbable(uintptr_t inMsg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9EB30))(this, inMsg);
	}
	template <typename T = void> T OnHideClimbable(uintptr_t inMsg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1E9EBE8))(this, inMsg);
	}
	template <typename T = uintptr_t> T GetFireModeHUDPointTransform() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9ECA0))(this);
	}
	template <typename T = void> T ShowMessageBox(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(GameUIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E9ED60))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText);
	}
	template <typename T = uintptr_t> T GetFireJoySticksTransform() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9EEE8))(this);
	}
	template <typename T = void> T ShowDebugInfo(bool show) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E9EFA8))(this, show);
	}
	template <typename T = void> T ShowUltSkillHUD(bool show) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E9F1BC))(this, show);
	}
	template <typename T = void> T ShowPrepareCountDown(bool bShow) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E9F384))(this, bShow);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9F4D0))(this);
	}
	template <typename T = void> T SelectBag(int32_t bagId) {
		return ((T (*)(GameUIScene*, int32_t))(Il2CppBase() + 0x1E9F570))(this, bagId);
	}
	template <typename T = void> T ShowJoySticksPanel(bool show) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E9F6C4))(this, show);
	}
	template <typename T = uintptr_t> T GetChatController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9F7A0))(this);
	}
	template <typename T = void> T InitGamepadQuickMessageHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9F840))(this);
	}
	template <typename T = bool> T OnGamepadOpenQuickMessageView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9F9A4))(this);
	}
	template <typename T = bool> T OnGamepadCloseQuickMessageView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9FC80))(this);
	}
	template <typename T = bool> T OnSwitchMapView() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9FE68))(this);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA0118))(this, Msg);
	}
	template <typename T = void> T CreateJoySticksPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA01D0))(this);
	}
	template <typename T = void> T CreateNetworkStatusHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA0364))(this);
	}
	template <typename T = int32_t> T GetInjuredScreenEffectAssetID() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA05BC))(this);
	}
	template <typename T = int32_t> T GetExplosionScreenEffectAssetID() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA06A4))(this);
	}
	template <typename T = void> T CreateInjuredScreenEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA0748))(this);
	}
	template <typename T = void> T CreateExplosionScreenEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA09F0))(this);
	}
	template <typename T = void> T CreateGoliathInjuredScreenEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA0C98))(this);
	}
	template <typename T = void> T OnHangupWarning(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA0F0C))(this, msg);
	}
	template <typename T = void> T OnKickOff(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA10F4))(this, msg);
	}
	template <typename T = void> T TimerEndMatchKick() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1494))(this);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA15C0))(this, msg);
	}
	template <typename T = void> T KickOffMessageBoxCallBack(uintptr_t result, int32_t userContext) {
		return ((T (*)(GameUIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x1EA1660))(this, result, userContext);
	}
	template <typename T = bool> T OnGamepadOpenScorePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA17B8))(this);
	}
	template <typename T = bool> T OnGamepadCloseScorePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA186C))(this);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1920))(this);
	}
	template <typename T = void> T CloseScorePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA19B8))(this);
	}
	template <typename T = void> T OpenPausePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1A50))(this);
	}
	template <typename T = void> T ClosePausePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1B7C))(this);
	}
	template <typename T = void> T ResetPausePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1C40))(this);
	}
	template <typename T = bool> T IsInGameCountDown() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1D04))(this);
	}
	template <typename T = void> T OnFadeInUIFinised() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1E30))(this);
	}
	template <typename T = void> T ForceFinishFadeIn() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1EE0))(this);
	}
	template <typename T = void> T OpenSettingPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA1F78))(this);
	}
	template <typename T = void> T CloseSettingPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2318))(this);
	}
	template <typename T = bool> T OnGamepadSwitchStopPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2474))(this);
	}
	template <typename T = void> T OpenStopPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA27C0))(this);
	}
	template <typename T = void> T CloseStopPanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA292C))(this);
	}
	template <typename T = bool> T IsStopPanelOpen() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2A98))(this);
	}
	template <typename T = void> T LoadCrossHairUI() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2B78))(this);
	}
	template <typename T = bool> T get_IsLoadCrossHairPlayerInfoHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2D3C))(this);
	}
	template <typename T = void> T LoadCrossHairPlayerInfoHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2D44))(this);
	}
	template <typename T = uintptr_t> T LoadGameHUD(uintptr_t id) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x334BEA8))(this, id);
	}
	template <typename T = void> T CreateCODMissileCrossHair() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA2F24))(this);
	}
	template <typename T = void> T ShowMissileCrossHair(bool show) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1E9A898))(this, show);
	}
	template <typename T = void> T CreateEnterLadderBtnController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E95174))(this);
	}
	template <typename T = void> T OnNotifyShowEnterLadderBtn(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA3048))(this, Msg);
	}
	template <typename T = void> T OnLoadOnlyCrossHair(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA34DC))(this, Msg);
	}
	template <typename T = void> T OnLoadCrossHair(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA3588))(this, Msg);
	}
	template <typename T = void> T OnLocalPawnDied(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA3648))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerRestart(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA3804))(this, msg);
	}
	template <typename T = void> T UpdatePlayerInfo(uint32_t propertyID) {
		return ((T (*)(GameUIScene*, uint32_t))(Il2CppBase() + 0x1EA39D0))(this, propertyID);
	}
	template <typename T = Il2CppString*> T GetModeTargetInfo() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA3C70))(this);
	}
	template <typename T = Il2CppString*> T GetModeDetailTargetInfo() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA3D10))(this);
	}
	template <typename T = void> T OnSyncPlayerInfo(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA3DB0))(this, msg);
	}
	template <typename T = void> T OnViewTargetWeaponChanged(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA4390))(this, msg);
	}
	template <typename T = void> T OnGameHUDLayoutChanged(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA4430))(this, msg);
	}
	template <typename T = void> T OnJoySticksSettingChanged(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA4A24))(this, msg);
	}
	template <typename T = void> T ResetJoystickSettingsImpl() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA4AD0))(this);
	}
	template <typename T = void> static T StaticUpdateControlMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E992E8))(0);
	}
	template <typename T = void> T UpdateControlMode() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA4B80))(this);
	}
	template <typename T = void> T OnLocalPlayerTakedDamage(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA4C30))(this, msg);
	}
	template <typename T = void> T OnShowGoliathHitEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA5230))(this);
	}
	template <typename T = bool> T IsHitByPoison(uintptr_t info) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA5164))(this, info);
	}
	template <typename T = bool> T ShouldPlayHitEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA4168))(this);
	}
	template <typename T = void> T OnShowTacticalRadar(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA5454))(this, msg);
	}
	template <typename T = void> T OnShowTacticalMap(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA5518))(this, msg);
	}
	template <typename T = void> T OnShowPauseMenu(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA57E0))(this, msg);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA5900))(this);
	}
	template <typename T = void> T OnNtfGVoiceIDReceive(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA5BC8))(this, message);
	}
	template <typename T = Il2CppString*> T GetGvoiceRoomName(uintptr_t roomType) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6080))(this, roomType);
	}
	template <typename T = void> T OnGVoiceMemberStatus(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6370))(this, Msg);
	}
	template <typename T = void> T OnNotifyVoiceCloseDetailPanel(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA65F8))(this, message);
	}
	template <typename T = void> T CreateTacticalPanelController() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA6714))(this);
	}
	template <typename T = void> T CreateTacticalRadarController(uintptr_t tacticalGPS) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA698C))(this, tacticalGPS);
	}
	template <typename T = void> T ReloadTacticalGPS(uintptr_t tacticalGPS) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6B5C))(this, tacticalGPS);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6D0C))(this, tacticalGPS);
	}
	template <typename T = void> T OnNotifyRefreshTacticalComps(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6E4C))(this, msg);
	}
	template <typename T = void> T OnNotifyGamepadStateChange(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA6F18))(this, msg);
	}
	template <typename T = void> T OnQuitVoiceRoomFinish(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(GameUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EA6FCC))(this, roomName, memberId);
	}
	template <typename T = void> T OnNotifyEnterVoiceRoomFinish(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7080))(this, msg);
	}
	template <typename T = void> T OnOpticsWeaponPartCrossHairShow(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7120))(this, message);
	}
	template <typename T = void> T OnOpticsWeaponPartCrossHairHide(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7630))(this, message);
	}
	template <typename T = void> T OnOpticsWeaponPartChangeZoomBtnLoad(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA772C))(this, message);
	}
	template <typename T = void> T OnOpticsWeaponPartChangeZoomBtnShow(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7950))(this, message);
	}
	template <typename T = void> T OnOpticsWeaponPartChangeZoomBtnHide(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7B58))(this, message);
	}
	template <typename T = void> T OnPawnTopNameHudAdd(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7C84))(this, message);
	}
	template <typename T = void> T OnPawnTopNameHudRemove(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7D24))(this, message);
	}
	template <typename T = void> T OnEnemyDisHudAdd(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7DC4))(this, message);
	}
	template <typename T = void> T OnEnemyDisHudToggle(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7E64))(this, message);
	}
	template <typename T = void> T OnEnemyDisHudRemove(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA7F04))(this, message);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA7FA4))(this);
	}
	template <typename T = void> T ShowCampHUDWhenNoBagShow() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA8044))(this);
	}
	template <typename T = void> T ShowBagPanel(bool isFlag, bool isShowLeftTime) {
		return ((T (*)(GameUIScene*, bool, bool))(Il2CppBase() + 0x1EA80DC))(this, isFlag, isShowLeftTime);
	}
	template <typename T = void> T ShowFireModePanel() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA8400))(this);
	}
	template <typename T = void> T OnNotifyLocalPlayerRespawn(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA8498))(this, Msg);
	}
	template <typename T = void> T OnNotifyOtherPlayerRespawn(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA8908))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltskillChanged(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA8D28))(this, Msg);
	}
	template <typename T = void> T OnNotifySelectPlayer(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA8E74))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltUsingStateChange(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA915C))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltEnergyConsumeAdd(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA97DC))(this, Msg);
	}
	template <typename T = void> T OnNotifyUltEnergyDissipating(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA9A14))(this, Msg);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(GameUIScene*, uint32_t))(Il2CppBase() + 0x1EA9BF4))(this, playerID);
	}
	template <typename T = void> T HideUltSkillHud() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAA3D8))(this);
	}
	template <typename T = void> T OnNotifyUltSkillEnergyUpdate(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAA4FC))(this, Msg);
	}
	template <typename T = void> T OnNotifySetUseSkillBtnEnable(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAA734))(this, Msg);
	}
	template <typename T = void> T OnNotifyInteractiveReset(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAA8DC))(this, msg);
	}
	template <typename T = void> T OnNotifyPvpSortedCommonTips(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAA9F8))(this, msg);
	}
	template <typename T = void> T OnNotifyRemoveFirstPvpSortedCommonTips(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAAB14))(this, msg);
	}
	template <typename T = void> T TryShowMatchPrepare() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAAC30))(this);
	}
	template <typename T = void> T OnNotifyModifiers(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAB5C8))(this, Msg);
	}
	template <typename T = void> T StopAllPawnFiring() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAB668))(this);
	}
	template <typename T = void> T OnMissileControl(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAB8B0))(this, msg);
	}
	template <typename T = void> T OnMissileExploded(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EABB8C))(this, msg);
	}
	template <typename T = void> T OnSettlement() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EABC3C))(this);
	}
	template <typename T = void> T OnShowWhiteScreen(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EABD0C))(this, Msg);
	}
	template <typename T = void> T OnShowEMPEffect(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC2E4))(this, Msg);
	}
	template <typename T = void> T OnAimingCloseBtnChanged(uintptr_t Msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC694))(this, Msg);
	}
	template <typename T = void> T ShowInjureNumberHUD(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC7E4))(this, msg);
	}
	template <typename T = void> T ShowDebugLocalDamage(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC884))(this, msg);
	}
	template <typename T = void> T OnFireModeChange(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC924))(this, msg);
	}
	template <typename T = void> T OnVehicleSeatChange(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAC9C4))(this, msg);
	}
	template <typename T = void> T CreateInteractiveInGameHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EACAE0))(this);
	}
	template <typename T = void> T CreatePvpCommonTipsHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EACCD8))(this);
	}
	template <typename T = void> T CreateLevelObjectInteractiveHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EACE5C))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectInteractiveHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EACEF4))(this);
	}
	template <typename T = uintptr_t> T GetJoyStickPanelType() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EACF94))(this);
	}
	template <typename T = uintptr_t> T CreateCommonTipsCtrl(Il2CppVector3 pos) {
		return ((T (*)(GameUIScene*, Il2CppVector3))(Il2CppBase() + 0x1EAD034))(this, pos);
	}
	template <typename T = void> T CreateVehicleHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E94CFC))(this);
	}
	template <typename T = void> T CreateTankHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E94E78))(this);
	}
	template <typename T = void> T CreateScreenEffectHUD() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E94FF4))(this);
	}
	template <typename T = void> T CheckSpawnMedkitEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EA960C))(this);
	}
	template <typename T = void> T OnNotifyMedkitEnterState(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAD148))(this, msg);
	}
	template <typename T = void> T EnterMedkitState() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAD798))(this);
	}
	template <typename T = void> T CheckEnterMedkitState(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAD4D4))(this, msg);
	}
	template <typename T = void> T DelayAndHideMedkitScreenEffect() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAD9BC))(this);
	}
	template <typename T = void> T OnScreenSizeChanged() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EADA74))(this);
	}
	template <typename T = void> T OnNotifyUpdateJoysticksView(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EADB28))(this, msg);
	}
	template <typename T = void> T OnThrowWeaponPrepareState(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EADBE8))(this, msg);
	}
	template <typename T = void> T OnThrowWeaponCountdownState(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EADE90))(this, msg);
	}
	template <typename T = void> T OnThrowWeaponCountdownChange(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAE330))(this, msg);
	}
	template <typename T = void> T OnNotifyGameCommunicationLine(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAE544))(this, msg);
	}
	template <typename T = void> T OnNotifyGameCommunicationLineItem(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAE7EC))(this, msg);
	}
	template <typename T = void> T OnNotifyGameCommunicationLineSceneMark(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAEA84))(this, msg);
	}
	template <typename T = void> T OnNotifyApplicationPauseAwake(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAECA4))(this, msg);
	}
	template <typename T = bool> T CheckGameCommunicationLineMode(int32_t inID) {
		return ((T (*)(GameUIScene*, int32_t))(Il2CppBase() + 0x1EAEDF4))(this, inID);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t message) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAEE9C))(this, message);
	}
	template <typename T = void> T OnNotifyKillConfirm(uintptr_t msg) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAF0D4))(this, msg);
	}
	template <typename T = void> T RefreshTacticalMapMaterial() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAF320))(this);
	}
	template <typename T = uintptr_t> T CreateNewGuideManager() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAF3E4))(this);
	}
	template <typename T = void> T ShutDownNewGuideManager() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAF484))(this);
	}
	template <typename T = bool> T IsNewGuideMode() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAF578))(this);
	}
	template <typename T = void> T ForceUpdateDeathPawnBloodBar() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAF618))(this);
	}
	template <typename T = void> T ToggleShowDeathZoneWarning(bool bShow, float DelayDeathTime) {
		return ((T (*)(GameUIScene*, bool, float))(Il2CppBase() + 0x1E94BBC))(this, bShow, DelayDeathTime);
	}
	template <typename T = void> T ClearLayoutHUDCache() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1E9BAC8))(this);
	}
	template <typename T = void> T CheckSetLayoutConfig(uintptr_t type) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAF738))(this, type);
	}
	template <typename T = void> T ResetCacheLayoutView(uintptr_t cacheLayoutView) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EA48E8))(this, cacheLayoutView);
	}
	template <typename T = void> T LoadGameHUDLayoutConfig(bool bCustom) {
		return ((T (*)(GameUIScene*, bool))(Il2CppBase() + 0x1EA47FC))(this, bCustom);
	}
	template <typename T = void> T PlayMusic(Il2CppString* audioID, float delay) {
		return ((T (*)(GameUIScene*, Il2CppString*, float))(Il2CppBase() + 0x1EAF9C0))(this, audioID, delay);
	}
	template <typename T = void> T StarSettlementTimerm__0() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EAFBF0))(this);
	}
	template <typename T = void> static T OnNotifyQuitGamem__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EAFBF8))(0);
	}
	template <typename T = void> T CreateInjuredScreenEffectm__2(uintptr_t effect) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAFC98))(this, effect);
	}
	template <typename T = void> T CreateExplosionScreenEffectm__3(uintptr_t effect) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EAFE10))(this, effect);
	}
	template <typename T = void> T OpenSettingPanelm__4(Il2CppArray<uintptr_t>* assetId, uintptr_t o) {
		return ((T (*)(GameUIScene*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1EAFEF0))(this, assetId, o);
	}
	template <typename T = void> T CheckSpawnMedkitEffectm__5(uintptr_t effect) {
		return ((T (*)(GameUIScene*, uintptr_t))(Il2CppBase() + 0x1EB000C))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EB0188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EB0190))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GameUIScene*, float))(Il2CppBase() + 0x1EB0198))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EB01A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowMessageBox(Il2CppString* P0, uintptr_t P1, Il2CppString* P2, uintptr_t P3, int32_t P4, bool P5, bool P6, uintptr_t P7, Il2CppString* P8, Il2CppString* P9) {
		return ((T (*)(GameUIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EB01A8))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EB01F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSettlement() {
		return ((T (*)(GameUIScene*))(Il2CppBase() + 0x1EB01FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateCommonTipsCtrl(Il2CppVector3 P0) {
		return ((T (*)(GameUIScene*, Il2CppVector3))(Il2CppBase() + 0x1EB0204))(this, P0);
	}

};

}
