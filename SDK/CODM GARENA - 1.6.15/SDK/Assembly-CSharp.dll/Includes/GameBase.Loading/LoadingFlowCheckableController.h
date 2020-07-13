#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowCheckableController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowCheckableController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowCheckableController*))(Il2CppBase() + 0x2E3BA08))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowCheckableController*))(Il2CppBase() + 0x2E3A800))(this);
	}
	template <typename T = void> T OnFlowStart() {
		return ((T (*)(LoadingFlowCheckableController*))(Il2CppBase() + 0x2E3BAA8))(this);
	}
	template <typename T = void> T OnFlowProcessing(Il2CppString* tips, float progress) {
		return ((T (*)(LoadingFlowCheckableController*, Il2CppString*, float))(Il2CppBase() + 0x2E3BBE4))(this, tips, progress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowCheckableController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E3BC98))(this, result, errorMessage);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowCheckableController*))(Il2CppBase() + 0x2E3BDF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowStart() {
		return ((T (*)(LoadingFlowCheckableController*))(Il2CppBase() + 0x2E3BDF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowProcessing(Il2CppString* P0, float P1) {
		return ((T (*)(LoadingFlowCheckableController*, Il2CppString*, float))(Il2CppBase() + 0x2E3BDFC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowCheckableController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E3BE00))(this, P0, P1);
	}

};

}
