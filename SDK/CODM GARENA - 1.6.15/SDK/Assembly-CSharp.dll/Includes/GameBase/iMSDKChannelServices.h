#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class iMSDKChannelServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "iMSDKChannelServices"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_MSDKConfig() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hsInstance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isHelpShiftLogin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& hsGameObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NoticeContentList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_retryCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_maxRetryCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_partition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_curLanguage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_targetVersion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_func() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_flag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_timeFlag() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = float> T& m_recordTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& m_maxTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsResUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& LOCAL_NOTIFICATION_TITLE_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& DEFAULT_LATENCY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_PushOpen() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _shareType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& send_friend_type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& send_url_target_invite_newbie() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& send_url_target_invite_team() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& send_url_target_recall_friend() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitialzeGCloud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLaunchByPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGCloudLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGcloudLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWebViewCloseCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstallHelpShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HelpShiftLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HelpShiftLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelpWeb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SystemSupportHelpShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelperModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FetchNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VersionNoticeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NoticeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadNoticeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeaconReportAnnouncementResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNoticeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllActiveLocalNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPushEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPushBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPushNotificationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareImg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Debug4Garena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseSendMessageShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareChannelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareTextureRequestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_SilentWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareMiniApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_Silent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForRecall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSendToFriendChannelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendMessageCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMSDKFriendShareImageCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenHelpBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenAppleLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSystemSupportApple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF4D10))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF5858))(this);
	}
	template <typename T = void> T InitialzeGCloud() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF51D8))(this);
	}
	template <typename T = void> T ReportLaunchByPush() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF54FC))(this);
	}
	template <typename T = void> T SetGCloudLogLevel() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF4F10))(this);
	}
	template <typename T = void> T OnGcloudLog(uintptr_t pri, Il2CppString* msg) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EF592C))(this, pri, msg);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF5AC8))(this);
	}
	template <typename T = void> T OnLogin() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF5CFC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(iMSDKChannelServices*, float))(Il2CppBase() + 0x1EF5E50))(this, deltaTime);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(iMSDKChannelServices*, bool))(Il2CppBase() + 0x1EF5FE8))(this, pause);
	}
	template <typename T = void> T OnWebViewCloseCallBack(uintptr_t result) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF60B8))(this, result);
	}
	template <typename T = void> T InstallHelpShift() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF61F0))(this);
	}
	template <typename T = void> T HelpShiftLogin() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF64C0))(this);
	}
	template <typename T = void> T HelpShiftLogout() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF6588))(this);
	}
	template <typename T = void> T ShowHelpWeb() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF6650))(this);
	}
	template <typename T = bool> T SystemSupportHelpShift() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF67D8))(this);
	}
	template <typename T = void> T ShowHelperModule(uintptr_t ipu, uintptr_t type, Il2CppString* publishid) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EF6BB0))(this, ipu, type, publishid);
	}
	template <typename T = void> T FetchNotice() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF55C4))(this);
	}
	template <typename T = void> T VersionNoticeReq(Il2CppString* resVersion, uintptr_t func) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EF6C9C))(this, resVersion, func);
	}
	template <typename T = void> T NoticeReq() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF6DB0))(this);
	}
	template <typename T = void> T OnLoadNoticeCallback(uintptr_t result) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF7718))(this, result);
	}
	template <typename T = void> T BeaconReportAnnouncementResult(uintptr_t result) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF7D30))(this, result);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNoticeList() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF7EA8))(this);
	}
	template <typename T = void> T AddLocalNotification(uint32_t offsetSecondsFromNow, Il2CppString* eventType, Il2CppString* title, Il2CppString* content) {
		return ((T (*)(iMSDKChannelServices*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EF8180))(this, offsetSecondsFromNow, eventType, title, content);
	}
	template <typename T = void> T CancelAllActiveLocalNotifications() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF8664))(this);
	}
	template <typename T = void> T CheckEnableNotification() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF8758))(this);
	}
	template <typename T = void> T OpenURL(Il2CppString* url, bool innerBrowser) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, bool))(Il2CppBase() + 0x1EF8820))(this, url, innerBrowser);
	}
	template <typename T = void> T SetPushEnable(bool enable) {
		return ((T (*)(iMSDKChannelServices*, bool))(Il2CppBase() + 0x1EF89AC))(this, enable);
	}
	template <typename T = void> T OnPushBaseRetEvent(uintptr_t baseRet) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF8E78))(this, baseRet);
	}
	template <typename T = void> T OnPushNotificationEvent(uintptr_t pushRet) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF915C))(this, pushRet);
	}
	template <typename T = void> T RegisterPush() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF8AC8))(this);
	}
	template <typename T = void> T UnregisterPush() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EF8CD4))(this);
	}
	template <typename T = void> T ShareImg(uintptr_t texture, uintptr_t shareTarget, void* callback) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1EF92CC))(this, texture, shareTarget, callback);
	}
	template <typename T = void> static T Debug4Garena(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EF99EC))(0, path);
	}
	template <typename T = bool> static T IsUseSendMessageShare(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EF9B30))(0, target);
	}
	template <typename T = Il2CppString*> T GetShareChannelString(uintptr_t shareTarget) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EF9690))(this, shareTarget);
	}
	template <typename T = uintptr_t> T GetShareTextureRequestInfo(Il2CppString* texturePath, uintptr_t shareTarget) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EF97CC))(this, texturePath, shareTarget);
	}
	template <typename T = void> T ShareArk(Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EF9C5C))(this, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_SilentWX(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EF9E30))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T ShareMiniApp(Il2CppString* title, Il2CppString* desc, Il2CppString* openID, Il2CppString* imagepath, Il2CppString* thumbpath, Il2CppString* url, Il2CppString* extraJson, Il2CppString* mediaPath, void* callback) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFA10C))(this, title, desc, openID, imagepath, thumbpath, url, extraJson, mediaPath, callback);
	}
	template <typename T = void> T SendInvitation(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFA338))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_Silent(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFA614))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendToFriendPackage(uintptr_t sendTarget, Il2CppString* title, Il2CppString* content, Il2CppArray<uintptr_t>* imgData, Il2CppDictionary<Il2CppString*, Il2CppString*>* arguments) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1EFA89C))(this, sendTarget, title, content, imgData, arguments);
	}
	template <typename T = void> T SendToFriendURL(uintptr_t sendTarget, Il2CppString* URL, Il2CppString* mediaTag) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EFB0F0))(this, sendTarget, URL, mediaTag);
	}
	template <typename T = void> T SendToFriendURLForInviteNewbie(uintptr_t sendTarget, Il2CppString* URL) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFB830))(this, sendTarget, URL);
	}
	template <typename T = void> T SendToFriendURLForInviteTeam(uintptr_t sendTarget, Il2CppString* URL) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFB9A0))(this, sendTarget, URL);
	}
	template <typename T = void> T SendToFriendURLForInvite(uintptr_t sendTarget, Il2CppString* URL) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFBB10))(this, sendTarget, URL);
	}
	template <typename T = void> T SendToFriendURLForRecall(uintptr_t sendTarget, Il2CppString* URL) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFBC80))(this, sendTarget, URL);
	}
	template <typename T = Il2CppString*> static T GetSendToFriendChannelString(uintptr_t sendTarget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EFAF58))(0, sendTarget);
	}
	template <typename T = void> T OnFriendMessageCallBack(uintptr_t result) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EFBDF0))(this, result);
	}
	template <typename T = void> T OnMSDKFriendShareImageCallback(uintptr_t result) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t))(Il2CppBase() + 0x1EFC34C))(this, result);
	}
	template <typename T = bool> static T IsOpenHelpBtn() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EFC734))(0);
	}
	template <typename T = bool> static T IsOpenAppleLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EFC8EC))(0);
	}
	template <typename T = bool> static T IsSystemSupportApple() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EFCA08))(0);
	}
	template <typename T = int32_t> static T OnLoadNoticeCallbackm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EFCC48))(0, x, y);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCCB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCCBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCCC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLogin() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCCCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(iMSDKChannelServices*, float))(Il2CppBase() + 0x1EFCCD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(iMSDKChannelServices*, bool))(Il2CppBase() + 0x1EFCCDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowHelperModule(uintptr_t P0, uintptr_t P1, Il2CppString* P2) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFCCE4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_VersionNoticeReq(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EFCD04))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetNoticeList() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCD0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddLocalNotification(uint32_t P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3) {
		return ((T (*)(iMSDKChannelServices*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EFCD14))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_CancelAllActiveLocalNotifications() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCD38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckEnableNotification() {
		return ((T (*)(iMSDKChannelServices*))(Il2CppBase() + 0x1EFCD40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenURL(Il2CppString* P0, bool P1) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, bool))(Il2CppBase() + 0x1EFCD48))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetPushEnable(bool P0) {
		return ((T (*)(iMSDKChannelServices*, bool))(Il2CppBase() + 0x1EFCD50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShareImg(uintptr_t P0, uintptr_t P1, void* P2) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1EFCD58))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ShareArk(Il2CppString* P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3, Il2CppString* P4, void* P5) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFCD78))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_SendInvitation_SilentWX(uintptr_t P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3, Il2CppString* P4, Il2CppString* P5, Il2CppString* P6, void* P7) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFCDAC))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_ShareMiniApp(Il2CppString* P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3, Il2CppString* P4, Il2CppString* P5, Il2CppString* P6, Il2CppString* P7, void* P8) {
		return ((T (*)(iMSDKChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFCDF0))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T xLuaBaseProxy_SendInvitation(uintptr_t P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3, Il2CppString* P4, Il2CppString* P5, Il2CppString* P6, void* P7) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFCE3C))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_SendInvitation_Silent(uintptr_t P0, Il2CppString* P1, Il2CppString* P2, Il2CppString* P3, Il2CppString* P4, Il2CppString* P5, Il2CppString* P6, void* P7) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1EFCE80))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_SendToFriendPackage(uintptr_t P0, Il2CppString* P1, Il2CppString* P2, Il2CppArray<uintptr_t>* P3, Il2CppDictionary<Il2CppString*, Il2CppString*>* P4) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1EFCEC4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_SendToFriendURLForInviteNewbie(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFCEF0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SendToFriendURLForInviteTeam(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFCEF8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SendToFriendURLForInvite(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFCF00))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SendToFriendURLForRecall(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(iMSDKChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EFCF08))(this, P0, P1);
	}

};

}
