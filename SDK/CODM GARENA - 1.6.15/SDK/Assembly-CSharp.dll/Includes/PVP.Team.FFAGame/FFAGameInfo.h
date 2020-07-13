#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGameInfo"));
	}

	template <typename T = int32_t> T& mIndivisualScore() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& mHighestScore() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& mSecondaryScore() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& mHighestPlayerID() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& mSecondaryPlayerID() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_MlkUavEndTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_MlkUavNextTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_MlkUavNextCheckTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& m_MlkUavLastCheckRe() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& m_MlkUavInit() {
		return *(T*)((uintptr_t)this + 0x139);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfoListBySort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSinglePVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHighestScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSecondaryScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SameTeamFromParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMlkUav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckMlkUav() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHightestPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuppressScoreChangeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016E00))(this);
	}
	template <typename T = uintptr_t> T get_TeammateType() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016EB8))(this);
	}
	template <typename T = bool> T get_ShowTeammateOnRadar() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016EC0))(this);
	}
	template <typename T = int32_t> T get_IndivisualScore() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016EC8))(this);
	}
	template <typename T = void> T set_IndivisualScore(int32_t value) {
		return ((T (*)(FFAGameInfo*, int32_t))(Il2CppBase() + 0x4016ED0))(this, value);
	}
	template <typename T = int32_t> T get_HighestScore() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016ED8))(this);
	}
	template <typename T = void> T set_HighestScore(int32_t value) {
		return ((T (*)(FFAGameInfo*, int32_t))(Il2CppBase() + 0x4016EE0))(this, value);
	}
	template <typename T = int32_t> T get_SecondaryScore() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016EE8))(this);
	}
	template <typename T = void> T set_SecondaryScore(int32_t value) {
		return ((T (*)(FFAGameInfo*, int32_t))(Il2CppBase() + 0x4016EF0))(this, value);
	}
	template <typename T = uint32_t> T get_HighestPlayerID() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016EF8))(this);
	}
	template <typename T = void> T set_HighestPlayerID(uint32_t value) {
		return ((T (*)(FFAGameInfo*, uint32_t))(Il2CppBase() + 0x4016F00))(this, value);
	}
	template <typename T = uint32_t> T get_SecondaryPlayerID() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016F08))(this);
	}
	template <typename T = void> T set_SecondaryPlayerID(uint32_t value) {
		return ((T (*)(FFAGameInfo*, uint32_t))(Il2CppBase() + 0x4016F10))(this, value);
	}
	template <typename T = uintptr_t> T get_ScoreType() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016F18))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(FFAGameInfo*, float))(Il2CppBase() + 0x4016F20))(this, deltaTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfoListBySort() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4017148))(this);
	}
	template <typename T = bool> T IsSinglePVPGame() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x40172FC))(this);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x401739C))(this);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40174D4))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = bool> T CheckHighestScore(uint32_t playerID, uint32_t scoreVal) {
		return ((T (*)(FFAGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x40177E8))(this, playerID, scoreVal);
	}
	template <typename T = bool> T CheckSecondaryScore(uint32_t playerID, uint32_t scoreVal) {
		return ((T (*)(FFAGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x40178B0))(this, playerID, scoreVal);
	}
	template <typename T = bool> T SameTeamFromInfo(uintptr_t player1, uintptr_t player2) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4017988))(this, player1, player2);
	}
	template <typename T = bool> T SameTeamFromPawn(uintptr_t pawn1, uintptr_t pawn2) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4017A80))(this, pawn1, pawn2);
	}
	template <typename T = bool> T SameTeamFromParameters(uint32_t id1, uint32_t id2, uintptr_t camp1, uintptr_t camp2) {
		return ((T (*)(FFAGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4017CA8))(this, id1, id2, camp1, camp2);
	}
	template <typename T = bool> T get_UAVEnabled() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4017D78))(this);
	}
	template <typename T = void> T CheckMlkUav() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4016FDC))(this);
	}
	template <typename T = bool> T DoCheckMlkUav() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4017DC0))(this);
	}
	template <typename T = uint32_t> T GetHightestPlayerID() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4017FC0))(this);
	}
	template <typename T = bool> T IsSuppressScoreChangeSound() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4018060))(this);
	}
	template <typename T = int32_t> static T GetPlayerInfoListBySortm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4018100))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x401828C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(FFAGameInfo*, float))(Il2CppBase() + 0x4018294))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSinglePVPGame() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x401829C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x40182A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40182AC))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40182D0))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromPawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(FFAGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40182D8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_SameTeamFromParameters(uint32_t P0, uint32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(FFAGameInfo*, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40182E0))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSuppressScoreChangeSound() {
		return ((T (*)(FFAGameInfo*))(Il2CppBase() + 0x4018304))(this);
	}

};

}
