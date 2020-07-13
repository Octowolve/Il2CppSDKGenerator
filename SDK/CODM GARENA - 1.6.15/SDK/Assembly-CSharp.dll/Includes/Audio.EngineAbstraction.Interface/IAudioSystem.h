#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Interface {

class IAudioSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Interface", "IAudioSystem"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(IAudioSystem*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T Term() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T _UnLoadInGameResources(int32_t iMapID) {
		return ((T (*)(IAudioSystem*, int32_t))(Il2CppBase() + 0x0))(this, iMapID);
	}
	template <typename T = void> T _LoadInGameResources(int32_t iMapID, uintptr_t CompeleteCallback) {
		return ((T (*)(IAudioSystem*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, iMapID, CompeleteCallback);
	}
	template <typename T = void> T _NotifyPlayerSpawned() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T _PlaySound(Il2CppString* strFMODAsset, bool bStartPaused, int32_t SoundType) {
		return ((T (*)(IAudioSystem*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x0))(this, strFMODAsset, bStartPaused, SoundType);
	}
	template <typename T = int32_t> T _PlaySound_1(Il2CppString* strStartEvt, Il2CppString* strStopEvt, int32_t SoundType, uintptr_t OnEvtStop) {
		return ((T (*)(IAudioSystem*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, strStartEvt, strStopEvt, SoundType, OnEvtStop);
	}
	template <typename T = void> T _PlayDefaultClickSound() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T _AttachAudioListenerTo(uintptr_t go) {
		return ((T (*)(IAudioSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, go);
	}
	template <typename T = void> T _SetSoundEngineQuality(float fQuality) {
		return ((T (*)(IAudioSystem*, float))(Il2CppBase() + 0x0))(this, fQuality);
	}
	template <typename T = void> T _Pause(uintptr_t type, bool bPause) {
		return ((T (*)(IAudioSystem*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, type, bPause);
	}
	template <typename T = void> T _SetSoundTypeVolume(uintptr_t type, float fVol) {
		return ((T (*)(IAudioSystem*, uintptr_t, float))(Il2CppBase() + 0x0))(this, type, fVol);
	}
	template <typename T = void> T _StopAll(int32_t SoundType, bool bImediately) {
		return ((T (*)(IAudioSystem*, int32_t, bool))(Il2CppBase() + 0x0))(this, SoundType, bImediately);
	}
	template <typename T = void> T StopAllSound() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T _PlayOneShot(Il2CppString* strAudioID, Il2CppVector3 vecPos, bool bByPassRangeCheck) {
		return ((T (*)(IAudioSystem*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x0))(this, strAudioID, vecPos, bByPassRangeCheck);
	}
	template <typename T = void> T _SetRTPC(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(IAudioSystem*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, strRTPCName, fValue);
	}
	template <typename T = void> T _SetState(Il2CppString* strStateName, Il2CppString* StateValue) {
		return ((T (*)(IAudioSystem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, strStateName, StateValue);
	}
	template <typename T = void> T _LoadAudioRes(Il2CppString* strBankName, uintptr_t pCallback, bool bAsync) {
		return ((T (*)(IAudioSystem*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, strBankName, pCallback, bAsync);
	}
	template <typename T = void> T _UnLoadAudioRes(Il2CppString* strBankName) {
		return ((T (*)(IAudioSystem*, Il2CppString*))(Il2CppBase() + 0x0))(this, strBankName);
	}
	template <typename T = uintptr_t> T _AttachAudioGameObject(uintptr_t go) {
		return ((T (*)(IAudioSystem*, uintptr_t))(Il2CppBase() + 0x0))(this, go);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(IAudioSystem*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_EnableHeadSetDetect() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_EnableHeadSetDetect(bool value) {
		return ((T (*)(IAudioSystem*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_Inited() {
		return ((T (*)(IAudioSystem*))(Il2CppBase() + 0x0))(this);
	}

};

}
