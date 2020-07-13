#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendBlackController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendBlackController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mBShowEffect() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnFromPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseFriendPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CDFDB8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CDFE5C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE0038))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE0140))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE0320))(this);
	}
	template <typename T = void> T OnGotoPersonInfoView(uintptr_t Msg) {
		return ((T (*)(FriendBlackController*, uintptr_t))(Il2CppBase() + 0x3CE0440))(this, Msg);
	}
	template <typename T = void> T OnReturnFromPersonInfoView(uintptr_t Msg) {
		return ((T (*)(FriendBlackController*, uintptr_t))(Il2CppBase() + 0x3CE0570))(this, Msg);
	}
	template <typename T = void> T OnCloseFriendPopupWindow(uintptr_t Msg) {
		return ((T (*)(FriendBlackController*, uintptr_t))(Il2CppBase() + 0x3CE0680))(this, Msg);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendBlackController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CE073C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(bool resetpostion) {
		return ((T (*)(FriendBlackController*, bool))(Il2CppBase() + 0x3CE080C))(this, resetpostion);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendBlackController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE09E4))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendBlackController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE0AB0))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendBlackController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CE0F0C))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendBlackController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3CE1018))(this, grid, row, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendBlackController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CE10E4))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendBlackController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3CE11A4))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendBlackController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CE12B4))(this, grid, path);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE1370))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE142C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE1434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE143C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE1444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE144C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE1454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(FriendBlackController*))(Il2CppBase() + 0x3CE145C))(this);
	}

};

}
