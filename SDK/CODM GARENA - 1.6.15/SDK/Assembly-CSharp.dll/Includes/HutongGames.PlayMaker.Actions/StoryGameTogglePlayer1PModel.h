#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameTogglePlayer1PModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameTogglePlayer1PModel"));
	}

	template <typename T = bool> T& isVisible() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameTogglePlayer1PModel*))(Il2CppBase() + 0x4F15B20))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGameTogglePlayer1PModel*))(Il2CppBase() + 0x4F15B24))(this);
	}

};

}
