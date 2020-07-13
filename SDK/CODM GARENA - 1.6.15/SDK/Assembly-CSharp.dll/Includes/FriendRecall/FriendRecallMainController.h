#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FriendRecall {

class FriendRecallMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FriendRecall", "FriendRecallMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_NeedReposition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmptyInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecallFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRewardView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D0A50))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D1420))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D14C8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D18C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D1964))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D1B84))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D0CA4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32D1D78))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnTipsBtnClick() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D1E7C))(this);
	}
	template <typename T = void> T OnEmptyInviteBtnClick() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D1F6C))(this);
	}
	template <typename T = void> T GoDetailBtnClick() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D21F0))(this);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32D22E0))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32D23AC))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x32D2624))(this, grid, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x32D26E4))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32D27F0))(this, grid, row, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32D28E8))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendRecallMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32D29B4))(this, grid, path);
	}
	template <typename T = void> T OnRecallFriend(uint64_t PlayerID) {
		return ((T (*)(FriendRecallMainController*, uint64_t))(Il2CppBase() + 0x32D2A70))(this, PlayerID);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D0D90))(this);
	}
	template <typename T = void> T UpdateRewardView() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D2E28))(this);
	}
	template <typename T = void> T UpdateInfom__0() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D3424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D3544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D354C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D3554))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D355C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendRecallMainController*))(Il2CppBase() + 0x32D3564))(this);
	}

};

}
