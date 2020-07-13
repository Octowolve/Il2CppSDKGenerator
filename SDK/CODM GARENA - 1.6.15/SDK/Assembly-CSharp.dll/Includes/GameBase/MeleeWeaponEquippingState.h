#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MeleeWeaponEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MeleeWeaponEquippingState"));
	}

	template <typename T = float> T& DelayFire() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CF81C))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CF954))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFAA0))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFC3C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFD6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFD74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFD7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(MeleeWeaponEquippingState*))(Il2CppBase() + 0x19CFD84))(this);
	}

};

}
