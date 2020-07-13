#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WinnerCircleMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WinnerCircleMainView"));
	}

	template <typename T = uintptr_t> T& playagainStateView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TopLeftTable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TopLeftAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PVPCards() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FourCards() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ThreeCards() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TwoCards() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PVPCardRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PVECardRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PVE4CardRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PVE3CardRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& PVE2CardRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CardArr() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& PVPMapCampRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PVEMapCampRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BRMapCampRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BRTDMCampRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& PVPMapCamp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& PVEMapCamp() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BRMapCamp() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BRTDMMapCamp() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& PVPResult() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PVEResult() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BRResult() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& BRTDMResult() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& GoPVETitle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GoPVPTitle() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& GoBRTitle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& GoBRTDMTitle() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BRTDMScore() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& SpriteCampRebel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& SpriteCampRegular() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BlackScreen() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& BtnShare() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BtnShareCollider() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HideWhenShareGos() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShowWhenShareGos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& LabelRemainTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelShowExitTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& ExitIcon() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& AnimShakeExitBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CommonContainer() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& ShareContainer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& SetMotionTips() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& ShareTips() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& transformBottomLeft() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& transformRightTop() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& TimesShowMotionTips() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_RemainShowExitTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& timeLock() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& isSetShareBtnVisible() {
		return *(T*)((uintptr_t)this + 0x149);
	}
	template <typename T = uintptr_t> T& PVEClassicColor() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& PVEBossColor() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = int32_t> T& m_ExitTime() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& m_RemainShareTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& m_IsTopThree() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> static T& RED_NAME_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BLUE_NAME_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> T& BLUE_SPRITE_NAME() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppString*> T& RED_SPRITE_NAME() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& currentMapCamp() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBasicInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideMotionTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshShowExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRemainShareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRCreateRoomOBTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeExitBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsTopThree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWinCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBeforeScreenShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenShotFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShareBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableExitAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareBtnColiiderEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenShineEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScreenShootValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopLeftTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A396EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A39788))(this);
	}
	template <typename T = void> T InitBasicInfo(bool bPVP, bool bSinglePVP, bool bBR, bool isBRTDM) {
		return ((T (*)(WinnerCircleMainView*, bool, bool, bool, bool))(Il2CppBase() + 0x2A39A14))(this, bPVP, bSinglePVP, bBR, isBRTDM);
	}
	template <typename T = void> T InitCardList(int32_t SquadMemberCount) {
		return ((T (*)(WinnerCircleMainView*, int32_t))(Il2CppBase() + 0x2A34768))(this, SquadMemberCount);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B110))(this);
	}
	template <typename T = void> T HideMotionTips() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B1F0))(this);
	}
	template <typename T = void> T RefreshShowExitTime() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B30C))(this);
	}
	template <typename T = int32_t> T GetExitTime() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3AD00))(this);
	}
	template <typename T = int32_t> T GetRemainShareTime() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3ADD8))(this);
	}
	template <typename T = int32_t> T GetBRCreateRoomOBTime() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B75C))(this);
	}
	template <typename T = void> T TimerExit() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B850))(this);
	}
	template <typename T = void> T ShakeExitBtn() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3BA64))(this);
	}
	template <typename T = void> T ShowExit(bool bShow) {
		return ((T (*)(WinnerCircleMainView*, bool))(Il2CppBase() + 0x2A3AEB0))(this, bShow);
	}
	template <typename T = void> T CheckIsTopThree() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3BBD8))(this);
	}
	template <typename T = void> T SetCardData(Il2CppList<uintptr_t>* list, bool IsPVP, bool IsBr, bool IsSingleTeam) {
		return ((T (*)(WinnerCircleMainView*, Il2CppList<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x2A349A8))(this, list, IsPVP, IsBr, IsSingleTeam);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A37F38))(this);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A381CC))(this);
	}
	template <typename T = void> T SetWinCamp(uintptr_t mode, int32_t map, uintptr_t winCamp, uintptr_t myCamp) {
		return ((T (*)(WinnerCircleMainView*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A354B0))(this, mode, map, winCamp, myCamp);
	}
	template <typename T = void> T SetMatchInfo(int32_t mapId, uintptr_t gameMode, uintptr_t gameType) {
		return ((T (*)(WinnerCircleMainView*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A3BCD0))(this, mapId, gameMode, gameType);
	}
	template <typename T = void> T DoBeforeScreenShot() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A374BC))(this);
	}
	template <typename T = void> T OnScreenShotFinishCallback() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A37B94))(this);
	}
	template <typename T = void> T ShowShareBtn() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3910C))(this);
	}
	template <typename T = void> T LockTime(bool isLock) {
		return ((T (*)(WinnerCircleMainView*, bool))(Il2CppBase() + 0x2A377A0))(this, isLock);
	}
	template <typename T = void> T DisableExitAnimator() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A38E20))(this);
	}
	template <typename T = void> T ResetShareBtnColiiderEnable() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3B600))(this);
	}
	template <typename T = void> T ResetShareTips(bool active) {
		return ((T (*)(WinnerCircleMainView*, bool))(Il2CppBase() + 0x2A3C3E8))(this, active);
	}
	template <typename T = void> T ScreenShineEnd() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3C50C))(this);
	}
	template <typename T = bool> T IsScreenShootValid() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A373BC))(this);
	}
	template <typename T = bool> T IsShowShare() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3C234))(this);
	}
	template <typename T = uintptr_t> T GetShareData() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A37878))(this);
	}
	template <typename T = void> T RefreshTopLeftTable() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A392F8))(this);
	}
	template <typename T = void> T RefreshTopLeftTablem__0() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3C740))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3C948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(WinnerCircleMainView*))(Il2CppBase() + 0x2A3C94C))(this);
	}

};

}
