#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponProjectileStick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponProjectile_Stick"));
	}

	template <typename T = uintptr_t> T& m_StickTransform() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& m_StickRelativePos() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint32_t> T& StickPawnID() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& attackableTarget() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_HitGroup() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_RelativeActorPos() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& m_HitNormal() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uint32_t> T& m_HostID() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_HostType() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_IsRequestStick() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& IsLoclPawn() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulatorPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSticked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestProjectileStickOnTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindHitPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProjectileStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A68420))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A640F0))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T PlaySound(Il2CppString* sound) {
		return ((T (*)(WeaponProjectileStick*, Il2CppString*))(Il2CppBase() + 0x3A68558))(this, sound);
	}
	template <typename T = void> T PlayFlightEffect() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A686F0))(this);
	}
	template <typename T = bool> T IsStick(uint32_t pawnID) {
		return ((T (*)(WeaponProjectileStick*, uint32_t))(Il2CppBase() + 0x3A687BC))(this, pawnID);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A651B8))(this);
	}
	template <typename T = Il2CppVector3> T GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A68870))(this);
	}
	template <typename T = void> T PostSticked(Il2CppVector3 stickNormal) {
		return ((T (*)(WeaponProjectileStick*, Il2CppVector3))(Il2CppBase() + 0x3A67324))(this, stickNormal);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t))(Il2CppBase() + 0x3A689F4))(this, info);
	}
	template <typename T = void> T RequestProjectileStickOnTarget() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A61028))(this);
	}
	template <typename T = uintptr_t> T FindHitPart(uintptr_t pawn, uintptr_t group) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A69718))(this, pawn, group);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t msg) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t))(Il2CppBase() + 0x3A698E8))(this, msg);
	}
	template <typename T = void> T OnSiumlateStick_1(uintptr_t msg) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t))(Il2CppBase() + 0x3A69B48))(this, msg);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileStick*, float))(Il2CppBase() + 0x3A645F0))(this, DeltaTime);
	}
	template <typename T = void> T OnSiumlateStick_2(bool isNtf, int32_t actroid, uintptr_t hostType, uint32_t hostID, Il2CppVector3 pos, Il2CppVector3 dir, unsigned char parts, uint32_t ownerID) {
		return ((T (*)(WeaponProjectileStick*, bool, int32_t, uintptr_t, uint32_t, Il2CppVector3, Il2CppVector3, unsigned char, uint32_t))(Il2CppBase() + 0x3A66A48))(this, isNtf, actroid, hostType, hostID, pos, dir, parts, ownerID);
	}
	template <typename T = void> T OnProjectileStick(bool confirmed) {
		return ((T (*)(WeaponProjectileStick*, bool))(Il2CppBase() + 0x3A613F0))(this, confirmed);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A69E08))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileStick*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3A69E4C))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFlightEffect() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A69EA4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsStick(uint32_t P0) {
		return ((T (*)(WeaponProjectileStick*, uint32_t))(Il2CppBase() + 0x3A69EAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A69EB4))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetSimulatorPosition() {
		return ((T (*)(WeaponProjectileStick*))(Il2CppBase() + 0x3A69EBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileStick*, uintptr_t))(Il2CppBase() + 0x3A69ED0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileStick*, float))(Il2CppBase() + 0x3A69ED8))(this, P0);
	}

};

}
