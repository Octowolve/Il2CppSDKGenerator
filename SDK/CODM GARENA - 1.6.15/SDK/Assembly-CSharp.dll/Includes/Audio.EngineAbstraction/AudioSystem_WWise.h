#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction {

class AudioSystemWWise
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction", "AudioSystem_WWise"));
	}

	template <typename T = bool> static T& UseWwiseMainAudioListener2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& EnableHeadSetDetect() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mGameObjects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& mCurLanguage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mWWiseInitialized() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mOneShotSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mAudioGos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mMainAudioListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mMapEntered() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsMapEntered() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_IsInited() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int32_t> T& mLastHeadSetStatus() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& kHeadSetDetectInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mNextHeadSetDetectTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& kHeadSetStateGroup() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& kHeadSetStateRTPC() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& kHeadSetStateSpeaker() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& kHeadSetStateWiredHeadPhone() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& kHeadSetStateBluetooth() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T get_EnableHeadSetDetect() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1788))(this);
	}
	template <typename T = void> T set_EnableHeadSetDetect(bool value) {
		return ((T (*)(AudioSystemWWise*, bool))(Il2CppBase() + 0x44E1790))(this, value);
	}
	template <typename T = bool> T get_Enabled() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1798))(this);
	}
	template <typename T = void> T set_Enabled(bool value) {
		return ((T (*)(AudioSystemWWise*, bool))(Il2CppBase() + 0x44E18E0))(this, value);
	}
	template <typename T = bool> T get_Inited() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1B44))(this);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1B4C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AudioGos() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1B68))(this);
	}
	template <typename T = float> T SqrtDistanceFromListener(Il2CppVector3 vecPos) {
		return ((T (*)(AudioSystemWWise*, Il2CppVector3))(Il2CppBase() + 0x44E1B70))(this, vecPos);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E1C28))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AudioSystemWWise*, float))(Il2CppBase() + 0x44E4188))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E4444))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E4448))(this);
	}
	template <typename T = void> T _UnLoadInGameResources(int32_t iMapID) {
		return ((T (*)(AudioSystemWWise*, int32_t))(Il2CppBase() + 0x44E4BAC))(this, iMapID);
	}
	template <typename T = void> T _LoadInGameResources(int32_t iMapID, uintptr_t CompeleteCallback) {
		return ((T (*)(AudioSystemWWise*, int32_t, uintptr_t))(Il2CppBase() + 0x44E501C))(this, iMapID, CompeleteCallback);
	}
	template <typename T = void> T _NotifyPlayerSpawned() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E546C))(this);
	}
	template <typename T = void> T _StopAll(int32_t SoundType, bool bImediately) {
		return ((T (*)(AudioSystemWWise*, int32_t, bool))(Il2CppBase() + 0x44E5480))(this, SoundType, bImediately);
	}
	template <typename T = int32_t> T _PlaySound(Il2CppString* strFMODAsset, bool bStartPaused, int32_t SoundType) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x44E5484))(this, strFMODAsset, bStartPaused, SoundType);
	}
	template <typename T = int32_t> T _PlaySound_1(Il2CppString* strStartEvt, Il2CppString* strStopEvt, int32_t SoundType, uintptr_t OnEvtStop) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x44E56A8))(this, strStartEvt, strStopEvt, SoundType, OnEvtStop);
	}
	template <typename T = void> T SetRTPC(Il2CppString* strRTPCName, float fVal) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, float))(Il2CppBase() + 0x44E58E4))(this, strRTPCName, fVal);
	}
	template <typename T = void> T _PlayDefaultClickSound() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E5A8C))(this);
	}
	template <typename T = void> T _AttachAudioListenerTo(uintptr_t go) {
		return ((T (*)(AudioSystemWWise*, uintptr_t))(Il2CppBase() + 0x44E5B30))(this, go);
	}
	template <typename T = uintptr_t> T get_CurrentAudioListener() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E5C20))(this);
	}
	template <typename T = void> T _SetSoundEngineQuality(float fQuality) {
		return ((T (*)(AudioSystemWWise*, float))(Il2CppBase() + 0x44E5D10))(this, fQuality);
	}
	template <typename T = void> T _Pause(uintptr_t type, bool bPause) {
		return ((T (*)(AudioSystemWWise*, uintptr_t, bool))(Il2CppBase() + 0x44E5DA8))(this, type, bPause);
	}
	template <typename T = void> T _SetSoundTypeVolume(uintptr_t type, float fVol) {
		return ((T (*)(AudioSystemWWise*, uintptr_t, float))(Il2CppBase() + 0x44E5DAC))(this, type, fVol);
	}
	template <typename T = void> T StopAllSound() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E5DB0))(this);
	}
	template <typename T = void> T _PlayOneShot(Il2CppString* strAudioID, Il2CppVector3 vecPos, bool bByPassRangeCheck) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x44E5DB4))(this, strAudioID, vecPos, bByPassRangeCheck);
	}
	template <typename T = uintptr_t> T _AttachAudioGameObject(uintptr_t go) {
		return ((T (*)(AudioSystemWWise*, uintptr_t))(Il2CppBase() + 0x44E5F74))(this, go);
	}
	template <typename T = void> T _SetRTPC(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, float))(Il2CppBase() + 0x44E60D4))(this, strRTPCName, fValue);
	}
	template <typename T = void> T _SetState(Il2CppString* strStateName, Il2CppString* StateValue) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44E61CC))(this, strStateName, StateValue);
	}
	template <typename T = bool> T LoadBankSync(Il2CppString* strBankNameWithPostFix, bool UnLoadWhileReturnToLobby) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, bool))(Il2CppBase() + 0x44E6310))(this, strBankNameWithPostFix, UnLoadWhileReturnToLobby);
	}
	template <typename T = void> T LoadBankAsync(Il2CppString* strBankNameWithPostFix, uintptr_t callback) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44E68C0))(this, strBankNameWithPostFix, callback);
	}
	template <typename T = bool> T IsBankLoaded(Il2CppString* strBankNameWithPostFix) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*))(Il2CppBase() + 0x44E6DE4))(this, strBankNameWithPostFix);
	}
	template <typename T = void> T UnLoadBank(Il2CppString* strBankNameWithPostFix) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*))(Il2CppBase() + 0x44E7104))(this, strBankNameWithPostFix);
	}
	template <typename T = void> T _LoadAudioRes(Il2CppString* strBankName, uintptr_t pCallback, bool bAsync) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x44E7610))(this, strBankName, pCallback, bAsync);
	}
	template <typename T = void> T _UnLoadAudioRes(Il2CppString* strBankName) {
		return ((T (*)(AudioSystemWWise*, Il2CppString*))(Il2CppBase() + 0x44E7854))(this, strBankName);
	}
	template <typename T = void> T TerminateWWise() {
		return ((T (*)(AudioSystemWWise*))(Il2CppBase() + 0x44E7944))(this);
	}

};

}
