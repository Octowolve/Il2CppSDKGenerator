#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowDevicePatchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowDevicePatchController"));
	}

	template <typename T = void*> static T& alphatest_models() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& glLinkProgram_CrashModels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateExperimentalTopics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableHigherFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateGraphics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateKernalLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchIL2CPPReflectionOpt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateIsVirtualMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchAssetBundleLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchRemapperContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableAndroidAllocatorLogs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchAndroidAllocator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchShaderForAdreno3XX_AlphaTestZeroIssue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchEnableMeshRendererVaInstancing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PatchShaderForAdreno_glLinkProgramCrash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E3F3EC))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E3F4BC))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E3F58C))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E3F65C))(this);
	}
	template <typename T = void> static T ValidateExperimentalTopics() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E3FB7C))(0);
	}
	template <typename T = void> static T CheckEnableHigherFrameRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E3FC64))(0);
	}
	template <typename T = void> static T ValidateGraphics() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E3F7D0))(0);
	}
	template <typename T = void> static T ValidateKernalLogic() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E3F8C0))(0);
	}
	template <typename T = void> static T PatchIL2CPPReflectionOpt() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E41878))(0);
	}
	template <typename T = void> static T ValidateIsVirtualMachine() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E3F9B4))(0);
	}
	template <typename T = void> static T PatchAssetBundleLoadAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E417B8))(0);
	}
	template <typename T = void> static T PatchRemapperContainer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E41418))(0);
	}
	template <typename T = void> static T CheckEnableAndroidAllocatorLogs() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E41E1C))(0);
	}
	template <typename T = void> static T PatchAndroidAllocator() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E40DF4))(0);
	}
	template <typename T = void> static T PatchShaderForAdreno3XX_AlphaTestZeroIssue() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E40320))(0);
	}
	template <typename T = void> static T PatchEnableMeshRendererVaInstancing() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E40CA0))(0);
	}
	template <typename T = void> static T PatchShaderForAdreno_glLinkProgramCrash() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E4075C))(0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E429B0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E429B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowDevicePatchController*))(Il2CppBase() + 0x2E429B8))(this);
	}

};

}
