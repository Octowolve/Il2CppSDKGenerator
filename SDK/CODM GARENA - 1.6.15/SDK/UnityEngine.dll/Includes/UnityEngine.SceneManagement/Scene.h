#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.SceneManagement {

class Scene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.SceneManagement", "Scene"));
	}

	template <typename T = int32_t> T& m_Handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_handle() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7B7E8))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7B890))(this);
	}
	template <typename T = Il2CppString*> T get_path() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7B938))(this);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7B9E0))(this);
	}
	template <typename T = bool> T get_isLoaded() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7BA88))(this);
	}
	template <typename T = int32_t> T get_buildIndex() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7BB30))(this);
	}
	template <typename T = bool> T get_isDirty() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7BBD8))(this);
	}
	template <typename T = int32_t> T get_rootCount() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7BC80))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRootGameObjects() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7BF34))(this);
	}
	template <typename T = void> T GetRootGameObjects_1(Il2CppList<uintptr_t>* rootGameObjects) {
		return ((T (*)(Scene*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4E7BFDC))(this, rootGameObjects);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7BFE4))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7BFF4))(0, lhs, rhs);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Scene*))(Il2CppBase() + 0x4E7C00C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Scene*, uintptr_t))(Il2CppBase() + 0x4E7C0C8))(this, other);
	}
	template <typename T = bool> static T IsValidInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7B7F8))(0, sceneHandle);
	}
	template <typename T = Il2CppString*> static T GetPathInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7B8A0))(0, sceneHandle);
	}
	template <typename T = Il2CppString*> static T GetNameInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7B948))(0, sceneHandle);
	}
	template <typename T = bool> static T GetIsLoadedInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7B9F0))(0, sceneHandle);
	}
	template <typename T = bool> static T GetIsDirtyInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7BB40))(0, sceneHandle);
	}
	template <typename T = int32_t> static T GetBuildIndexInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7BA98))(0, sceneHandle);
	}
	template <typename T = int32_t> static T GetRootCountInternal(int32_t sceneHandle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7BBE8))(0, sceneHandle);
	}
	template <typename T = void> static T GetRootGameObjectsInternal(int32_t sceneHandle, uintptr_t resultRootList) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E7BF3C))(0, sceneHandle, resultRootList);
	}

};

}
