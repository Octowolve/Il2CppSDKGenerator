#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZombieZoneMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZombieZoneMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ZombieZoneStatus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_BattleVolumeToZone() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_NeedCheckLeaveZone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MinWarningInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastShowWarningTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_MinCheckLeaveInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastCheckLeaveTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CacheCollider() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncZombieZoneStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZoneStatusFromBoxActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBoxStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAndCheckEntering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeaving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndProcessLeaveZones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCharacterCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInsideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEnterWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D39DAC))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3A1D0))(this, levelObject);
	}
	template <typename T = void> T Register(uintptr_t zone) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D39F04))(this, zone);
	}
	template <typename T = void> T UnRegister(uintptr_t zone) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3A328))(this, zone);
	}
	template <typename T = void> T OnSyncZombieZoneStatus(uintptr_t zombieData) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3A52C))(this, zombieData);
	}
	template <typename T = uintptr_t> T GetZoneStatusFromBoxActorID(uint32_t boxActorID) {
		return ((T (*)(BRZombieZoneMgr*, uint32_t))(Il2CppBase() + 0x3D3AA24))(this, boxActorID);
	}
	template <typename T = void> T NotifyBoxStatus(uint32_t boxActorID, uintptr_t status) {
		return ((T (*)(BRZombieZoneMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D3A744))(this, boxActorID, status);
	}
	template <typename T = void> T ProcessEnterTrigger(uintptr_t p, uintptr_t volume, uintptr_t zoneInfo) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3ACBC))(this, p, volume, zoneInfo);
	}
	template <typename T = void> T ProcessLeaveTrigger(uintptr_t p, uintptr_t volume, uintptr_t zoneInfo) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3B22C))(this, p, volume, zoneInfo);
	}
	template <typename T = bool> T UpdateAndCheckEntering(uintptr_t p, uintptr_t volume, uintptr_t zoneInfo) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3AEDC))(this, p, volume, zoneInfo);
	}
	template <typename T = void> T UpdateLeaving(uintptr_t p, uintptr_t volume, uintptr_t zoneInfo) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3B3A8))(this, p, volume, zoneInfo);
	}
	template <typename T = bool> T CheckAndProcessLeaveZones(uintptr_t zoneInfo) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3B598))(this, zoneInfo);
	}
	template <typename T = bool> T CheckCharacterCollision(uintptr_t pawn, Il2CppList<uintptr_t>* colliderList) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D3B710))(this, pawn, colliderList);
	}
	template <typename T = bool> T IsInsideVolume(uintptr_t pawn, uintptr_t volume) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D3BCFC))(this, pawn, volume);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRZombieZoneMgr*, float))(Il2CppBase() + 0x3D3BF54))(this, deltaTime);
	}
	template <typename T = void> T ShowEnterWarning(uint32_t zoneID, uintptr_t zoneType) {
		return ((T (*)(BRZombieZoneMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x3D3B068))(this, zoneID, zoneType);
	}
	template <typename T = void> T TriggerEnterExit(uintptr_t p, bool enter, uintptr_t volume) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3D3C238))(this, p, enter, volume);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3C614))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRZombieZoneMgr*, uintptr_t))(Il2CppBase() + 0x3D3C61C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRZombieZoneMgr*, float))(Il2CppBase() + 0x3D3C624))(this, P0);
	}

};

}
