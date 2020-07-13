#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InviteNewbie {

class InviteNewbieMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InviteNewbie", "InviteNewbieMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_dataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_TabCache() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_BindFlag() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InviteNewbiePlayerList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& need_reposition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_CodeCacheFlag() {
		return *(T*)((uintptr_t)this + 0x51);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelAwardShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCodeView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInviteActivePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInviteNewbieBindSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnListBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCodetnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTabRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3184380))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3184424))(this);
	}
	template <typename T = void> T SetTimeDesc() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x31845B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3184A28))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3184E94))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3185228))(this);
	}
	template <typename T = void> T UpdateLevelAwardShow() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3186200))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3186A84))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateListView() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3186B68))(this);
	}
	template <typename T = void> T UpdateCodeView() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3186E74))(this);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31877C0))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x318788C))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3187B5C))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3187C68))(this, grid, row, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3187D34))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3187DF4))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3187EF8))(this, grid, path);
	}
	template <typename T = void> T OnTipsClick() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3187FB4))(this);
	}
	template <typename T = void> T UpdateInviteActivePanel() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x31856F8))(this);
	}
	template <typename T = void> T OnBindBtnClick() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3188218))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3188514))(this);
	}
	template <typename T = void> T OnNotifyInviteNewbieBindSuccess(uintptr_t msg) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t))(Il2CppBase() + 0x3188704))(this, msg);
	}
	template <typename T = void> T OnCopyBtnClick() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x31887B0))(this);
	}
	template <typename T = void> T OnShareBtnClick() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3188D6C))(this);
	}
	template <typename T = void> T OnListBtnClicked() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3188FA4))(this);
	}
	template <typename T = void> T OnCodetnClicked() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3189184))(this);
	}
	template <typename T = void> T UpdateTabRedPoint() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x31855B4))(this);
	}
	template <typename T = void> T SetDefaultTab() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3185DE8))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3189484))(this);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t eventMsg) {
		return ((T (*)(InviteNewbieMainController*, uintptr_t))(Il2CppBase() + 0x3189A04))(this, eventMsg);
	}
	template <typename T = void> T UpdateListViewm__0() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3189C58))(this);
	}
	template <typename T = void> T WillTabShowm__1() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x3189D78))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(InviteNewbieMainController*))(Il2CppBase() + 0x318A5F8))(this);
	}

};

}
