#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntTopScoreBoardViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntTopScoreBoardViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_PauseTimeCountDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_LastUseTimeWarningInfo() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TimeWarningInfos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_WarnInterval() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LastWarnTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_WarnIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_WhistleLeftTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_WhistleStartTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_WhistleWarnIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_WhistleWarnInterval() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_WhistleLastWarnTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_WhistleFlag() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& kNormalTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kWarningTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& kWarningTimeColor2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& m_TimeChanged() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = bool> T& m_TimeForbidden() {
		return *(T*)((uintptr_t)this + 0x76);
	}
	template <typename T = int32_t> static T& TEXT_SPRITE_WIDTH_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_TipsTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_TipsTotalTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_ShowTopTips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWhistleCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeForbidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGameRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTopTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTopTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B8DA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B8E78))(this);
	}
	template <typename T = void> T InitViewData() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34A5E60))(this);
	}
	template <typename T = void> T RefreshIcon() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B901C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B94FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B96A0))(this);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, uintptr_t))(Il2CppBase() + 0x34B97A0))(this, msg);
	}
	template <typename T = void> T UpdateWhistleCountDown(uintptr_t msg) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, uintptr_t))(Il2CppBase() + 0x34B99D0))(this, msg);
	}
	template <typename T = void> T SetTimeForbidden(bool isForbidden) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, bool))(Il2CppBase() + 0x34A66D4))(this, isForbidden);
	}
	template <typename T = bool> T CheckGameRunning() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34B9B30))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, float))(Il2CppBase() + 0x34B9E38))(this, deltaTime);
	}
	template <typename T = int32_t> T GetTimeWarningInfo(float time, uintptr_t warnInfo) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, float, uintptr_t))(Il2CppBase() + 0x34BA930))(this, time, warnInfo);
	}
	template <typename T = void> T ShowTopTips(Il2CppString* tips, float t) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, Il2CppString*, float))(Il2CppBase() + 0x34A6D1C))(this, tips, t);
	}
	template <typename T = void> T UpdateTopTips(float deltaTime) {
		return ((T (*)(PropHuntTopScoreBoardViewController*, float))(Il2CppBase() + 0x34BA744))(this, deltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34BAC64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34BAC6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34BAC74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntTopScoreBoardViewController*))(Il2CppBase() + 0x34BAC7C))(this);
	}

};

}
