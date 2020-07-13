#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TutorialSpeechSoundLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TutorialSpeechSoundLogic"));
	}

	template <typename T = Il2CppString*> T& m_strLastPlaySound() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mCurrentPlayingSound() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T PlayOneShot(Il2CppString* strSoundPath) {
		return ((T (*)(TutorialSpeechSoundLogic*, Il2CppString*))(Il2CppBase() + 0x27D097C))(this, strSoundPath);
	}
	template <typename T = void> T StopSound() {
		return ((T (*)(TutorialSpeechSoundLogic*))(Il2CppBase() + 0x27D0C3C))(this);
	}
	template <typename T = void> T StopSound2() {
		return ((T (*)(TutorialSpeechSoundLogic*))(Il2CppBase() + 0x27D0D04))(this);
	}
	template <typename T = void> T _StopSound() {
		return ((T (*)(TutorialSpeechSoundLogic*))(Il2CppBase() + 0x27D0B74))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x27D0DD8))(0);
	}

};

}
