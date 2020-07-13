#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGamePlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGamePlay"));
	}


	template <typename T = uintptr_t> static T get_Game() {
		return ((T (*)(void *))(Il2CppBase() + 0x261F48C))(0);
	}
	template <typename T = uintptr_t> static T get_GameInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x26234A4))(0);
	}
	template <typename T = uintptr_t> static T get_LocalPlayerInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x262359C))(0);
	}

};

}
