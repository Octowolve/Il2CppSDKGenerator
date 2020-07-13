#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_Sparrow"));
	}

	template <typename T = bool> T& IsDestroyByTrophySystem() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = uintptr_t> T& m_SparrowProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0xE8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyByTrophySystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileSparrow*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243F810))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileSparrow*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243F964))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T DestroyByTrophySystem() {
		return ((T (*)(WeaponProjectileSparrow*))(Il2CppBase() + 0x243FB80))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileSparrow*, float))(Il2CppBase() + 0x243FC2C))(this, DeltaTime);
	}
	template <typename T = bool> T IsCanShow() {
		return ((T (*)(WeaponProjectileSparrow*))(Il2CppBase() + 0x243FD18))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(WeaponProjectileSparrow*, bool))(Il2CppBase() + 0x243FAB0))(this, isShow);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileSparrow*))(Il2CppBase() + 0x243FF34))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileSparrow*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243FFEC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileSparrow*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x2440028))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyByTrophySystem() {
		return ((T (*)(WeaponProjectileSparrow*))(Il2CppBase() + 0x244007C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileSparrow*, float))(Il2CppBase() + 0x2440080))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileSparrow*))(Il2CppBase() + 0x2440084))(this);
	}

};

}
