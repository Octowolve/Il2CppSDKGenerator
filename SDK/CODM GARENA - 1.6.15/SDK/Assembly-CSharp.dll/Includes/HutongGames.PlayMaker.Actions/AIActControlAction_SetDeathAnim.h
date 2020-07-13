#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionSetDeathAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_SetDeathAnim"));
	}

	template <typename T = Il2CppString*> T& AnimationStateName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& DeathAnimLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AIActControlActionSetDeathAnim*))(Il2CppBase() + 0x4F28FD4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionSetDeathAnim*))(Il2CppBase() + 0x4F28FE0))(this);
	}

};

}
