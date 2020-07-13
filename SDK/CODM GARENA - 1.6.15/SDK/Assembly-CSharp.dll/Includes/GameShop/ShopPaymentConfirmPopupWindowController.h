#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopPaymentConfirmPopupWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopPaymentConfirmPopupWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CommodityItemController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_currenrPaymentType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_DefualtSelectCommodityPaymentInfo() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_currentSelectCommodityCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& m_DefaultSelectCommodityCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_OnPressChangeBuyCountBtnTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ShopConfig() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShopPaymentInfoIndexList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_EnableMultiNum() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_currentSelectCommodityItemInex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_currentSelectPayment() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_SourceType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_Id() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_CurrencyNum() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_singlePrice() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_GoodType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_BattlePassChargeConf_Id() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_BattlePassChargeConf_Level() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& delayParam() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& LongPressTimeCD() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isPlayingCloseAnimation() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_isCurrencyWithMultiTimeLimits() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = uintptr_t> T& m_shopTimeLimitPaymentCtr() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> static T& MinOffsetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_exchangeIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BuyM4_2_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnOKBtn_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShopPaymentConfirmPopupWindowController_Go() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressAddCommodityCountBtnManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressReduceCommodityCountBtnManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeManyPaymentCurrentSelectShopItemCountCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeOnlyOnePaymentCurrentSelectShopItemCountCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickDurationCommodityManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectCommodityItemHeightLightIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBuyMaxNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRechargeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RreshNumSelectSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReduceCommodityCountManyPaymentBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickAddCommodityCountBtnManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReduceCommodityCountOnePaymentBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickAddCommodityCountBtnOnePaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForeverManyCPPaymentSelectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForeverManyCPaymentSelectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPaymentButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDurationManyCPPaymentUnselectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDurationManyCPPaymentSelectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDurationManyCPaymentUnselectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDurationManyCPaymentSelectedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShopPaymentConfirmUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBtnTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassPaymentConfirmUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextOnePaymentContentConfirmUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommonPaymentConfirmPopType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountCurrentShopPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPaymentInfoIndexMapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPayCurrencyCommodityItemInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDefaultSelectCommodityItemIndx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommodityForeverPropsManyPaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommodityForeverOnePaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommodityDurationManyPaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommodityDurationOnePaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExchangeIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPaymentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsExchangeCoinEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPaymentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPayTypeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnDisableClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBuyOneManyPaymentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectShowShopItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExchangeIconStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePaymentPopUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BuyM4Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShowM4Award() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPurchaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildCtrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeacon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassPurchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyNormal_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassBuyPlus_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnoughCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMoneyNotEnoughView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContentPlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreCloseEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}

	template <typename T = void> T T_BuyM4_2_Init() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A2A0))(this);
	}
	template <typename T = void> T T_OnOKBtn_Click() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A440))(this);
	}
	template <typename T = void> T T_ShopPaymentConfirmPopupWindowController_Go() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A66C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ShopPaymentInfoIndexList() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A960))(this);
	}
	template <typename T = bool> T get_EnableMultiNum() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A968))(this);
	}
	template <typename T = void> T set_EnableMultiNum(bool value) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, bool))(Il2CppBase() + 0x238A970))(this, value);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238A978))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238AA28))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238AAD8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238AFF0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x238B094))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23918D8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2392C74))(this);
	}
	template <typename T = void> T SetWealth() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2392D50))(this);
	}
	template <typename T = void> T OnPressAddCommodityCountBtnManyPaymentCallback(uintptr_t go, bool state) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, bool))(Il2CppBase() + 0x23931B8))(this, go, state);
	}
	template <typename T = void> T OnPressReduceCommodityCountBtnManyPaymentCallback(uintptr_t go, bool state) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, bool))(Il2CppBase() + 0x2393368))(this, go, state);
	}
	template <typename T = void> T OnChangeManyPaymentCurrentSelectShopItemCountCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2393518))(this);
	}
	template <typename T = void> T OnChangeOnlyOnePaymentCurrentSelectShopItemCountCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2393BD0))(this);
	}
	template <typename T = void> T OnClickDurationCommodityManyPaymentCallback(uintptr_t obj) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x2394058))(this, obj);
	}
	template <typename T = void> T OnClickCharge() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394394))(this);
	}
	template <typename T = void> T SetSelectCommodityItemHeightLightIcon(int32_t index) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, int32_t))(Il2CppBase() + 0x23941A4))(this, index);
	}
	template <typename T = int32_t> T CanBuyMaxNum() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2393700))(this);
	}
	template <typename T = void> T _OnBtnCancelClick() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394954))(this);
	}
	template <typename T = void> T OnSwitchRechargeBtnClick() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394C98))(this);
	}
	template <typename T = void> T RreshNumSelectSprites() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394D3C))(this);
	}
	template <typename T = void> T OnClickReduceCommodityCountManyPaymentBtnCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394E20))(this);
	}
	template <typename T = void> T OnClickAddCommodityCountBtnManyPaymentCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2394FDC))(this);
	}
	template <typename T = void> T OnClickReduceCommodityCountOnePaymentBtnCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239524C))(this);
	}
	template <typename T = void> T OnClickAddCommodityCountBtnOnePaymentCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2395408))(this);
	}
	template <typename T = void> T OnForeverManyCPPaymentSelectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2395678))(this);
	}
	template <typename T = void> T OnForeverManyCPaymentSelectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2396060))(this);
	}
	template <typename T = void> T RefreshPaymentButton() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2396278))(this);
	}
	template <typename T = void> T OnDurationManyCPPaymentUnselectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2396404))(this);
	}
	template <typename T = void> T OnDurationManyCPPaymentSelectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2396EEC))(this);
	}
	template <typename T = void> T OnDurationManyCPaymentUnselectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2397130))(this);
	}
	template <typename T = void> T OnDurationManyCPaymentSelectedCallback() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239734C))(this);
	}
	template <typename T = void> T SetShopPaymentConfirmUIView(uintptr_t sourceType, int32_t id, int32_t Price, Il2CppString* name, uintptr_t paymentType, int32_t goodType, int32_t num, int32_t paymentInfoIndex, uintptr_t shopConfig, uintptr_t confirmPopWindowType) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2397590))(this, sourceType, id, Price, name, paymentType, goodType, num, paymentInfoIndex, shopConfig, confirmPopWindowType);
	}
	template <typename T = void> T AddBtnTLog(int32_t shopid) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, int32_t))(Il2CppBase() + 0x239779C))(this, shopid);
	}
	template <typename T = void> T SetBattlePassPaymentConfirmUIView(uintptr_t sourceType, uintptr_t itemConfig, uintptr_t paymentType, uintptr_t confirmPopWindowType, bool IsCutOff) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2398ADC))(this, sourceType, itemConfig, paymentType, confirmPopWindowType, IsCutOff);
	}
	template <typename T = void> T SetTextOnePaymentContentConfirmUIView(uintptr_t sourceType, int32_t id, int32_t Price, Il2CppString* name, uintptr_t paymentType, int32_t goodType, int32_t num, int32_t paymentInfoIndex, uintptr_t shopConfig, uintptr_t confirmPopWindowType, Il2CppString* locid, bool bLuckBorad) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x23992F8))(this, sourceType, id, Price, name, paymentType, goodType, num, paymentInfoIndex, shopConfig, confirmPopWindowType, locid, bLuckBorad);
	}
	template <typename T = void> T SetCommonPaymentConfirmPopType(uintptr_t confirmPopWindowType) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x2398398))(this, confirmPopWindowType);
	}
	template <typename T = int32_t> T CountCurrentShopPrice() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239381C))(this);
	}
	template <typename T = void> T SetPaymentInfoIndexMapping(uintptr_t ShopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x2398148))(this, ShopConfig);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurrentPayCurrencyCommodityItemInfoList(Il2CppList<uintptr_t>* ShopPaymentInfoIndexList, uintptr_t selectedPayment, bool init) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x2399DB4))(this, ShopPaymentInfoIndexList, selectedPayment, init);
	}
	template <typename T = int32_t> T GetCurrentDefaultSelectCommodityItemIndx(Il2CppList<uintptr_t>* DataList, uintptr_t currentPayment) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2395890))(this, DataList, currentPayment);
	}
	template <typename T = void> T UpdateCommodityForeverPropsManyPaymentView(uintptr_t ShopConfig, bool isInit) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, bool))(Il2CppBase() + 0x2395A5C))(this, ShopConfig, isInit);
	}
	template <typename T = void> T SetPriceInfo(bool isInit) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, bool))(Il2CppBase() + 0x239A1A8))(this, isInit);
	}
	template <typename T = void> T UpdateCommodityForeverOnePaymentView(uintptr_t ShopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x239A564))(this, ShopConfig);
	}
	template <typename T = void> T UpdateCommodityDurationManyPaymentView(uintptr_t ShopConfig, bool init) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, bool))(Il2CppBase() + 0x2396620))(this, ShopConfig, init);
	}
	template <typename T = void> T UpdateCommodityDurationOnePaymentView(uintptr_t ShopConfig, bool init) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, bool))(Il2CppBase() + 0x239AC28))(this, ShopConfig, init);
	}
	template <typename T = void> T ShowItem(uintptr_t shopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x239B2B8))(this, shopConfig);
	}
	template <typename T = void> T SetExchangeIcon(uintptr_t shopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x239B680))(this, shopConfig);
	}
	template <typename T = void> T SetPaymentInfo(uintptr_t shopConfig, int32_t index) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x239B9FC))(this, shopConfig, index);
	}
	template <typename T = void> T SetIsExchangeCoinEnough() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239C3E0))(this);
	}
	template <typename T = void> T RefreshPaymentInfo(uintptr_t shopConfig, int32_t index) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x239C65C))(this, shopConfig, index);
	}
	template <typename T = void> T OnPayTypeBtnClick() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239C730))(this);
	}
	template <typename T = void> T OnOkBtnDisableClick() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239C8A8))(this);
	}
	template <typename T = void> T InitBuyOneManyPaymentView(uintptr_t ShopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x239CA3C))(this, ShopConfig);
	}
	template <typename T = void> T SelectShowShopItemView(uintptr_t ShopConfig) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t))(Il2CppBase() + 0x23987E0))(this, ShopConfig);
	}
	template <typename T = bool> T IsExchangeIconStyle(uintptr_t ShopConfig, int32_t index) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x239CC1C))(this, ShopConfig, index);
	}
	template <typename T = void> T HidePaymentPopUIView() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x2398564))(this);
	}
	template <typename T = bool> T T_BuyM4Finish() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239D320))(this);
	}
	template <typename T = void> T T_ShowM4Award() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239D42C))(this);
	}
	template <typename T = void> T OnBtnPurchaseClick() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239D700))(this);
	}
	template <typename T = void> T GetChildCtrData() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239DEF8))(this);
	}
	template <typename T = void> T ReportBeacon() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239EA4C))(this);
	}
	template <typename T = void> T ReportBattlePassPurchase() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239DDB8))(this);
	}
	template <typename T = void> T ReportBattlePassBuyNormal_Purchase() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239F11C))(this);
	}
	template <typename T = void> T ReportBattlePassBuyPlus_Purchase() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239F338))(this);
	}
	template <typename T = void> T ReportBattlePassGetTires_TireNum_Purchase() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239F554))(this);
	}
	template <typename T = bool> T IsEnoughCurrency() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239E078))(this);
	}
	template <typename T = void> T SetMoneyNotEnoughView(int32_t value) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, int32_t))(Il2CppBase() + 0x239FC30))(this, value);
	}
	template <typename T = void> T ForceClose() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23948B0))(this);
	}
	template <typename T = void> T PreClose() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23949F8))(this);
	}
	template <typename T = void> T ContentPlayReverse() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239FD4C))(this);
	}
	template <typename T = void> T OnPreCloseEnd() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239FEB0))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x239FF64))(this);
	}
	template <typename T = void> T WealthChange() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A0018))(this);
	}
	template <typename T = void> T T_BuyM4_2_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23A00BC))(this, tutorialType, info);
	}
	template <typename T = void> static T T_ShopPaymentConfirmPopupWindowController_Gom__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x23A02D0))(0);
	}
	template <typename T = void> T SetTextOnePaymentContentConfirmUIViewm__2() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A0410))(this);
	}
	template <typename T = int32_t> static T GetCurrentPayCurrencyCommodityItemInfoListm__3(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23A07F0))(0, param1, param2);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A08BC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A08C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A08CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A08D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShopPaymentConfirmPopupWindowController*))(Il2CppBase() + 0x23A08DC))(this);
	}

};

}
