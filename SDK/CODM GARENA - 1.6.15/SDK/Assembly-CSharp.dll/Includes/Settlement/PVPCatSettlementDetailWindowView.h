#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPCatSettlementDetailWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPCatSettlementDetailWindowView"));
	}

	template <typename T = uintptr_t> T& LabelResult() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& GoNumericalRoot() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& LabelGainedRank() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& LabelGainedExp() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& LabelKDRation() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& LabelAccuracy() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& LabelWeakpointAccuracy() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& labelNumMedal() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& spriteMedal() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& spriteAchive() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& GoMedalRoot() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& GoAchiveRoot() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerListAll() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ScorePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& KillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DeathPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LeftTitle() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& RightTitle() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& m_CurMatchType() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& cachedBlueData() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& cachedRedData() {
		return *(T*)((uintptr_t)this + 0x1C8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B39D54))(this, percent, t, BG);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(PVPCatSettlementDetailWindowView*))(Il2CppBase() + 0x3B39B5C))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B39FAC))(this, item);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(PVPCatSettlementDetailWindowView*))(Il2CppBase() + 0x3B3A1B4))(this);
	}
	template <typename T = void> T SetMatchType(uintptr_t matchType) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B394F8))(this, matchType);
	}
	template <typename T = void> T SetMatchResult(uintptr_t result) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B395A0))(this, result);
	}
	template <typename T = void> T SetCampStats(uintptr_t playerData, uint64_t matchGuid) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t, uint64_t))(Il2CppBase() + 0x3B398B8))(this, playerData, matchGuid);
	}
	template <typename T = void> T DoSetCampStats(uintptr_t playerData, uint64_t matchGuid) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t, uint64_t))(Il2CppBase() + 0x3B3A250))(this, playerData, matchGuid);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B3AE78))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B3AF2C))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B3AFE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(PVPCatSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B3AFE8))(this, P0);
	}

};

}
