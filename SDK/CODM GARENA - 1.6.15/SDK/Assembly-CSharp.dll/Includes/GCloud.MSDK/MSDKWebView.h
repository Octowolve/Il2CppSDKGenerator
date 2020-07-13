#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKWebView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKWebView"));
	}

	template <typename T = void*> static T& WebViewRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_WebViewRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_WebViewRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAmsCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEncodeUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallJS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWebViewRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T openUrlAdapter(Il2CppString* url, int32_t screenType, bool isFullScreen, bool isUseURLEcode, Il2CppString* extraJson, bool isBrowser) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, bool, Il2CppString*, bool))(Il2CppBase() + 0x46E0670))(0, url, screenType, isFullScreen, isUseURLEcode, extraJson, isBrowser);
	}
	template <typename T = void> static T openAmsCenterAdapter(Il2CppString* gameName, Il2CppString* actChannelId, Il2CppString* zoneId, Il2CppString* platformId, Il2CppString* partitionId, Il2CppString* roleId, int32_t screenType, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x46E07AC))(0, gameName, actChannelId, zoneId, platformId, partitionId, roleId, screenType, extraJson);
	}
	template <typename T = Il2CppString*> static T getEncodeUrlAdapter(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E0964))(0, url);
	}
	template <typename T = void> static T callJSAdapter(Il2CppString* jsonJsPara) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E0A7C))(0, jsonJsPara);
	}
	template <typename T = void> static T closeAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46E0B7C))(0);
	}
	template <typename T = void> static T add_WebViewRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46E0C4C))(0, value);
	}
	template <typename T = void> static T remove_WebViewRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46E0E4C))(0, value);
	}
	template <typename T = void> static T OpenUrl(Il2CppString* url, uintptr_t screenType, bool isFullScreen, bool isUseURLEcode, Il2CppString* extraJson, bool isBrowser) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, bool, Il2CppString*, bool))(Il2CppBase() + 0x46E104C))(0, url, screenType, isFullScreen, isUseURLEcode, extraJson, isBrowser);
	}
	template <typename T = void> static T OpenAmsCenter(Il2CppString* gameName, Il2CppString* actChannelId, Il2CppString* zoneId, Il2CppString* platformId, Il2CppString* partitionId, Il2CppString* roleId, uintptr_t screenType, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46E1914))(0, gameName, actChannelId, zoneId, platformId, partitionId, roleId, screenType, extraJson);
	}
	template <typename T = Il2CppString*> static T GetEncodeUrl(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E217C))(0, url);
	}
	template <typename T = void> static T CallJS(Il2CppString* jsonJsParam) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46E2464))(0, jsonJsParam);
	}
	template <typename T = void> static T Close() {
		return ((T (*)(void *))(Il2CppBase() + 0x46E2748))(0);
	}
	template <typename T = void> static T OnWebViewRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D6B50))(0, json);
	}

};

}
