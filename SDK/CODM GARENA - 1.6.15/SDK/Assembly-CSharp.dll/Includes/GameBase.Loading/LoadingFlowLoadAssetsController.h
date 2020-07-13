#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadAssetsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadAssetsController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoadPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFirstPersonWeaponAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpectedProcessingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4B430))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4B4F4))(this);
	}
	template <typename T = void> T OnAssetLoadPercent(float percent) {
		return ((T (*)(LoadingFlowLoadAssetsController*, float))(Il2CppBase() + 0x2E4B780))(this, percent);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4B848))(this);
	}
	template <typename T = void> T OnAssetReady() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4B8E8))(this);
	}
	template <typename T = void> T LoadFirstPersonWeaponAssets() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4B98C))(this);
	}
	template <typename T = float> T GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4BA80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4BB20))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4BB24))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadAssetsController*))(Il2CppBase() + 0x2E4BB28))(this);
	}

};

}
