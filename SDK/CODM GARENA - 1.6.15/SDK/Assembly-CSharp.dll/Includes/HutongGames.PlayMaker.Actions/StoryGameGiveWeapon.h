#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameGiveWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameGiveWeapon"));
	}

	template <typename T = uintptr_t> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& autoSwitch() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ammonCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameGiveWeapon*))(Il2CppBase() + 0x5035BF0))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGameGiveWeapon*))(Il2CppBase() + 0x5035BF4))(this);
	}

};

}
