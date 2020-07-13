#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckAliveEnemyInTriggerTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckAliveEnemyInTriggerTutorial"));
	}

	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckAliveEnemyInTriggerTutorial*))(Il2CppBase() + 0x5033E78))(this);
	}
	template <typename T = bool> T IsPawnInsideTrigger(uintptr_t pawn) {
		return ((T (*)(StoryGameCheckAliveEnemyInTriggerTutorial*, uintptr_t))(Il2CppBase() + 0x5033E7C))(this, pawn);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckAliveEnemyInTriggerTutorial*))(Il2CppBase() + 0x50341C0))(this);
	}

};

}
