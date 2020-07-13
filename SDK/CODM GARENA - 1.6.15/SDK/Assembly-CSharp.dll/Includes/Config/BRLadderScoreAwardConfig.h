#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRLadderScoreAwardConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRLadderScoreAwardConfig"));
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
	template <typename T = int32_t> T& Score_add() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Small_Icon() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Sub_score_ondrop() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_item_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_item_num() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_prize_num() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_1_duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Uplevel_prize_show() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_item_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_item_num() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_prize_num() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Uplevel_prize_info_2_duration() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsShowShare() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& TextureURLID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& AnimatorName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankInfoByLadderScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderRankInfoByLadderScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderRankProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRankNeedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurRankPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReachMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReachMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextBestRewardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastBestRewardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllNextBestRewardsConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppString*> T GetRankName() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C310))(this);
	}
	template <typename T = uintptr_t> static T GetRankInfoByLadderScore(int32_t score, int32_t season) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2D4C454))(0, score, season);
	}
	template <typename T = int32_t> T get_PointNeed() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C5F8))(this);
	}
	template <typename T = int32_t> T get_PointMax() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C600))(this);
	}
	template <typename T = int32_t> T get_DecLevelBuffer() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C608))(this);
	}
	template <typename T = int32_t> T get_ReachPrize() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C618))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Num() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C620))(this);
	}
	template <typename T = int32_t> T get_ReachPrize_Gold() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C628))(this);
	}
	template <typename T = int32_t> T get_RankLevel() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C630))(this);
	}
	template <typename T = void> T set_RankLevel(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4C638))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C640))(this);
	}
	template <typename T = uintptr_t> static T GetLadderRankInfoByLadderScore(int32_t score) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4C858))(0, score);
	}
	template <typename T = void> static T GetLadderRankProgress(int32_t score, uintptr_t* RankName, uintptr_t* curRankScore, uintptr_t* TotalRankScore) {
		return ((T (*)(void *, int32_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2D4C9D0))(0, score, RankName, curRankScore, TotalRankScore);
	}
	template <typename T = int32_t> T GetCurRankNeedPoint() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4CC5C))(this);
	}
	template <typename T = int32_t> T GetCurRankPoint(int32_t CurTotalScore) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4CD10))(this, CurTotalScore);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RewardList() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4CDC8))(this);
	}
	template <typename T = bool> static T IsReachMax(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4CDD0))(0, ladderRank);
	}
	template <typename T = bool> static T IsReachMin(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4CF58))(0, ladderRank);
	}
	template <typename T = bool> static T IsValid(int32_t ladderRank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4D0D8))(0, ladderRank);
	}
	template <typename T = uintptr_t> static T GetNextBestRewardConfig(int32_t level, int32_t season_no) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2D4D270))(0, level, season_no);
	}
	template <typename T = uintptr_t> static T GetLastBestRewardConfig(int32_t season_no) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4D4D4))(0, season_no);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllNextBestRewardsConfig(int32_t level, int32_t season_no, int32_t highestLevel, uintptr_t isGotList) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2D4D6F0))(0, level, season_no, highestLevel, isGotList);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4D9B4))(this);
	}
	template <typename T = int32_t> T GetSecondaryKeyValue() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DA54))(this);
	}
	template <typename T = int32_t> T get_Season_no() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C5F0))(this);
	}
	template <typename T = void> T set_Season_no(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DAF4))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4CF50))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DAFC))(this, value);
	}
	template <typename T = int32_t> T get_Rank_level() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C810))(this);
	}
	template <typename T = void> T set_Rank_level(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB04))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB0C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x2D4DB14))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C43C))(this);
	}
	template <typename T = Il2CppString*> T get_Sub_level() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C44C))(this);
	}
	template <typename T = void> T set_Sub_level(Il2CppString* value) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x2D4DB1C))(this, value);
	}
	template <typename T = int32_t> T get_Need_ladder_score() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C5E0))(this);
	}
	template <typename T = void> T set_Need_ladder_score(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB24))(this, value);
	}
	template <typename T = int32_t> T get_Max_ladder_score() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C5E8))(this);
	}
	template <typename T = void> T set_Max_ladder_score(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB2C))(this, value);
	}
	template <typename T = int32_t> T get_Inherit_level() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB34))(this);
	}
	template <typename T = void> T set_Inherit_level(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB3C))(this, value);
	}
	template <typename T = int32_t> T get_Dec_level_type() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB44))(this);
	}
	template <typename T = void> T set_Dec_level_type(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB4C))(this, value);
	}
	template <typename T = int32_t> T get_Dec_level_buffer() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C610))(this);
	}
	template <typename T = void> T set_Dec_level_buffer(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB54))(this, value);
	}
	template <typename T = int32_t> T get_Score_add() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB5C))(this);
	}
	template <typename T = void> T set_Score_add(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB64))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB6C))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x2D4DB74))(this, value);
	}
	template <typename T = Il2CppString*> T get_Small_Icon() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB7C))(this);
	}
	template <typename T = void> T set_Small_Icon(Il2CppString* value) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x2D4DB84))(this, value);
	}
	template <typename T = int32_t> T get_Sub_score_ondrop() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DB8C))(this);
	}
	template <typename T = void> T set_Sub_score_ondrop(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB94))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_item_id() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C818))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_item_id(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DB9C))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_item_num() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C820))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_item_num(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBA4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_prize_num() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C828))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_prize_num(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBAC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_1_duration() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C830))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_1_duration(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBB4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_show() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4D4CC))(this);
	}
	template <typename T = void> T set_Uplevel_prize_show(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBBC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_item_id() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C838))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_item_id(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBC4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_item_num() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C840))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_item_num(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBCC))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_prize_num() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C848))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_prize_num(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBD4))(this, value);
	}
	template <typename T = int32_t> T get_Uplevel_prize_info_2_duration() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4C850))(this);
	}
	template <typename T = void> T set_Uplevel_prize_info_2_duration(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBDC))(this, value);
	}
	template <typename T = bool> T get_IsShowShare() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DBE4))(this);
	}
	template <typename T = void> T set_IsShowShare(bool value) {
		return ((T (*)(BRLadderScoreAwardConfig*, bool))(Il2CppBase() + 0x2D4DBEC))(this, value);
	}
	template <typename T = int32_t> T get_TextureURLID() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DBF4))(this);
	}
	template <typename T = void> T set_TextureURLID(int32_t value) {
		return ((T (*)(BRLadderScoreAwardConfig*, int32_t))(Il2CppBase() + 0x2D4DBFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnimatorName() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DC04))(this);
	}
	template <typename T = void> T set_AnimatorName(Il2CppString* value) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppString*))(Il2CppBase() + 0x2D4DC0C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRLadderScoreAwardConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4DC14))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BRLadderScoreAwardConfig*))(Il2CppBase() + 0x2D4DFC8))(this);
	}

};

}
