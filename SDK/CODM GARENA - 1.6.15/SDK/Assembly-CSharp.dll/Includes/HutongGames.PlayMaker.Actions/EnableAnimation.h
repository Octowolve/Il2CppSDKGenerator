#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnableAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnableAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& enable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& resetOnExit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnableAnimation*))(Il2CppBase() + 0x4FCB674))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnableAnimation*))(Il2CppBase() + 0x4FCB6B4))(this);
	}
	template <typename T = void> T DoEnableAnimation(uintptr_t go) {
		return ((T (*)(EnableAnimation*, uintptr_t))(Il2CppBase() + 0x4FCB704))(this, go);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EnableAnimation*))(Il2CppBase() + 0x4FCB84C))(this);
	}

};

}
