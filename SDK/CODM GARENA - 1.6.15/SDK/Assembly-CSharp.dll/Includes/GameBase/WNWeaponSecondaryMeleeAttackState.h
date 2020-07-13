#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponSecondaryMeleeAttackState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponSecondaryMeleeAttackState"));
	}

	template <typename T = float> T& m_CurFireInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FireTimeElapse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_StopFire() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_SecondaryFireComponent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597704))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597990))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597B60))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597C04))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*, float))(Il2CppBase() + 0x4597CA8))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSecondaryFire() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*, float))(Il2CppBase() + 0x4597FB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WNWeaponSecondaryMeleeAttackState*))(Il2CppBase() + 0x4597FB8))(this);
	}

};

}
