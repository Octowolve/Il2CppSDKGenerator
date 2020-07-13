#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GrassManagerGPU
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GrassManager_GPU"));
	}

	template <typename T = uintptr_t> T& m_SceneTileGrassBuilder_GPU() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GrassResource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& VTF_HeightDensityMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& EnableVTF() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& EnableSplitMap() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& EnableSubMeshLod() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = int32_t> T& MaxGrassCountPerNode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& HeightMapSamleStep() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& WorldLeftBottomPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& CellLength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& CellRowCout() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CellColCout() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& VTF_WorldBounds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TerrainMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LightMapScaleOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GPUGrassCellList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RenderingGrassCellList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SubMeshLevelConfigFactor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& m_CurrentCamPos() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_CachedCameraTransform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& MAX_RENDER_PATCH_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastRow() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_LastCol() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_GrassIndexList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_LastUpdateActiveCellListFrame() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCurrentDrawDepthPatchIndexList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& mCurrentDrawDepthPatchCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& mDepthDetectDist() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& ActiveGrassCellCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& AdditionalActiveGrassCellCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& LastActiveGrassCellCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_FallbackToSlowGrassShader() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& NewGrassTileLoaded() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = uintptr_t> T& GrassMaterialPropertyBlock() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& GrassAlphaPropertyID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RenderMode() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_Camera() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CornerOffsets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DetectSquadOffsets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_EnableRender() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_MainCameraReady() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = int32_t> static T& MaxInstanceNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_InstanceMatrix() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_InstancedList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& GrassLightmap() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_offsets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& LODLevelNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& GrassTileDataPrefix() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& CellRowCountPerTile() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GrassTileInfoList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& GrassTileRowCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& MapSize() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_NeedCallbackTileIndexs() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_NeedLoadTileIndexs() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InUseMaterialList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UnUseMaterialList() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> static T& MAX_CAN_SEE_TILE_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGrassResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearResourceReference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMainCameraReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRenderingGrassPatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDrawDepthPatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindIndexInDepthPatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveGrassCellCountByCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAdptiveGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVTFGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstancingCompare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareForInstancing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawVTFGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawVTFSplitMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawMeshBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFallbackGrassShaderToAdaptiveVerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEnableGrassAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRenderWithVTF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectGrassRenderPlan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateInstanceMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitNonSplitedVTFMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTTrianglesBeyondCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeyondCellSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateInstanceMesh_VTFRandomInSmallPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGrassTileInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrassTileInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGrassTileData_SplitMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGrassTileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGrassCellMaterial_NonVTF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSplitMaterialPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBackMaterialInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSplitMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}

	template <typename T = void> T LoadGrassResource(uintptr_t normalShader, uintptr_t lightmap) {
		return ((T (*)(GrassManagerGPU*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36EFE84))(this, normalShader, lightmap);
	}
	template <typename T = void> T ClearResourceReference() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F06C4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F089C))(this);
	}
	template <typename T = void> T CheckMainCameraReady() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F0B04))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F0CBC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F0D90))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F0EA4))(this);
	}
	template <typename T = bool> T UpdateRenderingGrassPatchList(bool forceUpdate) {
		return ((T (*)(GrassManagerGPU*, bool))(Il2CppBase() + 0x36F0FE8))(this, forceUpdate);
	}
	template <typename T = void> T UpdateDrawDepthPatchList() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F3464))(this);
	}
	template <typename T = bool> T FindIndexInDepthPatchList(int32_t index) {
		return ((T (*)(GrassManagerGPU*, int32_t))(Il2CppBase() + 0x36F37D4))(this, index);
	}
	template <typename T = int32_t> T GetActiveGrassCellCountByCameraFov() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F2A68))(this);
	}
	template <typename T = void> T ShowAdptiveGrass() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F3910))(this);
	}
	template <typename T = void> T ShowVTFGrass() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F3A70))(this);
	}
	template <typename T = void> T DisableGrass() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F3DF0))(this);
	}
	template <typename T = void> T DrawGrass() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F1804))(this);
	}
	template <typename T = int32_t> T InstancingCompare(int32_t a, int32_t b) {
		return ((T (*)(GrassManagerGPU*, int32_t, int32_t))(Il2CppBase() + 0x36F3EC8))(this, a, b);
	}
	template <typename T = void> T PrepareForInstancing() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F3154))(this);
	}
	template <typename T = void> T DrawVTFGrass() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F23EC))(this);
	}
	template <typename T = void> T DrawVTFSplitMap() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F1DA8))(this);
	}
	template <typename T = void> T DrawMeshBounds(uintptr_t bounds, Il2CppVector3 boundCenterOffset) {
		return ((T (*)(GrassManagerGPU*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x36F4050))(this, bounds, boundCenterOffset);
	}
	template <typename T = bool> T ShouldFallbackGrassShaderToAdaptiveVerson() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F477C))(this);
	}
	template <typename T = bool> T ShouldEnableGrassAnimation() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F484C))(this);
	}
	template <typename T = bool> T ShouldRenderWithVTF() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F49B0))(this);
	}
	template <typename T = void> T SelectGrassRenderPlan() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F4B18))(this);
	}
	template <typename T = void> T GenerateInstanceMesh() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F5570))(this);
	}
	template <typename T = void> T getBuilder() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F6970))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F6B3C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F0970))(this);
	}
	template <typename T = void> T InitNonSplitedVTFMaterial() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F71EC))(this);
	}
	template <typename T = uintptr_t> static T RemoveTTrianglesBeyondCell(uintptr_t originMesh, Il2CppVector3 pos, float cellSize) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x36F73C0))(0, originMesh, pos, cellSize);
	}
	template <typename T = bool> static T BeyondCellSize(Il2CppVector3 v, Il2CppVector3 pos, float cellSize) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x36F78E8))(0, v, pos, cellSize);
	}
	template <typename T = uintptr_t> static T GenerateInstanceMesh_VTFRandomInSmallPatch(uintptr_t originMesh, float cellSize, int32_t densityNodeCount, int32_t maxCountPerNode, int32_t trianglesPerPlane) {
		return ((T (*)(void *, uintptr_t, float, int32_t, int32_t, int32_t))(Il2CppBase() + 0x36F571C))(0, originMesh, cellSize, densityNodeCount, maxCountPerNode, trianglesPerPlane);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(GrassManagerGPU*, Il2CppVector3))(Il2CppBase() + 0x36F7A44))(this, shift);
	}
	template <typename T = void> T InitGrassTileInfo() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F6C10))(this);
	}
	template <typename T = void> T UpdateGrassTileInfo() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F2BEC))(this);
	}
	template <typename T = uintptr_t> T LoadGrassTileData_SplitMap(int32_t index) {
		return ((T (*)(GrassManagerGPU*, int32_t))(Il2CppBase() + 0x36F7D48))(this, index);
	}
	template <typename T = uintptr_t> T LoadGrassTileData(int32_t index) {
		return ((T (*)(GrassManagerGPU*, int32_t))(Il2CppBase() + 0x36F7C44))(this, index);
	}
	template <typename T = uintptr_t> T CreateGrassCellMaterial_NonVTF(int32_t grassType, Il2CppArray<uintptr_t>* heightMapData, Il2CppArray<uintptr_t>* densityMapData, uintptr_t col) {
		return ((T (*)(GrassManagerGPU*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x36E7E98))(this, grassType, heightMapData, densityMapData, col);
	}
	template <typename T = void> T InitSplitMaterialPool() {
		return ((T (*)(GrassManagerGPU*))(Il2CppBase() + 0x36F7030))(this);
	}
	template <typename T = void> T CallBackMaterialInfo(int32_t tileIndex) {
		return ((T (*)(GrassManagerGPU*, int32_t))(Il2CppBase() + 0x36F3BDC))(this, tileIndex);
	}
	template <typename T = uintptr_t> T GetSplitMaterial(int32_t tileIndex, int32_t grassType, uintptr_t splitMap, uintptr_t posAndSize, bool useHighLod) {
		return ((T (*)(GrassManagerGPU*, int32_t, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x36E77A0))(this, tileIndex, grassType, splitMap, posAndSize, useHighLod);
	}

};

}
