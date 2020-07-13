#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendListController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mSearched() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mResultNumber() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mRecommendNumber() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& mAllNumber() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBlackListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateApplicateBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControlFriendUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A596C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A5A10))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A5AB8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A5C70))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A5E04))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A61D8))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendListController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32A648C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(bool resetpostion) {
		return ((T (*)(FriendListController*, bool))(Il2CppBase() + 0x32A66A4))(this, resetpostion);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A6894))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendListController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A6960))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendListController*, uintptr_t, int32_t))(Il2CppBase() + 0x32A6E08))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A6F34))(this, grid, row, column);
	}
	template <typename T = void> T OnBlackListBtnClick() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7000))(this);
	}
	template <typename T = void> T OnApplicationBtnClick() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A70F0))(this);
	}
	template <typename T = void> T UpdateApplicateBadge() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A6314))(this);
	}
	template <typename T = void> T OnDeleteFriendBtnClick(uint64_t playerID) {
		return ((T (*)(FriendListController*, uint64_t))(Il2CppBase() + 0x32A71E0))(this, playerID);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendListController*, uintptr_t, int32_t))(Il2CppBase() + 0x32A73D4))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A7494))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A758C))(this, grid, path);
	}
	template <typename T = int32_t> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A6D04))(this, grid, row, column);
	}
	template <typename T = void> T ControlFriendUI() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A603C))(this);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7648))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7740))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendListController*))(Il2CppBase() + 0x32A7760))(this);
	}

};

}
