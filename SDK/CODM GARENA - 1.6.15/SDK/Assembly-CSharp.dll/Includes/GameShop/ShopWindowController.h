#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopWindowController"));
	}

	template <typename T = uintptr_t> T& M4Path() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& M4Transform() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& M4ID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& M4Price() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_SubTabCtr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_OnMoveShopItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ShopDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShopList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RecommendShopList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NotRecommendShopList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_FlowGridBgTimer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurrentShoptype() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& CurShopType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bRecommend() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_RecommendColumnNumber() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& m_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastRowColumnNumber() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_longHeightMargin() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_shortHeightMargin() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& padAspectRatio() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_CDNAspectRatio() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& rightMinWidth() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_RememberPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BuyM4_1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShopWindowController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStartCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShopData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightSubTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLimitOffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftScrollViewPanelRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIAdapteSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightCdnHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLimitOfferItemSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = void> T T_RememberPath(uintptr_t path, uintptr_t item, uintptr_t t) {
		return ((T (*)(ShopWindowController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C182C))(this, path, item, t);
	}
	template <typename T = void> T T_BuyM4_1_Init() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C1A9C))(this);
	}
	template <typename T = void> T T_ShopWindowController_Go() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C1D1C))(this);
	}
	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C1EF8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C1FA8))(this);
	}
	template <typename T = void> T OnDragStartCallback() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C2318))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C23EC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C24CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C25A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C2740))(this);
	}
	template <typename T = void> T InitShopData(uintptr_t type) {
		return ((T (*)(ShopWindowController*, uintptr_t))(Il2CppBase() + 0x23C2868))(this, type);
	}
	template <typename T = void> T OnRightSubTabItemClick(int32_t subTagId, bool reset) {
		return ((T (*)(ShopWindowController*, int32_t, bool))(Il2CppBase() + 0x23C3434))(this, subTagId, reset);
	}
	template <typename T = void> T RefreshFlowGrid() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C386C))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C39E4))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(ShopWindowController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C3B00))(this, grid, cell, path);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C4170))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(ShopWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x23C425C))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(ShopWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x23C434C))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopWindowController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23C4458))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopWindowController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23C3FF8))(this, grid, row, column);
	}
	template <typename T = void> T RefreshLimitOffer() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C458C))(this);
	}
	template <typename T = void> T SetLeftScrollViewPanelRect() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C4D10))(this);
	}
	template <typename T = void> T UIAdapteSize() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C4FF0))(this);
	}
	template <typename T = void> T SetRightCdnHeight(uintptr_t cdbPic, int32_t targetHeight, int32_t minWidth) {
		return ((T (*)(ShopWindowController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23C519C))(this, cdbPic, targetHeight, minWidth);
	}
	template <typename T = void> T SetLimitOfferItemSize(uintptr_t LeftScrollViewUIpanel, uintptr_t RightScrollViewUIpanel) {
		return ((T (*)(ShopWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C5300))(this, LeftScrollViewUIpanel, RightScrollViewUIpanel);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(ShopWindowController*, uintptr_t))(Il2CppBase() + 0x23C5758))(this, message);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(ShopWindowController*, uintptr_t))(Il2CppBase() + 0x23C5DB8))(this, message);
	}
	template <typename T = void> T T_BuyM4_1_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(ShopWindowController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23C6308))(this, tutorialType, info);
	}
	template <typename T = void> T T_BuyM4_1_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(ShopWindowController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23C6634))(this, tutorialType, info);
	}
	template <typename T = void> T T_ShopWindowController_Gom__2() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C67D4))(this);
	}
	template <typename T = int32_t> static T InitShopDatam__3(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C6AD4))(0, param1, param2);
	}
	template <typename T = void> T InitShopDatam__4() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C6B40))(this);
	}
	template <typename T = void> T OnRightSubTabItemClickm__5() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C6B44))(this);
	}
	template <typename T = void> T UIAdapteSizem__6() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C6DA0))(this);
	}
	template <typename T = bool> static T OnNotifyLuckyDrawInfom__7(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C7900))(0, x);
	}
	template <typename T = bool> static T OnNotifyLuckyBoardInfom__8(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23C79F8))(0, x);
	}
	template <typename T = bool> T T_ShopWindowController_Gom__9(uintptr_t it) {
		return ((T (*)(ShopWindowController*, uintptr_t))(Il2CppBase() + 0x23C7AF0))(this, it);
	}
	template <typename T = void> T OnRightSubTabItemClickm__A() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7B3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7C2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopWindowController*))(Il2CppBase() + 0x23C7C44))(this);
	}

};

}
