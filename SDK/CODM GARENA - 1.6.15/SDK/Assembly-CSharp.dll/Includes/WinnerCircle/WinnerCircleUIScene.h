#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WinnerCircle {

class WinnerCircleUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WinnerCircle", "WinnerCircleUIScene"));
	}

	template <typename T = uintptr_t> T& m_backController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_MainController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleSquad() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> static T& WINNER_CIRCLE_SOUNDBANK1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WINNER_CIRCLE_SOUNDBANK2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isSoundBankReady() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_NavigationController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& CurrentNaviUIController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& PRELOAD_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CloseNavigationCallback() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CloseNavigationCallbackController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_MainUIController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_BackGroundUIController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLightCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBuffDetailWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMedalsWindowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBRReportWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadWinnerCircleCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginShowBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReturnToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerReturnToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushNavigationCloseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationCloseFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopNavigationCloseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNavigationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A53E00))(this);
	}
	template <typename T = void> T ShowLightCommonTips(uintptr_t Msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A5498C))(this, Msg);
	}
	template <typename T = void> T OnShowBuffDetailWindowView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A54C18))(this, Msg);
	}
	template <typename T = void> T OnShowMedalsWindowView(uintptr_t Msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A54D2C))(this, Msg);
	}
	template <typename T = void> T ShowBRReportWindow(uintptr_t msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A54E40))(this, msg);
	}
	template <typename T = void> T OnLoadWinnerCircleCompleted(uintptr_t Msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A54EE0))(this, Msg);
	}
	template <typename T = void> T BeginShowBlackScreen() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A54F80))(this);
	}
	template <typename T = void> T BeginReturnToLobby(uintptr_t msg) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A5503C))(this, msg);
	}
	template <typename T = void> T TimerReturnToLobby() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A55178))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A55274))(this);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A554C0))(this);
	}
	template <typename T = void> T PreloadSoundBank() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A54480))(this);
	}
	template <typename T = void> T UnloadSoundBank() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A55324))(this);
	}
	template <typename T = void> T PlayBGM() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A545B4))(this);
	}
	template <typename T = void> T PushNavigation(uintptr_t data, bool force) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t, bool))(Il2CppBase() + 0x2830ED0))(this, data, force);
	}
	template <typename T = uintptr_t> T CreateNavigationController(uintptr_t data) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x1B6F4C0))(this, data);
	}
	template <typename T = uintptr_t> T CreateNavigationController_1(uintptr_t data) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A55560))(this, data);
	}
	template <typename T = uintptr_t> T CloseNavigationController(uintptr_t data, uintptr_t callback, uintptr_t callbackController) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A557C0))(this, data, callback, callbackController);
	}
	template <typename T = void> T RefreshNavigation() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A55C24))(this);
	}
	template <typename T = void> T PushNavigationCloseCallback(uintptr_t lastData, uintptr_t controller) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A55D0C))(this, lastData, controller);
	}
	template <typename T = void> T OnNavigationShowed() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A55E60))(this);
	}
	template <typename T = void> T OnNavigationCloseFinishCallback(uintptr_t data) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A55A74))(this, data);
	}
	template <typename T = bool> T PopNavigation(bool toTop) {
		return ((T (*)(WinnerCircleUIScene*, bool))(Il2CppBase() + 0x4A5610C))(this, toTop);
	}
	template <typename T = void> T OnPopNavigationCloseCallback(uintptr_t lastData, uintptr_t controller) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A566C8))(this, lastData, controller);
	}
	template <typename T = void> T ShutdownNavigationController(uintptr_t data) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A565A0))(this, data);
	}
	template <typename T = bool> T ShutdownWindowController(Il2CppString* controllerTypeFullName, int32_t userContext) {
		return ((T (*)(WinnerCircleUIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x4A56828))(this, controllerTypeFullName, userContext);
	}
	template <typename T = uintptr_t> T GetNavigationController(uintptr_t data) {
		return ((T (*)(WinnerCircleUIScene*, uintptr_t))(Il2CppBase() + 0x4A56420))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A56A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A56A28))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(WinnerCircleUIScene*))(Il2CppBase() + 0x4A56A30))(this);
	}

};

}
