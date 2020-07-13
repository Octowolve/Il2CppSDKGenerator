#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRelationListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRelationListController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateApplicateBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B47A4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B4848))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B4914))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B49E0))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B4CDC))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendRelationListController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32B4F90))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(bool resetpostion) {
		return ((T (*)(FriendRelationListController*, bool))(Il2CppBase() + 0x32B5144))(this, resetpostion);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRelationListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B5338))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendRelationListController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B5404))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendRelationListController*, uintptr_t, int32_t))(Il2CppBase() + 0x32B5820))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B594C))(this, grid, row, column);
	}
	template <typename T = void> T UpdateApplicateBadge() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B4E18))(this);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendRelationListController*, uintptr_t, int32_t))(Il2CppBase() + 0x32B5A18))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B5AD8))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRelationListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B5BD0))(this, grid, path);
	}
	template <typename T = int32_t> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B571C))(this, grid, row, column);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B5C8C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B5D84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B5D8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B5D94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendRelationListController*))(Il2CppBase() + 0x32B5D9C))(this);
	}

};

}
