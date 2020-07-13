#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LeftTablist() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MainTabListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ShopDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_CurSelectLeftTagId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ShopWindowCtr() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ShopRechargeWindowCtr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ShopChestWindowCtr() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnBuyM4ResponseError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTopTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShopFirstLevelTabRedDotInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopLeftTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainTabItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainTabListController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectTagCtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeacon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopBuyRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShopItemRenew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServiceBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T T_OnBuyM4ResponseError(Il2CppString* errstr) {
		return ((T (*)(CodmShopMainController*, Il2CppString*))(Il2CppBase() + 0x3C8E148))(this, errstr);
	}
	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8E320))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8E3D0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8E62C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8E6D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8E7E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8EB68))(this);
	}
	template <typename T = void> T InitToDefault() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8ED58))(this);
	}
	template <typename T = void> T InitTopTabList() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8EEC4))(this);
	}
	template <typename T = void> T UpdateShopFirstLevelTabRedDotInfo() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8F1A8))(this);
	}
	template <typename T = void> T OnNotifyShopLeftTabItemClick(uintptr_t msg) {
		return ((T (*)(CodmShopMainController*, uintptr_t))(Il2CppBase() + 0x3C8F738))(this, msg);
	}
	template <typename T = void> T OnMainTabItemClick(int32_t leftTabId, bool reset) {
		return ((T (*)(CodmShopMainController*, int32_t, bool))(Il2CppBase() + 0x3C8F350))(this, leftTabId, reset);
	}
	template <typename T = void> T SetMainTabListController(bool reset) {
		return ((T (*)(CodmShopMainController*, bool))(Il2CppBase() + 0x3C8F864))(this, reset);
	}
	template <typename T = void> T SetSelectTagCtr() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8FCD0))(this);
	}
	template <typename T = void> T ReportBeacon() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C8FF8C))(this);
	}
	template <typename T = void> T OnNotifyShopBuyRes(uintptr_t msg) {
		return ((T (*)(CodmShopMainController*, uintptr_t))(Il2CppBase() + 0x3C90150))(this, msg);
	}
	template <typename T = void> T OnNotifyShopItemRenew(uintptr_t msg) {
		return ((T (*)(CodmShopMainController*, uintptr_t))(Il2CppBase() + 0x3C904B0))(this, msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmShopMainController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3C9057C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmShopMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C90644))(this, list, userContext);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CodmShopMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3C906F8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T get_IsDestroyed() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C907D0))(this);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C907D8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C907E0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CodmShopMainController*, float))(Il2CppBase() + 0x3C907E8))(this, dt);
	}
	template <typename T = void> T OnServiceBtnClick() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C908B0))(this);
	}
	template <typename T = void> T InitToDefaultm__0() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C90948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C9094C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C90954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C9095C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C90964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmShopMainController*))(Il2CppBase() + 0x3C9096C))(this);
	}

};

}
