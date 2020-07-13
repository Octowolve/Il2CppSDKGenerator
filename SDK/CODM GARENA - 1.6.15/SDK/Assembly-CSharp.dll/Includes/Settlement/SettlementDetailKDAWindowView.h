#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailKDAWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailKDAWindowView"));
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
	template <typename T = uintptr_t> T& SpriteCampRebel() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& SpriteCampRegular() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& GoNumericalRoot() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& LabelGainedRank() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& LabelGainedExp() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& LabelKDRation() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& LabelAccuracy() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& LabelWeakpointAccuracy() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& labelNumMedal() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& spriteMedal() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& spriteAchive() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& GoMedalRoot() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& GoAchiveRoot() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& FlowTableBlue() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& FlowTableRed() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& BRTDMScore() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& KillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DeathPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AssistPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ScorePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PlayerItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LeftTitle() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& RightTitle() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& m_CurMatchType() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& cachedBlueData() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = uintptr_t> T& cachedRedData() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AdaptCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchType() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelfInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(SettlementDetailKDAWindowView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2956DF4))(this, percent, t, BG);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(SettlementDetailKDAWindowView*))(Il2CppBase() + 0x2957048))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t))(Il2CppBase() + 0x2957148))(this, item);
	}
	template <typename T = void> T SetMatchType(uintptr_t matchType) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t))(Il2CppBase() + 0x2955C60))(this, matchType);
	}
	template <typename T = void> T SetMatchResult(uintptr_t result) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t))(Il2CppBase() + 0x2955D08))(this, result);
	}
	template <typename T = void> T SetCampStats(uintptr_t blueData, uintptr_t redData, uintptr_t localPlayerCamp, uint64_t matchGuid) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2955F14))(this, blueData, redData, localPlayerCamp, matchGuid);
	}
	template <typename T = void> T DoSetCampStats(uintptr_t blueData, uintptr_t redData, uint64_t matchGuid) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2957504))(this, blueData, redData, matchGuid);
	}
	template <typename T = void> T SetSelfInfo(Il2CppList<uintptr_t>* playerSettlementData) {
		return ((T (*)(SettlementDetailKDAWindowView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2958368))(this, playerSettlementData);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(SettlementDetailKDAWindowView*, bool))(Il2CppBase() + 0x295864C))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t))(Il2CppBase() + 0x2958700))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(SettlementDetailKDAWindowView*, bool))(Il2CppBase() + 0x29587B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(SettlementDetailKDAWindowView*, uintptr_t))(Il2CppBase() + 0x29587BC))(this, P0);
	}

};

}
