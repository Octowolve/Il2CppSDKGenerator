#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Resources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Resources"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T ConvertObjects(Il2CppArray<uintptr_t>* rawObjects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E43F6C))(0, rawObjects);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindObjectsOfTypeAll(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78A78))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindObjectsOfTypeAll_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E44050))(0);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E78B10))(0, path);
	}
	template <typename T = uintptr_t> static T Load_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33954B8))(0, path);
	}
	template <typename T = uintptr_t> static T Load_2(Il2CppString* path, uintptr_t systemTypeInstance) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E789D0))(0, path, systemTypeInstance);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadBytes(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E78BDC))(0, path);
	}
	template <typename T = uintptr_t> static T LoadAsync(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E78C74))(0, path);
	}
	template <typename T = uintptr_t> static T LoadAsync_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E588F4))(0, path);
	}
	template <typename T = uintptr_t> static T LoadAsync_2(Il2CppString* path, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E78D40))(0, path, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadAll(Il2CppString* path, uintptr_t systemTypeInstance) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E78DE0))(0, path, systemTypeInstance);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadAll_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E78E80))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadAll_2(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E44124))(0, path);
	}
	template <typename T = uintptr_t> static T GetBuiltinResource(uintptr_t type, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4E78F4C))(0, type, path);
	}
	template <typename T = uintptr_t> static T GetBuiltinResource_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33953D4))(0, path);
	}
	template <typename T = void> static T UnloadAsset(uintptr_t assetToUnload) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78FEC))(0, assetToUnload);
	}
	template <typename T = uintptr_t> static T UnloadUnusedAssets() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E79084))(0);
	}

};

}
