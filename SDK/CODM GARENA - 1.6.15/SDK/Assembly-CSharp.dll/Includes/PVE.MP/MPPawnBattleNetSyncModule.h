#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPawnBattleNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPawnBattleNetSyncModule"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuySupplyDepotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceSetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MPPawnBattleNetSyncModule*))(Il2CppBase() + 0x4620944))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(MPPawnBattleNetSyncModule*))(Il2CppBase() + 0x46209EC))(this);
	}
	template <typename T = void> T OnSyncDead(uintptr_t Msg) {
		return ((T (*)(MPPawnBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x4620B3C))(this, Msg);
	}
	template <typename T = void> T OnBuySupplyDepotItem(uintptr_t inMsg) {
		return ((T (*)(MPPawnBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x4620BF0))(this, inMsg);
	}
	template <typename T = void> T OnForceSetPosition(uintptr_t Msg) {
		return ((T (*)(MPPawnBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x4621058))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPPawnBattleNetSyncModule*))(Il2CppBase() + 0x4621434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(MPPawnBattleNetSyncModule*))(Il2CppBase() + 0x462143C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncDead(uintptr_t P0) {
		return ((T (*)(MPPawnBattleNetSyncModule*, uintptr_t))(Il2CppBase() + 0x4621444))(this, P0);
	}

};

}
