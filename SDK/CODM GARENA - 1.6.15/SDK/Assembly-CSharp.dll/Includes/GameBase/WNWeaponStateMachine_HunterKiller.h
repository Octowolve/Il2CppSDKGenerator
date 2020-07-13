#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineHunterKiller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_HunterKiller"));
	}


	template <typename T = void> T SetFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WNWeaponStateMachineHunterKiller*, bool, bool))(Il2CppBase() + 0x45A44F8))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineHunterKiller*))(Il2CppBase() + 0x45A44FC))(this);
	}

};

}
