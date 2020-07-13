#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class Landscape
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "Landscape"));
	}

	template <typename T = int32_t> static T& kMaxHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMaxLods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waterRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& terrains() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& patchDimension() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& lodDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& morphRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& streamingLookAhead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& useUpdateJobs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& useMergedMask() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mergedMaterialMapping() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& useTexArray() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& TexArrayUsed() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& useBasemap() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = bool> T& useVertexMatID() {
		return *(T*)((uintptr_t)this + 0x2F);
	}
	template <typename T = uintptr_t> T& basemapTexture() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& basemapTextureLow() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& landscapeMaskTextureLow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& basemapResolution() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& basemapDistance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& basemapFadeRange() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& basemapSplatsTilingScale() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& basemapVisibleBounds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& basemapScaleOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& useShadowmask() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& shadowmaskNearFadeDistance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& shadowmaskFarFadeDistance() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& currentShadowMaskDistance() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isShadowmaskNear() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& wetnessMask() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& waterHeight() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& holeVisibleDistance() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& lowQualityHoleVisibleBias() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allHoleBounds() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& currentHoleVisibleDistance() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& EnableHole() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& useHolesCutmask() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = uintptr_t> T& holesCutmask() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& patchesHoleFlag() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& outputDirectory() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& lastOutputDirectory() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& heightmapScale() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& centerPosition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& quadtreeDepthInternal() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& quadtreeDepthExternal() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& shadowCastingMode() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& receiveShadows() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& rendererLayer() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& terrainMaterials() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tillingSmoothnessArray() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& replaceLayer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& replaceToLayer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& replacedIndex() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lowQualitySplats() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& hasBuiltData() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& resourceNameHash() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& mapMaskDataAsset() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& heightDataAsset() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& heightDataReader() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& heightDataIndex() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cachedRenderers() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& loadManager() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& jobSystem() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> static T& colliderRootName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& colliderPatchName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& debugCollision() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& terrainPhysicMaterial() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& terrainCollisionRoot() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& collisionHoles() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& colliderPatchList() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppList<Il2CppRect>*> T& patchHoleRects() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& heightmapSampleMaskForIgnoreOC() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& ocDataLoaded() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_SoCHeightMapData() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJobSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isHoleEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShadowmaskDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchShadowmaskDistanceToNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchShadowmaskDistanceToFar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableShadowmaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasValidBuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeHeightDataStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseHeightDataStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAsyncManagers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAsyncManagers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodPatchCountPerEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodPatchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodPatchCountAccumulative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchHeightDataLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlobalPatchIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchHeightDataOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPatchHeightData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreamingDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperBoundOfLoadedPatches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodPatchSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldSpaceCenterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBasePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBoundsIgnoreHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBoundsWithExplicitHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUseUpdateJobs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldSpaceCenterPositionThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBoundsIgnoreHeightThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBoundsWithExplicitHeightThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchBasePositionThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTerrainMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPatchMaterialIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataFolderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialResourceName_MaskTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialDistributionBoundsIgnoreHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUpdateLod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GarbageCollectRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLowBasemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChangeBaseMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGlobalShaderConstants() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAsyncCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CullLandscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCullObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ForceSyncUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallbackToUnityTerrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoFallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateColliderPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPatchVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAllCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHoleRectsForColliderPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadHeightmapOCData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAndClearLandscapeSOCHeightMapData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBitValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}

	template <typename T = bool> T get_IsShadowmaskNear() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D7A0))(this);
	}
	template <typename T = int32_t> T get_quadtreeDepth() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D7A8))(this);
	}
	template <typename T = uintptr_t> T GetLoadManager() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D7B8))(this);
	}
	template <typename T = uintptr_t> T GetJobSystem() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D858))(this);
	}
	template <typename T = bool> T isHoleEnable() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D8F8))(this);
	}
	template <typename T = void> T UpdateShadowmaskDistance() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247D9F4))(this);
	}
	template <typename T = void> T SwitchShadowmaskDistanceToNear() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247DC5C))(this);
	}
	template <typename T = void> T SwitchShadowmaskDistanceToFar() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247DD08))(this);
	}
	template <typename T = void> T EnableShadowmaskState(bool enable) {
		return ((T (*)(Landscape*, bool))(Il2CppBase() + 0x247DDB4))(this, enable);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247DEBC))(this);
	}
	template <typename T = void> T CheckLowQuality() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247E548))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247EA30))(this);
	}
	template <typename T = bool> T HasValidBuildData() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247EAC8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247EBC4))(this);
	}
	template <typename T = void> T InitializeHeightDataStream() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247EFAC))(this);
	}
	template <typename T = void> T CloseHeightDataStream() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247FD64))(this);
	}
	template <typename T = void> T InitializeAsyncManagers() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247F21C))(this);
	}
	template <typename T = void> T DestroyAsyncManagers() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24802E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2480530))(this);
	}
	template <typename T = int32_t> T GetLodPatchCountPerEdge(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x2480818))(this, level);
	}
	template <typename T = int32_t> T GetLodPatchCount(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x24808DC))(this, level);
	}
	template <typename T = int32_t> T GetLodPatchCountAccumulative(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x247FBE4))(this, level);
	}
	template <typename T = int32_t> T GetPatchHeightDataLength() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247FCBC))(this);
	}
	template <typename T = int32_t> T GetGlobalPatchIndex(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x24809A4))(this, level, row, col);
	}
	template <typename T = int32_t> T GetPatchHeightDataOffset(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2480A8C))(this, level, row, col);
	}
	template <typename T = void> T LoadPatchHeightData(int32_t level, int32_t row, int32_t col, Il2CppArray<uintptr_t>* heights, uintptr_t* maxHeightValue) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x2480B9C))(this, level, row, col, heights, maxHeightValue);
	}
	template <typename T = float> T GetLodDistance(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x2480DA8))(this, level);
	}
	template <typename T = float> T GetStreamingDistance(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x2480E90))(this, level);
	}
	template <typename T = int32_t> T GetUpperBoundOfLoadedPatches() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2480F50))(this);
	}
	template <typename T = Il2CppVector2> T GetLodPatchSize(int32_t level) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x2481128))(this, level);
	}
	template <typename T = Il2CppVector3> T GetWorldSpaceCenterPosition() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2481260))(this);
	}
	template <typename T = Il2CppVector3> T GetPatchBasePosition(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x248136C))(this, level, row, col);
	}
	template <typename T = uintptr_t> T GetPatchBoundsIgnoreHeight(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2481580))(this, level, row, col);
	}
	template <typename T = uintptr_t> T GetPatchBoundsWithExplicitHeight(int32_t level, int32_t row, int32_t col, int16_t height) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, int16_t))(Il2CppBase() + 0x24817DC))(this, level, row, col, height);
	}
	template <typename T = void> T SetUseUpdateJobs(bool value) {
		return ((T (*)(Landscape*, bool))(Il2CppBase() + 0x2481AA0))(this, value);
	}
	template <typename T = Il2CppVector3> T GetWorldSpaceCenterPositionThreaded(uintptr_t tcd) {
		return ((T (*)(Landscape*, uintptr_t))(Il2CppBase() + 0x2481B48))(this, tcd);
	}
	template <typename T = uintptr_t> T GetPatchBoundsIgnoreHeightThreaded(int32_t level, int32_t row, int32_t col, uintptr_t tcd) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2481C4C))(this, level, row, col, tcd);
	}
	template <typename T = uintptr_t> T GetPatchBoundsWithExplicitHeightThreaded(int32_t level, int32_t row, int32_t col, int16_t height, uintptr_t tcd) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, int16_t, uintptr_t))(Il2CppBase() + 0x2481EB4))(this, level, row, col, height, tcd);
	}
	template <typename T = Il2CppVector3> T GetPatchBasePositionThreaded(int32_t level, int32_t row, int32_t col, uintptr_t tcd) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2482184))(this, level, row, col, tcd);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTerrainMaterials() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24823AC))(this);
	}
	template <typename T = int32_t> T GetPatchMaterialIndex(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x248244C))(this, level, row, col);
	}
	template <typename T = Il2CppString*> T GetDataFolderPath() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2482588))(this);
	}
	template <typename T = Il2CppString*> T GetMaterialResourceName_MaskTexture(int32_t index) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x248287C))(this, index);
	}
	template <typename T = uintptr_t> T GetMaterialDistributionBoundsIgnoreHeight(int32_t index) {
		return ((T (*)(Landscape*, int32_t))(Il2CppBase() + 0x2482A14))(this, index);
	}
	template <typename T = bool> T ShouldUpdateLod() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2482B08))(this);
	}
	template <typename T = void> T GarbageCollectRenderers() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2482BA8))(this);
	}
	template <typename T = uintptr_t> T GetRenderer(uintptr_t camera) {
		return ((T (*)(Landscape*, uintptr_t))(Il2CppBase() + 0x2482F48))(this, camera);
	}
	template <typename T = void> T ChangeLowBasemap() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2483BC0))(this);
	}
	template <typename T = void> T CheckChangeBaseMap() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24840F4))(this);
	}
	template <typename T = void> T UpdateGlobalShaderConstants() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247F308))(this);
	}
	template <typename T = void> T UpdateImpl() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2484334))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2485114))(this);
	}
	template <typename T = void> T StartAsyncCulling() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24851B8))(this);
	}
	template <typename T = void> T CullLandscape(uintptr_t camera) {
		return ((T (*)(Landscape*, uintptr_t))(Il2CppBase() + 0x24854E0))(this, camera);
	}
	template <typename T = void> T OnCullObject() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2485E78))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetActiveRenderers() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2485F2C))(this);
	}
	template <typename T = void> T ClearRenderers() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2480648))(this);
	}
	template <typename T = void> T ForceSyncUpdate() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2486000))(this);
	}
	template <typename T = void> T ForceSyncUpdate_1(uintptr_t camera) {
		return ((T (*)(Landscape*, uintptr_t))(Il2CppBase() + 0x24861AC))(this, camera);
	}
	template <typename T = void> T FallbackToUnityTerrain(bool fallback) {
		return ((T (*)(Landscape*, bool))(Il2CppBase() + 0x247ED8C))(this, fallback);
	}
	template <typename T = void> T AutoFallback() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247E374))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24862CC))(this);
	}
	template <typename T = void> T CreateColliderPatch(uintptr_t request, uintptr_t camera) {
		return ((T (*)(Landscape*, uintptr_t, uintptr_t))(Il2CppBase() + 0x248646C))(this, request, camera);
	}
	template <typename T = bool> T IsPatchVisible(int32_t level, int32_t row, int32_t col, Il2CppVector3 viewpoint) {
		return ((T (*)(Landscape*, int32_t, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x2487324))(this, level, row, col, viewpoint);
	}
	template <typename T = void> T CreateAllCollision() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24874FC))(this);
	}
	template <typename T = void> static T GetHoleRectsForColliderPatch(Il2CppArray<uintptr_t>* globalRects, Il2CppList<Il2CppRect>* patchHoleRects, int32_t patchX, int32_t patchY, int32_t patchSize) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppList<Il2CppRect>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2486F38))(0, globalRects, patchHoleRects, patchX, patchY, patchSize);
	}
	template <typename T = void> T DestoryCollision() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x2487F38))(this);
	}
	template <typename T = void> T LoadHeightmapOCData() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x247F534))(this);
	}
	template <typename T = uintptr_t> T GetAndClearLandscapeSOCHeightMapData() {
		return ((T (*)(Landscape*))(Il2CppBase() + 0x24883C0))(this);
	}
	template <typename T = bool> T GetBitValue(int32_t x, int32_t y, Il2CppArray<uintptr_t>* data, int32_t dataWidth) {
		return ((T (*)(Landscape*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x24881F4))(this, x, y, data, dataWidth);
	}

};

}
