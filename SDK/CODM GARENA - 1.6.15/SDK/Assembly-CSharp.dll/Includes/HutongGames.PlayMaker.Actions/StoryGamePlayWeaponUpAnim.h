#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGamePlayWeaponUpAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGamePlayWeaponUpAnim"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGamePlayWeaponUpAnim*))(Il2CppBase() + 0x50375F0))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGamePlayWeaponUpAnim*))(Il2CppBase() + 0x50375F4))(this);
	}

};

}
