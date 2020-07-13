#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class AIPawnBattleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "AIPawnBattleNetSyncModule"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBodyFragment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AIPawnBattleNetSyncModule*))(Il2CppBase() + 0x49C3D8C))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(AIPawnBattleNetSyncModule*))(Il2CppBase() + 0x49C3E34))(this);
	}
	template <typename T = void> T OnSyncBodyFragment(uintptr_t Msg) {
		return ((T (*)(AIPawnBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x49C3F44))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AIPawnBattleNetSyncModule*))(Il2CppBase() + 0x49C42A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(AIPawnBattleNetSyncModule*))(Il2CppBase() + 0x49C42B0))(this);
	}

};

}
