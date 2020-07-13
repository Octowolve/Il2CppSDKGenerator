#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StopAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StopAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StopAnimation*))(Il2CppBase() + 0x5032EF0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StopAnimation*))(Il2CppBase() + 0x5032EFC))(this);
	}
	template <typename T = void> T DoStopAnimation() {
		return ((T (*)(StopAnimation*))(Il2CppBase() + 0x5032F1C))(this);
	}

};

}
