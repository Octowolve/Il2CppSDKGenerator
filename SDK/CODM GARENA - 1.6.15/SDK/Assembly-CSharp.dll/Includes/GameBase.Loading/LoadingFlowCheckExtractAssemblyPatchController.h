#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowCheckExtractAssemblyPatchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowCheckExtractAssemblyPatchController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMessageBoxConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D230))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D2F4))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D394))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D434))(this);
	}
	template <typename T = void> T OnExitMessageBoxConfirm(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E3D654))(this, result, context);
	}
	template <typename T = bool> T CheckExtract() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D5B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D750))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowCheckExtractAssemblyPatchController*))(Il2CppBase() + 0x2E3D758))(this);
	}

};

}
