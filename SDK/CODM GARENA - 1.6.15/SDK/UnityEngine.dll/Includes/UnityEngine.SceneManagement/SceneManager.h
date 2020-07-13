#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.SceneManagement {

class SceneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.SceneManagement", "SceneManager"));
	}

	template <typename T = void*> static T& sceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& sceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& activeSceneChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T get_sceneCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7C0D0))(0);
	}
	template <typename T = int32_t> static T get_sceneCountInBuildSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7C160))(0);
	}
	template <typename T = uintptr_t> static T GetActiveScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E7C1F0))(0);
	}
	template <typename T = void> static T INTERNAL_CALL_GetActiveScene(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E7C218))(0, value);
	}
	template <typename T = bool> static T SetActiveScene(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7C2B0))(0, scene);
	}
	template <typename T = bool> static T INTERNAL_CALL_SetActiveScene(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7C2D0))(0, scene);
	}
	template <typename T = uintptr_t> static T GetSceneByPath(Il2CppString* scenePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7C368))(0, scenePath);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSceneByPath(Il2CppString* scenePath, uintptr_t* value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4E7C390))(0, scenePath, value);
	}
	template <typename T = uintptr_t> static T GetSceneByName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7C430))(0, name);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSceneByName(Il2CppString* name, uintptr_t* value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4E7C458))(0, name, value);
	}
	template <typename T = uintptr_t> static T GetSceneAt(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7C4F8))(0, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSceneAt(int32_t index, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x4E7C520))(0, index, value);
	}
	template <typename T = void> static T LoadScene(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7C5C0))(0, sceneName);
	}
	template <typename T = void> static T LoadScene_1(Il2CppString* sceneName, uintptr_t mode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E7C5E8))(0, sceneName, mode);
	}
	template <typename T = void> static T LoadScene_2(int32_t sceneBuildIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7C6CC))(0, sceneBuildIndex);
	}
	template <typename T = void> static T LoadScene_3(int32_t sceneBuildIndex, uintptr_t mode) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E7C6FC))(0, sceneBuildIndex, mode);
	}
	template <typename T = uintptr_t> static T LoadSceneAsync(Il2CppString* sceneName, uintptr_t mode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E7C734))(0, sceneName, mode);
	}
	template <typename T = uintptr_t> static T LoadSceneAsync_1(int32_t sceneBuildIndex, uintptr_t mode) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E7C768))(0, sceneBuildIndex, mode);
	}
	template <typename T = uintptr_t> static T LoadSceneAsyncNameIndexInternal(Il2CppString* sceneName, int32_t sceneBuildIndex, bool isAdditive, bool mustCompleteNextFrame) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x4E7C61C))(0, sceneName, sceneBuildIndex, isAdditive, mustCompleteNextFrame);
	}
	template <typename T = uintptr_t> static T CreateScene(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7C7A0))(0, sceneName);
	}
	template <typename T = void> static T INTERNAL_CALL_CreateScene(Il2CppString* sceneName, uintptr_t* value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4E7C7C8))(0, sceneName, value);
	}
	template <typename T = bool> static T UnloadScene(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7C868))(0, scene);
	}
	template <typename T = bool> static T UnloadSceneInternal(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7C888))(0, scene);
	}
	template <typename T = bool> static T INTERNAL_CALL_UnloadSceneInternal(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7C8A8))(0, scene);
	}
	template <typename T = bool> static T UnloadScene_1(int32_t sceneBuildIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7C940))(0, sceneBuildIndex);
	}
	template <typename T = bool> static T UnloadScene_2(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7CA94))(0, sceneName);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsync(int32_t sceneBuildIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E7CAC8))(0, sceneBuildIndex);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsync_1(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7CB68))(0, sceneName);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsync_2(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7CB98))(0, scene);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsyncInternal(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7CBB8))(0, scene);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_UnloadSceneAsyncInternal(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7CBD8))(0, scene);
	}
	template <typename T = uintptr_t> static T UnloadSceneNameIndexInternal(Il2CppString* sceneName, int32_t sceneBuildIndex, bool immediately, uintptr_t* outSuccess) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, uintptr_t*))(Il2CppBase() + 0x4E7C9E4))(0, sceneName, sceneBuildIndex, immediately, outSuccess);
	}
	template <typename T = void> static T MergeScenes(uintptr_t sourceScene, uintptr_t destinationScene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7CC70))(0, sourceScene, destinationScene);
	}
	template <typename T = void> static T INTERNAL_CALL_MergeScenes(uintptr_t sourceScene, uintptr_t destinationScene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7CC98))(0, sourceScene, destinationScene);
	}
	template <typename T = void> static T MoveGameObjectToScene(uintptr_t go, uintptr_t scene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7CD38))(0, go, scene);
	}
	template <typename T = void> static T INTERNAL_CALL_MoveGameObjectToScene(uintptr_t go, uintptr_t scene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7CD58))(0, go, scene);
	}
	template <typename T = void> static T add_sceneLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7CDF8))(0, value);
	}
	template <typename T = void> static T remove_sceneLoaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7CFD8))(0, value);
	}
	template <typename T = void> static T Internal_SceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4E7D1B8))(0, scene, mode, async);
	}
	template <typename T = void> static T add_sceneUnloaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7D284))(0, value);
	}
	template <typename T = void> static T remove_sceneUnloaded(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7D45C))(0, value);
	}
	template <typename T = void> static T Internal_SceneUnloaded(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7D634))(0, scene);
	}
	template <typename T = void> static T add_activeSceneChanged(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7D6E4))(0, value);
	}
	template <typename T = void> static T remove_activeSceneChanged(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E7D8BC))(0, value);
	}
	template <typename T = void> static T Internal_ActiveSceneChanged(uintptr_t previousActiveScene, uintptr_t newActiveScene) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7DA94))(0, previousActiveScene, newActiveScene);
	}

};

}
