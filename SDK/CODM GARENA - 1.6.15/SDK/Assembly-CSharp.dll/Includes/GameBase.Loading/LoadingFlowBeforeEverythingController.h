#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowBeforeEverythingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowBeforeEverythingController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitialzeGCloud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeApollo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareExternalDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3A9AC))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3AA70))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3AB10))(this);
	}
	template <typename T = void> T InitialzeGCloud() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3ABB0))(this);
	}
	template <typename T = void> T InitializeApollo() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3AEAC))(this);
	}
	template <typename T = void> T PrepareExternalDir() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3AF44))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3B050))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3B274))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3B278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowBeforeEverythingController*))(Il2CppBase() + 0x2E3B27C))(this);
	}

};

}
