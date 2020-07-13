#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IChannelServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IChannelServices"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnLogin() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IChannelServices*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(IChannelServices*, bool))(Il2CppBase() + 0x0))(this, pause);
	}
	template <typename T = void> T ShowHelperModule(uintptr_t ipu, uintptr_t type, Il2CppString* publishid) {
		return ((T (*)(IChannelServices*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, ipu, type, publishid);
	}
	template <typename T = void> T AddLocalNotification(uint32_t offsetSecondsFromNow, Il2CppString* eventType, Il2CppString* title, Il2CppString* content) {
		return ((T (*)(IChannelServices*, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, offsetSecondsFromNow, eventType, title, content);
	}
	template <typename T = void> T CancelAllActiveLocalNotifications() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CheckEnableNotification() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ReportPrologueStep(uintptr_t info) {
		return ((T (*)(IChannelServices*, uintptr_t))(Il2CppBase() + 0x0))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNoticeList() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T VersionNoticeReq(Il2CppString* resVersion, uintptr_t func) {
		return ((T (*)(IChannelServices*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, resVersion, func);
	}
	template <typename T = Il2CppString*> T GetCoreUserID() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetInstallID() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetSessionID() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T QueryBalance() {
		return ((T (*)(IChannelServices*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CommitTransaction(Il2CppString* msg) {
		return ((T (*)(IChannelServices*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}
	template <typename T = void> T ShareImg(uintptr_t texture, uintptr_t shareTarget, void* callback) {
		return ((T (*)(IChannelServices*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x0))(this, texture, shareTarget, callback);
	}
	template <typename T = void> T SendToFriendPackage(uintptr_t sendTarget, Il2CppString* title, Il2CppString* content, Il2CppArray<uintptr_t>* imgData, Il2CppDictionary<Il2CppString*, Il2CppString*>* callbackDic) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, sendTarget, title, content, imgData, callbackDic);
	}
	template <typename T = void> T SendToFriendURLForInviteNewbie(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInviteTeam(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForInvite(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, sendTarget, url);
	}
	template <typename T = void> T SendToFriendURLForRecall(uintptr_t sendTarget, Il2CppString* url) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, sendTarget, url);
	}
	template <typename T = bool> T SendToFriend(uintptr_t sendTarget, Il2CppString* uniqueId, Il2CppString* title, Il2CppString* content, Il2CppDictionary<Il2CppString*, Il2CppString*>* callbackDic) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, sendTarget, uniqueId, title, content, callbackDic);
	}
	template <typename T = void> T ShareUrl(Il2CppString* url, uintptr_t shareTarget, void* callback) {
		return ((T (*)(IChannelServices*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, url, shareTarget, callback);
	}
	template <typename T = void> T ShareArk(Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(IChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T ShareMiniApp(Il2CppString* title, Il2CppString* desc, Il2CppString* openID, Il2CppString* imagepath, Il2CppString* thumbpath, Il2CppString* url, Il2CppString* extraJson, Il2CppString* mediaPath, void* callback) {
		return ((T (*)(IChannelServices*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, title, desc, openID, imagepath, thumbpath, url, extraJson, mediaPath, callback);
	}
	template <typename T = void> T SendInvitation(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_Silent(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T SendInvitation_SilentWX(uintptr_t shareTarget, Il2CppString* openID, Il2CppString* title, Il2CppString* desc, Il2CppString* url, Il2CppString* imageUrl, Il2CppString* extraJson, void* callback) {
		return ((T (*)(IChannelServices*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, shareTarget, openID, title, desc, url, imageUrl, extraJson, callback);
	}
	template <typename T = void> T OpenURL(Il2CppString* url, bool innerBrowser) {
		return ((T (*)(IChannelServices*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, url, innerBrowser);
	}
	template <typename T = void> T GetLocation(void* callback) {
		return ((T (*)(IChannelServices*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T SetPushEnable(bool enable) {
		return ((T (*)(IChannelServices*, bool))(Il2CppBase() + 0x0))(this, enable);
	}

};

}
