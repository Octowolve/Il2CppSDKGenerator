#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowGameStatController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowGameStatController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47938))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E479FC))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47AA4))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47B44))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47BE4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47C8C))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47D34))(this);
	}
	template <typename T = void> T RequestGameStat() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47ECC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47ED4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47ED8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47EDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47EE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowGameStatController*))(Il2CppBase() + 0x2E47EEC))(this);
	}

};

}
