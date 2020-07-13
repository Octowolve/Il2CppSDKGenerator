#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatSquadController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatSquadController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mRoomDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& newMsgTipOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& curPlayerList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& flowToLastCell() {
		return *(T*)((uintptr_t)this + 0x78);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceToTextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendTalkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSquadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAfterTextTranslated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBottomNewMsgTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewMsgTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshQTRelatedWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A0F378))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A0F41C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A0F79C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A0FC2C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A0FFC0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A100E0))(this);
	}
	template <typename T = void> T OnVoiceToTextBtnClick() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A10228))(this);
	}
	template <typename T = void> T OnSendTalkBtnClick() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A10418))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(ChatSquadController*, Il2CppString*))(Il2CppBase() + 0x3A104E8))(this, msg);
	}
	template <typename T = void> T UpdateSquadInfo() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A10BDC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTeamPlayerList() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A10EE8))(this);
	}
	template <typename T = void> T UpdateChatInfo() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A111A4))(this);
	}
	template <typename T = void> T UpdateAfterTextTranslated(uintptr_t msg) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A11868))(this, msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatSquadController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3A11938))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatSquadController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A11ADC))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatSquadController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A11C9C))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A1240C))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatSquadController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A12540))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatSquadController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3A12B04))(this, table, row, worldPos);
	}
	template <typename T = void> T IsEnableScrollView(uintptr_t table, int32_t count, int32_t limit) {
		return ((T (*)(ChatSquadController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3A12FBC))(this, table, count, limit);
	}
	template <typename T = void> T ShowBottomNewMsgTips() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A11404))(this);
	}
	template <typename T = void> T OnNewMsgTipsBtnClick() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A130B0))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A131C8))(this);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13410))(this);
	}
	template <typename T = float> T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A12704))(this, mode);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A13678))(this, msg);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t message) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A13A0C))(this, message);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A13D1C))(this, msg);
	}
	template <typename T = void> T RefreshQTRelatedWidget() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13E68))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F48))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatSquadController*))(Il2CppBase() + 0x3A13FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQTFilterViewFold(uintptr_t P0) {
		return ((T (*)(ChatSquadController*, uintptr_t))(Il2CppBase() + 0x3A13FA8))(this, P0);
	}

};

}
