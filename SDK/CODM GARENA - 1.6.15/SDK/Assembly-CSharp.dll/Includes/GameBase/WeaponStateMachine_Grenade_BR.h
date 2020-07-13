#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponStateMachineGrenadeBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponStateMachine_Grenade_BR"));
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
		return ((T (*)(WeaponStateMachineGrenadeBR*))(Il2CppBase() + 0x45853C4))(this);
	}
	template <typename T = void> T AddSwimSatate() {
		return ((T (*)(WeaponStateMachineGrenadeBR*))(Il2CppBase() + 0x4585714))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WeaponStateMachineGrenadeBR*))(Il2CppBase() + 0x4585990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddSwimSatate() {
		return ((T (*)(WeaponStateMachineGrenadeBR*))(Il2CppBase() + 0x4585998))(this);
	}

};

}
