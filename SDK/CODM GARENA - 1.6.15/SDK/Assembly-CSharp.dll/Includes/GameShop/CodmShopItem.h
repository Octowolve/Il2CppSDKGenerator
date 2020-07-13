#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CodmShopItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CodmShopItem"));
	}

	template <typename T = uintptr_t> T& shopType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ShopConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& subTagid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ActualSalePrice() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsShowItemIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_PreShopConfig() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_NextShopConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_LimitGoodAlreadyBuyCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Bought_limit_good() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> static T& m_disableCanBuyNextCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemStateNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnSale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnLimitedTimeDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNormalDiscount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShopDiscountAndPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasFreePricNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnSaleForever() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRemainOnSaleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReachedLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedLadderPriceRenew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemAlreadyOwned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemAlreadyOwnedForever() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemPermanentLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableCanBuyNextCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemCanBuyNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = int32_t> T get_ActualSalePrice() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8CF4))(this);
	}
	template <typename T = bool> T get_IsShowItemIcon() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8DC0))(this);
	}
	template <typename T = void> T set_IsShowItemIcon(bool value) {
		return ((T (*)(CodmShopItem*, bool))(Il2CppBase() + 0x28C8DC8))(this, value);
	}
	template <typename T = uintptr_t> T get_PreShopConfig() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8DD0))(this);
	}
	template <typename T = void> T set_PreShopConfig(uintptr_t value) {
		return ((T (*)(CodmShopItem*, uintptr_t))(Il2CppBase() + 0x28C8DD8))(this, value);
	}
	template <typename T = uintptr_t> T get_NextShopConfig() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8DE0))(this);
	}
	template <typename T = void> T set_NextShopConfig(uintptr_t value) {
		return ((T (*)(CodmShopItem*, uintptr_t))(Il2CppBase() + 0x28C8DE8))(this, value);
	}
	template <typename T = int32_t> T get_LimitGoodAlreadyBuyCount() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8DF0))(this);
	}
	template <typename T = void> T set_LimitGoodAlreadyBuyCount(int32_t value) {
		return ((T (*)(CodmShopItem*, int32_t))(Il2CppBase() + 0x28C8E34))(this, value);
	}
	template <typename T = uintptr_t> T get_Bought_limit_good() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8E2C))(this);
	}
	template <typename T = void> T set_Bought_limit_good(uintptr_t value) {
		return ((T (*)(CodmShopItem*, uintptr_t))(Il2CppBase() + 0x28C8E3C))(this, value);
	}
	template <typename T = void> T set_ShopConfig(uintptr_t value) {
		return ((T (*)(CodmShopItem*, uintptr_t))(Il2CppBase() + 0x28C8E44))(this, value);
	}
	template <typename T = uintptr_t> T get_ShopConfig() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C1344))(this);
	}
	template <typename T = uintptr_t> T ItemStateNow() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C8E4C))(this);
	}
	template <typename T = bool> T IsOnSale(double serverTime) {
		return ((T (*)(CodmShopItem*, double))(Il2CppBase() + 0x28C8FBC))(this, serverTime);
	}
	template <typename T = bool> T IsOnDiscount(double serverTime, int32_t index) {
		return ((T (*)(CodmShopItem*, double, int32_t))(Il2CppBase() + 0x28C9158))(this, serverTime, index);
	}
	template <typename T = bool> T IsOnLimitedTimeDiscount(double serverTime, int32_t index) {
		return ((T (*)(CodmShopItem*, double, int32_t))(Il2CppBase() + 0x28C2018))(this, serverTime, index);
	}
	template <typename T = bool> T IsNormalDiscount(double serverTime, int32_t index) {
		return ((T (*)(CodmShopItem*, double, int32_t))(Il2CppBase() + 0x28C9280))(this, serverTime, index);
	}
	template <typename T = int32_t> T GetCurrentPrice(double serverTime, int32_t index) {
		return ((T (*)(CodmShopItem*, double, int32_t))(Il2CppBase() + 0x28C94C0))(this, serverTime, index);
	}
	template <typename T = void*> T GetShopDiscountAndPrice(double serverTime, int32_t paymentIndex) {
		return ((T (*)(CodmShopItem*, double, int32_t))(Il2CppBase() + 0x28C134C))(this, serverTime, paymentIndex);
	}
	template <typename T = bool> T IsHasFreePricNow() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C9710))(this);
	}
	template <typename T = bool> T IsOnSaleForever() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C98BC))(this);
	}
	template <typename T = int32_t> T GetRemainOnSaleTime(double serverTime) {
		return ((T (*)(CodmShopItem*, double))(Il2CppBase() + 0x28C99BC))(this, serverTime);
	}
	template <typename T = bool> T HasReachedLimitNum() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C274C))(this);
	}
	template <typename T = bool> T IsNeedLadderPriceRenew(int32_t index) {
		return ((T (*)(CodmShopItem*, int32_t))(Il2CppBase() + 0x28C259C))(this, index);
	}
	template <typename T = bool> T IsItemAlreadyOwned() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C9AEC))(this);
	}
	template <typename T = bool> T IsItemAlreadyOwnedForever() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28C9D50))(this);
	}
	template <typename T = bool> T IsItemPermanentLimit() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28CA088))(this);
	}
	template <typename T = void> static T SetDisableCanBuyNextCheck() {
		return ((T (*)(void *))(Il2CppBase() + 0x28CA190))(0);
	}
	template <typename T = bool> T IsItemCanBuyNext() {
		return ((T (*)(CodmShopItem*))(Il2CppBase() + 0x28CA298))(this);
	}

};

}
