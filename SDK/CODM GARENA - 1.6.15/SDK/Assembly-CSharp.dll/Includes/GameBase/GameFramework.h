#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameFramework
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameFramework"));
	}

	template <typename T = uintptr_t> T& m_EventCreateFrameworkCompleted() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> static T& IsNoLoginMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsDirectDSLoginMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& m_AwakeFlagForGameStuckTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = float> static T& m_EngineStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& GAverageFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& GAverageTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_MacroFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_MacroFPSFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& m_MacroFrameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& MacroFPSRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_StutterRelativeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& m_Stutter300msCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& m_Stutter200msCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& m_Stutter100msCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& OPEN_TOUCH_LOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> T& m_TimePeriodSinceLastInput() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_OriginalScreenBrightness() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsDarken() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsInited() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_m_EventCreateFrameworkCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_m_EventCreateFrameworkCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterCreateFrameWorkEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterCreateFrameWorkEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEngine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartNoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCommonAssetsForNoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterNoLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustFixedDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateFPSTimings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCommonAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNativeMsgRecv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAdjustScreenBrightness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBrightnessAdjustment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceLateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = void> T add_m_EventCreateFrameworkCompleted(uintptr_t value) {
		return ((T (*)(GameFramework*, uintptr_t))(Il2CppBase() + 0x32165D4))(this, value);
	}
	template <typename T = void> T remove_m_EventCreateFrameworkCompleted(uintptr_t value) {
		return ((T (*)(GameFramework*, uintptr_t))(Il2CppBase() + 0x32167FC))(this, value);
	}
	template <typename T = void> T RegisterCreateFrameWorkEvent(uintptr_t InCallBackEvent) {
		return ((T (*)(GameFramework*, uintptr_t))(Il2CppBase() + 0x31F06B0))(this, InCallBackEvent);
	}
	template <typename T = void> T UnRegisterCreateFrameWorkEvent(uintptr_t InCallBackEvent) {
		return ((T (*)(GameFramework*, uintptr_t))(Il2CppBase() + 0x31F09AC))(this, InCallBackEvent);
	}
	template <typename T = float> static T get_EngineStartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3216A24))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3216AD4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3217318))(this);
	}
	template <typename T = void> T InitEngine() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3216E84))(this);
	}
	template <typename T = void> T DoReLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x32179CC))(this);
	}
	template <typename T = void> T StartNoLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x32177F8))(this);
	}
	template <typename T = void> T LoadCommonAssetsForNoLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3217AA0))(this);
	}
	template <typename T = void> T EnterNoLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3217C9C))(this);
	}
	template <typename T = void> T StartLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x321751C))(this);
	}
	template <typename T = void> T EnterLogin() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x32180D8))(this);
	}
	template <typename T = int32_t> static T get_MacroFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x3218428))(0);
	}
	template <typename T = float> static T get_MacroFPSFloat() {
		return ((T (*)(void *))(Il2CppBase() + 0x32184D8))(0);
	}
	template <typename T = float> static T get_MacroFrameTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3218588))(0);
	}
	template <typename T = int32_t> static T get_StutterRelativeCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3218638))(0);
	}
	template <typename T = int32_t> static T get_Stutter300msCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x32186E8))(0);
	}
	template <typename T = int32_t> static T get_Stutter200msCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3218798))(0);
	}
	template <typename T = int32_t> static T get_Stutter100msCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3218848))(0);
	}
	template <typename T = void> T AdjustFixedDeltaTime() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x32188F8))(this);
	}
	template <typename T = void> T CalculateFPSTimings() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3218C7C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x32190A8))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(GameFramework*, bool))(Il2CppBase() + 0x32196A4))(this, paused);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3219C1C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3219D58))(this);
	}
	template <typename T = void> T LoadCommonAssets() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3217F10))(this);
	}
	template <typename T = void> T DoLogout(bool logoutUser) {
		return ((T (*)(GameFramework*, bool))(Il2CppBase() + 0x3219FC8))(this, logoutUser);
	}
	template <typename T = void> T OnNativeMsgRecv(Il2CppString* param) {
		return ((T (*)(GameFramework*, Il2CppString*))(Il2CppBase() + 0x321A0E0))(this, param);
	}
	template <typename T = void> T CheckAdjustScreenBrightness() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x321A7F4))(this);
	}
	template <typename T = void> T ResetBrightnessAdjustment() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x3219B48))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x321AAB0))(this);
	}
	template <typename T = void> T ForceLateUpdate() {
		return ((T (*)(GameFramework*))(Il2CppBase() + 0x321AC48))(this);
	}

};

}
