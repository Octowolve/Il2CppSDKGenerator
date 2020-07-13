#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGame"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_WhistlePawns() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> static T& m_WhistleInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_WhistleTimeCnt() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& m_WhistleTotalCnt() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& m_WhistleCurCnt() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_PropHuntSceneItemMgr() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> static T& ms_LocalPlayerWorldCameraFOV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayersRoundStartCoin() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnCfgPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PropItemWhistle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedProjectileExplosion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPropItemFlashExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpectateSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanSpectate3pView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_PropHuntSceneItemMgr() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349827C))(this);
	}
	template <typename T = float> static T get_LocalPlayerWorldCameraFOV() {
		return ((T (*)(void *))(Il2CppBase() + 0x3498284))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlayersRoundStartCoin() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x3497CC0))(this);
	}
	template <typename T = void> T RecordPlayerData() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x3498424))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x34987E8))(this);
	}
	template <typename T = int32_t> T GetPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(PropHuntGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x34988B8))(this, PlayerID, RoleID, camp);
	}
	template <typename T = int32_t> T GetOtherPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(PropHuntGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x34989CC))(this, PlayerID, RoleID, camp);
	}
	template <typename T = uintptr_t> T CreatePlayerController(uintptr_t camp, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(PropHuntGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3498AE0))(this, camp, SpawnLocation, SpawnRotation);
	}
	template <typename T = uintptr_t> T DoSpawnPawn(uint32_t playerID, uint64_t roleID, uint32_t actorID, bool isLocalPawn, uintptr_t camp, Il2CppString* pawnCfgPath, int32_t pawnType, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation) {
		return ((T (*)(PropHuntGame*, uint32_t, uint64_t, uint32_t, bool, uintptr_t, Il2CppString*, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3499088))(this, playerID, roleID, actorID, isLocalPawn, camp, pawnCfgPath, pawnType, SpawnLocation, SpawnRotation);
	}
	template <typename T = void> T GetPawnCfgPath(uintptr_t camp, uintptr_t path) {
		return ((T (*)(PropHuntGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34992E0))(this, camp, path);
	}
	template <typename T = uintptr_t> T SpawnLocalPawn(uintptr_t controller, uint32_t PlayerID, uint64_t RoleID, uint32_t actorID, Il2CppVector3 SpawnLocation, Il2CppQuaternion SpawnRotation, uintptr_t camp) {
		return ((T (*)(PropHuntGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x349968C))(this, controller, PlayerID, RoleID, actorID, SpawnLocation, SpawnRotation, camp);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(PropHuntGame*, uintptr_t))(Il2CppBase() + 0x3499A14))(this, levelObject);
	}
	template <typename T = void> T RefreshTeamPawns() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x3499E78))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntGame*, float))(Il2CppBase() + 0x349A298))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349A7A8))(this);
	}
	template <typename T = void> T PropItemWhistle() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349A878))(this);
	}
	template <typename T = void> T SimulatedProjectileExplosion(int32_t projID, int32_t weaponID, Il2CppVector3 ExplodeLocation, uintptr_t type, float atTime, bool canBeDestroyed) {
		return ((T (*)(PropHuntGame*, int32_t, int32_t, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x349ABD4))(this, projID, weaponID, ExplodeLocation, type, atTime, canBeDestroyed);
	}
	template <typename T = void> T DoPropItemFlashExplode(Il2CppVector3 ExplodeLocation) {
		return ((T (*)(PropHuntGame*, Il2CppVector3))(Il2CppBase() + 0x349AE3C))(this, ExplodeLocation);
	}
	template <typename T = bool> T CheckSpectateSameTeam(uintptr_t viewPawn) {
		return ((T (*)(PropHuntGame*, uintptr_t))(Il2CppBase() + 0x349B924))(this, viewPawn);
	}
	template <typename T = bool> T IsCanSpectate3pView() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349B9CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349BA6C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(PropHuntGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x349BA74))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetOtherPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(PropHuntGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x349BAA0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerController(uintptr_t P0, Il2CppVector3 P1, Il2CppQuaternion P2) {
		return ((T (*)(PropHuntGame*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x349BACC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_DoSpawnPawn(uint32_t P0, uint64_t P1, uint32_t P2, bool P3, uintptr_t P4, Il2CppString* P5, int32_t P6, Il2CppVector3 P7, Il2CppQuaternion P8) {
		return ((T (*)(PropHuntGame*, uint32_t, uint64_t, uint32_t, bool, uintptr_t, Il2CppString*, int32_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x349BB10))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnLocalPawn(uintptr_t P0, uint32_t P1, uint64_t P2, uint32_t P3, Il2CppVector3 P4, Il2CppQuaternion P5, uintptr_t P6) {
		return ((T (*)(PropHuntGame*, uintptr_t, uint32_t, uint64_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x349BB88))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(PropHuntGame*, uintptr_t))(Il2CppBase() + 0x349BBE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTeamPawns() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349BBF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntGame*, float))(Il2CppBase() + 0x349BBF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349BC00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedProjectileExplosion(int32_t P0, int32_t P1, Il2CppVector3 P2, uintptr_t P3, float P4, bool P5) {
		return ((T (*)(PropHuntGame*, int32_t, int32_t, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x349BC08))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckSpectateSameTeam(uintptr_t P0) {
		return ((T (*)(PropHuntGame*, uintptr_t))(Il2CppBase() + 0x349BC4C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanSpectate3pView() {
		return ((T (*)(PropHuntGame*))(Il2CppBase() + 0x349BC54))(this);
	}

};

}
