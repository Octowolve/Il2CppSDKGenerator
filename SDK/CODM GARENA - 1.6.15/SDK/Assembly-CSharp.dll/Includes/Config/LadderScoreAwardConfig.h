#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LadderScoreAwardConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LadderScoreAwardConfig"));
	}

	template <typename T = int32_t> T& RankLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RewardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Season_no() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Rank_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Sub_level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Need_ladder_score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Max_ladder_score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Inherit_level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Dec_level_type() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Dec_level_buffer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Need_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Small_Icon() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Promotion_times() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Promotion_win_times() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Game_mode_1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Game_mode_2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Game_mode_3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Game_mode_4() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Promotion_fail_score() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Drop_score() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Drop_elo_score() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Daily_prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Daily_prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Daily_prize_info_1_prize_num() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Daily_prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_prize_num() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Uplevel_prize_show() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_item_id() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_item_num() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_prize_num() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsShowShare() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& TextureURLID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& AnimatorName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderRankInfoByLadderScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderRankProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRankNeedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRankPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReachMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReachMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextBestRewardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastBestRewardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllNextBestRewardsConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = int32_t> T get_PointNeed() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C2E4))(this);
	}
	template <typename T = int32_t> T get_PointMax() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C2F4))(this);
	}
	template <typename T = int32_t> T get_DecLevelBuffer() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C304))(this);
	}
	template <typename T = int32_t> T get_ReachPrize() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C314))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C31C))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Gold() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C324))(this);
	}
	template <typename T = int32_t> T get_RankLevel() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C32C))(this);
	}
	template <typename T = void> T set_RankLevel(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376C334))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C33C))(this);
	}
	template <typename T = Il2CppString*> T GetRankName() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C554))(this);
	}
	template <typename T = uintptr_t> static T GetLadderRankInfoByLadderScore(int32_t score, int32_t seasonNo) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x376C698))(0, score, seasonNo);
	}
	template <typename T = void> static T GetLadderRankProgress(int32_t score, uintptr_t* RankName, uintptr_t* curRankScore, uintptr_t* TotalRankScore) {
		return ((T (*)(void *, int32_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x376C82C))(0, score, RankName, curRankScore, TotalRankScore);
	}
	template <typename T = int32_t> T GetCurRankNeedPoint() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376CABC))(this);
	}
	template <typename T = int32_t> T GetCurRankPoint(int32_t CurTotalScore) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376CB70))(this, CurTotalScore);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RewardList() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376CC28))(this);
	}
	template <typename T = bool> static T IsReachMax(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376CC30))(0, ladderRank);
	}
	template <typename T = bool> static T IsReachMin(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376CDB8))(0, ladderRank);
	}
	template <typename T = bool> static T IsValid(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376CF38))(0, ladderRank);
	}
	template <typename T = uintptr_t> static T GetNextBestRewardConfig(int32_t level, int32_t season_no) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x376D0D0))(0, level, season_no);
	}
	template <typename T = uintptr_t> static T GetLastBestRewardConfig(int32_t season_no) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376D334))(0, season_no);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllNextBestRewardsConfig(int32_t level, int32_t season_no, int32_t highestLevel, uintptr_t isGotList) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x376D550))(0, level, season_no, highestLevel, isGotList);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D814))(this);
	}
	template <typename T = int32_t> T GetSecondaryKeyValue() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D8B4))(this);
	}
	template <typename T = int32_t> T get_Season_no() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C824))(this);
	}
	template <typename T = void> T set_Season_no(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D954))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376CDB0))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D95C))(this, value);
	}
	template <typename T = int32_t> T get_Rank_level() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C50C))(this);
	}
	template <typename T = void> T set_Rank_level(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D964))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D96C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x376D974))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C680))(this);
	}
	template <typename T = Il2CppString*> T get_Sub_level() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C690))(this);
	}
	template <typename T = void> T set_Sub_level(Il2CppString* value) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x376D97C))(this, value);
	}
	template <typename T = int32_t> T get_Need_ladder_score() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C2EC))(this);
	}
	template <typename T = void> T set_Need_ladder_score(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D984))(this, value);
	}
	template <typename T = int32_t> T get_Max_ladder_score() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C2FC))(this);
	}
	template <typename T = void> T set_Max_ladder_score(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D98C))(this, value);
	}
	template <typename T = int32_t> T get_Inherit_level() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D994))(this);
	}
	template <typename T = void> T set_Inherit_level(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D99C))(this, value);
	}
	template <typename T = int32_t> T get_Dec_level_type() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9A4))(this);
	}
	template <typename T = void> T set_Dec_level_type(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D9AC))(this, value);
	}
	template <typename T = int32_t> T get_Dec_level_buffer() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C30C))(this);
	}
	template <typename T = void> T set_Dec_level_buffer(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D9B4))(this, value);
	}
	template <typename T = int32_t> T get_Need_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9BC))(this);
	}
	template <typename T = void> T set_Need_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D9C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9CC))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x376D9D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Small_Icon() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9DC))(this);
	}
	template <typename T = void> T set_Small_Icon(Il2CppString* value) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x376D9E4))(this, value);
	}
	template <typename T = int32_t> T get_Promotion_times() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9EC))(this);
	}
	template <typename T = void> T set_Promotion_times(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376D9F4))(this, value);
	}
	template <typename T = int32_t> T get_Promotion_win_times() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D9FC))(this);
	}
	template <typename T = void> T set_Promotion_win_times(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA04))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode_1() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA0C))(this);
	}
	template <typename T = void> T set_Game_mode_1(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA14))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode_2() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA1C))(this);
	}
	template <typename T = void> T set_Game_mode_2(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA24))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode_3() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA2C))(this);
	}
	template <typename T = void> T set_Game_mode_3(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA34))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode_4() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA3C))(this);
	}
	template <typename T = void> T set_Game_mode_4(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA44))(this, value);
	}
	template <typename T = int32_t> T get_Promotion_fail_score() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA4C))(this);
	}
	template <typename T = void> T set_Promotion_fail_score(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA54))(this, value);
	}
	template <typename T = int32_t> T get_Drop_score() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA5C))(this);
	}
	template <typename T = void> T set_Drop_score(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA64))(this, value);
	}
	template <typename T = int32_t> T get_Drop_elo_score() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA6C))(this);
	}
	template <typename T = void> T set_Drop_elo_score(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA74))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_1_item_id() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA7C))(this);
	}
	template <typename T = void> T set_Daily_prize_info_1_item_id(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA84))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_1_item_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA8C))(this);
	}
	template <typename T = void> T set_Daily_prize_info_1_item_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DA94))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_1_prize_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DA9C))(this);
	}
	template <typename T = void> T set_Daily_prize_info_1_prize_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAA4))(this, value);
	}
	template <typename T = int32_t> T get_Daily_prize_info_1_duration() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DAAC))(this);
	}
	template <typename T = void> T set_Daily_prize_info_1_duration(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAB4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_item_id() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C514))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_item_id(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DABC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_item_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C51C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_item_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAC4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_prize_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C524))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_prize_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DACC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_duration() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C52C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_duration(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAD4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_show() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376D32C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_show(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DADC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_item_id() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C534))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_item_id(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAE4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_item_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C53C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_item_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAEC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_prize_num() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C544))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_prize_num(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAF4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_duration() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376C54C))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_duration(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DAFC))(this, value);
	}
	template <typename T = bool> T get_IsShowShare() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DB04))(this);
	}
	template <typename T = void> T set_IsShowShare(bool value) {
		return ((T (*)(LadderScoreAwardConfig*, bool))(Il2CppBase() + 0x376DB0C))(this, value);
	}
	template <typename T = int32_t> T get_TextureURLID() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DB14))(this);
	}
	template <typename T = void> T set_TextureURLID(int32_t value) {
		return ((T (*)(LadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x376DB1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnimatorName() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376DB24))(this);
	}
	template <typename T = void> T set_AnimatorName(Il2CppString* value) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x376DB2C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LadderScoreAwardConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376DB34))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LadderScoreAwardConfig*))(Il2CppBase() + 0x376E008))(this);
	}

};

}
