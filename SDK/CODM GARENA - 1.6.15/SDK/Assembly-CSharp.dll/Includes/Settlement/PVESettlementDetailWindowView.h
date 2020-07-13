#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementDetailWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementDetailWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& labelEarnedXP() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& labelEarnedZMCoin() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& labelEarnedCoin() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& NumericGridRoot() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& GoResultWin() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& GoResultFail() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& LabelResult() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ScorePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SurvivePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AllDamagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& AllDamagePercent_ForBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BossDamagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DamagePercent_ForBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DamagePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DropsPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& PVEClassicColor() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& PVEBossColor() {
		return *(T*)((uintptr_t)this + 0x1B8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t) {
		return ((T (*)(PVESettlementDetailWindowView*, float, uintptr_t))(Il2CppBase() + 0x3B2E564))(this, percent, t);
	}
	template <typename T = void> T AdaptView() {
		return ((T (*)(PVESettlementDetailWindowView*))(Il2CppBase() + 0x3B2E320))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(PVESettlementDetailWindowView*))(Il2CppBase() + 0x3B2ED3C))(this);
	}
	template <typename T = void> T _AdaptCell(uintptr_t item) {
		return ((T (*)(PVESettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B2E7C0))(this, item);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t data, uintptr_t result, uint64_t gspGuid, uintptr_t gameMode, int32_t coin, int32_t pveCoin, int32_t exp) {
		return ((T (*)(PVESettlementDetailWindowView*, uintptr_t, uintptr_t, uint64_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3B2D89C))(this, data, result, gspGuid, gameMode, coin, pveCoin, exp);
	}
	template <typename T = void> T SetMapInfo(int32_t pveLevelId) {
		return ((T (*)(PVESettlementDetailWindowView*, int32_t))(Il2CppBase() + 0x3B2DF00))(this, pveLevelId);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(PVESettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B2EED0))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(PVESettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B2F060))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(PVESettlementDetailWindowView*, bool))(Il2CppBase() + 0x3B2F1F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(PVESettlementDetailWindowView*, uintptr_t))(Il2CppBase() + 0x3B2F1F8))(this, P0);
	}

};

}
