#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponHunterKillerPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponHunterKillerPrepareState"));
	}


	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponHunterKillerPrepareState*))(Il2CppBase() + 0x45972E0))(this);
	}
	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WNWeaponHunterKillerPrepareState*))(Il2CppBase() + 0x4597618))(this);
	}

};

}
