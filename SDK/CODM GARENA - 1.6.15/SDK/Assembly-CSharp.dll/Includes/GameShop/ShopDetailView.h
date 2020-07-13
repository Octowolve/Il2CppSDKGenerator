#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailView"));
	}

	template <typename T = uintptr_t> T& BasicInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ContainerBuy() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BuyBtnBgAlreadySprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BuyBtnBgUnAlreadySprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerAlreadyBuy() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WidgetTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& buyBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnCompare() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& callingCardTemplate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& headAvater() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NextCommodityArrowBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& PreCommodityArrowBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& paymentIndex() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& isCoinTab() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> static T& PriceBgUnAlreadySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PriceBgAlreadySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ItemState() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<int32_t>*> T& refreshTimeList() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_LastRemainTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshFlashSaleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshBtnTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWidgetLadderPriceRenewTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRighBottomPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPaymentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsItemAlreadyOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnLimitState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponCompare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x236EA4C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x236EE04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237ED98))(this);
	}
	template <typename T = void> T CheckRefreshFlashSaleTime() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237F000))(this);
	}
	template <typename T = void> T CheckItemStateChange() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237EE4C))(this);
	}
	template <typename T = void> T CheckRefreshBtnTimeLabel() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237EF18))(this);
	}
	template <typename T = void> T RefreshItemState() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237F5A4))(this);
	}
	template <typename T = bool> T IsShowWidgetLadderPriceRenewTime(uintptr_t shopData, int32_t paymentIndex) {
		return ((T (*)(ShopDetailView*, uintptr_t, int32_t))(Il2CppBase() + 0x237F688))(this, shopData, paymentIndex);
	}
	template <typename T = void> T RefreshRighBottomPos() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x237F788))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(ShopDetailView*, uintptr_t))(Il2CppBase() + 0x236D118))(this, data);
	}
	template <typename T = void> T SetPaymentIndex(uintptr_t data) {
		return ((T (*)(ShopDetailView*, uintptr_t))(Il2CppBase() + 0x237F820))(this, data);
	}
	template <typename T = void> T CheckIsItemAlreadyOwn() {
		return ((T (*)(ShopDetailView*))(Il2CppBase() + 0x2370428))(this);
	}
	template <typename T = void> T SetItemIcon(int32_t itemID, bool isShowItemIcon) {
		return ((T (*)(ShopDetailView*, int32_t, bool))(Il2CppBase() + 0x237FC5C))(this, itemID, isShowItemIcon);
	}
	template <typename T = void> T SetBtnLimitState(bool Noraml) {
		return ((T (*)(ShopDetailView*, bool))(Il2CppBase() + 0x237F994))(this, Noraml);
	}
	template <typename T = void> T SetDetailTemplate(uint32_t goodId, int32_t durationTime) {
		return ((T (*)(ShopDetailView*, uint32_t, int32_t))(Il2CppBase() + 0x237FAA8))(this, goodId, durationTime);
	}
	template <typename T = void> T SetWeaponCompare(uint32_t goodId) {
		return ((T (*)(ShopDetailView*, uint32_t))(Il2CppBase() + 0x2380170))(this, goodId);
	}

};

}
