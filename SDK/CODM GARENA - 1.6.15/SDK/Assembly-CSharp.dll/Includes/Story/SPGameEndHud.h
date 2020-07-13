#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameEndHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameEndHud"));
	}

	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& UIGridScript() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Template() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SuccessAnimRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FailedAnimRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SuccessRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& FailedRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ClaimBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RetryBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_TweenAlpha() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GainedXP() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GainedCP() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GainedCard() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GainedPlusXP() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GainedPlusCP() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& GainedPlusCard() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& FirstWinXP() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& FirstWinCP() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& FirstWinDrops() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& gainedExpLiveOps() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& gainedGoldLiveOps() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BattleGainsRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& GainedCardRoot() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BgCollider() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& isReturningToLobby() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSPConditions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetSPConditions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupGridConditionText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixDescriptionLabelPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEnd_IDataRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlowDownTimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsExceedDailyCap_DropItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Retry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AskRetry_Standalone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AskRetry_Async() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AskRetry_Sync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReturnToLobbyCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F0ED84))(this);
	}
	template <typename T = void> T SetSPConditions(Il2CppString* cond, uintptr_t result) {
		return ((T (*)(SPGameEndHud*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F0F1F4))(this, cond, result);
	}
	template <typename T = void> T SetSPConditions_1(Il2CppList<Il2CppString*>* condList, uintptr_t result) {
		return ((T (*)(SPGameEndHud*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x3F0F2A8))(this, condList, result);
	}
	template <typename T = bool> T SetupGridConditionText(uintptr_t trans, Il2CppString* text, uintptr_t result) {
		return ((T (*)(SPGameEndHud*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F0F8E0))(this, trans, text, result);
	}
	template <typename T = void> T FixDescriptionLabelPos(uintptr_t label, Il2CppString* labelContent, uintptr_t result) {
		return ((T (*)(SPGameEndHud*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F0FB48))(this, label, labelContent, result);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t result) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F0FD2C))(this, result);
	}
	template <typename T = void> T GameEnd_IDataRecord(bool status) {
		return ((T (*)(SPGameEndHud*, bool))(Il2CppBase() + 0x3F104A4))(this, status);
	}
	template <typename T = void> T SlowDownTimeScale() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F103F4))(this);
	}
	template <typename T = void> T ResetTimeScale() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F105A8))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F0EFF4))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F10654))(this, msg);
	}
	template <typename T = void> T SetGold(int32_t gold, bool isFirstWin, bool isExceedDailyCap, bool LiveOpsGold) {
		return ((T (*)(SPGameEndHud*, int32_t, bool, bool, bool))(Il2CppBase() + 0x3F10700))(this, gold, isFirstWin, isExceedDailyCap, LiveOpsGold);
	}
	template <typename T = void> T SetExp(int32_t exp, bool isFirstWin, bool isExceedDailyCap, bool LiveOpsExp) {
		return ((T (*)(SPGameEndHud*, int32_t, bool, bool, bool))(Il2CppBase() + 0x3F10AC4))(this, exp, isFirstWin, isExceedDailyCap, LiveOpsExp);
	}
	template <typename T = void> T SetCard(int32_t card, bool isFirstWin, bool isExceedDailyCap) {
		return ((T (*)(SPGameEndHud*, int32_t, bool, bool))(Il2CppBase() + 0x3F10E88))(this, card, isFirstWin, isExceedDailyCap);
	}
	template <typename T = void> T SetIsExceedDailyCap_DropItems(bool isExceed) {
		return ((T (*)(SPGameEndHud*, bool))(Il2CppBase() + 0x3F11300))(this, isExceed);
	}
	template <typename T = void> T Retry() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F114B4))(this);
	}
	template <typename T = void> T OnReturnToLobby() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F11940))(this);
	}
	template <typename T = void> T AskRetry_Standalone(uintptr_t gameInfoDS) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F11648))(this, gameInfoDS);
	}
	template <typename T = void> T AskRetry_Async(uintptr_t gameInfoDS) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F118A0))(this, gameInfoDS);
	}
	template <typename T = void> T AskRetry_Sync(uintptr_t gameInfoDS) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F11800))(this, gameInfoDS);
	}
	template <typename T = void> T SetReturnToLobbyCallback(uintptr_t action) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F11B20))(this, action);
	}
	template <typename T = void> T OnReturnToLobbym__0() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F11BC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SPGameEndHud*))(Il2CppBase() + 0x3F11C78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(SPGameEndHud*, uintptr_t))(Il2CppBase() + 0x3F11C80))(this, P0);
	}

};

}
