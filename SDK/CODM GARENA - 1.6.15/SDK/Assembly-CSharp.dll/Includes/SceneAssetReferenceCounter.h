#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneAssetReferenceCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneAssetReferenceCounter"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_AllAssetRefCounter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& kMaxUnusedCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UnusedSceneInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& m_SceneAssetsDict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PendingUnloadAssets() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& disabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& enableDelayedUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& useLRU() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = uintptr_t> T& sceneStreamer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSceneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAssetRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseUnusedSceneAssetRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRefCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnloadPendingAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T PrintAll() {
		return ((T (*)(SceneAssetReferenceCounter*))(Il2CppBase() + 0x3BF7004))(this);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene) {
		return ((T (*)(SceneAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x3BF70CC))(this, scene);
	}
	template <typename T = void> T OnSceneUnloaded(uintptr_t scene) {
		return ((T (*)(SceneAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x3BF784C))(this, scene);
	}
	template <typename T = uintptr_t> T FindSceneInfo(Il2CppString* scenePath) {
		return ((T (*)(SceneAssetReferenceCounter*, Il2CppString*))(Il2CppBase() + 0x3BF7CD8))(this, scenePath);
	}
	template <typename T = void> T RemoveAssetRef(Il2CppString* scenePath) {
		return ((T (*)(SceneAssetReferenceCounter*, Il2CppString*))(Il2CppBase() + 0x3BF798C))(this, scenePath);
	}
	template <typename T = void> T AddAssetRef(Il2CppString* scenePath, uintptr_t root) {
		return ((T (*)(SceneAssetReferenceCounter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3BF72E8))(this, scenePath, root);
	}
	template <typename T = void> T ReleaseUnusedSceneAssetRef(Il2CppString* scenePath) {
		return ((T (*)(SceneAssetReferenceCounter*, Il2CppString*))(Il2CppBase() + 0x3BF7F3C))(this, scenePath);
	}
	template <typename T = int32_t> T GetRefCount(uintptr_t asset) {
		return ((T (*)(SceneAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x3BF87E4))(this, asset);
	}
	template <typename T = void> T CheckUnloadPendingAssets() {
		return ((T (*)(SceneAssetReferenceCounter*))(Il2CppBase() + 0x3BF8918))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(SceneAssetReferenceCounter*))(Il2CppBase() + 0x3BF8C9C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SceneAssetReferenceCounter*))(Il2CppBase() + 0x3BF8DB4))(this);
	}
	template <typename T = bool> T CheckUnloadPendingAssetsm__0(uintptr_t e) {
		return ((T (*)(SceneAssetReferenceCounter*, uintptr_t))(Il2CppBase() + 0x3BF8F7C))(this, e);
	}

};

}
