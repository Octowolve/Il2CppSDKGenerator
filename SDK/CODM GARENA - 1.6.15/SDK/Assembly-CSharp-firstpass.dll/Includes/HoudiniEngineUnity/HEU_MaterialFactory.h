#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUMaterialFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_MaterialFactory"));
	}

	template <typename T = uintptr_t> static T& _defaultStandardMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T FindShader(Il2CppString* shaderName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BDD344))(0, shaderName);
	}
	template <typename T = Il2CppString*> static T GetHoudiniShaderPath(Il2CppString* shaderName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BDD404))(0, shaderName);
	}
	template <typename T = uintptr_t> static T FindPluginShader(Il2CppString* shaderName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BDC57C))(0, shaderName);
	}
	template <typename T = uintptr_t> static T GetNewMaterialWithShader(Il2CppString* assetCacheFolderPath, Il2CppString* shaderName, Il2CppString* materialName, bool bWriteToFile) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2BDD4C8))(0, assetCacheFolderPath, shaderName, materialName, bWriteToFile);
	}
	template <typename T = uintptr_t> static T CreateNewHoudiniStandardMaterial(Il2CppString* assetCacheFolderPath, Il2CppString* materialName, bool bWriteToFile) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2BC7CEC))(0, assetCacheFolderPath, materialName, bWriteToFile);
	}
	template <typename T = void> static T WriteMaterialToAssetCache(uintptr_t material, Il2CppString* assetCacheFolderPath, Il2CppString* materialName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BC7F40))(0, material, assetCacheFolderPath, materialName);
	}
	template <typename T = bool> static T DoesMaterialExistInAssetCache(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BDD748))(0, material);
	}
	template <typename T = void> static T DestroyNonAssetMaterial(uintptr_t material, bool bRegisterUndo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2BDD808))(0, material, bRegisterUndo);
	}
	template <typename T = void> static T DeleteAssetMaterial(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BC9E64))(0, material);
	}
	template <typename T = uintptr_t> static T RenderAndExtractImageToTexture(uintptr_t session, uintptr_t materialInfo, int32_t textureParmID, Il2CppString* textureName, Il2CppString* assetCacheFolderPath) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BDC960))(0, session, materialInfo, textureParmID, textureName, assetCacheFolderPath);
	}
	template <typename T = uintptr_t> static T ExtractHoudiniImageToTexturePNGJPEG(uintptr_t session, uintptr_t materialInfo, Il2CppString* imagePlanes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BDDD40))(0, session, materialInfo, imagePlanes);
	}
	template <typename T = uintptr_t> static T ExtractHoudiniImageToTextureRaw(uintptr_t session, uintptr_t materialInfo, Il2CppString* imagePlanes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BDD8FC))(0, session, materialInfo, imagePlanes);
	}
	template <typename T = uintptr_t> static T ExtractHoudiniImageToTextureFile(uintptr_t session, uintptr_t materialInfo, Il2CppString* imagePlanes, Il2CppString* assetCacheFolderPath) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BDDFD0))(0, session, materialInfo, imagePlanes, assetCacheFolderPath);
	}
	template <typename T = uintptr_t> static T LoadUnityMaterial(Il2CppString* materialPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC8AA0))(0, materialPath);
	}
	template <typename T = uintptr_t> static T LoadSubstanceMaterialWithName(Il2CppString* materialPath, Il2CppString* substanceName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BC8518))(0, materialPath, substanceName);
	}
	template <typename T = uintptr_t> static T LoadSubstanceMaterialWithIndex(Il2CppString* materialPath, int32_t substanceMaterialIndex) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x2BC8760))(0, materialPath, substanceMaterialIndex);
	}
	template <typename T = int32_t> static T GetUnitySubstanceMaterialKey(Il2CppString* unityMaterialPath, Il2CppString* substanceName, int32_t substanceIndex) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x2BDE250))(0, unityMaterialPath, substanceName, substanceIndex);
	}
	template <typename T = int32_t> static T MaterialNameToKey(Il2CppString* materialName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC7A44))(0, materialName);
	}
	template <typename T = void> static T EnableGPUInstancing(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BDE3F4))(0, material);
	}
	template <typename T = bool> static T MaterialHasGPUInstancingEnabled(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BDE424))(0, material);
	}
	template <typename T = uintptr_t> static T CopyMaterial(uintptr_t material) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BDE450))(0, material);
	}
	template <typename T = uintptr_t> static T GetDefaultStandardMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BDE4E4))(0);
	}

};

}
