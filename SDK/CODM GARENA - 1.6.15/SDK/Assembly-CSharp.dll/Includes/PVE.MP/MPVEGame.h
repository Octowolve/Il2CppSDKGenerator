#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVEGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVEGame"));
	}

	template <typename T = uintptr_t> T& ModifierManager() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& LifelineManager_DamageShare() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& LifelineManager_GroupShield() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingZMLevelObjectList() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingPerkMachineList() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingOffWallWeaponList() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingBuffMachineList() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacingPAPMachineList() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllBloodDecals() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_HighLightAreas() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& m_TaskInfoKey() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_PendingKillPawnList() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& m_FireArea_Wall() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& DyingTeammatesList() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnNonPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddReviveTriggerVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMonsterPendingKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleActorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PAPSpawnDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlacingZMLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllZMLevelObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHighLightArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllHighLightArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveHighLighArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllHighLightArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingPerkMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingBuffMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingOffWallWeaponStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlacingPAPMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFireWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDyingTeammates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T get_ModifierManager() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C4C))(this);
	}
	template <typename T = void> T set_ModifierManager(uintptr_t value) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4625C54))(this, value);
	}
	template <typename T = uintptr_t> T get_LifelineManager_DamageShare() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C5C))(this);
	}
	template <typename T = void> T set_LifelineManager_DamageShare(uintptr_t value) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4625C64))(this, value);
	}
	template <typename T = uintptr_t> T get_LifelineManager_GroupShield() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C6C))(this);
	}
	template <typename T = void> T set_LifelineManager_GroupShield(uintptr_t value) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4625C74))(this, value);
	}
	template <typename T = bool> T get_IsClearAllDroppedPickUpOnRoundStart() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C7C))(this);
	}
	template <typename T = Il2CppString*> T get_TaskInfoKey() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C84))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625C8C))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4625D34))(this);
	}
	template <typename T = int32_t> T GetPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(MPVEGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x4625E3C))(this, PlayerID, RoleID, camp);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4625F0C))(this, levelObject);
	}
	template <typename T = void> T PlayerLogin(uint32_t playerID, uint32_t actorID, uintptr_t camp, Il2CppString* nickName, unsigned char loginMsg, int32_t picId, int32_t frameId, Il2CppString* PicUrl, int32_t LadderScore, uint64_t roleID, int32_t MoveState, int32_t LadderLevel, uint32_t ownerPlayerID) {
		return ((T (*)(MPVEGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x4626084))(this, playerID, actorID, camp, nickName, loginMsg, picId, frameId, PicUrl, LadderScore, roleID, MoveState, LadderLevel, ownerPlayerID);
	}
	template <typename T = void> T PlayerLogout(uint32_t playerID) {
		return ((T (*)(MPVEGame*, uint32_t))(Il2CppBase() + 0x4626284))(this, playerID);
	}
	template <typename T = uintptr_t> T OnSpawnNonPlayer(uintptr_t Msg) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x46263C8))(this, Msg);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4626954))(this, viewTarget);
	}
	template <typename T = void> T AddReviveTriggerVolume(Il2CppVector3 pos, int32_t actorID, int32_t itemID, int32_t duration) {
		return ((T (*)(MPVEGame*, Il2CppVector3, int32_t, int32_t, int32_t))(Il2CppBase() + 0x460E9BC))(this, pos, actorID, itemID, duration);
	}
	template <typename T = bool> T IsMonsterPendingKill(uint64_t uPlayerID) {
		return ((T (*)(MPVEGame*, uint64_t))(Il2CppBase() + 0x460C2A0))(this, uPlayerID);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4626C48))(this);
	}
	template <typename T = bool> T HandleActorEvent(uintptr_t Msg) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4626D28))(this, Msg);
	}
	template <typename T = uintptr_t> T PAPSpawnDroppedPickUp(Il2CppVector3 inDroppedPosition, int32_t actorID, int32_t itemID, uint32_t OwnerID, uint32_t PapId, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool needPickupConfirm, int32_t duration, uint32_t skinID, int32_t itemNum, uintptr_t type, int32_t param1) {
		return ((T (*)(MPVEGame*, Il2CppVector3, int32_t, int32_t, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4626F4C))(this, inDroppedPosition, actorID, itemID, OwnerID, PapId, attachmentID, weaponSkillID, needPickupConfirm, duration, skinID, itemNum, type, param1);
	}
	template <typename T = uintptr_t> T CreatePlayerController(uintptr_t camp, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(MPVEGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4627380))(this, camp, SpawnLocation, SpawnRotation);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x46275FC))(this);
	}
	template <typename T = void> T AddPlacingZMLevelObject(uintptr_t Object) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4627944))(this, Object);
	}
	template <typename T = void> T RemoveAllZMLevelObjects() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x46276EC))(this);
	}
	template <typename T = void> T AddHighLightArea(uintptr_t area) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4627CF8))(this, area);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetAllHighLightArea() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4627E18))(this);
	}
	template <typename T = void> T ActiveHighLighArea(Il2CppString* name, bool bActive) {
		return ((T (*)(MPVEGame*, Il2CppString*, bool))(Il2CppBase() + 0x4627EB8))(this, name, bActive);
	}
	template <typename T = void> T RemoveAllHighLightArea() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4627870))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlacingPerkMachine() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x462801C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlacingBuffMachine() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x46280BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlacingOffWallWeaponStore() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x462815C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlacingPAPMachine() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x46281FC))(this);
	}
	template <typename T = void> T CreateFireWall() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x462829C))(this);
	}
	template <typename T = void> T AddDyingTeammates(uint32_t playerid) {
		return ((T (*)(MPVEGame*, uint32_t))(Il2CppBase() + 0x461C4F4))(this, playerid);
	}
	template <typename T = void> T RemoveDyingTeammates(uint32_t playerid) {
		return ((T (*)(MPVEGame*, uint32_t))(Il2CppBase() + 0x461C60C))(this, playerid);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4628414))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x462841C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(MPVEGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x4628424))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x4628450))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogin(uint32_t P0, uint32_t P1, uintptr_t P2, Il2CppString* P3, unsigned char P4, int32_t P5, int32_t P6, Il2CppString* P7, int32_t P8, uint64_t P9, int32_t P10, int32_t P11, uint32_t P12) {
		return ((T (*)(MPVEGame*, uint32_t, uint32_t, uintptr_t, Il2CppString*, unsigned char, int32_t, int32_t, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x4628458))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
	}
	template <typename T = void> T xLuaBaseProxy_PlayerLogout(uint32_t P0) {
		return ((T (*)(MPVEGame*, uint32_t))(Il2CppBase() + 0x46284C8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_OnSpawnNonPlayer(uintptr_t P0) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x46284D0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x46284D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x46284E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_HandleActorEvent(uintptr_t P0) {
		return ((T (*)(MPVEGame*, uintptr_t))(Il2CppBase() + 0x46284E8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerController(uintptr_t P0, Il2CppVector3 P1, Il2CppQuaternion P2) {
		return ((T (*)(MPVEGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x46284F0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MPVEGame*))(Il2CppBase() + 0x4628534))(this);
	}

};

}
