#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRelationListEnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRelationListEnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ControlInviteShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFBBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B5E48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B5EEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B61D0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B6474))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B6770))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32B6A24))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(bool resetpostion) {
		return ((T (*)(FriendRelationListEnController*, bool))(Il2CppBase() + 0x32B6C3C))(this, resetpostion);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B71A0))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B726C))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, int32_t))(Il2CppBase() + 0x32B76D0))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B77FC))(this, grid, row, column);
	}
	template <typename T = void> T UpdateApplicateBadge() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B68AC))(this);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, int32_t))(Il2CppBase() + 0x32B78C8))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B7988))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32B7A80))(this, grid, path);
	}
	template <typename T = int32_t> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRelationListEnController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32B75CC))(this, grid, row, column);
	}
	template <typename T = void> T ControlInviteShow(bool bNoFriend) {
		return ((T (*)(FriendRelationListEnController*, bool))(Il2CppBase() + 0x32B6E3C))(this, bNoFriend);
	}
	template <typename T = void> T OnFBBtnClick() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B7D40))(this);
	}
	template <typename T = void> T OnGarenaBtnClick() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B80A8))(this);
	}
	template <typename T = void> T OnInviteFriendBtnClick() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8450))(this);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8540))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8640))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendRelationListEnController*))(Il2CppBase() + 0x32B8650))(this);
	}

};

}
