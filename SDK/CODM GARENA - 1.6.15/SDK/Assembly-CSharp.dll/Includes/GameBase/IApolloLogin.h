#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IApolloLogin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IApolloLogin"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SendData(Il2CppArray<uintptr_t>* content, bool allowLost) {
		return ((T (*)(IApolloLogin*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, content, allowLost);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DoLogout() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoReconnect() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoDisconnect() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetLoginUser(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = uintptr_t> T GetLoginStatus() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetLoginResult() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetLoginRet() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ResetGuest() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetBind(uintptr_t plat, uintptr_t callback, uintptr_t subPlatform) {
		return ((T (*)(IApolloLogin*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, plat, callback, subPlatform);
	}
	template <typename T = void> T QueryBindInfo(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetChannelInfoUidInGarena() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DoConfirmLogin(Il2CppString* confirmcode) {
		return ((T (*)(IApolloLogin*, Il2CppString*))(Il2CppBase() + 0x0))(this, confirmcode);
	}
	template <typename T = uintptr_t> T GetLoginPlaform() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PrintLoginUser() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetAppID() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetConnectedURL() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetLoginArea(uintptr_t area) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, area);
	}
	template <typename T = void> T SetLoginFinishCallback(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T SetConfirmLoginCallback(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T SetLogoutCallback(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = bool> T DoLoginQQ() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginWeChat() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsWeChatInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsQQInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFacebookInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsGarenaInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsMessengerInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsLineInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsWhatsAppInstalled() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginLine() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginNoAuth(Il2CppString* openID) {
		return ((T (*)(IApolloLogin*, Il2CppString*))(Il2CppBase() + 0x0))(this, openID);
	}
	template <typename T = bool> T DoLoginGuest() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginFacebook() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginAppleGameCenter() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginGoogle() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginUNO() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginApple() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginNoAuthWithExistSession() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginQrCode(uintptr_t platform) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, platform);
	}
	template <typename T = bool> T DoLoginUin(Il2CppString* uin, Il2CppString* password) {
		return ((T (*)(IApolloLogin*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, uin, password);
	}
	template <typename T = bool> T DoLoginWithExistSession() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasExistSession() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoLoginGarena() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DoConnect(uintptr_t platform) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, platform);
	}
	template <typename T = bool> T RefreshWeChatAccessToken() {
		return ((T (*)(IApolloLogin*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T RegisterWeChatAccessTokenRefreshedCallback(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = bool> T UnRegisterWeChatAccessTokenRefreshedCallback(uintptr_t callback) {
		return ((T (*)(IApolloLogin*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}

};

}
