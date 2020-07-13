#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowBattlePassController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowBattlePassController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A1C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A28C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A3B4))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A470))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A510))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A5B4))(this);
	}
	template <typename T = void> T OnResBattlePassData(uintptr_t msg) {
		return ((T (*)(LoadingFlowBattlePassController*, uintptr_t))(Il2CppBase() + 0x2E3A73C))(this, msg);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetLoadingTips() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A7FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A8F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A8F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A900))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowBattlePassController*))(Il2CppBase() + 0x2E3A908))(this);
	}

};

}
