#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGame"));
	}

	template <typename T = float> T& m_BombDefuseRadius() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_BombGameObjectPool() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingVolumeList() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& IsBombDropped() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_BombGO() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& m_BombWarningGO() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = int32_t> T& m_DefusingPlayerNum() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& m_HasSetWarningRenderQueue() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> T& m_IsLocalPlayerInDefuseRadius() {
		return *(T*)((uintptr_t)this + 0x1BD);
	}
	template <typename T = Il2CppVector3> T& LastC4ExplodeLocation() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& m_BombGOReplay() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& m_BombWarningGOReplay() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& m_BombExplodeReplay() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_StartUseBombTime() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetObjectPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteObjectPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnBombGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnBombGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDroppedPickUpProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombItemSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombItemPickedUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombHasBeenPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombHasBeenDefused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnC4BombExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinalKillReplayC4BombExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayServerEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinalKillReplayC4BombItemSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinalKillC4BombDefusing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnReplayC4RelativeGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnC4RelativeGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombWarningGORenderQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseDefuserNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreaseDefuseNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOtherDefusingTheBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBombIfExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingPointLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerInDefuseRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPlayerInDefuseRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForcePlayC4Placing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartUseBombTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BombGame*, uintptr_t, bool))(Il2CppBase() + 0x40765B8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x40766DC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4076798))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407691C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4076E20))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4077644))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BombGame*, float))(Il2CppBase() + 0x4077A5C))(this, deltaTime);
	}
	template <typename T = void> T ResetObjectPool() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4076FE0))(this);
	}
	template <typename T = void> T DeleteObjectPool() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4077804))(this);
	}
	template <typename T = uintptr_t> T SpawnBombGameObject(uintptr_t inAssetID, Il2CppVector3 inSpawnPosition, Il2CppVector3 inSpawnEulerAngles) {
		return ((T (*)(BombGame*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4077E38))(this, inAssetID, inSpawnPosition, inSpawnEulerAngles);
	}
	template <typename T = void> T DespawnBombGameObject(uintptr_t inAssetID) {
		return ((T (*)(BombGame*, uintptr_t))(Il2CppBase() + 0x40781AC))(this, inAssetID);
	}
	template <typename T = void> T SyncDroppedPickUp(int32_t inActorID, int32_t inItemID, Il2CppVector3 inSyncPosition, float duration, Il2CppArray<uintptr_t>* attachments, Il2CppArray<uintptr_t>* skills, uint32_t skinID, uintptr_t type) {
		return ((T (*)(BombGame*, int32_t, int32_t, Il2CppVector3, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x40783D4))(this, inActorID, inItemID, inSyncPosition, duration, attachments, skills, skinID, type);
	}
	template <typename T = void> T SpawnDroppedPickUpProjectile(uintptr_t inParameterData, bool needPickupConfirm) {
		return ((T (*)(BombGame*, uintptr_t, bool))(Il2CppBase() + 0x4078720))(this, inParameterData, needPickupConfirm);
	}
	template <typename T = void> T OnC4BombItemSpawn(Il2CppVector3 inDroppedC4BombSpawnPosition) {
		return ((T (*)(BombGame*, Il2CppVector3))(Il2CppBase() + 0x407896C))(this, inDroppedC4BombSpawnPosition);
	}
	template <typename T = void> T OnC4BombItemPickedUp() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4078E20))(this);
	}
	template <typename T = void> T OnC4BombHasBeenPlanted(Il2CppVector3 inSpawnPosition) {
		return ((T (*)(BombGame*, Il2CppVector3))(Il2CppBase() + 0x4078FDC))(this, inSpawnPosition);
	}
	template <typename T = void> T OnC4BombHasBeenDefused() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407948C))(this);
	}
	template <typename T = void> T OnC4BombExplode(Il2CppVector3 inC4BombExplodePosition) {
		return ((T (*)(BombGame*, Il2CppVector3))(Il2CppBase() + 0x407976C))(this, inC4BombExplodePosition);
	}
	template <typename T = void> T OnFinalKillReplayC4BombExplode() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4079A40))(this);
	}
	template <typename T = void> T DelayServerEndMatch() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4079F20))(this);
	}
	template <typename T = void> T OnFinalKillReplayC4BombItemSpawn() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4079FF8))(this);
	}
	template <typename T = void> T OnFinalKillC4BombDefusing() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407A350))(this);
	}
	template <typename T = void> T DespawnReplayC4RelativeGameObject() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4079D24))(this);
	}
	template <typename T = void> T DespawnC4RelativeGameObject() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4079698))(this);
	}
	template <typename T = void> T SetBombWarningGORenderQueue(uintptr_t warningGO) {
		return ((T (*)(BombGame*, uintptr_t))(Il2CppBase() + 0x4078C34))(this, warningGO);
	}
	template <typename T = void> T ResetWeaponProjectile() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4076B70))(this);
	}
	template <typename T = void> T IncreaseDefuserNum() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407A3F4))(this);
	}
	template <typename T = void> T DecreaseDefuseNum() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407A590))(this);
	}
	template <typename T = bool> T IsOtherDefusingTheBomb() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407A72C))(this);
	}
	template <typename T = void> T ShowBombIfExist(bool show) {
		return ((T (*)(BombGame*, bool))(Il2CppBase() + 0x407A7D8))(this, show);
	}
	template <typename T = void> T AddPlacingVolume(uintptr_t placingVolume) {
		return ((T (*)(BombGame*, uintptr_t))(Il2CppBase() + 0x407A980))(this, placingVolume);
	}
	template <typename T = void> T RemoveAllPlacingVolume() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4076848))(this);
	}
	template <typename T = uintptr_t> T GetPlacingVolume(uintptr_t pointType) {
		return ((T (*)(BombGame*, uintptr_t))(Il2CppBase() + 0x407AA98))(this, pointType);
	}
	template <typename T = Il2CppVector3> T GetPlacingPointLocation() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407AC8C))(this);
	}
	template <typename T = uintptr_t> T GetPointType(uintptr_t pawn) {
		return ((T (*)(BombGame*, uintptr_t))(Il2CppBase() + 0x407AF7C))(this, pawn);
	}
	template <typename T = bool> T IsLocalPlayerInDefuseRadius() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B1EC))(this);
	}
	template <typename T = void> T CheckLocalPlayerInDefuseRadius() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x4077B18))(this);
	}
	template <typename T = bool> T IsForcePlayC4Placing() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B57C))(this);
	}
	template <typename T = void> T SetStartUseBombTime() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B664))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(BombGame*, uintptr_t, bool))(Il2CppBase() + 0x407B710))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(BombGame*))(Il2CppBase() + 0x407B730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BombGame*, float))(Il2CppBase() + 0x407B738))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncDroppedPickUp(int32_t P0, int32_t P1, Il2CppVector3 P2, float P3, Il2CppArray<uintptr_t>* P4, Il2CppArray<uintptr_t>* P5, uint32_t P6, uintptr_t P7) {
		return ((T (*)(BombGame*, int32_t, int32_t, Il2CppVector3, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x407B740))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T xLuaBaseProxy_SpawnDroppedPickUpProjectile(uintptr_t P0, bool P1) {
		return ((T (*)(BombGame*, uintptr_t, bool))(Il2CppBase() + 0x407B794))(this, P0, P1);
	}

};

}
