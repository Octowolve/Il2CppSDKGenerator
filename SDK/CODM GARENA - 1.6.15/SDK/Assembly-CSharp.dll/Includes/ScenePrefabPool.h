#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScenePrefabPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScenePrefabPool"));
	}

	template <typename T = uintptr_t> T& m_SpawnPool() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_RefCounter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpawnPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUnloadPrefabAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T CreateSpawnPool() {
		return ((T (*)(ScenePrefabPool*))(Il2CppBase() + 0x3BFD490))(this);
	}
	template <typename T = uintptr_t> T Spawn(int32_t assetID, uintptr_t prefab, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale, uintptr_t parent) {
		return ((T (*)(ScenePrefabPool*, int32_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3BFD60C))(this, assetID, prefab, pos, rot, scale, parent);
	}
	template <typename T = void> T DeSpawn(uintptr_t pooledInst) {
		return ((T (*)(ScenePrefabPool*, uintptr_t))(Il2CppBase() + 0x3BFD9A0))(this, pooledInst);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(ScenePrefabPool*))(Il2CppBase() + 0x3BFDC8C))(this);
	}
	template <typename T = void> T OnBeginUnloadPrefabAssets(uintptr_t prefab) {
		return ((T (*)(ScenePrefabPool*, uintptr_t))(Il2CppBase() + 0x3BFDD3C))(this, prefab);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ScenePrefabPool*))(Il2CppBase() + 0x3BFDE58))(this);
	}

};

}
