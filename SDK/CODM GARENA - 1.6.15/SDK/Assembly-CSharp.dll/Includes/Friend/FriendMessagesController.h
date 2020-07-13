#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendMessagesController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendMessagesController"));
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
	template <typename T = bool> T& isAllBtnClick() {
		return *(T*)((uintptr_t)this + 0x59);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnFromPersonInfoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIgnoreStrangerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIgnoreStrangerChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreeAllBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefuseAllBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseFriendPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Notify2AnswerRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnswerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnswerAllResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAddFriendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AB338))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AB3DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AB914))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32ABC14))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32ABDF4))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendMessagesController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32AC36C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(bool resetpostion, bool isSort) {
		return ((T (*)(FriendMessagesController*, bool, bool))(Il2CppBase() + 0x32AC4AC))(this, resetpostion, isSort);
	}
	template <typename T = void> T OnGotoPersonInfoView(uintptr_t Msg) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AC6D0))(this, Msg);
	}
	template <typename T = void> T OnReturnFromPersonInfoView(uintptr_t Msg) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AC800))(this, Msg);
	}
	template <typename T = void> T SetIgnoreStrangerState(uintptr_t Msg) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AC910))(this, Msg);
	}
	template <typename T = void> T OnIgnoreStrangerChange() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32ACB1C))(this);
	}
	template <typename T = void> T OnAgreeAllBtnClick() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32ACF24))(this);
	}
	template <typename T = void> T OnRefuseAllBtnClick() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AD6DC))(this);
	}
	template <typename T = void> T OnCloseFriendPopupWindow(uintptr_t Msg) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AD8E8))(this, Msg);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendMessagesController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32AD9A4))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendMessagesController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32ADA70))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendMessagesController*, uintptr_t, int32_t))(Il2CppBase() + 0x32ADCF4))(this, grid, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendMessagesController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32ADE20))(this, grid, row, column);
	}
	template <typename T = void> T Notify2AnswerRequest(uintptr_t message) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32ADEEC))(this, message);
	}
	template <typename T = void> T AnswerResponse(uintptr_t message) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AE2A8))(this, message);
	}
	template <typename T = void> T AnswerAllResponse(uintptr_t message) {
		return ((T (*)(FriendMessagesController*, uintptr_t))(Il2CppBase() + 0x32AED8C))(this, message);
	}
	template <typename T = void> T IsAddFriendRequest() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AC120))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AF9E8))(this);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendMessagesController*, uintptr_t, int32_t))(Il2CppBase() + 0x32AFAB0))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendMessagesController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32AFB70))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendMessagesController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32AFC80))(this, grid, path);
	}
	template <typename T = void> T TlogReport(Il2CppString* inviterplayerid) {
		return ((T (*)(FriendMessagesController*, Il2CppString*))(Il2CppBase() + 0x32AD238))(this, inviterplayerid);
	}
	template <typename T = void> T StopBtnClick() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AD448))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFD3C))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFDFC))(this);
	}
	template <typename T = bool> static T OnAgreeAllBtnClickm__1(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32AFE08))(0, item);
	}
	template <typename T = bool> static T OnRefuseAllBtnClickm__2(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32AFE3C))(0, item);
	}
	template <typename T = void> T StopBtnClickm__3() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE70))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFE9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFEA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(FriendMessagesController*))(Il2CppBase() + 0x32AFEAC))(this);
	}

};

}
