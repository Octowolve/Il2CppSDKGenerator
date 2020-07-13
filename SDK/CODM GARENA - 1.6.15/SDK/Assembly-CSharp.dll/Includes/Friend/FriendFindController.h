#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendFindController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendFindController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mViewMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& findOptionModeDic() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& findOptionLadderDic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& findOptionModeList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& findOptionLadderList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mSearched() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mResultNumber() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mRecommendNumber() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mAllNumber() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& mRow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& mColumn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& cellwidth() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = char> static T& CHAR_VALIDATE_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_SPACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_NEWLINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> T& m_LastAddedChar() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSearchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendSearchResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCleanBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLadderBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOptionMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZombieModeTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNameInputCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOtherPulldownMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPulldonwMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFindOptionModeCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFindOptionLadderCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDataNumbers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRowColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDataSource_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUIFlowGridDelegate_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTextLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329D70C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329D7B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329EA4C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329F09C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329F1AC))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329F548))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(FriendFindController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x329F7A0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView(uintptr_t viewMode, bool resetpostion) {
		return ((T (*)(FriendFindController*, uintptr_t, bool))(Il2CppBase() + 0x329FA38))(this, viewMode, resetpostion);
	}
	template <typename T = void> T OnSearchClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A0030))(this);
	}
	template <typename T = void> T OnFriendSearchResponse(uintptr_t message) {
		return ((T (*)(FriendFindController*, uintptr_t))(Il2CppBase() + 0x32A0860))(this, message);
	}
	template <typename T = void> T OnRefreshClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A11AC))(this);
	}
	template <typename T = void> T OnCleanBtnClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A13C8))(this);
	}
	template <typename T = void> T OnModeBtnClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A15B0))(this);
	}
	template <typename T = void> T OnLadderBtnClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A1A08))(this);
	}
	template <typename T = void> T OnOptionMaskClick(uintptr_t obj) {
		return ((T (*)(FriendFindController*, uintptr_t))(Il2CppBase() + 0x32A1D00))(this, obj);
	}
	template <typename T = void> T OnZombieModeTipsBtnClick() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A1DD4))(this);
	}
	template <typename T = void> T OnNameInputCharacterLimit() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A1F68))(this);
	}
	template <typename T = void> T HideOtherPulldownMenu(uintptr_t listType) {
		return ((T (*)(FriendFindController*, uintptr_t))(Il2CppBase() + 0x329F694))(this, listType);
	}
	template <typename T = void> T ShowPulldonwMenu(uintptr_t list, uintptr_t btnArrowSprite, bool isShow) {
		return ((T (*)(FriendFindController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x32A1828))(this, list, btnArrowSprite, isShow);
	}
	template <typename T = uintptr_t> T CreateCell(uintptr_t assetID, uintptr_t parent, void* OnCellClick, bool active) {
		return ((T (*)(FriendFindController*, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x329E69C))(this, assetID, parent, OnCellClick, active);
	}
	template <typename T = void> T OnFindOptionModeCellClick(int32_t type, Il2CppString* name) {
		return ((T (*)(FriendFindController*, int32_t, Il2CppString*))(Il2CppBase() + 0x32A2180))(this, type, name);
	}
	template <typename T = void> T OnFindOptionLadderCellClick(int32_t type, Il2CppString* name) {
		return ((T (*)(FriendFindController*, int32_t, Il2CppString*))(Il2CppBase() + 0x32A264C))(this, type, name);
	}
	template <typename T = void> T UpdateDataNumbers() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329FCEC))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A2934))(this);
	}
	template <typename T = void> T SetRowColumn() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x329FE4C))(this);
	}
	template <typename T = uintptr_t> T GameUI_IUIFlowGridDataSource_CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendFindController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A2AF4))(this, grid, path);
	}
	template <typename T = void> T GameUI_IUIFlowGridDataSource_ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(FriendFindController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A2BC0))(this, grid, cell, path);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(FriendFindController*, uintptr_t, int32_t))(Il2CppBase() + 0x32A3100))(this, grid, column);
	}
	template <typename T = int32_t> T GameUI_IUIFlowGridDataSource_ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(FriendFindController*, uintptr_t, int32_t))(Il2CppBase() + 0x32A31C0))(this, grid, row);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendFindController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A32A4))(this, grid, row, column);
	}
	template <typename T = float> T GameUI_IUIFlowGridDataSource_WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendFindController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A3370))(this, grid, row, column);
	}
	template <typename T = void> T GameUI_IUIFlowGridDelegate_DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(FriendFindController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A3490))(this, grid, path);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(FriendFindController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x32A2FD8))(this, grid, row, column);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A354C))(this);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3688))(this);
	}
	template <typename T = void> T CheckTextLength() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A372C))(this);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A392C))(this);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3B28))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FriendFindController*))(Il2CppBase() + 0x32A3C4C))(this);
	}

};

}
