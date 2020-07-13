#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioQueuePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioQueuePlayer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AudioList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurAudio() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Log() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlaySound(Il2CppString* name, float duration, bool inQueue) {
		return ((T (*)(AudioQueuePlayer*, Il2CppString*, float, bool))(Il2CppBase() + 0x324C090))(this, name, duration, inQueue);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(AudioQueuePlayer*, float))(Il2CppBase() + 0x324C2DC))(this, deltaTime);
	}

};

}
