#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailControllerChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailController_Chest"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CodmShopItem() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_LuckyBoxConfigConfig() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_colorProbList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_res() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_currentSelectIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ShopDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_CurrentSelectTreasureBoxCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_EasyListController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_BagOwnTreasureBoxMaxCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& m_TreasureBoxId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& m_TreastureBoxColorId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& comeFrom() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_ItemState() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& m_PreTreasureBoxId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& isFromOTO() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = int32_t> T& intParam() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& boolParam() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BoxPropList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_SelectPropId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& widthForColumn_() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& widthReal() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& sideMargin() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_Column() {
		return *(T*)((uintptr_t)this + 0xA0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOpenLuckyBoxClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickGoToBagBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxDataFromShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxDataFromShowBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxDataFromBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLuckyBoxNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOpenBoxContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreatureBoxTopIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyTreasureBoxDetailAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickOpenBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickPlusBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMaxBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentSelectBoxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMinusBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckBoxInfoToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFlowGridItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortBoxShowPropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopBuyRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopItemRenew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnWeaponCompareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTreasureBoxDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuySingleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuyMultiClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadLoadoutItemDetailPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23712EC))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237139C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237144C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23714F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2371794))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2371F7C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23725E0))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t))(Il2CppBase() + 0x2372C5C))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2372D88))(this);
	}
	template <typename T = void> T OnBtnOpenLuckyBoxClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2372FDC))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(ShopDetailControllerChest*, bool))(Il2CppBase() + 0x2372694))(this, show);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23738F8))(this);
	}
	template <typename T = void> T OnClickGoToBagBtnCallback() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2373A40))(this);
	}
	template <typename T = void> T SetTreasureBoxData(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2373B50))(this, dataList);
	}
	template <typename T = void> T SetTreasureBoxDataFromShop(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x237409C))(this, dataList);
	}
	template <typename T = void> T SetTreasureBoxDataFromShowBox(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23744F0))(this, dataList);
	}
	template <typename T = void> T SetTreasureBoxDataFromBag(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23748DC))(this, dataList);
	}
	template <typename T = int32_t> T FindLuckyBoxNum(uint32_t id) {
		return ((T (*)(ShopDetailControllerChest*, uint32_t))(Il2CppBase() + 0x23754E0))(this, id);
	}
	template <typename T = void> T InitOpenBoxContainer() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23757FC))(this);
	}
	template <typename T = void> T SetTreatureBoxTopIcon(Il2CppArray<uintptr_t>* title_cdn) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2375AF0))(this, title_cdn);
	}
	template <typename T = void> T DownloadTextureCallback(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x2376314))(this, url, bSuccess, texture);
	}
	template <typename T = void> T ModifyTreasureBoxDetailAnchor(int32_t absolute, bool isUpdate) {
		return ((T (*)(ShopDetailControllerChest*, int32_t, bool))(Il2CppBase() + 0x2375298))(this, absolute, isUpdate);
	}
	template <typename T = void> T OnClickOpenBtnCallback() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23764D8))(this);
	}
	template <typename T = void> T OnClickPlusBtnCallback() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2376B58))(this);
	}
	template <typename T = void> T OnClickMaxBtnCallback() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2376C68))(this);
	}
	template <typename T = void> T UpdateCurrentSelectBoxCount() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2375118))(this);
	}
	template <typename T = void> T OnClickMinusBtnCallback() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2376D14))(this);
	}
	template <typename T = void> T OnNotifyLuckBoxInfoToShop(uintptr_t message) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t))(Il2CppBase() + 0x2376E24))(this, message);
	}
	template <typename T = void> T SetFlowGridItemList() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x23781A0))(this);
	}
	template <typename T = void> T SetAnchor() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2378488))(this);
	}
	template <typename T = void> T SortBoxShowPropInfo(Il2CppList<uintptr_t>* m_BoxPropList) {
		return ((T (*)(ShopDetailControllerChest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23773D8))(this, m_BoxPropList);
	}
	template <typename T = void> T OnNotifyShopBuyRes(uintptr_t msg) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t))(Il2CppBase() + 0x237874C))(this, msg);
	}
	template <typename T = void> T ReportBeaconData(int32_t shopid) {
		return ((T (*)(ShopDetailControllerChest*, int32_t))(Il2CppBase() + 0x2378BEC))(this, shopid);
	}
	template <typename T = void> T OnNotifyShopItemRenew(uintptr_t msg) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t))(Il2CppBase() + 0x2379640))(this, msg);
	}
	template <typename T = void> T OnLuckyBoxItemClick(uintptr_t message) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t))(Il2CppBase() + 0x2379704))(this, message);
	}
	template <typename T = void> T OnBtnWeaponCompareClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2379940))(this);
	}
	template <typename T = void> T OnTreasureBoxDetailBtnClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2379BB0))(this);
	}
	template <typename T = void> T OnBtnBuySingleClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x2379E28))(this);
	}
	template <typename T = void> T OnBtnBuyMultiClick() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237A898))(this);
	}
	template <typename T = void> T SetSelectProp(int32_t propId, int32_t currentSelectIndex) {
		return ((T (*)(ShopDetailControllerChest*, int32_t, int32_t))(Il2CppBase() + 0x237756C))(this, propId, currentSelectIndex);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237BC5C))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237BE78))(this);
	}
	template <typename T = float> T GetLoadLoadoutItemDetailPosX() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237BF6C))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237C058))(this, grid, path);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x237C124))(this, grid, cell, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, int32_t))(Il2CppBase() + 0x237CDE4))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, int32_t))(Il2CppBase() + 0x237CEA4))(this, grid, row);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x237CF64))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x237D030))(this, grid, row, column);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(ShopDetailControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237D0F8))(this, grid, path);
	}
	template <typename T = void> T OnNotifyLuckBoxInfoToShopm__0() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ShopDetailControllerChest*))(Il2CppBase() + 0x237D1E0))(this);
	}

};

}
