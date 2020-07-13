#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoData"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& PVPGameStatInfoModeDic_Match() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& PVPGameStatInfoModeDic_Rank() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& PVPGameStatInfoModeDic_Room() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& BRGameStatInfoModeDic_Match() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& BRGameStatInfoModeDic_Rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PVEGameStatInfoLevelDic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PVEGameStatRaidDifficultyDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PVPGameStatisReport() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PVEGameStatisReport() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BRGameStatisReport() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mPVERaidData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mPVEClassicData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PvpGameStatList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrGameStatList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ZombieKill() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& BossKill() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PassTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& FastPassLevel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& FastPastTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& mZM_Damage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mZM_Rounds() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& mZM_Kills() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& mZM_MVPs() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& mZM_Avg_Acc() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& mZM_Weak_Ness() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint64_t> T& mZM_AvgL() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& mZM_AvgR() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint64_t> T& mZM_WEAKPOINT() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& mPVP_MPVs() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& mPVP_Rounds() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& mPVP_Top3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& mPVP_Kills() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& mPVP_KD() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& mPVP_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint64_t> T& mPVP_LAVG() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint64_t> T& mPVP_RAVG() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int64_t> T& mPVP_bekill() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& mBR_MPVs() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& mBR_Winners() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& mBR_Rounds() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& mBR_Kills() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& mBR_AVG_Damages() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& mBR_AVG_Accuracys() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint64_t> T& mBR_LAVG() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint64_t> T& mBR_RAVG() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& mBR_Damages() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& mIsHideHistory() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uint32_t> T& _pveGameCount() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uint32_t> T& _pvpGameCount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uint32_t> T& _brGameCount() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPPlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPvpGameStatRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRPlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrGameStatRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombiePlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveGameTotalTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameHistoryStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPersonalinfoRaidData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStatByDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_PVERaidData() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D080))(this);
	}
	template <typename T = uintptr_t> T get_PVEClassicData() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D088))(this);
	}
	template <typename T = uint64_t> T get_ZM_Damage() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D090))(this);
	}
	template <typename T = int32_t> T get_ZM_Rounds() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D098))(this);
	}
	template <typename T = uint64_t> T get_ZM_Kills() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0A0))(this);
	}
	template <typename T = int32_t> T get_ZM_MVPs() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0A8))(this);
	}
	template <typename T = float> T get_ZM_Avg_Acc() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0B0))(this);
	}
	template <typename T = float> T get_ZM_Weak_Ness() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0B8))(this);
	}
	template <typename T = int32_t> T get_PVP_MPVs() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0C0))(this);
	}
	template <typename T = int32_t> T get_PVP_Rounds() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0C8))(this);
	}
	template <typename T = int32_t> T get_PVP_Top3() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0D0))(this);
	}
	template <typename T = int32_t> T get_PVP_Kills() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0D8))(this);
	}
	template <typename T = float> T get_PVP_KD() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0E0))(this);
	}
	template <typename T = float> T get_PVP_AVG_Accuracys() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0E8))(this);
	}
	template <typename T = int32_t> T get_BR_MPVs() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0F0))(this);
	}
	template <typename T = int32_t> T get_BR_Winners() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D0F8))(this);
	}
	template <typename T = int32_t> T get_BR_Rounds() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D100))(this);
	}
	template <typename T = int32_t> T get_BR_Kills() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D108))(this);
	}
	template <typename T = float> T get_BR_AVG_Damages() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D110))(this);
	}
	template <typename T = float> T get_BR_AVG_Accuracys() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D118))(this);
	}
	template <typename T = void> T set_IsHideHistiry(bool value) {
		return ((T (*)(PersonalInfoData*, bool))(Il2CppBase() + 0x531D120))(this, value);
	}
	template <typename T = bool> T get_IsHideHistiry() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D128))(this);
	}
	template <typename T = uint32_t> T get_totalGameCount() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531D130))(this);
	}
	template <typename T = void> T SetPVPPlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoData*, uintptr_t))(Il2CppBase() + 0x531D148))(this, res);
	}
	template <typename T = uintptr_t> T GetPVPGameStatModeInfo(uintptr_t matchType, uintptr_t mode) {
		return ((T (*)(PersonalInfoData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x531D7A4))(this, matchType, mode);
	}
	template <typename T = uintptr_t> T GetPvpGameStatRank(int32_t seasonNo) {
		return ((T (*)(PersonalInfoData*, int32_t))(Il2CppBase() + 0x531DA20))(this, seasonNo);
	}
	template <typename T = void> T SetBRPlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoData*, uintptr_t))(Il2CppBase() + 0x531DBF0))(this, res);
	}
	template <typename T = uintptr_t> T GetBRGameStatModeInfo(uintptr_t matchType, uintptr_t temType) {
		return ((T (*)(PersonalInfoData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x531E094))(this, matchType, temType);
	}
	template <typename T = uintptr_t> T GetBrGameStatRank(int32_t seasonNo) {
		return ((T (*)(PersonalInfoData*, int32_t))(Il2CppBase() + 0x531E2B4))(this, seasonNo);
	}
	template <typename T = void> T SetZombiePlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoData*, uintptr_t))(Il2CppBase() + 0x531E484))(this, res);
	}
	template <typename T = uintptr_t> T GetPVEGameStatModeInfo(int32_t levelId) {
		return ((T (*)(PersonalInfoData*, int32_t))(Il2CppBase() + 0x531EE1C))(this, levelId);
	}
	template <typename T = uint32_t> T GetPveGameTotalTimes() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531EF6C))(this);
	}
	template <typename T = void> T SetGameHistoryStatis(uintptr_t res) {
		return ((T (*)(PersonalInfoData*, uintptr_t))(Il2CppBase() + 0x531F1C8))(this, res);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGameHistory(uintptr_t type) {
		return ((T (*)(PersonalInfoData*, uintptr_t))(Il2CppBase() + 0x531F4B4))(this, type);
	}
	template <typename T = void> T SetPersonalinfoRaidData() {
		return ((T (*)(PersonalInfoData*))(Il2CppBase() + 0x531EB48))(this);
	}
	template <typename T = uintptr_t> T GetStatByDifficulty(int32_t diff) {
		return ((T (*)(PersonalInfoData*, int32_t))(Il2CppBase() + 0x531F7FC))(this, diff);
	}
	template <typename T = int32_t> static T GetGameHistorym__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x531F91C))(0, x, y);
	}
	template <typename T = int32_t> static T GetGameHistorym__1(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x531F968))(0, x, y);
	}
	template <typename T = int32_t> static T GetGameHistorym__2(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x531F9B4))(0, x, y);
	}

};

}
