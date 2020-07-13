#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatFriendController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatFriendController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mFriendDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& newMsgTipOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& friendNameOffset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChatMessages() {
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
	template <typename T = Il2CppString*> T& mPendingContent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& menuPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x84);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageTableDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFriendTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlideDownLoadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendTalkClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceToTextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendMsgResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAfterTextTranslated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOnlineNum() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnMenuBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentChatFriendEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentChatFriendID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoToFriendViewBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Align() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3DAE0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3DB84))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3DF8C))(this);
	}
	template <typename T = void> T OnMessageTableDragEnd() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3E790))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3E8D8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3ED38))(this);
	}
	template <typename T = void> T RefreshFriendTable() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3EE54))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3F1E4))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3F28C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3F334))(this);
	}
	template <typename T = void> T UpdateChatInfo() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3F47C))(this);
	}
	template <typename T = void> T SlideDownLoadRecord(int32_t obj) {
		return ((T (*)(ChatFriendController*, int32_t))(Il2CppBase() + 0x1D3FB98))(this, obj);
	}
	template <typename T = void> T OnSendTalkClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3FF40))(this);
	}
	template <typename T = void> T OnVoiceToTextBtnClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D407E0))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(ChatFriendController*, Il2CppString*))(Il2CppBase() + 0x1D4014C))(this, msg);
	}
	template <typename T = void> T OnSendMsgResp(uintptr_t message) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D40AD0))(this, message);
	}
	template <typename T = void> T UpdateAfterTextTranslated(uintptr_t msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D40BE4))(this, msg);
	}
	template <typename T = void> T OnJoinGuild(uintptr_t msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D40CB4))(this, msg);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatFriendController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1D40DEC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatFriendController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D4164C))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatFriendController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1D4182C))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D43E20))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatFriendController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D43F70))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatFriendController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x1D44580))(this, table, row, worldPos);
	}
	template <typename T = float> T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D440F4))(this, mode);
	}
	template <typename T = void> T UpdateOnlineNum() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D412B4))(this);
	}
	template <typename T = void> T IsEnableScrollView(uintptr_t table, int32_t count, int32_t limit) {
		return ((T (*)(ChatFriendController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1D44C00))(this, table, count, limit);
	}
	template <typename T = void> T ShowBottomNewMsgTips() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D3F734))(this);
	}
	template <typename T = void> T OnNewMsgTipsBtnClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D44CF4))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D44DF8))(this);
	}
	template <typename T = void> T OnMenuBtnClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D45040))(this);
	}
	template <typename T = void> T SetCurrentChatFriendEmpty(uintptr_t Msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D4525C))(this, Msg);
	}
	template <typename T = void> T SetCurrentChatFriendID(uintptr_t Msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D453B8))(this, Msg);
	}
	template <typename T = void> T OnGoToFriendViewBtnClick() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D457A4))(this);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D45A90))(this);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D45CF8))(this, msg);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t message) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D4608C))(this, message);
	}
	template <typename T = void> T Align() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D464B8))(this);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D4665C))(this, msg);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D467B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46AEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46AF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46AF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46AFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46B00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46B04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46B0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatFriendController*))(Il2CppBase() + 0x1D46B14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQTFilterViewFold(uintptr_t P0) {
		return ((T (*)(ChatFriendController*, uintptr_t))(Il2CppBase() + 0x1D46B1C))(this, P0);
	}

};

}
