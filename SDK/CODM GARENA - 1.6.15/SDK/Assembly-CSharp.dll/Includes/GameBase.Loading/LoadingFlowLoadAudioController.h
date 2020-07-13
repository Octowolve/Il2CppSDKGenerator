#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadAudioController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadAudioController"));
	}

	template <typename T = uintptr_t> T& m_CoRoutineCheck() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadCompelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpectedProcessingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4BBCC))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4BC90))(this);
	}
	template <typename T = void> T OnLoadCompelete() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C034))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C0E0))(this);
	}
	template <typename T = float> T GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C180))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C224))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C2C4))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowLoadAudioController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E4C444))(this, result, errorMessage);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C5B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C5B8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C5BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C5C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowLoadAudioController*))(Il2CppBase() + 0x2E4C5C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowLoadAudioController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E4C5CC))(this, P0, P1);
	}

};

}
