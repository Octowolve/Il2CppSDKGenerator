#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopTimeLimitPaymentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopTimeLimitPaymentView"));
	}

	template <typename T = uintptr_t> T& spriteTitle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& labelName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& spriteItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& labelPrice() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& spriteCurrencyIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& spritePriceBg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& commodityItemList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_reduceCommodityCountButtonManyPayment() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_reduceCommodityCountSpriteManyPayment() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_addCommodityCountButtonManyPayment() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_addCommodityCountSpriteManyPayment() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& InputCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& btnSwitchCurrency() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& objSelectPayTypeDiamond() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& objSelectPayTypeCoin() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& objSelectNum() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_spriteItemFixedHeight() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& normalColor() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& grayColor() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_shopPaymentConfirmDataStore() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& posCountPayment() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& posCount() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& posPayment() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& posNothing() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& xSizeCountPayment() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& xSizeCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& xSizePayment() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& xSizeNothing() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& itemHight() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpritePriceBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetSpritePriceBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPayCurrencyCommodityItemInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectCommodityItemHeightLightIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateManyPaymentNumSelectBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnSwitchCurrencyUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuyNumUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDefaultSelectCommodityItemIndx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToTargetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_ShopPaymentConfirmDS() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B61AC))(this);
	}
	template <typename T = void> T InitUI(bool isEnableMultiNumPurchase, bool isDiamondAndGoldSupport) {
		return ((T (*)(ShopTimeLimitPaymentView*, bool, bool))(Il2CppBase() + 0x23B4680))(this, isEnableMultiNumPurchase, isDiamondAndGoldSupport);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B59F8))(this);
	}
	template <typename T = void> T SetSpritePriceBg(bool isEnableNum, bool isEnalblePayment) {
		return ((T (*)(ShopTimeLimitPaymentView*, bool, bool))(Il2CppBase() + 0x23B625C))(this, isEnableNum, isEnalblePayment);
	}
	template <typename T = void> T SetSpritePriceBg_1(Il2CppVector3 locPos, int32_t width) {
		return ((T (*)(ShopTimeLimitPaymentView*, Il2CppVector3, int32_t))(Il2CppBase() + 0x23B6DB8))(this, locPos, width);
	}
	template <typename T = void> T SetItemUI() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B6380))(this);
	}
	template <typename T = void> T SetItemList() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B67B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurrentPayCurrencyCommodityItemInfoList(Il2CppList<uintptr_t>* shopPaymentInfoIndexList, uintptr_t selectedPayment) {
		return ((T (*)(ShopTimeLimitPaymentView*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x23B6ED8))(this, shopPaymentInfoIndexList, selectedPayment);
	}
	template <typename T = void> T SetSelectCommodityItemHeightLightIcon(int32_t index) {
		return ((T (*)(ShopTimeLimitPaymentView*, int32_t))(Il2CppBase() + 0x23B49D0))(this, index);
	}
	template <typename T = void> T SetPriceUI() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B4B0C))(this);
	}
	template <typename T = void> T UpdateManyPaymentNumSelectBtn(int32_t curNum, int32_t canBuyMaxNum) {
		return ((T (*)(ShopTimeLimitPaymentView*, int32_t, int32_t))(Il2CppBase() + 0x23B55E0))(this, curNum, canBuyMaxNum);
	}
	template <typename T = void> T SafeSetGray(uintptr_t sprite, bool isGray) {
		return ((T (*)(ShopTimeLimitPaymentView*, uintptr_t, bool))(Il2CppBase() + 0x23B71AC))(this, sprite, isGray);
	}
	template <typename T = void> T SetBtnSwitchCurrencyUI() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B6A74))(this);
	}
	template <typename T = void> T SetBuyNumUI(int32_t CurrentBuyMaxCount) {
		return ((T (*)(ShopTimeLimitPaymentView*, int32_t))(Il2CppBase() + 0x23B4FB4))(this, CurrentBuyMaxCount);
	}
	template <typename T = int32_t> T GetCurrentDefaultSelectCommodityItemIndx() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B57D4))(this);
	}
	template <typename T = void> T ScrollToTargetItem() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B6BC0))(this);
	}
	template <typename T = int32_t> T GetTargetIndex() {
		return ((T (*)(ShopTimeLimitPaymentView*))(Il2CppBase() + 0x23B72F4))(this);
	}
	template <typename T = int32_t> static T GetCurrentPayCurrencyCommodityItemInfoListm__0(uintptr_t param1, uintptr_t param2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x23B7450))(0, param1, param2);
	}

};

}
