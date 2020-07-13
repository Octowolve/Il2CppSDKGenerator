#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameSetPlayerMaxSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameSetPlayerMaxSpeed"));
	}

	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameSetPlayerMaxSpeed*))(Il2CppBase() + 0x4F15778))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGameSetPlayerMaxSpeed*))(Il2CppBase() + 0x4F1577C))(this);
	}

};

}
