#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_ScoreData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ScoreView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ClickTrigger() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_PressTrigger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_PressTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> static T& MAX_CLICK_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsPressed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_PauseTimeCountDown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_LastUseTimeWarningInfo() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TimeWarningInfos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_WarnInterval() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_LastWarnTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_WarnIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurLeaderStatus() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_ObserverInit() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& kNormalTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kWarningTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowObserverHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPlayerDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundCountChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurRoundLabelState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AEFD28))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AEFE18))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF02A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF038C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF0778))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF0AAC))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF0D88))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF0EE4))(this, msg);
	}
	template <typename T = void> T OnShowObserverHud() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF1044))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF11B4))(this);
	}
	template <typename T = void> T OnPressed() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF1380))(this);
	}
	template <typename T = void> T OnReleased() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF14CC))(this);
	}
	template <typename T = void> T OnBtnDown() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF16D4))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF1988))(this);
	}
	template <typename T = void> T ShowScorePanel() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF17B0))(this);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF1AFC))(this);
	}
	template <typename T = void> T PrepareData(uintptr_t scoreModel) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF1C50))(this, scoreModel);
	}
	template <typename T = void> T OnNotifyPlayerDead(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF1E30))(this, msg);
	}
	template <typename T = void> T OnScoreChanged(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF1F0C))(this, msg);
	}
	template <typename T = uintptr_t> T UpdateLeadingStatus(uintptr_t scoreModel) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF21A0))(this, scoreModel);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF231C))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVPGameScoreViewController*, float))(Il2CppBase() + 0x2AF254C))(this, deltaTime);
	}
	template <typename T = int32_t> T GetTimeWarningInfo(float time, uintptr_t warnInfo) {
		return ((T (*)(PVPGameScoreViewController*, float, uintptr_t))(Il2CppBase() + 0x2AF2B70))(this, time, warnInfo);
	}
	template <typename T = void> T OnGameHUDLayoutChanged() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF2D44))(this);
	}
	template <typename T = void> T OnRoundCountChanged(uintptr_t msg) {
		return ((T (*)(PVPGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x2AF2E0C))(this, msg);
	}
	template <typename T = void> T SetCurRoundLabelState(bool show) {
		return ((T (*)(PVPGameScoreViewController*, bool))(Il2CppBase() + 0x2AF2FB4))(this, show);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF3278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF3280))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF3288))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF3290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPGameScoreViewController*))(Il2CppBase() + 0x2AF3298))(this);
	}

};

}
