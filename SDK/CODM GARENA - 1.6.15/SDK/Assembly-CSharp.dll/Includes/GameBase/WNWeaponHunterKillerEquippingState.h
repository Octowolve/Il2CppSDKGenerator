#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponHunterKillerEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponHunterKillerEquippingState"));
	}


	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponHunterKillerEquippingState*))(Il2CppBase() + 0x4596FB8))(this);
	}

};

}
