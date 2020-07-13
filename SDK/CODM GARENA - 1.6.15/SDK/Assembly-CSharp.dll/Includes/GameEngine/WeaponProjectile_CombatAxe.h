#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileCombatAxe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_CombatAxe"));
	}

	template <typename T = uintptr_t> T& mCombatAxeProjFlightCmp() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& IsChangeStatus() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> static T& sRequestActorPoseTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mRequestActorPoseTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsSendActorPose() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& IsPickUp() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = uintptr_t> T& m_CombatAxeProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& IsPlaySound() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestoryWhenPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotCheckCloset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileCombatAxe*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x242C104))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileCombatAxe*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x242C298))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T PlayFlightSound() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242C414))(this);
	}
	template <typename T = void> T InitFlightEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242C6D0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileCombatAxe*, float))(Il2CppBase() + 0x242C89C))(this, DeltaTime);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242CD80))(this);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242CEF0))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242CEF8))(this);
	}
	template <typename T = void> T EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D008))(this);
	}
	template <typename T = bool> T IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D154))(this);
	}
	template <typename T = bool> T IsNotCheckCloset() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D224))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileCombatAxe*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x242D378))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileCombatAxe*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x242D3B4))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_InitFlightEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileCombatAxe*, float))(Il2CppBase() + 0x242D40C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D414))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D418))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D41C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNotCheckCloset() {
		return ((T (*)(WeaponProjectileCombatAxe*))(Il2CppBase() + 0x242D420))(this);
	}

};

}
