#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginRecoverAccountController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginRecoverAccountController"));
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

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E59250))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E59314))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E593B4))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E59454))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E59734))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E59738))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginRecoverAccountController*))(Il2CppBase() + 0x2E5973C))(this);
	}

};

}
