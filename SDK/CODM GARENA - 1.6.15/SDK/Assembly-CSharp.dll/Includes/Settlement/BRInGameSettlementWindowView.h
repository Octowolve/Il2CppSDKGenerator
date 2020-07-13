#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRInGameSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRInGameSettlementWindowView"));
	}

	template <typename T = uintptr_t> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelTotal() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelResultWin() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelResultFail() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelWinnerNum() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ToggleShowWinnerList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WinnerListGridRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RankingRoot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& WinnerListRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& TeamResultRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PersonalResultRoot() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LabelSurviveNum() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SpectateEnemyBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LabelExit() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ExitTimer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BtnConfirm() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& DurationTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint64_t> T& m_MapId() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint64_t> T& m_GspGuid() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& LabelCurrentTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& LabelMapName() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& NotWinnerRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& WinnerRoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& LabelExit_Winner() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelCurrentTime_Winner() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& LabelModeName_Winner() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& LabelMapName_Winner() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& BtnConfirm_Winner() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& QuotesContent() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& QuotesName() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& CampRoot() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelScoreLeft() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& LabelScoreRight() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LabelCampLeft() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& LabelCampRight() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& labelColorGuarderScore() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& labelColorTraitorScore() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& labelColorGuarderName() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& labelColorTraitorName() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalMKCamp() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& spriteLeftGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& spriteRightGlobalIconCamp() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& ResWinEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& ResLostEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& EffectAnimator2() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& labelFailBig() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& LabelExit_Camp() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& BtnConfirm_Camp() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& winnerCaptureShareBtn() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& notWinnerTeamCaptureShareBtn() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& notWinnerPersonalCaptureShareBtn() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& winnerCaptureShareBtnCollider() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& notWinnerTeamCaptureShareBtnCollider() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& notWinnerPersonalCaptureShareBtnCollider() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hideObjectWhenCapture() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& disableAnimatorWhenClose() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& timeLock() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = bool> T& isDisableCaptureButton() {
		return *(T*)((uintptr_t)this + 0x1CD);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& OrgX() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpectateEnemyActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWinnerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrainingRankSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBRResultSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpTimmer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowWinnerRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampRootInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCaptureButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBoxColliderEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCaptureEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uint64_t> T get_MapId() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1A14C))(this);
	}
	template <typename T = uint64_t> T get_GspGuid() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1A154))(this);
	}
	template <typename T = void> T SetMatchInfo(int32_t mapId, uintptr_t gameMode, uint32_t gameEndTime, uint64_t GspGuid) {
		return ((T (*)(BRInGameSettlementWindowView*, int32_t, uintptr_t, uint32_t, uint64_t))(Il2CppBase() + 0x3C1A15C))(this, mapId, gameMode, gameEndTime, GspGuid);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1A780))(this);
	}
	template <typename T = void> T SetPlayerInfo(Il2CppList<uintptr_t>* brData, uint64_t gspGuid, uintptr_t gameMode) {
		return ((T (*)(BRInGameSettlementWindowView*, Il2CppList<uintptr_t>*, uint64_t, uintptr_t))(Il2CppBase() + 0x3C188E4))(this, brData, gspGuid, gameMode);
	}
	template <typename T = void> T RefreshSpectateEnemyActive() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C192FC))(this);
	}
	template <typename T = void> T ShowWinnerList(bool bShow) {
		return ((T (*)(BRInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3C17B98))(this, bShow);
	}
	template <typename T = void> T SetTrainingRankSlogan() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C18520))(this);
	}
	template <typename T = void> T SetRankSlogan(int32_t rank, int32_t total, int32_t WinnerCount) {
		return ((T (*)(BRInGameSettlementWindowView*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3C18698))(this, rank, total, WinnerCount);
	}
	template <typename T = void> T PlayBRResultSound(int32_t rank) {
		return ((T (*)(BRInGameSettlementWindowView*, int32_t))(Il2CppBase() + 0x3C1AE54))(this, rank);
	}
	template <typename T = void> T RefreshExitTime(bool ShowClock) {
		return ((T (*)(BRInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3C1AAC0))(this, ShowClock);
	}
	template <typename T = void> T SetUpTimmer() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1A8E4))(this);
	}
	template <typename T = void> T SetShowWinnerRoot(bool isWinner) {
		return ((T (*)(BRInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3C18F30))(this, isWinner);
	}
	template <typename T = void> T SetCampRootInfo(uintptr_t ds, uintptr_t inGameResult) {
		return ((T (*)(BRInGameSettlementWindowView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C1B104))(this, ds, inGameResult);
	}
	template <typename T = void> T LockTime(bool isLock) {
		return ((T (*)(BRInGameSettlementWindowView*, bool))(Il2CppBase() + 0x3C19A00))(this, isLock);
	}
	template <typename T = void> T ResetCaptureButton() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1B010))(this);
	}
	template <typename T = void> T ResetBoxColliderEnable(uintptr_t collider, bool enable) {
		return ((T (*)(BRInGameSettlementWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3C1BC98))(this, collider, enable);
	}
	template <typename T = bool> T IsCaptureEnable() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1993C))(this);
	}
	template <typename T = void> T SetUpTimmerm__0() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1BE20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRInGameSettlementWindowView*))(Il2CppBase() + 0x3C1BE28))(this);
	}

};

}
