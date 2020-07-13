#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AudioPause
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AudioPause"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AudioPause*))(Il2CppBase() + 0x4F324A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AudioPause*))(Il2CppBase() + 0x4F324AC))(this);
	}

};

}
