#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopCurrencyItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopCurrencyItem"));
	}

	template <typename T = uintptr_t> T& RootPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RootCurrencyPos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RootDiscountPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelOriginalPrice() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelDiscountPrice() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(int32_t price, int32_t discountPirce, Il2CppVector3 pos, Il2CppVector3 originalPos) {
		return ((T (*)(CodmShopCurrencyItem*, int32_t, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3C8CB68))(this, price, discountPirce, pos, originalPos);
	}
	template <typename T = void> T SetData_1(uintptr_t data) {
		return ((T (*)(CodmShopCurrencyItem*, uintptr_t))(Il2CppBase() + 0x3C8CD30))(this, data);
	}

};

}
