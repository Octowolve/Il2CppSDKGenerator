#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationComponentEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationComponentEvent"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(AnimationComponentEvent*))(Il2CppBase() + 0x2B53634))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(AnimationComponentEvent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B536C4))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AnimationComponentEvent*, uintptr_t))(Il2CppBase() + 0x2B536F0))(this, result);
	}

};

}
