#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginLoadSocialProfileController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginLoadSocialProfileController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryPlayerInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxConfirmCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*))(Il2CppBase() + 0x2E53E9C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*))(Il2CppBase() + 0x2E53F60))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*))(Il2CppBase() + 0x2E54000))(this);
	}
	template <typename T = void> T OnQueryPlayerInfoCallback(uintptr_t result) {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*, uintptr_t))(Il2CppBase() + 0x2E54238))(this, result);
	}
	template <typename T = void> T OnMessageBoxConfirmCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E547E8))(this, result, context);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*))(Il2CppBase() + 0x2E548B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginLoadSocialProfileController*))(Il2CppBase() + 0x2E548B8))(this);
	}

};

}
