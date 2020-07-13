#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& labelEvaluation() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& labelRank() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& MaterialBar() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& SurviveBar() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& FightingBar() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& AssistBar() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& InjureBar() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& AverageBar() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& labelMaterial() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& labelSurvive() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& labelFighting() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& labelAssist() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& labelInjure() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& labelAverage() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetGains(int32_t exp, int32_t gold, bool isFirstWin, bool isLiveOpsExp, bool isLiveOpsGold, int32_t trophyChange, uintptr_t gameType, Il2CppList<uintptr_t>* prizeDetailList, bool bHistoryRecord) {
		return ((T (*)(BRSettlementWindowView*, int32_t, int32_t, bool, bool, bool, int32_t, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3C37DFC))(this, exp, gold, isFirstWin, isLiveOpsExp, isLiveOpsGold, trophyChange, gameType, prizeDetailList, bHistoryRecord);
	}
	template <typename T = void> T SetRankInfo(uintptr_t ds) {
		return ((T (*)(BRSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3C36FB8))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t data, uint64_t gspGuid, uintptr_t gameMode) {
		return ((T (*)(BRSettlementWindowView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3C369B0))(this, data, gspGuid, gameMode);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(BRSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3C38018))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_SetGains(int32_t P0, int32_t P1, bool P2, bool P3, bool P4, int32_t P5, uintptr_t P6, Il2CppList<uintptr_t>* P7, bool P8) {
		return ((T (*)(BRSettlementWindowView*, int32_t, int32_t, bool, bool, bool, int32_t, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3C381A4))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(BRSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3C381E8))(this, P0);
	}

};

}
