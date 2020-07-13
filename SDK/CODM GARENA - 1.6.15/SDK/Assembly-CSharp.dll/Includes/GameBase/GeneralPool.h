#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GeneralPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GeneralPool"));
	}

	template <typename T = uintptr_t> T& m_RawAssetReferenceCounter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& kInvalidMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_EnteredMapID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SpawnPool() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_UIRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> static T& EnableReferenceCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kGeneralPoolName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kInvalidAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ENABLE_DESTROY_WHEN_ILLEGAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_CachedInstanceDic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& preloadAssets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoolName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEnableReferenceCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadUnusedInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroyAllInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SyncSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dismiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Dismiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindInstanceTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOrLoadInstanceTemplateSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInstanceTemplateAfterLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInstanceTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOrLoadInstanceTemplateAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___PrepareInstanceTemplateAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchIfExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPreloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = Il2CppString*> T GetPoolName() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC4480))(this);
	}
	template <typename T = uintptr_t> T get_SpawnPool() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC4568))(this);
	}
	template <typename T = bool> T ShouldEnableReferenceCounter() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC4570))(this);
	}
	template <typename T = void> T UpdateUIRoot() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC46D4))(this);
	}
	template <typename T = void> T OnEnterGame(int32_t enterMapID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC487C))(this, enterMapID);
	}
	template <typename T = void> T OnLeaveGame() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC4CF0))(this);
	}
	template <typename T = void> T UnloadUnusedInstance() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC4F80))(this);
	}
	template <typename T = void> T OnDestroyAllInstance(int32_t assetID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC5120))(this, assetID);
	}
	template <typename T = uintptr_t> T SyncSpawn(uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(GeneralPool*, uintptr_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x1EC5234))(this, prefab, pos, rot, lifeTime, parent);
	}
	template <typename T = uintptr_t> T SyncSpawn_1(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(GeneralPool*, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x1EC59D8))(this, assetID, pos, rot, lifeTime, parent);
	}
	template <typename T = uintptr_t> T InternalSpawn(int32_t assetID, uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent, bool useMangedAsset) {
		return ((T (*)(GeneralPool*, int32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t, bool))(Il2CppBase() + 0x1EC55B4))(this, assetID, prefab, pos, rot, lifeTime, parent, useMangedAsset);
	}
	template <typename T = void> T AsyncSpawn(int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent, void* callback) {
		return ((T (*)(GeneralPool*, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t, void*))(Il2CppBase() + 0x1EC5F70))(this, assetID, pos, rot, lifeTime, parent, callback);
	}
	template <typename T = void> T Despawn(uintptr_t gameObject) {
		return ((T (*)(GeneralPool*, uintptr_t))(Il2CppBase() + 0x1EC64B4))(this, gameObject);
	}
	template <typename T = void> T Despawn_1(uintptr_t managedAsset) {
		return ((T (*)(GeneralPool*, uintptr_t))(Il2CppBase() + 0x1EC68A4))(this, managedAsset);
	}
	template <typename T = void> T Dismiss(uintptr_t gameObject) {
		return ((T (*)(GeneralPool*, uintptr_t))(Il2CppBase() + 0x1EC6C60))(this, gameObject);
	}
	template <typename T = void> T Dismiss_1(int32_t assetID, uintptr_t gameObject) {
		return ((T (*)(GeneralPool*, int32_t, uintptr_t))(Il2CppBase() + 0x1EC6E18))(this, assetID, gameObject);
	}
	template <typename T = uintptr_t> T FindInstanceTemplate(int32_t assetID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC6FEC))(this, assetID);
	}
	template <typename T = uintptr_t> T FindOrLoadInstanceTemplateSync(int32_t assetID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC5D24))(this, assetID);
	}
	template <typename T = uintptr_t> T PrepareInstanceTemplateAfterLoad(int32_t assetID, uintptr_t prefab) {
		return ((T (*)(GeneralPool*, int32_t, uintptr_t))(Il2CppBase() + 0x1EC71DC))(this, assetID, prefab);
	}
	template <typename T = uintptr_t> T PrepareInstanceTemplate(int32_t assetID, uintptr_t prefab) {
		return ((T (*)(GeneralPool*, int32_t, uintptr_t))(Il2CppBase() + 0x1EC72D8))(this, assetID, prefab);
	}
	template <typename T = void> T FindOrLoadInstanceTemplateAsync(int32_t assetID, void* callback) {
		return ((T (*)(GeneralPool*, int32_t, void*))(Il2CppBase() + 0x1EC61C4))(this, assetID, callback);
	}
	template <typename T = void> T __PrepareInstanceTemplateAsync_Internal(int32_t id, uintptr_t _) {
		return ((T (*)(GeneralPool*, int32_t, uintptr_t))(Il2CppBase() + 0x1EC7584))(this, id, _);
	}
	template <typename T = bool> T SearchIfExist(int32_t assetID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC7878))(this, assetID);
	}
	template <typename T = void> T AddPreloadAsset(int32_t assetID) {
		return ((T (*)(GeneralPool*, int32_t))(Il2CppBase() + 0x1EC7A0C))(this, assetID);
	}
	template <typename T = bool> T PrepareInstance(uintptr_t prefab, int32_t assetID, int32_t preloadCount, int32_t limitCount, float IntervalTime, bool limitFIFO, bool keepAssetForever) {
		return ((T (*)(GeneralPool*, uintptr_t, int32_t, int32_t, int32_t, float, bool, bool))(Il2CppBase() + 0x1EC7BE8))(this, prefab, assetID, preloadCount, limitCount, IntervalTime, limitFIFO, keepAssetForever);
	}
	template <typename T = bool> T SyncPreload(int32_t assetID, int32_t preloadCount, int32_t limitCount, float IntervalTime, bool limitFIFO, bool keepAssetForever) {
		return ((T (*)(GeneralPool*, int32_t, int32_t, int32_t, float, bool, bool))(Il2CppBase() + 0x1EC8190))(this, assetID, preloadCount, limitCount, IntervalTime, limitFIFO, keepAssetForever);
	}
	template <typename T = void> T AsyncPreload(int32_t assetID, int32_t preloadCount, int32_t limitCount, float IntervalTime, bool limitFIFO, bool keepAssetForever) {
		return ((T (*)(GeneralPool*, int32_t, int32_t, int32_t, float, bool, bool))(Il2CppBase() + 0x1EC4B08))(this, assetID, preloadCount, limitCount, IntervalTime, limitFIFO, keepAssetForever);
	}
	template <typename T = void> T Reset(int32_t assetID, bool keepAssetForever) {
		return ((T (*)(GeneralPool*, int32_t, bool))(Il2CppBase() + 0x1EC82D8))(this, assetID, keepAssetForever);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 deltaShift) {
		return ((T (*)(GeneralPool*, Il2CppVector3))(Il2CppBase() + 0x1EC858C))(this, deltaShift);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(GeneralPool*))(Il2CppBase() + 0x1EC8758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Despawn(uintptr_t P0) {
		return ((T (*)(GeneralPool*, uintptr_t))(Il2CppBase() + 0x1EC8964))(this, P0);
	}

};

}
