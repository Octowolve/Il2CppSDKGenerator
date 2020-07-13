#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUEditorUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_EditorUtility"));
	}


	template <typename T = void> static T MarkSceneDirty() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6D9F8))(0);
	}
	template <typename T = void> static T SelectObject(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6D9FC))(0, gameObject);
	}
	template <typename T = void> static T SelectObjects(Il2CppArray<uintptr_t>* gameObjects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6DA00))(0, gameObjects);
	}
	template <typename T = uintptr_t> static T CreatePrefab(Il2CppString* path, uintptr_t go) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C6DA04))(0, path, go);
	}
	template <typename T = bool> static T IsEditorPlaying() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6C52C))(0);
	}
	template <typename T = uintptr_t> static T ReplacePrefab(uintptr_t go, uintptr_t targetPrefab, uintptr_t heuOptions) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6DAC4))(0, go, targetPrefab, heuOptions);
	}
	template <typename T = bool> static T IsPrefabInstance(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6DB84))(0, go);
	}
	template <typename T = bool> static T IsPrefabOriginal(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6DC44))(0, go);
	}
	template <typename T = bool> static T IsDisconnectedPrefabInstance(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6DD04))(0, go);
	}
	template <typename T = uintptr_t> static T GetPrefabParent(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6DDC4))(0, go);
	}
	template <typename T = uintptr_t> static T ConnectGameObjectToPrefab(uintptr_t go, uintptr_t sourcePrefab) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6DE84))(0, go, sourcePrefab);
	}
	template <typename T = uintptr_t> static T InstantiatePrefab(uintptr_t prefabOriginal) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6DF44))(0, prefabOriginal);
	}
	template <typename T = uintptr_t> static T InstantiateGameObject(uintptr_t sourceGameObject, uintptr_t parentTransform, bool instantiateInWorldSpace, bool bRegisterUndo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x4C6E004))(0, sourceGameObject, parentTransform, instantiateInWorldSpace, bRegisterUndo);
	}
	template <typename T = uintptr_t> static T AddComponent(uintptr_t target, bool bRegisterUndo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4E57FE8))(0, target, bRegisterUndo);
	}
	template <typename T = void> static T UndoRecordObject(uintptr_t objectToUndo, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C6E0E0))(0, objectToUndo, name);
	}
	template <typename T = void> static T UndoCollapseCurrentGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E0E4))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CollectDependencies(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6E0E8))(0, obj);
	}
	template <typename T = bool> static T IsPersistant(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6E1A8))(0, obj);
	}
	template <typename T = Il2CppString*> static T GetUniqueNameForSibling(uintptr_t parentTransform, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4C6E268))(0, parentTransform, name);
	}
	template <typename T = void> static T DisplayProgressBar(Il2CppString* title, Il2CppString* info, float progress) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x4C6E328))(0, title, info, progress);
	}
	template <typename T = void> static T ClearProgressBar() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E3E4))(0);
	}
	template <typename T = bool> static T IsEditorNotInPlayModeAndNotGoingToPlayMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E4A0))(0);
	}
	template <typename T = bool> static T DisplayDialog(Il2CppString* title, Il2CppString* message, Il2CppString* ok, Il2CppString* cancel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C6E4D8))(0, title, message, ok, cancel);
	}
	template <typename T = bool> static T DisplayErrorDialog(Il2CppString* title, Il2CppString* message, Il2CppString* ok, Il2CppString* cancel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C6E5F4))(0, title, message, ok, cancel);
	}
	template <typename T = void> static T SetObjectDirtyForEditorUpdate(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6E720))(0, obj);
	}
	template <typename T = void> static T SetStatic(uintptr_t go, bool bStatic) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4C6E724))(0, go, bStatic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSelectedAssetRoots() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E728))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetAllAssetRoots() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E7F8))(0);
	}
	template <typename T = void> static T CookSelected() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6E8B0))(0);
	}
	template <typename T = void> static T CookAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6EA0C))(0);
	}
	template <typename T = void> static T CookAssets(Il2CppArray<uintptr_t>* rootAssets) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6E8C8))(0, rootAssets);
	}
	template <typename T = void> static T RebuildSelected() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6EA24))(0);
	}
	template <typename T = void> static T RebuildAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6EB64))(0);
	}
	template <typename T = void> static T RebuildAssets(Il2CppArray<uintptr_t>* rootAssets) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6EA3C))(0, rootAssets);
	}
	template <typename T = void> static T BakeAndReplaceSelectedInScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6EB7C))(0);
	}
	template <typename T = void> static T BakeAndReplaceAllInScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6ECB8))(0);
	}
	template <typename T = void> static T BakeAndReplaceAssets(Il2CppArray<uintptr_t>* rootAssets) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6EB94))(0, rootAssets);
	}

};

}
