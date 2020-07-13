#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledSceneStreamer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledSceneStreamer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& streamingLayers() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& enableEditorFoliagePreview() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& unloadSkyOnlyHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& unloadSkyOnlyHeightLow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& hismInstanceDataValueRange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& currentUnloadSkyOnlyHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& maxStreamingCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& currentStreamingCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& currentSycLoadCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& lastCameraPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& justTeleported() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& frustumPlanes() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& vehicleStreamingOptimize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& vehicleOption() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& currentStreamingPolicy() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& checkUnloadSkyOnly() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> static T& switchToDefaultStreamingPolicyHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& lastPhysicsState() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& forceTick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& checkLanded() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = float> static T& distToGroundForLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& oldNearClipPlane() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& oldLODBias() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& oldSOC() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pendingAsyncLoadScenes() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& sceneAssetRefCounter() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SceneLayerLoadCallbacks() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_SOCMgr() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& disableStreamIn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& disableStreamOut() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& checkPreLoad() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& forceSyncLoad() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& asyncLoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSceneLayerCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterSceneLayerCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableEditorFoliagePreview() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPreload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetForceTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAirPlaneStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreStartAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnloadSkyOnlyLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLanded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkySOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertSkySOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkyLODBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertSkyLODBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkyNearClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertSkyNearClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchStreamingPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleStreamingLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllStreamingLayersActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPendingAsyncLoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePendingAsyncLoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPendingAsyncLoadScenes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPendingAsyncLoadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePendingAsyncLoadSceneState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSceneStreamingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateSceneStreamingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSyncLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSkyOnlyLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadAllLayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnloadLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadSceneAsyncFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleVehicleStreamingPolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VisibilityTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = uintptr_t> T get_StreamerType() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x4659C60))(this);
	}
	template <typename T = bool> T get_IsLoadingScene() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x4659C68))(this);
	}
	template <typename T = bool> T get_VehicleStreamingOptimize() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x4659C90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x4659C98))(this);
	}
	template <typename T = void> T RegisterSceneLayerCallback(uintptr_t layer, uintptr_t callback) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x465A2A4))(this, layer, callback);
	}
	template <typename T = void> T UnregisterSceneLayerCallback(uintptr_t layer) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465A3DC))(this, layer);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465A4DC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465A6A4))(this);
	}
	template <typename T = bool> T EnableEditorFoliagePreview() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465A89C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465A994))(this);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465AA5C))(this);
	}
	template <typename T = void> T CheckPreload() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465AB3C))(this);
	}
	template <typename T = void> T SetForceTick() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465AEC4))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(TiledSceneStreamer*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x465AF98))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = void> T OnAirPlaneStateChanged(bool isOnPlane) {
		return ((T (*)(TiledSceneStreamer*, bool))(Il2CppBase() + 0x465C838))(this, isOnPlane);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t oldState, uintptr_t newState, Il2CppVector3 cameraPos) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x465CB38))(this, oldState, newState, cameraPos);
	}
	template <typename T = void> T OnPreStartAircraft() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465CC64))(this);
	}
	template <typename T = void> T OnSwitchToPlane() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465CA5C))(this);
	}
	template <typename T = void> T OnUnloadSkyOnlyLayer() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465BC68))(this);
	}
	template <typename T = void> T OnLanded(Il2CppVector3 cameraPos, float distanceToGround) {
		return ((T (*)(TiledSceneStreamer*, Il2CppVector3, float))(Il2CppBase() + 0x465B904))(this, cameraPos, distanceToGround);
	}
	template <typename T = void> T SetSkySOC() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465CD98))(this);
	}
	template <typename T = void> T RevertSkySOC() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465D434))(this);
	}
	template <typename T = void> T SetSkyLODBias() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465D098))(this);
	}
	template <typename T = void> T RevertSkyLODBias() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465D348))(this);
	}
	template <typename T = void> T SetSkyNearClipPlane() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465CEB4))(this);
	}
	template <typename T = void> T RevertSkyNearClipPlane() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465D184))(this);
	}
	template <typename T = void> T SwitchStreamingPolicy(uintptr_t policy, bool forceUnload) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, bool))(Il2CppBase() + 0x4659FF4))(this, policy, forceUnload);
	}
	template <typename T = void> T ToggleStreamingLayer(uintptr_t layerType) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465D858))(this, layerType);
	}
	template <typename T = void> T SetAllStreamingLayersActive(bool active) {
		return ((T (*)(TiledSceneStreamer*, bool))(Il2CppBase() + 0x465D9B0))(this, active);
	}
	template <typename T = void> T AddPendingAsyncLoadScene(uintptr_t sceneLOD) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465DAE0))(this, sceneLOD);
	}
	template <typename T = void> T RemovePendingAsyncLoadScene(uintptr_t sceneLOD) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465DC48))(this, sceneLOD);
	}
	template <typename T = void> T ClearPendingAsyncLoadScenes() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465D754))(this);
	}
	template <typename T = void> T TickPendingAsyncLoadScene(Il2CppVector3 cameraPos) {
		return ((T (*)(TiledSceneStreamer*, Il2CppVector3))(Il2CppBase() + 0x465C3DC))(this, cameraPos);
	}
	template <typename T = void> T UpdatePendingAsyncLoadSceneState() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465E1B8))(this);
	}
	template <typename T = void> T TickLayer(uintptr_t layer, Il2CppVector3 cameraPos) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x465BD3C))(this, layer, cameraPos);
	}
	template <typename T = void> T UpdateSceneStreamingState(uintptr_t sceneStreaming) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465E334))(this, sceneStreaming);
	}
	template <typename T = void> T UpdateSceneStreamingState_1(uintptr_t sceneStreaming, uintptr_t layerType, Il2CppVector3 cameraPos, Il2CppArray<uintptr_t>* lodDistances, bool checkCoolDown, uintptr_t localOrViewTargetPawn) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppArray<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x465E4B8))(this, sceneStreaming, layerType, cameraPos, lodDistances, checkCoolDown, localOrViewTargetPawn);
	}
	template <typename T = bool> T CanSyncLoad(uintptr_t layerType) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465ED18))(this, layerType);
	}
	template <typename T = bool> T UnloadSkyOnlyLayer() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465BB04))(this);
	}
	template <typename T = void> T UnloadAllLayers() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465F1C8))(this);
	}
	template <typename T = void> T UnloadLayer(uintptr_t sceneLayer) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465F2DC))(this, sceneLayer);
	}
	template <typename T = bool> T UnloadLayer_1(uintptr_t layer) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465D538))(this, layer);
	}
	template <typename T = bool> T UnloadSceneAsync(uintptr_t sceneLOD, bool forceUnload) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, bool))(Il2CppBase() + 0x465EFFC))(this, sceneLOD, forceUnload);
	}
	template <typename T = bool> T LoadSceneAsync(uintptr_t sceneLOD, bool forceLoad) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, bool))(Il2CppBase() + 0x465DD90))(this, sceneLOD, forceLoad);
	}
	template <typename T = void> T OnLoadSceneAsyncFailed(uintptr_t sceneLOD) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465F440))(this, sceneLOD);
	}
	template <typename T = bool> T LoadSceneSync(uintptr_t sceneLOD, bool forceLoad) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, bool))(Il2CppBase() + 0x465EE08))(this, sceneLOD, forceLoad);
	}
	template <typename T = void> T ToggleVehicleStreamingPolicy() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465F54C))(this);
	}
	template <typename T = bool> T VisibilityTest(uintptr_t sceneStreaming, Il2CppVector3 cameraPos, float visibleDistance, uintptr_t localOrViewTargetPawn) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x465E98C))(this, sceneStreaming, cameraPos, visibleDistance, localOrViewTargetPawn);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x465F624))(this, scene, mode, async);
	}
	template <typename T = void> T OnSceneUnloaded(uintptr_t scene) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t))(Il2CppBase() + 0x465F9F0))(this, scene);
	}
	template <typename T = int32_t> static T TickPendingAsyncLoadScenem__0(uintptr_t e1, uintptr_t e2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x465FDC8))(0, e1, e2);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465FE90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465FE98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465FEA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDSLoginSuccess() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465FEA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickStreaming(float P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, uintptr_t P4) {
		return ((T (*)(TiledSceneStreamer*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x465FEB0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_OnAirPlaneStateChanged(bool P0) {
		return ((T (*)(TiledSceneStreamer*, bool))(Il2CppBase() + 0x465FEFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysicsStateChanged(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(TiledSceneStreamer*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x465FF04))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnPreStartAircraft() {
		return ((T (*)(TiledSceneStreamer*))(Il2CppBase() + 0x465FF30))(this);
	}

};

}
