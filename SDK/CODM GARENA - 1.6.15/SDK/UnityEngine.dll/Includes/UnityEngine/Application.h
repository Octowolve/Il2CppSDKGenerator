#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Application
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Application"));
	}

	template <typename T = uintptr_t> static T& lowMemory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_LogCallbackHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& s_LogCallbackHandlerThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_ShaderCompileCallbackHanlderThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T add_lowMemory(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46985F8))(0, value);
	}
	template <typename T = void> static T remove_lowMemory(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46987D8))(0, value);
	}
	template <typename T = void> static T CallLowMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x46989B8))(0);
	}
	template <typename T = void> static T Quit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698AD8))(0);
	}
	template <typename T = bool> static T CanStreamedLevelBeLoadedByName(Il2CppString* levelName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4698B68))(0, levelName);
	}
	template <typename T = bool> static T CanStreamedLevelBeLoaded(int32_t levelIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4698C00))(0, levelIndex);
	}
	template <typename T = bool> static T CanStreamedLevelBeLoaded_1(Il2CppString* levelName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4698C98))(0, levelName);
	}
	template <typename T = bool> static T get_isPlaying() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698C9C))(0);
	}
	template <typename T = bool> static T get_isEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698D2C))(0);
	}
	template <typename T = uintptr_t> static T get_platform() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698DBC))(0);
	}
	template <typename T = Il2CppString*> static T get_buildGUID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698E4C))(0);
	}
	template <typename T = void> static T CaptureScreenshot(Il2CppString* filename, int32_t superSize) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4698EDC))(0, filename, superSize);
	}
	template <typename T = bool> static T get_SRGB() {
		return ((T (*)(void *))(Il2CppBase() + 0x4698F7C))(0);
	}
	template <typename T = void> static T set_runInBackground(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x469900C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_dataPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x46990A4))(0);
	}
	template <typename T = Il2CppString*> static T get_streamingAssetsPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699134))(0);
	}
	template <typename T = Il2CppString*> static T get_persistentDataPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x46991C4))(0);
	}
	template <typename T = Il2CppString*> static T get_temporaryCachePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699254))(0);
	}
	template <typename T = Il2CppString*> static T get_unityVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x46992E4))(0);
	}
	template <typename T = Il2CppString*> static T get_version() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699374))(0);
	}
	template <typename T = Il2CppString*> static T get_installerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699404))(0);
	}
	template <typename T = Il2CppString*> static T get_identifier() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699494))(0);
	}
	template <typename T = uintptr_t> static T get_installMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699524))(0);
	}
	template <typename T = uintptr_t> static T get_sandboxType() {
		return ((T (*)(void *))(Il2CppBase() + 0x46995B4))(0);
	}
	template <typename T = Il2CppString*> static T get_productName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699644))(0);
	}
	template <typename T = Il2CppString*> static T get_companyName() {
		return ((T (*)(void *))(Il2CppBase() + 0x46996D4))(0);
	}
	template <typename T = void> static T OpenURL(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4699764))(0, url);
	}
	template <typename T = int32_t> static T get_targetFrameRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x46997FC))(0);
	}
	template <typename T = void> static T set_targetFrameRate(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x469988C))(0, value);
	}
	template <typename T = uintptr_t> static T get_systemLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x4699924))(0);
	}
	template <typename T = void> static T add_logMessageReceived(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46999B4))(0, value);
	}
	template <typename T = void> static T remove_logMessageReceived(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4699BF8))(0, value);
	}
	template <typename T = void> static T add_logMessageReceivedThreaded(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4699D9C))(0, value);
	}
	template <typename T = void> static T remove_logMessageReceivedThreaded(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4699F48))(0, value);
	}
	template <typename T = void> static T CallLogCallback(Il2CppString* logString, Il2CppString* stackTrace, uintptr_t type, bool invokedOnMainThread) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x469A0EC))(0, logString, stackTrace, type, invokedOnMainThread);
	}
	template <typename T = void> static T SetLogCallbackDefined(bool defined) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4699B60))(0, defined);
	}
	template <typename T = void> static T add_shaderCompileCallbackHandlerThreaded(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469A2C8))(0, value);
	}
	template <typename T = void> static T remove_shaderCompileCallbackHandlerThreaded(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469A50C))(0, value);
	}
	template <typename T = void> static T CallShaderCompileCallback(Il2CppString* shaderName, Il2CppString* passName, int32_t passType, Il2CppString* stageType, Il2CppString* keywords) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x469A6B0))(0, shaderName, passName, passType, stageType, keywords);
	}
	template <typename T = void> static T SetShaderCompileCallbackDefined(bool defined) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x469A474))(0, defined);
	}
	template <typename T = void> static T SetStackTraceLogType(uintptr_t logType, uintptr_t stackTraceType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x469A868))(0, logType, stackTraceType);
	}
	template <typename T = uintptr_t> static T get_backgroundLoadingPriority() {
		return ((T (*)(void *))(Il2CppBase() + 0x469A908))(0);
	}
	template <typename T = void> static T set_backgroundLoadingPriority(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x469A998))(0, value);
	}
	template <typename T = uintptr_t> static T get_internetReachability() {
		return ((T (*)(void *))(Il2CppBase() + 0x469AA30))(0);
	}
	template <typename T = bool> static T get_genuine() {
		return ((T (*)(void *))(Il2CppBase() + 0x469AAC0))(0);
	}
	template <typename T = bool> static T get_genuineCheckAvailable() {
		return ((T (*)(void *))(Il2CppBase() + 0x469AB50))(0);
	}

};

}
