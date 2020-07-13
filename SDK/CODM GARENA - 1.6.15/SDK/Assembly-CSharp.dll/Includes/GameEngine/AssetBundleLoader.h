#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleLoader"));
	}

	template <typename T = Il2CppString*> T& rootPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& patchPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& dynamicPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isReady() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int16_t>*> T& assetKeyToABName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& shaderNameToABName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& warmUpSVC() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int16_t>*> T& scenePathToABName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int16_t, uintptr_t>*> T& assetBundleCache() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& assetBundleTransferManifest() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& assetToBundleManifest() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& kInvalidID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<int16_t>*> T& m_TemporaryToLoadList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_AssetBundleLocation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& shaderBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& audioBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& socBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isUsingNewAssetBundleManifest() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int16_t>*> T& __depCollectList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> static T& TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_PendingUnloadAB() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TmpTickPendingUnloadAB() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> static T& ms_RequestForBundleUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& shaderCache() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& kMaxAsyncLoadABCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& kMaxAsyncLoadAssetCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& kMaxAsyncLoadABCount_LoadingScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& kEnableSyncABDuringMapLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& ms_loadBundleCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> T& m_QueuedLoadBundles() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& ms_loadAssetCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& m_AsyncLoadAssetQueue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_CurrentlyLoadingAsset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> static T& m_AsyncLoadAssetSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& kSVC_DontCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kSVC_NeedCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_CurSVCName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_SVC() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> static T& shaderDependencyBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Pref_DebugSkipShaderWarmup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ms_debugSkipShaderWarmup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D);
	}
	template <typename T = int32_t> static T& kWarmUpImpl_Origin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kWarmUpImpl_TimeSliced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kWarmUpImpl_Job() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBundlePathFromIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAssetBundleManifest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBundleMapping_Assets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBundleMapping_Scenes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBundleMapping_Shaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAssetBundleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBundleMapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBundleMapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBundleSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBundleSync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBundleAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateAllBundlesAfterAsyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleAsyncLoadAssetBundleError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAssetBundleVersionChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectAssetBundleDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPrintLoadAssetLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintLoadedAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Trace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAssetsFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAsyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAnyAsyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBundleCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCriticalMemory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetBundleUnloadStrategy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSVC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearShaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQualitySettingApplied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPendingUnloadAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterPendingUnloadAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAsyncUnloadPendingAssetBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUnloadPendingUnloadAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSplashOrLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadShaderSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadShaderAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetShaderAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadShaderCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneDynamicAssetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneDynamicAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseScenes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReleaseScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVideoClipAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioGameObjectSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioConfigSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadTileSOCDataAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupArgument() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBundleAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToLoadBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAsyncLoadBundle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadBundleThreaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsyncAsset_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAsyncLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadAssetWorker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBundleNameFromIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexFromBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GlobalPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShaderVariantCollectionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GlobalPreload_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGlobalPreloadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShaderVariants() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpVariantCollectionImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickPrefDebugSkipShaderWarmup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDebugSkipShaderWarmup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDebugSkipShaderWarmup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWarmUpShaderVariantCollectionImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShaderVariantCollectionImpl_Origin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShaderVariantCollectionImpl_TimeSliced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShaderVariantCollectionImpl_Job() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}

	template <typename T = uintptr_t> T get_manifest() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B67ED4))(this);
	}
	template <typename T = uintptr_t> T GetAssetBundleLocation() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B67EE8))(this);
	}
	template <typename T = void> T Init(uintptr_t action) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B67FB8))(this, action);
	}
	template <typename T = Il2CppString*> T GetBundlePathFromIndex(int16_t bundleIndex, uintptr_t offset) {
		return ((T (*)(AssetBundleLoader*, int16_t, uintptr_t))(Il2CppBase() + 0x2B693B4))(this, bundleIndex, offset);
	}
	template <typename T = bool> T InitAssetBundleManifest() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B68A9C))(this);
	}
	template <typename T = void> T InitBundleMapping_Assets(uintptr_t container) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B69D0C))(this, container);
	}
	template <typename T = void> T InitBundleMapping_Scenes(uintptr_t container) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B6A450))(this, container);
	}
	template <typename T = void> T InitBundleMapping_Shaders(uintptr_t container) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B6A7AC))(this, container);
	}
	template <typename T = bool> T InitAssetBundleLocation() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B68D30))(this);
	}
	template <typename T = bool> T InitBundleMapping() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B68E90))(this);
	}
	template <typename T = void> T ClearBundleMapping() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6B324))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6B478))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6BBA8))(this);
	}
	template <typename T = void> T GetAssetBundleDependencies(Il2CppString* assetPath, uintptr_t depAssetBundleNames, bool onlyDynamic) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x2B6CE08))(this, assetPath, depAssetBundleNames, onlyDynamic);
	}
	template <typename T = uintptr_t> T LoadSync(Il2CppString* assetName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x334EBA0))(this, assetName);
	}
	template <typename T = uintptr_t> T LoadSync_1(int16_t bundleIndex, Il2CppString* assetName) {
		return ((T (*)(AssetBundleLoader*, int16_t, Il2CppString*))(Il2CppBase() + 0x334E0F8))(this, bundleIndex, assetName);
	}
	template <typename T = bool> T LoadBundleSync(int16_t bundleIndex, int32_t assetId, Il2CppString* sceneName) {
		return ((T (*)(AssetBundleLoader*, int16_t, int32_t, Il2CppString*))(Il2CppBase() + 0x2B6D4BC))(this, bundleIndex, assetId, sceneName);
	}
	template <typename T = bool> T LoadBundleSync_Internal(int16_t bundleIndex) {
		return ((T (*)(AssetBundleLoader*, int16_t))(Il2CppBase() + 0x2B6DCD4))(this, bundleIndex);
	}
	template <typename T = void> T LoadAsync(int16_t bundleIndex, Il2CppString* assetName, void* action) {
		return ((T (*)(AssetBundleLoader*, int16_t, Il2CppString*, void*))(Il2CppBase() + 0x1E7E7D4))(this, bundleIndex, assetName, action);
	}
	template <typename T = void> T LoadAsync_1(Il2CppString* assetName, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, void*))(Il2CppBase() + 0x1E7E998))(this, assetName, action);
	}
	template <typename T = uintptr_t> T LoadBundleAsync(int16_t bundleIndex, int32_t assetId, Il2CppString* sceneName, uintptr_t errno) {
		return ((T (*)(AssetBundleLoader*, int16_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2B6E534))(this, bundleIndex, assetId, sceneName, errno);
	}
	template <typename T = bool> T ValidateAllBundlesAfterAsyncLoad(Il2CppList<int16_t>* toLoadBundles) {
		return ((T (*)(AssetBundleLoader*, Il2CppList<int16_t>*))(Il2CppBase() + 0x2B6E688))(this, toLoadBundles);
	}
	template <typename T = void> T HandleAsyncLoadAssetBundleError(uintptr_t assetBundleEx) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B6EAF0))(this, assetBundleEx);
	}
	template <typename T = void> T NotifyAssetBundleVersionChanged() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6EBF0))(this);
	}
	template <typename T = void> T CollectAssetBundleDependencies(int16_t bundleIndex, uintptr_t waitingBundleNames, int32_t assetId, Il2CppString* sceneName) {
		return ((T (*)(AssetBundleLoader*, int16_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x2B6D8C8))(this, bundleIndex, waitingBundleNames, assetId, sceneName);
	}
	template <typename T = uintptr_t> T LoadAsync_Internal(int16_t bundleIndex, Il2CppString* assetName, void* action) {
		return ((T (*)(AssetBundleLoader*, int16_t, Il2CppString*, void*))(Il2CppBase() + 0x21D9B58))(this, bundleIndex, assetName, action);
	}
	template <typename T = bool> T ShouldPrintLoadAssetLog() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6ECF8))(this);
	}
	template <typename T = void> T PrintLoadedAB() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6EE38))(this);
	}
	template <typename T = void> static T Log(Il2CppString* str, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B689CC))(0, str, paras);
	}
	template <typename T = void> static T Trace(Il2CppString* str, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B6F1B8))(0, str, paras);
	}
	template <typename T = void> static T Error(Il2CppString* str, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B69200))(0, str, paras);
	}
	template <typename T = void> T ReloadAll(uintptr_t callback) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B6F334))(this, callback);
	}
	template <typename T = void> T UnloadAssetsFor(int32_t mapId) {
		return ((T (*)(AssetBundleLoader*, int32_t))(Il2CppBase() + 0x2B6F43C))(this, mapId);
	}
	template <typename T = void> T StopAsyncLoad() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6F89C))(this);
	}
	template <typename T = bool> T HasAnyAsyncLoad() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6FF28))(this);
	}
	template <typename T = void> T ClearBundleCache(uintptr_t cus) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B6B584))(this, cus);
	}
	template <typename T = void> T OnCriticalMemory() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B70484))(this);
	}
	template <typename T = void> T GetAssetBundleUnloadStrategy(uintptr_t cus, uintptr_t unloadGlobalAssetBundles, uintptr_t unloadAllLoadedObjects) {
		return ((T (*)(AssetBundleLoader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B70088))(this, cus, unloadGlobalAssetBundles, unloadAllLoadedObjects);
	}
	template <typename T = void> T ClearSVC() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B7055C))(this);
	}
	template <typename T = void> T ClearShaders(uintptr_t cus) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B701BC))(this, cus);
	}
	template <typename T = void> T OnQualitySettingApplied(bool safeApply, uintptr_t callback) {
		return ((T (*)(AssetBundleLoader*, bool, uintptr_t))(Il2CppBase() + 0x2B70AC4))(this, safeApply, callback);
	}
	template <typename T = void> T RegisterPendingUnloadAB(uintptr_t abEx) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B66CE8))(this, abEx);
	}
	template <typename T = void> T UnRegisterPendingUnloadAB(uintptr_t abEx) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B66794))(this, abEx);
	}
	template <typename T = void> T TickAsyncUnloadPendingAssetBundle() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6C7FC))(this);
	}
	template <typename T = bool> T ForceUnloadPendingUnloadAB() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B70CC8))(this);
	}
	template <typename T = uintptr_t> T LoadSplashOrLoading(Il2CppString* texPath) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x334DCD8))(this, texPath);
	}
	template <typename T = void> T LoadSceneSync(Il2CppString* sceneName, uintptr_t mode) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2B710A8))(this, sceneName, mode);
	}
	template <typename T = uintptr_t> T LoadSceneAsync(Il2CppArray<uintptr_t>* scenePathList, void* onProgress, void* onFail, uintptr_t onSucess, void* onSceneLoadStatus, bool autoActivation, bool setActiveSceneOnLoaded, bool setVisible) {
		return ((T (*)(AssetBundleLoader*, Il2CppArray<uintptr_t>*, void*, void*, uintptr_t, void*, bool, bool, bool))(Il2CppBase() + 0x2B713E0))(this, scenePathList, onProgress, onFail, onSucess, onSceneLoadStatus, autoActivation, setActiveSceneOnLoaded, setVisible);
	}
	template <typename T = uintptr_t> T LoadShaderSync(Il2CppString* shaderName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x2B71570))(this, shaderName);
	}
	template <typename T = void> T LoadShaderAsync(Il2CppString* shaderName, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, void*))(Il2CppBase() + 0x2B71AB4))(this, shaderName, action);
	}
	template <typename T = bool> T TryGetShaderAsset(Il2CppString* shaderName, uintptr_t absc) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2B717FC))(this, shaderName, absc);
	}
	template <typename T = void> T LoadShaderCallback(Il2CppString* shaderName, uintptr_t s, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x2B71FE0))(this, shaderName, s, action);
	}
	template <typename T = uintptr_t> T LoadSceneDynamicAssetSync(Il2CppString* assetName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x334DB8C))(this, assetName);
	}
	template <typename T = void> T LoadSceneDynamicAssetAsync(Il2CppString* assetName, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, void*))(Il2CppBase() + 0x1E7ECFC))(this, assetName, action);
	}
	template <typename T = void> T UnloadBundle(int16_t bundleIndex, bool unloadAllLoadedObjects) {
		return ((T (*)(AssetBundleLoader*, int16_t, bool))(Il2CppBase() + 0x2B721FC))(this, bundleIndex, unloadAllLoadedObjects);
	}
	template <typename T = void> T ReleaseScenes(Il2CppList<Il2CppString*>* scenePathList) {
		return ((T (*)(AssetBundleLoader*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x2B6F6B4))(this, scenePathList);
	}
	template <typename T = void> T ReleaseScene(Il2CppString* scene) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x2B7265C))(this, scene);
	}
	template <typename T = void> T DoReleaseScene(Il2CppString* scene) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x2B72374))(this, scene);
	}
	template <typename T = void> T LoadVideoClipAsync(Il2CppString* videoPath, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, void*))(Il2CppBase() + 0x2B7273C))(this, videoPath, action);
	}
	template <typename T = uintptr_t> T LoadAudioGameObjectSync(Il2CppString* assetName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x2B72978))(this, assetName);
	}
	template <typename T = uintptr_t> T LoadAudioConfigSync(Il2CppString* configName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x334D8D8))(this, configName);
	}
	template <typename T = void> T LoadTileSOCDataAsync(Il2CppString* path, int32_t key, void* action) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x2B72A90))(this, path, key, action);
	}
	template <typename T = void> static T SetupArgument(int32_t maxAB, int32_t maxAsset) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2B72C6C))(0, maxAB, maxAsset);
	}
	template <typename T = bool> T GetLock(uintptr_t val, int32_t target) {
		return ((T (*)(AssetBundleLoader*, uintptr_t, int32_t))(Il2CppBase() + 0x2B72D98))(this, val, target);
	}
	template <typename T = bool> T ReleaseLock(uintptr_t val) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B72E98))(this, val);
	}
	template <typename T = uintptr_t> T LoadBundleAsync_Internal(Il2CppList<int16_t>* toLoad) {
		return ((T (*)(AssetBundleLoader*, Il2CppList<int16_t>*))(Il2CppBase() + 0x2B72F80))(this, toLoad);
	}
	template <typename T = void> T AddToLoadBundle(uintptr_t abEx) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B730A4))(this, abEx);
	}
	template <typename T = void> T TickAsyncLoadBundle() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6BC8C))(this);
	}
	template <typename T = uintptr_t> T AsyncLoadBundleThreaded(uintptr_t abEx) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B7320C))(this, abEx);
	}
	template <typename T = uintptr_t> T LoadAssetAsyncAsset_Internal(uintptr_t task) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B73330))(this, task);
	}
	template <typename T = void> T TickAsyncLoadAsset() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B6C2E0))(this);
	}
	template <typename T = uintptr_t> T AsyncLoadAssetWorker(uintptr_t task) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B73454))(this, task);
	}
	template <typename T = Il2CppString*> T GetBundleNameFromIndex(int16_t index) {
		return ((T (*)(AssetBundleLoader*, int16_t))(Il2CppBase() + 0x2B662CC))(this, index);
	}
	template <typename T = int16_t> T GetIndexFromBundleName(Il2CppString* s) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x2B6A2BC))(this, s);
	}
	template <typename T = void> T GlobalPreload(uintptr_t action) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B68FFC))(this, action);
	}
	template <typename T = Il2CppString*> T GetShaderVariantCollectionName() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B73694))(this);
	}
	template <typename T = void> T WarmUpShaders(uintptr_t callback) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B70BDC))(this, callback);
	}
	template <typename T = uintptr_t> T GlobalPreload_Internal(uintptr_t action) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B73578))(this, action);
	}
	template <typename T = void> T OnGlobalPreloadFinished(uintptr_t action) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B73F90))(this, action);
	}
	template <typename T = void> T WarmUpShaderVariants(Il2CppString* svcName, uintptr_t callback) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2B73A84))(this, svcName, callback);
	}
	template <typename T = uintptr_t> T WarmUpVariantCollectionImp(uintptr_t svc, uintptr_t callback, Il2CppString* svcName, int32_t startTime) {
		return ((T (*)(AssetBundleLoader*, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2B7427C))(this, svc, callback, svcName, startTime);
	}
	template <typename T = void> static T PickPrefDebugSkipShaderWarmup() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B687A8))(0);
	}
	template <typename T = void> static T SetDebugSkipShaderWarmup(bool inValue) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2B743CC))(0, inValue);
	}
	template <typename T = bool> static T GetDebugSkipShaderWarmup() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B74174))(0);
	}
	template <typename T = uintptr_t> T GetWarmUpShaderVariantCollectionImpl() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x2B74620))(this);
	}
	template <typename T = uintptr_t> T WarmUpShaderVariantCollectionImpl_Origin(uintptr_t svc) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B74838))(this, svc);
	}
	template <typename T = uintptr_t> T WarmUpShaderVariantCollectionImpl_TimeSliced(uintptr_t svc) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B74958))(this, svc);
	}
	template <typename T = uintptr_t> T WarmUpShaderVariantCollectionImpl_Job(uintptr_t svc) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x2B74A78))(this, svc);
	}

};

}
