#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPawnEventProcessor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestBuyOperation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestNotifyServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestBeginBuildObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestFinishBuildObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHPRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(MPPawnEventProcessor*))(Il2CppBase() + 0x462144C))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(MPPawnEventProcessor*))(Il2CppBase() + 0x46216F8))(this);
	}
	template <typename T = void> T OnRequestBuyOperation(uintptr_t inMsg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x462191C))(this, inMsg);
	}
	template <typename T = void> T OnRequestNotifyServer(uintptr_t inMsg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4621B7C))(this, inMsg);
	}
	template <typename T = void> T OnRequestBeginBuildObstacle(uintptr_t inMsg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x46222A0))(this, inMsg);
	}
	template <typename T = void> T OnRequestFinishBuildObstacle(uintptr_t inMsg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x46223BC))(this, inMsg);
	}
	template <typename T = void> T OnSwitchKnife(uintptr_t Msg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x46224D8))(this, Msg);
	}
	template <typename T = void> T OnNextWeapon(uintptr_t Msg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x46225FC))(this, Msg);
	}
	template <typename T = void> T OnLocalPlayerUseItem(uintptr_t Msg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x46226B0))(this, Msg);
	}
	template <typename T = bool> T IsHPRecover(uint64_t inItemID) {
		return ((T (*)(MPPawnEventProcessor*, uint64_t))(Il2CppBase() + 0x46227F0))(this, inItemID);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4622914))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(MPPawnEventProcessor*))(Il2CppBase() + 0x4622CEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(MPPawnEventProcessor*))(Il2CppBase() + 0x4622CF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNextWeapon(uintptr_t P0) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4622CFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerUseItem(uintptr_t P0) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4622D04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncUseItem(uintptr_t P0) {
		return ((T (*)(MPPawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x4622D0C))(this, P0);
	}

};

}
