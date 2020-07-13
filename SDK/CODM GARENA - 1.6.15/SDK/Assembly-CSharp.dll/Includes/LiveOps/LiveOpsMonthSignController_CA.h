#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMonthSignControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMonthSignController_CA"));
	}

	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& COLUMN_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& SelectedSeqId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& ActivityId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& BatchDrawAwardCountMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& CurBatchDrawAwardCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& bBatchDrawingAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& BatchDrawAwardReqTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_LeftNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CurRow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_DelayAdaptationTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_bNeedRefreshDataAfterAdaptation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_SpecialAwardItemIds() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_cellSet() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDrawBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBatchDrawAwardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDrawAwardReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3505A84))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3505B34))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3505D5C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3505EFC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3505FD0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3506228))(this);
	}
	template <typename T = void> T GetTaskData() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x350653C))(this);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, int32_t, int32_t, bool))(Il2CppBase() + 0x34F744C))(this, topNum, leftNum, bInit);
	}
	template <typename T = void> T UpdateDrawBtnShow() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3506D20))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x35072FC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshFlowGrid(bool resetPosition) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, bool))(Il2CppBase() + 0x3506FCC))(this, resetPosition);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x350745C))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3507558))(this, grid, cell, path);
	}
	template <typename T = void> T CellItemClick(uint64_t taskSeqId) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uint64_t))(Il2CppBase() + 0x3507A10))(this, taskSeqId);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3507B44))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x3507D24))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x3507E98))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3507F88))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3508084))(this, grid, row, column);
	}
	template <typename T = void> T _OnBtnClaimClick() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3508180))(this);
	}
	template <typename T = void> static T ClearBatchDrawAwardData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3506B74))(0);
	}
	template <typename T = void> static T DoDrawAwardReq() {
		return ((T (*)(void *))(Il2CppBase() + 0x350842C))(0);
	}
	template <typename T = void> T AdaptationViewm__0() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3508BB8))(this);
	}
	template <typename T = void> T GetTaskDatam__1(uintptr_t x) {
		return ((T (*)(LiveOpsMonthSignControllerCA*, uintptr_t))(Il2CppBase() + 0x3509584))(this, x);
	}
	template <typename T = int32_t> static T GetTaskDatam__2(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3509624))(0, x, y);
	}
	template <typename T = void> T SetActivityDatam__3() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x350969C))(this);
	}
	template <typename T = void> static T _OnBtnClaimClickm__4() {
		return ((T (*)(void *))(Il2CppBase() + 0x35096A4))(0);
	}
	template <typename T = void> T AdaptationViewm__5() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x350973C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3509744))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x350974C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x3509754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMonthSignControllerCA*))(Il2CppBase() + 0x350975C))(this);
	}

};

}
