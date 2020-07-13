#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TerrainData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TerrainData"));
	}

	template <typename T = int32_t> static T& kMaximumResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMinimumDetailResolutionPerPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& kMaximumDetailResolutionPerPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& kMaximumDetailPatchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& kMinimumAlphamapResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& kMaximumAlphamapResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& kMinimumBaseMapResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& kMaximumBaseMapResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> static T Internal_GetMaximumResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D26DA0))(0);
	}
	template <typename T = int32_t> static T Internal_GetMinimumDetailResolutionPerPatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D26E30))(0);
	}
	template <typename T = int32_t> static T Internal_GetMaximumDetailResolutionPerPatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D26EC0))(0);
	}
	template <typename T = int32_t> static T Internal_GetMaximumDetailPatchCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D26F50))(0);
	}
	template <typename T = int32_t> static T Internal_GetMinimumAlphamapResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D26FE0))(0);
	}
	template <typename T = int32_t> static T Internal_GetMaximumAlphamapResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D27070))(0);
	}
	template <typename T = int32_t> static T Internal_GetMinimumBaseMapResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D27100))(0);
	}
	template <typename T = int32_t> static T Internal_GetMaximumBaseMapResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D27190))(0);
	}
	template <typename T = void> T Internal_Create(uintptr_t terrainData, bool onlyUsedForPxHeightfield) {
		return ((T (*)(TerrainData*, uintptr_t, bool))(Il2CppBase() + 0x4D26CF8))(this, terrainData, onlyUsedForPxHeightfield);
	}
	template <typename T = int32_t> T get_heightmapWidth() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D27220))(this);
	}
	template <typename T = int32_t> T get_heightmapHeight() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D272B8))(this);
	}
	template <typename T = int32_t> T get_heightmapResolution() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D27350))(this);
	}
	template <typename T = void> T set_heightmapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D273EC))(this, value);
	}
	template <typename T = int32_t> T get_Internal_heightmapResolution() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D27354))(this);
	}
	template <typename T = void> T set_Internal_heightmapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D27620))(this, value);
	}
	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D276C0))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(TerrainData*, Il2CppVector3))(Il2CppBase() + 0x4D277A8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_size(uintptr_t* value) {
		return ((T (*)(TerrainData*, uintptr_t*))(Il2CppBase() + 0x4D27708))(this, value);
	}
	template <typename T = void> T INTERNAL_set_size(uintptr_t value) {
		return ((T (*)(TerrainData*, uintptr_t))(Il2CppBase() + 0x4D277C8))(this, value);
	}
	template <typename T = uintptr_t> T GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
		return ((T (*)(TerrainData*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4D27868))(this, xBase, yBase, width, height);
	}
	template <typename T = void> T SetHeights(int32_t xBase, int32_t yBase, uintptr_t heights) {
		return ((T (*)(TerrainData*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D27918))(this, xBase, yBase, heights);
	}
	template <typename T = void> T Internal_SetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height, uintptr_t heights) {
		return ((T (*)(TerrainData*, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D27DB0))(this, xBase, yBase, width, height, heights);
	}
	template <typename T = void> T InitPxHeightField(int32_t heightmapResolution, Il2CppVector3 size, uintptr_t heights, Il2CppArray<uintptr_t>* holes) {
		return ((T (*)(TerrainData*, int32_t, Il2CppVector3, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D27E60))(this, heightmapResolution, size, heights, holes);
	}
	template <typename T = void> T Internal_InitPxHeightField(int32_t heightmapResolution, Il2CppVector3 size, int32_t width, int32_t height, uintptr_t heights, int32_t holeCount, Il2CppArray<uintptr_t>* holes) {
		return ((T (*)(TerrainData*, int32_t, Il2CppVector3, int32_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D27F98))(this, heightmapResolution, size, width, height, heights, holeCount, holes);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_InitPxHeightField(uintptr_t self, int32_t heightmapResolution, uintptr_t size, int32_t width, int32_t height, uintptr_t heights, int32_t holeCount, Il2CppArray<uintptr_t>* holes) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D28078))(0, self, heightmapResolution, size, width, height, heights, holeCount, holes);
	}
	template <typename T = void> T ReleasePxHeightField() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D2815C))(this);
	}
	template <typename T = void> T SetDetailResolution(int32_t detailResolution, int32_t resolutionPerPatch) {
		return ((T (*)(TerrainData*, int32_t, int32_t))(Il2CppBase() + 0x4D281F4))(this, detailResolution, resolutionPerPatch);
	}
	template <typename T = void> T Internal_SetDetailResolution(int32_t patchCount, int32_t resolutionPerPatch) {
		return ((T (*)(TerrainData*, int32_t, int32_t))(Il2CppBase() + 0x4D288D4))(this, patchCount, resolutionPerPatch);
	}
	template <typename T = void> T set_treeInstances(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TerrainData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D2897C))(this, value);
	}
	template <typename T = void> T set_treePrototypes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TerrainData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D28A1C))(this, value);
	}
	template <typename T = int32_t> T get_alphamapLayers() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D28ABC))(this);
	}
	template <typename T = void> T set_alphamapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D28B54))(this, value);
	}
	template <typename T = float> T GetAlphamapResolutionInternal() {
		return ((T (*)(TerrainData*))(Il2CppBase() + 0x4D2909C))(this);
	}
	template <typename T = void> T set_Internal_alphamapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D28FFC))(this, value);
	}
	template <typename T = void> T set_baseMapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D29134))(this, value);
	}
	template <typename T = void> T set_Internal_baseMapResolution(int32_t value) {
		return ((T (*)(TerrainData*, int32_t))(Il2CppBase() + 0x4D295DC))(this, value);
	}
	template <typename T = void> T SetAlphamaps(int32_t x, int32_t y, uintptr_t map) {
		return ((T (*)(TerrainData*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D2967C))(this, x, y, map);
	}
	template <typename T = void> T Internal_SetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height, uintptr_t map) {
		return ((T (*)(TerrainData*, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D29864))(this, x, y, width, height, map);
	}
	template <typename T = void> T set_splatPrototypes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TerrainData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D29914))(this, value);
	}

};

}
