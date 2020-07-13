#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopTimeLimitPaymentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopTimeLimitPaymentController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_OnPressChangeBuyCountBtnTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& LongPressTimeCD() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_shopPaymentConfirmDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickDurationCommodityManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReduceCountClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddCountClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeInputCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSwitchCurrencyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBuyMaxNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressAddCommodityCountBtnManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressReduceCommodityCountBtnManyPaymentCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_ShopPaymentConfirmDS() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B346C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B351C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B35C0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B36CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B3774))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B3E20))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B45D8))(this);
	}
	template <typename T = void> T SetContent(uintptr_t ShopConfig, Il2CppList<uintptr_t>* shopPaymentInfoIndexList, uintptr_t currenrPaymentType, int32_t currentSelectCommodityItemInex, bool isEnableMultiNumPurchase, bool isDiamondAndGoldSupport) {
		return ((T (*)(ShopTimeLimitPaymentController*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, int32_t, bool, bool))(Il2CppBase() + 0x239D11C))(this, ShopConfig, shopPaymentInfoIndexList, currenrPaymentType, currentSelectCommodityItemInex, isEnableMultiNumPurchase, isDiamondAndGoldSupport);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetData() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x239EEDC))(this);
	}
	template <typename T = void> T OnClickDurationCommodityManyPaymentCallback(uintptr_t obj) {
		return ((T (*)(ShopTimeLimitPaymentController*, uintptr_t))(Il2CppBase() + 0x23B47C0))(this, obj);
	}
	template <typename T = void> T OnBtnReduceCountClick() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B4CE8))(this);
	}
	template <typename T = void> T OnBtnAddCountClick() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B50C4))(this);
	}
	template <typename T = void> T OnChangeInputCount() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5240))(this);
	}
	template <typename T = void> T OnBtnSwitchCurrencyClick() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B53D0))(this);
	}
	template <typename T = int32_t> T CanBuyMaxNum() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B4E64))(this);
	}
	template <typename T = void> T OnPressAddCommodityCountBtnManyPaymentCallback(uintptr_t go, bool state) {
		return ((T (*)(ShopTimeLimitPaymentController*, uintptr_t, bool))(Il2CppBase() + 0x23B5AD4))(this, go, state);
	}
	template <typename T = void> T OnPressReduceCommodityCountBtnManyPaymentCallback(uintptr_t go, bool state) {
		return ((T (*)(ShopTimeLimitPaymentController*, uintptr_t, bool))(Il2CppBase() + 0x23B5C84))(this, go, state);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ShopTimeLimitPaymentController*))(Il2CppBase() + 0x23B5E5C))(this);
	}

};

}
