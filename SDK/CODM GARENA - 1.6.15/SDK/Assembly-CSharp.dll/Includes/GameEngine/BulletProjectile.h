#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BulletProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BulletProjectile"));
	}

	template <typename T = bool> T& StopTick() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayFlybySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopFlybySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayHitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayEnemyDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418DA80))(this);
	}
	template <typename T = void> T _PlayFlybySound() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418DB2C))(this);
	}
	template <typename T = void> T _StopFlybySound() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418DBC4))(this);
	}
	template <typename T = void> T _PlayHitSound() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418DC5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418DCF4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(BulletProjectile*, float))(Il2CppBase() + 0x418DD98))(this, DeltaTime);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(BulletProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x418DE58))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418E764))(this);
	}
	template <typename T = uintptr_t> T DisplayEnemyDie() {
		return ((T (*)(BulletProjectile*))(Il2CppBase() + 0x418E684))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BulletProjectile*, float))(Il2CppBase() + 0x418E80C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(BulletProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x418E814))(this, P0, P1, P2);
	}

};

}
