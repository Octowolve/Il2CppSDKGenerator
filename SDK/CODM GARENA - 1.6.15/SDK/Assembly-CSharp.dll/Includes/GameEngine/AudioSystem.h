#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioSystem"));
	}

	template <typename T = bool> static T& UseWideAcousticPositioning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& msUsePriorityBaseRoomHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = void*> static T& mAsyncLoadReqPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mLoadingReqs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mChangeLanguageCo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& msLastWwiseLogCheckFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& msCurOutputLogCredit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& kOutputLogFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kOutputLogMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AS_WWise_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& kMainObjectName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& mCurMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& mCmdQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& mSpatialAudioCfgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> static T& mIsInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDynamicAudioPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLowerSys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueueUpCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeQueueCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SqrtDistanceFromListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSpatialAudioPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadSpatialAudioPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioPlayerFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSoundTypeVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSoundEngineQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachAudioListenerTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachAudioPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBankSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBankAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBankLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__FindExistRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCurrentLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoChangeLanguageTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDefaultClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainAudioGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStartLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStopLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadInGameResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadInGameResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPlayerSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MonitoringCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGlobalAudioVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMusicVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSfxVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUiVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}

	template <typename T = uintptr_t> static T get_RootObj() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E2F94))(0);
	}
	template <typename T = bool> static T get_UseWideAcousticPositioning() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E3150))(0);
	}
	template <typename T = void> static T set_UseWideAcousticPositioning(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x35E3200))(0, value);
	}
	template <typename T = bool> static T get_EnableHeadSetDetect() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E32B4))(0);
	}
	template <typename T = void> static T set_EnableHeadSetDetect(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x35E33B4))(0, value);
	}
	template <typename T = bool> static T get_UsePriorityBasedRoomHandle() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E34B4))(0);
	}
	template <typename T = void> static T set_UsePriorityBasedRoomHandle(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x35E3564))(0, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35E3774))(this);
	}
	template <typename T = void> T ClearConfigs() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35E3964))(this);
	}
	template <typename T = void> T ReloadConfigs() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35E3BBC))(this);
	}
	template <typename T = void> static T InitDynamicAudioPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E42FC))(0);
	}
	template <typename T = void> static T InitLowerSys() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E469C))(0);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AudioSystem*, float))(Il2CppBase() + 0x35E53B4))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35E5620))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35E56E8))(this);
	}
	template <typename T = void> static T QueueUpCmd(uintptr_t pCmd) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35E5A1C))(0, pCmd);
	}
	template <typename T = void> static T DeQueueCmd(uintptr_t pCmd) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35E5B88))(0, pCmd);
	}
	template <typename T = float> static T SqrtDistanceFromListener(Il2CppVector3 vecPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x35D62F4))(0, vecPos);
	}
	template <typename T = void> static T LoadSpatialAudioPreset(Il2CppString* strPresetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35E4DD0))(0, strPresetName);
	}
	template <typename T = void> static T UnLoadSpatialAudioPreset() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E5CF4))(0);
	}
	template <typename T = uintptr_t> static T GetAudioPlayerFor(int32_t iSoundType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35E5F88))(0, iSoundType);
	}
	template <typename T = void> static T Pause(uintptr_t type, bool bPause) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x35E61B4))(0, type, bPause);
	}
	template <typename T = void> static T SetSoundTypeVolume(uintptr_t type, float fVol) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x35E6320))(0, type, fVol);
	}
	template <typename T = void> static T SetSoundEngineQuality(float fQuality) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35E648C))(0, fQuality);
	}
	template <typename T = void> static T PlayOneShot(Il2CppString* strAudioID, Il2CppVector3 vecPos, bool byPassRangeCheck) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x35DA3E4))(0, strAudioID, vecPos, byPassRangeCheck);
	}
	template <typename T = void> static T AttachAudioListenerTo(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35E65E0))(0, go);
	}
	template <typename T = uintptr_t> static T get_CurrentAudioListener() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E678C))(0);
	}
	template <typename T = uintptr_t> static T AttachAudioPlayer(uintptr_t goTarget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35E6884))(0, goTarget);
	}
	template <typename T = bool> static T LoadBankSync(Il2CppString* strBankNameWithPostFix, bool UnLoadWhileReturnToLobby) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x35E6A50))(0, strBankNameWithPostFix, UnLoadWhileReturnToLobby);
	}
	template <typename T = void> static T LoadBankAsync(Il2CppString* strBankNameWithPostFix, void* callback) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x35E6BB8))(0, strBankNameWithPostFix, callback);
	}
	template <typename T = bool> static T IsBankLoaded(Il2CppString* strBankNameWithPostFix) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35E6F34))(0, strBankNameWithPostFix);
	}
	template <typename T = void> static T UnLoadBank(Il2CppString* strBankNameWithPostFix, void* callback) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x35E71D4))(0, strBankNameWithPostFix, callback);
	}
	template <typename T = uintptr_t> static T _FindExistRequest(Il2CppString* strBankNameWithPostFix) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35E7090))(0, strBankNameWithPostFix);
	}
	template <typename T = void> static T ChangeCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E7454))(0);
	}
	template <typename T = uintptr_t> static T CoChangeLanguageTo() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E7738))(0);
	}
	template <typename T = Il2CppString*> static T GetCurLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E7834))(0);
	}
	template <typename T = void> static T PlayDefaultClickSound() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E799C))(0);
	}
	template <typename T = int32_t> static T PlaySound(Il2CppString* strFMODAsset, int32_t SoundType) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x35D33A8))(0, strFMODAsset, SoundType);
	}
	template <typename T = void> static T SetRTPC(Il2CppString* strRTPCName, float fVal) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x35E01D8))(0, strRTPCName, fVal);
	}
	template <typename T = void> static T SetState(Il2CppString* strStateGroupName, Il2CppString* strState) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x35E7AE4))(0, strStateGroupName, strState);
	}
	template <typename T = void> static T StopSound(int32_t GroupID, int32_t SoundType) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x35E7C04))(0, GroupID, SoundType);
	}
	template <typename T = void> static T StopAll(int32_t SoundType, bool bImediately) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x35E7CD4))(0, SoundType, bImediately);
	}
	template <typename T = uintptr_t> static T GetMainAudioGameObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E7E40))(0);
	}
	template <typename T = void> static T NotifyStartLoading(int32_t iPendingMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35E7F2C))(0, iPendingMapID);
	}
	template <typename T = void> static T NotifyStopLoading(int32_t iPendingMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35E8078))(0, iPendingMapID);
	}
	template <typename T = void> static T UnLoadInGameResources(int32_t iMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35E818C))(0, iMapID);
	}
	template <typename T = void> static T LoadInGameResources(int32_t iMapID, uintptr_t CompeleteCallback) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x35E86CC))(0, iMapID, CompeleteCallback);
	}
	template <typename T = void> static T NotifyPlayerSpawned() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E8D7C))(0);
	}
	template <typename T = void> static T MonitoringCallback(uintptr_t in_errorCode, uintptr_t in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, Il2CppString* in_msg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uint64_t, Il2CppString*))(Il2CppBase() + 0x35E8EC4))(0, in_errorCode, in_errorLevel, in_playingID, in_gameObjID, in_msg);
	}
	template <typename T = uintptr_t> static T get_AS_WWise_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E30A0))(0);
	}
	template <typename T = void> static T set_AS_WWise_Instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35E2EE0))(0, value);
	}
	template <typename T = int32_t> static T get_CurMapID() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E9414))(0);
	}
	template <typename T = uintptr_t> static T get_SpatialAudioCfgs() {
		return ((T (*)(void *))(Il2CppBase() + 0x35E94C4))(0);
	}
	template <typename T = void> static T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x35E9574))(0, shift);
	}
	template <typename T = void> static T SetGlobalAudioVolume(float vol) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35E28C4))(0, vol);
	}
	template <typename T = void> static T SetMusicVolume(float vol) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35E2B4C))(0, vol);
	}
	template <typename T = void> static T SetSfxVolume(float vol) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35E2C90))(0, vol);
	}
	template <typename T = void> static T SetUiVolume(float vol) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35E2A08))(0, vol);
	}
	template <typename T = void> static T SetAudioQuality(float qualityVal) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x35EA388))(0, qualityVal);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35EA5F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AudioSystem*, float))(Il2CppBase() + 0x35EA5FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35EA604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(AudioSystem*))(Il2CppBase() + 0x35EA60C))(this);
	}

};

}
