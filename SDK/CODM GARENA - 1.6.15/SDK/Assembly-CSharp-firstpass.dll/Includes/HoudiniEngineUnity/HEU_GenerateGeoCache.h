#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGenerateGeoCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GenerateGeoCache"));
	}

	template <typename T = uintptr_t> T& _geoInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _partInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _partName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _vertexList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _houdiniMaterialIDs() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _singleFaceUnityMaterial() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _singleFaceHoudiniMaterial() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _unityMaterialInfos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _unityMaterialAttrInfo() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _unityMaterialAttrName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& _unityMaterialAttrStringsMap() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& _substanceMaterialAttrNameInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _substanceMaterialAttrName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& _substanceMaterialAttrStringsMap() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _substanceMaterialAttrIndexInfo() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _substanceMaterialAttrIndex() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _inUseMaterials() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& _posAttrInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _uvAttrInfo() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& _uv2AttrInfo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _uv3AttrInfo() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _normalAttrInfo() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _colorAttrInfo() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& _alphaAttrInfo() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _tangentAttrInfo() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _posAttr() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _uvAttr() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _uv2Attr() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _uv3Attr() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _normalAttr() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colorAttr() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _alphaAttr() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tangentAttr() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _groups() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& _hasGroupGeometry() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& _groupSplitVertexIndices() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<int32_t>*>*> T& _groupSplitFaceIndices() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _allCollisionVertexList() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _allCollisionFaceIndices() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& _normalCosineThreshold() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _colliderType() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = Il2CppVector3> T& _colliderCenter() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppVector3> T& _colliderSize() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& _colliderRadius() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& _colliderMesh() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_GeoID() {
		return ((T (*)(HEUGenerateGeoCache*))(Il2CppBase() + 0x4C73E98))(this);
	}
	template <typename T = int32_t> T get_PartID() {
		return ((T (*)(HEUGenerateGeoCache*))(Il2CppBase() + 0x4C73EA0))(this);
	}
	template <typename T = uintptr_t> static T GetPopulatedGeoCache(uintptr_t session, int32_t geoID, int32_t partID, bool bUseLODGroups) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4C73EA8))(0, session, geoID, partID, bUseLODGroups);
	}
	template <typename T = void> T PopulateUnityMaterialData(uintptr_t session) {
		return ((T (*)(HEUGenerateGeoCache*, uintptr_t))(Il2CppBase() + 0x4C74470))(this, session);
	}
	template <typename T = int32_t> static T GetMaterialKeyFromAttributeIndex(uintptr_t geoCache, int32_t attributeIndex, uintptr_t* unityMaterialName, uintptr_t* substanceName, uintptr_t* substanceIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4C769A4))(0, geoCache, attributeIndex, unityMaterialName, substanceName, substanceIndex);
	}
	template <typename T = void> static T CreateMaterialInfoEntryFromAttributeIndex(uintptr_t geoCache, int32_t materialAttributeIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4C76834))(0, geoCache, materialAttributeIndex);
	}
	template <typename T = bool> T PopulateGeometryData(uintptr_t session, bool bUseLODGroups) {
		return ((T (*)(HEUGenerateGeoCache*, uintptr_t, bool))(Il2CppBase() + 0x4C74F74))(this, session, bUseLODGroups);
	}
	template <typename T = void> static T ParseLODTransitionAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppArray<uintptr_t>** LODTransitionValues) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4C76C04))(0, session, geoID, partID, LODTransitionValues);
	}
	template <typename T = void> static T UpdateCollider(uintptr_t geoCache, uintptr_t outputGameObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C76EF0))(0, geoCache, outputGameObject);
	}
	template <typename T = void> static T GetFinalMaterialsFromComparingNewWithPrevious(uintptr_t gameObject, Il2CppArray<uintptr_t>* previousMaterials, Il2CppArray<uintptr_t>* newMaterials, Il2CppArray<uintptr_t>* finalMaterials) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C770B8))(0, gameObject, previousMaterials, newMaterials, finalMaterials);
	}
	template <typename T = bool> static T GenerateMeshFromSingleGroup(uintptr_t session, uintptr_t GeoGroup, uintptr_t asset, uintptr_t geoCache, uintptr_t generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x4C773FC))(0, session, GeoGroup, asset, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
	}
	template <typename T = bool> static T GenerateLODMeshesFromGeoGroups(uintptr_t session, Il2CppList<uintptr_t>* GeoGroupMeshes, uintptr_t asset, uintptr_t geoCache, uintptr_t generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x4C78990))(0, session, GeoGroupMeshes, asset, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
	}
	template <typename T = bool> static T GenerateMeshFromGeoGroup(uintptr_t session, uintptr_t GeoGroup, uintptr_t asset, uintptr_t geoCache, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, uintptr_t* newMesh, Il2CppArray<uintptr_t>** newMaterials) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool, bool, bool, bool, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4C77620))(0, session, GeoGroup, asset, geoCache, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced, newMesh, newMaterials);
	}
	template <typename T = void> static T TransferRegularAttributesToVertices(Il2CppArray<uintptr_t>* vertexList, uintptr_t attribInfo, Il2CppArray<uintptr_t>* inData, Il2CppArray<uintptr_t>* outData) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C79780))(0, vertexList, attribInfo, inData, outData);
	}
	template <typename T = bool> static T GenerateGeoGroupUsingGeoCacheVertices(uintptr_t session, uintptr_t asset, uintptr_t geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, uintptr_t* LODGroupMeshes, uintptr_t* defaultMaterialKey) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, bool, bool, bool, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4C799F4))(0, session, asset, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
	}
	template <typename T = bool> static T GenerateGeoGroupUsingGeoCachePoints(uintptr_t session, uintptr_t asset, uintptr_t geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, uintptr_t* LODGroupMeshes, uintptr_t* defaultMaterialKey) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, bool, bool, bool, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4C7C4BC))(0, session, asset, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
	}
	template <typename T = int32_t> static T GenerateLODMeshesFromGeoGroupsm__0(float a, float b) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4C7E884))(0, a, b);
	}

};

}
