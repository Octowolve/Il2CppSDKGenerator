#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMeleeActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMeleeActiveState"));
	}

	template <typename T = float> static T& MaxDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mFindTarget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mLeftToFireTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mCurFireInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mLastFireTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_FireComponentMelee() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isAutoFire() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsGotoFire() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& mDelyGotoFiring() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsDelay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchLastWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A590C4))(this);
	}
	template <typename T = bool> T FindAttackTarget() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59314))(this);
	}
	template <typename T = void> T CheckToSwimState() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59484))(this);
	}
	template <typename T = void> T TickCheckFire(float deltaTime) {
		return ((T (*)(WeaponMeleeActiveState*, float))(Il2CppBase() + 0x3A595C0))(this, deltaTime);
	}
	template <typename T = void> T GotoFiring() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59980))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59A58))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponMeleeActiveState*, float))(Il2CppBase() + 0x3A59C08))(this, deltaTime);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59CDC))(this);
	}
	template <typename T = void> T SwitchLastWeapon() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59D9C))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A59F14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A5A07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A5A084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponMeleeActiveState*, float))(Il2CppBase() + 0x3A5A08C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A5A094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WeaponMeleeActiveState*))(Il2CppBase() + 0x3A5A09C))(this);
	}

};

}
