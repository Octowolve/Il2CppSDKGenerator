#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SPVPSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SPVPSettlementWindowView"));
	}

	template <typename T = uintptr_t> T& RootWin() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& RootDraw() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& RootDefeat() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& playerListGridRootBlue() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& playerListGridRootRed() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& labelScoreBlue() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& labelScoreRed() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& leftSideIconTransform() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& rightSideIconTransform() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& leftSideNameLabel() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& rightSideNameLabel() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& ToggleStatistic() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& TeamCompetitionTitleRoot() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& LeisureBlastingTitleRoot() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& HotSpotCompetitionTitleRoot() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& IndividualCompetitionTitleRoot() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListBlue() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListRed() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& m_CurMatchType() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> static T& MAX_GRID_COUNT_PER_CAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& cachedBlueData() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& cachedRedData() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStatsTitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SPVPSettlementWindowView*))(Il2CppBase() + 0x2984ECC))(this);
	}
	template <typename T = void> T PrepareGrids() {
		return ((T (*)(SPVPSettlementWindowView*))(Il2CppBase() + 0x2985414))(this);
	}
	template <typename T = void> T SetMatchType(uintptr_t matchType) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2983918))(this, matchType);
	}
	template <typename T = void> T SetStatsTitles(uintptr_t mode) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2985B80))(this, mode);
	}
	template <typename T = void> T SetMatchResult(uintptr_t result) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x29839CC))(this, result);
	}
	template <typename T = void> T SetCampStats(uintptr_t blueData, uintptr_t redData, uintptr_t localPlayerCamp, uint64_t matchGuid) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2983BD8))(this, blueData, redData, localPlayerCamp, matchGuid);
	}
	template <typename T = void> T DoSetCampStats(uintptr_t blueData, uintptr_t redData, uint64_t matchGuid) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2984FE0))(this, blueData, redData, matchGuid);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(SPVPSettlementWindowView*, bool))(Il2CppBase() + 0x2985D7C))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2986034))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SPVPSettlementWindowView*))(Il2CppBase() + 0x29862EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(SPVPSettlementWindowView*, bool))(Il2CppBase() + 0x29862F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(SPVPSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x29862FC))(this, P0);
	}

};

}
