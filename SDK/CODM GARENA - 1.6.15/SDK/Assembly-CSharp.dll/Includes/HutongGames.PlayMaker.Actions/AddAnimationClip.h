#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddAnimationClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddAnimationClip"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& animationClip() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& animationName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& firstFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& lastFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& addLoopFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddAnimationClip*))(Il2CppBase() + 0x476BB14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddAnimationClip*))(Il2CppBase() + 0x476BC1C))(this);
	}
	template <typename T = void> T DoAddAnimationClip() {
		return ((T (*)(AddAnimationClip*))(Il2CppBase() + 0x476BC3C))(this);
	}

};

}
