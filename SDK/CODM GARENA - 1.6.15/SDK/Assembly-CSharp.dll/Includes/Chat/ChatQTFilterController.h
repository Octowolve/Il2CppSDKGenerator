#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatQTFilterController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatQTFilterController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ChatDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FilterData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_QTDataList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_QTListCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ClickReport() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LargestIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_MaxShowNumber() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_LastDataCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = double> T& m_StartCDTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_CacheIsOpen() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& m_CacheRoomId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_IsWaitingResponse() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_IsWaitingFetchRes() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& m_NoTeamWindowCtr() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& CELL_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_ITEM_HEIGHT_TIME_SHOWED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& REFRESH_COUNT_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DELAY_LEVEL() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = double> static T& MAXIMUM_REFRESH_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& MAXIMUM_QUICK_JOIN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_Toggle2Mode() {
		return *(T*)((uintptr_t)this + 0x7C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyChatModes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateMicrophone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IECheckMewMsgNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMewMsgShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFilterData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFoldToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFilterToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMPRankClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleBRClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleBRRankClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMPClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMPRoomClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleBRRoomClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMPFeatureOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleBRFeatureOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleSameLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMicrophoneRequired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidateToggleSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogAfterConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamUpBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IEQuickJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJoinStepResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJoinQuitRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryQuickJoinAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryTeamUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshQTInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeExpired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTInfoFetchRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusMinusCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewMessageBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestAddQT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = uintptr_t> T get_ChatDataStore() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D5E378))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D5E428))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D5E4CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D5EC38))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D5FFD8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D61224))(this);
	}
	template <typename T = void> T SwitchChannel(uintptr_t type) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D54B30))(this, type);
	}
	template <typename T = void> T ForceRefresh() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D574FC))(this);
	}
	template <typename T = void> T RefreshView(bool reset, bool test) {
		return ((T (*)(ChatQTFilterController*, bool, bool))(Il2CppBase() + 0x1D6139C))(this, reset, test);
	}
	template <typename T = void> T PrepareData() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D619C8))(this);
	}
	template <typename T = bool> T ValidateChatInfo(uintptr_t info) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D61BD8))(this, info);
	}
	template <typename T = void> T ModifyChatModes(uintptr_t mode, bool isAdd) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, bool))(Il2CppBase() + 0x1D6215C))(this, mode, isAdd);
	}
	template <typename T = bool> T ValidateDelay(uintptr_t info) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D61D98))(this, info);
	}
	template <typename T = bool> T ValidateMicrophone(uintptr_t info) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D6207C))(this, info);
	}
	template <typename T = bool> T ValidateLanguage(uintptr_t info) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D61F4C))(this, info);
	}
	template <typename T = uintptr_t> T IECheckMewMsgNumber() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D6231C))(this);
	}
	template <typename T = void> T CheckMewMsgShouldShow() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D615CC))(this);
	}
	template <typename T = void> T InitFilterData() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62404))(this);
	}
	template <typename T = bool> T get_Toggle() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D1F4EC))(this);
	}
	template <typename T = void> T OnFoldToggleClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62C20))(this);
	}
	template <typename T = void> T OnFilterToggleClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62F9C))(this);
	}
	template <typename T = void> T OnToggleMPRankClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62740))(this);
	}
	template <typename T = void> T OnToggleBRClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D624D0))(this);
	}
	template <typename T = void> T OnToggleBRRankClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D63CC8))(this);
	}
	template <typename T = void> T OnToggleMPClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62608))(this);
	}
	template <typename T = void> T OnToggleMPRoomClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62878))(this);
	}
	template <typename T = void> T OnToggleBRRoomClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D63E00))(this);
	}
	template <typename T = void> T OnToggleMPFeatureOnly() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D63F38))(this);
	}
	template <typename T = void> T OnToggleBRFeatureOnly() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D64070))(this);
	}
	template <typename T = void> T OnToggleSameLanguage() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D629B0))(this);
	}
	template <typename T = void> T OnToggleMicrophoneRequired() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D62AE8))(this);
	}
	template <typename T = bool> T OnValidateToggleSet(bool choice) {
		return ((T (*)(ChatQTFilterController*, bool))(Il2CppBase() + 0x1D641A8))(this, choice);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D6439C))(this);
	}
	template <typename T = void> T TLogAfterConfirm() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D64574))(this);
	}
	template <typename T = void> T OnTeamUpBtnClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D64954))(this);
	}
	template <typename T = void> T OnQuickJoinBtnClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D64C04))(this);
	}
	template <typename T = uintptr_t> T CreateParam(bool addFailList) {
		return ((T (*)(ChatQTFilterController*, bool))(Il2CppBase() + 0x1D650DC))(this, addFailList);
	}
	template <typename T = uintptr_t> T IEQuickJoin() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D64FFC))(this);
	}
	template <typename T = void> T OnQuickJoinStepResult(uintptr_t msg) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D65644))(this, msg);
	}
	template <typename T = void> T OnQuickJoinQuitRoom(uintptr_t msg) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D65938))(this, msg);
	}
	template <typename T = void> T OnTryQuickJoinAgain(uintptr_t msg) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D659E4))(this, msg);
	}
	template <typename T = void> T OnTryTeamUp(uintptr_t msg) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D65AB8))(this, msg);
	}
	template <typename T = void> T OnRefreshBtnClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D65B64))(this);
	}
	template <typename T = uintptr_t> T RefreshQTInfo() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D65DAC))(this);
	}
	template <typename T = bool> T CheckTimeExpired(double startTime, double expireTime) {
		return ((T (*)(ChatQTFilterController*, double, double))(Il2CppBase() + 0x1D65E94))(this, startTime, expireTime);
	}
	template <typename T = void> T OnQTInfoFetchRes(uintptr_t msg) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D65FD0))(this, msg);
	}
	template <typename T = void> T OnPlusMinusCallback(int32_t value) {
		return ((T (*)(ChatQTFilterController*, int32_t))(Il2CppBase() + 0x1D5E9D4))(this, value);
	}
	template <typename T = void> T OnNewMessageBtnClick() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D662AC))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1D66428))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D664F0))(this, list, userContext);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1D665A4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T TestAddQT() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D667A8))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D6695C))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1D66A78))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(ChatQTFilterController*, uintptr_t))(Il2CppBase() + 0x1D66CA4))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D66D80))(this, table, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(ChatQTFilterController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x1D66EE8))(this, table, row, worldPos);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D66FB4))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67070))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatQTFilterController*))(Il2CppBase() + 0x1D67158))(this);
	}

};

}
