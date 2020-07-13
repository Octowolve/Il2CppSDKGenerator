#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetPreloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetPreloader"));
	}

	template <typename T = int32_t> T& m_MapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_WeapIDList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_AssetIDList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_CheckList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& kMaxSyncPreloadLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnablePreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPreloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadConfigData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadInPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadFrontEndAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadBRDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadBRWeaponEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadImpactEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadCommonMatchAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadCarBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadKillingMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadUltInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponPartAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponAssetInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadFireDataAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = bool> static T IsEnablePreload() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B9D4C0))(0);
	}
	template <typename T = bool> T CheckIsLoading() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9D648))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9D760))(this);
	}
	template <typename T = void> T RefreshPreloadState() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9D904))(this);
	}
	template <typename T = void> T PreloadConfigData() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9D9F8))(this);
	}
	template <typename T = void> T PreloadInPool() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9E3A4))(this);
	}
	template <typename T = void> T PreloadFrontEndAsset() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9ED18))(this);
	}
	template <typename T = void> T PreloadBRDrop() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9EAFC))(this);
	}
	template <typename T = void> T PreloadBRWeaponEffect() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9E6FC))(this);
	}
	template <typename T = void> T PreloadImpactEffect() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9E870))(this);
	}
	template <typename T = void> T PreloadWeaponSkillEffect() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9EF38))(this);
	}
	template <typename T = void> T PreloadCommonMatchAsset() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9F0D0))(this);
	}
	template <typename T = void> T PreloadCarBomb() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9FBE4))(this);
	}
	template <typename T = void> T PreloadKillingMaterial() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2B9FCD4))(this);
	}
	template <typename T = void> T PreloadBag(uintptr_t bagInfo, bool is3P, uintptr_t camp) {
		return ((T (*)(AssetPreloader*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2B9FDA8))(this, bagInfo, is3P, camp);
	}
	template <typename T = void> T PreloadAssetList(Il2CppList<int32_t>* assetList, bool is3P, bool isWeap) {
		return ((T (*)(AssetPreloader*, Il2CppList<int32_t>*, bool, bool))(Il2CppBase() + 0x2BA026C))(this, assetList, is3P, isWeap);
	}
	template <typename T = void> T PreloadUlt(int32_t ultID, bool is3P) {
		return ((T (*)(AssetPreloader*, int32_t, bool))(Il2CppBase() + 0x2BA0184))(this, ultID, is3P);
	}
	template <typename T = void> T PreloadUltInner(int32_t ultID, bool is3P) {
		return ((T (*)(AssetPreloader*, int32_t, bool))(Il2CppBase() + 0x2BA0424))(this, ultID, is3P);
	}
	template <typename T = void> T PreloadWeaponAsset(int32_t weaponID, bool is3P, int32_t level) {
		return ((T (*)(AssetPreloader*, int32_t, bool, int32_t))(Il2CppBase() + 0x2B9FAF4))(this, weaponID, is3P, level);
	}
	template <typename T = void> T PreloadWeaponPartAsset(int32_t attachmentID) {
		return ((T (*)(AssetPreloader*, int32_t))(Il2CppBase() + 0x2BA0C5C))(this, attachmentID);
	}
	template <typename T = void> T PreloadWeaponAssetInner(int32_t weaponID, int32_t level, bool is3P) {
		return ((T (*)(AssetPreloader*, int32_t, int32_t, bool))(Il2CppBase() + 0x2BA0680))(this, weaponID, level, is3P);
	}
	template <typename T = void> T PreloadFireDataAsset(uintptr_t fireData, bool is3P) {
		return ((T (*)(AssetPreloader*, uintptr_t, bool))(Il2CppBase() + 0x2BA0FF4))(this, fireData, is3P);
	}
	template <typename T = void> T PreloadImpl(int32_t assetID, int32_t count, bool keepAssetForever) {
		return ((T (*)(AssetPreloader*, int32_t, int32_t, bool))(Il2CppBase() + 0x2B9E558))(this, assetID, count, keepAssetForever);
	}
	template <typename T = void> T PreloadWeaponImpl(int32_t assetID) {
		return ((T (*)(AssetPreloader*, int32_t))(Il2CppBase() + 0x2BA0E70))(this, assetID);
	}
	template <typename T = void> T OnWeaponLoadOver(int32_t assetID) {
		return ((T (*)(AssetPreloader*, int32_t))(Il2CppBase() + 0x2BA14D4))(this, assetID);
	}
	template <typename T = void> T InternalLoading(uintptr_t toLoad) {
		return ((T (*)(AssetPreloader*, uintptr_t))(Il2CppBase() + 0x2BA166C))(this, toLoad);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2BA1834))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(AssetPreloader*))(Il2CppBase() + 0x2BA1984))(this);
	}

};

}
