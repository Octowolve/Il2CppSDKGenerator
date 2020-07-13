#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimatorInterruptMatchTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimatorInterruptMatchTarget"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& completeMatch() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorInterruptMatchTarget*))(Il2CppBase() + 0x4F2E758))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimatorInterruptMatchTarget*))(Il2CppBase() + 0x4F2E784))(this);
	}

};

}
