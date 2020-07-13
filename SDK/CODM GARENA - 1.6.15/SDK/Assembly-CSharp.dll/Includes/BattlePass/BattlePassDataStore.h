#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassDataStore"));
	}

	template <typename T = int32_t> T& m_seasonId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mCanShowLevelUp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_week() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_WeekTaskCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IfHaveActivity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_SeasonCountDownSeconds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_OpenVipPass() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& needReqAward() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppString*> static T& SHOW_RED_DOT_SAVE_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& LevelUpDataMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ChargeLevelUpDataMap() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& DailyTaskData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& WeekTaskDataMap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ChallengeTaskData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& WeekAwardDataMap() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& RedDotMap() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uintptr_t, int32_t>*>*> T& WeekRedDotMap() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& discount_infoDic() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& AllComicMap() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> static T& BATTLEPASS_COMIC_ISRESET_REDPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLevelUpAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLevelUpAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBasicInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassDataForLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelAndExpAfterExpAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelAndExpAfterSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTireUpDisCountByChargeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHaveDisCountNumByChargeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassDataForLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassDataForDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassDataForDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassDataForWeekTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassDataForWeekTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassDataForChallengeTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassDataForChallengeTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassDataForWeekAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassDataForWeekAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelUpTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChargeLevelUpTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeekTaskDataByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeekTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeeklyTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChallengeTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChallengeTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeekTargetAwardBoxState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedDotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLevelUpRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDailyTaskRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetChallengeTaskRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeekTargetRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeekTaskRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeekRedDotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotCountByTaskTypeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotCountInMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotCountByWeekRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotCountByTargetWeek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllWeekRedDotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllWeekRedDotCountByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDailyTaskLimited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeekTaskLimited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassComicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBpComicRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentComicHasRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllComicStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckComicStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedPoinCountBySeasonID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBReadFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}

	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3258864))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3286AA4))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x32549F8))(this);
	}
	template <typename T = bool> T SetLevel(int32_t value, bool bForceReq) {
		return ((T (*)(BattlePassDataStore*, int32_t, bool))(Il2CppBase() + 0x325A564))(this, value, bForceReq);
	}
	template <typename T = bool> T CheckLevelUpAward() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3286C84))(this);
	}
	template <typename T = bool> T ReqLevelUpAward(int32_t level) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3286E54))(this, level);
	}
	template <typename T = int32_t> T get_Exp() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x325AB28))(this);
	}
	template <typename T = void> T set_Exp(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x325A6F0))(this, value);
	}
	template <typename T = int32_t> T get_Week() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3286FD0))(this);
	}
	template <typename T = void> T set_Week(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3286FD8))(this, value);
	}
	template <typename T = int32_t> T get_WeekTaskCount() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3286FE0))(this);
	}
	template <typename T = void> T set_WeekTaskCount(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3286FE8))(this, value);
	}
	template <typename T = bool> T get_IfHaveActivity() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3286FF0))(this);
	}
	template <typename T = void> T set_IfHaveActivity(bool value) {
		return ((T (*)(BattlePassDataStore*, bool))(Il2CppBase() + 0x3255FC0))(this, value);
	}
	template <typename T = int32_t> T get_SeasonCountDownSeconds() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3286FF8))(this);
	}
	template <typename T = void> T set_SeasonCountDownSeconds(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x325AD94))(this, value);
	}
	template <typename T = bool> T get_OpenVipPass() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3255230))(this);
	}
	template <typename T = void> T set_OpenVipPass(bool value) {
		return ((T (*)(BattlePassDataStore*, bool))(Il2CppBase() + 0x3287000))(this, value);
	}
	template <typename T = bool> T get_IsCrtSeasonNeverEnterBPToShowRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3287008))(this);
	}
	template <typename T = void> T set_IsCrtSeasonNeverEnterBPToShowRedDot(bool value) {
		return ((T (*)(BattlePassDataStore*, bool))(Il2CppBase() + 0x328711C))(this, value);
	}
	template <typename T = int32_t> T get_SeasonOfLastEnterBP() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3287040))(this);
	}
	template <typename T = void> T set_SeasonOfLastEnterBP(int32_t value) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3287130))(this, value);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3287228))(this);
	}
	template <typename T = void> T SetBasicInfo(uintptr_t database) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3255FC8))(this, database);
	}
	template <typename T = void> T SetBattlePassDataForLevel(uintptr_t database) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3256A40))(this, database);
	}
	template <typename T = void> T UpdateLevelAndExpAfterExpAward(int32_t level, int32_t exp) {
		return ((T (*)(BattlePassDataStore*, int32_t, int32_t))(Il2CppBase() + 0x3287C30))(this, level, exp);
	}
	template <typename T = void> T UpdateLevelAndExpAfterSettlement(int32_t level, int32_t exp) {
		return ((T (*)(BattlePassDataStore*, int32_t, int32_t))(Il2CppBase() + 0x3287D80))(this, level, exp);
	}
	template <typename T = void> T SetTireUpDisCountByChargeType(uintptr_t database) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x32578A0))(this, database);
	}
	template <typename T = int32_t> T GetHaveDisCountNumByChargeType(uintptr_t chargeType) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x32748BC))(this, chargeType);
	}
	template <typename T = void> T CheckBattlePassDataForLevel(int32_t index) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3256308))(this, index);
	}
	template <typename T = void> T SetBattlePassDataForDailyTask(uintptr_t database, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3256D20))(this, database, type);
	}
	template <typename T = void> T CheckBattlePassDataForDailyTask(int32_t index, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x3256410))(this, index, type);
	}
	template <typename T = void> T SetBattlePassDataForWeekTask(uintptr_t database, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3256F84))(this, database, type);
	}
	template <typename T = void> T CheckBattlePassDataForWeekTask(int32_t index, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x3256648))(this, index, type);
	}
	template <typename T = void> T SetBattlePassDataForChallengeTask(uintptr_t database, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32573E4))(this, database, type);
	}
	template <typename T = void> T CheckBattlePassDataForChallengeTask(int32_t index, uintptr_t type) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x32568EC))(this, index, type);
	}
	template <typename T = void> T SetBattlePassDataForWeekAward(uintptr_t database) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x325765C))(this, database);
	}
	template <typename T = void> T CheckBattlePassDataForWeekAward(int32_t index) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3256564))(this, index);
	}
	template <typename T = uintptr_t> T GetLevelUpTaskState(int32_t level) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3254F3C))(this, level);
	}
	template <typename T = uintptr_t> T GetChargeLevelUpTaskState(int32_t level) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3255238))(this, level);
	}
	template <typename T = uintptr_t> T GetDailyTaskData(uintptr_t mode, int32_t taskId) {
		return ((T (*)(BattlePassDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x32885DC))(this, mode, taskId);
	}
	template <typename T = uintptr_t> T GetDailyTaskState(uintptr_t conf) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x32886DC))(this, conf);
	}
	template <typename T = uintptr_t> T GetWeekTaskDataByType(int32_t weekId, uintptr_t taskMode, int32_t taskId) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3288850))(this, weekId, taskMode, taskId);
	}
	template <typename T = uintptr_t> T GetWeekTaskData(int32_t weekId) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3288984))(this, weekId);
	}
	template <typename T = uintptr_t> T GetWeeklyTaskState(uintptr_t conf) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3288A8C))(this, conf);
	}
	template <typename T = uintptr_t> T GetChallengeTaskData(uintptr_t mode, int32_t taskId) {
		return ((T (*)(BattlePassDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x3279BE4))(this, mode, taskId);
	}
	template <typename T = uintptr_t> T GetChallengeTaskState(int32_t taskId, uintptr_t mode) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x3278C5C))(this, taskId, mode);
	}
	template <typename T = uintptr_t> T GetWeekTargetAwardBoxState(int32_t point) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3288CC0))(this, point);
	}
	template <typename T = void> T CheckRedDotByType(uintptr_t t) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3288E70))(this, t);
	}
	template <typename T = void> T ResetLevelUpRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x32877C8))(this);
	}
	template <typename T = void> T ResetDailyTaskRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3287E54))(this);
	}
	template <typename T = void> T ResetChallengeTaskRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3288158))(this);
	}
	template <typename T = void> T ResetWeekTargetRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3288334))(this);
	}
	template <typename T = void> T ResetWeekTaskRedDot() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3288030))(this);
	}
	template <typename T = void> T CheckWeekRedDotByType(uintptr_t t) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3288FBC))(this, t);
	}
	template <typename T = int32_t> T GetRedDotCountByTaskTypeList(Il2CppArray<uintptr_t>* typeList) {
		return ((T (*)(BattlePassDataStore*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3277B28))(this, typeList);
	}
	template <typename T = int32_t> T GetRedDotCountInMap(Il2CppDictionary<uintptr_t, int32_t>* m, uintptr_t t) {
		return ((T (*)(BattlePassDataStore*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t))(Il2CppBase() + 0x3289488))(this, m, t);
	}
	template <typename T = int32_t> T GetRedDotCountByWeekRange(int32_t curWeek, bool isPre, uintptr_t tType) {
		return ((T (*)(BattlePassDataStore*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x328975C))(this, curWeek, isPre, tType);
	}
	template <typename T = int32_t> T GetRedDotCountByTargetWeek(int32_t curWeek, uintptr_t t) {
		return ((T (*)(BattlePassDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x3289A24))(this, curWeek, t);
	}
	template <typename T = int32_t> T GetAllWeekRedDotCount() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x3289D40))(this);
	}
	template <typename T = int32_t> T GetAllWeekRedDotCountByMode(uintptr_t taskType) {
		return ((T (*)(BattlePassDataStore*, uintptr_t))(Il2CppBase() + 0x3289F7C))(this, taskType);
	}
	template <typename T = bool> T IsDailyTaskLimited() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x32895C8))(this);
	}
	template <typename T = bool> T IsWeekTaskLimited(int32_t weekId) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3289B84))(this, weekId);
	}
	template <typename T = void> T SetBattlePassComicData(Il2CppList<uintptr_t>* comic_list, bool isFirstSet) {
		return ((T (*)(BattlePassDataStore*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x325BB68))(this, comic_list, isFirstSet);
	}
	template <typename T = bool> T get_IsResetBattlePassComicRedPoint() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x325C0CC))(this);
	}
	template <typename T = void> T set_IsResetBattlePassComicRedPoint(bool value) {
		return ((T (*)(BattlePassDataStore*, bool))(Il2CppBase() + 0x325C78C))(this, value);
	}
	template <typename T = void> T ResetBpComicRedPoint() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x325C1A8))(this);
	}
	template <typename T = void> T SetCurrentComicHasRead(int32_t SeasonId, int32_t seq) {
		return ((T (*)(BattlePassDataStore*, int32_t, int32_t))(Il2CppBase() + 0x327F86C))(this, SeasonId, seq);
	}
	template <typename T = void> T CheckAllComicStates() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x325C87C))(this);
	}
	template <typename T = bool> T CheckComicStates(int32_t SesonId, int32_t Seq) {
		return ((T (*)(BattlePassDataStore*, int32_t, int32_t))(Il2CppBase() + 0x328A194))(this, SesonId, Seq);
	}
	template <typename T = int32_t> T GetRedPoinCountBySeasonID(int32_t SeasonId) {
		return ((T (*)(BattlePassDataStore*, int32_t))(Il2CppBase() + 0x3280698))(this, SeasonId);
	}
	template <typename T = bool> T GetBReadFlag(int32_t SeasonID, int32_t Seq) {
		return ((T (*)(BattlePassDataStore*, int32_t, int32_t))(Il2CppBase() + 0x327E738))(this, SeasonID, Seq);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(BattlePassDataStore*))(Il2CppBase() + 0x328A3A0))(this);
	}

};

}
