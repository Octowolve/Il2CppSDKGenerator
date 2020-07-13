#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopWindowControllerChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopWindowController_Chest"));
	}

	template <typename T = bool> T& isParentControllerClose() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ShopDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_OnMoveShopItem() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChestList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_CurrentShopType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_BGAdaptTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_FlowGridBgTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& COLUMN_NUMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_HeightForRow() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_WidthForColumn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_SubTabCtr() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAdaptUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToAdpatFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClippingMovedCallbakc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStartCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShopData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlowGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8354))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8404))(this);
	}
	template <typename T = void> T InitAdaptUI() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8834))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C896C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8A10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8B38))(this);
	}
	template <typename T = void> T StopTimer() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8BFC))(this);
	}
	template <typename T = void> T TryToAdpatFlowGrid() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C8CD4))(this);
	}
	template <typename T = void> T OnClippingMovedCallbakc(uintptr_t panel) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t))(Il2CppBase() + 0x23C912C))(this, panel);
	}
	template <typename T = void> T OnDragStartCallback() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23C91D8))(this);
	}
	template <typename T = void> T InitShopData(uintptr_t type) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t))(Il2CppBase() + 0x23C927C))(this, type);
	}
	template <typename T = void> T HandleData(bool resetPosition) {
		return ((T (*)(ShopWindowControllerChest*, bool))(Il2CppBase() + 0x23C8D7C))(this, resetPosition);
	}
	template <typename T = void> T OnNotifyShopRefresh(uintptr_t msg) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t))(Il2CppBase() + 0x23C9BC4))(this, msg);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C9CC0))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x23C9D8C))(this, grid, cell, path);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23CA164))(this, grid, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, int32_t))(Il2CppBase() + 0x23CA220))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, int32_t))(Il2CppBase() + 0x23CA2E0))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23CA3A0))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopWindowControllerChest*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x23CA09C))(this, grid, row, column);
	}
	template <typename T = void> T RefreshFlowGrid() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CA468))(this);
	}
	template <typename T = bool> static T InitShopDatam__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x23CA5B0))(0, it);
	}
	template <typename T = void> T HandleDatam__1() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CA600))(this);
	}
	template <typename T = void> T HandleDatam__2() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CA944))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CAA2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CAA34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CAA3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopWindowControllerChest*))(Il2CppBase() + 0x23CAA44))(this);
	}

};

}
