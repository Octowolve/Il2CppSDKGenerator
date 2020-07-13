#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LoadAssetComposer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LoadAssetComposer"));
	}

	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_WeaponAssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_AssetList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ComposeInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int32_t>*> static T& m_TempAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComposedWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComposerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripLOD_KeepLOD0_and_LOD2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripLOD_KeepLOD1_and_LOD2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripLOD_OnlyKeepLOD2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLODGroupAndUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindInArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildCompose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComposeRai() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommonCompose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshComposeAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetManagedAssetPartType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateReloadingMag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckComposeStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadOriginalAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = bool> T get_IsLoading() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x2498034))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x24981EC))(this);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x24984CC))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(LoadAssetComposer*, bool))(Il2CppBase() + 0x24984D4))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x24984DC))(this);
	}
	template <typename T = void> T AddAsset(int32_t id) {
		return ((T (*)(LoadAssetComposer*, int32_t))(Il2CppBase() + 0x24985B0))(this, id);
	}
	template <typename T = void> T LoadAsset(int32_t WeaponAssetID, Il2CppList<uintptr_t>* weaponPartManagedAssetList, void* callback, uintptr_t TaskPriority, bool callbakAfterCompose, int32_t actorID, int32_t itemID, uint32_t skinID, bool is3PWeapon, bool sync, bool cacheComposePart) {
		return ((T (*)(LoadAssetComposer*, int32_t, Il2CppList<uintptr_t>*, void*, uintptr_t, bool, int32_t, int32_t, uint32_t, bool, bool, bool))(Il2CppBase() + 0x24986C8))(this, WeaponAssetID, weaponPartManagedAssetList, callback, TaskPriority, callbakAfterCompose, actorID, itemID, skinID, is3PWeapon, sync, cacheComposePart);
	}
	template <typename T = void> T OnWeaponPartReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(LoadAssetComposer*, int32_t, uintptr_t))(Il2CppBase() + 0x2499220))(this, assetID, obj);
	}
	template <typename T = bool> T TickStep() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x2499638))(this);
	}
	template <typename T = uintptr_t> T GetComposedWeaponPart(int32_t actorID, int32_t assetID) {
		return ((T (*)(LoadAssetComposer*, int32_t, int32_t))(Il2CppBase() + 0x249A1E4))(this, actorID, assetID);
	}
	template <typename T = bool> T ComposerWeaponPart(int32_t actorID, int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppList<uintptr_t>* weaponPartManagedAssetList, float lifeTime, uintptr_t parent, bool is3PWeapon, bool useStep, bool cacheCompoasePart) {
		return ((T (*)(LoadAssetComposer*, int32_t, int32_t, Il2CppVector3, Il2CppQuaternion, Il2CppList<uintptr_t>*, float, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x2499830))(this, actorID, assetID, pos, rot, weaponPartManagedAssetList, lifeTime, parent, is3PWeapon, useStep, cacheCompoasePart);
	}
	template <typename T = bool> T StripLOD(int32_t step, uintptr_t t) {
		return ((T (*)(LoadAssetComposer*, int32_t, uintptr_t))(Il2CppBase() + 0x249B098))(this, step, t);
	}
	template <typename T = bool> T StripLOD_KeepLOD0_and_LOD2(uintptr_t ld) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249C690))(this, ld);
	}
	template <typename T = bool> T StripLOD_KeepLOD1_and_LOD2(uintptr_t ld) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249C4B4))(this, ld);
	}
	template <typename T = bool> T StripLOD_OnlyKeepLOD2(uintptr_t ld) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249C2EC))(this, ld);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ProcessLODGroupAndUnload(Il2CppArray<uintptr_t>* oldLODs, Il2CppArray<uintptr_t>* increasedKeepIndexes) {
		return ((T (*)(LoadAssetComposer*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x249C854))(this, oldLODs, increasedKeepIndexes);
	}
	template <typename T = bool> T FindInArray(Il2CppArray<uintptr_t>* arr, int32_t num) {
		return ((T (*)(LoadAssetComposer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x249CCAC))(this, arr, num);
	}
	template <typename T = bool> T BuildCompose(int32_t step, bool useStep, int32_t actorID, int32_t assetID, bool is3PWeapon, uintptr_t data, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent, Il2CppList<uintptr_t>* weaponPartManagedAssetList, bool cacheComposePart) {
		return ((T (*)(LoadAssetComposer*, int32_t, bool, int32_t, int32_t, bool, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x249A328))(this, step, useStep, actorID, assetID, is3PWeapon, data, pos, rot, parent, weaponPartManagedAssetList, cacheComposePart);
	}
	template <typename T = bool> T ComposeRai(int32_t step) {
		return ((T (*)(LoadAssetComposer*, int32_t))(Il2CppBase() + 0x249A724))(this, step);
	}
	template <typename T = bool> T CommonCompose(int32_t step, int32_t assetID, Il2CppString* socketName, uintptr_t socketType, uintptr_t partType, bool active) {
		return ((T (*)(LoadAssetComposer*, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x249AAD0))(this, step, assetID, socketName, socketType, partType, active);
	}
	template <typename T = bool> T ProcessLOD(int32_t step) {
		return ((T (*)(LoadAssetComposer*, int32_t))(Il2CppBase() + 0x249BD5C))(this, step);
	}
	template <typename T = bool> T ProcessBatch(int32_t step, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent) {
		return ((T (*)(LoadAssetComposer*, int32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x249B3D8))(this, step, pos, rot, parent);
	}
	template <typename T = void> T RefreshComposeAssets() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x249DBE0))(this);
	}
	template <typename T = uintptr_t> T GetManagedAssetPartType(uintptr_t asset) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249EFB4))(this, asset);
	}
	template <typename T = void> T CreateReloadingMag() {
		return ((T (*)(LoadAssetComposer*))(Il2CppBase() + 0x249E41C))(this);
	}
	template <typename T = bool> T CheckComposeStep(int32_t targetStep) {
		return ((T (*)(LoadAssetComposer*, int32_t))(Il2CppBase() + 0x249C1FC))(this, targetStep);
	}
	template <typename T = uintptr_t> T InsertWeaponPart(uintptr_t mainWeaponAsset, int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent, uintptr_t attachPoint, bool isMainMesh, bool is3PWeapon, bool useLowerLevelLod, uintptr_t partType) {
		return ((T (*)(LoadAssetComposer*, uintptr_t, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t, uintptr_t, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x249CDEC))(this, mainWeaponAsset, assetID, pos, rot, lifeTime, parent, attachPoint, isMainMesh, is3PWeapon, useLowerLevelLod, partType);
	}
	template <typename T = void> T UnloadOriginalAssets(uintptr_t modelOptimizer) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249E13C))(this, modelOptimizer);
	}
	template <typename T = bool> T NeedBatch(uintptr_t info) {
		return ((T (*)(LoadAssetComposer*, uintptr_t))(Il2CppBase() + 0x249DF30))(this, info);
	}

};

}
