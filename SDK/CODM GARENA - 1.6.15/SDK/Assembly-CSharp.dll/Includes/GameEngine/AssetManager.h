#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetManager"));
	}

	template <typename T = Il2CppString*> static T& SystemSwitchName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ManifestName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BinaryExportFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetExportFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPackageFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FontExportFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SceneDynamicLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleExportFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EditorABExportFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleOutputFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleStoreFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AudioStoreFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ExternalCfgFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ApolloStoreFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DolphinStoreFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IFSFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IFSResFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IFSResFileName_NoSlash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IFSFilelistFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IFSFilelistFileName_NoSlash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetLowQualitySuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetMidQualitySuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AssetBundleSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AudioAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShaderAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShaderDependencyBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UnamedAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UnamedTextureAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SplashAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ArtSceneBundleNamePrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LDSceneBundleNamePrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CommonSceneBundleNamePrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BRSOCAssetBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_AssetIDToMetaData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& m_AssetNameToID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ToKeepAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_CachedRequest() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& AssetStoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& kDefaultAsyncLoadLimit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& kMaxTickDoneTaskCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& toRemoveList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_PreLoadAssets() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_PersistentManagerGO() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PersistentManager() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_LegacyAssetList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_LegacyLevelAssetList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& E_UNKNOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& E_LEGACY_STYLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& E_MONOBEHAVIOUR_STYLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ShouldUseCorrectAssetList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> static T& KEYSTRING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& OnCheckBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& OnCheckEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& kEditorOriginalPathPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kEditorServerFilesPathPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWarmingUpShaders() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& m_CurrentTasks() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& m_ReadyTasks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_DoneTasks() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_CurAynscLoadPeak() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& kDefaultLRUCachedCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LastestCachedAssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_CurSlot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> static T& TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_AssetStoreData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& m_AssetGeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& m_AllowAsyncLoad() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_unloadUnusedCallCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_LastCheckGCTick() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_LastGCStartTick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_LastGCEndTick() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_GCTimecost() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_GCSemaphore() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> static T& kGCDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kCheckInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMinTouchInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_GCInterval() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_MinGCInterval() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> static T& ms_DangerousMemorySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& ms_systemMemorySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& ms_lastMemUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& m_IsMemoryCritical() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultAsyncLoadLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDoneTaskCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReadyTaskCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteCallbacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPackageTagsFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPackageTagsFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToPreloadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetsByTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMapAssetsAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMapAssetsAsyncInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPersistentManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUseCorrectAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateAssetManagerStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupAssetManagerStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadScriptableObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAssetInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindAssetInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InstantiateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_InstantiateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVersionConfigFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVersionConfigFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadTextAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadUnityRawAssetImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEditorLocalizedPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadConfigurations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIAtlasPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSplashOrLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRuntimeMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRuntimeMeshAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___resources_load_async_and_call() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVideoClipAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QualitySettingApplied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WarmUpShadersManually() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWarmUpShaderFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsApplyingGraphicSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReCreateAllShaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetForAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAssetByAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScheduleTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCurrentTasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAsyncLoadFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsync_ResFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAsyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAnyAsyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAsyncLoadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadingAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallbackFromReadyTasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallbackFromDoneTasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallbackFromWaittingTasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallbackFromCurrentTasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsManyAssetsLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadManyAssetsAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadManyAssetsAsync_Internal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadAssetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetSyncInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoadAssetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterNeverGarbageCollectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterNeverGarbageCollectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToCacheSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnqueueLRU() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDoNotClearAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllLRU() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAssetStoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineAssetStoreUIAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitValidatingDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowErrorMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetIDLegal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMetaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindMetaDataDirect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPersistentGameObjectImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAssetAndPerishAssetRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncGeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentGeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAssetsFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReadyFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGCInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGarbageCollect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUnloadAndGC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GarbageCollectInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GarbageCollect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRuntimeMemoryDangerous() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCriticalMemory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMemroyCritical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7E0B0))(this);
	}
	template <typename T = uintptr_t> T GetAssetStoreData() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7E7DC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetManager*, float))(Il2CppBase() + 0x2B7E8AC))(this, deltaTime);
	}
	template <typename T = void> T SetDefaultAsyncLoadLimit(int32_t limit) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B7EDEC))(this, limit);
	}
	template <typename T = void> T UpdateTaskList() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7EB90))(this);
	}
	template <typename T = void> T TickDoneTaskCallback() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7F23C))(this);
	}
	template <typename T = void> T TickReadyTaskCallback() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7F594))(this);
	}
	template <typename T = void> T ExecuteCallbacks() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B805F0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B80C74))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPackageTagsFor(uintptr_t mode, uintptr_t modeCategory, bool isTutorial, Il2CppString* assetTagStr) {
		return ((T (*)(AssetManager*, uintptr_t, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x2B81CC8))(this, mode, modeCategory, isTutorial, assetTagStr);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPackageTagsFor_1(int32_t mapID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B82700))(this, mapID);
	}
	template <typename T = void> T AddToPreloadList(uintptr_t group, uintptr_t tag, uintptr_t list) {
		return ((T (*)(AssetManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B828D0))(this, group, tag, list);
	}
	template <typename T = bool> T LoadAssetsByTag(uintptr_t tag) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x2B82A68))(this, tag);
	}
	template <typename T = void> T LoadMapAssetsAsync(int32_t mapId, uintptr_t callback, void* percentcallback) {
		return ((T (*)(AssetManager*, int32_t, uintptr_t, void*))(Il2CppBase() + 0x2B83770))(this, mapId, callback, percentcallback);
	}
	template <typename T = uintptr_t> T LoadMapAssetsAsyncInternal(int32_t mapId, uintptr_t callback, void* percentcallback) {
		return ((T (*)(AssetManager*, int32_t, uintptr_t, void*))(Il2CppBase() + 0x2B83A74))(this, mapId, callback, percentcallback);
	}
	template <typename T = void> T InitPersistentManager() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7E540))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetAssetList() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B83240))(this);
	}
	template <typename T = bool> T ShouldUseCorrectAssetList() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B83BBC))(this);
	}
	template <typename T = void> T ValidateAssetManagerStyle() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B83D4C))(this);
	}
	template <typename T = void> T SetupAssetManagerStyle(bool useCorrectAssetList) {
		return ((T (*)(AssetManager*, bool))(Il2CppBase() + 0x2B83E68))(this, useCorrectAssetList);
	}
	template <typename T = void> T ClearAllCache(bool forceClearAllAssetCache) {
		return ((T (*)(AssetManager*, bool))(Il2CppBase() + 0x2B81514))(this, forceClearAllAssetCache);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B84648))(this);
	}
	template <typename T = uintptr_t> T FindAsset(int32_t targetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x334EE58))(this, targetID);
	}
	template <typename T = uintptr_t> T LoadScriptableObject(int32_t targetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x334F338))(this, targetID);
	}
	template <typename T = uintptr_t> T FindAsset_1(Il2CppString* path) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B847A0))(this, path);
	}
	template <typename T = uintptr_t> T FindAssetInternal(int32_t targetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B802C0))(this, targetID);
	}
	template <typename T = uintptr_t> T FindAssetInternal_1(Il2CppString* path) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B848D8))(this, path);
	}
	template <typename T = void*> static T get_OnCheckBegin() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B84A68))(0);
	}
	template <typename T = void> static T set_OnCheckBegin(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2B84B18))(0, value);
	}
	template <typename T = void*> static T get_OnCheckEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B84BCC))(0);
	}
	template <typename T = void> static T set_OnCheckEnd(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2B84C7C))(0, value);
	}
	template <typename T = uintptr_t> T InstantiateAsset(uintptr_t assetID) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x2B84D30))(this, assetID);
	}
	template <typename T = uintptr_t> T InstantiateAsset_1(int32_t targetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B84E10))(this, targetID);
	}
	template <typename T = uintptr_t> T InstantiateAsset_2(int32_t targetID, Il2CppVector3 inPosition, Il2CppQuaternion inRotation, uintptr_t inParent) {
		return ((T (*)(AssetManager*, int32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x2B853F8))(this, targetID, inPosition, inRotation, inParent);
	}
	template <typename T = Il2CppString*> static T LoadVersionConfigFile(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B85A90))(0, path);
	}
	template <typename T = void> static T SetVersionConfigFile(Il2CppString* relativeAssetPath, Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2B85D64))(0, relativeAssetPath, s);
	}
	template <typename T = void> static T UnloadTextAsset(uintptr_t ta) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B85F6C))(0, ta);
	}
	template <typename T = void> static T UnloadUnityRawAssetImmediately(uintptr_t toUnload) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B70884))(0, toUnload);
	}
	template <typename T = void> static T UnloadUIAtlas(uintptr_t atlas) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B86060))(0, atlas);
	}
	template <typename T = Il2CppString*> static T GetEditorLocalizedPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B86360))(0, path);
	}
	template <typename T = Il2CppString*> static T LoadAudioConfig(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B86490))(0, path);
	}
	template <typename T = uintptr_t> static T LoadAudioGameObject(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B8674C))(0, path);
	}
	template <typename T = uintptr_t> static T LoadShader(Il2CppString* shaderName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x334F4A0))(0, shaderName);
	}
	template <typename T = uintptr_t> static T LoadShader_1(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B86998))(0, name);
	}
	template <typename T = void> static T ReloadConfigurations(bool addtive) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2B86C30))(0, addtive);
	}
	template <typename T = Il2CppString*> T GetUIAtlasPath(int32_t assetId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B86EC0))(this, assetId);
	}
	template <typename T = uintptr_t> T LoadUIAtlas(Il2CppString* atlasPath) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B86FAC))(this, atlasPath);
	}
	template <typename T = uintptr_t> static T LoadSplashOrLoading(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x334F68C))(0, path);
	}
	template <typename T = uintptr_t> static T LoadSprite(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B871E4))(0, path);
	}
	template <typename T = uintptr_t> static T LoadRuntimeMesh(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B873BC))(0, path);
	}
	template <typename T = void> static T LoadRuntimeMeshAsync(Il2CppString* path, void* callback) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x2B875D8))(0, path, callback);
	}
	template <typename T = uintptr_t> static T __resources_load_async_and_call(Il2CppString* path, void* callback) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x21D9D34))(0, path, callback);
	}
	template <typename T = void> T LoadVideoClipAsync(int32_t assetID, void* callback) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B879B8))(this, assetID, callback);
	}
	template <typename T = void> T QualitySettingApplied(bool isSafeApply) {
		return ((T (*)(AssetManager*, bool))(Il2CppBase() + 0x2B87EF8))(this, isSafeApply);
	}
	template <typename T = void> T WarmUpShadersManually() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B88378))(this);
	}
	template <typename T = void> T OnWarmUpShaderFinished() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B88554))(this);
	}
	template <typename T = bool> T IsApplyingGraphicSettings() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B88628))(this);
	}
	template <typename T = void> static T ReCreateAllShaders() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B88108))(0);
	}
	template <typename T = void> T SetAssetForAssetId(int32_t assetId, uintptr_t prefab) {
		return ((T (*)(AssetManager*, int32_t, uintptr_t))(Il2CppBase() + 0x2B88700))(this, assetId, prefab);
	}
	template <typename T = void> T RemoveAssetByAssetId(int32_t assetId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B887E4))(this, assetId);
	}
	template <typename T = void> T ScheduleTask(int32_t assetID, Il2CppArray<uintptr_t>* assetIDList, void* CallbackFun, uintptr_t CallBackData, uintptr_t TaskPriority) {
		return ((T (*)(AssetManager*, int32_t, Il2CppArray<uintptr_t>*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B888B4))(this, assetID, assetIDList, CallbackFun, CallBackData, TaskPriority);
	}
	template <typename T = void> T AddToTaskList(uintptr_t task) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x2B8041C))(this, task);
	}
	template <typename T = void> T ClearCurrentTasks() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B88BD0))(this);
	}
	template <typename T = void> T OnAsyncLoadFinished(int32_t assetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B88DFC))(this, assetID);
	}
	template <typename T = void> T DoLoadAssetAsync(uintptr_t task, void* cb2AssetManager) {
		return ((T (*)(AssetManager*, uintptr_t, void*))(Il2CppBase() + 0x2B7FA98))(this, task, cb2AssetManager);
	}
	template <typename T = uintptr_t> T LoadAsync_ResFolder(Il2CppString* key, int32_t assetId, int32_t generation, void* callback) {
		return ((T (*)(AssetManager*, Il2CppString*, int32_t, int32_t, void*))(Il2CppBase() + 0x2B891D4))(this, key, assetId, generation, callback);
	}
	template <typename T = void> T OnAssetLoadCallback(Il2CppString* path, uintptr_t obj, int32_t assetID, int32_t generation, void* callback) {
		return ((T (*)(AssetManager*, Il2CppString*, uintptr_t, int32_t, int32_t, void*))(Il2CppBase() + 0x2B89324))(this, path, obj, assetID, generation, callback);
	}
	template <typename T = void> T StopAsyncLoad(int32_t fromMapID, int32_t toMapID) {
		return ((T (*)(AssetManager*, int32_t, int32_t))(Il2CppBase() + 0x2B80E64))(this, fromMapID, toMapID);
	}
	template <typename T = bool> T HasAnyAsyncLoad() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B89F90))(this);
	}
	template <typename T = void> T GetCurrentAsyncLoadInfo(uintptr_t sb) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x2B89C68))(this, sb);
	}
	template <typename T = void> T LoadAssetAsync(int32_t assetID, void* CallbackFun, uintptr_t CallBackData, uintptr_t TaskPriority) {
		return ((T (*)(AssetManager*, int32_t, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B8EFB8))(this, assetID, CallbackFun, CallBackData, TaskPriority);
	}
	template <typename T = bool> T IsLoadingAsset(int32_t AssetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B8F3E4))(this, AssetID);
	}
	template <typename T = void> T RemoveCallbackFromReadyTasks(int32_t AssetID, void* CallbackFun) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B8F4F4))(this, AssetID, CallbackFun);
	}
	template <typename T = void> T RemoveCallbackFromDoneTasks(int32_t AssetID, void* CallbackFun) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B8F9F0))(this, AssetID, CallbackFun);
	}
	template <typename T = void> T RemoveCallbackFromWaittingTasks(int32_t AssetID, void* CallbackFun) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B8FC30))(this, AssetID, CallbackFun);
	}
	template <typename T = void> T RemoveCallbackFromCurrentTasks(int32_t AssetID, void* CallbackFun) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B8FE54))(this, AssetID, CallbackFun);
	}
	template <typename T = void> T RemoveAsyncLoadCallback(int32_t AssetID, void* CallbackFun) {
		return ((T (*)(AssetManager*, int32_t, void*))(Il2CppBase() + 0x2B9017C))(this, AssetID, CallbackFun);
	}
	template <typename T = void> T PreloadAssetAsync(int32_t assetID, uintptr_t pri) {
		return ((T (*)(AssetManager*, int32_t, uintptr_t))(Il2CppBase() + 0x2B90378))(this, assetID, pri);
	}
	template <typename T = bool> T IsManyAssetsLoaded(void* assetIDs) {
		return ((T (*)(AssetManager*, void*))(Il2CppBase() + 0x2B904EC))(this, assetIDs);
	}
	template <typename T = void> T LoadManyAssetsAsync(void* assetIDs, void* CallbackFun, uintptr_t CallBackData, uintptr_t TaskPriority) {
		return ((T (*)(AssetManager*, void*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B90914))(this, assetIDs, CallbackFun, CallBackData, TaskPriority);
	}
	template <typename T = void> T LoadManyAssetsAsync_Internal(Il2CppArray<uintptr_t>* assetIDs, void* CallbackFun, uintptr_t CallBackData, uintptr_t TaskPriority) {
		return ((T (*)(AssetManager*, Il2CppArray<uintptr_t>*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B90E68))(this, assetIDs, CallbackFun, CallBackData, TaskPriority);
	}
	template <typename T = uintptr_t> T LoadAssetSync(uintptr_t assetID) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x334EFF8))(this, assetID);
	}
	template <typename T = uintptr_t> T LoadAssetSync_1(int32_t assetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x334F198))(this, assetID);
	}
	template <typename T = uintptr_t> T LoadAssetSyncInternal(int32_t assetId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B912B4))(this, assetId);
	}
	template <typename T = uintptr_t> T DoLoadAssetSync(Il2CppString* assetPath, int32_t gen) {
		return ((T (*)(AssetManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x2B83340))(this, assetPath, gen);
	}
	template <typename T = void> T RegisterNeverGarbageCollectAssetID(int32_t assetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B916BC))(this, assetID);
	}
	template <typename T = void> T UnRegisterNeverGarbageCollectAssetID(int32_t assetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B918B0))(this, assetID);
	}
	template <typename T = bool> T CacheObject(Il2CppString* path, uintptr_t objRes, int32_t loadStartGen) {
		return ((T (*)(AssetManager*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x2B895FC))(this, path, objRes, loadStartGen);
	}
	template <typename T = int32_t> T GetToCacheSlot() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B91BCC))(this);
	}
	template <typename T = void> T EnqueueLRU(Il2CppString* path) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B91A90))(this, path);
	}
	template <typename T = void> T GetDoNotClearAssetIDs(Il2CppArray<uintptr_t>** arr) {
		return ((T (*)(AssetManager*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2B8456C))(this, arr);
	}
	template <typename T = void> T RemoveAllLRU() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B840FC))(this);
	}
	template <typename T = void> T WriteLog(Il2CppString* str) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B91CE8))(this, str);
	}
	template <typename T = void> T WriteError(Il2CppString* str) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B91DB8))(this, str);
	}
	template <typename T = void> T Log(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(AssetManager*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B7F008))(this, msg, paras);
	}
	template <typename T = void> T Error(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(AssetManager*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B80A40))(this, msg, paras);
	}
	template <typename T = uintptr_t> static T InitializeAssetStoreData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B7E1B4))(0);
	}
	template <typename T = bool> static T CombineAssetStoreUIAtlas(uintptr_t rawAssetStore, uintptr_t assetStoreUIAtlas) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B91ED4))(0, rawAssetStore, assetStoreUIAtlas);
	}
	template <typename T = void> T CheckAndAdd(uintptr_t group) {
		return ((T (*)(AssetManager*, uintptr_t))(Il2CppBase() + 0x2B92380))(this, group);
	}
	template <typename T = void> T InitValidatingDict() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7E368))(this);
	}
	template <typename T = void> T ShowErrorMsg(Il2CppString* errorMsg) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B93710))(this, errorMsg);
	}
	template <typename T = bool> T IsAssetIDLegal(int32_t assetID) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B8F2BC))(this, assetID);
	}
	template <typename T = uintptr_t> T FindMetaData(int32_t assetID, bool suppressError) {
		return ((T (*)(AssetManager*, int32_t, bool))(Il2CppBase() + 0x2B84234))(this, assetID, suppressError);
	}
	template <typename T = uintptr_t> T FindMetaDataDirect(int32_t assetID, bool suppressError) {
		return ((T (*)(AssetManager*, int32_t, bool))(Il2CppBase() + 0x2B93980))(this, assetID, suppressError);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAllAssetIds() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B93D78))(this);
	}
	template <typename T = int32_t> T GetAssetId(Il2CppString* assetName) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B6D1E0))(this, assetName);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B94014))(this);
	}
	template <typename T = void> T UnloadAsset(int32_t assetId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B940DC))(this, assetId);
	}
	template <typename T = void> T UnloadAsset_1(Il2CppString* path) {
		return ((T (*)(AssetManager*, Il2CppString*))(Il2CppBase() + 0x2B941D8))(this, path);
	}
	template <typename T = void> static T DestroyPersistentGameObjectImmediately(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B9433C))(0, go);
	}
	template <typename T = void> T UnloadAssetAndPerishAssetRef(int32_t assetId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B94404))(this, assetId);
	}
	template <typename T = void> static T IncGeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B94740))(0);
	}
	template <typename T = int32_t> static T GetCurrentGeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B6E434))(0);
	}
	template <typename T = bool> T get_AllowAsyncLoad() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B7632C))(this);
	}
	template <typename T = int32_t> T get_UnloadUnsedCallCount() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B94848))(this);
	}
	template <typename T = void> T UnloadAssetsFor(int32_t mapId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B94850))(this, mapId);
	}
	template <typename T = void> T GetReadyFor(int32_t mapId) {
		return ((T (*)(AssetManager*, int32_t))(Il2CppBase() + 0x2B94B04))(this, mapId);
	}
	template <typename T = bool> T get_GCSemaphore() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B752B4))(this);
	}
	template <typename T = void> T UpdateGCInterval(int32_t cdnActiveGCInterval, int32_t cdnMinGCInterval) {
		return ((T (*)(AssetManager*, int32_t, int32_t))(Il2CppBase() + 0x2B94D5C))(this, cdnActiveGCInterval, cdnMinGCInterval);
	}
	template <typename T = bool> T CheckGarbageCollect(float deltaTime) {
		return ((T (*)(AssetManager*, float))(Il2CppBase() + 0x2B7EA5C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T DoUnloadAndGC() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B955E0))(this);
	}
	template <typename T = void> T GarbageCollectInternal(float tick) {
		return ((T (*)(AssetManager*, float))(Il2CppBase() + 0x2B956F8))(this, tick);
	}
	template <typename T = bool> T IsIdle(float time, bool lowMemory) {
		return ((T (*)(AssetManager*, float, bool))(Il2CppBase() + 0x2B95C78))(this, time, lowMemory);
	}
	template <typename T = bool> T GarbageCollect(bool force) {
		return ((T (*)(AssetManager*, bool))(Il2CppBase() + 0x2B95090))(this, force);
	}
	template <typename T = bool> T IsRuntimeMemoryDangerous() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B95ECC))(this);
	}
	template <typename T = void> T OnCriticalMemory(bool GC, bool triggeredByOS) {
		return ((T (*)(AssetManager*, bool, bool))(Il2CppBase() + 0x2B95FEC))(this, GC, triggeredByOS);
	}
	template <typename T = bool> T IsMemroyCritical() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B9646C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B965E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetManager*, float))(Il2CppBase() + 0x2B965EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(AssetManager*))(Il2CppBase() + 0x2B965F4))(this);
	}

};

}
