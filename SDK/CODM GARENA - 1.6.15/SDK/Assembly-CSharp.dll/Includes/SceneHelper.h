#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneHelper"));
	}

	template <typename T = int32_t> static T& kMaxWaitFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ShutdownWorldBeforeLoadSceneSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& __rendererLightingInfoFmt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPersistentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BelongsToCurrentMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleSceneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSceneLoadedOrLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBakeDataScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSceneSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneSummary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneByPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAdditive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAdditiveAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsyncInternal_ResFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadSceneAsyncInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintSceneRendererLighting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteToFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> static T GetPersistentScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BF99E8))(0);
	}
	template <typename T = bool> static T BelongsToCurrentMap(uintptr_t scene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BF9BA8))(0, scene);
	}
	template <typename T = Il2CppString*> static T get_activeSceneName() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BF9DA4))(0);
	}
	template <typename T = void> static T SetActiveScene(uintptr_t targetScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BF9DD4))(0, targetScene);
	}
	template <typename T = void> static T ToggleSceneInfo(uintptr_t scene, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3BF9F70))(0, scene, enable);
	}
	template <typename T = bool> static T IsSceneLoaded(Il2CppString* scenePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFA130))(0, scenePath);
	}
	template <typename T = bool> static T IsSceneLoadedOrLoading(Il2CppString* scenePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFA320))(0, scenePath);
	}
	template <typename T = bool> static T IsBakeDataScene(Il2CppString* scenePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFA450))(0, scenePath);
	}
	template <typename T = uintptr_t> static T UnloadSceneAsync(Il2CppString* scenePath, bool deactiveSceneRoots) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3BFA580))(0, scenePath, deactiveSceneRoots);
	}
	template <typename T = bool> static T UnloadSceneSync(Il2CppString* scenePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFA804))(0, scenePath);
	}
	template <typename T = Il2CppString*> static T GetSceneSummary() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BFA9E0))(0);
	}
	template <typename T = uintptr_t> static T GetSceneByPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFA244))(0, path);
	}
	template <typename T = void> static T LoadScene(Il2CppString* name, uintptr_t mode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3BFAAF8))(0, name, mode);
	}
	template <typename T = uintptr_t> static T LoadScene_1(Il2CppArray<uintptr_t>* names) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3BFAD3C))(0, names);
	}
	template <typename T = void> static T LoadSceneAdditive(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFAE54))(0, name);
	}
	template <typename T = uintptr_t> static T LoadSceneAsync_Internal(Il2CppString* sceneName, uintptr_t loadSceneMode) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3BFB004))(0, sceneName, loadSceneMode);
	}
	template <typename T = uintptr_t> static T LoadSceneAdditiveAsync_Internal(Il2CppString* sceneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3BFB0EC))(0, sceneName);
	}
	template <typename T = uintptr_t> static T LoadSceneAsync(Il2CppArray<uintptr_t>* scenePathList, void* onProgress, void* onFail, uintptr_t onSucess, void* onSceneLoadStatus, bool autoActivation, bool setActiveSceneOnLoaded, bool setVisible) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*, void*, uintptr_t, void*, bool, bool, bool))(Il2CppBase() + 0x3BFB1CC))(0, scenePathList, onProgress, onFail, onSucess, onSceneLoadStatus, autoActivation, setActiveSceneOnLoaded, setVisible);
	}
	template <typename T = uintptr_t> static T LoadSceneAsyncInternal_ResFolder(Il2CppArray<uintptr_t>* scenePathList, void* onProgress, void* onFail, uintptr_t onSucess, void* onSceneLoadStatus, bool autoActivation, bool setActiveSceneOnLoaded, bool setVisible) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*, void*, uintptr_t, void*, bool, bool, bool))(Il2CppBase() + 0x3BFB350))(0, scenePathList, onProgress, onFail, onSucess, onSceneLoadStatus, autoActivation, setActiveSceneOnLoaded, setVisible);
	}
	template <typename T = uintptr_t> static T UnLoadSceneAsyncInternal(Il2CppArray<uintptr_t>* scenePathList, uintptr_t onFinish) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3BFB4D4))(0, scenePathList, onFinish);
	}
	template <typename T = void> static T PrintSceneRendererLighting() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BFB5F8))(0);
	}
	template <typename T = void> static T WriteToFile(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3BFB6B8))(0, sb);
	}

};

}
