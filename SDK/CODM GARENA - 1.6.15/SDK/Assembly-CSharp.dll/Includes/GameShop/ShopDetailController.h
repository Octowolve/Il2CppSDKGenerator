#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mineLoadoutData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_shopItemData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& characterController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& weaponController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ShopItemFlowGridCell() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isCoinTab() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudioEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreCommodityArrowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextCommodityArrowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPurchaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCompareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNextShopItemSwitchEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNextCodmShopItemDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNavigationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopBuyRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopItemRenew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T get_UIScene() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236B668))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236B770))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236B8F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236B99C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236BDC0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236C0B4))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x236C730))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236C868))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(ShopDetailController*, bool))(Il2CppBase() + 0x236C168))(this, show);
	}
	template <typename T = void> T SetData(uintptr_t data, uintptr_t shopItemFlowGridCell, bool isCoinTab) {
		return ((T (*)(ShopDetailController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x236CCCC))(this, data, shopItemFlowGridCell, isCoinTab);
	}
	template <typename T = void> T SetWeaponAssetState() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236D60C))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236DA18))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236DBF8))(this);
	}
	template <typename T = void> T PlayAudioEffect(bool isOpen) {
		return ((T (*)(ShopDetailController*, bool))(Il2CppBase() + 0x236CB00))(this, isOpen);
	}
	template <typename T = void> T SetMagnifyBtn(bool show) {
		return ((T (*)(ShopDetailController*, bool))(Il2CppBase() + 0x236D00C))(this, show);
	}
	template <typename T = void> T OnPreCommodityArrowBtnClick() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236DE00))(this);
	}
	template <typename T = void> T OnNextCommodityArrowBtnClick() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236E030))(this);
	}
	template <typename T = void> T OnBtnPurchaseClick() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236E0F8))(this);
	}
	template <typename T = void> T OnBtnCompareClick() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x236F0B0))(this);
	}
	template <typename T = bool> T IsNextShopItemSwitchEnable(uintptr_t shopItem) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x236F3E4))(this, shopItem);
	}
	template <typename T = void> T SetNextCodmShopItemDetail(uintptr_t item) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x236DEC8))(this, item);
	}
	template <typename T = void> T SetNavigationData(uintptr_t item) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x236F61C))(this, item);
	}
	template <typename T = void> T OnNotifyShopBuyRes(uintptr_t msg) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x236F7DC))(this, msg);
	}
	template <typename T = void> T ReportBeaconData() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x23706CC))(this);
	}
	template <typename T = void> T OnNotifyShopItemRenew(uintptr_t msg) {
		return ((T (*)(ShopDetailController*, uintptr_t))(Il2CppBase() + 0x23710A0))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x2371164))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x237116C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x2371174))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x237117C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ShopDetailController*))(Il2CppBase() + 0x2371184))(this);
	}

};

}
