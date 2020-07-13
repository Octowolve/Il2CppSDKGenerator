#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineMelee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_Melee"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSwimSatate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineMelee*))(Il2CppBase() + 0x45A71F4))(this);
	}
	template <typename T = void> T AddSwimSatate() {
		return ((T (*)(WNWeaponStateMachineMelee*))(Il2CppBase() + 0x45A753C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineMelee*))(Il2CppBase() + 0x45A77A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddSwimSatate() {
		return ((T (*)(WNWeaponStateMachineMelee*))(Il2CppBase() + 0x45A77B0))(this);
	}

};

}
