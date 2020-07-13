#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileElectricTripWire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_ElectricTripWire"));
	}

	template <typename T = float> T& MaxDistanceToBase() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& BaseHeight() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_HasSendRequestToServer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppQuaternion> T& m_ExplodeEffectRotation() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSpawnElectricTripWireRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindValidPlacingPositionForBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionEffectSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x242D53C))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileElectricTripWire*, float))(Il2CppBase() + 0x242D748))(this, DeltaTime);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileElectricTripWire*))(Il2CppBase() + 0x242DE20))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileElectricTripWire*))(Il2CppBase() + 0x242DEC4))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x242DF5C))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T SendSpawnElectricTripWireRequest() {
		return ((T (*)(WeaponProjectileElectricTripWire*))(Il2CppBase() + 0x242D8B0))(this);
	}
	template <typename T = void> T FindValidPlacingPositionForBase(Il2CppVector3 originPosition, Il2CppVector3 ownerRightDirection, uintptr_t srcElectricTripWireBasePostion, uintptr_t dstElectricTripWireBasePostion) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x242E04C))(this, originPosition, ownerRightDirection, srcElectricTripWireBasePostion, dstElectricTripWireBasePostion);
	}
	template <typename T = void> T PlayExplosionEffect(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, float))(Il2CppBase() + 0x242F1C4))(this, pos, atTime);
	}
	template <typename T = void> T PlayExplosionEffectSelf(Il2CppVector3 pos, float atTime) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, float))(Il2CppBase() + 0x242ED24))(this, pos, atTime);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x242F288))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileElectricTripWire*, float))(Il2CppBase() + 0x242F2DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileElectricTripWire*))(Il2CppBase() + 0x242F2E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileElectricTripWire*))(Il2CppBase() + 0x242F2E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x242F2E8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplosionEffect(Il2CppVector3 P0, float P1) {
		return ((T (*)(WeaponProjectileElectricTripWire*, Il2CppVector3, float))(Il2CppBase() + 0x242F30C))(this, P0, P1);
	}

};

}
