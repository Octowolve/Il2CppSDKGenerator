#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopItemViewChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopItemView_Chest"));
	}

	template <typename T = uintptr_t> T& BuySingle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BuyMulti() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BuySingleMoreWidth() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BuySingleTransform() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& BuyMultiTransform() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BuySingleMoreWidthTransform() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& itemBtnWidget() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SpriteContainerObj() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& CDNContainerObj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ItemCDNTexture() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SpriteCDNBg() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RightTag() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& RightTagText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_ETreasureChestBuyButtonType() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_isSingleBtnShowExchange() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_exchangeIconPaymentIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PriceBgLeft() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& PriceBgLeftMoreWidth() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PriceBgRight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshBtnTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemBgSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnStateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTreasureBoxBgIconByCDN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPromiseLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteBgQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBtnDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBuySingleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnBuyMultiClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnItemClickTlogNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondPurchaseConfirmationBuyOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T RefreshItemState() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x238712C))(this);
	}
	template <typename T = void> T CheckRefreshBtnTimeLabel() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2387420))(this);
	}
	template <typename T = void> T SetItemBgSize(int32_t width) {
		return ((T (*)(ShopItemViewChest*, int32_t))(Il2CppBase() + 0x238764C))(this, width);
	}
	template <typename T = void> T SetBtnSize(int32_t width) {
		return ((T (*)(ShopItemViewChest*, int32_t))(Il2CppBase() + 0x23877B8))(this, width);
	}
	template <typename T = void> T SetData(uintptr_t data, bool bRecommend) {
		return ((T (*)(ShopItemViewChest*, uintptr_t, bool))(Il2CppBase() + 0x23878F8))(this, data, bRecommend);
	}
	template <typename T = void> T SetBtnLimitNum() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x23887B0))(this);
	}
	template <typename T = void> T SetBtnStateData() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2387E10))(this);
	}
	template <typename T = void> T SetBtnActive() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2388CB0))(this);
	}
	template <typename T = void> T SetButtom() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x23872D8))(this);
	}
	template <typename T = void> T SetTreasureBoxBgIconByCDN() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2387FB0))(this);
	}
	template <typename T = void> T DownloadTextureCallback(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(ShopItemViewChest*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x2388DF0))(this, url, bSuccess, texture);
	}
	template <typename T = void> T SetPromiseLabel(uintptr_t data) {
		return ((T (*)(ShopItemViewChest*, uintptr_t))(Il2CppBase() + 0x2388338))(this, data);
	}
	template <typename T = void> T SetSpriteBgQuality(int32_t colorID, int32_t colorSubID) {
		return ((T (*)(ShopItemViewChest*, int32_t, int32_t))(Il2CppBase() + 0x2389008))(this, colorID, colorSubID);
	}
	template <typename T = void> T AddBtnDelegate() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389124))(this);
	}
	template <typename T = void> T OnBtnBuySingleClick() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389568))(this);
	}
	template <typename T = void> T _OnBtnBuyMultiClick() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389678))(this);
	}
	template <typename T = void> T OnBtnItemClickTlogNtf() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389BC8))(this);
	}
	template <typename T = void> T SecondPurchaseConfirmationBuyOne() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389CD0))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ShopItemViewChest*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2389E58))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshItemState() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckRefreshBtnTimeLabel() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemBgSize(int32_t P0) {
		return ((T (*)(ShopItemViewChest*, int32_t))(Il2CppBase() + 0x2389F40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetBtnSize(int32_t P0) {
		return ((T (*)(ShopItemViewChest*, int32_t))(Il2CppBase() + 0x2389F44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0, bool P1) {
		return ((T (*)(ShopItemViewChest*, uintptr_t, bool))(Il2CppBase() + 0x2389F48))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetSpriteBgQuality(int32_t P0, int32_t P1) {
		return ((T (*)(ShopItemViewChest*, int32_t, int32_t))(Il2CppBase() + 0x2389F4C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_AddBtnDelegate() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnBuySingleClick() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnItemClickTlogNtf() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SecondPurchaseConfirmationBuyOne() {
		return ((T (*)(ShopItemViewChest*))(Il2CppBase() + 0x2389F5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyDataStoreUpdated(uintptr_t P0, Il2CppString* P1, int32_t P2) {
		return ((T (*)(ShopItemViewChest*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2389F60))(this, P0, P1, P2);
	}

};

}
