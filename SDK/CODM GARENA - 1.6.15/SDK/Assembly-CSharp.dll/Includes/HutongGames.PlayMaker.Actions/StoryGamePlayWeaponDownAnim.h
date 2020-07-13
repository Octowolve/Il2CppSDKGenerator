#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGamePlayWeaponDownAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGamePlayWeaponDownAnim"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGamePlayWeaponDownAnim*))(Il2CppBase() + 0x503738C))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGamePlayWeaponDownAnim*))(Il2CppBase() + 0x5037390))(this);
	}

};

}
