#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVPGamePrepareCountDownView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVPGamePrepareCountDownView"));
	}

	template <typename T = uintptr_t> T& AnimObj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountDownMaskLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BrCountDownLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& BrSmallCdEnd() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BrCdAnimator() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PropHuntCountDownLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PropHuntCountDownTipsLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PropHuntCountDownRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PropHuntCountDownMask() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PropHuntCountDownBG() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& PropHuntAnimator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bCountingDown() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_IsInGrayEffect() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& m_GrayEffectLeftTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& cacheShowText() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& cacheShowImage() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& cacheShowFlag() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& cacheModeShowText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& cacheModeShowImage() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& cacheModeShowFlag() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_ShouldShowCommonTips() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& mHideCampInfo() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = int32_t> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_IsPropHuntHideTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_CloseEyesFlag() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = bool> T& m_JustCountDown() {
		return *(T*)((uintptr_t)this + 0xD2);
	}
	template <typename T = float> static T& LeftTimeToCheckFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& welcome2() {
		return *(T*)((uintptr_t)this + 0xD3);
	}
	template <typename T = bool> T& bIsBrGame() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& bIsBrAniStart() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = bool> T& bIsBrAniLoop() {
		return *(T*)((uintptr_t)this + 0xD6);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_IntroduceScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameSideChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeColdDownAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrepareTimefloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExtraModeHints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHalfwayJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeShowModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPropHuntPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPropHuntHideTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBrGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCountDownLabelActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCountDownLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShowModeInfoCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = void> T T_MP1_IntroduceScore(float leftTime) {
		return ((T (*)(PVPGamePrepareCountDownView*, float))(Il2CppBase() + 0x3AA6B20))(this, leftTime);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA6EDC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA777C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA79D0))(this);
	}
	template <typename T = void> T OnGameSideChanged(uintptr_t message) {
		return ((T (*)(PVPGamePrepareCountDownView*, uintptr_t))(Il2CppBase() + 0x3AA7B0C))(this, message);
	}
	template <typename T = void> T OnNotifyTimeColdDownAnimation(uintptr_t message) {
		return ((T (*)(PVPGamePrepareCountDownView*, uintptr_t))(Il2CppBase() + 0x3AA7F78))(this, message);
	}
	template <typename T = bool> T IsInCountDown() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA80E0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA81B8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVPGamePrepareCountDownView*, float))(Il2CppBase() + 0x3AA81C0))(this, dt);
	}
	template <typename T = void> T CheckFireMode(float leftTime) {
		return ((T (*)(PVPGamePrepareCountDownView*, float))(Il2CppBase() + 0x3AA8430))(this, leftTime);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA9454))(this);
	}
	template <typename T = void> T OnNotifyPrepareTimefloat(float leftTime, uintptr_t camp, bool reconnect) {
		return ((T (*)(PVPGamePrepareCountDownView*, float, uintptr_t, bool))(Il2CppBase() + 0x3AA952C))(this, leftTime, camp, reconnect);
	}
	template <typename T = void> T ShowExtraModeHints() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA9FF0))(this);
	}
	template <typename T = void> T OnNotifyHalfwayJoin(uintptr_t msg) {
		return ((T (*)(PVPGamePrepareCountDownView*, uintptr_t))(Il2CppBase() + 0x3AAA25C))(this, msg);
	}
	template <typename T = void> T ShowCountDown(float leftTime, uintptr_t camp) {
		return ((T (*)(PVPGamePrepareCountDownView*, float, uintptr_t))(Il2CppBase() + 0x3AA9C64))(this, leftTime, camp);
	}
	template <typename T = void> T HideCountDown(bool dontShowInfo) {
		return ((T (*)(PVPGamePrepareCountDownView*, bool))(Il2CppBase() + 0x3AA7444))(this, dontShowInfo);
	}
	template <typename T = void> T TimerCountDown(float curTime, bool reconnect) {
		return ((T (*)(PVPGamePrepareCountDownView*, float, bool))(Il2CppBase() + 0x3AA8940))(this, curTime, reconnect);
	}
	template <typename T = void> T ResetModeInfo() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA7BE8))(this);
	}
	template <typename T = void> T SetModeInfo() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA71A4))(this);
	}
	template <typename T = void> T TimeShowModeInfo() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AAA4E8))(this);
	}
	template <typename T = void> T ShowCamp() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AAA718))(this);
	}
	template <typename T = void> T OnNotifyPropHuntPrepareTime(uintptr_t Msg) {
		return ((T (*)(PVPGamePrepareCountDownView*, uintptr_t))(Il2CppBase() + 0x3AAAE54))(this, Msg);
	}
	template <typename T = void> T OnNotifyPropHuntHideTime(uintptr_t Msg) {
		return ((T (*)(PVPGamePrepareCountDownView*, uintptr_t))(Il2CppBase() + 0x3AAB3A8))(this, Msg);
	}
	template <typename T = void> T CheckBrGame() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AA6FD0))(this);
	}
	template <typename T = void> T SetCountDownLabelActive(bool isActive) {
		return ((T (*)(PVPGamePrepareCountDownView*, bool))(Il2CppBase() + 0x3AAA33C))(this, isActive);
	}
	template <typename T = void> T SetCountDownLabel(int32_t nCd) {
		return ((T (*)(PVPGamePrepareCountDownView*, int32_t))(Il2CppBase() + 0x3AAA9C8))(this, nCd);
	}
	template <typename T = void> T StopShowModeInfoCommonTips() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AABB30))(this);
	}
	template <typename T = void> static T T_MP1_IntroduceScorem__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x3AABC88))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AABF48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AABF50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AABF58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPGamePrepareCountDownView*, float))(Il2CppBase() + 0x3AABF60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(PVPGamePrepareCountDownView*))(Il2CppBase() + 0x3AABF68))(this);
	}

};

}
