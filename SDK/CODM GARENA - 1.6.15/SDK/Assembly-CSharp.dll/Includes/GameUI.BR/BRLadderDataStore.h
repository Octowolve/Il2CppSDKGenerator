#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.BR {

class BRLadderDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.BR", "BRLadderDataStore"));
	}

	template <typename T = int32_t> T& m_LadderRank() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_LadderScore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_SeasonNo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_SeasonBeginTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_SeasonEndTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_SeasonHistoryHightestLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_LastSeasonLadderLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& brDefaultMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& NewSeasonFlag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bNeedResetSeason() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = float> T& LadderPercent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsSwitchSeason() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_SeasonStateByClient() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& m_SeasonNoByClient() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_SeasonNoWhenLogin() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StoreProfileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLadderInfoWhenChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLadderRankWhenChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsladderOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeasonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeSeasonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonStateByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonNoByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSeasonNo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeasonStateCanPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = int32_t> T get_LadderRank() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83EC8))(this);
	}
	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83ED0))(this);
	}
	template <typename T = uint32_t> T get_SeasonNo() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83ED8))(this);
	}
	template <typename T = int32_t> T get_SeasonBeginTime() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83EE0))(this);
	}
	template <typename T = int32_t> T get_SeasonEndTime() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83EE8))(this);
	}
	template <typename T = int32_t> T get_SeasonHistoryHightestLevel() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83EF0))(this);
	}
	template <typename T = int32_t> T get_LastSeasonLadderLevel() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83EF8))(this);
	}
	template <typename T = float> T get_LadderPercent() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D83F00))(this);
	}
	template <typename T = void> T set_LadderPercent(float value) {
		return ((T (*)(BRLadderDataStore*, float))(Il2CppBase() + 0x2D83F08))(this, value);
	}
	template <typename T = void> T StoreProfileData(uintptr_t res) {
		return ((T (*)(BRLadderDataStore*, uintptr_t))(Il2CppBase() + 0x2D83F10))(this, res);
	}
	template <typename T = void> T ClearSeasonInfo() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D842E0))(this);
	}
	template <typename T = void> T UpdateLadderInfoWhenChange(int32_t score) {
		return ((T (*)(BRLadderDataStore*, int32_t))(Il2CppBase() + 0x2D84474))(this, score);
	}
	template <typename T = void> T UpdateLadderRankWhenChange(int32_t ladderRank) {
		return ((T (*)(BRLadderDataStore*, int32_t))(Il2CppBase() + 0x2D84580))(this, ladderRank);
	}
	template <typename T = bool> static T IsladderOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D84628))(0);
	}
	template <typename T = bool> T IsSeasonTime() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D847F8))(this);
	}
	template <typename T = uint32_t> T get_SeasonNoWhenLogin() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D84968))(this);
	}
	template <typename T = uintptr_t> T ComputeSeasonState(int32_t serverTime) {
		return ((T (*)(BRLadderDataStore*, int32_t))(Il2CppBase() + 0x2D84A78))(this, serverTime);
	}
	template <typename T = uintptr_t> T GetSeasonStateByClient() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D84BB4))(this);
	}
	template <typename T = uint32_t> T GetSeasonNoByClient() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D84C54))(this);
	}
	template <typename T = void> T ClearSeasonNo() {
		return ((T (*)(BRLadderDataStore*))(Il2CppBase() + 0x2D84CF4))(this);
	}
	template <typename T = bool> T IsSeasonStateCanPlay(uintptr_t state, bool bTip) {
		return ((T (*)(BRLadderDataStore*, uintptr_t, bool))(Il2CppBase() + 0x2D84D98))(this, state, bTip);
	}

};

}
