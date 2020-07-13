#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameActionCheckPlayerFire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameActionCheckPlayerFire"));
	}

	template <typename T = uintptr_t> T& StartFireEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameActionCheckPlayerFire*))(Il2CppBase() + 0x503307C))(this);
	}

};

}
