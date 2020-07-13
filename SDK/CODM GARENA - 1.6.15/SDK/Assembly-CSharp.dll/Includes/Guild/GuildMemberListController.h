#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberListController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MemberInfoList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& need_reposition() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideMenuBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickoffCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAppointViceCaptainBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAppointCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeposeViceCaptainBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeposeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchCaptainBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchCaptainCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildMemberItemMoreBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildMemberHideMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickImpeachBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnImpeachCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD5338))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD53DC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD5650))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD5AA4))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildMemberListController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BD5E20))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD60DC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD5EEC))(this);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildMemberListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BD6310))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(GuildMemberListController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BD63DC))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD66A4))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BD6798))(this, grid, row, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD6864))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3BD6924))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(GuildMemberListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BD6A1C))(this, grid, path);
	}
	template <typename T = void> T OnHideMenuBtnClick() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD6AD8))(this);
	}
	template <typename T = void> T HideMenu() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD620C))(this);
	}
	template <typename T = void> T ShowMenu(uintptr_t roleType, uintptr_t targetRoleType, uint64_t playerID, Il2CppVector3 position, Il2CppVector2 offset) {
		return ((T (*)(GuildMemberListController*, uintptr_t, uintptr_t, uint64_t, Il2CppVector3, Il2CppVector2))(Il2CppBase() + 0x3BD6B7C))(this, roleType, targetRoleType, playerID, position, offset);
	}
	template <typename T = void> T OnKickOffBtnClick() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD735C))(this);
	}
	template <typename T = void> T OnKickoffCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD758C))(this, result, userContext);
	}
	template <typename T = void> T OnAppointViceCaptainBtnClick() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD7680))(this);
	}
	template <typename T = void> T OnAppointCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD78A8))(this, result, userContext);
	}
	template <typename T = void> T OnDeposeViceCaptainBtn() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD799C))(this);
	}
	template <typename T = void> T OnDeposeCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD7BC4))(this, result, userContext);
	}
	template <typename T = void> T OnSwitchCaptainBtnClick() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD7CB8))(this);
	}
	template <typename T = void> T OnSwitchCaptainCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD7EE0))(this, result, userContext);
	}
	template <typename T = void> T OnGuildMemberItemMoreBtnClick(uintptr_t Msg) {
		return ((T (*)(GuildMemberListController*, uintptr_t))(Il2CppBase() + 0x3BD7FD4))(this, Msg);
	}
	template <typename T = void> T OnGuildMemberHideMenu(uintptr_t Msg) {
		return ((T (*)(GuildMemberListController*, uintptr_t))(Il2CppBase() + 0x3BD8344))(this, Msg);
	}
	template <typename T = void> T OnClickImpeachBtn() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD83F0))(this);
	}
	template <typename T = void> T OnImpeachCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMemberListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BD86A8))(this, result, userContext);
	}
	template <typename T = void> T Reposition() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD878C))(this);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8DB8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8EE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8EE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8EF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8EF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildMemberListController*))(Il2CppBase() + 0x3BD8F00))(this);
	}

};

}
