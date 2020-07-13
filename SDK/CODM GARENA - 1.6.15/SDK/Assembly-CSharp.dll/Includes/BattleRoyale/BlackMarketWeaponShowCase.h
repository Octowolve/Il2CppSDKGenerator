#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketWeaponShowCase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketWeaponShowCase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BaseWeaponList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PointList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CenterIdx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ShowDisTance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& HideDisTance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PointPosList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PointRotList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_NextCheckTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_ShowDisTanceSqr() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_HideDisTanceSqr() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_LoadingIdx() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WeaponList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ItemAssetIdList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindCenterItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponAssetIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndCreatLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoadNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndFindAssdId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B8FF0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B90E0))(this);
	}
	template <typename T = void> T ShowWeapon() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B94C0))(this);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B9394))(this);
	}
	template <typename T = void> T InitWeaponList() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B980C))(this);
	}
	template <typename T = int32_t> T FindCenterItem(Il2CppList<uintptr_t>* shopList, double serverTime) {
		return ((T (*)(BlackMarketWeaponShowCase*, Il2CppList<uintptr_t>*, double))(Il2CppBase() + 0x24B9CB0))(this, shopList, serverTime);
	}
	template <typename T = void> T InitWeaponAssetIdList() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24BA2F8))(this);
	}
	template <typename T = int32_t> T GetAssetId(int32_t itemId) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t))(Il2CppBase() + 0x24B9DD0))(this, itemId);
	}
	template <typename T = bool> T CheckAsset(int32_t itemId, int32_t idx) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t, int32_t))(Il2CppBase() + 0x24BA008))(this, itemId, idx);
	}
	template <typename T = bool> T CheckItemType(int32_t itemId) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t))(Il2CppBase() + 0x24BA1E4))(this, itemId);
	}
	template <typename T = bool> T CheckShopItem(uintptr_t shopItem, double serverTime) {
		return ((T (*)(BlackMarketWeaponShowCase*, uintptr_t, double))(Il2CppBase() + 0x24B9EE4))(this, shopItem, serverTime);
	}
	template <typename T = void> T CheckAndCreatLoader() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B9574))(this);
	}
	template <typename T = bool> T CheckIdx(int32_t idx) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t))(Il2CppBase() + 0x24BA498))(this, idx);
	}
	template <typename T = void> T TryLoadNextWeapon() {
		return ((T (*)(BlackMarketWeaponShowCase*))(Il2CppBase() + 0x24B96C8))(this);
	}
	template <typename T = int32_t> T CheckAndFindAssdId(int32_t idx) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t))(Il2CppBase() + 0x24BA598))(this, idx);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(BlackMarketWeaponShowCase*, int32_t))(Il2CppBase() + 0x24BA6FC))(this, assetID);
	}

};

}
