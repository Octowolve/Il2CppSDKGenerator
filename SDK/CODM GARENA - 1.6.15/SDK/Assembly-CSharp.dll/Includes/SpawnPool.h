#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnPool"));
	}

	template <typename T = Il2CppString*> T& poolName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& matchPoolLayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& dontReparent() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& logMessages() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& dontDestroyOnLoad() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _prefabPools() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _isDestroyed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> static T& toRemovePrefabPoolHashList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiatePrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllUnUsedPrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dismiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Dismiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PritnStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrefabPoolCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObjectCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_group() {
		return ((T (*)(SpawnPool*))(Il2CppBase() + 0x390DEC4))(this);
	}
	template <typename T = void> T set_group(uintptr_t value) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390DECC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpawnPool*))(Il2CppBase() + 0x390DED4))(this);
	}
	template <typename T = uintptr_t> T InstantiatePrefab(uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot) {
		return ((T (*)(SpawnPool*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x390E064))(this, prefab, pos, rot);
	}
	template <typename T = void> T DestroyInstance(uintptr_t instance) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390E21C))(this, instance);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SpawnPool*))(Il2CppBase() + 0x390E338))(this);
	}
	template <typename T = void> T CreatePrefabPool(uintptr_t prefabPool) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390E698))(this, prefabPool);
	}
	template <typename T = uintptr_t> T Spawn(int32_t assetID, uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent, uintptr_t sourcePrefabPool) {
		return ((T (*)(SpawnPool*, int32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, uintptr_t))(Il2CppBase() + 0x390EB40))(this, assetID, prefab, pos, rot, parent, sourcePrefabPool);
	}
	template <typename T = uintptr_t> T Spawn_1(int32_t assetID, uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent) {
		return ((T (*)(SpawnPool*, int32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x390F10C))(this, assetID, prefab, pos, rot, parent);
	}
	template <typename T = bool> T Despawn(uintptr_t instance, int32_t assetID) {
		return ((T (*)(SpawnPool*, uintptr_t, int32_t))(Il2CppBase() + 0x390F2A8))(this, instance, assetID);
	}
	template <typename T = bool> T Despawn_1(uintptr_t instance, uintptr_t parent, int32_t assetID) {
		return ((T (*)(SpawnPool*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x390F62C))(this, instance, parent, assetID);
	}
	template <typename T = bool> T Despawn_2(uintptr_t instance, uintptr_t parent, uintptr_t prefabPool) {
		return ((T (*)(SpawnPool*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x390F7A8))(this, instance, parent, prefabPool);
	}
	template <typename T = uintptr_t> T GetPrefabPool(uintptr_t trans) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390E9A0))(this, trans);
	}
	template <typename T = uintptr_t> T GetPrefabPool_1(uintptr_t prefab) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390F930))(this, prefab);
	}
	template <typename T = void> T DestroyPrefabPool(uintptr_t prefab) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x390FA8C))(this, prefab);
	}
	template <typename T = void> T DestroyAllUnUsedPrefabPool(void* callback) {
		return ((T (*)(SpawnPool*, void*))(Il2CppBase() + 0x390FBD0))(this, callback);
	}
	template <typename T = uintptr_t> T GetPrefab(uintptr_t instance) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x3910328))(this, instance);
	}
	template <typename T = void> T Dismiss(uintptr_t instance) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x39105E8))(this, instance);
	}
	template <typename T = void> T Dismiss_1(int32_t assetID, uintptr_t trans) {
		return ((T (*)(SpawnPool*, int32_t, uintptr_t))(Il2CppBase() + 0x39108C8))(this, assetID, trans);
	}
	template <typename T = void> T PritnStatus(uintptr_t sb) {
		return ((T (*)(SpawnPool*, uintptr_t))(Il2CppBase() + 0x3910ACC))(this, sb);
	}
	template <typename T = int32_t> T GetPrefabPoolCount() {
		return ((T (*)(SpawnPool*))(Il2CppBase() + 0x39110E0))(this);
	}
	template <typename T = void> T GetObjectCount(uintptr_t* outSpawnedCount, uintptr_t* outDespawnedCount) {
		return ((T (*)(SpawnPool*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x39111E4))(this, outSpawnedCount, outDespawnedCount);
	}

};

}
