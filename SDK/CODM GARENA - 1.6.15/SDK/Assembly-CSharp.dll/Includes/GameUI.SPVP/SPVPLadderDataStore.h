#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SPVP {

class SPVPLadderDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SPVP", "SPVPLadderDataStore"));
	}

	template <typename T = bool> T& m_bFirstAfterLogin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bInGuilding() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacementModes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlacementMatchRecords() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_LadderRank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LadderScore() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bHasLadderLevelUp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_bHasLadderLevelUpPrize() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = float> T& LadderPercent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsInPromition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_TotalGameTimes() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_PromitionWinGameTimes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LobbyPromitionGameRecords() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_LobbyPromitionGameModeCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& bNeedResetSeason() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LobbyPromitionGameModes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FinalPromitionGameRecords() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_FinalPromitionGameModeCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FinalPromitionGameModes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_SeasonNoByServer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_ConfTotalGameTimes() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_LobbyPromitionNeedWinGameTimes() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& m_FinalPromitionNeedWinGameTimes() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SeasonBeginTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& SeasonEndTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_SeasonHistoryHightestLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_LastSeasonLadderLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& NewSeasonFlag() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_PromitionMatchData() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsValid() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& IsSwitchSeason() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& m_SeasonStateByClient() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& m_SeasonNoByClient() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_SeasonNoWhenLogin() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderPlacementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NexPlacementGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPromitionMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StoreProfileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PromitionMatchResultIsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StorePromitionMatchResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPromitionSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLadderInfoWhenChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLadderRankWhenChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsladderOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeasonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonStateByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonNoByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSeasonNo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T UserLogin(uint64_t playerId) {
		return ((T (*)(SPVPLadderDataStore*, uint64_t))(Il2CppBase() + 0x29995A4))(this, playerId);
	}
	template <typename T = bool> T get_bFirstAfterLogin() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999668))(this);
	}
	template <typename T = bool> T get_bInGuilding() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299967C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlacementModes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999684))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlacementMatchRecords() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299968C))(this);
	}
	template <typename T = void> T SetLadderPlacementInfo(uintptr_t dataRes) {
		return ((T (*)(SPVPLadderDataStore*, uintptr_t))(Il2CppBase() + 0x2999694))(this, dataRes);
	}
	template <typename T = uintptr_t> T NexPlacementGameMode() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999BE8))(this);
	}
	template <typename T = int32_t> T get_LadderRank() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999D60))(this);
	}
	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999D68))(this);
	}
	template <typename T = bool> T get_bHasLadderLevelUp() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999D70))(this);
	}
	template <typename T = void> T set_bHasLadderLevelUp(bool value) {
		return ((T (*)(SPVPLadderDataStore*, bool))(Il2CppBase() + 0x2999D78))(this, value);
	}
	template <typename T = bool> T get_bHasLadderLevelUpPrize() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999D80))(this);
	}
	template <typename T = void> T set_bHasLadderLevelUpPrize(bool value) {
		return ((T (*)(SPVPLadderDataStore*, bool))(Il2CppBase() + 0x2999D88))(this, value);
	}
	template <typename T = float> T get_LadderPercent() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999D90))(this);
	}
	template <typename T = void> T set_LadderPercent(float value) {
		return ((T (*)(SPVPLadderDataStore*, float))(Il2CppBase() + 0x2999D98))(this, value);
	}
	template <typename T = bool> T get_IsInPromition() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DA0))(this);
	}
	template <typename T = uint32_t> T get_TotalGameTime() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DA8))(this);
	}
	template <typename T = uint32_t> T get_PromitionWinGameTimes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DB0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LobbyPromitionGameRecords() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DB8))(this);
	}
	template <typename T = int32_t> T get_LobbyPromitionGameModeCount() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DC0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LobbyPromitionGameModes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DC8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PromitionGameModes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999DD0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FinalPromitionGameRecords() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E74))(this);
	}
	template <typename T = int32_t> T get_FinalPromitionGameModeCount() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E7C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FinalPromitionGameModes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E84))(this);
	}
	template <typename T = uint32_t> T get_SeasonNo() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E8C))(this);
	}
	template <typename T = uint32_t> T get_ConfTotalGameTimes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E94))(this);
	}
	template <typename T = uint32_t> T get_LobbyPromitionNeedWinGameTimes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999E9C))(this);
	}
	template <typename T = uint32_t> T get_FinalPromitionNeedWinGameTimes() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999EA4))(this);
	}
	template <typename T = bool> T IsPromitionMatch() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999EAC))(this);
	}
	template <typename T = int32_t> T get_SeasonHistoryHightestLevel() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299A05C))(this);
	}
	template <typename T = int32_t> T get_LastSeasonLadderLevel() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299A064))(this);
	}
	template <typename T = void> T StoreProfileData(uintptr_t res) {
		return ((T (*)(SPVPLadderDataStore*, uintptr_t))(Il2CppBase() + 0x299A06C))(this, res);
	}
	template <typename T = bool> T get_IsPromitionFinish() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299A6D8))(this);
	}
	template <typename T = bool> T get_IsLastMatchPromitionValid() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299A700))(this);
	}
	template <typename T = bool> T PromitionMatchResultIsValid() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x2999F9C))(this);
	}
	template <typename T = void> T StorePromitionMatchResult(uintptr_t res) {
		return ((T (*)(SPVPLadderDataStore*, uintptr_t))(Il2CppBase() + 0x299A728))(this, res);
	}
	template <typename T = bool> T IsPromitionSuccess() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299AD40))(this);
	}
	template <typename T = void> T UpdateLadderInfoWhenChange(int32_t score) {
		return ((T (*)(SPVPLadderDataStore*, int32_t))(Il2CppBase() + 0x299ADF8))(this, score);
	}
	template <typename T = void> T UpdateLadderRankWhenChange(int32_t ladderLevel) {
		return ((T (*)(SPVPLadderDataStore*, int32_t))(Il2CppBase() + 0x299AF04))(this, ladderLevel);
	}
	template <typename T = bool> static T IsladderOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x299AFAC))(0);
	}
	template <typename T = void> T ClearSeasonInfo() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B17C))(this);
	}
	template <typename T = bool> T IsSeasonTime() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B310))(this);
	}
	template <typename T = uint32_t> T get_SeasonNoWhenLogin() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B480))(this);
	}
	template <typename T = uintptr_t> T ComputeSeasonState(int32_t serverTime) {
		return ((T (*)(SPVPLadderDataStore*, int32_t))(Il2CppBase() + 0x299B590))(this, serverTime);
	}
	template <typename T = uintptr_t> T GetSeasonStateByClient() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B6CC))(this);
	}
	template <typename T = uint32_t> T GetSeasonNoByClient() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B76C))(this);
	}
	template <typename T = void> T ClearSeasonNo() {
		return ((T (*)(SPVPLadderDataStore*))(Il2CppBase() + 0x299B80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UserLogin(uint64_t P0) {
		return ((T (*)(SPVPLadderDataStore*, uint64_t))(Il2CppBase() + 0x299B8B0))(this, P0);
	}

};

}
