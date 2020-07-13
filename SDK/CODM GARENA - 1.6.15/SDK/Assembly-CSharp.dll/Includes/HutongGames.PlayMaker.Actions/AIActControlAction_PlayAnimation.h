#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionPlayAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_PlayAnimation"));
	}

	template <typename T = uintptr_t> T& AnimationStateName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AnimationLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AIActControlActionPlayAnimation*))(Il2CppBase() + 0x4F28AA4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionPlayAnimation*))(Il2CppBase() + 0x4F28AB8))(this);
	}

};

}
