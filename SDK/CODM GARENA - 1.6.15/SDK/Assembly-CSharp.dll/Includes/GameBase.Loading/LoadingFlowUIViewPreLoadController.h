#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowUIViewPreLoadController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowUIViewPreLoadController"));
	}

	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpectedProcessingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUIViewPreLoadFlowResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateFlowProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E688D8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68A48))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68B18))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68BDC))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68DF4))(this);
	}
	template <typename T = float> T GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68E94))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E68F34))(this);
	}
	template <typename T = void> T OnUIViewPreLoadFlowResult(uintptr_t Msg) {
		return ((T (*)(LoadingFlowUIViewPreLoadController*, uintptr_t))(Il2CppBase() + 0x2E68FD4))(this, Msg);
	}
	template <typename T = void> T OnUpdateFlowProgress(uintptr_t Msg) {
		return ((T (*)(LoadingFlowUIViewPreLoadController*, uintptr_t))(Il2CppBase() + 0x2E69094))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691D4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691D8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691DC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowUIViewPreLoadController*))(Il2CppBase() + 0x2E691E0))(this);
	}

};

}
