#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GPUSkinUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GPUSkinUtil"));
	}

	template <typename T = uintptr_t> static T& ProbeBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ZeroBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseMaxLODAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseMinLODAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseMaxLODWithoutGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGPUSkinModelComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddGPUSkinModelComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStaticBatchRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSkinnedMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoneIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetBoneIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGPUSkinMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildBoneWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGPUSkinInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMeshToSkinBoneWeights() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGPUSkinInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrAddMaterialIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = bool> static T UseMaxLODAvatarModel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2415C))(0);
	}
	template <typename T = bool> static T UseMinLODAvatarModel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E2429C))(0);
	}
	template <typename T = bool> static T UseMaxLODWithoutGPUSkin() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E243F0))(0);
	}
	template <typename T = uintptr_t> static T AddGPUSkinModelComponent(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E244B8))(0, obj);
	}
	template <typename T = uintptr_t> static T AddGPUSkinModelComponent_1(uintptr_t obj, uintptr_t refData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E245CC))(0, obj, refData);
	}
	template <typename T = uintptr_t> static T AddStaticBatchRenderer(uintptr_t obj, uintptr_t mesh, Il2CppArray<uintptr_t>* sharedMaterials, Il2CppArray<uintptr_t>* materialIndexes, uintptr_t templateRenderer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E247BC))(0, obj, mesh, sharedMaterials, materialIndexes, templateRenderer);
	}
	template <typename T = void> static T AddSkinnedMeshRenderer(uintptr_t obj, uintptr_t mesh, Il2CppArray<uintptr_t>* sharedMaterials, Il2CppArray<uintptr_t>* newBones, uintptr_t templateRenderer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E249DC))(0, obj, mesh, sharedMaterials, newBones, templateRenderer);
	}
	template <typename T = uintptr_t> static T CombineMesh(Il2CppList<uintptr_t>* combineMeshDatas, uintptr_t root) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E24BF8))(0, combineMeshDatas, root);
	}
	template <typename T = void> static T RebuildBones(uintptr_t root, Il2CppArray<uintptr_t>* bones, Il2CppArray<uintptr_t>** newBones, Il2CppArray<uintptr_t>** newBindPose) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3E2548C))(0, root, bones, newBones, newBindPose);
	}
	template <typename T = int32_t> static T GetBoneIndex(Il2CppList<uintptr_t>* allBones, uintptr_t bone) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E25B60))(0, allBones, bone);
	}
	template <typename T = int32_t> static T GetBoneIndex_1(Il2CppArray<uintptr_t>* allBones, int32_t allBonesLength, uintptr_t bone) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x3E25D04))(0, allBones, allBonesLength, bone);
	}
	template <typename T = uintptr_t> static T CreateGPUSkinMesh(uintptr_t skinnedMeshRenderer, bool useUVForBoneWeight, bool useNativeMethod) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x3E25E98))(0, skinnedMeshRenderer, useUVForBoneWeight, useNativeMethod);
	}
	template <typename T = void> static T RebuildBoneWeight(uintptr_t mesh, Il2CppArray<uintptr_t>* bones, int32_t bonesLength, Il2CppArray<uintptr_t>* newBones, int32_t newBonesLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3E261F8))(0, mesh, bones, bonesLength, newBones, newBonesLength);
	}
	template <typename T = void> static T BuildGPUSkinInfo(uintptr_t mesh, bool useUVForBoneWeight, bool useNativeMethod) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x3E2606C))(0, mesh, useUVForBoneWeight, useNativeMethod);
	}
	template <typename T = void> static T BuildMeshToSkinBoneWeights(uintptr_t mesh, bool useNativeBuildSimpleBoneWeight) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3E26B2C))(0, mesh, useNativeBuildSimpleBoneWeight);
	}
	template <typename T = void> static T CreateGPUSkinInfo(uintptr_t mesh, bool useUVForBoneWeight) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3E26584))(0, mesh, useUVForBoneWeight);
	}
	template <typename T = uintptr_t> static T GetMesh(uintptr_t meshRenderer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E26D5C))(0, meshRenderer);
	}
	template <typename T = int32_t> static T GetOrAddMaterialIndex(uintptr_t material, Il2CppList<uintptr_t>* allMaterials) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E26F24))(0, material, allMaterials);
	}

};

}
