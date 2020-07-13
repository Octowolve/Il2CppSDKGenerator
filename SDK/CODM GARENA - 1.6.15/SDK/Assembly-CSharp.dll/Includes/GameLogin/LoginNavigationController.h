#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginNavigationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginNavigationController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& LoadingFlowController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _loginResult() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _confirmCode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> static T& lastClickCrashTestTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LOGIN_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& QUEUE_MESSAGEBOX_CONTEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsQueneMessageBoxShowing() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginPanelShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoginContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVultrDailyLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVultrCELogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSDKTestLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVultrLiveOpsLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVultrNewVersionTestLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFacebookLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLineLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAppleGameCenterLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUNOLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoogleLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDevLogin_CN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDevLogin_US() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginNoAuth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAppID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDirectDSConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCrashTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLDLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconSelectServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckContinueBeforeLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLogoutConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayLoginView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconConnectLobbyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayLoginFailResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadingFlowProgressCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadingFlowFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamePauseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginCallbackTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStayInQueueResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueueMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCloseQueueMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAgreePrivacyPolicyOnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreenPrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAgreePrivacyPolicyView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyCheckBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeramsOfUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyPolicyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginSuccessFeture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginSuccessFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryBindInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlatformCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlatformCallbackTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIsLoginWithConfirmCodeMessageCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginWitchConfirmCodeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMSDKLogoutCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestLoginLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIgnoreGuestLinkWithIgnoreCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLinkChannelTimeoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuestLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCNAutoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoginWithExitSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuickWithExternalAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonQQClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonWeChatClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}

	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DA328))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33DA330))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DA338))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DAE80))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DB710))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DB7E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DC5C8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DD288))(this);
	}
	template <typename T = void> T OnLoginPanelShow(uintptr_t mesg) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33DD444))(this, mesg);
	}
	template <typename T = void> T ShowLoginContainer(bool show) {
		return ((T (*)(LoginNavigationController*, bool))(Il2CppBase() + 0x33DD5A0))(this, show);
	}
	template <typename T = void> T OnGuestLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DD8E0))(this);
	}
	template <typename T = void> T OnVultrDailyLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DDFF4))(this);
	}
	template <typename T = void> T OnVultrCELogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DE818))(this);
	}
	template <typename T = void> T OnSDKTestLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DEA5C))(this);
	}
	template <typename T = void> T OnVultrLiveOpsLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DEB88))(this);
	}
	template <typename T = void> T OnVultrNewVersionTestLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DEDCC))(this);
	}
	template <typename T = void> T OnFacebookLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF010))(this);
	}
	template <typename T = void> T OnLineLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF2D8))(this);
	}
	template <typename T = void> T OnAppleGameCenterLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF3A0))(this);
	}
	template <typename T = void> T OnUNOLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF56C))(this);
	}
	template <typename T = void> T OnGoogleLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF738))(this);
	}
	template <typename T = void> T OnDevLogin_CN() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DF904))(this);
	}
	template <typename T = void> T OnDevLogin_US() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DFC48))(this);
	}
	template <typename T = void> T DoLoginNoAuth(Il2CppString* username, Il2CppString* password) {
		return ((T (*)(LoginNavigationController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33DE328))(this, username, password);
	}
	template <typename T = void> T OnGetAppID() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DFF7C))(this);
	}
	template <typename T = void> T OnChangeServer() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E0120))(this);
	}
	template <typename T = void> T OnDirectDSConnect() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E01E8))(this);
	}
	template <typename T = void> T OnCrashTest() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E02B0))(this);
	}
	template <typename T = void> T OnLDLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E0650))(this);
	}
	template <typename T = void> T ReportBeaconSelectServer(uintptr_t inPlatformType) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33DDF24))(this, inPlatformType);
	}
	template <typename T = bool> T CheckContinueBeforeLogin(uintptr_t platform) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33DDCA4))(this, platform);
	}
	template <typename T = void> T CheckLogoutConnection() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E0984))(this);
	}
	template <typename T = void> T OnGarenaLogin() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E0BEC))(this);
	}
	template <typename T = void> T DisplayLoginView() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DB494))(this);
	}
	template <typename T = void> T OnLoginFinishCallback(uintptr_t result, int32_t innerResult) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E0EB4))(this, result, innerResult);
	}
	template <typename T = void> T ReportBeaconConnectLobbyEvent(uintptr_t inResult) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E1CB8))(this, inResult);
	}
	template <typename T = void> T DisplayLoginFailResult(uintptr_t result, int32_t innerResult) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E1F58))(this, result, innerResult);
	}
	template <typename T = void> T OnMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E2224))(this, result, userContext);
	}
	template <typename T = void> T DoLoadingFlowProgressCallback(Il2CppString* tips, float progress) {
		return ((T (*)(LoginNavigationController*, Il2CppString*, float))(Il2CppBase() + 0x33DDDA4))(this, tips, progress);
	}
	template <typename T = void> T DoLoadingFlowFinishCallback(uintptr_t result) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E24AC))(this, result);
	}
	template <typename T = void> T OnGamePauseCallback(uintptr_t gamePauseReason, float pauseStartRealTime) {
		return ((T (*)(LoginNavigationController*, uintptr_t, float))(Il2CppBase() + 0x33E2610))(this, gamePauseReason, pauseStartRealTime);
	}
	template <typename T = void> T OnLoginCallbackTimeOut() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E276C))(this);
	}
	template <typename T = void> T ProcessStayInQueueResult(uintptr_t result, int32_t innerResult) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E1958))(this, result, innerResult);
	}
	template <typename T = void> T OnQueueMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E2AE8))(this, result, userContext);
	}
	template <typename T = void> T CheckCloseQueueMessageBox() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E14EC))(this);
	}
	template <typename T = bool> T CheckIsAgreePrivacyPolicyOnStart() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DB5CC))(this);
	}
	template <typename T = bool> T CheckIsAgreePrivacyPolicy() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33DDBCC))(this);
	}
	template <typename T = void> T LoadIsAgreePrivacyPolicy() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E2CC0))(this);
	}
	template <typename T = void> T SetIsAgreePrivacyPolicy(bool IsAgree) {
		return ((T (*)(LoginNavigationController*, bool))(Il2CppBase() + 0x33E2F90))(this, IsAgree);
	}
	template <typename T = void> T OnAgreenPrivacyPolicy(uintptr_t obj) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E3150))(this, obj);
	}
	template <typename T = void> T UpdateAgreePrivacyPolicyView() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E2E50))(this);
	}
	template <typename T = void> T OnPrivacyCheckBtnClick() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E3238))(this);
	}
	template <typename T = void> T OnTeramsOfUseBtnClick() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E3324))(this);
	}
	template <typename T = void> T OnPrivacyPolicyBtnClick() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E33FC))(this);
	}
	template <typename T = void> T OnLoginSuccessFeture(uintptr_t result) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E1684))(this, result);
	}
	template <typename T = void> T OnLoginSuccessFinishCallback(uintptr_t result) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E369C))(this, result);
	}
	template <typename T = void> T OnQueryBindInfoCallback(bool success, Il2CppList<int32_t>* channelList) {
		return ((T (*)(LoginNavigationController*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x33E3870))(this, success, channelList);
	}
	template <typename T = void> T OnBindPlatformCallback(bool success, int32_t retCode, int32_t innerCode, Il2CppString* confirmCode) {
		return ((T (*)(LoginNavigationController*, bool, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x33E4044))(this, success, retCode, innerCode, confirmCode);
	}
	template <typename T = void> T OnBindPlatformCallbackTimeout() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E43B8))(this);
	}
	template <typename T = void> T OnIsLoginWithConfirmCodeMessageCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoginNavigationController*, uintptr_t, int32_t))(Il2CppBase() + 0x33E4490))(this, result, context);
	}
	template <typename T = void> T OnLoginWitchConfirmCodeCallback(bool success, int32_t retCode) {
		return ((T (*)(LoginNavigationController*, bool, int32_t))(Il2CppBase() + 0x33E47F8))(this, success, retCode);
	}
	template <typename T = void> T OnMSDKLogoutCallback(bool success) {
		return ((T (*)(LoginNavigationController*, bool))(Il2CppBase() + 0x33E4C80))(this, success);
	}
	template <typename T = bool> T IsGuestLoginLinkChannel() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E34D4))(this);
	}
	template <typename T = bool> T IsIgnoreGuestLinkWithIgnoreCount() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E4F90))(this);
	}
	template <typename T = bool> T IsGuestLinkChannel(bool success, Il2CppList<int32_t>* channelList) {
		return ((T (*)(LoginNavigationController*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x33E3BFC))(this, success, channelList);
	}
	template <typename T = int32_t> T GetLinkChannelTimeoutTime() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E3DB0))(this);
	}
	template <typename T = uintptr_t> T GetGuestLinkChannel() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E3E8C))(this);
	}
	template <typename T = void> T CheckCNAutoLogin(uintptr_t msg) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33DB27C))(this, msg);
	}
	template <typename T = void> T CheckLoginWithExitSession() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E5198))(this);
	}
	template <typename T = void> T OnNotifyQuickWithExternalAccount(uintptr_t Msg) {
		return ((T (*)(LoginNavigationController*, uintptr_t))(Il2CppBase() + 0x33E582C))(this, Msg);
	}
	template <typename T = void> T OnButtonQQClick() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E5E04))(this);
	}
	template <typename T = void> T OnButtonWeChatClick() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E5FD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E60DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E60E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E60EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E60F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoginNavigationController*))(Il2CppBase() + 0x33E60FC))(this);
	}

};

}
