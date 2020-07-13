#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ExchargeShopItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ExchargeShopItemView"));
	}

	template <typename T = uintptr_t> T& template() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& shopItemQuality() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buyBtn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& priceBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& limitNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnBtnBuyClick() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ItemWidget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& RECOMMEND_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NOT_RECOMMEND_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShopItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNumInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPriceBtnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T SetItemId(int32_t itemId, int32_t num) {
		return ((T (*)(ExchargeShopItemView*, int32_t, int32_t))(Il2CppBase() + 0x4706B88))(this, itemId, num);
	}
	template <typename T = void> T SetShopItemInfo() {
		return ((T (*)(ExchargeShopItemView*))(Il2CppBase() + 0x47099BC))(this);
	}
	template <typename T = void> T SetNumInfo(bool isCompositeChipV2) {
		return ((T (*)(ExchargeShopItemView*, bool))(Il2CppBase() + 0x4709E98))(this, isCompositeChipV2);
	}
	template <typename T = void> T RegisterBuyBtnClick(void* OnBtnBuyClick) {
		return ((T (*)(ExchargeShopItemView*, void*))(Il2CppBase() + 0x4706E40))(this, OnBtnBuyClick);
	}
	template <typename T = void> T BindEvent() {
		return ((T (*)(ExchargeShopItemView*))(Il2CppBase() + 0x4709754))(this);
	}
	template <typename T = void> T OnBuyBtnClick(uintptr_t go) {
		return ((T (*)(ExchargeShopItemView*, uintptr_t))(Il2CppBase() + 0x470A278))(this, go);
	}
	template <typename T = void> T SetDuration(int32_t duration) {
		return ((T (*)(ExchargeShopItemView*, int32_t))(Il2CppBase() + 0x4706D08))(this, duration);
	}
	template <typename T = void> T SetPrice(int32_t goodId, int32_t price) {
		return ((T (*)(ExchargeShopItemView*, int32_t, int32_t))(Il2CppBase() + 0x4706EE8))(this, goodId, price);
	}
	template <typename T = void> T SetPriceBtnDisable(Il2CppString* desc) {
		return ((T (*)(ExchargeShopItemView*, Il2CppString*))(Il2CppBase() + 0x4707220))(this, desc);
	}
	template <typename T = void> T SetLimitNum(int32_t curNum, int32_t AllNum) {
		return ((T (*)(ExchargeShopItemView*, int32_t, int32_t))(Il2CppBase() + 0x4707340))(this, curNum, AllNum);
	}
	template <typename T = void> T SetItemWidth(int32_t mWidth) {
		return ((T (*)(ExchargeShopItemView*, int32_t))(Il2CppBase() + 0x4706A68))(this, mWidth);
	}

};

}
