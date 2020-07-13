#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TimiAudio.AudioLogic {

class BaseInGameAudioLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TimiAudio.AudioLogic", "BaseInGameAudioLogic"));
	}

	template <typename T = float> T& mRoundStartTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mSndCfg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnStartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_SndCfg() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4662084))(this);
	}
	template <typename T = void> T SetGameMode(uintptr_t pMode, int32_t iMapID) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t, int32_t))(Il2CppBase() + 0x466208C))(this, pMode, iMapID);
	}
	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4662380))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4662694))(this);
	}
	template <typename T = void> T _OnRoundStart() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x46627F4))(this);
	}
	template <typename T = void> T _OnRoundEnded(uintptr_t result) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4662928))(this, result);
	}
	template <typename T = void> T _OnCountDown(int32_t iCount) {
		return ((T (*)(BaseInGameAudioLogic*, int32_t))(Il2CppBase() + 0x4662B00))(this, iCount);
	}
	template <typename T = void> T _OnShowCamp() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4662DEC))(this);
	}
	template <typename T = void> T _OnStartPlay() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4662F20))(this);
	}
	template <typename T = void> T _OnStartMatch() {
		return ((T (*)(BaseInGameAudioLogic*))(Il2CppBase() + 0x4663054))(this);
	}
	template <typename T = void> T _OnEndMatch(uintptr_t result) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4663188))(this, result);
	}
	template <typename T = void> T OnRoundStart(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46632C4))(this, pMsg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466338C))(this, pMsg);
	}
	template <typename T = void> T OnCountDown(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46634D8))(this, pMsg);
	}
	template <typename T = void> T OnShowCamp(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4663624))(this, pMsg);
	}
	template <typename T = void> T OnStartPlay(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x46636DC))(this, pMsg);
	}
	template <typename T = void> T OnStartMatch(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x4663794))(this, pMsg);
	}
	template <typename T = void> T OnMatchEnd(uintptr_t pMsg) {
		return ((T (*)(BaseInGameAudioLogic*, uintptr_t))(Il2CppBase() + 0x466384C))(this, pMsg);
	}

};

}
