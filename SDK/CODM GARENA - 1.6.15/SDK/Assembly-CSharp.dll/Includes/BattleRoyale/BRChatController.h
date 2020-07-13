#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mV2WCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bPreloadObjsCreate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& curSpec() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mChannel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& channelIndex() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadChatAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOpenUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableChatButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChatEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRBagSlotItemChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChatInputView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDontDisturb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNewMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInGameChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitchChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickVoiceToWordBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDontDisturbToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowTableDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapperFriendInputTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendCellIHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFriendCellItemDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendCellItemPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T get_frontEndChatDS() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E5750))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E57EC))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E5890))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E5898))(this);
	}
	template <typename T = void> T PreloadChatAssets() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E6548))(this);
	}
	template <typename T = void> T SetChannelMode() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E6390))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E6E94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E73C4))(this);
	}
	template <typename T = void> T NotifyOpenUI(uintptr_t msg) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E77F8))(this, msg);
	}
	template <typename T = void> T DisableChatButton() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E7B9C))(this);
	}
	template <typename T = bool> T IsChatEnable() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E7C58))(this);
	}
	template <typename T = void> T OnBRBagSlotItemChanged(uintptr_t msg) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E7D30))(this, msg);
	}
	template <typename T = void> T ShowChatInputView() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E7F60))(this);
	}
	template <typename T = void> T ShowDontDisturb(bool isShow) {
		return ((T (*)(BRChatController*, bool))(Il2CppBase() + 0x24E7E34))(this, isShow);
	}
	template <typename T = void> T OnInputDeselect() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E84B4))(this);
	}
	template <typename T = void> T SendMsg(Il2CppString* msg) {
		return ((T (*)(BRChatController*, Il2CppString*))(Il2CppBase() + 0x24E8584))(this, msg);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E8B1C))(this);
	}
	template <typename T = void> T ShowNewMsg(uintptr_t message) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E8CDC))(this, message);
	}
	template <typename T = void> T HideInGameChat(uintptr_t message) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E922C))(this, message);
	}
	template <typename T = uintptr_t> T get_CurrentSpec() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E92F0))(this);
	}
	template <typename T = void> T OnTabChanged(uintptr_t spec) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E92F8))(this, spec);
	}
	template <typename T = uintptr_t> T get_CurrentChannel() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E9EA8))(this);
	}
	template <typename T = void> T OnClickSwitchChannel() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24E9EB0))(this);
	}
	template <typename T = void> T SetChannelIndex(uintptr_t channel) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E6D60))(this, channel);
	}
	template <typename T = void> T SetChannel(uintptr_t channel) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24E6C98))(this, channel);
	}
	template <typename T = void> T OnClickVoiceToWordBtn() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24EA16C))(this);
	}
	template <typename T = void> T OnDontDisturbToggleChange(bool dontDisturb) {
		return ((T (*)(BRChatController*, bool))(Il2CppBase() + 0x24EA478))(this, dontDisturb);
	}
	template <typename T = void> T SetMainViewPosition(Il2CppVector3 localPos) {
		return ((T (*)(BRChatController*, Il2CppVector3))(Il2CppBase() + 0x24EA534))(this, localPos);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(BRChatController*, bool, bool, bool))(Il2CppBase() + 0x24EA638))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BRChatController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x24EA728))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowTableDataSource_CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BRChatController*, uintptr_t, int32_t))(Il2CppBase() + 0x24EAB30))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDataSource_ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(BRChatController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x24EAC54))(this, table, cell, row);
	}
	template <typename T = int32_t> T GameUI_IUIFlowTableDataSource_RowNumber(uintptr_t table) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24EC220))(this, table);
	}
	template <typename T = float> T GameUI_IUIFlowTableDataSource_HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BRChatController*, uintptr_t, int32_t))(Il2CppBase() + 0x24EC3E8))(this, table, row);
	}
	template <typename T = void> T GameUI_IUIFlowTableDelegate_DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(BRChatController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x24ECD5C))(this, table, row, worldPos);
	}
	template <typename T = void> T WrapperFriendInputTable(uintptr_t friendInfo, int32_t selectedRow) {
		return ((T (*)(BRChatController*, uintptr_t, int32_t))(Il2CppBase() + 0x24ED778))(this, friendInfo, selectedRow);
	}
	template <typename T = float> T GetFriendCellIHeightOf(uintptr_t ingameInfo) {
		return ((T (*)(BRChatController*, uintptr_t))(Il2CppBase() + 0x24ECA28))(this, ingameInfo);
	}
	template <typename T = void> T UpdateFriendCellItemDatas(int32_t startIndex, Il2CppList<uintptr_t>* infoList, uintptr_t ingameInfo) {
		return ((T (*)(BRChatController*, int32_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x24EDAE8))(this, startIndex, infoList, ingameInfo);
	}
	template <typename T = Il2CppVector3> T GetFriendCellItemPos(int32_t realRow, uintptr_t ingameInfo) {
		return ((T (*)(BRChatController*, int32_t, uintptr_t))(Il2CppBase() + 0x24EE130))(this, realRow, ingameInfo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24EE50C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24EE514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24EE51C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRChatController*))(Il2CppBase() + 0x24EE524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(BRChatController*, bool, bool, bool))(Il2CppBase() + 0x24EE52C))(this, P0, P1, P2);
	}

};

}
