#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutGameInfo"));
	}

	template <typename T = void*> T& m_shootoutBoxId() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& m_goliathPlayerId() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& m_playerCampExchange() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& m_localPlayerCampExchange() {
		return *(T*)((uintptr_t)this + 0x145);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> T& m_playerScoreDic() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& m_firstGoliathMsg() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSinglePVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTeammateDiedIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangePawnTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangeAllEnemyAndTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLuaActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfoListBySort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw1PCamFirst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C0714))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C0818))(this);
	}
	template <typename T = bool> T get_ShowTeammateOnRadar() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C0820))(this);
	}
	template <typename T = bool> T IsSinglePVPGame() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C0828))(this);
	}
	template <typename T = bool> T ShowTeammateDiedIndicator() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C08C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C0968))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34C0A9C))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = void> T SyncPlayerInfoProperty_1(uint32_t PlayerID, Il2CppArray<uintptr_t>* propertyList, int32_t count, uintptr_t varType) {
		return ((T (*)(ShootOutGameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x34C1C6C))(this, PlayerID, propertyList, count, varType);
	}
	template <typename T = void> T ExchangePawnTeam(uint32_t playerId) {
		return ((T (*)(ShootOutGameInfo*, uint32_t))(Il2CppBase() + 0x34C1DF8))(this, playerId);
	}
	template <typename T = void> T ExchangeAllEnemyAndTeamMate() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C13D8))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C2244))(this);
	}
	template <typename T = void> T CreateLuaActor(uintptr_t luaActor, uint32_t actorID) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x34C224C))(this, luaActor, actorID);
	}
	template <typename T = void> T RemoveLuaActor(uint32_t actorId) {
		return ((T (*)(ShootOutGameInfo*, uint32_t))(Il2CppBase() + 0x34C2704))(this, actorId);
	}
	template <typename T = bool> T SameTeamFromPawn(uintptr_t pawn1, uintptr_t pawn2) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C28A8))(this, pawn1, pawn2);
	}
	template <typename T = bool> T SameTeamFromInfo(uintptr_t player1, uintptr_t player2) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C2A64))(this, player1, player2);
	}
	template <typename T = bool> T SameTeamFromParameters(uint32_t id1, uint32_t id2, uintptr_t camp1, uintptr_t camp2) {
		return ((T (*)(ShootOutGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C2B68))(this, id1, id2, camp1, camp2);
	}
	template <typename T = uintptr_t> T get_TeammateType() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C2C38))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfoListBySort() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C2C40))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C2FAC))(this);
	}
	template <typename T = Il2CppString*> T GetCampIconName(uintptr_t camp) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t))(Il2CppBase() + 0x34C2FB4))(this, camp);
	}
	template <typename T = bool> T Draw1PCamFirst() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C3084))(this);
	}
	template <typename T = int32_t> static T GetPlayerInfoListBySortm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C3124))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C32B0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSinglePVPGame() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C32B8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowTeammateDiedIndicator() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C32C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C32C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34C32D0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty_1(uint32_t P0, Il2CppArray<uintptr_t>* P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ShootOutGameInfo*, uint32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x34C32F4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLuaActor(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uint32_t))(Il2CppBase() + 0x34C3318))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveLuaActor(uint32_t P0) {
		return ((T (*)(ShootOutGameInfo*, uint32_t))(Il2CppBase() + 0x34C3320))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromPawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C3328))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C3330))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromParameters(uint32_t P0, uint32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ShootOutGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C3338))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetPlayerInfoListBySort() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C335C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetCampIconName(uintptr_t P0) {
		return ((T (*)(ShootOutGameInfo*, uintptr_t))(Il2CppBase() + 0x34C3364))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Draw1PCamFirst() {
		return ((T (*)(ShootOutGameInfo*))(Il2CppBase() + 0x34C336C))(this);
	}

};

}
