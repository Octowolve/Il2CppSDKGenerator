#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class BuyBtnGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "BuyBtnGroup"));
	}

	template <typename T = uintptr_t> T& btnWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BtnBuy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SpriteCurrencyIcon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LabelPrice() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LabelNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ObjBuyNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ContainerDiscount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& WidgetOriginPrice() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SpriteCurrencyIocnDiscount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LabelDiscountPre() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LabelOriginalPrice() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LabelFree() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TableBtn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ObjRedDot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& WidgetLadderPriceRenewTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LabelLadderPriceRenewTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& LadderPriceRenewTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& LimitDiscountRemainTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnPriceUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshLimitDiscountTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshLadderPriceRenewTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWidgetLadderPriceRenewTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetSize(int32_t width, float x) {
		return ((T (*)(BuyBtnGroup*, int32_t, float))(Il2CppBase() + 0x28C0C08))(this, width, x);
	}
	template <typename T = void> T SetData(uintptr_t ShopData, int32_t paymentIndex, bool isOneBtn) {
		return ((T (*)(BuyBtnGroup*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x28C0DDC))(this, ShopData, paymentIndex, isOneBtn);
	}
	template <typename T = void> T SetBtnPriceUI(bool isDiscount, int32_t currentPrice, int32_t originalPrice, int32_t showDisCount) {
		return ((T (*)(BuyBtnGroup*, bool, int32_t, int32_t, int32_t))(Il2CppBase() + 0x28C15BC))(this, isDiscount, currentPrice, originalPrice, showDisCount);
	}
	template <typename T = void> T ShowDiscount(bool isDisCount) {
		return ((T (*)(BuyBtnGroup*, bool))(Il2CppBase() + 0x28C1B14))(this, isDisCount);
	}
	template <typename T = void> T ShowRedDot(uintptr_t shopItem, int32_t paymentIndex) {
		return ((T (*)(BuyBtnGroup*, uintptr_t, int32_t))(Il2CppBase() + 0x28C19AC))(this, shopItem, paymentIndex);
	}
	template <typename T = void> T CheckRefreshLimitDiscountTime(uintptr_t ShopData, int32_t paymentIndex) {
		return ((T (*)(BuyBtnGroup*, uintptr_t, int32_t))(Il2CppBase() + 0x28C1C44))(this, ShopData, paymentIndex);
	}
	template <typename T = void> T CheckRefreshLadderPriceRenewTime(uintptr_t shopData, int32_t paymentIndex) {
		return ((T (*)(BuyBtnGroup*, uintptr_t, int32_t))(Il2CppBase() + 0x28C227C))(this, shopData, paymentIndex);
	}
	template <typename T = bool> T IsShowWidgetLadderPriceRenewTime(uintptr_t shopData, int32_t paymentIndex) {
		return ((T (*)(BuyBtnGroup*, uintptr_t, int32_t))(Il2CppBase() + 0x28C18B8))(this, shopData, paymentIndex);
	}

};

}
