#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualSceneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualSceneManager"));
	}

	template <typename T = void*> static T& sceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& sceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& kNullAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_sceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_sceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_sceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_sceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePrefabInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPrefabInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T add_sceneLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x488D270))(0, value);
	}
	template <typename T = void> static T remove_sceneLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x488D470))(0, value);
	}
	template <typename T = void> static T add_sceneUnloaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x488D670))(0, value);
	}
	template <typename T = void> static T remove_sceneUnloaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x488D868))(0, value);
	}
	template <typename T = uintptr_t> static T get_spawnPool() {
		return ((T (*)(void *))(Il2CppBase() + 0x488DA60))(0);
	}
	template <typename T = void> static T LoadScene(uintptr_t scene, uintptr_t db) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488DB2C))(0, scene, db);
	}
	template <typename T = void> static T UnloadScene(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488E0C8))(0, scene);
	}
	template <typename T = void> static T CreatePrefabInstance(uintptr_t inst, uintptr_t prefab, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x488DF04))(0, inst, prefab, parent);
	}
	template <typename T = void> static T DestroyPrefabInstance(uintptr_t instance) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488E408))(0, instance);
	}
	template <typename T = uintptr_t> static T LoadSceneAsync(uintptr_t streamer, uintptr_t scene, uintptr_t db) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x488E4EC))(0, streamer, scene, db);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsync(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488E5F8))(0, scene);
	}
	template <typename T = bool> static T CanLoad(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488DE44))(0, scene);
	}
	template <typename T = bool> static T CanUnload(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488E34C))(0, scene);
	}

};

}
