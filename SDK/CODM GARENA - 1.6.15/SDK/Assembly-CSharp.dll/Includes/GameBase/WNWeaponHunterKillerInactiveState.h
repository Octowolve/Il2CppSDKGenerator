#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponHunterKillerInactiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponHunterKillerInactiveState"));
	}


	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponHunterKillerInactiveState*))(Il2CppBase() + 0x45970A4))(this);
	}

};

}
