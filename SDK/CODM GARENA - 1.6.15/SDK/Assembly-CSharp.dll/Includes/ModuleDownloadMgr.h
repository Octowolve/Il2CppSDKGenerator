#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModuleDownloadMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModuleDownloadMgr"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_cacheModuleInfos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_curCacheModule() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ModuleNotExist() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_pufferResManager() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_cacheFileProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_taskID2FileProcess() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_calcProgressPerFile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& m_readyFileDic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_lastDownloadUpdateTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& pufferTaskCompletionDelegate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& pufferTaskDownloadingDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& pufferInitCompetionDelegate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& tempTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& processCallBack() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& _moduleName2CacheKeyNormal() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& _moduleName2CacheKeyMid() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& _moduleName2CacheKeyLow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& successFileCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& errorFileCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& curSpeedLimit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _errorCodeSet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& markErrorCodeCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& interAssetDownloadCallBack() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& _assetId2ModuleName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _needRemoveTaskId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& AssetListProcessDic() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_silentDownloadCallBacks() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_removeCacheDownloadCallBacks() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_canAutoStartSilentDownload() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_isSilentDownloading() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& m_canStartAfterStop() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = int32_t> T& m_curStopFrameCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> static T& m_stopWaitCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_silentFileIdList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& m_silentFilePath() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& nowReadySize() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& totalDownSize() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& isSilentDownError() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& taskID2FileProcess() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& isProcessingCallBack() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleCacheKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleDownloadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleDownloadInfoQuick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilePathInPufferIfs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadOneModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAllModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFileReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OneFileReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OneFileUnReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOneFileReadyInCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDownloaderInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReportDownloadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeErrorCodeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckModuleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetIDModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetIdModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovAssetIdeModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CheckModuleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAssetListCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetListReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetListModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCacheModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetListModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovAssetListModuleDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDynamicAudioReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAudioModuleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSilentDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSilentDownloadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UninitSilentDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndStartSilentDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSilentDowanloadInter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSilentDownloadInter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSilentDownloadService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSilentDownloadService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSilentDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSilentDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSilentDownloadCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSilentDownloadReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSilentDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330D690))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330D840))(this);
	}
	template <typename T = void> T StartSystem() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330DB88))(this);
	}
	template <typename T = void> T SetDownloadSpeed(uint64_t speed) {
		return ((T (*)(ModuleDownloadMgr*, uint64_t))(Il2CppBase() + 0x330DEAC))(this, speed);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330D914))(this);
	}
	template <typename T = void> T StopSystem() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330DDD0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ModuleDownloadMgr*, float))(Il2CppBase() + 0x330E548))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetModuleCacheKey(Il2CppString* moduleName, uintptr_t resQuality) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x330F0E8))(this, moduleName, resQuality);
	}
	template <typename T = void> T CheckModuleDownloadInfo(uintptr_t moduleInfo) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x330F2F4))(this, moduleInfo);
	}
	template <typename T = void> T CheckModuleDownloadInfoQuick(uintptr_t moduleInfo) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x330FA08))(this, moduleInfo);
	}
	template <typename T = Il2CppString*> T FilePathInPufferIfs(Il2CppString* filePath) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x330FC74))(this, filePath);
	}
	template <typename T = uintptr_t> T CheckModuleInfo(Il2CppString* moduleName, uintptr_t resQuality) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x330FE3C))(this, moduleName, resQuality);
	}
	template <typename T = uintptr_t> T CheckModuleState(Il2CppString* moduleName, uintptr_t readyDownSize, uintptr_t totalDownSize, uintptr_t resQuality) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x331060C))(this, moduleName, readyDownSize, totalDownSize, resQuality);
	}
	template <typename T = Il2CppString*> T GetLevelModuleName(Il2CppString* levelName) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x3310748))(this, levelName);
	}
	template <typename T = void> T AddModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3310890))(this, moduleInfo, callback);
	}
	template <typename T = void> T RemoveModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33109FC))(this, moduleInfo, callback);
	}
	template <typename T = void> T DownloadModule(uintptr_t moduleInfo) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x3310B68))(this, moduleInfo);
	}
	template <typename T = uintptr_t> T StartDownloadModule(Il2CppString* moduleName, uintptr_t callback, uintptr_t resQuality) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33114CC))(this, moduleName, callback, resQuality);
	}
	template <typename T = void> T StopDownloadOneModule(uintptr_t moduleInfo) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x3311830))(this, moduleInfo);
	}
	template <typename T = void> T StopDownloadModule(Il2CppString* moduleName, uintptr_t callback, uintptr_t resQuality) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3311D98))(this, moduleName, callback, resQuality);
	}
	template <typename T = void> T StopDownloadAllModule() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330DFBC))(this);
	}
	template <typename T = bool> T IsFileReady(Il2CppString* filePath) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x3311F34))(this, filePath);
	}
	template <typename T = void> T OneFileReady(uint32_t fileId) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t))(Il2CppBase() + 0x330F710))(this, fileId);
	}
	template <typename T = void> T OneFileUnReady(uint32_t fileId) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t))(Il2CppBase() + 0x330F88C))(this, fileId);
	}
	template <typename T = bool> T IsOneFileReadyInCache(uint32_t fileId) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t))(Il2CppBase() + 0x331208C))(this, fileId);
	}
	template <typename T = void> T PufferDownloaderInitCallback(bool success, uint32_t errorCode) {
		return ((T (*)(ModuleDownloadMgr*, bool, uint32_t))(Il2CppBase() + 0x33121D4))(this, success, errorCode);
	}
	template <typename T = void> T DoReportDownloadInfo() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330E204))(this);
	}
	template <typename T = Il2CppString*> static T MakeErrorCodeString(void* errorCodeSet) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3312690))(0, errorCodeSet);
	}
	template <typename T = void> T AddErrorCode(uint32_t errorCode) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t))(Il2CppBase() + 0x331296C))(this, errorCode);
	}
	template <typename T = void> T OnDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(ModuleDownloadMgr*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x3312AF0))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(ModuleDownloadMgr*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x3313130))(this, taskId, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T CheckModuleInfo_1(int32_t assetId, bool quick) {
		return ((T (*)(ModuleDownloadMgr*, int32_t, bool))(Il2CppBase() + 0x3313444))(this, assetId, quick);
	}
	template <typename T = bool> T IsAssetReady(int32_t assetID) {
		return ((T (*)(ModuleDownloadMgr*, int32_t))(Il2CppBase() + 0x3313DBC))(this, assetID);
	}
	template <typename T = bool> T StartDownloadAsset(int32_t assetID, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, int32_t, uintptr_t))(Il2CppBase() + 0x3313F8C))(this, assetID, callback);
	}
	template <typename T = Il2CppString*> T GetAssetIDModuleName(int32_t assetID) {
		return ((T (*)(ModuleDownloadMgr*, int32_t))(Il2CppBase() + 0x3313A28))(this, assetID);
	}
	template <typename T = void> T StopDownloadAsset(int32_t assetID, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, int32_t, uintptr_t))(Il2CppBase() + 0x33144C0))(this, assetID, callback);
	}
	template <typename T = void> T AddAssetIdModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3314354))(this, moduleInfo, callback);
	}
	template <typename T = void> T RemovAssetIdeModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3314680))(this, moduleInfo, callback);
	}
	template <typename T = uintptr_t> T CheckModuleInfo_2(uint32_t taskId, Il2CppList<int32_t>* assetList, bool quick) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t, Il2CppList<int32_t>*, bool))(Il2CppBase() + 0x33147EC))(this, taskId, assetList, quick);
	}
	template <typename T = void> T TickAssetListCallBack() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330EB90))(this);
	}
	template <typename T = bool> T IsAssetListReady(Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x331522C))(this, assetIDs);
	}
	template <typename T = uint32_t> T StartDownloadAssetList(uint32_t taskId, Il2CppList<int32_t>* assetIDs, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t, Il2CppList<int32_t>*, uintptr_t))(Il2CppBase() + 0x33153E4))(this, taskId, assetIDs, callback);
	}
	template <typename T = void> T StopDownloadAssetList(uint32_t taskId, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x3315948))(this, taskId, callback);
	}
	template <typename T = Il2CppString*> T GetAssetListModuleName(uint32_t taskId) {
		return ((T (*)(ModuleDownloadMgr*, uint32_t))(Il2CppBase() + 0x3314CA0))(this, taskId);
	}
	template <typename T = void> T RemoveCacheModule(Il2CppString* cacheKey) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x3315CA8))(this, cacheKey);
	}
	template <typename T = void> T AddAssetListModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33157DC))(this, moduleInfo, callback);
	}
	template <typename T = void> T RemovAssetListModuleDownloadCallBack(uintptr_t moduleInfo, uintptr_t callback) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3315B3C))(this, moduleInfo, callback);
	}
	template <typename T = bool> T IsDynamicAudioReady(Il2CppString* audioName) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x3315DF0))(this, audioName);
	}
	template <typename T = uintptr_t> T CheckAudioModuleInfo(Il2CppString* audioName, bool quick) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppString*, bool))(Il2CppBase() + 0x3315F70))(this, audioName, quick);
	}
	template <typename T = void> T InitSilentDownload() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x33122D4))(this);
	}
	template <typename T = void> T AddSilentDownloadList(Il2CppList<Il2CppString*>* fileList) {
		return ((T (*)(ModuleDownloadMgr*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x33165A8))(this, fileList);
	}
	template <typename T = void> T UninitSilentDownload() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330E410))(this);
	}
	template <typename T = void> T CheckAndStartSilentDownload() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x330EF68))(this);
	}
	template <typename T = void> T StartSilentDowanloadInter() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x33168B4))(this);
	}
	template <typename T = void> T StopSilentDownloadInter() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x3311748))(this);
	}
	template <typename T = void> T StartSilentDownloadService() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x33174A4))(this);
	}
	template <typename T = void> T StopSilentDownloadService() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x33167D8))(this);
	}
	template <typename T = void> T ProcessSilentDownloadCallBack() {
		return ((T (*)(ModuleDownloadMgr*))(Il2CppBase() + 0x3316B90))(this);
	}
	template <typename T = void> T AddSilentDownloadCallBack(uintptr_t silentDownloadCallBack) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x3317700))(this, silentDownloadCallBack);
	}
	template <typename T = void> T RemoveSilentDownloadCallBack(uintptr_t silentDownloadCallBack) {
		return ((T (*)(ModuleDownloadMgr*, uintptr_t))(Il2CppBase() + 0x3317578))(this, silentDownloadCallBack);
	}
	template <typename T = void> T OnSilentDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(ModuleDownloadMgr*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x3312E10))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnSilentDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(ModuleDownloadMgr*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x33132D0))(this, taskId, nowSize, totalSize);
	}

};

}
