#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKCrash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKCrash"));
	}

	template <typename T = void*> static T& CrashBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_CrashBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_CrashBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrashCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCrash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoReportLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCrashCallbackMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCrashCallbackData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> static T logInfoAdapter(int32_t level, Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BCD58))(0, level, tag, log);
	}
	template <typename T = void> static T setUserValueAdapter(Il2CppString* k, Il2CppString* v) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BCE80))(0, k, v);
	}
	template <typename T = void> static T reportExceptionAdapter(int32_t type, Il2CppString* exceptionName, Il2CppString* exceptionMsg, Il2CppString* exceptionStack, Il2CppString* paramsJson) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BCFA0))(0, type, exceptionName, exceptionMsg, exceptionStack, paramsJson);
	}
	template <typename T = void> static T unityCrashCallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x46BD100))(0);
	}
	template <typename T = void> static T setUserIdAdapter(Il2CppString* userId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BD1D0))(0, userId);
	}
	template <typename T = void> static T add_CrashBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46BD2CC))(0, value);
	}
	template <typename T = void> static T remove_CrashBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46BD4CC))(0, value);
	}
	template <typename T = void> static T LogInfo(uintptr_t level, Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BD6CC))(0, level, tag, log);
	}
	template <typename T = void> static T SetUserValue(Il2CppString* k, Il2CppString* v) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BDC28))(0, k, v);
	}
	template <typename T = void> static T SetUserId(Il2CppString* userId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BDF30))(0, userId);
	}
	template <typename T = void> static T SetCrashCallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x46BE214))(0);
	}
	template <typename T = void> static T InitCrash() {
		return ((T (*)(void *))(Il2CppBase() + 0x46B9728))(0);
	}
	template <typename T = void> static T SetAutoReportLogLevel(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46BE2AC))(0, level);
	}
	template <typename T = Il2CppString*> static T OnCrashCallbackMessage(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BEB78))(0, json);
	}
	template <typename T = Il2CppString*> static T OnCrashCallbackData(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BEEE8))(0, json);
	}
	template <typename T = void> static T ReportException(int32_t type, Il2CppString* exceptionName, Il2CppString* exceptionMsg, Il2CppString* exceptionStack, Il2CppDictionary<Il2CppString*, Il2CppString*>* extInfo) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x46BF258))(0, type, exceptionName, exceptionMsg, exceptionStack, extInfo);
	}

};

}
