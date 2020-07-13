#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseAnimationSoundEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseAnimationSoundEventHandler"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_SoundIDs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugLogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetAudioList() {
		return ((T (*)(BaseAnimationSoundEventHandler*))(Il2CppBase() + 0x360AA58))(this);
	}
	template <typename T = void> T PlaySound(int32_t iIndex) {
		return ((T (*)(BaseAnimationSoundEventHandler*, int32_t))(Il2CppBase() + 0x360AB84))(this, iIndex);
	}
	template <typename T = void> T _PlayOneShot(Il2CppString* whichSound) {
		return ((T (*)(BaseAnimationSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x360AC80))(this, whichSound);
	}
	template <typename T = void> T DebugLogError(Il2CppString* strLog) {
		return ((T (*)(BaseAnimationSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x360ADC4))(this, strLog);
	}

};

}
