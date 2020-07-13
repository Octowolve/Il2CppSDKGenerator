#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEPlayerPawn"));
	}

	template <typename T = bool> T& m_CanAutoRecoverHealth() {
		return *(T*)((uintptr_t)this + 0xBCB);
	}
	template <typename T = float> T& m_HealthRecoverDelayTime() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = float> T& m_HealthRecoveredPerSecond() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = float> T& m_LastTakeDamageTime() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = float> T& m_HealthRecoverInterval() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = float> T& m_LastHealthRecoverTime() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = uintptr_t> T& m_VelocityAngleRange() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = float> T& CollideWithAIRadius() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = int32_t> T& m_LastGiveWeaponID() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRespawnProtection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWhetherBumpedWithAI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoRecoverHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitBloodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4048B44))(this);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4048B4C))(this);
	}
	template <typename T = void> T CheckRespawnProtection() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4048B54))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x4048BEC))(this, deltaTime);
	}
	template <typename T = void> T PerformPhysics(float deltaTime) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x40490A0))(this, deltaTime);
	}
	template <typename T = void> T CheckWhetherBumpedWithAI() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x404920C))(this);
	}
	template <typename T = void> T AutoRecoverHealth() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4048D8C))(this);
	}
	template <typename T = void> T PlayHitEffect(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(PVEPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4049794))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T PlayHitBloodEffect(Il2CppVector3 pos, uintptr_t info) {
		return ((T (*)(PVEPlayerPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4049848))(this, pos, info);
	}
	template <typename T = void> T PhysFalling(float deltaTime) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x4049908))(this, deltaTime);
	}
	template <typename T = float> T get_LastTakeDamageTime() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x40499C4))(this);
	}
	template <typename T = void> T set_LastTakeDamageTime(float value) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x40499CC))(this, value);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x40499D4))(this);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4049C3C))(this);
	}
	template <typename T = uintptr_t> T GiveWeapon_1(int32_t weaponID, unsigned char slot, bool bAddForce, Il2CppList<uintptr_t>* partInfoList, uint32_t skinID, int32_t actorID, int32_t weaponLevel, int32_t crossHairItemID) {
		return ((T (*)(PVEPlayerPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4049DE0))(this, weaponID, slot, bAddForce, partInfoList, skinID, actorID, weaponLevel, crossHairItemID);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x4049FD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckRespawnProtection() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x404A0D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x404A0D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PerformPhysics(float P0) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x404A0E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitEffect(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVEPlayerPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x404A0E8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitBloodEffect(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(PVEPlayerPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x404A0F0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PhysFalling(float P0) {
		return ((T (*)(PVEPlayerPawn*, float))(Il2CppBase() + 0x404A114))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x404A11C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x404A124))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GiveWeapon_1(int32_t P0, unsigned char P1, bool P2, Il2CppList<uintptr_t>* P3, uint32_t P4, int32_t P5, int32_t P6, int32_t P7) {
		return ((T (*)(PVEPlayerPawn*, int32_t, unsigned char, bool, Il2CppList<uintptr_t>*, uint32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x404A12C))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(PVEPlayerPawn*))(Il2CppBase() + 0x404A170))(this);
	}

};

}
