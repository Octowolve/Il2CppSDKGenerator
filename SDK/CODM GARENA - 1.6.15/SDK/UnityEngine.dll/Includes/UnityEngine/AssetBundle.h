#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AssetBundle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AssetBundle"));
	}


	template <typename T = uintptr_t> static T LoadFromFileAsync(Il2CppString* path, uint32_t crc, uint64_t offset) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint64_t))(Il2CppBase() + 0x469AF14))(0, path, crc, offset);
	}
	template <typename T = uintptr_t> static T LoadFromFile(Il2CppString* path, uint32_t crc, uint64_t offset) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint64_t))(Il2CppBase() + 0x469AFC4))(0, path, crc, offset);
	}
	template <typename T = uintptr_t> T LoadAsset(Il2CppString* name) {
		return ((T (*)(AssetBundle*, Il2CppString*))(Il2CppBase() + 0x3393EB8))(this, name);
	}
	template <typename T = uintptr_t> T LoadAsset_1(Il2CppString* name, uintptr_t type) {
		return ((T (*)(AssetBundle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469B074))(this, name, type);
	}
	template <typename T = uintptr_t> T LoadAsset_Internal(Il2CppString* name, uintptr_t type) {
		return ((T (*)(AssetBundle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469B1D0))(this, name, type);
	}
	template <typename T = uintptr_t> T LoadAssetAsync(Il2CppString* name, uintptr_t type) {
		return ((T (*)(AssetBundle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469B278))(this, name, type);
	}
	template <typename T = uintptr_t> T LoadAssetAsync_Internal(Il2CppString* name, uintptr_t type) {
		return ((T (*)(AssetBundle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469B3D4))(this, name, type);
	}
	template <typename T = void> T Unload(bool unloadAllLoadedObjects) {
		return ((T (*)(AssetBundle*, bool))(Il2CppBase() + 0x469B47C))(this, unloadAllLoadedObjects);
	}
	template <typename T = void> static T set_enableOptimiseSerializedFileCache(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x469B51C))(0, value);
	}

};

}
