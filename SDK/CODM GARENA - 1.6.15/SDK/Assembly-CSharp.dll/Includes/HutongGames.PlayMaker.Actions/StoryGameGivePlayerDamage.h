#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameGivePlayerDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameGivePlayerDamage"));
	}

	template <typename T = uintptr_t> T& damageSource() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& hitSoundEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& damageValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameGivePlayerDamage*))(Il2CppBase() + 0x50358C4))(this);
	}

};

}
