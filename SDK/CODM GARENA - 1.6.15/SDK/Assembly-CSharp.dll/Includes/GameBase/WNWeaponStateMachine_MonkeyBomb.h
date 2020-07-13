#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineMonkeyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_MonkeyBomb"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFastThrowMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropFastThrowMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSwimSatate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*, bool, bool))(Il2CppBase() + 0x45A7BD4))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T SetPropFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*, bool, bool))(Il2CppBase() + 0x45A802C))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T AddSwimSatate() {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*))(Il2CppBase() + 0x45A8484))(this);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*))(Il2CppBase() + 0x45A8700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetFastThrowMode(bool P0, bool P1) {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*, bool, bool))(Il2CppBase() + 0x45A8948))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetPropFastThrowMode(bool P0, bool P1) {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*, bool, bool))(Il2CppBase() + 0x45A894C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_AddSwimSatate() {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*))(Il2CppBase() + 0x45A8950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineMonkeyBomb*))(Il2CppBase() + 0x45A8954))(this);
	}

};

}
