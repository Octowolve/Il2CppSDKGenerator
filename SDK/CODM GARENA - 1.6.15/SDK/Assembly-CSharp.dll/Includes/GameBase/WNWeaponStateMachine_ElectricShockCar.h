#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineElectricShockCar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_ElectricShockCar"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineElectricShockCar*))(Il2CppBase() + 0x459FDA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineElectricShockCar*))(Il2CppBase() + 0x45A0198))(this);
	}

};

}
