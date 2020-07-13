#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassConfigManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_BattlePassDataStore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_BattlePassConf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LevelUpConfigList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LevelAwardDataList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& LevelUpConfigMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LastAwardConfig() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Meleelsit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Weasponslist() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Rolelsit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CpPoint() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Others() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SortLevelAwardList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& DailyTaskConfigMap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*>*> T& WeekTaskConfigMap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& WeekTaskByMode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& ChallengeTaskConfigMap() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SuperBoxConfigList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& SuperBoxConfigMap() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& WeekTargetConfig() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SortByAwardLevelConfigList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FreeItemlist() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChargeItemList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BuyPlusBpItemList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CheckRewardItemList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CurTaskItemList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChallangeTaskList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeekTaskList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& BpComicSmallIconDic() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLevelUpConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastAwards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByItemQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurentLevelItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSortList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDailyTaskConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeekTaskConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxWeekFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetWeekConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitChallengeTaskConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSuperBoxConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeekTargetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByAwardLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAllBpAwardsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_clearAllList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBattlePassComicSmallIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassComicSmallIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowBpComicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelAwardListIndexByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardSortList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareBattlePassAwardSortData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassAwardSortWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLastAwardInLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassConfInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x32560F0))(0);
	}
	template <typename T = uintptr_t> T get_battlePassDataStore() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32825F4))(this);
	}
	template <typename T = uintptr_t> T get_battlePassConf() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32826A4))(this);
	}
	template <typename T = void> T UpdateAllData() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3256204))(this);
	}
	template <typename T = uintptr_t> T GetDefaultMode() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32841CC))(this);
	}
	template <typename T = void> T InitLevelUpConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3282754))(this);
	}
	template <typename T = void> T GetLastAwards() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3284340))(this);
	}
	template <typename T = void> T SortByItemType(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BattlePassConfigManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32844AC))(this, list);
	}
	template <typename T = void> T SortByItemQuality(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BattlePassConfigManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3284958))(this, list);
	}
	template <typename T = void> T GetCurentLevelItemList() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3284BB8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSortList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BattlePassConfigManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3272F20))(this, list);
	}
	template <typename T = void> T ClearAwardList() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3273030))(this);
	}
	template <typename T = void> T InitDailyTaskConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3282DDC))(this);
	}
	template <typename T = uintptr_t> T GetDailyTask(int32_t taskId) {
		return ((T (*)(BattlePassConfigManager*, int32_t))(Il2CppBase() + 0x3284E54))(this, taskId);
	}
	template <typename T = void> T InitWeekTaskConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3283004))(this);
	}
	template <typename T = int32_t> T GetMaxWeekFromConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3284F90))(this);
	}
	template <typename T = uintptr_t> T GetTargetWeekConfig(int32_t weekId, uintptr_t mType, int32_t taskId) {
		return ((T (*)(BattlePassConfigManager*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x328520C))(this, weekId, mType, taskId);
	}
	template <typename T = void> T InitChallengeTaskConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32835C0))(this);
	}
	template <typename T = void> T InitSuperBoxConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32838DC))(this);
	}
	template <typename T = void> T InitWeekTargetConfig() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x328340C))(this);
	}
	template <typename T = void> T SortByAwardLevel(int32_t pre, int32_t curent) {
		return ((T (*)(BattlePassConfigManager*, int32_t, int32_t))(Il2CppBase() + 0x328548C))(this, pre, curent);
	}
	template <typename T = void> T InitAllBpAwardsList() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x3283BD0))(this);
	}
	template <typename T = void> T clearAllList() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32856B4))(this);
	}
	template <typename T = void> T SetBattlePassComicSmallIcon() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x327A884))(this);
	}
	template <typename T = uintptr_t> T GetBattlePassComicSmallIcon(int32_t SeasonId, int32_t Seq) {
		return ((T (*)(BattlePassConfigManager*, int32_t, int32_t))(Il2CppBase() + 0x327E9D4))(this, SeasonId, Seq);
	}
	template <typename T = bool> T IsShowBpComicData() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x328582C))(this);
	}
	template <typename T = int32_t> T GetLevelAwardListIndexByLevel(int32_t level, bool bLast) {
		return ((T (*)(BattlePassConfigManager*, int32_t, bool))(Il2CppBase() + 0x328597C))(this, level, bLast);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAwardSortList(Il2CppList<uintptr_t>* LvConfList) {
		return ((T (*)(BattlePassConfigManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3261F10))(this, LvConfList);
	}
	template <typename T = int32_t> T CompareBattlePassAwardSortData(uintptr_t a, uintptr_t b) {
		return ((T (*)(BattlePassConfigManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3285CD8))(this, a, b);
	}
	template <typename T = int32_t> T GetBattlePassAwardSortWeight(uintptr_t data) {
		return ((T (*)(BattlePassConfigManager*, uintptr_t))(Il2CppBase() + 0x3285DF0))(this, data);
	}
	template <typename T = bool> T IsLastAwardInLevel(int32_t level, int32_t awardIndex) {
		return ((T (*)(BattlePassConfigManager*, int32_t, int32_t))(Il2CppBase() + 0x32860F4))(this, level, awardIndex);
	}
	template <typename T = void> T CheckBattlePassConfInit() {
		return ((T (*)(BattlePassConfigManager*))(Il2CppBase() + 0x32862D0))(this);
	}
	template <typename T = int32_t> static T SortByItemQualitym__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x328643C))(0, a, b);
	}

};

}
