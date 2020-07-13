#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementDetailWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementDetailWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& labelEvaluation() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& GoNumericalRoot() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& labelGainedRank() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& labelGainedExp() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& labelAccuracy() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& labelWeakpointAccuracy() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& labelTeamTitle() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& labelSingleTitle() {
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
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& KillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DamagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SurvivePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& RescuePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HealPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MileagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SkillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x1C4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetMedalAchiveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t) {
		return ((T (*)(BRSettlementDetailWindowView*, float, uintptr_t))(Il2CppBase() + 0x3C20CEC))(this, percent, t);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(BRSettlementDetailWindowView*))(Il2CppBase() + 0x3C20B38))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3C20F48))(this, item);
	}
	template <typename T = void> T SetMedalAchiveInfo(uintptr_t medalData, uintptr_t achiveData) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C205C8))(this, medalData, achiveData);
	}
	template <typename T = void> T SetRankInfo(uintptr_t ds) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3C20164))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t data, uint64_t gspGuid, uintptr_t gameMode) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3C1FB70))(this, data, gspGuid, gameMode);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3C214D4))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(BRSettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3C21660))(this, P0);
	}

};

}
