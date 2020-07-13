#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameInput"));
	}

	template <typename T = bool> T& m_bAllowInput() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameInput*))(Il2CppBase() + 0x5035F88))(this);
	}

};

}
