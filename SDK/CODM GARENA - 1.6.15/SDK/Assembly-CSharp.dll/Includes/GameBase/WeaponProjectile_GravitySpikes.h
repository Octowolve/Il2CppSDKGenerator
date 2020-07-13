#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponProjectileGravitySpikes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponProjectile_GravitySpikes"));
	}

	template <typename T = int32_t> T& CircularSectorExplodeAssetID_1P() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& CircularSectorExplodeAssetID() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& ExplosionEffectCount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& TotalAngle() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CSExplosionEffectList() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_Hit() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& MaxStartSpeed_1P() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& MaxStartSpeed() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCSExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileGravitySpikes*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A629B0))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T PlayExplosionEffect(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectileGravitySpikes*, Il2CppVector3, float))(Il2CppBase() + 0x3A62BB0))(this, pos, atTime);
	}
	template <typename T = void> T PlayCSExplosionEffect(int32_t effectID, Il2CppVector3 pos, float atTime, Il2CppQuaternion rotation, float maxStartSpeed) {
		return ((T (*)(WeaponProjectileGravitySpikes*, int32_t, Il2CppVector3, float, Il2CppQuaternion, float))(Il2CppBase() + 0x3A62FE8))(this, effectID, pos, atTime, rotation, maxStartSpeed);
	}
	template <typename T = float> T GetStartSpeed(float distance, float maxStartSpeed) {
		return ((T (*)(WeaponProjectileGravitySpikes*, float, float))(Il2CppBase() + 0x3A63868))(this, distance, maxStartSpeed);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileGravitySpikes*))(Il2CppBase() + 0x3A63960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileGravitySpikes*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A63BF0))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect(Il2CppVector3 P0, float P1) {
		return ((T (*)(WeaponProjectileGravitySpikes*, Il2CppVector3, float))(Il2CppBase() + 0x3A63C48))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(WeaponProjectileGravitySpikes*))(Il2CppBase() + 0x3A63C70))(this);
	}

};

}
