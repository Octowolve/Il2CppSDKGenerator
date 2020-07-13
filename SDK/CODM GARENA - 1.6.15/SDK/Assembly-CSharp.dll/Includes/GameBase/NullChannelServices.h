#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NullChannelServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NullChannelServices"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHelperModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLocalNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllActiveLocalNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPrologueStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNoticeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VersionNoticeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCoreUserID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstallID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSessionID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommitTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInGameState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareImg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareMiniApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_Silent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation_SilentWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriendURLForRecall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPushEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T Init() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DF67C))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DF714))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DF7AC))(this);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DF844))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NullChannelServices*, float))(Il2CppBase() + 0x19DF8DC))(this, deltaTime);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(NullChannelServices*, bool))(Il2CppBase() + 0x19DF97C))(this, pause);
	}
	template <typename T = void> T ShowHelperModule(uintptr_t ipu, uintptr_t type, Il2CppString* publishid) {
		return ((T (*)(NullChannelServices*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19DFA1C))(this, ipu, type, publishid);
	}
	template <typename T = void> T AddLocalNotification(uint32_t offsetSecondsFromNow, Il2CppString* eventType, Il2CppString* title, Il2CppString* content) {
		return ((T (*)(NullChannelServices*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19DFAD8))(this, offsetSecondsFromNow, eventType, title, content);
	}
	template <typename T = void> T CancelAllActiveLocalNotifications() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DFB98))(this);
	}
	template <typename T = void> T CheckEnableNotification() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DFC30))(this);
	}
	template <typename T = void> T ReportPrologueStep(uintptr_t info) {
		return ((T (*)(NullChannelServices*, uintptr_t))(Il2CppBase() + 0x19DFCC8))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNoticeList() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DFD68))(this);
	}
	template <typename T = void> T VersionNoticeReq(Il2CppString* resVersion, uintptr_t func) {
		return ((T (*)(NullChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19DFE08))(this, resVersion, func);
	}
	template <typename T = Il2CppString*> T GetCoreUserID() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DFEBC))(this);
	}
	template <typename T = Il2CppString*> T GetInstallID() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19DFFA8))(this);
	}
	template <typename T = Il2CppString*> T GetSessionID() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19E0060))(this);
	}
	template <typename T = bool> T CommitTransaction(Il2CppString* transactionID) {
		return ((T (*)(NullChannelServices*, Il2CppString*))(Il2CppBase() + 0x19E0118))(this, transactionID);
	}
	template <typename T = void> T SetInGameState(bool isInGamePlay) {
		return ((T (*)(NullChannelServices*, bool))(Il2CppBase() + 0x19E01C0))(this, isInGamePlay);
	}
	template <typename T = bool> T QueryBalance() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19E0260))(this);
	}
	template <typename T = void> T ShareImg(uintptr_t texture, uintptr_t shareTarget, void* callback) {
		return ((T (*)(NullChannelServices*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x19E0300))(this, texture, shareTarget, callback);
	}
	template <typename T = void> T ShareUrl(Il2CppString* url, uintptr_t shareTarget, void* callback) {
		return ((T (*)(NullChannelServices*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x19E03F0))(this, url, shareTarget, callback);
	}
	template <typename T = void> T ShareArk(Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(NullChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x19E04E0))(this, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T ShareMiniApp(Il2CppString* title, Il2CppString* desc, Il2CppString* openID, Il2CppString* imagepath, Il2CppString* thumbpath, Il2CppString* url, Il2CppString* extraJson, Il2CppString* mediaPath, void* callback) {
		return ((T (*)(NullChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x19E05E4))(this, title, desc, openID, imagepath, thumbpath, url, extraJson, mediaPath, callback);
	}
	template <typename T = void> T SendInvitation(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x19E06EC))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_Silent(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x19E07FC))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_SilentWX(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x19E090C))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendToFriendPackage(uintptr_t sendTarget, Il2CppString* title, Il2CppString* content, Il2CppArray<uintptr_t>* imgData, Il2CppDictionary<Il2CppString*, Il2CppString*>* arguments) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x19E0A1C))(this, sendTarget, title, content, imgData, arguments);
	}
	template <typename T = void> T SendToFriendURLForInviteNewbie(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E0B50))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInviteTeam(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E0C6C))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInvite(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E0D88))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForRecall(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E0EA4))(this, sendTarget, url);
	}
	template <typename T = bool> T SendToFriend(uintptr_t sendTarget, Il2CppString* uniqueId, Il2CppString* title, Il2CppString* content, Il2CppDictionary<Il2CppString*, Il2CppString*>* callbackDic) {
		return ((T (*)(NullChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x19E0FC0))(this, sendTarget, uniqueId, title, content, callbackDic);
	}
	template <typename T = void> T OpenURL(Il2CppString* url, bool innerBrowser) {
		return ((T (*)(NullChannelServices*, Il2CppString*, bool))(Il2CppBase() + 0x19E1098))(this, url, innerBrowser);
	}
	template <typename T = void> T GetLocation(void* callback) {
		return ((T (*)(NullChannelServices*, void*))(Il2CppBase() + 0x19E1164))(this, callback);
	}
	template <typename T = void> T OnLogin() {
		return ((T (*)(NullChannelServices*))(Il2CppBase() + 0x19E1258))(this);
	}
	template <typename T = void> T SetPushEnable(bool enable) {
		return ((T (*)(NullChannelServices*, bool))(Il2CppBase() + 0x19E12F0))(this, enable);
	}

};

}
