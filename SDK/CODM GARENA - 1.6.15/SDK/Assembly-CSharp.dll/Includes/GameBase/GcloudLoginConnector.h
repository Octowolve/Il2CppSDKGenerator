#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GcloudLoginConnector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GcloudLoginConnector"));
	}

	template <typename T = Il2CppString*> static T& TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PERMISSIONS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& CONNECT_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMaxBufferLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& CLICK_CHANNEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_EncryptMethod() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_KeyMaking() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& msdkInited() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Connector() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ApolloLoginInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_loginPlatform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Result() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_WECHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_QQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_FACEBOOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_GARENA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_MESSENGER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& ANDRIOD_PACKAGENAME_WHATSAPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_WECHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_QQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_FACEBOOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_GARENA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_MESSENGER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& IOS_URLSCHEME_WHATSAPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> T& onLoginWithConfirmCallback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& onLogoutCallback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> static T& SDKDEBUG_PREFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_NoAuthLoginOpenID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& AVAILABLE_TOKEN_SECONDS_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_OnQueryPlayerInfoCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_GuestBindCallbackHandler() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LoginFinishCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& m_TimeTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppString*> static T& EditorMSDKRest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EditorMSDKRest_Garena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_GuestBindInfoCallbackHandler() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& m_LastConnectNetwork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& m_loginArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_LastConnectUrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_ConnectedURL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ShouldRetryLogin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ConnectFailUrlList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& UseNewRetryIP() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginPlaform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInitAccountService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountLoginHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeaconReportAuthResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountLoginBaseHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintPublish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoginFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPackageNameOrURLScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAndriodPackageName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIOSURLScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConverToChannelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConverToChannelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConverToApolloPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginWithExistSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginNoAuthWithExistSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasExistSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getPayToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendQueryPlayerInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendQueryInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectedURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintLoginUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoginPlatformSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoConfirmLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoApolloLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMSDKLoginInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitImpl_Original() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoApolloLoginImpl_Original() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginIMSDK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginQQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginWeChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginUin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceOpenId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginNoAuth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginFacebook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginUNO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginApple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginGoogle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginAppleGameCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeChatInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsQQInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFacebookInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGarenaInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMessengerInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLineInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWhatsAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoginQrCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlatformInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryBindInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoginArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerLobbyUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetryOtherIp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRetryOtherIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorRecvedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisteConnector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshAccessTokenQueryPlayerInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorRouteChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProtocolRecv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeChatAccessToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterWeChatAccessTokenRefreshedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterWeChatAccessTokenRefreshedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserOpenId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubChannelInGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleGetLoginRetInGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelInfoUidInGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubChannelToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfirmLoginCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoutCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleWakeUpRetExtraJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleWakeUpGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}

	template <typename T = uintptr_t> T GetLoginPlaform() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB5670))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB5740))(this);
	}
	template <typename T = uintptr_t> T GetLoginStatus() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB590C))(this);
	}
	template <typename T = void> T DoInitAccountService() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB5E58))(this);
	}
	template <typename T = void> T OnAccountLoginHandler(uintptr_t ret) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB5FF4))(this, ret);
	}
	template <typename T = void> T BeaconReportAuthResult(uintptr_t ret) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB6BA8))(this, ret);
	}
	template <typename T = void> T OnAccountLoginBaseHandler(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB848C))(this, result);
	}
	template <typename T = void> T PrintLog(Il2CppString* msg) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EB6E0C))(this, msg);
	}
	template <typename T = void> T PrintPublish(Il2CppString* msg) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EB6EDC))(this, msg);
	}
	template <typename T = void> T PrintWarning(Il2CppString* msg) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EB8B68))(this, msg);
	}
	template <typename T = void> T SetLoginFinishCallback(uintptr_t inCallback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB8CE0))(this, inCallback);
	}
	template <typename T = Il2CppString*> T ConvertToChannel(uintptr_t ApolloPlatform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB8DB8))(this, ApolloPlatform);
	}
	template <typename T = Il2CppString*> T GetPackageNameOrURLScheme(uintptr_t ApolloPlatform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB8EE4))(this, ApolloPlatform);
	}
	template <typename T = Il2CppString*> T GetAndriodPackageName(uintptr_t ApolloPlatform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB90C8))(this, ApolloPlatform);
	}
	template <typename T = Il2CppString*> T GetIOSURLScheme(uintptr_t ApolloPlatform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB9318))(this, ApolloPlatform);
	}
	template <typename T = uintptr_t> static T ConverToChannelType(Il2CppString* Channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EB7054))(0, Channel);
	}
	template <typename T = uintptr_t> static T ConverToChannelType_1(uintptr_t platform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EB37EC))(0, platform);
	}
	template <typename T = uintptr_t> static T ConverToApolloPlatform(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EB9568))(0, type);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB9660))(this);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB9FBC))(this);
	}
	template <typename T = bool> T DoReconnect() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBA114))(this);
	}
	template <typename T = bool> T DoDisconnect() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBA308))(this);
	}
	template <typename T = bool> T DoLoginWithExistSession() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBA46C))(this);
	}
	template <typename T = bool> T DoLoginNoAuthWithExistSession() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBB30C))(this);
	}
	template <typename T = bool> T HasExistSession() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBB5E8))(this);
	}
	template <typename T = uintptr_t> T GetLoginUser(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBBA08))(this, callback);
	}
	template <typename T = Il2CppString*> T getPayToken(Il2CppString* channInfo) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EBC284))(this, channInfo);
	}
	template <typename T = void> T SendQueryPlayerInfoCallback(uintptr_t inLoginPlayerInfo) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBC79C))(this, inLoginPlayerInfo);
	}
	template <typename T = uintptr_t> T SendQueryInfo(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBBFC8))(this, callback);
	}
	template <typename T = uintptr_t> T GetLoginResult() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBC890))(this);
	}
	template <typename T = uintptr_t> T ConvertResult(uintptr_t ErrCode) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBC960))(this, ErrCode);
	}
	template <typename T = uintptr_t> T ConvertResult_1(int32_t msdkResult) {
		return ((T (*)(GcloudLoginConnector*, int32_t))(Il2CppBase() + 0x1EB5D54))(this, msdkResult);
	}
	template <typename T = void> T GetAppID() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBCAFC))(this);
	}
	template <typename T = Il2CppString*> T GetConnectedURL() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBCBC4))(this);
	}
	template <typename T = void> T PrintLoginUser() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBCDB8))(this);
	}
	template <typename T = void> T DoLogout() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBD050))(this);
	}
	template <typename T = void> T SetBind(uintptr_t plat, uintptr_t callback, uintptr_t subPlatform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EBD260))(this, plat, callback, subPlatform);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBD438))(this);
	}
	template <typename T = bool> T SendData(Il2CppArray<uintptr_t>* content, bool allowLost) {
		return ((T (*)(GcloudLoginConnector*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1EBD70C))(this, content, allowLost);
	}
	template <typename T = bool> T CheckLoginPlatformSupport(uintptr_t platform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBD890))(this, platform);
	}
	template <typename T = void> T OnLoginFinishCallback(uintptr_t inLogiResult, int32_t innerResult) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, int32_t))(Il2CppBase() + 0x1EBDAD4))(this, inLogiResult, innerResult);
	}
	template <typename T = void> T DoConfirmLogin(Il2CppString* confirmcode) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EBDD08))(this, confirmcode);
	}
	template <typename T = bool> T DoApolloLogin(uintptr_t platform, Il2CppString* editorUin, Il2CppString* editorPassword, uintptr_t sub) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EBDE04))(this, platform, editorUin, editorPassword, sub);
	}
	template <typename T = uintptr_t> T GetLoginRet() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB5A18))(this);
	}
	template <typename T = uintptr_t> T GetMSDKLoginInfo() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBA79C))(this);
	}
	template <typename T = void> T InitImpl_Original() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB5814))(this);
	}
	template <typename T = bool> T DoApolloLoginImpl_Original(uintptr_t platform, uintptr_t subChannel) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EBE09C))(this, platform, subChannel);
	}
	template <typename T = bool> T DoLoginIMSDK(uintptr_t platform, uintptr_t subChannel) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EBE7D8))(this, platform, subChannel);
	}
	template <typename T = bool> T DoLoginQQ() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBEB74))(this);
	}
	template <typename T = bool> T DoLoginWeChat() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBED0C))(this);
	}
	template <typename T = bool> T DoLoginGuest() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBEEA4))(this);
	}
	template <typename T = bool> T DoLoginUin(Il2CppString* uin, Il2CppString* password) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EBF03C))(this, uin, password);
	}
	template <typename T = Il2CppString*> static T ReplaceOpenId(Il2CppString* openid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EBF12C))(0, openid);
	}
	template <typename T = bool> T DoLoginNoAuth(Il2CppString* openID) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EBB444))(this, openID);
	}
	template <typename T = bool> T DoLoginFacebook() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBF52C))(this);
	}
	template <typename T = bool> T DoLoginGarena() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBF6C4))(this);
	}
	template <typename T = bool> T DoLoginLine() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBF85C))(this);
	}
	template <typename T = bool> T DoLoginUNO() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBF9F4))(this);
	}
	template <typename T = bool> T DoLoginApple() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBFB8C))(this);
	}
	template <typename T = bool> T DoLoginGoogle() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBFD24))(this);
	}
	template <typename T = bool> T DoLoginAppleGameCenter() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBFEBC))(this);
	}
	template <typename T = bool> T IsWeChatInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBEA90))(this);
	}
	template <typename T = bool> T IsQQInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC0054))(this);
	}
	template <typename T = bool> T IsFacebookInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC0138))(this);
	}
	template <typename T = bool> T IsGarenaInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC031C))(this);
	}
	template <typename T = bool> T IsMessengerInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC0500))(this);
	}
	template <typename T = bool> T IsLineInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC07A8))(this);
	}
	template <typename T = bool> T IsWhatsAppInstalled() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC0A50))(this);
	}
	template <typename T = bool> T DoLoginQrCode(uintptr_t platform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC0CF8))(this, platform);
	}
	template <typename T = bool> T IsPlatformInstalled(uintptr_t platform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC0DD0))(this, platform);
	}
	template <typename T = void> T QueryBindInfo(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC0F18))(this, callback);
	}
	template <typename T = void> T ResetGuest() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC1034))(this);
	}
	template <typename T = void> T SetLoginArea(uintptr_t area) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC110C))(this, area);
	}
	template <typename T = bool> T DoConnect(uintptr_t platform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB7254))(this, platform);
	}
	template <typename T = Il2CppString*> T GetServerLobbyUrl(uintptr_t platform) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC121C))(this, platform);
	}
	template <typename T = void> T OnConnectorConnect(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC15A0))(this, result);
	}
	template <typename T = void> T OnConnectorReconnect(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC1F24))(this, result);
	}
	template <typename T = bool> T RetryOtherIp(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC1D54))(this, result);
	}
	template <typename T = bool> T ShouldRetryOtherIP(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC216C))(this, result);
	}
	template <typename T = void> T OnConnectorError(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC2260))(this, result);
	}
	template <typename T = void> T OnConnectorDisconnect(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC2560))(this, result);
	}
	template <typename T = void> T OnConnectorRecvedData() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC27B8))(this);
	}
	template <typename T = void> T OnStateChanged(uintptr_t state, uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EC2880))(this, state, result);
	}
	template <typename T = void> T UnRegisteConnector() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EB9A2C))(this);
	}
	template <typename T = void> T OnRefreshAccessTokenQueryPlayerInfoCallback(uintptr_t result) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC2DD4))(this, result);
	}
	template <typename T = void> T DoReadData() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EBD50C))(this);
	}
	template <typename T = void> T OnConnectorRouteChangedEvent(uint64_t serverId) {
		return ((T (*)(GcloudLoginConnector*, uint64_t))(Il2CppBase() + 0x1EC2FD8))(this, serverId);
	}
	template <typename T = void> T OnProtocolRecv(Il2CppArray<uintptr_t>* buffer, int32_t size) {
		return ((T (*)(GcloudLoginConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1EC2EA4))(this, buffer, size);
	}
	template <typename T = bool> T RefreshWeChatAccessToken() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC31B4))(this);
	}
	template <typename T = bool> T RegisterWeChatAccessTokenRefreshedCallback(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC3284))(this, callback);
	}
	template <typename T = bool> T UnRegisterWeChatAccessTokenRefreshedCallback(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC335C))(this, callback);
	}
	template <typename T = void> static T SetUserOpenId(Il2CppString* openid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EBC5E8))(0, openid);
	}
	template <typename T = uintptr_t> static T GetSubChannelInGarena(uintptr_t ret) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1EBAE14))(0, ret);
	}
	template <typename T = void> T HandleGetLoginRetInGarena(uintptr_t ret) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EBE204))(this, ret);
	}
	template <typename T = Il2CppString*> T GetChannelInfoUidInGarena() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC3434))(this);
	}
	template <typename T = void> T SetSubChannelToServer() {
		return ((T (*)(GcloudLoginConnector*))(Il2CppBase() + 0x1EC19EC))(this);
	}
	template <typename T = void> T SetConfirmLoginCallback(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC38E0))(this, callback);
	}
	template <typename T = void> T SetLogoutCallback(uintptr_t callback) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EC39B8))(this, callback);
	}
	template <typename T = void> T HandleWakeUpRetExtraJson(uintptr_t ret) {
		return ((T (*)(GcloudLoginConnector*, uintptr_t))(Il2CppBase() + 0x1EB8890))(this, ret);
	}
	template <typename T = void> T HandleWakeUpGameData(Il2CppString* game_data) {
		return ((T (*)(GcloudLoginConnector*, Il2CppString*))(Il2CppBase() + 0x1EC3A90))(this, game_data);
	}

};

}
