#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace com.tencent.gsdk {

class GSDK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "com.tencent.gsdk", "GSDK"));
	}

	template <typename T = uintptr_t> static T& sFpsRecorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& sFpsInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& sCallbackGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& sQualityNotifyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& sLogNotifyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& sGemObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& sGSDKPlatformClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& GEM_SRC_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& sPrepared4EditorReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& sCustomInfoConstructor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& sTDataMasterInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& sReportEventMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T add_sQualityNotifyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2D0EC))(0, value);
	}
	template <typename T = void> static T remove_sQualityNotifyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2D334))(0, value);
	}
	template <typename T = void> static T add_sLogNotifyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2D57C))(0, value);
	}
	template <typename T = void> static T remove_sLogNotifyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2D7C4))(0, value);
	}
	template <typename T = void> static T Init(Il2CppString* appid, bool debug, int32_t env, int32_t reportPlatform) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t, int32_t))(Il2CppBase() + 0x2D2DA0C))(0, appid, debug, env, reportPlatform);
	}
	template <typename T = void> static T InitWithBeacon(Il2CppString* appid, bool debug, int32_t env) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x2D2E06C))(0, appid, debug, env);
	}
	template <typename T = void> static T SetUserName(int32_t plat, Il2CppString* openid) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x2D2E6CC))(0, plat, openid);
	}
	template <typename T = void> static T SetObserver(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2E8B4))(0, d);
	}
	template <typename T = void> static T SetLogObserver(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D2EB14))(0, d);
	}
	template <typename T = void> static T notify(int32_t errCode, Il2CppString* errMsg, Il2CppString* extMsg) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D2ED74))(0, errCode, errMsg, extMsg);
	}
	template <typename T = void> static T SetUserNameWithQuality(int32_t plat, Il2CppString* openid, Il2CppString* qualityInfo) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D2EF50))(0, plat, openid, qualityInfo);
	}
	template <typename T = void> static T notify_1(Il2CppString* ret) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D2F17C))(0, ret);
	}
	template <typename T = void> static T Start(Il2CppString* zoneid, Il2CppString* tag, Il2CppString* roomip) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D2F32C))(0, zoneid, tag, roomip);
	}
	template <typename T = void> static T StartWithQuality(Il2CppString* zoneid, Il2CppString* tag, Il2CppString* roomip, Il2CppString* fps_mode, Il2CppString* quality_Lev, Il2CppString* opt_Lev) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D2F6E0))(0, zoneid, tag, roomip, fps_mode, quality_Lev, opt_Lev);
	}
	template <typename T = void> static T End() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D2FB60))(0);
	}
	template <typename T = void> static T TimeOutDetect() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D3086C))(0);
	}
	template <typename T = Il2CppString*> static T UDPDetect() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D30990))(0);
	}
	template <typename T = uintptr_t> static T GetLastFpsInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D30AC0))(0);
	}
	template <typename T = int32_t> static T GetFps() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D30BD0))(0);
	}
	template <typename T = void> static T StartFps(int32_t cusTs, int32_t lTs1, int32_t lTs2, int32_t lTs3, int32_t dotFreq) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2D30CE0))(0, cusTs, lTs1, lTs2, lTs3, dotFreq);
	}
	template <typename T = void> static T SetEvent(int32_t tag, bool state, Il2CppString* msg, bool authorize, bool finish) {
		return ((T (*)(void *, int32_t, bool, Il2CppString*, bool, bool))(Il2CppBase() + 0x2D30EC4))(0, tag, state, msg, authorize, finish);
	}
	template <typename T = void> static T SetPayEvent(int32_t itemid, int32_t tag, bool status, Il2CppString* msg) {
		return ((T (*)(void *, int32_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x2D311EC))(0, itemid, tag, status, msg);
	}
	template <typename T = Il2CppString*> static T GetFpsInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D314AC))(0);
	}
	template <typename T = void> static T Prepare4EditorReport() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D315D8))(0);
	}
	template <typename T = void> static T ReportEvent(Il2CppString* name, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventList) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x2D31BF8))(0, name, eventList);
	}

};

}
