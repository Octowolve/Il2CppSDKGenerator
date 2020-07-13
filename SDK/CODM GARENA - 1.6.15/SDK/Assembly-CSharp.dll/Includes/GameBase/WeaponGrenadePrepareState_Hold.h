#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadePrepareStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadePrepareState_Hold"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_prepareStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_holdExplosionTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_isHoldExplode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_FireStart2EndTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ThrowProjectileTrackEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_EndStateShouldCancelThrowWeapon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& FireStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& FireTransitionTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsShowLine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsCanFire() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& m_NeedToDelayAndEndHolding() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = float> T& m_DelayAndEndHoldingCountdown() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& DelayGotoActiveTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& DelayGotoActiveStaticTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsEnterEndHolding() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& mIsInterrupt() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = float> T& mDelayInterruptTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCoutDownUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCancelThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndHolding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCancelOrExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPichUpGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickShowLineAndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T get_ThrowProjectileTrackIsValid() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4CF3C))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4CF68))(this);
	}
	template <typename T = void> T ShowCoutDownUI() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4D03C))(this);
	}
	template <typename T = void> T CalcFireStartTime(float speed) {
		return ((T (*)(WeaponGrenadePrepareStateHold*, float))(Il2CppBase() + 0x3A4D550))(this, speed);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4D7B0))(this);
	}
	template <typename T = bool> T CanCancelThrow() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4DD30))(this);
	}
	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4DE84))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4DF70))(this);
	}
	template <typename T = void> T SetFireStartTime() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4E6A0))(this);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4E890))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4E990))(this);
	}
	template <typename T = void> T EndHolding() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4E47C))(this);
	}
	template <typename T = void> T TickCancelOrExplode(float deltaTime) {
		return ((T (*)(WeaponGrenadePrepareStateHold*, float))(Il2CppBase() + 0x3A4EA94))(this, deltaTime);
	}
	template <typename T = void> T TickPichUpGrenade() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4EF5C))(this);
	}
	template <typename T = void> T TickShowLineAndFire(float deltaTime) {
		return ((T (*)(WeaponGrenadePrepareStateHold*, float))(Il2CppBase() + 0x3A4F0D8))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponGrenadePrepareStateHold*, float))(Il2CppBase() + 0x3A4F3C0))(this, deltaTime);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4F648))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4F728))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FB40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FDD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FDD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadePrepareStateHold*, float))(Il2CppBase() + 0x3A4FDE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopCurrentState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FDE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FDF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponGrenadePrepareStateHold*))(Il2CppBase() + 0x3A4FDF8))(this);
	}

};

}
