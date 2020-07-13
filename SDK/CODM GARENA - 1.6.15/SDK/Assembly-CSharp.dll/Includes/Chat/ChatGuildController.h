#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatGuildController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatGuildController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mGuildDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mMemberDataStore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> static T& bOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mGuildNameOffset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& newMsgTipOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& flowToLastCell() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& isLoading() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& isMoving() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = float> static T& kLineHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendTalkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceToTextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJohnClanBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoardEditBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoardEditSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoClanTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlideDownLoadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBillboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAfterTextTranslated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBottomNewMsgTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewMsgTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClearGuildChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshQTRelatedWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D46CEC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D46DC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D47280))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D47944))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D47E58))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D47FE4))(this);
	}
	template <typename T = void> T OnSendTalkBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D481AC))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(ChatGuildController*, Il2CppString*))(Il2CppBase() + 0x1D482AC))(this, msg);
	}
	template <typename T = void> T OnVoiceToTextBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D48934))(this);
	}
	template <typename T = void> T OnJohnClanBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D48B54))(this);
	}
	template <typename T = void> T OnBoardEditBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D48FC0))(this);
	}
	template <typename T = void> T OnBoardEditSubmit() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D491B4))(this);
	}
	template <typename T = void> T OnNoClanTipsBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D49514))(this);
	}
	template <typename T = void> T UpdateChatInfo() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D496E0))(this);
	}
	template <typename T = void> T SlideDownLoadRecord(int32_t obj) {
		return ((T (*)(ChatGuildController*, int32_t))(Il2CppBase() + 0x1D49DF8))(this, obj);
	}
	template <typename T = void> T UpdateMemberInfo() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4A340))(this);
	}
	template <typename T = void> T UpdateBillboard() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4A6E4))(this);
	}
	template <typename T = void> T UpdateAfterTextTranslated(uintptr_t msg) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4A960))(this, msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatGuildController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1D4AA60))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatGuildController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D4ACF4))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatGuildController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1D4AEE8))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4BCDC))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatGuildController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D4BE48))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatGuildController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x1D4C528))(this, table, row, worldPos);
	}
	template <typename T = void> T IsEnableScrollView(uintptr_t table, int32_t count, int32_t limit) {
		return ((T (*)(ChatGuildController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1D4C994))(this, table, count, limit);
	}
	template <typename T = void> T ShowBottomNewMsgTips() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D49964))(this);
	}
	template <typename T = void> T OnNewMsgTipsBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4CAB8))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4CBF4))(this);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4CE2C))(this);
	}
	template <typename T = float> T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4C014))(this, mode);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4D0C0))(this, msg);
	}
	template <typename T = void> T OnClearGuildChat(uintptr_t message) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4D484))(this, message);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t message) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4D758))(this, message);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4DB9C))(this, msg);
	}
	template <typename T = void> T RefreshQTRelatedWidget() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4DD14))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4DF6C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatGuildController*))(Il2CppBase() + 0x1D4E4F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQTFilterViewFold(uintptr_t P0) {
		return ((T (*)(ChatGuildController*, uintptr_t))(Il2CppBase() + 0x1D4E500))(this, P0);
	}

};

}
