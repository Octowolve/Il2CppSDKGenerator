#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadLevelController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelByCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpectedProcessingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadLevelFlowResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateFlowProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4C670))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4C7E0))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4C8B0))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4C974))(this);
	}
	template <typename T = bool> T CancelByCondition() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4CD2C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4CE84))(this);
	}
	template <typename T = float> T GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4CF24))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4CFC4))(this);
	}
	template <typename T = void> T OnLoadLevelFlowResult(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoadLevelController*, uintptr_t))(Il2CppBase() + 0x2E4D064))(this, Msg);
	}
	template <typename T = void> T OnUpdateFlowProgress(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoadLevelController*, uintptr_t))(Il2CppBase() + 0x2E4D300))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D430))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D438))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D440))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D444))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D448))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoadLevelController*))(Il2CppBase() + 0x2E4D44C))(this);
	}

};

}
