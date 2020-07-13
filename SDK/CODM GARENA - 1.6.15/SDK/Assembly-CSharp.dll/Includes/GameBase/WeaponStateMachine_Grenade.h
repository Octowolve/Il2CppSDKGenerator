#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponStateMachineGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponStateMachine_Grenade"));
	}

	template <typename T = bool> T& CurFastThrowMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& FastThrowModeLocked() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropFastThrowMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFastThrowMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSwimSatate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetPropFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WeaponStateMachineGrenade*, bool, bool))(Il2CppBase() + 0x45848C8))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T SetFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WeaponStateMachineGrenade*, bool, bool))(Il2CppBase() + 0x458497C))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WeaponStateMachineGrenade*))(Il2CppBase() + 0x4584E4C))(this);
	}
	template <typename T = void> T AddSwimSatate() {
		return ((T (*)(WeaponStateMachineGrenade*))(Il2CppBase() + 0x4585094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WeaponStateMachineGrenade*))(Il2CppBase() + 0x4585310))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddSwimSatate() {
		return ((T (*)(WeaponStateMachineGrenade*))(Il2CppBase() + 0x4585318))(this);
	}

};

}
