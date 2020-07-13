#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AudioPlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AudioPlay"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& oneShotClip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishedEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AudioPlay*))(Il2CppBase() + 0x4F32628))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AudioPlay*))(Il2CppBase() + 0x4F3265C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AudioPlay*))(Il2CppBase() + 0x4F3292C))(this);
	}

};

}
