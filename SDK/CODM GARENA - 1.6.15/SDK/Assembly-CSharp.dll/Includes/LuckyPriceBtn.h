#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyPriceBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyPriceBtn"));
	}

	template <typename T = uintptr_t> T& priceWidget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& priceWithDiscountWidget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& firstDrawWidget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& discountTagWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& disableBtnWidget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& priceNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& priceIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& priceNum2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& priceIcon2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& priceNum3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& priceIcon3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& buyNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& discountNum() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& firstDrawDesc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& disableBtnDesc() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& discountStyle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultDiscountStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstBuyTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetPriceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceBtnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetDefaultDiscountStyle(Il2CppString* style) {
		return ((T (*)(LuckyPriceBtn*, Il2CppString*))(Il2CppBase() + 0x41C2EA8))(this, style);
	}
	template <typename T = void> T SetPriceInfo(uintptr_t shopPaymentInfo) {
		return ((T (*)(LuckyPriceBtn*, uintptr_t))(Il2CppBase() + 0x41C2FBC))(this, shopPaymentInfo);
	}
	template <typename T = void> T SetViewEnable(uintptr_t shopPaymentInfo) {
		return ((T (*)(LuckyPriceBtn*, uintptr_t))(Il2CppBase() + 0x41C3660))(this, shopPaymentInfo);
	}
	template <typename T = void> T SetFirstBuyTag(bool isShowTag) {
		return ((T (*)(LuckyPriceBtn*, bool))(Il2CppBase() + 0x41C3980))(this, isShowTag);
	}
	template <typename T = void> T SetPriceInfo_1(Il2CppString* icon, int32_t price) {
		return ((T (*)(LuckyPriceBtn*, Il2CppString*, int32_t))(Il2CppBase() + 0x41C3B34))(this, icon, price);
	}
	template <typename T = void> T SetPriceBtnDisable(Il2CppString* desc) {
		return ((T (*)(LuckyPriceBtn*, Il2CppString*))(Il2CppBase() + 0x41C3EA4))(this, desc);
	}

};

}
