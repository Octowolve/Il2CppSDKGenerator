#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopPaymentConfirmPopupWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopPaymentConfirmPopupWindowView"));
	}

	template <typename T = uintptr_t> T& LableTitle1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelTip() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SpriteSmallItemIcon() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpriteQuality() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& GoldCurrency() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& DiamondCurrency() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& DiamondLeftPos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& GoldRightPos() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector2> T& GolCenterPos() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& DiamondCenterPos() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& DiamondTwoPricePos() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& DiamondOnlyOriginalPos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& GoldTwoPricePos() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& GoldOnlyOriginalPos() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitleTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitleDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTipDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetTitleTip(int32_t tabId) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowView*, int32_t))(Il2CppBase() + 0x3C91C44))(this, tabId);
	}
	template <typename T = Il2CppString*> T GetTitleDesc(int32_t tabId) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowView*, int32_t))(Il2CppBase() + 0x3C92A64))(this, tabId);
	}
	template <typename T = Il2CppString*> T GetTipDesc(int32_t tabId) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowView*, int32_t))(Il2CppBase() + 0x3C92BB0))(this, tabId);
	}
	template <typename T = void> T SetShop(uintptr_t data) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C915B4))(this, data);
	}
	template <typename T = void> T SetShop_1(uintptr_t data) {
		return ((T (*)(CodmShopPaymentConfirmPopupWindowView*, uintptr_t))(Il2CppBase() + 0x3C91D6C))(this, data);
	}

};

}
