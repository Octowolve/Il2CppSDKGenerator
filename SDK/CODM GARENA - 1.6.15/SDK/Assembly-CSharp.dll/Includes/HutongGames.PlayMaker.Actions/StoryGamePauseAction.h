#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGamePauseAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGamePauseAction"));
	}

	template <typename T = bool> T& Pause() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGamePauseAction*))(Il2CppBase() + 0x50372B4))(this);
	}

};

}
