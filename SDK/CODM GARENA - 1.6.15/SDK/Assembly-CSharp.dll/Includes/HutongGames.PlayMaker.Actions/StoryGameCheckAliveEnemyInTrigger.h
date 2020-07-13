#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckAliveEnemyInTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckAliveEnemyInTrigger"));
	}

	template <typename T = uintptr_t> T& EnemyClearEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckAliveEnemyInTrigger*))(Il2CppBase() + 0x50338D8))(this);
	}
	template <typename T = bool> T IsPawnInsideTrigger(uintptr_t pawn) {
		return ((T (*)(StoryGameCheckAliveEnemyInTrigger*, uintptr_t))(Il2CppBase() + 0x50338DC))(this, pawn);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckAliveEnemyInTrigger*))(Il2CppBase() + 0x5033C20))(this);
	}

};

}
