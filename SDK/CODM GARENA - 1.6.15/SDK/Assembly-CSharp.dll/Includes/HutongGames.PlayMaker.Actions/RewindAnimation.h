#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RewindAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RewindAnimation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animName() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RewindAnimation*))(Il2CppBase() + 0x4D842B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RewindAnimation*))(Il2CppBase() + 0x4D842C0))(this);
	}
	template <typename T = void> T DoRewindAnimation() {
		return ((T (*)(RewindAnimation*))(Il2CppBase() + 0x4D842E0))(this);
	}

};

}
