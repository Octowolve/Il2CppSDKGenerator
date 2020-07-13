#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieProxy"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mZBDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& kNetworkError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPveMulitLvelInfoRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveMulitLvelInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPveEndlessInfoRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveEndlessInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetRewardLimitationReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRewardLimitationRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(ZombieProxy*))(Il2CppBase() + 0x4066924))(this);
	}
	template <typename T = bool> T SendPveMulitLvelInfoRequest() {
		return ((T (*)(ZombieProxy*))(Il2CppBase() + 0x40669D4))(this);
	}
	template <typename T = bool> T OnGetPveMulitLvelInfoResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(ZombieProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4066B04))(this, message, errstr);
	}
	template <typename T = bool> T SendPveEndlessInfoRequest() {
		return ((T (*)(ZombieProxy*))(Il2CppBase() + 0x4066CCC))(this);
	}
	template <typename T = bool> T OnGetPveEndlessInfoResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(ZombieProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4066E24))(this, message, errstr);
	}
	template <typename T = void> T SendGetRewardLimitationReq() {
		return ((T (*)(ZombieProxy*))(Il2CppBase() + 0x4066FEC))(this);
	}
	template <typename T = bool> T OnGetRewardLimitationRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ZombieProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x406713C))(this, message, errStr);
	}

};

}
