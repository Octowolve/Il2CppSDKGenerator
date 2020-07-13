#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProjectSetting"));
	}

	template <typename T = Il2CppString*> static T& SERVER_LOBBY_DHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_PACKAGENAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_IOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_ANDROID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_LOCAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_FIRESQUAD_ALPHA_ANDROID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_PT2_ALPHA_ANDROID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_IOS_IMSDK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_ALPHA_PBT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_WEST_PREVIEW_PBT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_GARENA_PREVIEW_PBT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_QQ_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_WX_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_GUEST_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_FACEBOOK_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_QQ_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_WX_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_GUEST_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APP_ID_FACEBOOK_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& editorLoginDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_URL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_URL_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_ENV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_ENV_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_DENGTA_APPKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_DENGTA_CHANNEL_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MSDK_KEY_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_DENGTA_APPKEY_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& TSS_GAME_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& TSS_GAME_ID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPID_PUBLISH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPID_HEX_PUBLISH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_WECHAT_APPID_PUBLISH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPID_HEX_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_WECHAT_APPID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPKEY_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_WECHAT_APPKEY_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_QQ_APPKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_WECHAT_APPKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FACEBOOK_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FACEBOOK_URL_SCHEME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GOOGLE_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FACEBOOK_PREVIEW_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FACEBOOK_PREVIEW_URL_SCHEME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MIDAS_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPEN_MIDAS_ID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PAY_APP_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MSDK_GAME_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MSDK_GAME_ID_PREVIEW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LINE_CHANNEL_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& help_apiKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& help_domainName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& help_appid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IronSource_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_ServerLobbyUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_APPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIpAndPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T get_IronSourceAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD735C))(0);
	}
	template <typename T = Il2CppString*> static T get_HelpShiftApiKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD73CC))(0);
	}
	template <typename T = Il2CppString*> static T get_HelpShiftDomainName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD7444))(0);
	}
	template <typename T = Il2CppString*> static T get_HelpShiftAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD74BC))(0);
	}
	template <typename T = Il2CppString*> static T get_MsdkGameID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD7534))(0);
	}
	template <typename T = Il2CppString*> static T APPID(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4CD75E4))(0, ID);
	}
	template <typename T = Il2CppString*> static T get_AppIDQQ() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD783C))(0);
	}
	template <typename T = Il2CppString*> static T get_AppIDWeChat() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD78EC))(0);
	}
	template <typename T = Il2CppString*> static T get_BuildVersionInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD799C))(0);
	}
	template <typename T = uintptr_t> static T get_ServerLobbyUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD7D88))(0);
	}
	template <typename T = void> static T set_ServerLobbyUrl(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CD7E08))(0, value);
	}
	template <typename T = bool> static T GetIpAndPort(uintptr_t* ip, uintptr_t* port) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4CD7E8C))(0, ip, port);
	}
	template <typename T = Il2CppString*> static T get_ServerLobbyDHP() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8140))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenQQAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD81B8))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenQQAppKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8268))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenWeChatAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8318))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenWeChatAppKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD83C8))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenMSDKKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8478))(0);
	}
	template <typename T = Il2CppString*> static T get_FacebookAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8554))(0);
	}
	template <typename T = Il2CppString*> static T get_FacebookUrlScheme() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8630))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenDengTaAppKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD870C))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenDengTaChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD87BC))(0);
	}
	template <typename T = Il2CppString*> static T get_OpenMidasID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8834))(0);
	}
	template <typename T = Il2CppString*> static T get_EnableFileShare() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD88E4))(0);
	}
	template <typename T = uint32_t> static T get_TssGameID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD895C))(0);
	}
	template <typename T = Il2CppString*> static T get_PayAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD89F4))(0);
	}
	template <typename T = Il2CppString*> static T get_EnableNotice() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD89F8))(0);
	}
	template <typename T = Il2CppString*> static T get_NoticeTimeInterval() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8A70))(0);
	}
	template <typename T = Il2CppString*> static T get_UrlSchemaPrefix() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8AE8))(0);
	}
	template <typename T = Il2CppString*> static T get_LineChannelID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CD8B60))(0);
	}

};

}
