#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGame"));
	}

	template <typename T = bool> T& IsBombDropped() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = uintptr_t> T& m_BombGO() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& m_BombWarningGO() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& m_HasSetWarningRenderQueue() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& DyingTeammatesList() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_BombGameObjectPool() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingVolumeList() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterExtraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterCommonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetObjectPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteObjectPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombItemSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombItemPickedUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnBombGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombWarningGORenderQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnBombGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D1F10))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D21D0))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D2354))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D244C))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D2504))(this);
	}
	template <typename T = void> T EnterExtraTime() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D286C))(this);
	}
	template <typename T = void> T EnterCommonTime() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D2934))(this);
	}
	template <typename T = void> T ResetObjectPool() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D1FC8))(this);
	}
	template <typename T = void> T DeleteObjectPool() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D2614))(this);
	}
	template <typename T = void> T SyncDroppedPickUp(int32_t inActorID, int32_t inItemID, Il2CppVector3 inSyncPosition, float duration, Il2CppArray<uintptr_t>* attachments, Il2CppArray<uintptr_t>* skills, uint32_t skinID, uintptr_t type) {
		return ((T (*)(TacticalCombatGame*, int32_t, int32_t, Il2CppVector3, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x34D29FC))(this, inActorID, inItemID, inSyncPosition, duration, attachments, skills, skinID, type);
	}
	template <typename T = void> T OnC4BombItemSpawn(Il2CppVector3 inDroppedC4BombSpawnPosition) {
		return ((T (*)(TacticalCombatGame*, Il2CppVector3))(Il2CppBase() + 0x34D2D48))(this, inDroppedC4BombSpawnPosition);
	}
	template <typename T = void> T OnC4BombItemPickedUp() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D37B0))(this);
	}
	template <typename T = uintptr_t> T SpawnBombGameObject(uintptr_t inAssetID, Il2CppVector3 inSpawnPosition, Il2CppVector3 inSpawnEulerAngles) {
		return ((T (*)(TacticalCombatGame*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x34D3250))(this, inAssetID, inSpawnPosition, inSpawnEulerAngles);
	}
	template <typename T = void> T SetBombWarningGORenderQueue(uintptr_t warningGO) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D35C4))(this, warningGO);
	}
	template <typename T = void> T DespawnBombGameObject(uintptr_t inAssetID) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D396C))(this, inAssetID);
	}
	template <typename T = void> T AddPlacingVolume(uintptr_t placingVolume) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D3B94))(this, placingVolume);
	}
	template <typename T = void> T RemoveAllPlacingVolume() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D2280))(this);
	}
	template <typename T = uintptr_t> T GetPlacingVolume(uintptr_t pointType) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D3CAC))(this, pointType);
	}
	template <typename T = void> T AddDyingTeammates(uint32_t playerid) {
		return ((T (*)(TacticalCombatGame*, uint32_t))(Il2CppBase() + 0x34D3EA0))(this, playerid);
	}
	template <typename T = void> T RemoveDyingTeammates(uint32_t playerid) {
		return ((T (*)(TacticalCombatGame*, uint32_t))(Il2CppBase() + 0x34D3FB8))(this, playerid);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D40D0))(this, viewTarget);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D41B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D41C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D41C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D41D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(TacticalCombatGame*))(Il2CppBase() + 0x34D41D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncDroppedPickUp(int32_t P0, int32_t P1, Il2CppVector3 P2, float P3, Il2CppArray<uintptr_t>* P4, Il2CppArray<uintptr_t>* P5, uint32_t P6, uintptr_t P7) {
		return ((T (*)(TacticalCombatGame*, int32_t, int32_t, Il2CppVector3, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x34D41E0))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(TacticalCombatGame*, uintptr_t))(Il2CppBase() + 0x34D4234))(this, P0);
	}

};

}
