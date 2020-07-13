#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseGameObject"));
	}

	template <typename T = bool> static T& UseAuxSendComp2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& WriteRedirections() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = float> T& mfLastSetPosTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> static T& msNextGameObjectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_posData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mDefaultCallback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& mPoolOfEventCallbackOnEnd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& mCurrentEventsCallbacksOnEnd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCurrentCookie() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mCurrentAuxSendArray() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& mInvalidAuxID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mRegister() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mAuxSends() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& mDictAllSwitches() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& mDictALlRTPCs() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& mDictNextTrigerTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& mCallStackOnRegister() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> static T& LogIntervalPassedEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& msDictTriggerIntervals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F7138))(this);
	}
	template <typename T = void> T SetRTPC(Il2CppString* strName, float fValue) {
		return ((T (*)(WWiseGameObject*, Il2CppString*, float))(Il2CppBase() + 0x44F71EC))(this, strName, fValue);
	}
	template <typename T = float> T GetRTPC(Il2CppString* strName) {
		return ((T (*)(WWiseGameObject*, Il2CppString*))(Il2CppBase() + 0x44F738C))(this, strName);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F745C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F746C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F747C))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F75F0))(this);
	}
	template <typename T = void> T UnRegisterGameObject() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F7600))(this);
	}
	template <typename T = void> T RegisterGameObject() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F763C))(this);
	}
	template <typename T = uint32_t> T PlaySound(Il2CppString* strEventName) {
		return ((T (*)(WWiseGameObject*, Il2CppString*))(Il2CppBase() + 0x44F7704))(this, strEventName);
	}
	template <typename T = uint32_t> T PlaySoundWithSyncTime(Il2CppString* strEventName, bool bSyncPlayingTime) {
		return ((T (*)(WWiseGameObject*, Il2CppString*, bool))(Il2CppBase() + 0x44F7718))(this, strEventName, bSyncPlayingTime);
	}
	template <typename T = uint32_t> T PlaySoundAndSetCallbackOnStop(Il2CppString* strEventName, Il2CppString* strStopEvt, uintptr_t OnSoundStop) {
		return ((T (*)(WWiseGameObject*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44F8828))(this, strEventName, strStopEvt, OnSoundStop);
	}
	template <typename T = bool> T IsAnySoundPlaying() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F8E44))(this);
	}
	template <typename T = void> T StopGroup(Il2CppString* strEventName) {
		return ((T (*)(WWiseGameObject*, Il2CppString*))(Il2CppBase() + 0x44F8F0C))(this, strEventName);
	}
	template <typename T = void> T StopAll() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F8F10))(this);
	}
	template <typename T = void> T SetSwitch(Il2CppString* strSwitchGroup, Il2CppString* strSwitchName) {
		return ((T (*)(WWiseGameObject*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44F8FD8))(this, strSwitchGroup, strSwitchName);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9220))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9230))(this);
	}
	template <typename T = void> T _UpdatePos() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9458))(this);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E4DEC))(0);
	}
	template <typename T = void> T EventCallback(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info) {
		return ((T (*)(WWiseGameObject*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44F97C8))(this, in_cookie, in_type, in_info);
	}
	template <typename T = void> T AllocAuxSendsCache() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9928))(this);
	}
	template <typename T = void> T ClearAuxSends() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9A80))(this);
	}
	template <typename T = bool> T SetScallingFactor(float fScalingFactor) {
		return ((T (*)(WWiseGameObject*, float))(Il2CppBase() + 0x44F9A9C))(this, fScalingFactor);
	}
	template <typename T = void> T SetAuxSend(int32_t iIndex, Il2CppString* AuxBusName, float fPercentage) {
		return ((T (*)(WWiseGameObject*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x44F9C80))(this, iIndex, AuxBusName, fPercentage);
	}
	template <typename T = void> T ApplyAuxSends() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9CF0))(this);
	}
	template <typename T = void> T WriteDebugLogs() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F9D0C))(this);
	}
	template <typename T = bool> T _IsIntervalCheckPassed(Il2CppString* strEvent) {
		return ((T (*)(WWiseGameObject*, Il2CppString*))(Il2CppBase() + 0x44F8348))(this, strEvent);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbInput) {
		return ((T (*)(WWiseGameObject*, uintptr_t))(Il2CppBase() + 0x44FA0CC))(this, sbInput);
	}
	template <typename T = void> T Seek(Il2CppString* strEvent, int32_t iPos) {
		return ((T (*)(WWiseGameObject*, Il2CppString*, int32_t))(Il2CppBase() + 0x44FA53C))(this, strEvent, iPos);
	}
	template <typename T = int32_t> T GetPlayingPositionInMs(uint32_t uRetFromPlaySound) {
		return ((T (*)(WWiseGameObject*, uint32_t))(Il2CppBase() + 0x44FA62C))(this, uRetFromPlaySound);
	}
	template <typename T = bool> T get_Registered() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44F8328))(this);
	}
	template <typename T = uint64_t> T get_mCurGameObjectID() {
		return ((T (*)(WWiseGameObject*))(Il2CppBase() + 0x44FA6F8))(this);
	}
	template <typename T = uint32_t> T _ParseRedirectedEvent(uint32_t uEvtID) {
		return ((T (*)(WWiseGameObject*, uint32_t))(Il2CppBase() + 0x44F7F38))(this, uEvtID);
	}

};

}
