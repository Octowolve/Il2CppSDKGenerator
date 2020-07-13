#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPool"));
	}

	template <typename T = uintptr_t> T& trans() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& prefabGO() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& instanceID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& preloadAmount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& keepAssetForever() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& preloadTime() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = int32_t> T& preloadFrames() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& preloadDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& limitInstances() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& limitAmount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& IntervalTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& limitFIFO() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& cullDespawned() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = int32_t> T& cullAbove() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _logMessages() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& forceLoggingSilent() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = uintptr_t> T& spawnPool() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& cullingActive() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& _spawned() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _despawned() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> static T& _GarbageCollectInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _preloaded() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _lastInstanceTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _lastDespawnedTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> static T& kFlagSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kFlagDespawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& clearList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfDestruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoolHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DespawnInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecursively() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NameNewInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NameInstanceWhenSpawnedFromPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NameInstanceWhenDespawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllIdleInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReduceDespawnSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = bool> T get_logMessages() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480DA5C))(this);
	}
	template <typename T = void> T SelfDestruct() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480DAB0))(this);
	}
	template <typename T = int32_t> T GetPoolHash() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E040))(this);
	}
	template <typename T = void*> T get_spawnedList_DoNotModify() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E110))(this);
	}
	template <typename T = void*> T get_despawnedList_DoNotModify() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E118))(this);
	}
	template <typename T = int32_t> T get_totalCount() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E120))(this);
	}
	template <typename T = int32_t> T get_spawnedCount() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E1E4))(this);
	}
	template <typename T = int32_t> T get_despawnedCount() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E27C))(this);
	}
	template <typename T = bool> T IsIdle() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E314))(this);
	}
	template <typename T = bool> T get_preloaded() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480E4B8))(this);
	}
	template <typename T = void> T set_preloaded(bool value) {
		return ((T (*)(PrefabPool*, bool))(Il2CppBase() + 0x480E4C0))(this, value);
	}
	template <typename T = bool> T DespawnInstance(uintptr_t xform) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x480E4C8))(this, xform);
	}
	template <typename T = bool> T DespawnInstance_1(uintptr_t xform, bool sendEventMessage) {
		return ((T (*)(PrefabPool*, uintptr_t, bool))(Il2CppBase() + 0x480E5AC))(this, xform, sendEventMessage);
	}
	template <typename T = uintptr_t> T SpawnInstance(Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(PrefabPool*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x480F0A4))(this, pos, rot);
	}
	template <typename T = uintptr_t> T SpawnNew() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x480FBA0))(this);
	}
	template <typename T = uintptr_t> T SpawnNew_1(Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(PrefabPool*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x480F67C))(this, pos, rot);
	}
	template <typename T = void> T SetRecursively(uintptr_t xform, int32_t layer) {
		return ((T (*)(PrefabPool*, uintptr_t, int32_t))(Il2CppBase() + 0x480FECC))(this, xform, layer);
	}
	template <typename T = void> T PreloadInstances() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x4810344))(this);
	}
	template <typename T = uintptr_t> T PreloadOverTime() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x4810878))(this);
	}
	template <typename T = bool> T Contains(uintptr_t transform) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x4810990))(this, transform);
	}
	template <typename T = void> T NameNewInstance(uintptr_t instance) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x480FCC4))(this, instance);
	}
	template <typename T = void> T NameInstanceWhenSpawnedFromPool(uintptr_t xform) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x480FA14))(this, xform);
	}
	template <typename T = void> static T NameInstanceWhenDespawned(uintptr_t xform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x480E90C))(0, xform);
	}
	template <typename T = void> T RemoveAllIdleInstances() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x4810BE4))(this);
	}
	template <typename T = void> T ReduceDespawnSet(int32_t targetCount) {
		return ((T (*)(PrefabPool*, int32_t))(Il2CppBase() + 0x480EA90))(this, targetCount);
	}
	template <typename T = bool> static T RemoveAllIdleInstancesm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4811020))(0, t);
	}

};

}
