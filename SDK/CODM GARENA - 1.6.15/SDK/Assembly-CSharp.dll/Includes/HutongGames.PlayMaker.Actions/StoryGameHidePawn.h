#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameHidePawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameHidePawn"));
	}

	template <typename T = bool> T& m_ShowPawn() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& m_PawnObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameHidePawn*))(Il2CppBase() + 0x5035DA0))(this);
	}

};

}
