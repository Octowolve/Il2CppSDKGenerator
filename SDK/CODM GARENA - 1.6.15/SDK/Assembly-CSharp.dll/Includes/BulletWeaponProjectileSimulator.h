#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BulletWeaponProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletWeaponProjectileSimulator"));
	}

	template <typename T = int32_t> static T& CheckRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsFirstCheck() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CheckMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& FIX_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_CurrentVelocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& EntityRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_WeaponFire() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_ThroughWallNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ThroughPlayerNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DamageRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_BulletFlyDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_HadSpeedDecay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThroughParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThroughParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGravityVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocityScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = float> T get_BulletFlyDistance() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530BA68))(this);
	}
	template <typename T = void> T SetThroughParams() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530BA70))(this);
	}
	template <typename T = void> T GetThroughParams(float distance) {
		return ((T (*)(BulletWeaponProjectileSimulator*, float))(Il2CppBase() + 0x530BBA8))(this, distance);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530BD24))(this);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530BD38))(this);
	}
	template <typename T = Il2CppVector3> T get_Direction() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530BD44))(this);
	}
	template <typename T = void> T Init(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t checkMode, uintptr_t data, uintptr_t weaponFire) {
		return ((T (*)(BulletWeaponProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x530BD5C))(this, initalPosition, initalVelocity, checkMode, data, weaponFire);
	}
	template <typename T = bool> T SimulateTick(bool once, uintptr_t impactList, float inUpdateTime) {
		return ((T (*)(BulletWeaponProjectileSimulator*, bool, uintptr_t, float))(Il2CppBase() + 0x530BE90))(this, once, impactList, inUpdateTime);
	}
	template <typename T = void> T UpdateVelocity(float dt) {
		return ((T (*)(BulletWeaponProjectileSimulator*, float))(Il2CppBase() + 0x530C1CC))(this, dt);
	}
	template <typename T = float> T GetGravityVelocity(float dt) {
		return ((T (*)(BulletWeaponProjectileSimulator*, float))(Il2CppBase() + 0x530C3F8))(this, dt);
	}
	template <typename T = float> T GetVelocityScale(float dt) {
		return ((T (*)(BulletWeaponProjectileSimulator*, float))(Il2CppBase() + 0x530C568))(this, dt);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530C6E0))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BulletWeaponProjectileSimulator*, bool))(Il2CppBase() + 0x530C6E8))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BulletWeaponProjectileSimulator*))(Il2CppBase() + 0x530C6F0))(this);
	}

};

}
