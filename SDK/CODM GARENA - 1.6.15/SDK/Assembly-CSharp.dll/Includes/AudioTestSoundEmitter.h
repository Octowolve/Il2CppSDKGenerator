#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioTestSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioTestSoundEmitter"));
	}

	template <typename T = Il2CppString*> T& AmbientPlaySound() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& BankToLoad() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AudiosToEnable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mSndPlayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mAbsWaitEndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mCurState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveAkComp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryEnableAudioGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryAttachPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Update() {
		return ((T (*)(AudioTestSoundEmitter*))(Il2CppBase() + 0x3250028))(this);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(AudioTestSoundEmitter*))(Il2CppBase() + 0x3250170))(this);
	}
	template <typename T = bool> T PlaySound() {
		return ((T (*)(AudioTestSoundEmitter*))(Il2CppBase() + 0x32502B8))(this);
	}
	template <typename T = void> T ActiveAkComp() {
		return ((T (*)(AudioTestSoundEmitter*))(Il2CppBase() + 0x3250444))(this);
	}
	template <typename T = void> T _TryEnableAudioGameObjects(uintptr_t goObj) {
		return ((T (*)(AudioTestSoundEmitter*, uintptr_t))(Il2CppBase() + 0x325070C))(this, goObj);
	}
	template <typename T = void> T _TryAttachPlayer() {
		return ((T (*)(AudioTestSoundEmitter*))(Il2CppBase() + 0x32505A8))(this);
	}

};

}
