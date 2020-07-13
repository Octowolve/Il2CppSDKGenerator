#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLogin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLogin"));
	}

	template <typename T = void*> static T& LoginBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& LoginRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& ConnectRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LoginBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LoginBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LoginRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LoginRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ConnectRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ConnectRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onLoginBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onLoginRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onConnectRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginWithConfirmCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnityEditorLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnityEditorConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnityEditorLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginBaseRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWakeUpLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWakeUpLoginRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = void> static T loginAdapter(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46CDF28))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T logoutAdapter(Il2CppString* channel, Il2CppString* subChannel, bool channelOnly) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x46CE07C))(0, channel, subChannel, channelOnly);
	}
	template <typename T = Il2CppString*> static T getLoginRetAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CE1A4))(0);
	}
	template <typename T = void> static T autoLoginAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CE28C))(0);
	}
	template <typename T = void> static T bindAdapter(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46CE358))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T connectAdapter(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46CE4AC))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T unconnectAdapter(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CE600))(0, channel);
	}
	template <typename T = Il2CppString*> static T getConnectRetAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CE6FC))(0);
	}
	template <typename T = bool> static T switchUserAdapter(bool useLaunchUser) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x46CE7E4))(0, useLaunchUser);
	}
	template <typename T = void> static T queryUserInfoAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CE8CC))(0);
	}
	template <typename T = void> static T loginWithConfirmcodeAdapter(int32_t actionType, Il2CppString* confirmcode, Il2CppString* extraJson) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46CE99C))(0, actionType, confirmcode, extraJson);
	}
	template <typename T = void> static T resetGuestAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CEAC4))(0);
	}
	template <typename T = void> static T bindUIAdapter(Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CEB94))(0, extraJson);
	}
	template <typename T = void> static T loginUIAdapter(Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CEC94))(0, extraJson);
	}
	template <typename T = void> static T add_LoginBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CED94))(0, value);
	}
	template <typename T = void> static T remove_LoginBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CEF94))(0, value);
	}
	template <typename T = void> static T add_LoginRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CF194))(0, value);
	}
	template <typename T = void> static T remove_LoginRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CF38C))(0, value);
	}
	template <typename T = void> static T add_ConnectRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CF584))(0, value);
	}
	template <typename T = void> static T remove_ConnectRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CF77C))(0, value);
	}
	template <typename T = void> T onLoginBaseRetEvent(uintptr_t ret) {
		return ((T (*)(MSDKLogin*, uintptr_t))(Il2CppBase() + 0x46CF974))(this, ret);
	}
	template <typename T = void> T onLoginRetEvent(uintptr_t ret) {
		return ((T (*)(MSDKLogin*, uintptr_t))(Il2CppBase() + 0x46CFA54))(this, ret);
	}
	template <typename T = void> T onConnectRetEvent(uintptr_t ret) {
		return ((T (*)(MSDKLogin*, uintptr_t))(Il2CppBase() + 0x46CFB34))(this, ret);
	}
	template <typename T = void> static T Login(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46CFC14))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T Logout(Il2CppString* channel, Il2CppString* subChannel, bool channelOnly) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x46D0200))(0, channel, subChannel, channelOnly);
	}
	template <typename T = void> static T Bind(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D075C))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T Connect(Il2CppString* channel, Il2CppString* permissions, Il2CppString* subChannel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D0D48))(0, channel, permissions, subChannel, extraJson);
	}
	template <typename T = void> static T Unconnect(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D1334))(0, channel);
	}
	template <typename T = uintptr_t> static T GetConnectRet() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D1618))(0);
	}
	template <typename T = uintptr_t> static T GetLoginRet() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D19F0))(0);
	}
	template <typename T = void> static T AutoLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D1D1C))(0);
	}
	template <typename T = bool> static T SwitchUser(bool useLaunchUser) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x46D1FA8))(0, useLaunchUser);
	}
	template <typename T = void> static T QueryUserInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D22C0))(0);
	}
	template <typename T = void> static T LoginWithConfirmCode(int32_t actionType, Il2CppString* confirmcode, Il2CppString* extraJson) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D254C))(0, actionType, confirmcode, extraJson);
	}
	template <typename T = void> static T ResetGuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D2AA8))(0);
	}
	template <typename T = void> static T LoginUI(Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D2D34))(0, extraJson);
	}
	template <typename T = void> static T BindUI(Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D2FCC))(0, extraJson);
	}
	template <typename T = void> static T UnityEditorLogin(uintptr_t methodId, Il2CppString* channel, Il2CppString* subChannel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D3264))(0, methodId, channel, subChannel);
	}
	template <typename T = void> static T UnityEditorConnect(uintptr_t methodId, Il2CppString* channel, Il2CppString* subChannel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D3E80))(0, methodId, channel, subChannel);
	}
	template <typename T = void> static T UnityEditorLogout() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D4080))(0);
	}
	template <typename T = void> static T OnLoginBaseRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D42DC))(0, json);
	}
	template <typename T = void> static T OnLoginRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D4604))(0, json);
	}
	template <typename T = void> static T OnConnectRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D492C))(0, json);
	}
	template <typename T = uintptr_t> static T GetWakeUpLoginRet() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D4C54))(0);
	}
	template <typename T = void> static T ClearWakeUpLoginRet() {
		return ((T (*)(void *))(Il2CppBase() + 0x46D4F90))(0);
	}

};

}
