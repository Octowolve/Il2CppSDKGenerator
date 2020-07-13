#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDataStore"));
	}

	template <typename T = int32_t> static T& MAX_PLAYER_PER_CAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_PLAYER_IN_FFA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_PLAYER_IN_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_PLAYER_IN_ZMMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BattlePassDb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponExpList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponExpCardList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayAgainData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AlivePlayerStatis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BRKillerPlayerStatis() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BRHurterPlayerStatis() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PersonalInfoHistoryData() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_isValidInThisGame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_bReachWeekLimit() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& m_isFirstPlayBgMusic() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsHistoryRecord() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsObserver() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int32_t> T& m_MapID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_GameTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_GameModeCategory() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_GameMode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PVERaidEasyMapID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& PVERaidEasyModeID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Gametype() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_GameEndTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_PveLevelId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_MatchResult() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_WinningCamp() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& m_TeamType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_TotalTeamNum() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_TotalPlayerNum() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint64_t> T& m_Gsp_Guid() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_MissionId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsLocalPlayerPlacementMatch() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_IsLocalPlayerPlacementModeMatch() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = uintptr_t> T& m_CampDataBlue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CampDataRed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CampDataWin() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CampDataLose() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_CampDataFFA() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CampDataBR() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CampDataZMMP() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerCamp() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_SimpleCampDataRegular() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SimpleCampDataRebel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_LiveOpsGold() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_LiveOpsExp() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = uintptr_t> T& m_GameServiceModule() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerGameStatis() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerPicInfo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerBagWeaponStatis() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& m_LocalPlayerName() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& m_LocalPlayerRank() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& m_LocalPlayerLadderLevel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBRLadderLevel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint32_t> T& m_LocalPlayerTeamId() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint32_t> T& m_LocalPlayerTeamRank() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> T& m_LocalPlayerSurvivalTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedGold() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedKillGold() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedRankGold() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedExp() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedKillExp() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint32_t> T& m_LocalPlayerBrGainedRankExp() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& m_LocalPlayerBrAddLadderScore() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& m_LocalPlayerBrLadderScore() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PrizeDetailList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExpBufList() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponExpBufList() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GoldBufList() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& IsGoldExceedDailyCap() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& IsExpExceedDailyCap() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = bool> T& IsDropItemsExceedDailyCap() {
		return *(T*)((uintptr_t)this + 0x112);
	}
	template <typename T = Il2CppString*> static T& Tip_ExceedDailyCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& m_LocalPlayerId() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& m_LocalPlayercurLevel() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_LocalPlayerPeakLevel() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& m_LocalPlayerGainedExp() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint32_t> T& m_LocalPlayerGainedIDCollection() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_ExpDetails() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerWeaponSuiteBonus() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_LocalPlayerWeaponSuiteIds() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponExpDetails() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& m_LocalPlayerCurrExp() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& m_LocalPlayerGainedGold() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& m_LocalPlayerLadderScore() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& m_LocalPlayerLadderScoreChange() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& m_LocalPlayerKill() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& m_LocalPlayerDeath() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& m_LocalPlayerAssists() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerZMGainItems() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerDropItems() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerGainItems() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& m_TurnToMail() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& m_IsFirstWin() {
		return *(T*)((uintptr_t)this + 0x169);
	}
	template <typename T = bool> T& m_ActvAddScore() {
		return *(T*)((uintptr_t)this + 0x16A);
	}
	template <typename T = bool> T& m_ActvNoDropScore() {
		return *(T*)((uintptr_t)this + 0x16B);
	}
	template <typename T = bool> T& m_bNewEndlessRecord() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& IsFirst5Games() {
		return *(T*)((uintptr_t)this + 0x16D);
	}
	template <typename T = uint32_t> T& Evaluation() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerMedals() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LocalPlayerAchive() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& m_brTeamGameState() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Team_statis() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DropedPlayerStatis() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& ShowSpecialReason() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_PlayerListReported() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = bool> static T& ShowPVEReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& CloseBGMTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = float> T& m_MinIndividualDelayTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_MaxIndividualDelayTime() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_IndividualDelayTimeGap() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& IsExpDetilUIPlayEffect() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& IsRankUIPlayEffect() {
		return *(T*)((uintptr_t)this + 0x1A1);
	}
	template <typename T = bool> T& IsBPUIPlayEffect() {
		return *(T*)((uintptr_t)this + 0x1A2);
	}
	template <typename T = bool> T& IsBPVIPUIPlayEffect() {
		return *(T*)((uintptr_t)this + 0x1A3);
	}
	template <typename T = bool> T& isClickDetailBtn() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& isClickDetailScoreDetailBtn() {
		return *(T*)((uintptr_t)this + 0x1A5);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HasSettlementData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPersonalInfoHisotryRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLastPersonalInfoHistoryRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastPersonalInfoHistoryRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillAlivePlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillKillerPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillHurterPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResMatchEndSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeBossDamagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalPlayerRelated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillPlayerStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillSimplePlayerStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillExpDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSPVPTop3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTopThree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMedalConfigConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAchiveConfigConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGainItemsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFriendInSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDelayIndividual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDelayIndividualTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsCanShowBPView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseV5BP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = bool> T T_HasSettlementData() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B2BC))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2939EDC))(this);
	}
	template <typename T = uintptr_t> T get_BattlePassData() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x293F130))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponExpList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B394))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponExpCardList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B39C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AlivePlayerList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BRKillerPlayerStatis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BRHurterPlayerStatis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PersonalInfoHistoryData() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3BC))(this);
	}
	template <typename T = bool> T get_HasValidData() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3C4))(this);
	}
	template <typename T = bool> T get_isValidInThisGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B3D4))(this);
	}
	template <typename T = void> T set_isValidInThisGame(bool value) {
		return ((T (*)(SettlementDataStore*, bool))(Il2CppBase() + 0x294B3DC))(this, value);
	}
	template <typename T = bool> T get_bReachWeekLimit() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B4F0))(this);
	}
	template <typename T = int32_t> T get_IsFirstPlayBgMusic() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B4F8))(this);
	}
	template <typename T = bool> T get_IsHistoryRecord() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B50C))(this);
	}
	template <typename T = bool> T get_IsObserver() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B514))(this);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B51C))(this);
	}
	template <typename T = int32_t> T get_GameTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B524))(this);
	}
	template <typename T = uintptr_t> T get_GameModeCategory() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B52C))(this);
	}
	template <typename T = uintptr_t> T get_GameMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x293A33C))(this);
	}
	template <typename T = bool> T get_IsSinglePVPGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B534))(this);
	}
	template <typename T = bool> T get_IsBRGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2939EE4))(this);
	}
	template <typename T = bool> T get_IsBRTDMGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B5E0))(this);
	}
	template <typename T = bool> T get_IsBRCreateRoom() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B68C))(this);
	}
	template <typename T = bool> T get_IsBRCreateRoomObserver() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B754))(this);
	}
	template <typename T = bool> T get_IsBRTraining() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B784))(this);
	}
	template <typename T = bool> T get_IsPVEGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x293CC10))(this);
	}
	template <typename T = bool> T get_IsPVPCatGame() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B79C))(this);
	}
	template <typename T = bool> T get_IsPVERaidEasy() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B7B4))(this);
	}
	template <typename T = uintptr_t> T get_GameType() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2939F90))(this);
	}
	template <typename T = uint32_t> T get_GameEndTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B7EC))(this);
	}
	template <typename T = int32_t> T get_PveLevelId() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B7F4))(this);
	}
	template <typename T = uintptr_t> T get_MatchResult() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B7FC))(this);
	}
	template <typename T = uintptr_t> T get_WinningCamp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B804))(this);
	}
	template <typename T = uint32_t> T get_TeamType() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B80C))(this);
	}
	template <typename T = int32_t> T get_TotalTeamNum() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B814))(this);
	}
	template <typename T = int32_t> T get_TotalPlayerNum() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B81C))(this);
	}
	template <typename T = uint64_t> T get_Gsp_Guid() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B824))(this);
	}
	template <typename T = int32_t> T get_MissionId() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B82C))(this);
	}
	template <typename T = bool> T get_IsLocalPlayerPlacementMatch() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B834))(this);
	}
	template <typename T = bool> T get_IsLocalPlayerPlacementModeMatch() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B83C))(this);
	}
	template <typename T = uintptr_t> T get_CampDataBlue() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B844))(this);
	}
	template <typename T = uintptr_t> T get_CampDataRed() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B84C))(this);
	}
	template <typename T = uintptr_t> T get_CampDataWin() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B854))(this);
	}
	template <typename T = uintptr_t> T get_CampDataLose() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B85C))(this);
	}
	template <typename T = uintptr_t> T get_CampDataFFA() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B864))(this);
	}
	template <typename T = uintptr_t> T get_CampDataBR() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B86C))(this);
	}
	template <typename T = uintptr_t> T get_CampDataZMMP() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B874))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerCamp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B87C))(this);
	}
	template <typename T = uintptr_t> T get_SimpleCampDataRegular() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B884))(this);
	}
	template <typename T = uintptr_t> T get_SimpleCampDataRebel() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B88C))(this);
	}
	template <typename T = bool> T get_LiveOpsGold() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B894))(this);
	}
	template <typename T = bool> T get_LiveOpsExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B89C))(this);
	}
	template <typename T = uintptr_t> T get_GameServiceModule() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x293A334))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerGameStatis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x293A79C))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerPicInfo() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerBagWeaponStatis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8AC))(this);
	}
	template <typename T = Il2CppString*> T get_LocalPlayerName() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8B4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerRank() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8BC))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerLadderLevel() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8C4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBRLadderLevel() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8CC))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerTeamId() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8D4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerTeamRank() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8DC))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerSurvivalTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8E4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedGold() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8EC))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedKillGold() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8F4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedRankGold() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B8FC))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B904))(this);
	}
	template <typename T = void> T set_LocalPlayerBrGainedExp(uint32_t value) {
		return ((T (*)(SettlementDataStore*, uint32_t))(Il2CppBase() + 0x294B90C))(this, value);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedKillExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B914))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerBrGainedRankExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B91C))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerBrAddLadderScore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B924))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerBrLadderScore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B92C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PrizeDetailList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294019C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ExpBufList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B934))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponExpBufList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B93C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GoldBufList() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B944))(this);
	}
	template <typename T = bool> T get_IsGoldExceedDailyCap() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B94C))(this);
	}
	template <typename T = void> T set_IsGoldExceedDailyCap(bool value) {
		return ((T (*)(SettlementDataStore*, bool))(Il2CppBase() + 0x294B954))(this, value);
	}
	template <typename T = bool> T get_IsExpExceedDailyCap() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B95C))(this);
	}
	template <typename T = void> T set_IsExpExceedDailyCap(bool value) {
		return ((T (*)(SettlementDataStore*, bool))(Il2CppBase() + 0x294B964))(this, value);
	}
	template <typename T = bool> T get_IsDropItemsExceedDailyCap() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B96C))(this);
	}
	template <typename T = void> T set_IsDropItemsExceedDailyCap(bool value) {
		return ((T (*)(SettlementDataStore*, bool))(Il2CppBase() + 0x294B974))(this, value);
	}
	template <typename T = uint64_t> T get_LocalPlayerId() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B97C))(this);
	}
	template <typename T = int32_t> T get_LocalPlayercurLevel() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B98C))(this);
	}
	template <typename T = void> T set_LocalPlayercurLevel(int32_t value) {
		return ((T (*)(SettlementDataStore*, int32_t))(Il2CppBase() + 0x294B994))(this, value);
	}
	template <typename T = int32_t> T get_LocalPlayerPeakLevel() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B99C))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerGainedExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9A4))(this);
	}
	template <typename T = uint32_t> T get_LocalPlayerGainedIDCollection() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9AC))(this);
	}
	template <typename T = uintptr_t> T get_ExpDetails() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9B4))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerWeaponSuiteBonus() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9BC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_LocalPlayerWeaponSuiteIds() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9C4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponExpDetails() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9CC))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerCurrExp() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9D4))(this);
	}
	template <typename T = void> T set_LocalPlayerCurrExp(int32_t value) {
		return ((T (*)(SettlementDataStore*, int32_t))(Il2CppBase() + 0x294B9DC))(this, value);
	}
	template <typename T = int32_t> T get_LocalPlayerGainedGold() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9E4))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerLadderScore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9EC))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerLadderScoreChange() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9F4))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerKill() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294B9FC))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerDeath() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA04))(this);
	}
	template <typename T = int32_t> T get_LocalPlayerAssists() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA0C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerZMGainItems() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA14))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerDropItems() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA1C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerGainItems() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA24))(this);
	}
	template <typename T = bool> T get_IsTurnToMail() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA2C))(this);
	}
	template <typename T = bool> T get_IsFirstWin() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA34))(this);
	}
	template <typename T = bool> T get_ActvAddScore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA3C))(this);
	}
	template <typename T = bool> T get_ActvNoDropScore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA44))(this);
	}
	template <typename T = bool> T get_bNewEndlessRecord() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA4C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerMedals() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA54))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LocalPlayerAchive() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA5C))(this);
	}
	template <typename T = float> T get_LastUpdateTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA64))(this);
	}
	template <typename T = uintptr_t> T get_BRTeamGameState() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA6C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Team_statis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA74))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DropedPlayerStatis() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA7C))(this);
	}
	template <typename T = bool> T get_IsTeamOne() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BA84))(this);
	}
	template <typename T = bool> T get_IsTeamTwo() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BAB8))(this);
	}
	template <typename T = bool> T get_IsTeamFour() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BAF4))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_PlayerListReported() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BB30))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BB38))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BF44))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294C02C))(this);
	}
	template <typename T = void> T AddPersonalInfoHisotryRecord(uintptr_t recordData, uint64_t playerId) {
		return ((T (*)(SettlementDataStore*, uintptr_t, uint64_t))(Il2CppBase() + 0x294C58C))(this, recordData, playerId);
	}
	template <typename T = void> T RemoveLastPersonalInfoHistoryRecord() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294C744))(this);
	}
	template <typename T = uintptr_t> T GetLastPersonalInfoHistoryRecord() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294C8F8))(this);
	}
	template <typename T = void> T FillAlivePlayerList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(SettlementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x294CAB8))(this, list);
	}
	template <typename T = void> T FillKillerPlayerList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(SettlementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x294CEDC))(this, list);
	}
	template <typename T = void> T FillHurterPlayerList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(SettlementDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x294D1AC))(this, list);
	}
	template <typename T = void> T OnResMatchEndSettlement(uintptr_t data) {
		return ((T (*)(SettlementDataStore*, uintptr_t))(Il2CppBase() + 0x294D4B8))(this, data);
	}
	template <typename T = void> T UpdateData(uintptr_t data, bool bhistoryRecord, uint64_t localPlayerId) {
		return ((T (*)(SettlementDataStore*, uintptr_t, bool, uint64_t))(Il2CppBase() + 0x294D6BC))(this, data, bhistoryRecord, localPlayerId);
	}
	template <typename T = void> static T ComputeBossDamagePercent(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x295119C))(0, list);
	}
	template <typename T = void> T UpdateLocalPlayerRelated(uintptr_t playerStats, int32_t winningCamp) {
		return ((T (*)(SettlementDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x294EDB0))(this, playerStats, winningCamp);
	}
	template <typename T = void> T FillPlayerStat(uintptr_t campData, uintptr_t pgs, bool isLocalPlaeyr, uintptr_t data) {
		return ((T (*)(SettlementDataStore*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x294FAD4))(this, campData, pgs, isLocalPlaeyr, data);
	}
	template <typename T = void> T FillSimplePlayerStat(uintptr_t list, uintptr_t spgs, bool isLocalPlaeyr) {
		return ((T (*)(SettlementDataStore*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2950DA4))(this, list, spgs, isLocalPlaeyr);
	}
	template <typename T = void> T FillExpDetails(uintptr_t detail, uintptr_t pvp, uintptr_t br, uintptr_t gameType, bool isBRGame) {
		return ((T (*)(SettlementDataStore*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x29517F0))(this, detail, pvp, br, gameType, isBRGame);
	}
	template <typename T = bool> T IsSPVPTop3() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29529B8))(this);
	}
	template <typename T = bool> T IsTopThree() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2952AAC))(this);
	}
	template <typename T = void> T UpdateMedalConfigConfig(Il2CppList<uintptr_t>* data, uintptr_t medals) {
		return ((T (*)(SettlementDataStore*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2951C00))(this, data, medals);
	}
	template <typename T = void> T UpdateAchiveConfigConfig(Il2CppList<uintptr_t>* data, uintptr_t achives) {
		return ((T (*)(SettlementDataStore*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2952280))(this, data, achives);
	}
	template <typename T = void> T SetGainItemsEmpty() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2952C44))(this);
	}
	template <typename T = bool> T HasFriendInSquad() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2952D3C))(this);
	}
	template <typename T = bool> T EnableDelayIndividual() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29533EC))(this);
	}
	template <typename T = float> T get_MinIndividualDelayTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29534BC))(this);
	}
	template <typename T = float> T get_MaxIndividualDelayTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29534C4))(this);
	}
	template <typename T = float> T get_IndividualDelayTimeGap() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29534CC))(this);
	}
	template <typename T = void> T InitDelayIndividualTime() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294BCB0))(this);
	}
	template <typename T = void> T ResetValue() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x294D5D8))(this);
	}
	template <typename T = bool> T CheckIsCanShowBPView() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29534D4))(this);
	}
	template <typename T = bool> T get_IsOnlyExpCardMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953688))(this);
	}
	template <typename T = bool> T get_IsNotEqualPlayerMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2950D8C))(this);
	}
	template <typename T = bool> T get_IsNeedShowGoliathNumMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29536B8))(this);
	}
	template <typename T = bool> T get_IsNeedShowFlagNumMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29536D0))(this);
	}
	template <typename T = bool> T get_IsNeedInGameSettlement() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29536E8))(this);
	}
	template <typename T = bool> T get_IsNeedFrontEndSettlement() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953714))(this);
	}
	template <typename T = bool> T get_IsWCCampPosMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953740))(this);
	}
	template <typename T = bool> T get_IsNoModelRankViewMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953788))(this);
	}
	template <typename T = bool> T get_IsUseFFARankMode() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29528D0))(this);
	}
	template <typename T = bool> T get_IsUseCatInDetailView() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29537B4))(this);
	}
	template <typename T = bool> T IsUseV5BP() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x29376B8))(this);
	}
	template <typename T = int32_t> T FillAlivePlayerListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(SettlementDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29537C0))(this, a, b);
	}
	template <typename T = int32_t> static T UpdateDatam__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2953840))(0, a, b);
	}
	template <typename T = int32_t> static T ComputeBossDamagePercentm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29538A8))(0, a, b);
	}
	template <typename T = bool> static T UpdateLocalPlayerRelatedm__3(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2953978))(0, s);
	}
	template <typename T = int32_t> static T UpdateMedalConfigConfigm__4(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2953A6C))(0, l1, l2);
	}
	template <typename T = int32_t> static T UpdateAchiveConfigConfigm__5(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2953ADC))(0, l1, l2);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953B30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953B38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(SettlementDataStore*))(Il2CppBase() + 0x2953B40))(this);
	}

};

}
