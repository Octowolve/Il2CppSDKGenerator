#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineRPG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_RPG"));
	}

	template <typename T = uintptr_t> T& m_OldWeaponStateType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreGotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_OldWeaponStateType() {
		return ((T (*)(WNWeaponStateMachineRPG*))(Il2CppBase() + 0x45ACB3C))(this);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineRPG*))(Il2CppBase() + 0x45ACB44))(this);
	}
	template <typename T = void> T PreGotoState(uintptr_t stateType) {
		return ((T (*)(WNWeaponStateMachineRPG*, uintptr_t))(Il2CppBase() + 0x45AD0B4))(this, stateType);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineRPG*))(Il2CppBase() + 0x45AD168))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreGotoState(uintptr_t P0) {
		return ((T (*)(WNWeaponStateMachineRPG*, uintptr_t))(Il2CppBase() + 0x45AD16C))(this, P0);
	}

};

}
