#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BeaconReporter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BeaconReporter"));
	}

	template <typename T = Il2CppString*> static T& kDefaultPlatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kEmptyString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& BHasReportInLobbyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& StartDownApkTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& ConnectLobbyStartTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Event_ParamNameFailCodeDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Event_ParamNameFailCodeInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Event_ParamNameRetries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Event_ParamValueSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Event_ParamValueTrue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_ReportLoginFlowDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& NOT_REPORT_LOGIN_DETAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& REPORT_LOGIN_DETAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& REPORT_LOGIN_DETAIL_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerInfoEvent_LevelChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NetworkEvent_RespTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BootEvent_FirstLaunchSplashTimeCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BootEvent_FirstLaunchResourceUpdateTimeCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_GameStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_SelectServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_InLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_LobbyLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_RegisterComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_PrologueStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_CheckAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LoginEvent_DownloadAPKEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadResourceSucceed_Full() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadResourceSucceed_Lite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_ExtractResourceSucceed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_RepairResourceSucceed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadAPKSucceed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadResourceFailed_Full() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadResourceFailed_Lite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_ExtractResourceFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_RepairResourceFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_DownloadAPKFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_FullResourceUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& UpdateEvent_LiteResourceUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& LitePackEvent_SystemInitResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& LitePackEvent_SystemInitResultReported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppString*> static T& LitePackLoginResDownNetNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& LitePackLoginResDownErrorNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& LitePackLoginResDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& LitePackEvent_DownloadResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppString*> static T& LitePackEvent_GenericDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& Version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppString*> static T& WorldID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppString*> static T& Platform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = Il2CppString*> static T& OpenID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = float> static T& PayDiamondStageRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& ReportPayEventBuyDiamondData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppString*> static T& PayEvent_BuyDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PayEvent_AF_BuyDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PayEvent_BuyProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PayEvent_OpenPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BuyPropRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = Il2CppString*> static T& InGameExperienceEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& ReportInGameExperienceData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = Il2CppString*> static T& Complete_Tutorial_Event() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = Il2CppString*> static T& NewFish_SignPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& beaconReportSignPushData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = Il2CppString*> static T& FtueStepReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FtueCompleteReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AppsFlyer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Firebase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Facebook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DefaultChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& m_sCheckDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = Il2CppString*> static T& AddFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SendExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AcceptFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& beaconReportFriendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& beaconReportActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = Il2CppString*> static T& EventTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EventEngage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& localPushData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = Il2CppString*> static T& EventLocalPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_consider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PP_consider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PP_purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PP_purchase_succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PPP_consider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PPP_purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& buyBP_PPP_purchase_succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& get_tiers_tap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& get_tiers_consider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& get_tiers_purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& get_tiers_purchase_secceed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& game_frame_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& game_frame_login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& game_world_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& game_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ui_root_create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ui_root_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ui_sub_call() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& gcloud_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& cdn_download() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& redirect_platform1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& hotfix1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& check_device() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& graphic_patch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& redirect_platform2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& hotfix2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& hotfix3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& announcement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& announcement_check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& announcement_show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& announcement_result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_screen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_btn_click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& auto_login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_auth_result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_lobbylogin_start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& get_local_token() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& check_pay_token() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_recover_account() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& login_inlobby2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& storeattribution_report() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& lobby_view() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> static T& ReportFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAchieveLevelEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPrologueStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportZoneRespTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportFirstLaunchSplashTimeCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportFirstLaunchResourceUpdateTimeCost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLoginServiceGameStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAccountRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLoginServiceConnectLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLoginServiceCheckAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLoginServiceDownloadAPK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLoginServiceInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconGetProfileFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackEventSystemInitResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackEventLoginResDownNetNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackEventLoginResDownErrorNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackEventLoginResDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackEventDownloadResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGenericDownloadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPayEventBuyDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPayEventBuyDiamondSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyDiamondChannelAndPropID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPayEventBuyProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPayEventOpenDiamondPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBasicEventInfoData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportInGameExperienceEventData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCompleteTutorialFBEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCompleteSignPushEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportFtueStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportFtueComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBeacon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconEventWithoutPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReportBeaconEventWithoutPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconEventWithPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReportBeaconEventWithPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAddFriendsEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReporSendExpFriendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCompleteActivityEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportActivityLocalNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassSeasonClickBuyPassBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormalBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormal_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormal_Purchase_Succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlusBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlus_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlus_Purchase_Succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTiresBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum_Purchase_Succeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGame_Frame_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGame_Frame_Login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGame_World_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGame_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportUI_Root_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportUI_Root_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportUI_Sub_Call() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGCloud_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCDN_Download() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportRedirect_Platform1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportHotfix1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCheck_Device() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGraphic_Patch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportRedirect_Platform2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportHotfix2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportHotfix3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAnnouncement_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAnnouncement_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAnnouncement_Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_Screen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_Btn_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportAuto_Login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_Auth_Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_LobbyLogin_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGet_Local_Token() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportCheck_Pay_Token() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_Recover_Account() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLogin_InLobby2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportStore_Attribution_Report() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLobby_View() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEventWithSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReportFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SavePlayerPrefs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPlatformString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoggedInServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerOpenID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifyReportString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCoreUserID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGarenaID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}

	template <typename T = void> static T ReportAchieveLevelEvent(int32_t previousLvl, int32_t currentLvl) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x373159C))(0, previousLvl, currentLvl);
	}
	template <typename T = void> static T ReportPrologueStep(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373166C))(0, inEventData);
	}
	template <typename T = void> static T ReportZoneRespTimeout(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3731DEC))(0, inEventData);
	}
	template <typename T = void> static T ReportFirstLaunchSplashTimeCost(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3732860))(0, inEventData);
	}
	template <typename T = void> static T ReportFirstLaunchResourceUpdateTimeCost(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3732E60))(0, inEventData);
	}
	template <typename T = void> static T ReportLoginServiceGameStart(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37330C8))(0, inEventData);
	}
	template <typename T = void> static T ReportAccountRegister(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37338E8))(0, inEventData);
	}
	template <typename T = void> static T ReportLoginServiceConnectLobby(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3733D48))(0, inEventData);
	}
	template <typename T = void> static T ReportLoginServiceCheckAppUpdate(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3734160))(0, inEventData);
	}
	template <typename T = void> static T ReportLoginServiceDownloadAPK(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3734440))(0, inEventData);
	}
	template <typename T = void> static T ReportLoginServiceInLobby(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3734720))(0, inEventData);
	}
	template <typename T = void> static T ReportBeaconGetProfileFail(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37349FC))(0, inEventData);
	}
	template <typename T = void> static T ReportLitePackEventSystemInitResult(bool success, uint32_t errorCode) {
		return ((T (*)(void *, bool, uint32_t))(Il2CppBase() + 0x3734C98))(0, success, errorCode);
	}
	template <typename T = void> static T ReportLitePackEventLoginResDownNetNotice(bool sure) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3735254))(0, sure);
	}
	template <typename T = void> static T ReportLitePackEventLoginResDownErrorNotice(bool sure) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x37354B8))(0, sure);
	}
	template <typename T = void> static T ReportLitePackEventLoginResDownResult(bool success) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x373571C))(0, success);
	}
	template <typename T = void> static T ReportLitePackEventDownloadResult(uint32_t successCount, uint32_t errorCount, Il2CppString* errorCodeList, uint64_t speedLimit) {
		return ((T (*)(void *, uint32_t, uint32_t, Il2CppString*, uint64_t))(Il2CppBase() + 0x3735980))(0, successCount, errorCount, errorCodeList, speedLimit);
	}
	template <typename T = void> static T ReportGenericDownloadInfo(Il2CppString* finsihedQuestNames, Il2CppString* network, Il2CppString* playerLevel, Il2CppString* percent) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3735F70))(0, finsihedQuestNames, network, playerLevel, percent);
	}
	template <typename T = void> static T ReportPayEventBuyDiamond() {
		return ((T (*)(void *))(Il2CppBase() + 0x37365CC))(0);
	}
	template <typename T = void> static T ReportPayEventBuyDiamondSuccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x3736D24))(0);
	}
	template <typename T = void> static T SetBuyDiamondChannelAndPropID(Il2CppString* inChannel, Il2CppString* inPropID) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x373726C))(0, inChannel, inPropID);
	}
	template <typename T = void> static T ReportPayEventBuyProp(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37378A8))(0, inEventData);
	}
	template <typename T = void> static T ReportPayEventOpenDiamondPage(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373761C))(0, inEventData);
	}
	template <typename T = void> static T PrepareBasicEventInfoData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3736B84))(0);
	}
	template <typename T = void> static T ReportInGameExperienceEventData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3737D9C))(0);
	}
	template <typename T = void> static T ReportCompleteTutorialFBEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x3737E5C))(0);
	}
	template <typename T = void> static T ReportCompleteSignPushEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x37380B4))(0);
	}
	template <typename T = void> static T ReportFtueStep(uintptr_t ftueStepData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37382A4))(0, ftueStepData);
	}
	template <typename T = void> static T ReportFtueComplete(uintptr_t ftueCompleteData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373836C))(0, ftueCompleteData);
	}
	template <typename T = void> static T InitBeacon() {
		return ((T (*)(void *))(Il2CppBase() + 0x3738504))(0);
	}
	template <typename T = void> static T OnReLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x373897C))(0);
	}
	template <typename T = void> static T ReportBeaconEventWithoutPayload(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3738A3C))(0, eventName);
	}
	template <typename T = void> static T ReportBeaconEventWithoutPayload_1(Il2CppString* eventName, Il2CppString* targetChannel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3738B4C))(0, eventName, targetChannel);
	}
	template <typename T = void> static T ReportBeaconEventWithPayload(Il2CppString* inEventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* inEvents) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x3731CC4))(0, inEventName, inEvents);
	}
	template <typename T = void> static T ReportBeaconEventWithPayload_1(Il2CppString* inEventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* inEvents, Il2CppString* targetChannel) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x37321FC))(0, inEventName, inEvents, targetChannel);
	}
	template <typename T = void> static T ReportAddFriendsEvent(bool isAdd) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3738C98))(0, isAdd);
	}
	template <typename T = void> static T ReporSendExpFriendEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x3738F00))(0);
	}
	template <typename T = void> static T ReportCompleteActivityEvent(bool isEnter) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x37390F0))(0, isEnter);
	}
	template <typename T = void> static T ReportActivityLocalNotification() {
		return ((T (*)(void *))(Il2CppBase() + 0x3739300))(0);
	}
	template <typename T = void> static T ReportBattlePassSeasonClickBuyPassBtn(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373950C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyNormalBtn(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37396AC))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyNormal_Purchase(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373988C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyNormal_Purchase_Succeed(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3739A6C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyPlusBtn(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3739C8C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyPlus_Purchase(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3739E6C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassBuyPlus_Purchase_Succeed(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373A04C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassGetTiresBtn(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373A26C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassGetTires_TireNum(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373A44C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassGetTires_TireNum_Purchase(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373A68C))(0, inEventData);
	}
	template <typename T = void> static T ReportBattlePassGetTires_TireNum_Purchase_Succeed(uintptr_t inEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373A8CC))(0, inEventData);
	}
	template <typename T = void> static T ReportGame_Frame_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x373AB0C))(0);
	}
	template <typename T = void> static T ReportGame_Frame_Login() {
		return ((T (*)(void *))(Il2CppBase() + 0x373AC30))(0);
	}
	template <typename T = void> static T ReportGame_World_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x373AD54))(0);
	}
	template <typename T = void> static T ReportGame_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x373AE78))(0);
	}
	template <typename T = void> static T ReportUI_Root_Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x373AF9C))(0);
	}
	template <typename T = void> static T ReportUI_Root_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B0C0))(0);
	}
	template <typename T = void> static T ReportUI_Sub_Call() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B1E4))(0);
	}
	template <typename T = void> static T ReportGCloud_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B308))(0);
	}
	template <typename T = void> static T ReportCDN_Download() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B42C))(0);
	}
	template <typename T = void> static T ReportRedirect_Platform1() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B550))(0);
	}
	template <typename T = void> static T ReportHotfix1() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B674))(0);
	}
	template <typename T = void> static T ReportCheck_Device() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B798))(0);
	}
	template <typename T = void> static T ReportGraphic_Patch() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B8BC))(0);
	}
	template <typename T = void> static T ReportRedirect_Platform2() {
		return ((T (*)(void *))(Il2CppBase() + 0x373B9E0))(0);
	}
	template <typename T = void> static T ReportHotfix2() {
		return ((T (*)(void *))(Il2CppBase() + 0x373BB04))(0);
	}
	template <typename T = void> static T ReportHotfix3() {
		return ((T (*)(void *))(Il2CppBase() + 0x373BC28))(0);
	}
	template <typename T = void> static T ReportAnnouncement() {
		return ((T (*)(void *))(Il2CppBase() + 0x373BD4C))(0);
	}
	template <typename T = void> static T ReportAnnouncement_Check() {
		return ((T (*)(void *))(Il2CppBase() + 0x373BE70))(0);
	}
	template <typename T = void> static T ReportAnnouncement_Show() {
		return ((T (*)(void *))(Il2CppBase() + 0x373BF94))(0);
	}
	template <typename T = void> static T ReportAnnouncement_Result(int32_t result) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x373C0B8))(0, result);
	}
	template <typename T = void> static T ReportLogin_Screen() {
		return ((T (*)(void *))(Il2CppBase() + 0x373C278))(0);
	}
	template <typename T = void> static T ReportLogin_Btn_Click(Il2CppString* loginChannel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x373C39C))(0, loginChannel);
	}
	template <typename T = void> static T ReportAuto_Login() {
		return ((T (*)(void *))(Il2CppBase() + 0x373C554))(0);
	}
	template <typename T = void> static T ReportLogin_Auth_Result(int32_t result, Il2CppString* channel, Il2CppString* openid) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x373C678))(0, result, channel, openid);
	}
	template <typename T = void> static T ReportLogin_LobbyLogin_Start() {
		return ((T (*)(void *))(Il2CppBase() + 0x373C894))(0);
	}
	template <typename T = void> static T ReportGet_Local_Token() {
		return ((T (*)(void *))(Il2CppBase() + 0x373C9B8))(0);
	}
	template <typename T = void> static T ReportCheck_Pay_Token() {
		return ((T (*)(void *))(Il2CppBase() + 0x373CADC))(0);
	}
	template <typename T = void> static T ReportLogin_Recover_Account() {
		return ((T (*)(void *))(Il2CppBase() + 0x373CC00))(0);
	}
	template <typename T = void> static T ReportLogin_InLobby2() {
		return ((T (*)(void *))(Il2CppBase() + 0x373CD24))(0);
	}
	template <typename T = void> static T ReportStore_Attribution_Report() {
		return ((T (*)(void *))(Il2CppBase() + 0x373CE48))(0);
	}
	template <typename T = void> static T ReportLobby_View() {
		return ((T (*)(void *))(Il2CppBase() + 0x373CF6C))(0);
	}
	template <typename T = void> static T ReportEventWithSwitch(Il2CppString* eventName, Il2CppString* targetChannel, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventData) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x3732AC8))(0, eventName, targetChannel, eventData);
	}
	template <typename T = void> static T InitReportFlags() {
		return ((T (*)(void *))(Il2CppBase() + 0x37386E0))(0);
	}
	template <typename T = void> static T SavePlayerPrefs(bool ReportLoginDetail) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x373D090))(0, ReportLoginDetail);
	}
	template <typename T = Il2CppString*> static T GetPlayerPlatformString() {
		return ((T (*)(void *))(Il2CppBase() + 0x3737B94))(0);
	}
	template <typename T = Il2CppString*> static T GetLoggedInServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x3734028))(0);
	}
	template <typename T = Il2CppString*> static T GetPlayerOpenID() {
		return ((T (*)(void *))(Il2CppBase() + 0x37320D4))(0);
	}
	template <typename T = void> static T VerifyReportString(uintptr_t inString) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x373D188))(0, inString);
	}
	template <typename T = Il2CppString*> static T GetCoreUserID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3731BC0))(0);
	}
	template <typename T = Il2CppString*> static T GetGarenaID() {
		return ((T (*)(void *))(Il2CppBase() + 0x3733424))(0);
	}
	template <typename T = Il2CppString*> static T GetPlatformString() {
		return ((T (*)(void *))(Il2CppBase() + 0x373365C))(0);
	}

};

}
