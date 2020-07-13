#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FrontEndUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FrontEndUIScene"));
	}

	template <typename T = uintptr_t> T& m_NavigationController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_MainUIController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CameraClear() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_BackGroundUIController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_AvatarController_Character() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_AvatarController_Weapon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_AvatarController_Squad() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mCommonAvatarController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mAvatarWinnerCircleController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_TutorialController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_VoiceRecordController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_CommonReceiveTipCtr() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& ControllerCloseAnimationSound() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& ControllerOpenAnimationSound() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& PRELOAD_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CurrentNaviUIController() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsMatching() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_SquadTeamCamera() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_UIMainCamera() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& defaultCameraClearPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CamraClear() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_PreloadCoroutine() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_ShouldContinuePreloading() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& shopDS() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> static T& m_IsForcePopUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mItemTimeoutTimer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mRankActvTimeoutTimer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mAdvertisingTimeoutTimer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_EnableFlag() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_CloseNavigationCallback() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_CloseNavigationCallbackController() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& sendAskTeamTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& sendAskInterval() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<void*>*> T& rewardQueue() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& isdownloadPop() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_shopRenewtime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_shopRenewAccmulatetime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFuncBlockGetReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSomeThingOnUISceneInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForcePopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPandoraFirstEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowForcePopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectToBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPausePreloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinuePreloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeoutItemTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeoutImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNextTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeoutRankActvTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActvRankedMatchInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeoutAdvertisingTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdvertisingInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLobbyBackGroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraClearEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraClearEnableFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarControllerCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonAvatarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarControllerWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDownWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWinnerCircleAvatarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAvatarControllerWeaponOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBackGroundSizeAdaptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNavigationCloseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNavigationInCacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopNavigationCloseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationCloseFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentNavigationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCampIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushCodLiveOpsNav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassActivityOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyServerReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyStartFailedNoMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelfInNoMapList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAskDownloadDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelfToDownloadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AskTeamToDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAskToTeamDownloadConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginGenericDownloadByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDynamicDownloadByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateRewardQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayToCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAccumateRechargeReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySingleRechargeReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFirstRechargeReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterRechargeReawardQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_EnterRechargeReawardQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRewardQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLobbyGetServerInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemDownloadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemGenericDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemDynamicDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemCancelDownloadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemGenericCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemDynamicCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadMapByQuestId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelDownloadMapByQuestId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadProgressUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendClientMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientDownloadedQuestIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDynamicDwonloadedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendDynamicClientMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGenericDownloadedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGenericClientMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendOTOInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLimitofferReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSetDefaultCallingCardReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendDownloadMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNavigationToRootExceptCurrent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOWindowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFirstRechargeWindowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferInitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGamepadStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClearCameraParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClearCameraParamDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShopItemRenewTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipPopUpsForTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}

	template <typename T = uintptr_t> T get_MainUIController() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36777D8))(this);
	}
	template <typename T = uintptr_t> T get_CommonReceiveTipCtr() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36777E0))(this);
	}
	template <typename T = void> T set_CurrentNaviUIController(uintptr_t value) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36777E8))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentNaviUIController() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36777F0))(this);
	}
	template <typename T = bool> T get_IsMatching() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36777F8))(this);
	}
	template <typename T = void> T set_IsMatching(bool value) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x3677800))(this, value);
	}
	template <typename T = uintptr_t> T get_SquadTeamCamera() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3677808))(this);
	}
	template <typename T = uintptr_t> T get_UIMainCamera() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36778C0))(this);
	}
	template <typename T = uintptr_t> T get_CameraClear() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3677A24))(this);
	}
	template <typename T = bool> T get_IsInSettlement() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3677BFC))(this);
	}
	template <typename T = bool> T get_IsInSettlementBP() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3677DC0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3677E8C))(this);
	}
	template <typename T = void> T SendFuncBlockGetReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3678D50))(this);
	}
	template <typename T = void> T TlogProcess() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36794D0))(this);
	}
	template <typename T = void> T InitGVoice() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3679178))(this);
	}
	template <typename T = void> T DoSomeThingOnUISceneInited() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36792A8))(this);
	}
	template <typename T = bool> static T get_IsForcePopUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x36799CC))(0);
	}
	template <typename T = void> T CheckForcePopup() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3679A7C))(this);
	}
	template <typename T = void> T CheckShowDelay() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367A1F8))(this);
	}
	template <typename T = bool> T CheckPandoraFirstEndGame() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367A3F4))(this);
	}
	template <typename T = void> T ShowForcePopup() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3679C14))(this);
	}
	template <typename T = void> T ReconnectToBR(uintptr_t result, int32_t userContext) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x367A4C4))(this, result, userContext);
	}
	template <typename T = void> T OnPausePreloading(uintptr_t Msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x367AAF0))(this, Msg);
	}
	template <typename T = void> T OnContinuePreloading(uintptr_t Msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x367ABCC))(this, Msg);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367ACA8))(this);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367AE9C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367C03C))(this);
	}
	template <typename T = void> T T_Shutdown() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367C394))(this);
	}
	template <typename T = void> T ResetTimeoutItemTimer() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367C4C0))(this);
	}
	template <typename T = void> T CheckTimeoutImpl() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367C9CC))(this);
	}
	template <typename T = void> T CheckNextTimeout() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3678F54))(this);
	}
	template <typename T = void> T ResetTimeoutRankActvTimer() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367CB08))(this);
	}
	template <typename T = void> T ActvRankedMatchInfoReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367CD34))(this);
	}
	template <typename T = void> T ResetTimeoutAdvertisingTimer(int32_t timeoutTimer) {
		return ((T (*)(FrontEndUIScene*, int32_t))(Il2CppBase() + 0x367CE70))(this, timeoutTimer);
	}
	template <typename T = void> T AdvertisingInfoReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367CFE0))(this);
	}
	template <typename T = void> T ShowNone(bool bShow) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367D11C))(this, bShow);
	}
	template <typename T = void> T ResetLobbyBackGroundTexture(bool enableCamerClear, Il2CppString* src, bool needReset) {
		return ((T (*)(FrontEndUIScene*, bool, Il2CppString*, bool))(Il2CppBase() + 0x367D63C))(this, enableCamerClear, src, needReset);
	}
	template <typename T = void> T SetCameraClearEnable(bool enable) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367D834))(this, enable);
	}
	template <typename T = void> T SetCameraClearEnableFlag(bool bEnableFlag) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367D9C4))(this, bEnableFlag);
	}
	template <typename T = void> T ShowCharacter(bool bShow, bool bUseRankLight) {
		return ((T (*)(FrontEndUIScene*, bool, bool))(Il2CppBase() + 0x367DAB8))(this, bShow, bUseRankLight);
	}
	template <typename T = uintptr_t> T GetAvatarControllerCharacter() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367DCA0))(this);
	}
	template <typename T = void> T ShowSquad(bool bShow) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367DE54))(this, bShow);
	}
	template <typename T = void> T ShowCommonAvatar(bool bShow, bool bShowEffect, bool closeOtherScene, uintptr_t uiType) {
		return ((T (*)(FrontEndUIScene*, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x367E018))(this, bShow, bShowEffect, closeOtherScene, uiType);
	}
	template <typename T = uintptr_t> T GetCommonAvatarController() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367E1FC))(this);
	}
	template <typename T = uintptr_t> T GetAvatarControllerWeapon() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367E2CC))(this);
	}
	template <typename T = void> T ShowWinnerCircleAvatar(bool bShow) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367E468))(this, bShow);
	}
	template <typename T = void> T ShutDownWinnerCircleAvatar() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367E62C))(this);
	}
	template <typename T = uintptr_t> T GetWinnerCircleAvatarController() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367E71C))(this);
	}
	template <typename T = bool> T IsAvatarControllerWeaponOpen() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367E7EC))(this);
	}
	template <typename T = void> T ShowWeapon(bool bShow, bool bShowSpecialScene, uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, bool, bool, uintptr_t))(Il2CppBase() + 0x367E8C4))(this, bShow, bShowSpecialScene, data);
	}
	template <typename T = void> T OpenNavigation(uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x367EC4C))(this, data);
	}
	template <typename T = void> T CloseBackGroundSizeAdaptor(bool isClose) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367F0C0))(this, isClose);
	}
	template <typename T = void> T PushNavigation(uintptr_t data, bool force) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, bool))(Il2CppBase() + 0x1E7D280))(this, data, force);
	}
	template <typename T = void> T PushNavigationCloseCallback(uintptr_t lastData, uintptr_t controller) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x367F1A8))(this, lastData, controller);
	}
	template <typename T = bool> T IsNavigationInCacheList(uintptr_t t) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3677CC8))(this, t);
	}
	template <typename T = bool> T PopToLobby() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367FB74))(this);
	}
	template <typename T = bool> T PopNavigation(bool toTop) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x367B888))(this, toTop);
	}
	template <typename T = void> T RefreshNavigation() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367F850))(this);
	}
	template <typename T = void> T OnPopNavigationCloseCallback(uintptr_t lastData, uintptr_t controller) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3680200))(this, lastData, controller);
	}
	template <typename T = void> T OnNavigationShowed() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x367F95C))(this);
	}
	template <typename T = uintptr_t> T CloseNavigationController(uintptr_t data, uintptr_t callback, uintptr_t callbackController) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x367FDB8))(this, data, callback, callbackController);
	}
	template <typename T = void> T OnNavigationCloseFinishCallback(uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36803C8))(this, data);
	}
	template <typename T = uintptr_t> T GetNavigationController(uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x367EF10))(this, data);
	}
	template <typename T = uintptr_t> T CreateNavigationController(uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x1B6F0DC))(this, data);
	}
	template <typename T = uintptr_t> T CreateNavigationController_1(uintptr_t data) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x368077C))(this, data);
	}
	template <typename T = void> T ShutdownNavigationController(uintptr_t data, bool bForcePop) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, bool))(Il2CppBase() + 0x367FC4C))(this, data, bForcePop);
	}
	template <typename T = bool> T ShutdownWindowController(Il2CppString* controllerTypeFullName, int32_t userContext, bool bForcePop) {
		return ((T (*)(FrontEndUIScene*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x3680A10))(this, controllerTypeFullName, userContext, bForcePop);
	}
	template <typename T = uintptr_t> T GetCurrentNavigationData() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3680C70))(this);
	}
	template <typename T = void> T ShowMessageBox(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(FrontEndUIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3680D58))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText);
	}
	template <typename T = void> T HideCampIcon() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3680ED8))(this);
	}
	template <typename T = void> T PushCodLiveOpsNav(bool popUp) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x3681078))(this, popUp);
	}
	template <typename T = void> T OnNotifyBattlePassActivityOpen(uintptr_t msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3681358))(this, msg);
	}
	template <typename T = void> T OnNotifyServerReward(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3681718))(this, obj);
	}
	template <typename T = void> T OnNotifyStartFailedNoMapId(uintptr_t msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3681E30))(this, msg);
	}
	template <typename T = void> T CheckSelfInNoMapList(Il2CppList<uint64_t>* playerList) {
		return ((T (*)(FrontEndUIScene*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x3681FB4))(this, playerList);
	}
	template <typename T = void> T ShowAskDownloadDialog(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3682844))(this, mapId);
	}
	template <typename T = void> T CheckSelfToDownloadMap(uintptr_t msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3683084))(this, msg);
	}
	template <typename T = void> T AskTeamToDownload(uintptr_t msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3683388))(this, msg);
	}
	template <typename T = void> T OnAskToTeamDownloadConfirm(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3683868))(this, mapId);
	}
	template <typename T = void> T BeginDownloadByMapId(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3683B10))(this, mapId);
	}
	template <typename T = void> T BeginGenericDownloadByMapId(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3683CC4))(this, mapId);
	}
	template <typename T = void> T BeginDynamicDownloadByMapId(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3683EE4))(this, mapId);
	}
	template <typename T = void> T OnNotifyUpdateRewardQueue(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36842BC))(this, obj);
	}
	template <typename T = uintptr_t> T DelayToCheck() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3684418))(this);
	}
	template <typename T = void> T OnNotifyAccumateRechargeReward(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3684530))(this, obj);
	}
	template <typename T = void> T OnNotifySingleRechargeReward(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3684830))(this, obj);
	}
	template <typename T = void> T OnNotifyFirstRechargeReward(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36849C0))(this, obj);
	}
	template <typename T = void> T EnterRechargeReawardQueue(uintptr_t reward, int32_t style) {
		return ((T (*)(FrontEndUIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x36846C0))(this, reward, style);
	}
	template <typename T = void> T EnterRechargeReawardQueue_1(Il2CppList<uintptr_t>* rewards, int32_t style) {
		return ((T (*)(FrontEndUIScene*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x36818D0))(this, rewards, style);
	}
	template <typename T = void> T CheckRewardQueue() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3684D74))(this);
	}
	template <typename T = void> T ShowReward(Il2CppList<uintptr_t>* rewards, int32_t rewardStyle) {
		return ((T (*)(FrontEndUIScene*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x3684B50))(this, rewards, rewardStyle);
	}
	template <typename T = void> T SendLobbyGetServerInfoReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3684F5C))(this);
	}
	template <typename T = void> T OnMapItemDownloadClick(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x368508C))(this, obj);
	}
	template <typename T = void> T OnMapItemGenericDownload(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3685274))(this, mapId);
	}
	template <typename T = void> T OnMapItemDynamicDownload(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3685418))(this, mapId);
	}
	template <typename T = void> T OnMapItemCancelDownloadClick(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3685690))(this, obj);
	}
	template <typename T = void> T OnMapItemGenericCancel(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3685878))(this, mapId);
	}
	template <typename T = void> T OnMapItemDynamicCancel(uint32_t mapId) {
		return ((T (*)(FrontEndUIScene*, uint32_t))(Il2CppBase() + 0x3685A18))(this, mapId);
	}
	template <typename T = void> T OnDownloadMapByQuestId(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3685BE0))(this, obj);
	}
	template <typename T = void> T OnCancelDownloadMapByQuestId(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3685F50))(this, obj);
	}
	template <typename T = void> T OnDownloadFinished(int32_t questId, bool success) {
		return ((T (*)(FrontEndUIScene*, int32_t, bool))(Il2CppBase() + 0x3686220))(this, questId, success);
	}
	template <typename T = void> T OnDownloadProgressUpdate(int32_t questId, uint64_t nowSize, uint64_t totalSize, uint64_t wholeSize) {
		return ((T (*)(FrontEndUIScene*, int32_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x36865E0))(this, questId, nowSize, totalSize, wholeSize);
	}
	template <typename T = void> T SendClientMapInfo() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3686498))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetClientDownloadedQuestIDs() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3686B5C))(this);
	}
	template <typename T = void> T RequestCallingCardInfo(Il2CppList<uint64_t>* playerIDs) {
		return ((T (*)(FrontEndUIScene*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x36878A0))(this, playerIDs);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetDynamicDwonloadedInfo() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3687220))(this);
	}
	template <typename T = void> T SendDynamicClientMapInfo() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x368698C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetGenericDownloadedInfo() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3686CA4))(this);
	}
	template <typename T = void> T SendGenericClientMapInfo() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36867BC))(this);
	}
	template <typename T = void> T SendOTOInfoReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3687BF8))(this);
	}
	template <typename T = void> T SendLimitofferReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3687D28))(this);
	}
	template <typename T = void> T SendSetDefaultCallingCardReq() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3687E58))(this);
	}
	template <typename T = void> T SendDownloadMapState(bool isBeginDownload) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x3684160))(this, isBeginDownload);
	}
	template <typename T = void> T RemoveNavigationToRootExceptCurrent() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36881DC))(this);
	}
	template <typename T = void> T OnOTOWindowClose(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36882C8))(this, obj);
	}
	template <typename T = void> T OnFirstRechargeWindowClose(uintptr_t obj) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x36883EC))(this, obj);
	}
	template <typename T = void> T OnPufferInitCallBack(bool success, uint32_t errorCode) {
		return ((T (*)(FrontEndUIScene*, bool, uint32_t))(Il2CppBase() + 0x3688510))(this, success, errorCode);
	}
	template <typename T = void> T OnNotifyGamepadStateChange(uintptr_t msg) {
		return ((T (*)(FrontEndUIScene*, uintptr_t))(Il2CppBase() + 0x3688730))(this, msg);
	}
	template <typename T = void> T LoadAudioBank(bool bLoad) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x3688814))(this, bLoad);
	}
	template <typename T = void> T ChangeClearCameraParam() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3688A28))(this);
	}
	template <typename T = void> T SetClearCameraParamDefault() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x3688C2C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(FrontEndUIScene*, float))(Il2CppBase() + 0x3688DA4))(this, deltaTime);
	}
	template <typename T = void> T ShopItemRenewTick(float deltaTime) {
		return ((T (*)(FrontEndUIScene*, float))(Il2CppBase() + 0x3688EC0))(this, deltaTime);
	}
	template <typename T = void> T SkipPopUpsForTest() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x368901C))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x368912C))(this);
	}
	template <typename T = void> static T DoSomeThingOnUISceneInitedm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3689130))(0);
	}
	template <typename T = void> static T ReconnectToBRm__2() {
		return ((T (*)(void *))(Il2CppBase() + 0x36891FC))(0);
	}
	template <typename T = void> static T CheckNextTimeoutm__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x36892C8))(0);
	}
	template <typename T = int32_t> static T SendSetDefaultCallingCardReqm__4(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3689394))(0, x, y);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36893E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36893E8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36893F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(FrontEndUIScene*))(Il2CppBase() + 0x36893F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowMessageBox(Il2CppString* P0, uintptr_t P1, Il2CppString* P2, uintptr_t P3, int32_t P4, bool P5, bool P6, uintptr_t P7, Il2CppString* P8, Il2CppString* P9) {
		return ((T (*)(FrontEndUIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3689400))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAudioBank(bool P0) {
		return ((T (*)(FrontEndUIScene*, bool))(Il2CppBase() + 0x368944C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(FrontEndUIScene*, float))(Il2CppBase() + 0x3689454))(this, P0);
	}

};

}
