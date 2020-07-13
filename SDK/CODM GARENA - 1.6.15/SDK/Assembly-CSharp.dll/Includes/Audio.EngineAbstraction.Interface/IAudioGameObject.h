#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Interface {

class IAudioGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Interface", "IAudioGameObject"));
	}


	template <typename T = bool> T get_Registered() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetRTPC(Il2CppString* strName, float fValue) {
		return ((T (*)(IAudioGameObject*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, strName, fValue);
	}
	template <typename T = float> T GetRTPC(Il2CppString* strName) {
		return ((T (*)(IAudioGameObject*, Il2CppString*))(Il2CppBase() + 0x0))(this, strName);
	}
	template <typename T = uint32_t> T PlaySound(Il2CppString* strEventName) {
		return ((T (*)(IAudioGameObject*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = uint32_t> T PlaySoundWithSyncTime(Il2CppString* strEventName, bool bSyncPlayingTime) {
		return ((T (*)(IAudioGameObject*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, strEventName, bSyncPlayingTime);
	}
	template <typename T = uint32_t> T PlaySoundAndSetCallbackOnStop(Il2CppString* strEventName, Il2CppString* strStopEvt, uintptr_t OnSoundStop) {
		return ((T (*)(IAudioGameObject*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, strEventName, strStopEvt, OnSoundStop);
	}
	template <typename T = int32_t> T GetPlayingPositionInMs(uint32_t uRetFromPlaySound) {
		return ((T (*)(IAudioGameObject*, uint32_t))(Il2CppBase() + 0x0))(this, uRetFromPlaySound);
	}
	template <typename T = void> T StopGroup(Il2CppString* strEventName) {
		return ((T (*)(IAudioGameObject*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T StopAll() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetSwitch(Il2CppString* strSwitchGroup, Il2CppString* strSwitchName) {
		return ((T (*)(IAudioGameObject*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, strSwitchGroup, strSwitchName);
	}
	template <typename T = bool> T IsAnySoundPlaying() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Seek(Il2CppString* strEvent, int32_t iPos) {
		return ((T (*)(IAudioGameObject*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, strEvent, iPos);
	}
	template <typename T = void> T WriteDebugLogs() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AllocAuxSendsCache() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAuxSend(int32_t iIndex, Il2CppString* AuxBusName, float fPercentage) {
		return ((T (*)(IAudioGameObject*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x0))(this, iIndex, AuxBusName, fPercentage);
	}
	template <typename T = void> T ApplyAuxSends() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ClearAuxSends() {
		return ((T (*)(IAudioGameObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SetScallingFactor(float fScalingFactor) {
		return ((T (*)(IAudioGameObject*, float))(Il2CppBase() + 0x0))(this, fScalingFactor);
	}

};

}
