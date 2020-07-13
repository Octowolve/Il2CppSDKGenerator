#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModelOptimizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModelOptimizer"));
	}

	template <typename T = bool> static T& UseGPUSkinModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& UseWeaponCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& Use1PWeaponCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& UseUIWeaponCombine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = bool> static T& UseModelOptimizeCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& DestoryOrinalRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = int32_t> static T& MaxSupportBoneNums() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Setting() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_OptimizeCache() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BoneBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& UICacheOptimizedMesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSubstituteMeshCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadOriginalAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnloadOriginalAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOptimizedModelInstantiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOptimizedModelDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyUnusedAssetsFromCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidSkinnedMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OptimizeModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get1PRootBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Optimize1PWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetIDStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRawAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanOptimizer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBoneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BuildBoneInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildCombineMeshDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OptimizeRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOptimizeRefData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRendererGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOrGetOptimizedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOriginalRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAssetRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPartAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidUIRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OptimizeUIWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OptimizeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = uintptr_t> T get_Setting() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FA5A0))(this);
	}
	template <typename T = uintptr_t> T get_OptimizeCache() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FA6C0))(this);
	}
	template <typename T = uintptr_t> T get_BoneBuffer() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FA838))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FA8D4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FAA20))(this);
	}
	template <typename T = bool> T AddOptimizedAsset(Il2CppString* assetIDStr, uintptr_t obj) {
		return ((T (*)(ModelOptimizer*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x32FAB90))(this, assetIDStr, obj);
	}
	template <typename T = uintptr_t> T InstantiateOptimizedAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FAD0C))(this, assetIDStr);
	}
	template <typename T = bool> T HasOptimizedAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FAE6C))(this, assetIDStr);
	}
	template <typename T = void> T ClearSubstituteMeshCache() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FAFD0))(this);
	}
	template <typename T = void> T UnloadOriginalAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FB11C))(this, assetIDStr);
	}
	template <typename T = void> T UnloadOriginalAsset_1(int32_t assetID) {
		return ((T (*)(ModelOptimizer*, int32_t))(Il2CppBase() + 0x32FB274))(this, assetID);
	}
	template <typename T = void> T OnOptimizedModelInstantiate(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FB3CC))(this, assetIDStr);
	}
	template <typename T = void> T OnOptimizedModelDestroy(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FB524))(this, assetIDStr);
	}
	template <typename T = void> T DestroyUnusedAssetsFromCache() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x32FB67C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValidSkinnedMeshRenderers(uintptr_t lod) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FB7C8))(this, lod);
	}
	template <typename T = bool> T OptimizeModel(uintptr_t model, uintptr_t type, Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x32FBB30))(this, model, type, assetIDs);
	}
	template <typename T = void> T GetValidRenderers(Il2CppArray<uintptr_t>* renderers, Il2CppArray<uintptr_t>** vaildRenderers) {
		return ((T (*)(ModelOptimizer*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x32FD50C))(this, renderers, vaildRenderers);
	}
	template <typename T = uintptr_t> T Get1PRootBone(uintptr_t model) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FD934))(this, model);
	}
	template <typename T = bool> T Optimize1PWeapon(uintptr_t model, uintptr_t type, Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x32FDAE8))(this, model, type, assetIDs);
	}
	template <typename T = Il2CppString*> static T GetAssetIDStr(Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(void *, Il2CppList<int32_t>*))(Il2CppBase() + 0x32FC330))(0, assetIDs);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetRawAssetIDs(Il2CppString* assetIDStr) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32F86E4))(0, assetIDStr);
	}
	template <typename T = bool> T CheckCanOptimizer(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizer*, Il2CppString*))(Il2CppBase() + 0x32FC60C))(this, assetIDStr);
	}
	template <typename T = uintptr_t> T BuildBoneInfo(uintptr_t model, Il2CppString* boneRootName) {
		return ((T (*)(ModelOptimizer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x32FC720))(this, model, boneRootName);
	}
	template <typename T = uintptr_t> T BuildBoneInfo_1(uintptr_t model, uintptr_t rootBone, uintptr_t meshRootTran) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32FE0EC))(this, model, rootBone, meshRootTran);
	}
	template <typename T = bool> T BuildCombineMeshDatas(uintptr_t refData, Il2CppArray<uintptr_t>* renderers) {
		return ((T (*)(ModelOptimizer*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x32FC884))(this, refData, renderers);
	}
	template <typename T = bool> T OptimizeRenderers(uintptr_t refData) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FD1F4))(this, refData);
	}
	template <typename T = void> T InitOptimizeRefData(uintptr_t refData) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FE244))(this, refData);
	}
	template <typename T = uintptr_t> T CreateRendererGameObject(uintptr_t parent, int32_t lodIndex) {
		return ((T (*)(ModelOptimizer*, uintptr_t, int32_t))(Il2CppBase() + 0x32FE9BC))(this, parent, lodIndex);
	}
	template <typename T = uintptr_t> T CreateOrGetOptimizedMesh(uintptr_t refData) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FEDF8))(this, refData);
	}
	template <typename T = uintptr_t> T CombineMesh(uintptr_t refData) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FFA90))(this, refData);
	}
	template <typename T = void> T RemoveOriginalRenderer(Il2CppArray<uintptr_t>* renderers, bool destoryGameObj) {
		return ((T (*)(ModelOptimizer*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x32FF210))(this, renderers, destoryGameObj);
	}
	template <typename T = void> T RemoveAssetRef(uintptr_t refData) {
		return ((T (*)(ModelOptimizer*, uintptr_t))(Il2CppBase() + 0x32FF068))(this, refData);
	}
	template <typename T = int32_t> T GetPartAssetID(uintptr_t partTran, uintptr_t modelTran) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32FF834))(this, partTran, modelTran);
	}
	template <typename T = void> T GetValidUIRenderers(Il2CppArray<uintptr_t>* renderers, Il2CppList<uintptr_t>* excludeObjs, Il2CppArray<uintptr_t>** vaildRenderers) {
		return ((T (*)(ModelOptimizer*, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x32FFDB4))(this, renderers, excludeObjs, vaildRenderers);
	}
	template <typename T = bool> T OptimizeUIWeapon(uintptr_t model, uintptr_t type, Il2CppList<int32_t>* assetIDs, Il2CppList<uintptr_t>* excludeObjs) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3300398))(this, model, type, assetIDs, excludeObjs);
	}
	template <typename T = void> T GetValidMeshRenderers(uintptr_t lod, Il2CppArray<uintptr_t>** vaildRenderers, Il2CppArray<uintptr_t>** excludedRenderers) {
		return ((T (*)(ModelOptimizer*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x33008F8))(this, lod, vaildRenderers, excludedRenderers);
	}
	template <typename T = bool> T OptimizeWeapon(uintptr_t model, uintptr_t type, Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(ModelOptimizer*, uintptr_t, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x3300F60))(this, model, type, assetIDs);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x3301784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ModelOptimizer*))(Il2CppBase() + 0x330178C))(this);
	}

};

}
