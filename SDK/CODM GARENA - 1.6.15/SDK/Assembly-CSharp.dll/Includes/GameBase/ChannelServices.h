#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ChannelServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ChannelServices"));
	}

	template <typename T = uintptr_t> T& channel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& kEmptyCoreUserID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kEmptyInstallID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kEmptySessionID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Prefix_Invite_Team() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_QQGameCenterUrlFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& Key_Package_TargetUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_Package_ImgUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_Package_MediaTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_Package_Scene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_Package_MessageExt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_TargetURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_ImgURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_PreviewText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_GameTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_QQAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_BackEnd_WeChatMediaId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_isHandlingScreenShot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateChannelService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInGameStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommitTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelpShiftWeb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelperModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllActiveLocalNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableNotificationService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEverAskedForNotificationPermission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotificationPermissionGranted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNotificationPermissionGrantedResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPrologueStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelNoticeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersionNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCoreUserID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstallID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSessionID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareImg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareMiniApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_Silent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_SilentWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QQGameCenterUrlFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForRecall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendBackend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintPushDeviceToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPushEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserDoScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C668D4))(this);
	}
	template <typename T = uintptr_t> T CreateChannelService() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C66A10))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C66B70))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C66CA0))(this);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C66DD0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ChannelServices*, float))(Il2CppBase() + 0x3C66F00))(this, deltaTime);
	}
	template <typename T = void> T OnApplicationPause(bool isPause) {
		return ((T (*)(ChannelServices*, bool))(Il2CppBase() + 0x3C6704C))(this, isPause);
	}
	template <typename T = bool> static T get_IsCNVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C6722C))(0);
	}
	template <typename T = bool> static T get_IsWesternVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C672E8))(0);
	}
	template <typename T = uintptr_t> T GetService() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x334BD7C))(this);
	}
	template <typename T = void> T SetInGameStatus(bool inGamePlay) {
		return ((T (*)(ChannelServices*, bool))(Il2CppBase() + 0x3C672FC))(this, inGamePlay);
	}
	template <typename T = void> T CommitTransaction(Il2CppString* transactionID) {
		return ((T (*)(ChannelServices*, Il2CppString*))(Il2CppBase() + 0x3C6739C))(this, transactionID);
	}
	template <typename T = void> T QueryBalance() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C674D8))(this);
	}
	template <typename T = bool> T ShowHelpShiftWeb() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C67608))(this);
	}
	template <typename T = void> T ShowHelperModule(uintptr_t isPaidUser, uintptr_t type, Il2CppString* publishid) {
		return ((T (*)(ChannelServices*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C67944))(this, isPaidUser, type, publishid);
	}
	template <typename T = void> T AddLocalNotification(uint32_t offsetSecondsFromNow, Il2CppString* eventType, Il2CppString* title, Il2CppString* content) {
		return ((T (*)(ChannelServices*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3C67B0C))(this, offsetSecondsFromNow, eventType, title, content);
	}
	template <typename T = void> T CancelAllActiveLocalNotifications() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C67CDC))(this);
	}
	template <typename T = void> T EnableNotificationService() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C67E6C))(this);
	}
	template <typename T = bool> T HasEverAskedForNotificationPermission() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C67FFC))(this);
	}
	template <typename T = bool> T IsNotificationPermissionGranted() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C68110))(this);
	}
	template <typename T = void> T SetNotificationPermissionGrantedResult(bool result) {
		return ((T (*)(ChannelServices*, bool))(Il2CppBase() + 0x3C68230))(this, result);
	}
	template <typename T = void> T ReportPrologueStep(uintptr_t info) {
		return ((T (*)(ChannelServices*, uintptr_t))(Il2CppBase() + 0x3C6849C))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChannelNoticeList() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C685E0))(this);
	}
	template <typename T = void> T GetVersionNotice(Il2CppString* resVersion, uintptr_t func) {
		return ((T (*)(ChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3C68710))(this, resVersion, func);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChannelNotice(uintptr_t noticeType) {
		return ((T (*)(ChannelServices*, uintptr_t))(Il2CppBase() + 0x3C68868))(this, noticeType);
	}
	template <typename T = Il2CppString*> T GetCoreUserID() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C68AAC))(this);
	}
	template <typename T = Il2CppString*> T GetInstallID() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C68BDC))(this);
	}
	template <typename T = Il2CppString*> T GetSessionID() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C68D80))(this);
	}
	template <typename T = void> T ShareImg(uintptr_t texture, uintptr_t shareTarget, void* callback) {
		return ((T (*)(ChannelServices*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x3C68F24))(this, texture, shareTarget, callback);
	}
	template <typename T = void> T ShareUrl(Il2CppString* url, uintptr_t shareTarget, void* callback) {
		return ((T (*)(ChannelServices*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x3C690B4))(this, url, shareTarget, callback);
	}
	template <typename T = void> T ShareArk(Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(ChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x3C69244))(this, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T ShareMiniApp(Il2CppString* title, Il2CppString* desc, Il2CppString* openID, Il2CppString* imagepath, Il2CppString* thumbpath, Il2CppString* url, Il2CppString* extraJson, Il2CppString* mediaPath, void* callback) {
		return ((T (*)(ChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x3C693F8))(this, title, desc, openID, imagepath, thumbpath, url, extraJson, mediaPath, callback);
	}
	template <typename T = void> T SendInvitation(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x3C695D0))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_Silent(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x3C697A4))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_SilentWX(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x3C69978))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = Il2CppString*> T QQGameCenterUrlFormat(Il2CppString* parm1) {
		return ((T (*)(ChannelServices*, Il2CppString*))(Il2CppBase() + 0x3C69B4C))(this, parm1);
	}
	template <typename T = Il2CppString*> T get_QQGameCenterDeviceName() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C69CB8))(this);
	}
	template <typename T = void> T SendToFriendPackage(uintptr_t sendTarget, Il2CppString* title, Il2CppString* content, Il2CppArray<uintptr_t>* imgData, Il2CppDictionary<Il2CppString*, Il2CppString*>* argumentDic) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x3C69D68))(this, sendTarget, title, content, imgData, argumentDic);
	}
	template <typename T = void> T SendToFriendURLForRecall(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C69ED8))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInviteNewbie(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C6A028))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInviteTeam(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C6A178))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInvite(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3C6A2C8))(this, sendTarget, url);
	}
	template <typename T = bool> T SendToFriendBackend(uintptr_t sendTarget, Il2CppString* uniqueId, Il2CppString* title, Il2CppString* content, Il2CppDictionary<Il2CppString*, Il2CppString*>* argumentDic) {
		return ((T (*)(ChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x3C6A418))(this, sendTarget, uniqueId, title, content, argumentDic);
	}
	template <typename T = void> T OnLogin() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C6A58C))(this);
	}
	template <typename T = void> T PrintPushDeviceToken() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C6A6BC))(this);
	}
	template <typename T = void> T SetPushEnable(bool enable) {
		return ((T (*)(ChannelServices*, bool))(Il2CppBase() + 0x3C6A754))(this, enable);
	}
	template <typename T = void> T OpenURL(Il2CppString* url, bool innerBrowser) {
		return ((T (*)(ChannelServices*, Il2CppString*, bool))(Il2CppBase() + 0x3C677EC))(this, url, innerBrowser);
	}
	template <typename T = void> T GetLocation(void* callback) {
		return ((T (*)(ChannelServices*, void*))(Il2CppBase() + 0x3C6A890))(this, callback);
	}
	template <typename T = void> T UserDoScreenShot() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C6AA18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C6AAB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ChannelServices*))(Il2CppBase() + 0x3C6AAB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ChannelServices*, float))(Il2CppBase() + 0x3C6AAC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(ChannelServices*, bool))(Il2CppBase() + 0x3C6AAC8))(this, P0);
	}

};

}
