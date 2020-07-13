#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyTierController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyTierController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBattlePassDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlepassConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mItemConfList() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChargeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGetTierItemConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassTireUpSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTires_TireNum_Purchase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3273988))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3273A2C))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3273BB4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3273DBC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x327423C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3274388))(this);
	}
	template <typename T = void> T ResetChargeList() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3273E74))(this);
	}
	template <typename T = bool> T IsGetTierItemConfig(uintptr_t conf) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t))(Il2CppBase() + 0x3274468))(this, conf);
	}
	template <typename T = void> T ShowItemList() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x32740EC))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3274540))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t, int32_t))(Il2CppBase() + 0x3274C68))(this, list, userContext);
	}
	template <typename T = void> T ReportBattlePassGetTires_TireNum(uintptr_t conf, uintptr_t payType) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32749BC))(this, conf, payType);
	}
	template <typename T = void> T OnNotifyBattlePassTireUpSuccess(uintptr_t obj) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t))(Il2CppBase() + 0x3274D1C))(this, obj);
	}
	template <typename T = void> T ReportBattlePassGetTires_TireNum_Purchase() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3274E3C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassBuyTierController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x32752DC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T ShowItemListm__0() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3275454))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3275488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3275490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x3275498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x32754A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassBuyTierController*))(Il2CppBase() + 0x32754A8))(this);
	}

};

}
