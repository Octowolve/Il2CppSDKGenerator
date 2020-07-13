#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatWorldController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatWorldController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& sendCDTimer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> static T& canSendWorldChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& worldChatCDTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int64_t> static T& LocalStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& SendMsgCDTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& newMsgTipOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& noMessageBgOffset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& warZoneLeftOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& warZoneRightOffset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& worldChatBigHornCell() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& flowToLastCell() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> T& cacheBigHornPlayerID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& cacheBigHornTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> static T& kLineHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& curTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& sendCDDeltaTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& tempCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> static T& countPerSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceToTextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendTalkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAfterTextTranslated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinGuild() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopMessageBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSendMsgCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBigHornCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HideBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChatCDTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Align() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A15D9C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A15E70))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A16618))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A16BBC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A16FF0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A171FC))(this);
	}
	template <typename T = void> T OnVoiceToTextBtnClick() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A17374))(this);
	}
	template <typename T = void> T OnSendTalkBtnClick() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A17594))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(ChatWorldController*, Il2CppString*))(Il2CppBase() + 0x3A17694))(this, msg);
	}
	template <typename T = void> T UpdateChatInfo() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A17FB8))(this);
	}
	template <typename T = void> T UpdateBigHorn() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A18774))(this);
	}
	template <typename T = void> T HideBigHorn(uintptr_t msg) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A18AD8))(this, msg);
	}
	template <typename T = void> T UpdateAfterTextTranslated(uintptr_t msg) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A18D74))(this, msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatWorldController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3A18E74))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnJoinGuild(uintptr_t msg) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1909C))(this, msg);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatWorldController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A19204))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatWorldController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A19418))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A19D78))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatWorldController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A19E94))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatWorldController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3A1A634))(this, table, row, worldPos);
	}
	template <typename T = void> T IsEnableScrollView(uintptr_t table, int32_t count, int32_t limit) {
		return ((T (*)(ChatWorldController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3A1A730))(this, table, count, limit);
	}
	template <typename T = void> T ShowBottomNewMsgTips() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A182E0))(this);
	}
	template <typename T = void> T OnNewMsgTipsBtnClick() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1A854))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1A99C))(this);
	}
	template <typename T = void> T OnTopMessageBtnClick() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1AC94))(this);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1ADB4))(this);
	}
	template <typename T = float> T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1A04C))(this, mode);
	}
	template <typename T = void> T RefreshSendMsgCD() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1B048))(this);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1B9B4))(this, msg);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t message) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1BD78))(this, message);
	}
	template <typename T = uintptr_t> T CreateBigHornCell(uintptr_t assetID, uintptr_t parent, void* OnCellClick, bool active) {
		return ((T (*)(ChatWorldController*, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x3A163D0))(this, assetID, parent, OnCellClick, active);
	}
	template <typename T = void> T HideBigHorn_1() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1C3AC))(this);
	}
	template <typename T = void> static T SetChatCDTime(uintptr_t msgType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A1C4C8))(0, msgType);
	}
	template <typename T = void> T Align() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1C63C))(this);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1C880))(this, msg);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatWorldController*))(Il2CppBase() + 0x3A1CAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQTFilterViewFold(uintptr_t P0) {
		return ((T (*)(ChatWorldController*, uintptr_t))(Il2CppBase() + 0x3A1CB04))(this, P0);
	}

};

}
