#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Mesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Mesh"));
	}


	template <typename T = void> static T Internal_Create(uintptr_t mono) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB5330))(0, mono);
	}
	template <typename T = void> T SetMeshUsageFlags(uintptr_t flags) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB53C8))(this, flags);
	}
	template <typename T = Il2CppVector2> T get_meshMetrics() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB5468))(this);
	}
	template <typename T = void> T set_meshMetrics(Il2CppVector2 value) {
		return ((T (*)(Mesh*, Il2CppVector2))(Il2CppBase() + 0x4AB5544))(this, value);
	}
	template <typename T = void> T INTERNAL_get_meshMetrics(uintptr_t* value) {
		return ((T (*)(Mesh*, uintptr_t*))(Il2CppBase() + 0x4AB54A4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_meshMetrics(uintptr_t value) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB5560))(this, value);
	}
	template <typename T = void> T Clear(bool keepVertexLayout) {
		return ((T (*)(Mesh*, bool))(Il2CppBase() + 0x4AB5600))(this, keepVertexLayout);
	}
	template <typename T = void> T Clear_1() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB56A0))(this);
	}
	template <typename T = bool> T get_isReadable() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB56A8))(this);
	}
	template <typename T = bool> T get_canAccess() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB5740))(this);
	}
	template <typename T = void> T PrintErrorCantAccessMesh(uintptr_t channel) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB57D8))(this, channel);
	}
	template <typename T = void> T PrintErrorCantAccessMeshForIndices() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB5878))(this);
	}
	template <typename T = void> T PrintErrorBadSubmeshIndexTriangles() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB5910))(this);
	}
	template <typename T = void> T PrintErrorBadSubmeshIndexIndices() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB59A8))(this);
	}
	template <typename T = void> T SetArrayImpl(int32_t arraySize, uintptr_t verts, uintptr_t norms, uintptr_t tans, uintptr_t cols, uintptr_t uvs, uintptr_t uvs2) {
		return ((T (*)(Mesh*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB5A40))(this, arraySize, verts, norms, tans, cols, uvs, uvs2);
	}
	template <typename T = void> T SetArrayForChannelImpl(uintptr_t channel, uintptr_t format, int32_t dim, uintptr_t values, int32_t arraySize) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4AB5AF0))(this, channel, format, dim, values, arraySize);
	}
	template <typename T = uintptr_t> T GetAllocArrayFromChannelImpl(uintptr_t channel, uintptr_t format, int32_t dim) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4AB5BA0))(this, channel, format, dim);
	}
	template <typename T = bool> T HasChannel(uintptr_t channel) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB5C50))(this, channel);
	}
	template <typename T = uintptr_t> static T ExtractArrayFromList(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB5CF0))(0, list);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTrianglesImpl(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB5D88))(this, submesh);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndicesImpl(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB5E28))(this, submesh);
	}
	template <typename T = void> T SetTrianglesImpl(int32_t submesh, uintptr_t triangles, int32_t arraySize, bool calculateBounds) {
		return ((T (*)(Mesh*, int32_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4AB5EC8))(this, submesh, triangles, arraySize, calculateBounds);
	}
	template <typename T = void> T SetTrianglesImpl_1(int32_t submesh, uintptr_t triangles, int32_t arraySize) {
		return ((T (*)(Mesh*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4AB5F84))(this, submesh, triangles, arraySize);
	}
	template <typename T = void> T SetIndicesImpl(int32_t submesh, uintptr_t topology, uintptr_t indices, int32_t arraySize, bool calculateBounds) {
		return ((T (*)(Mesh*, int32_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4AB5FA4))(this, submesh, topology, indices, arraySize, calculateBounds);
	}
	template <typename T = void> T SetTriangles(Il2CppArray<uintptr_t>* triangles, int32_t submesh) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AB606C))(this, triangles, submesh);
	}
	template <typename T = void> T SetTriangles_1(Il2CppArray<uintptr_t>* triangles, int32_t submesh, bool calculateBounds) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4AB6088))(this, triangles, submesh, calculateBounds);
	}
	template <typename T = void> T SetTriangles_2(Il2CppList<int32_t>* triangles, int32_t submesh) {
		return ((T (*)(Mesh*, Il2CppList<int32_t>*, int32_t))(Il2CppBase() + 0x4AB6110))(this, triangles, submesh);
	}
	template <typename T = void> T SetTriangles_3(Il2CppList<int32_t>* triangles, int32_t submesh, bool calculateBounds) {
		return ((T (*)(Mesh*, Il2CppList<int32_t>*, int32_t, bool))(Il2CppBase() + 0x4AB612C))(this, triangles, submesh, calculateBounds);
	}
	template <typename T = void> T SetIndices(Il2CppArray<uintptr_t>* indices, uintptr_t topology, int32_t submesh) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x4AB6204))(this, indices, topology, submesh);
	}
	template <typename T = void> T SetIndices_1(Il2CppArray<uintptr_t>* indices, uintptr_t topology, int32_t submesh, bool calculateBounds) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4AB6224))(this, indices, topology, submesh, calculateBounds);
	}
	template <typename T = void> T BuildSimpleBoneWeights() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB629C))(this);
	}
	template <typename T = void> T RebuildBoneIndex(bool bUVForWeight, bool needGPUSkin, Il2CppArray<uintptr_t>* oldBones, int32_t oldBoneSize, Il2CppArray<uintptr_t>* newBones, int32_t newBoneSize) {
		return ((T (*)(Mesh*, bool, bool, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AB6334))(this, bUVForWeight, needGPUSkin, oldBones, oldBoneSize, newBones, newBoneSize);
	}
	template <typename T = void> T CreateGPUSkinMeshInfo(bool bUVForWeight) {
		return ((T (*)(Mesh*, bool))(Il2CppBase() + 0x4AB63E4))(this, bUVForWeight);
	}
	template <typename T = uintptr_t> T get_bounds() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6484))(this);
	}
	template <typename T = void> T set_bounds(uintptr_t value) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB6570))(this, value);
	}
	template <typename T = void> T INTERNAL_get_bounds(uintptr_t* value) {
		return ((T (*)(Mesh*, uintptr_t*))(Il2CppBase() + 0x4AB64D0))(this, value);
	}
	template <typename T = void> T INTERNAL_set_bounds(uintptr_t value) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB6598))(this, value);
	}
	template <typename T = void> T RecalculateBounds() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6638))(this);
	}
	template <typename T = void> T RecalculateNormals() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB66D0))(this);
	}
	template <typename T = int32_t> T get_vertexCount() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6768))(this);
	}
	template <typename T = int32_t> T get_subMeshCount() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6800))(this);
	}
	template <typename T = void> T set_subMeshCount(int32_t value) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB6898))(this, value);
	}
	template <typename T = void> T CombineMeshes(Il2CppArray<uintptr_t>* combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x4AB6938))(this, combine, mergeSubMeshes, useMatrices, hasLightmapData);
	}
	template <typename T = void> T CombineMeshes_1(Il2CppArray<uintptr_t>* combine, bool mergeSubMeshes, bool useMatrices) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, bool, bool))(Il2CppBase() + 0x4AB69F4))(this, combine, mergeSubMeshes, useMatrices);
	}
	template <typename T = void> T CombineMeshes_2(Il2CppArray<uintptr_t>* combine, bool mergeSubMeshes) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4AB6A14))(this, combine, mergeSubMeshes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_boneWeights() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6A38))(this);
	}
	template <typename T = void> T set_boneWeights(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB6AD0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_bindposes() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6B70))(this);
	}
	template <typename T = void> T set_bindposes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB6C08))(this, value);
	}
	template <typename T = void> T MarkDynamic() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB6CA8))(this);
	}
	template <typename T = void> T UploadMeshData(bool markNoLogerReadable) {
		return ((T (*)(Mesh*, bool))(Il2CppBase() + 0x4AB6D40))(this, markNoLogerReadable);
	}
	template <typename T = void> static T set_enableChannelCulling(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AB6DE0))(0, value);
	}
	template <typename T = void> static T set_enableUnloadCollisionOnlyMeshData(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AB6E78))(0, value);
	}
	template <typename T = uintptr_t> T GetUVChannel(int32_t uvIndex) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB6F10))(this, uvIndex);
	}
	template <typename T = int32_t> static T DefaultDimensionForChannel(uintptr_t channel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB6FD8))(0, channel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllocArrayFromChannel(uintptr_t channel, uintptr_t format, int32_t dim) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E437A4))(this, channel, format, dim);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllocArrayFromChannel_1(uintptr_t channel) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4E43740))(this, channel);
	}
	template <typename T = int32_t> T SafeLength(uintptr_t values) {
		return ((T (*)(Mesh*, uintptr_t))(Il2CppBase() + 0x4AB60F8))(this, values);
	}
	template <typename T = int32_t> T SafeLength_1(Il2CppList<uintptr_t>* values) {
		return ((T (*)(Mesh*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E64084))(this, values);
	}
	template <typename T = void> T SetSizedArrayForChannel(uintptr_t channel, uintptr_t format, int32_t dim, uintptr_t values, int32_t valuesCount) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4AB70C4))(this, channel, format, dim, values, valuesCount);
	}
	template <typename T = void> T SetArrayForChannel(uintptr_t channel, uintptr_t format, int32_t dim, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x282F870))(this, channel, format, dim, values);
	}
	template <typename T = void> T SetArrayForChannel_1(uintptr_t channel, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(Mesh*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x282F7FC))(this, channel, values);
	}
	template <typename T = void> T SetListForChannel(uintptr_t channel, uintptr_t format, int32_t dim, Il2CppList<uintptr_t>* values) {
		return ((T (*)(Mesh*, uintptr_t, uintptr_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282FBAC))(this, channel, format, dim, values);
	}
	template <typename T = void> T SetListForChannel_1(uintptr_t channel, Il2CppList<uintptr_t>* values) {
		return ((T (*)(Mesh*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282FB18))(this, channel, values);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_vertices() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB712C))(this);
	}
	template <typename T = void> T set_vertices(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB71B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_normals() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB7244))(this);
	}
	template <typename T = void> T set_normals(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB72CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_tangents() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB735C))(this);
	}
	template <typename T = void> T set_tangents(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB73E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_uv() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB7474))(this);
	}
	template <typename T = void> T set_uv(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB74FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_uv2() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB758C))(this);
	}
	template <typename T = void> T set_uv2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB7614))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_uv3() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB76A4))(this);
	}
	template <typename T = void> T set_uv3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB772C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_uv4() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB77BC))(this);
	}
	template <typename T = void> T set_uv4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB7844))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_colors() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB78D4))(this);
	}
	template <typename T = void> T set_colors(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB795C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_colors32() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB79EC))(this);
	}
	template <typename T = void> T set_colors32(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB7A88))(this, value);
	}
	template <typename T = void> T SetVertices(Il2CppList<Il2CppVector3>* inVertices) {
		return ((T (*)(Mesh*, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x4AB7B2C))(this, inVertices);
	}
	template <typename T = void> T SetNormals(Il2CppList<Il2CppVector3>* inNormals) {
		return ((T (*)(Mesh*, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x4AB7BBC))(this, inNormals);
	}
	template <typename T = void> T SetTangents(Il2CppList<uintptr_t>* inTangents) {
		return ((T (*)(Mesh*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB7C4C))(this, inTangents);
	}
	template <typename T = void> T SetColors(Il2CppList<uintptr_t>* inColors) {
		return ((T (*)(Mesh*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB7CDC))(this, inColors);
	}
	template <typename T = void> T SetColors_1(Il2CppList<uintptr_t>* inColors) {
		return ((T (*)(Mesh*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB7D6C))(this, inColors);
	}
	template <typename T = void> T SetVertexDatas(Il2CppList<Il2CppVector3>* inVertices, Il2CppList<Il2CppVector3>* inNormals, Il2CppList<uintptr_t>* inTangents, Il2CppList<uintptr_t>* inColors, Il2CppList<Il2CppVector2>* uvs, Il2CppList<Il2CppVector2>* uvs2) {
		return ((T (*)(Mesh*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector2>*, Il2CppList<Il2CppVector2>*))(Il2CppBase() + 0x4AB7E10))(this, inVertices, inNormals, inTangents, inColors, uvs, uvs2);
	}
	template <typename T = void> T SetUvsImpl(int32_t uvIndex, int32_t dim, Il2CppList<uintptr_t>* uvs) {
		return ((T (*)(Mesh*, int32_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x282FF98))(this, uvIndex, dim, uvs);
	}
	template <typename T = void> T SetUVs(int32_t channel, Il2CppList<Il2CppVector2>* uvs) {
		return ((T (*)(Mesh*, int32_t, Il2CppList<Il2CppVector2>*))(Il2CppBase() + 0x4AB7F3C))(this, channel, uvs);
	}
	template <typename T = void> T SetUVs_1(int32_t channel, Il2CppList<uintptr_t>* uvs) {
		return ((T (*)(Mesh*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB7FE0))(this, channel, uvs);
	}
	template <typename T = bool> T CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles) {
		return ((T (*)(Mesh*, int32_t, bool))(Il2CppBase() + 0x4AB8084))(this, submesh, errorAboutTriangles);
	}
	template <typename T = bool> T CheckCanAccessSubmeshTriangles(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB60F0))(this, submesh);
	}
	template <typename T = bool> T CheckCanAccessSubmeshIndices(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB6294))(this, submesh);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_triangles() {
		return ((T (*)(Mesh*))(Il2CppBase() + 0x4AB80F0))(this);
	}
	template <typename T = void> T set_triangles(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Mesh*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB81A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTriangles(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB8214))(this, submesh);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIndices(int32_t submesh) {
		return ((T (*)(Mesh*, int32_t))(Il2CppBase() + 0x4AB82D0))(this, submesh);
	}

};

}
