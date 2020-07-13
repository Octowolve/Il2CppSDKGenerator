#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopRechargeWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopRechargeWindowController"));
	}

	template <typename T = Il2CppString*> static T& CurRechargeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& CurRechargeDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RechargeDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_OnMoveShopItem() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isPaySuccess() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> T& m_BGAdaptTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_FlowGridBgTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_LimitOfferItemWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RechargeList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& bRecommend() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_RecommendColumnNumber() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& m_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastRowColumnNumber() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& MAX_CELL_PER_ROW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& timerMax() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& tickTimer() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStartCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveBalanceRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptaScrollItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLimitOffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBgIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopWindowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = uintptr_t> T get_RechargeDS() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A86F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A87A4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A8B20))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A8BF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A957C))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x23A9838))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnDragStartCallback() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A9984))(this);
	}
	template <typename T = void> T OnReceiveBalanceRes(uintptr_t obj) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t))(Il2CppBase() + 0x23A9A58))(this, obj);
	}
	template <typename T = void> T OnPaySuccess(uintptr_t obj) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t))(Il2CppBase() + 0x23AA460))(this, obj);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AA53C))(this);
	}
	template <typename T = void> T _InitScrollView() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23A917C))(this);
	}
	template <typename T = void> T AdaptaScrollItems() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AAA94))(this);
	}
	template <typename T = void> T RefreshLimitOffer() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AA694))(this);
	}
	template <typename T = void> T _HandleData() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AA978))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23AB170))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23AB26C))(this, grid, cell, path);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23ABB30))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x23ABC1C))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x23ABD28))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23ABEB4))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23ABFB0))(this, grid, row, column);
	}
	template <typename T = float> T WidthForPath(int32_t row, int32_t column) {
		return ((T (*)(ShopRechargeWindowController*, int32_t, int32_t))(Il2CppBase() + 0x23AB574))(this, row, column);
	}
	template <typename T = Il2CppString*> T GetBgIcon(int32_t row, int32_t column) {
		return ((T (*)(ShopRechargeWindowController*, int32_t, int32_t))(Il2CppBase() + 0x23AB864))(this, row, column);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t))(Il2CppBase() + 0x23AC2C0))(this, message);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(ShopRechargeWindowController*, uintptr_t))(Il2CppBase() + 0x23AC920))(this, message);
	}
	template <typename T = void> T OnPopWindowBtnClick() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23ACE6C))(this);
	}
	template <typename T = void> T FadeAlpha() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AD590))(this);
	}
	template <typename T = void> T ClosePopWindow() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AD3DC))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AD8F0))(this);
	}
	template <typename T = bool> static T OnReceiveBalanceResm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23ADB54))(0, x);
	}
	template <typename T = void> T _InitScrollViewm__1() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23ADC74))(this);
	}
	template <typename T = void> T _InitScrollViewm__2() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23ADDB4))(this);
	}
	template <typename T = bool> static T OnNotifyLuckyDrawInfom__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23AE018))(0, x);
	}
	template <typename T = bool> static T OnNotifyLuckyBoardInfom__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23AE110))(0, x);
	}
	template <typename T = void> T _InitScrollViewm__5() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE208))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE2F8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE308))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE310))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE318))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(ShopRechargeWindowController*))(Il2CppBase() + 0x23AE320))(this);
	}

};

}
