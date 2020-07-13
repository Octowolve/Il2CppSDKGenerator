#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabAssetReferenceCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabAssetReferenceCounter"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_RawAssetRefCounter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UnusedPrefabInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MaxUnusedCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MaxLifeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& m_CheckPrefabLifeTimeInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_NextCheckPrefabLifeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_InstantiatedPrefabList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_OnBeginUnloadAssetNotify() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrefabNoLongerUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPrefabLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadRawAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPrefabUsageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInstanceSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrefabInstantiated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(PrefabAssetReferenceCounter*))(Il2CppBase() + 0x4802CA0))(this);
	}
	template <typename T = void> T OnPrefabNoLongerUsed(uintptr_t prefab) {
		return ((T (*)(PrefabAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x4802D9C))(this, prefab);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(PrefabAssetReferenceCounter*))(Il2CppBase() + 0x4803994))(this);
	}
	template <typename T = void> T CheckPrefabLifeTime() {
		return ((T (*)(PrefabAssetReferenceCounter*))(Il2CppBase() + 0x4803A74))(this);
	}
	template <typename T = void> T UnloadRawAssets(uintptr_t targetPrefab) {
		return ((T (*)(PrefabAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x48033B4))(this, targetPrefab);
	}
	template <typename T = uintptr_t> T FindPrefabUsageInfo(uintptr_t prefab) {
		return ((T (*)(PrefabAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x4803148))(this, prefab);
	}
	template <typename T = void> T OnInstanceSpawned(uintptr_t prefab) {
		return ((T (*)(PrefabAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x4803C90))(this, prefab);
	}
	template <typename T = void> T OnPrefabInstantiated(uintptr_t prefab) {
		return ((T (*)(PrefabAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x4803E80))(this, prefab);
	}

};

}
