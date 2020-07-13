#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatRoomController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatRoomController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mRoomDataStore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allPlayersOfRoom() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& flowToLastCell() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& regularSeparator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& rebelSeparator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& observerSeparator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& brPlayerSeparator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& newMsgTipOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceToTextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendTalkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSquadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAfterTextTranslated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBottomNewMsgTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewMsgTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomAllPlayrList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToAllPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Align() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A004E4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A00588))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A00908))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A00D98))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A0112C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A0124C))(this);
	}
	template <typename T = void> T OnVoiceToTextBtnClick() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A01394))(this);
	}
	template <typename T = void> T OnSendTalkBtnClick() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A01584))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(ChatRoomController*, Il2CppString*))(Il2CppBase() + 0x3A01654))(this, msg);
	}
	template <typename T = void> T UpdateSquadInfo() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A01D48))(this);
	}
	template <typename T = void> T UpdateChatInfo() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A023B0))(this);
	}
	template <typename T = void> T UpdateAfterTextTranslated(uintptr_t msg) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A02A74))(this, msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatRoomController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3A02B44))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatRoomController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A02CE8))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatRoomController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A02F2C))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A0388C))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatRoomController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A039C0))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatRoomController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3A04004))(this, table, row, worldPos);
	}
	template <typename T = void> T ShowBottomNewMsgTips() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A02610))(this);
	}
	template <typename T = void> T OnNewMsgTipsBtnClick() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A044CC))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A045E4))(this);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A0482C))(this);
	}
	template <typename T = float> T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A03C04))(this, mode);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A04A94))(this, msg);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t message) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A04E28))(this, message);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoomAllPlayrList() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A02134))(this);
	}
	template <typename T = void> T AddToAllPlayerList(Il2CppList<uintptr_t>* allPlayerList, uintptr_t type) {
		return ((T (*)(ChatRoomController*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3A054DC))(this, allPlayerList, type);
	}
	template <typename T = void> T Align() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05B84))(this);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A05C64))(this, msg);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05DB0))(this);
	}
	template <typename T = int32_t> static T AddToAllPlayerListm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A05DE0))(0, a, b);
	}
	template <typename T = int32_t> static T AddToAllPlayerListm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A05E68))(0, a, b);
	}
	template <typename T = int32_t> static T AddToAllPlayerListm__3(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A05EF0))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05F90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatRoomController*))(Il2CppBase() + 0x3A05FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnQTFilterViewFold(uintptr_t P0) {
		return ((T (*)(ChatRoomController*, uintptr_t))(Il2CppBase() + 0x3A05FA8))(this, P0);
	}

};

}
