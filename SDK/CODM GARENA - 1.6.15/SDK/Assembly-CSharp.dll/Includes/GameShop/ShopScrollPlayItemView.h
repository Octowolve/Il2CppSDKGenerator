#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopScrollPlayItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopScrollPlayItemView"));
	}

	template <typename T = uintptr_t> T& labelShopName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LabelPrice() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpriteCurrency() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpriteShopIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CdnPicture() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CDNTitle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NoCdnWidget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TagContent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TagSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TagObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_safeBoxView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& cutdownLabel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& featurePriceCDN() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ShopItem() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& isShowCutDown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeBoxItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CDNItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShopCDNItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShopCDNItemByGoodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShopCDNItemByShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFeaturePriceCDNActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPicLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOffStoreTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T SetItemData(uintptr_t dataObj) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AEC60))(this, dataObj);
	}
	template <typename T = void> T SafeBoxItem(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AEF6C))(this, data);
	}
	template <typename T = void> T CDNItem(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AF128))(this, data);
	}
	template <typename T = void> T ShopCDNItem(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AEE64))(this, data);
	}
	template <typename T = void> T ShopCDNItemByGoodID(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AF620))(this, data);
	}
	template <typename T = void> T SetShopCDNItemByShopItem(uintptr_t data, uintptr_t shopItem) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23AFC5C))(this, data, shopItem);
	}
	template <typename T = bool> T IsFeaturePriceCDNActive(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23AFF04))(this, data);
	}
	template <typename T = void> T OnPicLoadSuccessed(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(ShopScrollPlayItemView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x23B00C0))(this, url, isSuccess, texture);
	}
	template <typename T = void> T ShopItem(uintptr_t data) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23B0258))(this, data);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShopScrollPlayItemView*))(Il2CppBase() + 0x23B08F8))(this);
	}
	template <typename T = void> T RefreshOffStoreTime() {
		return ((T (*)(ShopScrollPlayItemView*))(Il2CppBase() + 0x23B0A98))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(ShopScrollPlayItemView*))(Il2CppBase() + 0x23AF728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemData(uintptr_t P0) {
		return ((T (*)(ShopScrollPlayItemView*, uintptr_t))(Il2CppBase() + 0x23B0D04))(this, P0);
	}

};

}
