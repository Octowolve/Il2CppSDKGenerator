#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericDownloadMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericDownloadMgr"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uint32_t>*>*> T& _dicGenericDownloadMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uint32_t>*>*> T& _dicModuleNameMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _listGenericDownload() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& loginNeedModuleName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _lobbyAutoDownloadList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<Il2CppString*>*>*> T& _dicSceneTriggerInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& _dicQuestIDAndModuleName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isNetChangeShowTips() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _dicModuleDownloadState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _dicAssetDownloadState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _dicModuleDwonloadInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _dicAssetDwonloadInfo() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ZERO_PROGRSS() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& lastDownloaded() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<int32_t, uint32_t>*> T& _dicQuestAndWholeSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<int32_t, bool>*> T& _dicQuestDownloaded() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, bool>*> T& _dicAssetDownloaded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<int32_t>*> T& _allQuestIDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& _waitHeap() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _dicQuestPriority() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _dicModuleKeyPriority() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _dicTriggerPriority() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& MAX_DOWNLOAD_COUNT() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _curDownloadQuest() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _curWaitList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _curAssetQuest() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _assetDownloadWaitList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _curDownloadAssetTaskID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _curDownloadAssetID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> static T& progressFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint64_t> static T& BYTES_MBYTES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& BYTES_LIMITATION() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _loadoutAutoDownloadMode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& lastPVPLoadoutResDownloadSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _simulateNetwork() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMapDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSceneTrigerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLobbyTrigerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModuleResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleResState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMapInDownloadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportDynamicDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDownloadCompOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapIsDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChecAssetIsDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAssetsIsInDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAssetResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponAndAttachResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAssetsResIsOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMapResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllMapResOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDownloadedByQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckQuestDownloadedByQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckQuestIsDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleKeyByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginNeedModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModuleNameByQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadProgressByAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuestTotalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuestIDByModuleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetISInWaitQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetISInWaitQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVideoReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetsISInWaitQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadLevelByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadByQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLobbyDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoadoutDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndStartPVPLoadoutDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLoadoutAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSingleLoadoutAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertPVPQuestAfterLoadoutDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerSceneDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerPriorityDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ISLobbyResDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ISPvpLoadoutResAllDownloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadByMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadByQuestID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadByAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearModuleResStateCach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWaitDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportLitePackageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndReportGenericDownloadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportGenericDownloadInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelCurDownloadAssetListAndCheckNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetAttachedAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelCurDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNextDownloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDiskEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllModuleDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAndClearAllAssetDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateQuestStateWhenStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadoutAutoDownloadMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPLoadoutResDownloadtState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPLoadoutResDownloadSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPLoadoutProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutAutoDownloadMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLitePackageDownloadNetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLitePackageDownloadNetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IModuleDownloadCallBack_OnModuleDownProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IModuleDownloadCallBack_OnModuleDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IAssetDownloadCallBack_OnAssetDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IAssetDownloadCallBack_OnAssetDownProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IAssetListDownloadCallBack_OnAssetListDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IAssetListDownloadCallBack_OnAssetListDownProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}

	template <typename T = uintptr_t> static T Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x445B398))(0);
	}
	template <typename T = bool> T get_PopWindowInCellularNetwork() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445BB6C))(this);
	}
	template <typename T = void> T set_PopWindowInCellularNetwork(bool value) {
		return ((T (*)(GenericDownloadMgr*, bool))(Il2CppBase() + 0x445BC48))(this, value);
	}
	template <typename T = void> T InitMapDic() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445B578))(this);
	}
	template <typename T = void> T InitSceneTrigerInfo(uintptr_t gf) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x445BED4))(this, gf);
	}
	template <typename T = void> T InitLobbyTrigerInfo(uintptr_t gf, bool isModuleOK) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t, bool))(Il2CppBase() + 0x445C144))(this, gf, isModuleOK);
	}
	template <typename T = void> T InitGameMapInfo(uintptr_t gf) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x445C29C))(this, gf);
	}
	template <typename T = bool> T CheckModuleResOK(Il2CppString* moduleName, int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, int32_t))(Il2CppBase() + 0x445BD38))(this, moduleName, questID);
	}
	template <typename T = uintptr_t> T GetModuleResState(Il2CppString* moduleName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x445C744))(this, moduleName);
	}
	template <typename T = bool> T IsMapInDownloadList(uint32_t octMapId) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445C88C))(this, octMapId);
	}
	template <typename T = bool> T IsSupportDynamicDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445CA44))(this);
	}
	template <typename T = bool> T IsDownloadCompOK() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445CB1C))(this);
	}
	template <typename T = bool> T CheckMapIsDownloading(uint32_t octMapId) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445CC28))(this, octMapId);
	}
	template <typename T = bool> T ChecAssetIsDownloading(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445D0B0))(this, assetID);
	}
	template <typename T = bool> T CheckAssetsIsInDownloading(Il2CppList<int32_t>* ids) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x445D208))(this, ids);
	}
	template <typename T = bool> T CheckAssetResOK(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445D3F8))(this, assetID);
	}
	template <typename T = bool> T CheckWeaponAndAttachResOK(int32_t itemID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445D5D4))(this, itemID);
	}
	template <typename T = bool> T CheckItemResOK(uint32_t itemID) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445DB74))(this, itemID);
	}
	template <typename T = bool> T CheckAssetsResIsOK(Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x445D9D0))(this, assetIDs);
	}
	template <typename T = bool> T CheckMapResOK(uint32_t octMapID) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445E184))(this, octMapID);
	}
	template <typename T = bool> T CheckAllMapResOK(Il2CppList<uint32_t>* octMapIDS) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x445E340))(this, octMapIDS);
	}
	template <typename T = bool> T CheckDownloadedByQuestID(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445E4AC))(this, questID);
	}
	template <typename T = bool> T CheckQuestDownloadedByQuestID(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445E82C))(this, questID);
	}
	template <typename T = bool> T CheckQuestIsDownloading(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445E9B4))(this, questID);
	}
	template <typename T = int32_t> T GetQuestID(uint32_t octMapID) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445EB74))(this, octMapID);
	}
	template <typename T = Il2CppString*> T GetModuleKeyByMapID(uint32_t octMapID) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x445CD90))(this, octMapID);
	}
	template <typename T = Il2CppString*> T GetLoginNeedModuleName() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445EE48))(this);
	}
	template <typename T = Il2CppString*> T GetModuleNameByQuestID(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445E6A8))(this, questID);
	}
	template <typename T = uintptr_t> T GetDownloadProgress(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445EF18))(this, questID);
	}
	template <typename T = uintptr_t> T GetDownloadProgressByAssetID(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445F0C8))(this, assetID);
	}
	template <typename T = uintptr_t> T GetLastDownloadProgress() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x445F218))(this);
	}
	template <typename T = float> T GetQuestTotalSize(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445F2F0))(this, questID);
	}
	template <typename T = int32_t> T GetQuestIDByModuleName(Il2CppString* moduleName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x445F460))(this, moduleName);
	}
	template <typename T = bool> T GetISInWaitQueue(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445F720))(this, questID);
	}
	template <typename T = bool> T GetAssetISInWaitQueue(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445F858))(this, assetID);
	}
	template <typename T = bool> T CheckVideoReady(Il2CppString* videoName, uintptr_t* dynamicVideoName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x445FA74))(this, videoName, dynamicVideoName);
	}
	template <typename T = bool> T GetAssetsISInWaitQueue(Il2CppList<int32_t>* assetIDs) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x445FBA4))(this, assetIDs);
	}
	template <typename T = void> T BeginDownloadModule(Il2CppString* moduleName, uintptr_t quality) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4460000))(this, moduleName, quality);
	}
	template <typename T = void> T BeginDownloadLevelByMapID(uint32_t octMapID, uintptr_t quality) {
		return ((T (*)(GenericDownloadMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x44608F8))(this, octMapID, quality);
	}
	template <typename T = void> T BeginDownloadLevel(Il2CppString* level, uintptr_t quality) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4460C4C))(this, level, quality);
	}
	template <typename T = void> T BeginDownloadByQuestID(int32_t questID, bool isCancelAllDownload) {
		return ((T (*)(GenericDownloadMgr*, int32_t, bool))(Il2CppBase() + 0x4460D98))(this, questID, isCancelAllDownload);
	}
	template <typename T = void> T BeginDownloadAssetId(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x4460FF4))(this, assetID);
	}
	template <typename T = void> T BeginDownloadAssetList(Il2CppList<int32_t>* downloadList, int32_t style) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*, int32_t))(Il2CppBase() + 0x4461998))(this, downloadList, style);
	}
	template <typename T = void> T StartLobbyDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4461E94))(this);
	}
	template <typename T = void> T StartLoadoutDownload(Il2CppList<uintptr_t>* listAssetQuest) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44626C4))(this, listAssetQuest);
	}
	template <typename T = bool> T CheckAndStartPVPLoadoutDownload(bool isIgnoreNetAndMode) {
		return ((T (*)(GenericDownloadMgr*, bool))(Il2CppBase() + 0x4462470))(this, isIgnoreNetAndMode);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAllLoadoutAssets() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4462CA0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetSingleLoadoutAssets(uintptr_t squadData) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x4462EB8))(this, squadData);
	}
	template <typename T = void> T InsertPVPQuestAfterLoadoutDownload(Il2CppList<int32_t>* questIDS) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x44637B4))(this, questIDS);
	}
	template <typename T = void> T TriggerSceneDownload(uintptr_t trigger) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x4463A8C))(this, trigger);
	}
	template <typename T = void> T TriggerPriorityDownload(uintptr_t trigger) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x4463C84))(this, trigger);
	}
	template <typename T = bool> T ISLobbyResDownloading() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44640F8))(this);
	}
	template <typename T = bool> T ISPvpLoadoutResAllDownloaded() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44642A0))(this);
	}
	template <typename T = void> T CancelDownloadByMapID(uint32_t octMapID) {
		return ((T (*)(GenericDownloadMgr*, uint32_t))(Il2CppBase() + 0x44648CC))(this, octMapID);
	}
	template <typename T = void> T CancelDownload(Il2CppString* moduleName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x4463F30))(this, moduleName);
	}
	template <typename T = void> T CancelDownloadByQuestID(int32_t questID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x4464BCC))(this, questID);
	}
	template <typename T = void> T CancelDownloadByAssetID(int32_t assetID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x4464CB8))(this, assetID);
	}
	template <typename T = void> T ClearModuleResStateCach() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4464F18))(this);
	}
	template <typename T = void> T CheckWaitDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44649B8))(this);
	}
	template <typename T = void> T CancelAllDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4460F18))(this);
	}
	template <typename T = void> T ReportLitePackageInfo() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4465048))(this);
	}
	template <typename T = void> T CheckAndReportGenericDownloadInfo(Il2CppString* moduleName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x4465154))(this, moduleName);
	}
	template <typename T = void> T ReportGenericDownloadInfo(Il2CppString* moduleName) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*))(Il2CppBase() + 0x4465234))(this, moduleName);
	}
	template <typename T = void> T CancelDownloadAssetList(Il2CppList<int32_t>* cancelList) {
		return ((T (*)(GenericDownloadMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x4465560))(this, cancelList);
	}
	template <typename T = void> T CancelCurDownloadAssetListAndCheckNext() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44618BC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAssetAttachedAssetList(int32_t itemID) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x445D730))(this, itemID);
	}
	template <typename T = void> T CancelCurDownloadAssetList() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4461544))(this);
	}
	template <typename T = void> T CheckNextDownloadAssetList() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44629B8))(this);
	}
	template <typename T = bool> T CheckDiskEnough(bool showTips) {
		return ((T (*)(GenericDownloadMgr*, bool))(Il2CppBase() + 0x4460A2C))(this, showTips);
	}
	template <typename T = void> T CancelAllModuleDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x446139C))(this);
	}
	template <typename T = void> T CancelAndClearAllAssetDownload() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x44627EC))(this);
	}
	template <typename T = void> T UpdateQuestStateWhenStart(Il2CppString* moduleName, uintptr_t moduleState) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4460710))(this, moduleName, moduleState);
	}
	template <typename T = void> T SetLoadoutAutoDownloadMode(int32_t mode) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x44658A8))(this, mode);
	}
	template <typename T = bool> T GetPVPLoadoutResDownloadtState() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4465980))(this);
	}
	template <typename T = float> T GetPVPLoadoutResDownloadSize() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4465A70))(this);
	}
	template <typename T = uintptr_t> T GetPVPLoadoutProgress() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4465CC0))(this);
	}
	template <typename T = int32_t> T GetLoadoutAutoDownloadMode() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4462BB8))(this);
	}
	template <typename T = void> T SetLitePackageDownloadNetState(int32_t netWorkType) {
		return ((T (*)(GenericDownloadMgr*, int32_t))(Il2CppBase() + 0x4465E54))(this, netWorkType);
	}
	template <typename T = uintptr_t> T GetLitePackageDownloadNetState() {
		return ((T (*)(GenericDownloadMgr*))(Il2CppBase() + 0x4462360))(this);
	}
	template <typename T = void> T IModuleDownloadCallBack_OnModuleDownProgress(Il2CppString* moduleName, uintptr_t resQuality, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x4465F2C))(this, moduleName, resQuality, nowSize, totalSize);
	}
	template <typename T = void> T IModuleDownloadCallBack_OnModuleDownResult(Il2CppString* moduleName, uintptr_t resQuality, uintptr_t moduleState) {
		return ((T (*)(GenericDownloadMgr*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44662F0))(this, moduleName, resQuality, moduleState);
	}
	template <typename T = void> T IAssetDownloadCallBack_OnAssetDownResult(int32_t assetID, bool success) {
		return ((T (*)(GenericDownloadMgr*, int32_t, bool))(Il2CppBase() + 0x44667C4))(this, assetID, success);
	}
	template <typename T = void> T IAssetDownloadCallBack_OnAssetDownProgress(int32_t assetID, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(GenericDownloadMgr*, int32_t, uint32_t, uint32_t))(Il2CppBase() + 0x4466C00))(this, assetID, nowSize, totalSize);
	}
	template <typename T = void> T IAssetListDownloadCallBack_OnAssetListDownResult(uint32_t taskId, Il2CppList<int32_t>* assetIDs, bool success) {
		return ((T (*)(GenericDownloadMgr*, uint32_t, Il2CppList<int32_t>*, bool))(Il2CppBase() + 0x4466E00))(this, taskId, assetIDs, success);
	}
	template <typename T = void> T IAssetListDownloadCallBack_OnAssetListDownProgress(uint32_t taskId, Il2CppList<int32_t>* assetIDs, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(GenericDownloadMgr*, uint32_t, Il2CppList<int32_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x4467290))(this, taskId, assetIDs, nowSize, totalSize);
	}
	template <typename T = bool> T BeginDownloadAssetIdm__0(uintptr_t x) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x4467588))(this, x);
	}
	template <typename T = bool> T BeginDownloadAssetListm__1(uintptr_t x) {
		return ((T (*)(GenericDownloadMgr*, uintptr_t))(Il2CppBase() + 0x4467670))(this, x);
	}

};

}
