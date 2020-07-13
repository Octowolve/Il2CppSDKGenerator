#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.APM {

class ApmAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.APM", "ApmAgent"));
	}

	template <typename T = Il2CppString*> static T& ApmLogTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ApmInitOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ApmInitFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppString*> static T& TupleKeyIden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TupleValueIden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& CLASS_UNITYAGENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _apm_bridge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T HawkLogMsg(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450BEFC))(0, msg);
	}
	template <typename T = void> static T HawkLogError(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450C01C))(0, msg);
	}
	template <typename T = void> static T HawkEmptyImp(Il2CppString* funcName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450C13C))(0, funcName);
	}
	template <typename T = void> static T SetCallBack(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x450C238))(0, callback);
	}
	template <typename T = void> static T tapmNativePostFrame(int32_t frametime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x450C2EC))(0, frametime);
	}
	template <typename T = void> static T tapmNativePostCoordinate(float x, float y, float z, float pitch, float yaw, float roll) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x450C3CC))(0, x, y, z, pitch, yaw, roll);
	}
	template <typename T = void> static T tapmNativePostNTL(int32_t latency) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x450C4D0))(0, latency);
	}
	template <typename T = void> static T tapmNativePostV1F(Il2CppString* category, Il2CppString* key, float a) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x450C5B0))(0, category, key, a);
	}
	template <typename T = void> static T tapmNativePostV2F(Il2CppString* category, Il2CppString* key, float a, float b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x450C6D8))(0, category, key, a, b);
	}
	template <typename T = void> static T tapmNativePostV3F(Il2CppString* category, Il2CppString* key, float a, float b, float c) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float, float, float))(Il2CppBase() + 0x450C80C))(0, category, key, a, b, c);
	}
	template <typename T = void> static T tapmNativePostV1I(Il2CppString* category, Il2CppString* key, int32_t a) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x450C950))(0, category, key, a);
	}
	template <typename T = void> static T tapmNativePostV2I(Il2CppString* category, Il2CppString* key, int32_t a, int32_t b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x450CA78))(0, category, key, a, b);
	}
	template <typename T = void> static T tapmNativePostV3I(Il2CppString* category, Il2CppString* key, int32_t a, int32_t b, int32_t c) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x450CBA8))(0, category, key, a, b, c);
	}
	template <typename T = void> static T tapmNativePostV1S(Il2CppString* category, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x450CCE0))(0, category, key, value);
	}
	template <typename T = void> static T tapmNativeBeginTupleWrap(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450CE1C))(0, key);
	}
	template <typename T = void> static T tapmNativeEndTupleWrap() {
		return ((T (*)(void *))(Il2CppBase() + 0x450CF1C))(0);
	}
	template <typename T = uintptr_t> static T get_APMBridge() {
		return ((T (*)(void *))(Il2CppBase() + 0x450CFEC))(0);
	}
	template <typename T = Il2CppString*> static T getErrorMsg(int32_t errorCode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x450D184))(0, errorCode);
	}
	template <typename T = void> static T SetOpenId(Il2CppString* openId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450D48C))(0, openId);
	}
	template <typename T = int32_t> static T InitContext(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450D770))(0, appId);
	}
	template <typename T = void> static T MarkLoadlevel(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450E20C))(0, sceneName);
	}
	template <typename T = void> static T MarkLoadlevelCompleted() {
		return ((T (*)(void *))(Il2CppBase() + 0x450E800))(0);
	}
	template <typename T = void> static T MarkLevelFin() {
		return ((T (*)(void *))(Il2CppBase() + 0x450EEB4))(0);
	}
	template <typename T = void> static T BeginTag(Il2CppString* tagName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x450F6C8))(0, tagName);
	}
	template <typename T = void> static T EndTag() {
		return ((T (*)(void *))(Il2CppBase() + 0x450F9AC))(0);
	}
	template <typename T = void> static T UpdateNetLatency(int32_t latency) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x450FBE4))(0, latency);
	}
	template <typename T = void> static T EnableDebugMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x450FC84))(0);
	}
	template <typename T = void> static T SetQuality(int32_t quality) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x450FEBC))(0, quality);
	}
	template <typename T = void> static T SetTargetFrameRate(int32_t target) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x451018C))(0, target);
	}
	template <typename T = void> static T SetLocale(Il2CppString* locale) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x451045C))(0, locale);
	}
	template <typename T = void> static T PostEvent(int32_t key, Il2CppString* value) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x4510770))(0, key, value);
	}
	template <typename T = void> static T SetVersionIden(Il2CppString* version) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4510ACC))(0, version);
	}
	template <typename T = void> static T SetPssManualMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4510DB0))(0);
	}
	template <typename T = void> static T RequestPssSample() {
		return ((T (*)(void *))(Il2CppBase() + 0x4510FE8))(0);
	}
	template <typename T = int32_t> static T CheckDeviceClass(Il2CppString* configName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4511220))(0, configName);
	}
	template <typename T = void> static T CheckDeviceClassAsync(Il2CppString* configureDomainName, uintptr_t handler) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45115E8))(0, configureDomainName, handler);
	}
	template <typename T = void> static T PostFrame() {
		return ((T (*)(void *))(Il2CppBase() + 0x45117F4))(0);
	}
	template <typename T = void> static T PostLagStatus(float distance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x45118BC))(0, distance);
	}
	template <typename T = void> static T PostStreamEvent(uintptr_t stepId, uintptr_t status, int32_t code, Il2CppString* msg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x4511B90))(0, stepId, status, code, msg);
	}
	template <typename T = void> static T PostCoordinate(int32_t x, int32_t y, int32_t z, float pitch, float yaw, float roll) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, float, float, float))(Il2CppBase() + 0x4511B94))(0, x, y, z, pitch, yaw, roll);
	}
	template <typename T = void> static T PostValueF(Il2CppString* category, Il2CppString* key, float a) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x4511C84))(0, category, key, a);
	}
	template <typename T = void> static T PostValueF_1(Il2CppString* category, Il2CppString* key, float a, float b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x4511E28))(0, category, key, a, b);
	}
	template <typename T = void> static T PostValueF_2(Il2CppString* category, Il2CppString* key, float a, float b, float c) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float, float, float))(Il2CppBase() + 0x4511FDC))(0, category, key, a, b, c);
	}
	template <typename T = void> static T PostValueI(Il2CppString* category, Il2CppString* key, int32_t a) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x4512198))(0, category, key, a);
	}
	template <typename T = void> static T PostValueI_1(Il2CppString* category, Il2CppString* key, int32_t a, int32_t b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x451233C))(0, category, key, a, b);
	}
	template <typename T = void> static T PostValueI_2(Il2CppString* category, Il2CppString* key, int32_t a, int32_t b, int32_t c) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x45124E8))(0, category, key, a, b, c);
	}
	template <typename T = void> static T PostValueS(Il2CppString* category, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4512698))(0, category, key, value);
	}
	template <typename T = void> static T BeginTupleWrap(Il2CppString* tupleName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4512884))(0, tupleName);
	}
	template <typename T = void> static T EndTupleWrap() {
		return ((T (*)(void *))(Il2CppBase() + 0x45129CC))(0);
	}
	template <typename T = void> static T BeginExclude() {
		return ((T (*)(void *))(Il2CppBase() + 0x4512AA4))(0);
	}
	template <typename T = void> static T EndExclude() {
		return ((T (*)(void *))(Il2CppBase() + 0x4512D1C))(0);
	}
	template <typename T = int32_t> static T GetQccJudgeParamCpuFreq() {
		return ((T (*)(void *))(Il2CppBase() + 0x4512F94))(0);
	}
	template <typename T = void> static T InitStepEventContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x45131F0))(0);
	}
	template <typename T = void> static T PostStepEvent(Il2CppString* category, int32_t stepId, uintptr_t status, int32_t code, Il2CppString* msg, Il2CppString* extraKey) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4513468))(0, category, stepId, status, code, msg, extraKey);
	}
	template <typename T = void> static T ReleaseStepEventContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x4513918))(0);
	}
	template <typename T = void> static T LinkLastStepCategorySession(Il2CppString* category) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4513B90))(0, category);
	}
	template <typename T = void> static T SetCustomizedDeviceClass(int32_t deviceclass) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4513E6C))(0, deviceclass);
	}
	template <typename T = Il2CppString*> static T GetSceneSessionId() {
		return ((T (*)(void *))(Il2CppBase() + 0x451417C))(0);
	}
	template <typename T = void> static T SetPssIntervals(int32_t intervals) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4514420))(0, intervals);
	}

};

}
