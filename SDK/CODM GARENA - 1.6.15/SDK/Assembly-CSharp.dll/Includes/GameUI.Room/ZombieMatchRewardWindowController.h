#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class ZombieMatchRewardWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "ZombieMatchRewardWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_SelectInstanceId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ZombieMpListClassifyByInstanceId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ZombieMpDrops() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_RefreshDropsTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ZombieInstaneListController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& CELL_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySelectInstanceGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombieMpInstanceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvailablesDropsNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDropsResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4468440))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x44684F0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x44685A0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x44686AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4468750))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4468920))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4468A18))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(int32_t instanceId) {
		return ((T (*)(ZombieMatchRewardWindowController*, int32_t))(Il2CppBase() + 0x4468F1C))(this, instanceId);
	}
	template <typename T = void> T OnNotifySelectInstanceGroup(uintptr_t message) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t))(Il2CppBase() + 0x446973C))(this, message);
	}
	template <typename T = void> T OnBtnXClick() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4469A34))(this);
	}
	template <typename T = void> T SetZombieMpInstanceInfo() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4469564))(this);
	}
	template <typename T = void> T SetAvailablesDropsNum() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x4468B3C))(this);
	}
	template <typename T = void> T HandleDropsResetTime(bool Init) {
		return ((T (*)(ZombieMatchRewardWindowController*, bool))(Il2CppBase() + 0x446A030))(this, Init);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x446A594))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x446A65C))(this, list, userContext);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x446A710))(this);
	}
	template <typename T = bool> static T UpdateViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x446A718))(0, it);
	}
	template <typename T = bool> T SetZombieMpInstanceInfom__2(uintptr_t it) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t))(Il2CppBase() + 0x446A744))(this, it);
	}
	template <typename T = bool> T SetAvailablesDropsNumm__3(uintptr_t it) {
		return ((T (*)(ZombieMatchRewardWindowController*, uintptr_t))(Il2CppBase() + 0x446A788))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x446A7CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x446A7D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x446A7DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZombieMatchRewardWindowController*))(Il2CppBase() + 0x446A7E4))(this);
	}

};

}
