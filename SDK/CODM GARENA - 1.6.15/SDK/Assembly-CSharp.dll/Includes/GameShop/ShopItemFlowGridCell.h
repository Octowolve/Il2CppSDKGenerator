#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopItemFlowGridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopItemFlowGridCell"));
	}

	template <typename T = uintptr_t> T& ContainerNull() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& PriceBgUnAlreadySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PriceBgAlreadySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& WestQualityBg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ItemBg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpriteTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OffStoreBg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SpriteNoItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PurchaseLimitCountLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& PurchaseLimitIconSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& UnAlreadyPriceBgSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& AlreadyPriceBgSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& buyBtn() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& BuyObj() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LabelAlreadyOwned() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TimeLimitTemplate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ItemState() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& SpriteWestQuality() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& SpriteBgQuality() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LabelShopName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BtnItemIcon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& WidgetOffStore() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& LabelTag() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<int32_t>*> T& refreshTimeList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_LastRemainTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& LimitDiscountRemainTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& RECOMMEND_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NOT_RECOMMEND_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& HeadAvatarPicSizeRate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& paymentIndex() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_EnableDetailedClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_M4ItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteNoItemSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWestQualityBgSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemBgSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshFlashSaleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshBtnTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteBgQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPaymentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBtnDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuySingleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuySingleClickDoing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondPurchaseConfirmationBuyOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnItemClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsItemAlreadyOwn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemAlreadyOwnText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = void> T T_EnableDetailedClick(bool bEnable) {
		return ((T (*)(ShopItemFlowGridCell*, bool))(Il2CppBase() + 0x2382724))(this, bEnable);
	}
	template <typename T = void> T T_M4ItemClick() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x23829AC))(this);
	}
	template <typename T = uintptr_t> T get_ShopData() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2382AA4))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2382AAC))(this);
	}
	template <typename T = void> T SetSize(int32_t width) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t))(Il2CppBase() + 0x2382B5C))(this, width);
	}
	template <typename T = void> T SetSpriteNoItemSize(int32_t width) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t))(Il2CppBase() + 0x2382C48))(this, width);
	}
	template <typename T = void> T SetWestQualityBgSize(int32_t width) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t))(Il2CppBase() + 0x2382D68))(this, width);
	}
	template <typename T = void> T SetItemBgSize(int32_t width) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t))(Il2CppBase() + 0x2382FD4))(this, width);
	}
	template <typename T = void> T SetBtnSize(int32_t width) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t))(Il2CppBase() + 0x2383170))(this, width);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2383314))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2383410))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2383500))(this);
	}
	template <typename T = void> T CheckItemStateChange() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x23835C0))(this);
	}
	template <typename T = void> T RefreshItemState() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x23839D4))(this);
	}
	template <typename T = void> T CheckRefreshFlashSaleTime() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2383698))(this);
	}
	template <typename T = void> T CheckRefreshBtnTimeLabel() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2384608))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, bool bRecommend) {
		return ((T (*)(ShopItemFlowGridCell*, uintptr_t, bool))(Il2CppBase() + 0x23846F8))(this, data, bRecommend);
	}
	template <typename T = void> T SetItemUI(uintptr_t data, bool bRecommend) {
		return ((T (*)(ShopItemFlowGridCell*, uintptr_t, bool))(Il2CppBase() + 0x2384A60))(this, data, bRecommend);
	}
	template <typename T = void> T SetSpriteBgQuality(int32_t colorID, int32_t colorSubID) {
		return ((T (*)(ShopItemFlowGridCell*, int32_t, int32_t))(Il2CppBase() + 0x2385ACC))(this, colorID, colorSubID);
	}
	template <typename T = void> T SetBtnLimitNum() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x238415C))(this);
	}
	template <typename T = void> T SetPaymentIndex() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2383BE8))(this);
	}
	template <typename T = void> T SetTag(uintptr_t data) {
		return ((T (*)(ShopItemFlowGridCell*, uintptr_t))(Il2CppBase() + 0x23855D0))(this, data);
	}
	template <typename T = void> T SetTimeLimit(uintptr_t data) {
		return ((T (*)(ShopItemFlowGridCell*, uintptr_t))(Il2CppBase() + 0x2383DC8))(this, data);
	}
	template <typename T = void> T AddBtnDelegate() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2385BEC))(this);
	}
	template <typename T = void> T OnBtnBuySingleClick() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2385ED8))(this);
	}
	template <typename T = void> T OnBtnBuySingleClickDoing() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2385FE8))(this);
	}
	template <typename T = void> T SecondPurchaseConfirmationBuyOne() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2386630))(this);
	}
	template <typename T = void> T OnBtnItemClick() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2386750))(this);
	}
	template <typename T = void> T OnBtnItemClickTlogNtf() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2386CE0))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ShopItemFlowGridCell*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2386DE8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T CheckIsItemAlreadyOwn() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x238432C))(this);
	}
	template <typename T = void> T UpdateItemAlreadyOwnText() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2370628))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(ShopItemFlowGridCell*))(Il2CppBase() + 0x2387074))(this);
	}

};

}
