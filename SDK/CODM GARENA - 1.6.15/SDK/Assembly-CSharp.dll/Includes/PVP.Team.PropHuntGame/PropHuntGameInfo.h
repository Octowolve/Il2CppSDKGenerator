#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameInfo"));
	}

	template <typename T = uintptr_t> T& m_GamePeriod() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_PeriodTime() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& mIndivisualScore() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& mHighestPlayerID() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& mSecondaryPlayerID() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& mHighestScore() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& mSecondaryScore() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerScoreList() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RespawnAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPPropHuntGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncPlayerInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfoListBySort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHighestScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSecondaryScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHightestPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_m_phGame() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A1EDC))(this);
	}
	template <typename T = int32_t> T get_CurrentRoundCount() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A20A0))(this);
	}
	template <typename T = void> T set_CurrentRoundCount(int32_t value) {
		return ((T (*)(PropHuntGameInfo*, int32_t))(Il2CppBase() + 0x34A20A8))(this, value);
	}
	template <typename T = bool> T RespawnAfterDead() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A233C))(this);
	}
	template <typename T = bool> T get_IsShowPvpLoadout() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A23DC))(this);
	}
	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A23E4))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A23EC))(this);
	}
	template <typename T = bool> T IsMPPropHuntGame() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A23F4))(this);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A2494))(this);
	}
	template <typename T = bool> T IsShowKnife() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A2534))(this);
	}
	template <typename T = bool> T get_BloodEffectWithoutRestoreHP() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A25D4))(this);
	}
	template <typename T = uintptr_t> T get_GamePeriod() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A25DC))(this);
	}
	template <typename T = float> T get_PeriodTime() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A25E4))(this);
	}
	template <typename T = int32_t> T get_IndivisualScore() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A25EC))(this);
	}
	template <typename T = void> T set_IndivisualScore(int32_t value) {
		return ((T (*)(PropHuntGameInfo*, int32_t))(Il2CppBase() + 0x34A25F4))(this, value);
	}
	template <typename T = uint32_t> T get_HighestPlayerID() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A25FC))(this);
	}
	template <typename T = void> T set_HighestPlayerID(uint32_t value) {
		return ((T (*)(PropHuntGameInfo*, uint32_t))(Il2CppBase() + 0x34A2604))(this, value);
	}
	template <typename T = uint32_t> T get_SecondaryPlayerID() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A260C))(this);
	}
	template <typename T = void> T set_SecondaryPlayerID(uint32_t value) {
		return ((T (*)(PropHuntGameInfo*, uint32_t))(Il2CppBase() + 0x34A2614))(this, value);
	}
	template <typename T = int32_t> T get_HighestScore() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A261C))(this);
	}
	template <typename T = void> T set_HighestScore(int32_t value) {
		return ((T (*)(PropHuntGameInfo*, int32_t))(Il2CppBase() + 0x34A2624))(this, value);
	}
	template <typename T = int32_t> T get_SecondaryScore() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A262C))(this);
	}
	template <typename T = void> T set_SecondaryScore(int32_t value) {
		return ((T (*)(PropHuntGameInfo*, int32_t))(Il2CppBase() + 0x34A2634))(this, value);
	}
	template <typename T = bool> T UpdateScoreList(uint32_t playerID, int32_t score) {
		return ((T (*)(PropHuntGameInfo*, uint32_t, int32_t))(Il2CppBase() + 0x34A263C))(this, playerID, score);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A2C04))(this);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A2C0C))(this);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(PropHuntGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x34A2E28))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x34A3220))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntGameInfo*, float))(Il2CppBase() + 0x34A32FC))(this, deltaTime);
	}
	template <typename T = void> T SyncPlayerInfoProperty(uintptr_t playerInfo, uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34A33B0))(this, playerInfo, propertyID, value, varType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfoListBySort() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A363C))(this);
	}
	template <typename T = bool> T CheckHighestScore(uint32_t playerID, uint32_t scoreVal) {
		return ((T (*)(PropHuntGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x34A37F0))(this, playerID, scoreVal);
	}
	template <typename T = bool> T CheckSecondaryScore(uint32_t playerID, uint32_t scoreVal) {
		return ((T (*)(PropHuntGameInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x34A38B8))(this, playerID, scoreVal);
	}
	template <typename T = uint32_t> T GetHightestPlayerID() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3990))(this);
	}
	template <typename T = Il2CppString*> T GetCampIconName(uintptr_t camp) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t))(Il2CppBase() + 0x34A3A30))(this, camp);
	}
	template <typename T = int32_t> static T GetPlayerInfoListBySortm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34A3B18))(0, a, b);
	}
	template <typename T = bool> T xLuaBaseProxy_RespawnAfterDead() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3B64))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMPPropHuntGame() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3B6C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanTriggerKnife() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3B74))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowKnife() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3B7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged() {
		return ((T (*)(PropHuntGameInfo*))(Il2CppBase() + 0x34A3B84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(PropHuntGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x34A3B8C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0, uint64_t P1) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x34A3B94))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntGameInfo*, float))(Il2CppBase() + 0x34A3BB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SyncPlayerInfoProperty(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x34A3BBC))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetCampIconName(uintptr_t P0) {
		return ((T (*)(PropHuntGameInfo*, uintptr_t))(Il2CppBase() + 0x34A3BE0))(this, P0);
	}

};

}
