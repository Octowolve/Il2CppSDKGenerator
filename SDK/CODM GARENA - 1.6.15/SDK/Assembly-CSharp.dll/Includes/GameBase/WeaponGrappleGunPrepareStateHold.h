#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrappleGunPrepareStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrappleGunPrepareStateHold"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ThrowProjectileTrackEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsShowingTrackEffect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsCanFire() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& hasStartFire() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& IsEnterEndHolding() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndHolding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickShowLineAndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_ThrowProjectileTrackIsValid() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6AB04))(this);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6AC60))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6AD00))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6AE78))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6AF1C))(this);
	}
	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6B28C))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6B32C))(this);
	}
	template <typename T = void> T EndHolding() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6B888))(this);
	}
	template <typename T = void> T TickShowLineAndFire(float deltaTime) {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*, float))(Il2CppBase() + 0x1C6B98C))(this, deltaTime);
	}
	template <typename T = void> T UpdateShowTrackEffect(bool bShow) {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*, bool))(Il2CppBase() + 0x1C6BAF8))(this, bShow);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*, float))(Il2CppBase() + 0x1C6BBC4))(this, deltaTime);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6BE8C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6BF3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6C1E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6C1E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*, float))(Il2CppBase() + 0x1C6C1F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopCurrentState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6C1F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrappleGunPrepareStateHold*))(Il2CppBase() + 0x1C6C200))(this);
	}

};

}
