#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowCheckpointController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowCheckpointController"));
	}

	template <typename T = int32_t> T& TotalCheckableFlowCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3EADC))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3EB7C))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3EC40))(this);
	}
	template <typename T = void> T OnFlowStart() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3ECE4))(this);
	}
	template <typename T = void> T TimerUpdate() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3EEC4))(this);
	}
	template <typename T = void> T OnFlowProcessing(Il2CppString* tips, float progress) {
		return ((T (*)(LoadingFlowCheckpointController*, Il2CppString*, float))(Il2CppBase() + 0x2E3F170))(this, tips, progress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowCheckpointController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E3F23C))(this, result, errorMessage);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3F308))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3F30C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowStart() {
		return ((T (*)(LoadingFlowCheckpointController*))(Il2CppBase() + 0x2E3F310))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowProcessing(Il2CppString* P0, float P1) {
		return ((T (*)(LoadingFlowCheckpointController*, Il2CppString*, float))(Il2CppBase() + 0x2E3F314))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowCheckpointController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E3F318))(this, P0, P1);
	}

};

}
