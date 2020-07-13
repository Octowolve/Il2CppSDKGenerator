#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEModeLevelDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEModeLevelDataStore"));
	}

	template <typename T = int32_t> T& m_CurrentLevelID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_OneGameEnded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_HasUnlockSweepFun() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_FirstLaunch() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = int32_t> T& m_TotalChapterStar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LastGameResult() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_InitSelectChapterId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CurrentScreenIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CurrentLevelHardnessChoice() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PVEModeLevelDataList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& m_ScreenCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_NormalModeUnlocked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_HardModeUnlocked() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& m_PveBreakEndGameResData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PVEEasyModeFriendRankList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PVENormalModeFriendRankList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PVEHardModeFriendRankList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChallengeSectionEndGameData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_PVEChallengeEndGameResData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_ChallengeFinalScore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ChallengeGameExp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_ChallengeLastGameGold() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChallengeModeFriendRankList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_MaxChallengeScreenCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& HistoryMaxChallengeSectionIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& CurrentWeekMaxPveChallengeSection() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& CurrentDayPveChallengePlayCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& PveChallengeHistroyHighestScore() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& PveChallengeTodayResetCount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& CurrentPlayRoundId() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PveChallengeGetPropList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint64_t> T& PlayerLastUsedWeaponId() {
		return *(T*)((uintptr_t)this + 0x80);
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
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PVEModeLevelDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DifficultyModeUnlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEModeCanAttackMaxLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEModeAllChapterCanAttackMaxLevelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEModeLevelDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScreenCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEModeFriendRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOneSectionPassedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSectionPassedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortFriendListRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_FirstLaunch() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95A8))(this);
	}
	template <typename T = void> T set_FirstLaunch(bool value) {
		return ((T (*)(PVEModeLevelDataStore*, bool))(Il2CppBase() + 0x2DC95B0))(this, value);
	}
	template <typename T = int32_t> T get_TotalChapterStar() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95B8))(this);
	}
	template <typename T = void> T set_TotalChapterStar(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC95C0))(this, value);
	}
	template <typename T = int32_t> T get_CurrentLevelID() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95C8))(this);
	}
	template <typename T = void> T set_CurrentLevelID(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC95D0))(this, value);
	}
	template <typename T = bool> T get_HasUnlockSweepFun() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95D8))(this);
	}
	template <typename T = int32_t> T get_OneGameEnded() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95E0))(this);
	}
	template <typename T = void> T set_OneGameEnded(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC95E8))(this, value);
	}
	template <typename T = int32_t> T get_LastGameResult() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC95F0))(this);
	}
	template <typename T = void> T set_LastGameResult(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC95F8))(this, value);
	}
	template <typename T = int32_t> T get_InitSelectChapterId() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC9600))(this);
	}
	template <typename T = void> T set_InitSelectChapterId(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC9608))(this, value);
	}
	template <typename T = int32_t> T get_CurrentScreenIndex() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC9638))(this);
	}
	template <typename T = void> T set_CurrentScreenIndex(int32_t value) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t))(Il2CppBase() + 0x2DC9640))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentLevelHardnessChoice() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC9648))(this);
	}
	template <typename T = void> T set_CurrentLevelHardnessChoice(uintptr_t value) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DC9630))(this, value);
	}
	template <typename T = int32_t> T PVEModeLevelDataCount() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DC9650))(this);
	}
	template <typename T = bool> T DifficultyModeUnlocked(uintptr_t diff) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DC9754))(this, diff);
	}
	template <typename T = int32_t> T GetPVEModeCanAttackMaxLevelID(int32_t chapter, uintptr_t difficultyType) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x2DC9850))(this, chapter, difficultyType);
	}
	template <typename T = int32_t> T GetPVEModeAllChapterCanAttackMaxLevelID(uintptr_t difficultyType) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DC9E90))(this, difficultyType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPVEModeLevelDataList(int32_t screenIndex, uintptr_t difficultyType) {
		return ((T (*)(PVEModeLevelDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x2DC9AC0))(this, screenIndex, difficultyType);
	}
	template <typename T = int32_t> T GetScreenCount() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCA070))(this);
	}
	template <typename T = uintptr_t> T get_PVEBreakEndGameResData() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCA178))(this);
	}
	template <typename T = void> T set_PVEBreakEndGameResData(uintptr_t value) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DCA180))(this, value);
	}
	template <typename T = void> T SetPVEModeFriendRankList(uintptr_t data) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DCA2D4))(this, data);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChallengeSectionEndGameData() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCA60C))(this);
	}
	template <typename T = void> T AddOneSectionPassedData(uintptr_t res) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DCA614))(this, res);
	}
	template <typename T = void> T ClearSectionPassedData() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCA760))(this);
	}
	template <typename T = uintptr_t> T get_PVEChallengeEndGameResData() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCA864))(this);
	}
	template <typename T = void> T set_PVEChallengeEndGameResData(uintptr_t value) {
		return ((T (*)(PVEModeLevelDataStore*, uintptr_t))(Il2CppBase() + 0x2DCA86C))(this, value);
	}
	template <typename T = void> T SortFriendListRank() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCACB8))(this);
	}
	template <typename T = int32_t> T get_MaxChallengeScreenCount() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCAED8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PveChallengeGetPropList() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCAEE0))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCAEE8))(this);
	}
	template <typename T = bool> static T GetPVEModeCanAttackMaxLevelIDm__0(uintptr_t lData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2DCB08C))(0, lData);
	}
	template <typename T = int32_t> static T GetPVEModeLevelDataListm__1(uintptr_t data1, uintptr_t data2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DCB0BC))(0, data1, data2);
	}
	template <typename T = int32_t> static T SortFriendListRankm__2(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DCB144))(0, left, right);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(PVEModeLevelDataStore*))(Il2CppBase() + 0x2DCB184))(this);
	}

};

}
