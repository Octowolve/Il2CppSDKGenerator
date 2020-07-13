#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSparrowPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSparrowPrepareState"));
	}

	template <typename T = float> T& m_OrgCrosshairSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_OrgCrosshairLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_StateMachine() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_prepareStartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_holdExplosionTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isInProneState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isGotoFireState() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& holdProjectile() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDrawSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfCancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayCancelPreparingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457E3C8))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457E494))(this);
	}
	template <typename T = void> T PlayDrawSound() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457EAD0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457ED8C))(this);
	}
	template <typename T = bool> T ShouldCancelPreparing() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457EEA0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSparrowPrepareState*, float))(Il2CppBase() + 0x457EFC0))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457F360))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457F954))(this);
	}
	template <typename T = void> T SelfCancelPreparing() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457F5F8))(this);
	}
	template <typename T = void> T _PlayCancelPreparingSound() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457F840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457FA40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457FA48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSparrowPrepareState*, float))(Il2CppBase() + 0x457FA50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457FA58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponSparrowPrepareState*))(Il2CppBase() + 0x457FA60))(this);
	}

};

}
