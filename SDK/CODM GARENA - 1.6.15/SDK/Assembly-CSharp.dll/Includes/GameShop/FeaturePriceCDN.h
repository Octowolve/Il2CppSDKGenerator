#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class FeaturePriceCDN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "FeaturePriceCDN"));
	}

	template <typename T = uintptr_t> T& labelName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& propRarityList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tablePrice() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& widgetDiscount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& labelDiscountPercent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& labelCurrentPrice() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& labelOriginPrice() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& widgetRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& widgetPricePart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& widgetPropNumPart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& gridPropRarity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& tableParts() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spriteCurrencyList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spriteBgList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& paymentIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mShopDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPartsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(FeaturePriceCDN*))(Il2CppBase() + 0x2355BB4))(this);
	}
	template <typename T = void> T SetUI(uintptr_t shopItem, uintptr_t data) {
		return ((T (*)(FeaturePriceCDN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2355C64))(this, shopItem, data);
	}
	template <typename T = void> T SetPriceUI(bool isDiscount, int32_t currentPrice, int32_t originalPrice, int32_t discountPercent) {
		return ((T (*)(FeaturePriceCDN*, bool, int32_t, int32_t, int32_t))(Il2CppBase() + 0x235629C))(this, isDiscount, currentPrice, originalPrice, discountPercent);
	}
	template <typename T = void> T SetAncher(uintptr_t itemTrans, uintptr_t CDNtrans) {
		return ((T (*)(FeaturePriceCDN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2356B40))(this, itemTrans, CDNtrans);
	}
	template <typename T = void> T SetPartsActive(Il2CppList<int32_t>* switchList) {
		return ((T (*)(FeaturePriceCDN*, Il2CppList<int32_t>*))(Il2CppBase() + 0x235606C))(this, switchList);
	}
	template <typename T = void> T SetPropNum(Il2CppArray<uintptr_t>* propNums) {
		return ((T (*)(FeaturePriceCDN*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x23566F0))(this, propNums);
	}

};

}
