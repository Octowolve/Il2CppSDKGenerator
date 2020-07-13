#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuglyAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyAgent"));
	}

	template <typename T = Il2CppString*> static T& GAME_AGENT_CLASS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TYPE_U3D_CRASH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& GAME_TYPE_UNITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& hasSetGameType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _gameAgentClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& _configChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& _configVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& _configUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int64_t> static T& _configDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& _configCrashReporterPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _LogCallbackEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> static T& _isInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _autoReportLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& _crashReporterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& _crashReporterPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = bool> static T& _debugMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& _autoQuitApplicationAfterReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41);
	}
	template <typename T = int32_t> static T& EXCEPTION_TYPE_UNCAUGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = int32_t> static T& EXCEPTION_TYPE_CAUGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& _pluginVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = void*> static T& _LogCallbackExtrasHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = bool> static T& _uncaughtAutoReportOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> static T ConfigCrashReporter(int32_t type, int32_t logLevel) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x52FC980))(0, type, logLevel);
	}
	template <typename T = void> static T InitWithAppId(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x52FCB50))(0, appId);
	}
	template <typename T = void> static T EnableExceptionHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x52FD7EC))(0);
	}
	template <typename T = void> static T RegisterLogCallback(uintptr_t handler) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x52FD994))(0, handler);
	}
	template <typename T = void> static T SetLogCallbackExtrasHandler(void* handler) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x52FDD3C))(0, handler);
	}
	template <typename T = void> static T ReportException(uintptr_t e, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x52FDEA8))(0, e, message);
	}
	template <typename T = void> static T ReportException_1(Il2CppString* name, Il2CppString* message, Il2CppString* stackTrace) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x52FE8CC))(0, name, message, stackTrace);
	}
	template <typename T = void> static T UnregisterLogCallback(uintptr_t handler) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x52FFA34))(0, handler);
	}
	template <typename T = void> static T SetUserId(Il2CppString* userId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x52FFD84))(0, userId);
	}
	template <typename T = void> static T SetScene(int32_t sceneId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x5300158))(0, sceneId);
	}
	template <typename T = void> static T AddSceneData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530057C))(0, key, value);
	}
	template <typename T = void> static T ConfigDebugMode(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x53009DC))(0, enable);
	}
	template <typename T = void> static T ConfigAutoQuitApplication(bool autoQuit) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5300E08))(0, autoQuit);
	}
	template <typename T = void> static T ConfigAutoReportLogLevel(uintptr_t level) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5300EBC))(0, level);
	}
	template <typename T = void> static T ConfigDefault(Il2CppString* channel, Il2CppString* version, Il2CppString* user, int64_t delay) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, int64_t))(Il2CppBase() + 0x5300F70))(0, channel, version, user, delay);
	}
	template <typename T = void> static T DebugLog(Il2CppString* tag, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52FCE70))(0, tag, format, args);
	}
	template <typename T = void> static T PrintLog(uintptr_t level, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x53012D8))(0, level, format, args);
	}
	template <typename T = uintptr_t> static T get_GameAgent() {
		return ((T (*)(void *))(Il2CppBase() + 0x53017E4))(0);
	}
	template <typename T = void> static T ConfigDefaultBeforeInit(Il2CppString* channel, Il2CppString* version, Il2CppString* user, int64_t delay) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, int64_t))(Il2CppBase() + 0x53011D8))(0, channel, version, user, delay);
	}
	template <typename T = void> static T ConfigCrashReporterPackage() {
		return ((T (*)(void *))(Il2CppBase() + 0x5301AD4))(0);
	}
	template <typename T = void> static T InitBuglyAgent(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x52FD040))(0, appId);
	}
	template <typename T = void> static T EnableDebugMode(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5300B7C))(0, enable);
	}
	template <typename T = void> static T SetUserInfo(Il2CppString* userInfo) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x52FFF1C))(0, userInfo);
	}
	template <typename T = void> static T ReportException_2(int32_t type, Il2CppString* name, Il2CppString* reason, Il2CppString* stackTrace, bool quitProgram) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x5301D54))(0, type, name, reason, stackTrace, quitProgram);
	}
	template <typename T = void> static T SetCurrentScene(int32_t sceneId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x530030C))(0, sceneId);
	}
	template <typename T = void> static T SetUnityVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x530210C))(0);
	}
	template <typename T = void> static T AddKeyAndValueInScene(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530075C))(0, key, value);
	}
	template <typename T = void> static T AddExtraDataWithException(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x53023C0))(0, key, value);
	}
	template <typename T = void> static T LogRecord(uintptr_t level, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x530141C))(0, level, message);
	}
	template <typename T = void> static T add__LogCallbackEventHandler(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x52FDAF4))(0, value);
	}
	template <typename T = void> static T remove__LogCallbackEventHandler(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x52FFB3C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_PluginVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x53023C4))(0);
	}
	template <typename T = bool> static T get_IsInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x52FCDC0))(0);
	}
	template <typename T = bool> static T get_AutoQuitApplicationAfterReport() {
		return ((T (*)(void *))(Il2CppBase() + 0x5302474))(0);
	}
	template <typename T = void> static T _SetCrashReporterType(int32_t type) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x52FCA20))(0, type);
	}
	template <typename T = void> static T _SetCrashReporterLogLevel(int32_t logLevel) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x52FCB4C))(0, logLevel);
	}
	template <typename T = void> static T _RegisterExceptionHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x52FD470))(0);
	}
	template <typename T = void> static T _UnregisterExceptionHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x5302524))(0);
	}
	template <typename T = void> static T _OnLogCallbackHandler(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5302968))(0, condition, stackTrace, type);
	}
	template <typename T = void> static T _OnUncaughtExceptionHandler(uintptr_t sender, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5302CEC))(0, sender, args);
	}
	template <typename T = void> static T _HandleException(uintptr_t e, Il2CppString* message, bool uncaught) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x52FE088))(0, e, message, uncaught);
	}
	template <typename T = void> static T _reportException(bool uncaught, Il2CppString* name, Il2CppString* reason, Il2CppString* stackTrace) {
		return ((T (*)(void *, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x530315C))(0, uncaught, name, reason, stackTrace);
	}
	template <typename T = void> static T _HandleException_1(uintptr_t logLevel, Il2CppString* name, Il2CppString* message, Il2CppString* stackTrace, bool uncaught) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x52FEAFC))(0, logLevel, name, message, stackTrace, uncaught);
	}

};

}
