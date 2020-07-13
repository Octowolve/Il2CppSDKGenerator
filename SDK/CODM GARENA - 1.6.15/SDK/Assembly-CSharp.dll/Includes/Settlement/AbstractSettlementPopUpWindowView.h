#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class AbstractSettlementPopUpWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "AbstractSettlementPopUpWindowView"));
	}

	template <typename T = uintptr_t> T& ObjMMA() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& digitEffectXp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& labelPlusExp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& digitEffectCP() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& labelPlusCP() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& digitEffectMMA() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& labelPlusMMa() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GoldLiveOps() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ExpLiveOps() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BtnBuff() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& GoEarnRank() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& mInit() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint64_t> T& m_MapId() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint64_t> T& m_GspGuid() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LabelTimeDay() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelTimeHour() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelCurrentTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LabelMapName() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& LabelModeMapName() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ToggleAddFriend() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ToggleLikeFriend() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& ToggleReport() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_EBtnMode() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BtnMoreMedal() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& CODLogo() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& ExitTimer() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& DurationTime() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& LabelExit() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& BtnConfirm() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& shareContainer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShareHideContainers() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& BtnShare() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& BtnShareWinnerCircleShotup() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& WinnerCircleShareTips() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ContainerScreen() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& transformLeftBottom() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& transformRightTop() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BottomRightPlayAgainParentTable() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& TopLeftPlayAgainParentTable() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& BottomRightPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& BottomRightAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& TopLeftPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& TopLeftAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& LabelPlayAgain() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& BtnPlayAgain() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uint64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uint32_t> T& localPlayerState() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& remainTimer() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& isUserTopLeftPlayAgain() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpTimmer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMMA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleAddChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleLikeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleReportChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMoreMedalClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowScreenFixedPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayAgainBtnLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopLeftTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E470))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E518))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E8D0))(this);
	}
	template <typename T = void> T SetUpTimmer() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0EA38))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t SettlementDS) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C0EC2C))(this, SettlementDS);
	}
	template <typename T = void> T SetBtnActive(uint64_t localPlayerId, uintptr_t SettlementDS) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uint64_t, uintptr_t))(Il2CppBase() + 0x3C0EFAC))(this, localPlayerId, SettlementDS);
	}
	template <typename T = void> T SetTop(uintptr_t SettlementDS) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C0F16C))(this, SettlementDS);
	}
	template <typename T = void> T SetGains(int32_t exp, int32_t gold, bool isFirstWin, bool isLiveOpsExp, bool isLiveOpsGold, int32_t trophyChange, uintptr_t gameType, Il2CppList<uintptr_t>* prizeDetailList, bool bHistoryRecord) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, int32_t, int32_t, bool, bool, bool, int32_t, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3C0F20C))(this, exp, gold, isFirstWin, isLiveOpsExp, isLiveOpsGold, trophyChange, gameType, prizeDetailList, bHistoryRecord);
	}
	template <typename T = void> T SetExp(int32_t exp, bool isFirstWin, bool isliveOps, bool bHistoryRecord) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, int32_t, bool, bool, bool))(Il2CppBase() + 0x3C0F3C0))(this, exp, isFirstWin, isliveOps, bHistoryRecord);
	}
	template <typename T = void> T SetGold(int32_t gold, bool isFristWin, bool isLiveOps, bool bHistoryRecord) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, int32_t, bool, bool, bool))(Il2CppBase() + 0x3C0F600))(this, gold, isFristWin, isLiveOps, bHistoryRecord);
	}
	template <typename T = void> T SetMMA(int32_t mmaChange, uintptr_t gameType, bool bHistoryRecord) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3C0F840))(this, mmaChange, gameType, bHistoryRecord);
	}
	template <typename T = void> T SetBuff(Il2CppList<uintptr_t>* prizeDetailList) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3C0FBEC))(this, prizeDetailList);
	}
	template <typename T = void> T SetBuffTransform(uintptr_t gameType) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C0FD1C))(this, gameType);
	}
	template <typename T = uint64_t> T get_MapId() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0FDBC))(this);
	}
	template <typename T = uint64_t> T get_GspGuid() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0FDC4))(this);
	}
	template <typename T = void> T SetMatchInfo(int32_t mapId, uintptr_t gameMode, uint32_t gameEndTime, uint64_t GspGuid) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, int32_t, uintptr_t, uint32_t, uint64_t))(Il2CppBase() + 0x3C0FDCC))(this, mapId, gameMode, gameEndTime, GspGuid);
	}
	template <typename T = uintptr_t> T get_EBtnMode() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C103B8))(this);
	}
	template <typename T = void> T OnToggleAddChange() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0EE80))(this);
	}
	template <typename T = void> T OnToggleLikeChange() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C1048C))(this);
	}
	template <typename T = void> T OnToggleReportChange() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C105B8))(this);
	}
	template <typename T = void> T OnToggleChange(uintptr_t eBtnMode) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C103C0))(this, eBtnMode);
	}
	template <typename T = void> T SetBtnTransform(bool bHistoryRecord) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, bool))(Il2CppBase() + 0x3C106E4))(this, bHistoryRecord);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C10884))(this, eBtnMode);
	}
	template <typename T = void> T OnBtnMoreMedalClick() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C10924))(this);
	}
	template <typename T = void> T ShowContainersWhenShare(bool bHide) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, bool))(Il2CppBase() + 0x3C10A8C))(this, bHide);
	}
	template <typename T = void> T RefreshExitTime(bool ShowClock) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, bool))(Il2CppBase() + 0x3C10C9C))(this, ShowClock);
	}
	template <typename T = void> T ShowScreenFixedPic(bool show) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, bool))(Il2CppBase() + 0x3C10FC4))(this, show);
	}
	template <typename T = void> T RefreshPlayAgainBtnLabel(uintptr_t ds) {
		return ((T (*)(AbstractSettlementPopUpWindowView*, uintptr_t))(Il2CppBase() + 0x3C110B8))(this, ds);
	}
	template <typename T = void> T UpdateRemainTime() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C11288))(this);
	}
	template <typename T = void> T RefreshBottomRightTable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E5D0))(this);
	}
	template <typename T = void> T RefreshTopLeftTable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E6EC))(this);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C0E980))(this);
	}
	template <typename T = void> T SetUpTimmerm__0() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C117CC))(this);
	}
	template <typename T = void> T RefreshTopLeftTablem__1() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C117E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C119E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C119F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(AbstractSettlementPopUpWindowView*))(Il2CppBase() + 0x3C119F8))(this);
	}

};

}
