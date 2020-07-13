#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class UILoginMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "UILoginMainController"));
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
	template <typename T = uintptr_t> T& m_LoginResult() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_ConfirmCode() {
		return *(T*)((uintptr_t)this + 0x4C);
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
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRepairBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUNOLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAppleLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFacebookLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLineLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoogleLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconConnectLobbyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayLoginFailResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadingFlowProgressCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadingFlowFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginCallbackTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStayInQueueResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueueMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCloseQueueMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAgreePrivacyPolicyOnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsAgreePrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreenPrivacyPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAgreePrivacyPolicyView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyCheckBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeramsOfUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyPolicyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginSuccessFeture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginSuccessFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryBindInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlatformCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlatformCallbackTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIsLoginWithConfirmCodeMessageCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIsConfirmLoginWithConfirmCodeMessageCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginWitchConfirmCodeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginWitchConfirmCodeCallbackSucceess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestLoginLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIgnoreGuestLinkWithIgnoreCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLinkChannelTimeoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfirmLoginTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuestLinkChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoginWithExitSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}

	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2535C3C))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x2535C44))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2535C4C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2536478))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x25369A4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2536A48))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253701C))(this);
	}
	template <typename T = void> T OnRepairBtnClick() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2537590))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2537680))(this);
	}
	template <typename T = void> T OnGuestLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253780C))(this);
	}
	template <typename T = void> T OnUNOLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2537E74))(this);
	}
	template <typename T = void> T OnAppleLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253878C))(this);
	}
	template <typename T = void> T OnFacebookLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2538D90))(this);
	}
	template <typename T = void> T OnLineLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2539070))(this);
	}
	template <typename T = void> T OnGoogleLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x25395D0))(this);
	}
	template <typename T = void> T OnGarenaLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x25398B0))(this);
	}
	template <typename T = void> T OnLoginFinishCallback(uintptr_t result, int32_t innerResult) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x2539C30))(this, result, innerResult);
	}
	template <typename T = void> T ReportBeaconConnectLobbyEvent(uintptr_t inResult) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253AA24))(this, inResult);
	}
	template <typename T = void> T DisplayLoginFailResult(uintptr_t result, int32_t innerResult) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253AFC0))(this, result, innerResult);
	}
	template <typename T = void> T OnMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253B25C))(this, result, userContext);
	}
	template <typename T = void> T DoLoadingFlowProgressCallback(Il2CppString* tips, float progress) {
		return ((T (*)(UILoginMainController*, Il2CppString*, float))(Il2CppBase() + 0x2537D24))(this, tips, progress);
	}
	template <typename T = void> T DoLoadingFlowFinishCallback(uintptr_t result) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253A8F0))(this, result);
	}
	template <typename T = void> T OnLoginCallbackTimeOut() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253B4B4))(this);
	}
	template <typename T = void> T ProcessStayInQueueResult(uintptr_t result, int32_t innerResult) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253AC94))(this, result, innerResult);
	}
	template <typename T = void> T OnQueueMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253B800))(this, result, userContext);
	}
	template <typename T = void> T CheckCloseQueueMessageBox() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253A328))(this);
	}
	template <typename T = bool> T CheckIsAgreePrivacyPolicyOnStart() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2536890))(this);
	}
	template <typename T = bool> T CheckIsAgreePrivacyPolicy() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2537C7C))(this);
	}
	template <typename T = void> T LoadIsAgreePrivacyPolicy() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253B9A8))(this);
	}
	template <typename T = void> T SetIsAgreePrivacyPolicy(bool IsAgree) {
		return ((T (*)(UILoginMainController*, bool))(Il2CppBase() + 0x253BC18))(this, IsAgree);
	}
	template <typename T = void> T OnAgreenPrivacyPolicy(uintptr_t obj) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253BDA8))(this, obj);
	}
	template <typename T = void> T UpdateAgreePrivacyPolicyView() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253BB08))(this);
	}
	template <typename T = void> T OnPrivacyCheckBtnClick() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253BE60))(this);
	}
	template <typename T = void> T OnTeramsOfUseBtnClick() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253BF1C))(this);
	}
	template <typename T = void> T OnPrivacyPolicyBtnClick() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253BFBC))(this);
	}
	template <typename T = void> T OnLoginSuccessFeture(uintptr_t result) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253A670))(this, result);
	}
	template <typename T = void> T OnLoginSuccessFinishCallback(uintptr_t result) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253C05C))(this, result);
	}
	template <typename T = void> T OnQueryBindInfoCallback(bool success, Il2CppList<int32_t>* channelList) {
		return ((T (*)(UILoginMainController*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x253C200))(this, success, channelList);
	}
	template <typename T = void> T OnBindPlatformCallback(bool success, int32_t retCode, int32_t innerCode, Il2CppString* confirmCode) {
		return ((T (*)(UILoginMainController*, bool, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x253C918))(this, success, retCode, innerCode, confirmCode);
	}
	template <typename T = void> T OnBindPlatformCallbackTimeout(uintptr_t msg) {
		return ((T (*)(UILoginMainController*, uintptr_t))(Il2CppBase() + 0x253CD94))(this, msg);
	}
	template <typename T = void> T OnIsLoginWithConfirmCodeMessageCallback(uintptr_t result, int32_t context) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253CEBC))(this, result, context);
	}
	template <typename T = void> T OnIsConfirmLoginWithConfirmCodeMessageCallback(uintptr_t result, int32_t context) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253D0A4))(this, result, context);
	}
	template <typename T = void> T OnLoginWitchConfirmCodeCallback(bool success, int32_t retCode) {
		return ((T (*)(UILoginMainController*, bool, int32_t))(Il2CppBase() + 0x253D408))(this, success, retCode);
	}
	template <typename T = void> T OnLoginWitchConfirmCodeCallbackSucceess(uintptr_t result, int32_t context) {
		return ((T (*)(UILoginMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x253D764))(this, result, context);
	}
	template <typename T = bool> T IsGuestLoginLinkChannel() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253A490))(this);
	}
	template <typename T = bool> T IsIgnoreGuestLinkWithIgnoreCount() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253D904))(this);
	}
	template <typename T = bool> T IsGuestLinkChannel(bool success, Il2CppList<int32_t>* channelList) {
		return ((T (*)(UILoginMainController*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x253C558))(this, success, channelList);
	}
	template <typename T = int32_t> T GetLinkChannelTimeoutTime() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253C6E4))(this);
	}
	template <typename T = Il2CppString*> T GetConfirmLoginTip() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253CC6C))(this);
	}
	template <typename T = uintptr_t> T GetGuestLinkChannel() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253C790))(this);
	}
	template <typename T = void> T CheckAutoLogin() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x2536728))(this);
	}
	template <typename T = void> T CheckLoginWithExitSession() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253DADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253E140))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253E148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253E150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253E158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(UILoginMainController*))(Il2CppBase() + 0x253E160))(this);
	}

};

}
