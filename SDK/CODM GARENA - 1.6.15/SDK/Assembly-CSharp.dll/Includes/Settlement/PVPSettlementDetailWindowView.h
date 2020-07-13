#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementDetailWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementDetailWindowView"));
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
	template <typename T = uintptr_t> T& GoNumericalRoot() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& LabelGainedRank() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& LabelGainedExp() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& LabelKDRation() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& LabelAccuracy() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& LabelWeakpointAccuracy() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& labelNumMedal() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& spriteMedal() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& spriteAchive() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& GoMedalRoot() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& GoAchiveRoot() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListBlue() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListRed() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& PlayerItemLeftTable() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& PlayerItemRightTable() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& ItemTempLeft() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& ItemTempRight() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& PlayerItemLeftScrollView() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& PlayerItemRightScrollView() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _percent1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _percent2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _percent3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _percent4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _invalid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& scorePercent() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& killPercent() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& deathPercent() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& assistPercent() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& damagePercent() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& capturePercent() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& defendPercent() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& confirmPercent() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& denyPercent() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& LeftTitle() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& RightTitle() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& ScoreDetailTips() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& m_CurMatchType() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = uintptr_t> T& LeftCutPanel() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& RightCutPanel() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& cachedBlueData() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& cachedRedData() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AdaptCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelPosPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneraAndSetPlayerItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshScoreDetailTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelActiveByAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitleActiveByPosPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t label, uintptr_t BG) {
		return ((T (*)(PVPSettlementDetailWindowView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B43058))(this, percent, label, BG);
	}
	template <typename T = Il2CppVector3> T GetPos_1(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(PVPSettlementDetailWindowView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B431C4))(this, percent, t, BG);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B42CD4))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B4361C))(this, item);
	}
	template <typename T = void> T SetLabelPosPercent() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B43440))(this);
	}
	template <typename T = void> T SetMatchType(uintptr_t matchType) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B42420))(this, matchType);
	}
	template <typename T = void> T SetMatchResult(uintptr_t result) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B424C8))(this, result);
	}
	template <typename T = void> T SetCampStats(uintptr_t blueData, uintptr_t redData, uintptr_t localPlayerCamp, uint64_t matchGuid) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x3B42D90))(this, blueData, redData, localPlayerCamp, matchGuid);
	}
	template <typename T = void> T DoSetCampStats(uintptr_t blueData, uintptr_t redData, uint64_t matchGuid) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x3B43AE0))(this, blueData, redData, matchGuid);
	}
	template <typename T = void> T GeneraAndSetPlayerItem(uintptr_t campData, int32_t side) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t, int32_t))(Il2CppBase() + 0x3B4447C))(this, campData, side);
	}
	template <typename T = void> T ClearPlayerList() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B44224))(this);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(PVPSettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B44B38))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B44DF8))(this, eBtnMode);
	}
	template <typename T = void> T RefreshScoreDetailTips() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B427EC))(this);
	}
	template <typename T = void> T SetLabelActiveByAdapt() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B450B8))(this);
	}
	template <typename T = void> T SetTitleActiveByPosPercent(uintptr_t label, float percent) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t, float))(Il2CppBase() + 0x3B439BC))(this, label, percent);
	}
	template <typename T = void> T DoSetCampStatsm__0() {
		return ((T (*)(PVPSettlementDetailWindowView*))(Il2CppBase() + 0x3B45358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(PVPSettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B455C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(PVPSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B455CC))(this, P0);
	}

};

}
