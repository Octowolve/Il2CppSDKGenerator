#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDKAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDKAgent"));
	}

	template <typename T = bool> static T& isInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& enableFPSDetect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppString*> static T& PrefKey_GsdkDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ms_enableDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& isInMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = Il2CppString*> static T& lastMatchZoneid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& lastMatchTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& lastMatchDsIpPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T set_EnableDebug(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3E2ED54))(0, value);
	}
	template <typename T = bool> static T get_EnableDebug() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2EE4C))(0);
	}
	template <typename T = void> static T InitializeGSDK() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2EEFC))(0);
	}
	template <typename T = void> static T ForceInitialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F154))(0);
	}
	template <typename T = void> static T ForceStartMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F22C))(0);
	}
	template <typename T = void> static T ForceEndMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F754))(0);
	}
	template <typename T = void> static T ForceEnableFPSDetect() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F968))(0);
	}
	template <typename T = bool> static T GetEnableFPSDetect() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2FA1C))(0);
	}
	template <typename T = void> static T DoInitialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F030))(0);
	}
	template <typename T = void> static T SetUserId(Il2CppString* openid, int32_t msdkPlatId) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3E2FACC))(0, openid, msdkPlatId);
	}
	template <typename T = void> static T StartMatch(Il2CppString* dsIpPort, int32_t mapId, int32_t frameRate, uintptr_t quality, Il2CppString* zoneId) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3E2F310))(0, dsIpPort, mapId, frameRate, quality, zoneId);
	}
	template <typename T = void> static T OnPingDelayDuringMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2FC4C))(0);
	}
	template <typename T = void> static T OnApplicationPause(bool paused) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3E2FD20))(0, paused);
	}
	template <typename T = void> static T EndMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2F7EC))(0);
	}
	template <typename T = void> static T ShutDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2FF00))(0);
	}
	template <typename T = void> static T ReportLoginExperience(uintptr_t step, bool isSucc, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x3E2FFB8))(0, step, isSucc, message);
	}
	template <typename T = void> static T ReportPay(int32_t payType, int32_t result, Il2CppString* payChannel, int32_t resultCode, Il2CppString* resultInerCode, Il2CppString* resultMsg) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E303FC))(0, payType, result, payChannel, resultCode, resultInerCode, resultMsg);
	}
	template <typename T = void> static T ReportDisconnect(Il2CppString* Url, Il2CppString* result) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E30684))(0, Url, result);
	}
	template <typename T = void> static T ReportLoading(int32_t mapid, Il2CppString* state, float time) {
		return ((T (*)(void *, int32_t, Il2CppString*, float))(Il2CppBase() + 0x3E30874))(0, mapid, state, time);
	}
	template <typename T = void> static T ReportEvent(Il2CppString* name, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventList) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x3E30AA4))(0, name, eventList);
	}

};

}
