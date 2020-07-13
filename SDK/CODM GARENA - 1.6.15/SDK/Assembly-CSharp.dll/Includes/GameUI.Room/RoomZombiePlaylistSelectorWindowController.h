#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombiePlaylistSelectorWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombiePlaylistSelectorWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ZombieMpDrops() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_EasylistCtr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_SelectIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlaylistDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDropsAvailables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141010))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x21410C0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x21411CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141270))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141340))(this);
	}
	template <typename T = void> T UpdateView(int32_t adaptWidth) {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2141410))(this, adaptWidth);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2141DA4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T HandleData() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141978))(this);
	}
	template <typename T = void> T SetSelectPlaylistDesc() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141B88))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x21428B4))(this);
	}
	template <typename T = void> T OnBtnXClick() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2142BB0))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2142C98))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2142E84))(this, list, userContext);
	}
	template <typename T = void> T RefreshDropsAvailables() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2141EC8))(this);
	}
	template <typename T = bool> static T SetSelectPlaylistDescm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2143110))(0, it);
	}
	template <typename T = bool> static T OnBtnConfirmClickm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x214313C))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143168))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143178))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(int32_t P0) {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2143188))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143190))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnXClick() {
		return ((T (*)(RoomZombiePlaylistSelectorWindowController*))(Il2CppBase() + 0x2143198))(this);
	}

};

}
