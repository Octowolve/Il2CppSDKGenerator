#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKTools"));
	}

	template <typename T = void*> static T& ToolsRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& ToolsFreeFlowRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ToolsRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ToolsRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ToolsFreeFlowRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ToolsFreeFlowRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenDeepLink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertShortUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFreeFlowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPrajnaWebView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPrajna() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRatingAlert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToolsRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToolsFreeFlowRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> static T isAppInstalledAdapter(Il2CppString* channels, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DD370))(0, channels, extra);
	}
	template <typename T = void> static T openDeepLinkAdapter(Il2CppString* link) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DD4A0))(0, link);
	}
	template <typename T = bool> static T convertShortUrlAdapter(Il2CppString* url, Il2CppString* typeMark) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DD5A0))(0, url, typeMark);
	}
	template <typename T = bool> static T getFreeFlowInfoAdapter(Il2CppString* key, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DD6D0))(0, key, extra);
	}
	template <typename T = void> static T openPrajnaWebViewAdapter(Il2CppString* jsonStr) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DD800))(0, jsonStr);
	}
	template <typename T = void> static T reportPrajnaAdapter(Il2CppString* serialNumber) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DD900))(0, serialNumber);
	}
	template <typename T = void> static T showRatingAlertAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46DDA00))(0);
	}
	template <typename T = Il2CppString*> static T getConfigChannelAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46DDAD0))(0);
	}
	template <typename T = Il2CppString*> static T getConfigAdapter(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DDBB8))(0, key);
	}
	template <typename T = bool> static T updateConfigAdapter(Il2CppString* configs) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DDCCC))(0, configs);
	}
	template <typename T = void> static T add_ToolsRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DDDDC))(0, value);
	}
	template <typename T = void> static T remove_ToolsRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DDFDC))(0, value);
	}
	template <typename T = void> static T add_ToolsFreeFlowRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DE1DC))(0, value);
	}
	template <typename T = void> static T remove_ToolsFreeFlowRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46DE3D4))(0, value);
	}
	template <typename T = bool> static T IsAppInstalled(Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DE5CC))(0, channel, extra);
	}
	template <typename T = void> static T OpenDeepLink(Il2CppString* link) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DE8C0))(0, link);
	}
	template <typename T = bool> static T ConvertShortUrl(Il2CppString* url, Il2CppString* typeMark) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DEBA4))(0, url, typeMark);
	}
	template <typename T = bool> static T GetFreeFlowInfo(Il2CppString* key, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46DEEB0))(0, key, extra);
	}
	template <typename T = void> static T OpenPrajnaWebView(Il2CppString* jsonStr) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DF1A4))(0, jsonStr);
	}
	template <typename T = void> static T ReportPrajna(Il2CppString* serialNumber) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DF43C))(0, serialNumber);
	}
	template <typename T = void> static T ShowRatingAlert() {
		return ((T (*)(void *))(Il2CppBase() + 0x46DF6D4))(0);
	}
	template <typename T = Il2CppString*> static T GetConfigChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x46DF960))(0);
	}
	template <typename T = uintptr_t> static T GetConfig(Il2CppString* key, uintptr_t defValue) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x33599B0))(0, key, defValue);
	}
	template <typename T = bool> static T UpdateConfig(Il2CppDictionary<Il2CppString*, Il2CppString*>* configsDic) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x46DFC8C))(0, configsDic);
	}
	template <typename T = void> static T OnToolsRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D7AE4))(0, json);
	}
	template <typename T = void> static T OnToolsFreeFlowRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D77BC))(0, json);
	}

};

}
