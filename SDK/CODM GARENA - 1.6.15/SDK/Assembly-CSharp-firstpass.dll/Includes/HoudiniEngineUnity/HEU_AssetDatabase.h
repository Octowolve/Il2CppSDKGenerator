#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAssetDatabase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AssetDatabase"));
	}


	template <typename T = Il2CppString*> static T GetAssetCachePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6150C))(0);
	}
	template <typename T = Il2CppString*> static T GetAssetRelativePath(Il2CppString* inFullPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61610))(0, inFullPath);
	}
	template <typename T = Il2CppString*> static T GetAssetPath(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6179C))(0, asset);
	}
	template <typename T = Il2CppString*> static T GetAssetRelativePathStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6185C))(0);
	}
	template <typename T = Il2CppString*> static T GetAssetFullPath(Il2CppString* inAssetRelativePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61964))(0, inAssetRelativePath);
	}
	template <typename T = bool> static T IsPathRelativeToAssets(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61BD4))(0, inPath);
	}
	template <typename T = Il2CppString*> static T GetAssetRootPath(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C61C0C))(0, asset);
	}
	template <typename T = Il2CppString*> static T GetUniqueAssetPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61CCC))(0, path);
	}
	template <typename T = Il2CppString*> static T GetAssetOrScenePath(uintptr_t inputObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C61D8C))(0, inputObject);
	}
	template <typename T = bool> static T IsPathInAssetCache(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61E4C))(0, path);
	}
	template <typename T = bool> static T IsPathInAssetCacheBakedFolder(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61EB4))(0, path);
	}
	template <typename T = bool> static T IsPathInAssetCacheWorkingFolder(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C61F74))(0, path);
	}
	template <typename T = bool> static T IsAssetInAssetCacheBakedFolder(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C62034))(0, asset);
	}
	template <typename T = bool> static T IsAssetInAssetCacheWorkingFolder(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C620F4))(0, asset);
	}
	template <typename T = Il2CppString*> static T CreateAssetCacheFolder(Il2CppString* suggestedAssetPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C621B4))(0, suggestedAssetPath);
	}
	template <typename T = void> static T DeleteAssetCacheFolder(Il2CppString* assetCacheFolderPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C62274))(0, assetCacheFolderPath);
	}
	template <typename T = void> static T DeleteAsset(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C62330))(0, asset);
	}
	template <typename T = void> static T DeleteAssetIfInBakedFolder(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C623EC))(0, asset);
	}
	template <typename T = bool> static T ContainsAsset(uintptr_t assetObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C624A8))(0, assetObject);
	}
	template <typename T = bool> static T CopyAsset(Il2CppString* path, Il2CppString* newPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C62568))(0, path, newPath);
	}
	template <typename T = uintptr_t> static T LoadAssetCopy(uintptr_t srcAsset, Il2CppString* newAssetFolderPath, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C62628))(0, srcAsset, newAssetFolderPath, type);
	}
	template <typename T = void> static T CreateObjectInAssetCacheFolder(uintptr_t objectToCreate, Il2CppString* assetCacheFolderPath, Il2CppString* assetFileName, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C626E8))(0, objectToCreate, assetCacheFolderPath, assetFileName, type);
	}
	template <typename T = void> static T CreateAddObjectInAssetCacheFolder(Il2CppString* assetName, Il2CppString* assetObjectFileName, uintptr_t objectToAdd, uintptr_t bakedAssetPath, uintptr_t assetDBObject) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C627A4))(0, assetName, assetObjectFileName, objectToAdd, bakedAssetPath, assetDBObject);
	}
	template <typename T = void> static T AddObjectToAsset(uintptr_t objectToAdd, uintptr_t assetObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C62860))(0, objectToAdd, assetObject);
	}
	template <typename T = void> static T SaveAndRefreshDatabase() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C6291C))(0);
	}
	template <typename T = void> static T RefreshAssetDatabase() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C62920))(0);
	}
	template <typename T = uintptr_t> static T LoadAssetAtPath(Il2CppString* assetPath, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C62924))(0, assetPath, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T LoadAllAssetsAtPath(Il2CppString* assetPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C629E4))(0, assetPath);
	}
	template <typename T = void> static T ImportAsset(Il2CppString* assetPath, uintptr_t heuOptions) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C62AA4))(0, assetPath, heuOptions);
	}
	template <typename T = Il2CppString*> static T GetAssetWorkingPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C62B60))(0);
	}
	template <typename T = Il2CppString*> static T GetAssetBakedPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C62C20))(0);
	}
	template <typename T = Il2CppString*> static T GetAssetBakedPathWithAssetName(Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C62CE0))(0, assetName);
	}
	template <typename T = Il2CppString*> static T CreateUniqueBakePath(Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C62DA0))(0, assetName);
	}
	template <typename T = void> static T CreatePathWithFolders(Il2CppString* inPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C62E60))(0, inPath);
	}
	template <typename T = Il2CppString*> static T AppendMeshesPathToAssetFolder(Il2CppString* inAssetCacheFolder) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C62F1C))(0, inAssetCacheFolder);
	}
	template <typename T = Il2CppString*> static T AppendTexturesPathToAssetFolder(Il2CppString* inAssetCacheFolder) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C63018))(0, inAssetCacheFolder);
	}
	template <typename T = Il2CppString*> static T AppendMaterialsPathToAssetFolder(Il2CppString* inAssetCacheFolder) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C63114))(0, inAssetCacheFolder);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetAssetSubFolders() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C63210))(0);
	}
	template <typename T = Il2CppString*> static T AppendPrefabPath(Il2CppString* inAssetCacheFolder, Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C633FC))(0, inAssetCacheFolder, assetName);
	}
	template <typename T = Il2CppString*> static T AppendMeshesAssetFileName(Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C63548))(0, assetName);
	}
	template <typename T = bool> static T IsAssetSavedInScene(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C6360C))(0, go);
	}
	template <typename T = void> static T PrintDependencies(uintptr_t targetGO) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C636CC))(0, targetGO);
	}
	template <typename T = Il2CppString*> static T GetUniqueAssetPathForUnityAsset(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C636D0))(0, obj);
	}
	template <typename T = uintptr_t> static T LoadUnityAssetFromUniqueAssetPath(Il2CppString* assetPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x335A0A8))(0, assetPath);
	}
	template <typename T = uintptr_t> static T GetBuiltinExtraResource(Il2CppString* resourceName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x335A08C))(0, resourceName);
	}

};

}
