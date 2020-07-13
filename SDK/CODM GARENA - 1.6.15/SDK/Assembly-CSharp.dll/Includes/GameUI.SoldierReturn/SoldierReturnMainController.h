#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnMainController"));
	}

	template <typename T = int32_t> T& _selectIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotOnTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitChildTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChildTabResouce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTabRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTabRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTabItemName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabItemName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA6C0C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA6CB0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA72A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA7358))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA7410))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CA74C8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SoldierReturnMainController*, int32_t))(Il2CppBase() + 0x3CA7660))(this, tabIndex);
	}
	template <typename T = void> T RefreshRedDotOnTabChanged(int32_t index) {
		return ((T (*)(SoldierReturnMainController*, int32_t))(Il2CppBase() + 0x3CA7B64))(this, index);
	}
	template <typename T = void> T Show(uintptr_t childTab) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t))(Il2CppBase() + 0x3CA7C18))(this, childTab);
	}
	template <typename T = void> T InternalShow(uintptr_t childTab) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t))(Il2CppBase() + 0x3CA7CD0))(this, childTab);
	}
	template <typename T = void> T InitChildTab() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA6E94))(this);
	}
	template <typename T = void> T CheckChildTabResouce(uintptr_t childTab) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t))(Il2CppBase() + 0x3CA78D0))(this, childTab);
	}
	template <typename T = uintptr_t> T GetChildTab(uintptr_t childTab) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t))(Il2CppBase() + 0x3CA84C8))(this, childTab);
	}
	template <typename T = void> T ResetAllTabRed() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA7594))(this);
	}
	template <typename T = void> T ResetTabRed(int32_t tabIndex) {
		return ((T (*)(SoldierReturnMainController*, int32_t))(Il2CppBase() + 0x3CA87A8))(this, tabIndex);
	}
	template <typename T = void> T InitTimeLabel() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA6FE4))(this);
	}
	template <typename T = void> T ResetTime() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA7F50))(this);
	}
	template <typename T = void> T ResetTabItemName() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8278))(this);
	}
	template <typename T = Il2CppString*> T GetTabItemName(uintptr_t tab) {
		return ((T (*)(SoldierReturnMainController*, uintptr_t))(Il2CppBase() + 0x3CA8B6C))(this, tab);
	}
	template <typename T = uintptr_t> T get_activeChildTab() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8CF8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8DAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8DB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnMainController*))(Il2CppBase() + 0x3CA8DBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SoldierReturnMainController*, int32_t))(Il2CppBase() + 0x3CA8DC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshRedDotOnTabChanged(int32_t P0) {
		return ((T (*)(SoldierReturnMainController*, int32_t))(Il2CppBase() + 0x3CA8DCC))(this, P0);
	}

};

}
