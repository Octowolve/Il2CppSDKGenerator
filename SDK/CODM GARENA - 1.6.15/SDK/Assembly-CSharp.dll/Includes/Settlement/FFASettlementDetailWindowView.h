#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class FFASettlementDetailWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "FFASettlementDetailWindowView"));
	}

	template <typename T = uintptr_t> T& LabelResultRank() {
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
	template <typename T = uintptr_t> T& PlayerItemLeftTable() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& PlayerItemRightTable() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& ItemTempLeft() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& ItemTempRight() {
		return *(T*)((uintptr_t)this + 0x1BC);
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
	template <typename T = float> static T& ScorePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LeftTitle() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& RightTitle() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AdaptCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneraPlayerItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(FFASettlementDetailWindowView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B1ECE4))(this, percent, t, BG);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(FFASettlementDetailWindowView*))(Il2CppBase() + 0x3B1EB38))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(FFASettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B1EF38))(this, item);
	}
	template <typename T = void> T SetCampStats(uintptr_t ds) {
		return ((T (*)(FFASettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B1E170))(this, ds);
	}
	template <typename T = void> T GeneraPlayerItem(uintptr_t ds) {
		return ((T (*)(FFASettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B1F140))(this, ds);
	}
	template <typename T = void> T SetupRank(int32_t myselfRank) {
		return ((T (*)(FFASettlementDetailWindowView*, int32_t))(Il2CppBase() + 0x3B1FD98))(this, myselfRank);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(FFASettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B1FF14))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(FFASettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B200BC))(this, eBtnMode);
	}
	template <typename T = bool> static T GeneraPlayerItemm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B20274))(0, s);
	}
	template <typename T = void> T GeneraPlayerItemm__1() {
		return ((T (*)(FFASettlementDetailWindowView*))(Il2CppBase() + 0x3B202A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(FFASettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B2039C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(FFASettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B203A4))(this, P0);
	}

};

}
