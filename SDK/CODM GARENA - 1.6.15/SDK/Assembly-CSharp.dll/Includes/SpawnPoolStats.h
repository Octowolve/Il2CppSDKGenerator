#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPoolStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnPoolStats"));
	}

	template <typename T = Il2CppString*> static T& EnableDirective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AverageRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_stat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterNewPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRegisterNewPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpawnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDespawnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActivateCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDeactivateCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPrewarmCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCreateCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToStringBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x39115B8))(0);
	}
	template <typename T = void> static T RegisterNewPrefab(int32_t instanceId, int32_t assetId, Il2CppString* name, uintptr_t prefab) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39116E8))(0, instanceId, assetId, name, prefab);
	}
	template <typename T = uintptr_t> static T DoRegisterNewPrefab(int32_t instanceId, int32_t assetId, Il2CppString* name, uintptr_t prefab) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39117BC))(0, instanceId, assetId, name, prefab);
	}
	template <typename T = void> static T AddSpawnCount(int32_t prefabInstanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3911C50))(0, prefabInstanceId);
	}
	template <typename T = void> static T AddDespawnCount(int32_t prefabInstanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3911DD0))(0, prefabInstanceId);
	}
	template <typename T = void> static T AddActivateCount(int32_t prefabInstanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3911ED4))(0, prefabInstanceId);
	}
	template <typename T = void> static T AddDeactivateCount(int32_t prefabInstanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3911FD8))(0, prefabInstanceId);
	}
	template <typename T = void> static T AddPrewarmCount(int32_t prefabInstanceId, int32_t count) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x39120DC))(0, prefabInstanceId, count);
	}
	template <typename T = void> static T AddCreateCount(int32_t prefabInstanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x39121E8))(0, prefabInstanceId);
	}
	template <typename T = bool> static T ToStringBuilder(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39122EC))(0, sb);
	}

};

}
