#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponStateMachineToyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponStateMachine_ToyBomb"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFastThrowMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetFastThrowMode(bool IsFastThrow, bool bInit) {
		return ((T (*)(WeaponStateMachineToyBomb*, bool, bool))(Il2CppBase() + 0x45863D8))(this, IsFastThrow, bInit);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WeaponStateMachineToyBomb*))(Il2CppBase() + 0x458648C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetFastThrowMode(bool P0, bool P1) {
		return ((T (*)(WeaponStateMachineToyBomb*, bool, bool))(Il2CppBase() + 0x458676C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WeaponStateMachineToyBomb*))(Il2CppBase() + 0x4586770))(this);
	}

};

}
