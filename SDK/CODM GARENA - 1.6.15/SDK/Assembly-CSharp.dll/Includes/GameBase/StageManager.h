#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class StageManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "StageManager"));
	}

	template <typename T = int32_t> T& m_ReconnectTimes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurrentStage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Stages() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CurrentLoadMapID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_CurrentLoadMapName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PENDING_LOADMAPID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_PendingLoadMapID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_LastLoadMapID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CurrentLoadStageData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mLoadingScreenActive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mCurShowMapID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& GC_DEBUG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& STOP_LOADING_DEBUG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> T& IsDuringLogout_DS() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsDuringLogout_Lobby() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> static T& isQuitting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = uintptr_t> T& LoadingFlowControllerManager() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& curState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_HasEverLoginSucc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStageEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneHandleEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStageActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentStageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadingScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPendingLoadMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoadMapData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneByLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSceneSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareAtlasForPendingMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpShaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMap_Impl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMapGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMapIdForLoadingFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadingMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInitWorldGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadForReConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoWinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoSeasonSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogoutDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveDSLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReturnToFrondEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnToFrondEndInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnToLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveLobbyLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubLevelRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuitApplication() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAllCameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoadingFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowsStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopupWhenNetworkFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackToFrontEndMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUserLoginedSuccessfully() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FrontEndGoToState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFrontEndReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEverLoginToFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrontEndReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LeaveFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadingFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInMatching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HardAndUglyCodeForClearSOC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A359C))(this);
	}
	template <typename T = void> T OnStageEvent(uintptr_t Msg) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A3AF0))(this, Msg);
	}
	template <typename T = void> T OnZoneHandleEvent(uintptr_t Msg) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A3C10))(this, Msg);
	}
	template <typename T = int32_t> T get_CurrentLoadMapId() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D30))(this);
	}
	template <typename T = void> T set_CurrentLoadMapId(int32_t value) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A3D38))(this, value);
	}
	template <typename T = Il2CppString*> T get_CurrentLoadMapName() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D40))(this);
	}
	template <typename T = void> T set_CurrentLoadMapName(Il2CppString* value) {
		return ((T (*)(StageManager*, Il2CppString*))(Il2CppBase() + 0x30A3D48))(this, value);
	}
	template <typename T = int32_t> T get_PendingLoadMapID() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D50))(this);
	}
	template <typename T = int32_t> T get_LastLoadMapID() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D58))(this);
	}
	template <typename T = bool> T get_IsLoadingScene() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D60))(this);
	}
	template <typename T = uintptr_t> T get_CurrentLoadStageData() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D74))(this);
	}
	template <typename T = void> T set_CurrentLoadStageData(uintptr_t value) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A3D7C))(this, value);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3D84))(this);
	}
	template <typename T = void> T SetStageActive(int32_t inStageType) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A3120))(this, inStageType);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(StageManager*, bool))(Il2CppBase() + 0x30A3E6C))(this, paused);
	}
	template <typename T = int32_t> T GetCurrentStageType() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A3F60))(this);
	}
	template <typename T = void> T ShowLoadingScreen(bool active, int32_t mapID) {
		return ((T (*)(StageManager*, bool, int32_t))(Il2CppBase() + 0x30A4048))(this, active, mapID);
	}
	template <typename T = void> T ClearPendingLoadMapID() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A4228))(this);
	}
	template <typename T = void> T ClearLoadMapData() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A42FC))(this);
	}
	template <typename T = void> T LoadSceneByLoading(int32_t MapID) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A43D8))(this, MapID);
	}
	template <typename T = void> T LoadSceneSync(int32_t MapID) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A461C))(this, MapID);
	}
	template <typename T = void> T PrepareAtlasForPendingMap(int32_t pendingMapId) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A478C))(this, pendingMapId);
	}
	template <typename T = void> static T DumpShaders() {
		return ((T (*)(void *))(Il2CppBase() + 0x30A4904))(0);
	}
	template <typename T = void> T OnLoadMap(int32_t inMapID, uintptr_t data, bool keepLoadedResource) {
		return ((T (*)(StageManager*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x30A49C4))(this, inMapID, data, keepLoadedResource);
	}
	template <typename T = void> T LoadMap_Impl(int32_t inMapID) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A5468))(this, inMapID);
	}
	template <typename T = void> T OnLoadMapGame(int32_t mapId, Il2CppString* ip, uint16_t port, uint32_t roomId, uint64_t playerId, bool isReconnect, bool reconnectFromLobby) {
		return ((T (*)(StageManager*, int32_t, Il2CppString*, uint16_t, uint32_t, uint64_t, bool, bool))(Il2CppBase() + 0x30A572C))(this, mapId, ip, port, roomId, playerId, isReconnect, reconnectFromLobby);
	}
	template <typename T = void> T SetCurrentMapIdForLoadingFinish(int32_t mapId, bool isReconnect) {
		return ((T (*)(StageManager*, int32_t, bool))(Il2CppBase() + 0x30A5BC4))(this, mapId, isReconnect);
	}
	template <typename T = bool> T IsLoadingMap() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A5CE0))(this);
	}
	template <typename T = void> T ProcessInitWorldGame(int32_t MapID) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A5E14))(this, MapID);
	}
	template <typename T = void> T LoadForReConnect(int32_t mapID) {
		return ((T (*)(StageManager*, int32_t))(Il2CppBase() + 0x30A5648))(this, mapID);
	}
	template <typename T = void> T GotoWinnerCircle() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A663C))(this);
	}
	template <typename T = void> T GotoSeasonSwitch() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A6A64))(this);
	}
	template <typename T = void> T LogoutDS(bool showLoading) {
		return ((T (*)(StageManager*, bool))(Il2CppBase() + 0x30A6B94))(this, showLoading);
	}
	template <typename T = void> T OnReceiveDSLogout() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A7078))(this);
	}
	template <typename T = void> T BeginReturnToFrondEnd(bool quitmatch, bool activewithdraw) {
		return ((T (*)(StageManager*, bool, bool))(Il2CppBase() + 0x30A7568))(this, quitmatch, activewithdraw);
	}
	template <typename T = void> T ReturnToFrondEndInner() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A7E8C))(this);
	}
	template <typename T = bool> T get_IsDuringLogout_Lobby() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A85E0))(this);
	}
	template <typename T = void> T set_IsDuringLogout_Lobby(bool value) {
		return ((T (*)(StageManager*, bool))(Il2CppBase() + 0x30A85E8))(this, value);
	}
	template <typename T = void> T ReturnToLogin(bool logoutUser) {
		return ((T (*)(StageManager*, bool))(Il2CppBase() + 0x30A8158))(this, logoutUser);
	}
	template <typename T = void> T OnReceiveLobbyLogout() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A85F0))(this);
	}
	template <typename T = void> T SetSubLevelRoot(uintptr_t root) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A8A20))(this, root);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A8B50))(this);
	}
	template <typename T = bool> static T get_IsApplicationQuitting() {
		return ((T (*)(void *))(Il2CppBase() + 0x30A8D30))(0);
	}
	template <typename T = void> T QuitApplication() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A8DE0))(this);
	}
	template <typename T = void> T DisableAllCameras() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A905C))(this);
	}
	template <typename T = void> T StartLoadingFlow(uintptr_t Type) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A635C))(this, Type);
	}
	template <typename T = void> T OnFlowStart(uintptr_t controller) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30A9234))(this, controller);
	}
	template <typename T = void> T OnFlowProcessing(uintptr_t controller, float progress, Il2CppString* tips, bool showprogress) {
		return ((T (*)(StageManager*, uintptr_t, float, Il2CppString*, bool))(Il2CppBase() + 0x30A9304))(this, controller, progress, tips, showprogress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(StageManager*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x30A96BC))(this, controller, result, errorMessage);
	}
	template <typename T = void> T OnFlowsStart() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A97A8))(this);
	}
	template <typename T = void> T PopupWhenNetworkFailed(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(StageManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x30A9870))(this, result, errorMessage);
	}
	template <typename T = void> T OnMainFlowsFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(StageManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x30A9D18))(this, result, errorMessage);
	}
	template <typename T = void> T OnAllFlowsFinish() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A9E14))(this);
	}
	template <typename T = void> T OnBackToFrontEndMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(StageManager*, uintptr_t, int32_t))(Il2CppBase() + 0x30A9EFC))(this, result, userContext);
	}
	template <typename T = bool> T IsUserLoginedSuccessfully() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A9BE0))(this);
	}
	template <typename T = void> T FrontEndGoToState(uintptr_t state) {
		return ((T (*)(StageManager*, uintptr_t))(Il2CppBase() + 0x30AA24C))(this, state);
	}
	template <typename T = bool> T IsFrontEndReady() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA484))(this);
	}
	template <typename T = bool> T HasEverLoginToFrontEnd() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA174))(this);
	}
	template <typename T = void> T SetFrontEndReady() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA560))(this);
	}
	template <typename T = void> T LeaveFrontEnd() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A5280))(this);
	}
	template <typename T = void> T LoadingFrontEnd() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30A511C))(this);
	}
	template <typename T = bool> T IsInMatching() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA6D0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(StageManager*, float))(Il2CppBase() + 0x30AA7B4))(this, deltaTime);
	}
	template <typename T = void> static T HardAndUglyCodeForClearSOC() {
		return ((T (*)(void *))(Il2CppBase() + 0x30A6F74))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA8B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(StageManager*))(Il2CppBase() + 0x30AA8C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(StageManager*, bool))(Il2CppBase() + 0x30AA8C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(StageManager*, float))(Il2CppBase() + 0x30AA8D0))(this, P0);
	}

};

}
