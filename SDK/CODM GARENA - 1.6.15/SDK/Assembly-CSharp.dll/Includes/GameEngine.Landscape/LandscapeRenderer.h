#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class LandscapeRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "LandscapeRenderer"));
	}

	template <typename T = int32_t> static T& kMaxInstanceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& landscape() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isSceneViewLandscape() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& landscapeTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cameraTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& lastUsedFrame() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& instancedPatchMesh() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& instancedPatchMeshWithHole() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& holeMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& heightmapAtlas() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& landscapeLodInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& instancedDrawcalls() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& instancedHoleDrawcalls() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& additionalInstancedDrawcalls() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& additionalInstancedDrawcallsUsedCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& patches() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& onlySupportSingleInstanceProp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& supportsInstancing() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& supportsVAInstancing() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pendingLoadQueue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& completedLoadQueue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& delayCommitFrameCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mainThread() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& updateLodJob() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& cullInstancesJob() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& threadCachedData_UpdateLod() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& threadCachedData_CullInstances() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& hasCullInstancesJob() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& mainThreadCullingRequired() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = uintptr_t> T& worldToClipMatrixOfCullJob() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& frustumPlanes() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& shift_job_to_mainthread() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& shaderPropName_LandscapeLodInfo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& shaderPropName_LandscapeCdlodViewpoint() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& shaderPropName_LandscapeSplats_ST() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& shaderPropName_LandscapePatchData() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> static T& kDCIndexStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kAddDCIndexStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kHoleDCIndexStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& enable_render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLandscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeightmapAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstancedPatchMeshWithHole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstancedPatchMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isOnlySupportSingleInstanceProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMatID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInstancedDrawcallData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReuseInstancedDrawcallData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeInstanceDataBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForLoadingCompletion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLodImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_UpdateLodStep0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_UpdateLodStep1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_UpdateLodStep2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartUpdateLodJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompleteUpdateLodJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_PrepareForCullInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Internal_CullInstancesThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCullInstancesJob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CullInstancesImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShaderConstants() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShaderConstants() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeShaderPropNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShaderLandscapeLodInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShaderCdlodViewpoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShaderPerInstanceData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderDrawcall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSplatsUvScaleOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialIndexForRendering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPatchInstanceToRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePatchInstanceToRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecursiveCullPatchesThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestPlaneAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecursiveRemovePatchInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeLandscapeLodInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixSeamCausedByAsyncLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecursiveCalculateLod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePatchHoleVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPatchResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubmitLoadRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadRequestComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadPatchData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommitLoadedPatches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleasePatchResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaterialStreamingLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBaseMapTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = uintptr_t> T GetLandscape() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x24890B4))(this);
	}
	template <typename T = uintptr_t> T GetCamera() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x247C534))(this);
	}
	template <typename T = uintptr_t> T GetHeightmapAtlas() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248A3C0))(this);
	}
	template <typename T = uintptr_t> T GetInstancedPatchMeshWithHole() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248A490))(this);
	}
	template <typename T = uintptr_t> T GetInstancedPatchMesh() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248B434))(this);
	}
	template <typename T = bool> T isOnlySupportSingleInstanceProp() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248BE70))(this);
	}
	template <typename T = void> T Initialize(uintptr_t landscape, uintptr_t camera) {
		return ((T (*)(LandscapeRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24831DC))(this, landscape, camera);
	}
	template <typename T = void> T ApplyMatID() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248D62C))(this);
	}
	template <typename T = void> T InitializeMaterials() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248C564))(this);
	}
	template <typename T = int32_t> T GetMaterialCount() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248D2FC))(this);
	}
	template <typename T = uintptr_t> T CreateInstancedDrawcallData(int32_t materialIndex, bool isAdditional) {
		return ((T (*)(LandscapeRenderer*, int32_t, bool))(Il2CppBase() + 0x248D3E0))(this, materialIndex, isAdditional);
	}
	template <typename T = void> T ReuseInstancedDrawcallData(uintptr_t drawcall, int32_t materialIndex) {
		return ((T (*)(LandscapeRenderer*, uintptr_t, int32_t))(Il2CppBase() + 0x248D8E4))(this, drawcall, materialIndex);
	}
	template <typename T = void> T InitializeInstanceDataBuffer(Il2CppArray<uintptr_t>** buffer) {
		return ((T (*)(LandscapeRenderer*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x1E7FF58))(this, buffer);
	}
	template <typename T = void> T Release() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2482E14))(this);
	}
	template <typename T = void> T ForceSyncUpdate() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2483A08))(this);
	}
	template <typename T = void> T WaitForLoadingCompletion() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248D9EC))(this);
	}
	template <typename T = void> T UpdateLodImmediate() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x24857B0))(this);
	}
	template <typename T = void> T Internal_UpdateLodStep0() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248DDF8))(this);
	}
	template <typename T = void> T Internal_UpdateLodStep1() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248DF3C))(this);
	}
	template <typename T = void> T Internal_UpdateLodStep2() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248E054))(this);
	}
	template <typename T = void> T StartUpdateLodJob() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2484908))(this);
	}
	template <typename T = void> T CompleteUpdateLodJob() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2485610))(this);
	}
	template <typename T = void> T Internal_PrepareForCullInstances() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248EA14))(this);
	}
	template <typename T = void> T Internal_CullInstancesThreaded() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248EC68))(this);
	}
	template <typename T = void> T StartCullInstancesJob() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2485354))(this);
	}
	template <typename T = void> T CullInstancesImmediate() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248F0CC))(this);
	}
	template <typename T = void> T Cull() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2485894))(this);
	}
	template <typename T = void> T UpdateShaderConstants(bool hasHole) {
		return ((T (*)(LandscapeRenderer*, bool))(Il2CppBase() + 0x248CF44))(this, hasHole);
	}
	template <typename T = void> T SetShaderConstants(uintptr_t material) {
		return ((T (*)(LandscapeRenderer*, uintptr_t))(Il2CppBase() + 0x248F1A8))(this, material);
	}
	template <typename T = void> T InitializeShaderPropNames() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248CDEC))(this);
	}
	template <typename T = void> T UpdateShaderLandscapeLodInfo() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248E934))(this);
	}
	template <typename T = void> T UpdateShaderCdlodViewpoint() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248D1C0))(this);
	}
	template <typename T = void> T UpdateShaderPerInstanceData(uintptr_t drawcall) {
		return ((T (*)(LandscapeRenderer*, uintptr_t))(Il2CppBase() + 0x248F548))(this, drawcall);
	}
	template <typename T = void> T RenderDrawcall(uintptr_t drawcall, bool hasHole, int32_t debugDCIndex) {
		return ((T (*)(LandscapeRenderer*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x248F664))(this, drawcall, hasHole, debugDCIndex);
	}
	template <typename T = void> T Render() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2485C1C))(this);
	}
	template <typename T = uintptr_t> T GetSplatsUvScaleOffset(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x248F968))(this, level, row, col);
	}
	template <typename T = int32_t> T GetMaterialIndexForRendering(int32_t level, int32_t row, int32_t col, uintptr_t patch) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x248FB04))(this, level, row, col, patch);
	}
	template <typename T = void> T AddPatchInstanceToRender(int32_t level, int32_t row, int32_t col, uintptr_t patch, int32_t patchIndex) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x248FCB4))(this, level, row, col, patch, patchIndex);
	}
	template <typename T = void> T RemovePatchInstanceToRender(int32_t level, int32_t row, int32_t col, uintptr_t patch, int32_t patchIndex) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2490750))(this, level, row, col, patch, patchIndex);
	}
	template <typename T = int32_t> T RecursiveCullPatchesThreaded(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x248ED78))(this, level, row, col);
	}
	template <typename T = bool> static T TestPlaneAABB(Il2CppArray<uintptr_t>* planes, uintptr_t bounds) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2490CE8))(0, planes, bounds);
	}
	template <typename T = void> T RecursiveRemovePatchInstances(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2490B1C))(this, level, row, col);
	}
	template <typename T = void> T InitializeLandscapeLodInfo() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248E138))(this);
	}
	template <typename T = void> T FixSeamCausedByAsyncLoading(int32_t level, uintptr_t patch, float distanceToViewpoint) {
		return ((T (*)(LandscapeRenderer*, int32_t, uintptr_t, float))(Il2CppBase() + 0x2490EE4))(this, level, patch, distanceToViewpoint);
	}
	template <typename T = uintptr_t> T RecursiveCalculateLod(int32_t level, int32_t row, int32_t col) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x248E2E8))(this, level, row, col);
	}
	template <typename T = bool> T CalculatePatchHoleVisibility(int32_t level, int32_t row, int32_t col, uintptr_t patch) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x249042C))(this, level, row, col, patch);
	}
	template <typename T = void> T RequestPatchResource(int32_t level, int32_t row, int32_t col, uintptr_t patch) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2491048))(this, level, row, col, patch);
	}
	template <typename T = int32_t> T SubmitLoadRequests() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x248DB04))(this);
	}
	template <typename T = void> T OnLoadRequestComplete(uintptr_t request) {
		return ((T (*)(LandscapeRenderer*, uintptr_t))(Il2CppBase() + 0x24916C0))(this, request);
	}
	template <typename T = void> T UploadPatchData(uintptr_t request) {
		return ((T (*)(LandscapeRenderer*, uintptr_t))(Il2CppBase() + 0x24917D0))(this, request);
	}
	template <typename T = void> T CommitLoadedPatches(bool allowDelay) {
		return ((T (*)(LandscapeRenderer*, bool))(Il2CppBase() + 0x2484764))(this, allowDelay);
	}
	template <typename T = void> T ReleasePatchResource(int32_t level, int32_t row, int32_t col, uintptr_t patch) {
		return ((T (*)(LandscapeRenderer*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x249142C))(this, level, row, col, patch);
	}
	template <typename T = void> T OnMaterialStreamingLoaded(int32_t materialIndex, uintptr_t maskTexture) {
		return ((T (*)(LandscapeRenderer*, int32_t, uintptr_t))(Il2CppBase() + 0x248A0F8))(this, materialIndex, maskTexture);
	}
	template <typename T = void> T ResetBaseMapTexture() {
		return ((T (*)(LandscapeRenderer*))(Il2CppBase() + 0x2483E14))(this);
	}

};

}
