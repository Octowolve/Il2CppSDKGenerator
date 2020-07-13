#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapLoader"));
	}

	template <typename T = int32_t> T& m_TargetMapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_LastMapID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EnteredBattleScene() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_DuringMapSwitch() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& m_CurrentPersistentScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CurrentPersistentRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_MapLoadOp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_DuringMapLoad() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SceneStreamOpList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_CurrentLevelName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, bool>*>*> T& m_SceneObjActiveStates() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& didLoadMatchMapCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_LoadMapOver() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_SceneInfoStart() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pendingStreamingTasks() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isProcessStreamingTask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CheckDSConnectionAndPreload() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_DelayUnloadMapID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PendingShutDownUIScene() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_TimeDelayed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_didCleanOnCriticalMemoryTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& CriticalMemoryDurationThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TempLevelObjects() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetMapIDInEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterScenes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePersistentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMapInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StreamInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StreamInSceneInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStreamingTaskFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStreamingTaskFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StreamOutSceneInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStreamingTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StreamOutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneStreamStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateStreamInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySceneLoadedSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapSwitchFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSceneVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetSceneVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSceneObjActiveStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyQualitySettingsAfterLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyInGameStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadMapOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StandaloneCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDSConnectionAndPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneInfoStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsAllMapLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllMapLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSOCDataPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMatchDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetActiveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUnloadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUnLoadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUnLoadMapAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnLoadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLowMemory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalLoadMapAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalLoadMapSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMapLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMapLoadFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMapLoadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = int32_t> T get_TargetMapID() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BC54))(this);
	}
	template <typename T = void> T SetTargetMapIDInEditor(int32_t val) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4A9BC5C))(this, val);
	}
	template <typename T = int32_t> T get_LastMapID() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BD2C))(this);
	}
	template <typename T = bool> T get_EnteredBattleScene() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BD34))(this);
	}
	template <typename T = Il2CppString*> T get_CurrentPersistentScene() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BD3C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentPersistentRoot() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BD44))(this);
	}
	template <typename T = bool> T get_DuringMapLoad() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BD4C))(this);
	}
	template <typename T = void> T set_DuringMapLoad(bool value) {
		return ((T (*)(MapLoader*, bool))(Il2CppBase() + 0x4A9BE04))(this, value);
	}
	template <typename T = Il2CppString*> T get_CurrentLevelName() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BE0C))(this);
	}
	template <typename T = void> T set_didLoadMatchMapCount(int32_t value) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4A9BE14))(this, value);
	}
	template <typename T = int32_t> T get_didLoadMatchMapCount() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BE1C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9BE24))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T FilterScenes(Il2CppList<Il2CppString*>* inScenes, Il2CppList<bool>* inSteamingFlags) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*, Il2CppList<bool>*))(Il2CppBase() + 0x4A9C254))(0, inScenes, inSteamingFlags);
	}
	template <typename T = void> T UpdatePersistentScene(Il2CppString* scenePath, uintptr_t persistentRoot) {
		return ((T (*)(MapLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A9C754))(this, scenePath, persistentRoot);
	}
	template <typename T = void> T LoadMapInternal(bool async) {
		return ((T (*)(MapLoader*, bool))(Il2CppBase() + 0x4A9C848))(this, async);
	}
	template <typename T = void> T LoadMap(int32_t mapID, bool async) {
		return ((T (*)(MapLoader*, int32_t, bool))(Il2CppBase() + 0x4A9CB64))(this, mapID, async);
	}
	template <typename T = void> T StreamInScene(Il2CppArray<uintptr_t>* scenePathList, uintptr_t streamInMode, bool setActiveSceneOnLoaded) {
		return ((T (*)(MapLoader*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4A9DA38))(this, scenePathList, streamInMode, setActiveSceneOnLoaded);
	}
	template <typename T = void> T StreamInSceneInternal(Il2CppArray<uintptr_t>* scenePathList, uintptr_t streamInMode, bool setActiveSceneOnLoaded) {
		return ((T (*)(MapLoader*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4A9DDEC))(this, scenePathList, streamInMode, setActiveSceneOnLoaded);
	}
	template <typename T = void> T OnStreamingTaskFail(Il2CppString* errorCode) {
		return ((T (*)(MapLoader*, Il2CppString*))(Il2CppBase() + 0x4A9E52C))(this, errorCode);
	}
	template <typename T = void> T OnStreamingTaskFinish() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9E364))(this);
	}
	template <typename T = void> T StreamOutSceneInternal(Il2CppArray<uintptr_t>* scenePathList) {
		return ((T (*)(MapLoader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A9E610))(this, scenePathList);
	}
	template <typename T = void> T ProcessStreamingTask() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9DC58))(this);
	}
	template <typename T = void> T StreamOutScene(Il2CppArray<uintptr_t>* scenePathList) {
		return ((T (*)(MapLoader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A9E778))(this, scenePathList);
	}
	template <typename T = void> T OnSceneStreamStatus(uintptr_t asyncOp, uintptr_t streamParam, bool startOrFinish) {
		return ((T (*)(MapLoader*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4A9E8CC))(this, asyncOp, streamParam, startOrFinish);
	}
	template <typename T = void> T ActivateStreamInScene(Il2CppString* scenePath, bool setActiveSceneOnLoaded, bool setVisible) {
		return ((T (*)(MapLoader*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4A9ED14))(this, scenePath, setActiveSceneOnLoaded, setVisible);
	}
	template <typename T = uintptr_t> T ApplySceneLoadedSettings(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(MapLoader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A9F024))(this, scene, mode);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(MapLoader*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4A9F164))(this, scene, mode, async);
	}
	template <typename T = void> T OnMapSwitchFinished() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9F354))(this);
	}
	template <typename T = void> T SetSceneVisible(Il2CppString* scenePath, bool isVisible) {
		return ((T (*)(MapLoader*, Il2CppString*, bool))(Il2CppBase() + 0x4A9E220))(this, scenePath, isVisible);
	}
	template <typename T = void> T SetSceneVisible_1(uintptr_t scene, bool isVisible) {
		return ((T (*)(MapLoader*, uintptr_t, bool))(Il2CppBase() + 0x4A9F628))(this, scene, isVisible);
	}
	template <typename T = void> T SaveSceneObjActiveStates(uintptr_t scene) {
		return ((T (*)(MapLoader*, uintptr_t))(Il2CppBase() + 0x4A9F920))(this, scene);
	}
	template <typename T = uintptr_t> T ApplyQualitySettingsAfterLoading(uintptr_t scene, uintptr_t mode, int32_t pendingMapID) {
		return ((T (*)(MapLoader*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4A9FB2C))(this, scene, mode, pendingMapID);
	}
	template <typename T = void> T ApplyInGameStreaming(uintptr_t scene) {
		return ((T (*)(MapLoader*, uintptr_t))(Il2CppBase() + 0x4A9FC74))(this, scene);
	}
	template <typename T = void> T CheckLoadMapOver(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(MapLoader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A9FF08))(this, scene, mode);
	}
	template <typename T = uintptr_t> T StandaloneCoroutine() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA0394))(this);
	}
	template <typename T = uintptr_t> T CheckDSConnectionAndPreload() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA04A4))(this);
	}
	template <typename T = void> T OnMapLoadOver() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA05B4))(this);
	}
	template <typename T = void> T OnSceneInfoStart() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA07D8))(this);
	}
	template <typename T = void> T CheckIsAllMapLoadOver() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA06A0))(this);
	}
	template <typename T = void> T OnAllMapLoadOver() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA09B0))(this);
	}
	template <typename T = Il2CppString*> static T GetSOCDataPath(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA1ADC))(0, mapID);
	}
	template <typename T = void> static T PrepareOC(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AA13EC))(0, mapID);
	}
	template <typename T = void> static T CreateMatchDependencies(uintptr_t scene, int32_t mapID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4AA1F54))(0, scene, mapID);
	}
	template <typename T = void> T CheckSetActiveScene(uintptr_t scene) {
		return ((T (*)(MapLoader*, uintptr_t))(Il2CppBase() + 0x4AA2248))(this, scene);
	}
	template <typename T = void> T StartMatch(int32_t mapID) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4AA1680))(this, mapID);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA23B0))(this);
	}
	template <typename T = void> T DelayUnloadMap(int32_t mapID) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4AA10C0))(this, mapID);
	}
	template <typename T = void> T InternalUnLoadMap(int32_t mapID) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4AA11F8))(this, mapID);
	}
	template <typename T = uintptr_t> T InternalUnLoadMapAsync(int32_t mapID) {
		return ((T (*)(MapLoader*, int32_t))(Il2CppBase() + 0x4AA2734))(this, mapID);
	}
	template <typename T = void> T OnUnLoadMap() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA25B8))(this);
	}
	template <typename T = void> T OnLowMemory() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA2854))(this);
	}
	template <typename T = uintptr_t> T InternalLoadMapAsync() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9C944))(this);
	}
	template <typename T = uintptr_t> T InternalLoadMapSync() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4A9CA54))(this);
	}
	template <typename T = void> T HandleMapLoadSuccessed() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA2B10))(this);
	}
	template <typename T = void> T HandleMapLoadFail(Il2CppString* sceneName) {
		return ((T (*)(MapLoader*, Il2CppString*))(Il2CppBase() + 0x4AA2D94))(this, sceneName);
	}
	template <typename T = void> static T HandleMapLoadProgress(uintptr_t asyncOp, int32_t loadedCount, int32_t sceneCount) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4AA3054))(0, asyncOp, loadedCount, sceneCount);
	}
	template <typename T = void> T OnDSLoginSccess() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA3274))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TempLevelObjects() {
		return ((T (*)(MapLoader*))(Il2CppBase() + 0x4AA3614))(this);
	}
	template <typename T = void> T RegisterLevelObject(uintptr_t InObject) {
		return ((T (*)(MapLoader*, uintptr_t))(Il2CppBase() + 0x4AA361C))(this, InObject);
	}
	template <typename T = bool> static T OnSceneStreamStatusm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AA37EC))(0, e);
	}

};

}
