#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class GlobalServerTimeSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "GlobalServerTimeSync"));
	}

	template <typename T = float> static T& m_MinClientServerDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_LastPrintErrorLogTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& m_CSDeltaTime_FireCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& m_FireTime_OnlyCheckOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvServerPack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeForServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEstimatedServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFireCheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireCheckTime_Server() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireCheckTime_Client() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireCheckTime_RawClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerTime_FireCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameStartDurationSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientServerDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPredictServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x482A980))(0);
	}
	template <typename T = void> static T RecvServerPack(float serverTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x482AAB4))(0, serverTime);
	}
	template <typename T = float> static T GetTimeForServerTime(float serverTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x482B190))(0, serverTime);
	}
	template <typename T = float> static T GetEstimatedServerTime(float clientTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x482B2B0))(0, clientTime);
	}
	template <typename T = void> static T RefreshFireCheckTime(float serverTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x482ACA0))(0, serverTime);
	}
	template <typename T = int32_t> static T GetFireCheckTime_Server() {
		return ((T (*)(void *))(Il2CppBase() + 0x482B4A0))(0);
	}
	template <typename T = int32_t> static T GetFireCheckTime_Client() {
		return ((T (*)(void *))(Il2CppBase() + 0x482B608))(0);
	}
	template <typename T = float> static T GetFireCheckTime_RawClient() {
		return ((T (*)(void *))(Il2CppBase() + 0x482B3D0))(0);
	}
	template <typename T = int32_t> static T GetServerTime_FireCheck(int32_t timeTime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x482B708))(0, timeTime);
	}
	template <typename T = float> static T GetGameStartDurationSeconds(bool useRealTime) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x482B828))(0, useRealTime);
	}
	template <typename T = float> static T GetClientServerDeltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x482B968))(0);
	}
	template <typename T = float> static T GetPredictServerTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x482BA68))(0);
	}

};

}
