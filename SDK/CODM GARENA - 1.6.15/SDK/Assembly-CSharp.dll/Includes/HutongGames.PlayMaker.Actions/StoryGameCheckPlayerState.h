#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckPlayerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckPlayerState"));
	}

	template <typename T = uintptr_t> T& CrouchEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckPlayerState*))(Il2CppBase() + 0x50353C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckPlayerState*))(Il2CppBase() + 0x50353C8))(this);
	}

};

}
