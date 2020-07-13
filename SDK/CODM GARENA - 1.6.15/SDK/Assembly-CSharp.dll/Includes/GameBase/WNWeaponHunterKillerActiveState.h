#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponHunterKillerActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponHunterKillerActiveState"));
	}


	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponHunterKillerActiveState*))(Il2CppBase() + 0x4596EC0))(this);
	}

};

}
