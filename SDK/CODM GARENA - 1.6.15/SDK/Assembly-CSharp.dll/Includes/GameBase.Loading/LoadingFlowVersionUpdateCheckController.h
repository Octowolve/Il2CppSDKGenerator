#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowVersionUpdateCheckController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowVersionUpdateCheckController"));
	}

	template <typename T = uintptr_t> T& m_VersionUpdateCheckController() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyHotFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69284))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69348))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E693E8))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69488))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E69AB4))(this, result, errorMessage);
	}
	template <typename T = void> T ApplyHotFix() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69A1C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69DF8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69DFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*))(Il2CppBase() + 0x2E69E00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowVersionUpdateCheckController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E69E04))(this, P0, P1);
	}

};

}
