#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BlendAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BlendAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& targetWeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& delayedFinishEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BlendAnimation*))(Il2CppBase() + 0x4F33AE8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BlendAnimation*))(Il2CppBase() + 0x4F33B34))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BlendAnimation*))(Il2CppBase() + 0x4F33EE4))(this);
	}
	template <typename T = void> T DoBlendAnimation(uintptr_t go) {
		return ((T (*)(BlendAnimation*, uintptr_t))(Il2CppBase() + 0x4F33BAC))(this, go);
	}

};

}
