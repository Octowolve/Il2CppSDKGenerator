#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "AnimatorEvent"));
	}

	template <typename T = Il2CppString*> T& animationState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& crossfadeTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& resetNormalizedTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Activate(uintptr_t animator, uintptr_t animation) {
		return ((T (*)(AnimatorEvent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A83D0))(this, animator, animation);
	}
	template <typename T = void> T Activate_1(uintptr_t animator) {
		return ((T (*)(AnimatorEvent*, uintptr_t))(Il2CppBase() + 0x38A84F0))(this, animator);
	}
	template <typename T = void> T Activate_2(uintptr_t animation) {
		return ((T (*)(AnimatorEvent*, uintptr_t))(Il2CppBase() + 0x38A8688))(this, animation);
	}

};

}
