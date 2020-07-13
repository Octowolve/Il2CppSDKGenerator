#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIScene"));
	}

	template <typename T = uintptr_t> T& m_EventChannel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GameHudList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GameHudTypeList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> T& m_CustomTickList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& TickIntervals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TickTimes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UIWindowControllers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_GamepadButtonHUD() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CurrentPopupWindowController() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PopUpwindowList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CurrentShowingCommonTips() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_EasyTouchComponent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& SHUTDOWN_MESSAGEBOX_CONTEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isMatchEnded() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadButtonHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowControllersByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_RemoveWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWindowControllerById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWindowControllerByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HidePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoHidePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindowOperation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCustomTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCustomTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCustomTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AttachGameHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_GetGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGameHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlockUIColider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadingShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonTipsCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadEasyTouchComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShutDownAppConfirmCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyServerTutorialDataChangedRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StopCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuideItemRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B07844))(this);
	}
	template <typename T = uintptr_t> T GetGamepadButtonHud() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B07B98))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UIScene*, float))(Il2CppBase() + 0x3B07C68))(this, deltaTime);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B08228))(this);
	}
	template <typename T = void> T OnGameReconnectSuccess() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B08478))(this);
	}
	template <typename T = void> T OnUIEvent(uintptr_t msg) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B086C0))(this, msg);
	}
	template <typename T = bool> T OnZoneEvent(uintptr_t Msg) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B08B6C))(this, Msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B08E40))(this);
	}
	template <typename T = uintptr_t> T CreateWindowController(int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, bool display, uintptr_t layer, bool createAtRoot, bool bChild) {
		return ((T (*)(UIScene*, int32_t, Il2CppVector3, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x3355F78))(this, userContext, localPosition, anchor, display, layer, createAtRoot, bChild);
	}
	template <typename T = uintptr_t> T CreateWindowController_1(uintptr_t controllerType, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, bool display, uintptr_t layer, bool createAtRoot, bool bChild) {
		return ((T (*)(UIScene*, uintptr_t, int32_t, Il2CppVector3, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x3B095F8))(this, controllerType, userContext, localPosition, anchor, display, layer, createAtRoot, bChild);
	}
	template <typename T = uintptr_t> T FindWindowController(Il2CppString* controllerId) {
		return ((T (*)(UIScene*, Il2CppString*))(Il2CppBase() + 0x3B09A24))(this, controllerId);
	}
	template <typename T = uintptr_t> T GetWindowController(int32_t userContext) {
		return ((T (*)(UIScene*, int32_t))(Il2CppBase() + 0x33565C4))(this, userContext);
	}
	template <typename T = uintptr_t> T GetWindowController_1(uintptr_t t, int32_t userContext) {
		return ((T (*)(UIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x3B09DD0))(this, t, userContext);
	}
	template <typename T = uintptr_t> T GetWindowController_2(Il2CppString* controllerTypeFullName, int32_t userContext) {
		return ((T (*)(UIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x3B09F3C))(this, controllerTypeFullName, userContext);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWindowControllersByType() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x21D2F58))(this);
	}
	template <typename T = uintptr_t> T ShowWindowController(bool display, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, uintptr_t layer, bool createAtRoot, bool bChild) {
		return ((T (*)(UIScene*, bool, int32_t, Il2CppVector3, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x33577E8))(this, display, userContext, localPosition, anchor, layer, createAtRoot, bChild);
	}
	template <typename T = void> T ShowWindowController_1(uintptr_t controller, bool display) {
		return ((T (*)(UIScene*, uintptr_t, bool))(Il2CppBase() + 0x3B0A07C))(this, controller, display);
	}
	template <typename T = bool> T RemoveWindowController(Il2CppString* controllerTypeFullName, int32_t userContext) {
		return ((T (*)(UIScene*, Il2CppString*, int32_t))(Il2CppBase() + 0x3B0A190))(this, controllerTypeFullName, userContext);
	}
	template <typename T = bool> T RemoveWindowController_1(int32_t userContext) {
		return ((T (*)(UIScene*, int32_t))(Il2CppBase() + 0x1B9F590))(this, userContext);
	}
	template <typename T = bool> T RemoveWindowController_2(uintptr_t controller) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B09380))(this, controller);
	}
	template <typename T = bool> T RemoveWindowControllerById(Il2CppString* controllerId) {
		return ((T (*)(UIScene*, Il2CppString*))(Il2CppBase() + 0x3B0A2CC))(this, controllerId);
	}
	template <typename T = bool> T RemoveWindowControllerByType() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x1B9F75C))(this);
	}
	template <typename T = bool> T UnRegisterWindowController(uintptr_t controller) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0A410))(this, controller);
	}
	template <typename T = uintptr_t> T SearchWindowController(int32_t context, bool includeInActive) {
		return ((T (*)(UIScene*, int32_t, bool))(Il2CppBase() + 0x33567B4))(this, context, includeInActive);
	}
	template <typename T = uintptr_t> T ShowPopupWindowImpl(uintptr_t windowController, bool forceShow, bool fifoFlag, uintptr_t mode, bool isShow) {
		return ((T (*)(UIScene*, uintptr_t, bool, bool, uintptr_t, bool))(Il2CppBase() + 0x3357194))(this, windowController, forceShow, fifoFlag, mode, isShow);
	}
	template <typename T = uintptr_t> T ShowPopupWindow(int32_t userContext, bool forceShow, bool fifoFlag, uintptr_t mode, uintptr_t layer, bool bChild, bool isShow) {
		return ((T (*)(UIScene*, int32_t, bool, bool, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x3356DE4))(this, userContext, forceShow, fifoFlag, mode, layer, bChild, isShow);
	}
	template <typename T = uintptr_t> T ShowPopupWindow_1(uintptr_t viewType, int32_t userContext, bool forceShow, bool fifoFlag, uintptr_t mode, uintptr_t layer, bool bChild, bool isShow) {
		return ((T (*)(UIScene*, uintptr_t, int32_t, bool, bool, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x3B0A52C))(this, viewType, userContext, forceShow, fifoFlag, mode, layer, bChild, isShow);
	}
	template <typename T = void> T HideAllPopupWindow() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0A810))(this);
	}
	template <typename T = void> T HidePopupWindow(uintptr_t closeType) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x1E860DC))(this, closeType);
	}
	template <typename T = bool> T IsHasPopupWindow() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x1B9F35C))(this);
	}
	template <typename T = void> T HidePopupWindow_1(uintptr_t controller, uintptr_t closeType) {
		return ((T (*)(UIScene*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B0AF3C))(this, controller, closeType);
	}
	template <typename T = void> T DoHidePopupWindow(uintptr_t windowView, Il2CppString* controllerId) {
		return ((T (*)(UIScene*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3B0AA04))(this, windowView, controllerId);
	}
	template <typename T = uintptr_t> T PopPopupWindow() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0B0C4))(this);
	}
	template <typename T = uintptr_t> T GetCurrentPopupWindow() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0B5E0))(this);
	}
	template <typename T = void> T ShowPopupWindowOperation(uintptr_t controller, bool activeFlag) {
		return ((T (*)(UIScene*, uintptr_t, bool))(Il2CppBase() + 0x3B0B6B0))(this, controller, activeFlag);
	}
	template <typename T = void> T SetCurrentPopupWindow(uintptr_t controller) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0B3F8))(this, controller);
	}
	template <typename T = uintptr_t> T CreateGameHud(uintptr_t eAsset, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, bool display, uintptr_t layer, bool bChildInUILayer) {
		return ((T (*)(UIScene*, uintptr_t, int32_t, Il2CppVector3, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x3355C90))(this, eAsset, userContext, localPosition, anchor, display, layer, bChildInUILayer);
	}
	template <typename T = void> T AddCustomTick(uintptr_t tick) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B09C04))(this, tick);
	}
	template <typename T = void> T RemoveCustomTick(uintptr_t tick) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0B818))(this, tick);
	}
	template <typename T = void> T ClearCustomTick() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B09480))(this);
	}
	template <typename T = uintptr_t> T CreateGameHud_1(uintptr_t type, uintptr_t eAsset, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, bool display, uintptr_t layer, bool bChildInUILayer) {
		return ((T (*)(UIScene*, uintptr_t, uintptr_t, int32_t, Il2CppVector3, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x3B0B9E4))(this, type, eAsset, userContext, localPosition, anchor, display, layer, bChildInUILayer);
	}
	template <typename T = uintptr_t> static T AttachGameHUD(uintptr_t assetTypeID, Il2CppVector3 localPosition, uintptr_t attachAnchor, bool display, int32_t userContext, uintptr_t attachLayer, bool bChildInUILayer) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, bool, int32_t, uintptr_t, bool))(Il2CppBase() + 0x33559A8))(0, assetTypeID, localPosition, attachAnchor, display, userContext, attachLayer, bChildInUILayer);
	}
	template <typename T = uintptr_t> static T AttachGameHUD_1(uintptr_t type, uintptr_t assetTypeID, Il2CppVector3 localPosition, uintptr_t attachAnchor, bool display, int32_t userContext, uintptr_t attachLayer, bool bChildInUILayer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, bool, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3B0C1BC))(0, type, assetTypeID, localPosition, attachAnchor, display, userContext, attachLayer, bChildInUILayer);
	}
	template <typename T = uintptr_t> T GetGameHud(uintptr_t assetId, int32_t userContext) {
		return ((T (*)(UIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x3356420))(this, assetId, userContext);
	}
	template <typename T = uintptr_t> T GetGameHud_1() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3356274))(this);
	}
	template <typename T = uintptr_t> T GetGameHud_2(uintptr_t type) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0CC80))(this, type);
	}
	template <typename T = uintptr_t> T GetGameHud_3(uintptr_t assetId, int32_t userContext) {
		return ((T (*)(UIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x3B0C9F8))(this, assetId, userContext);
	}
	template <typename T = uintptr_t> T ShowGameHud(uintptr_t assetId, bool display, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, uintptr_t layer, bool bChildInUILayer) {
		return ((T (*)(UIScene*, uintptr_t, bool, int32_t, Il2CppVector3, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3356A40))(this, assetId, display, userContext, localPosition, anchor, layer, bChildInUILayer);
	}
	template <typename T = void> T RemoveUIView(Il2CppString* InViewID) {
		return ((T (*)(UIScene*, Il2CppString*))(Il2CppBase() + 0x3B0CDCC))(this, InViewID);
	}
	template <typename T = void> T BlockUIColider(bool block, int32_t timeoutSeconds, int32_t context) {
		return ((T (*)(UIScene*, bool, int32_t, int32_t))(Il2CppBase() + 0x3B0D010))(this, block, timeoutSeconds, context);
	}
	template <typename T = bool> T IsLoadingShowing(int32_t context) {
		return ((T (*)(UIScene*, int32_t))(Il2CppBase() + 0x3B0D3B4))(this, context);
	}
	template <typename T = void> T ShowLoading(bool display, bool blockTouch, bool showMask, Il2CppString* tips, int32_t timeoutSeconds, int32_t context, Il2CppVector3 localPosition, uintptr_t anchor, float renderDelay) {
		return ((T (*)(UIScene*, bool, bool, bool, Il2CppString*, int32_t, int32_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x3B0D1B0))(this, display, blockTouch, showMask, tips, timeoutSeconds, context, localPosition, anchor, renderDelay);
	}
	template <typename T = void> T ShowMessageBox(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText, bool errorTopReport) {
		return ((T (*)(UIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1E862F8))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText, errorTopReport);
	}
	template <typename T = void> T ShowMessageBox_1(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(UIScene*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3B0D4D8))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText);
	}
	template <typename T = void> T ShowCommonTips(Il2CppString* tipsContent, float visibleTime, bool repeatable, bool bForceShow, void* from, void* to, void* offset) {
		return ((T (*)(UIScene*, Il2CppString*, float, bool, bool, void*, void*, void*))(Il2CppBase() + 0x3B0D654))(this, tipsContent, visibleTime, repeatable, bForceShow, from, to, offset);
	}
	template <typename T = uintptr_t> T CreateCommonTipsCtrl(Il2CppVector3 pos) {
		return ((T (*)(UIScene*, Il2CppVector3))(Il2CppBase() + 0x3B0DAD4))(this, pos);
	}
	template <typename T = void> T LoadEasyTouchComponent() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0DC18))(this);
	}
	template <typename T = void> T RegisterEventHandler(uint32_t CommandId, void* CallFunc) {
		return ((T (*)(UIScene*, uint32_t, void*))(Il2CppBase() + 0x3B0DE34))(this, CommandId, CallFunc);
	}
	template <typename T = void> T UnregisterEventHandler(uint32_t CommandId) {
		return ((T (*)(UIScene*, uint32_t))(Il2CppBase() + 0x3B0DF48))(this, CommandId);
	}
	template <typename T = void> T RegisterZoneEventHandler(uintptr_t lobbyType, void* CallFunc) {
		return ((T (*)(UIScene*, uintptr_t, void*))(Il2CppBase() + 0x3B07A84))(this, lobbyType, CallFunc);
	}
	template <typename T = void> T UnregisterZoneEventHandler(uintptr_t lobbyType) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0E040))(this, lobbyType);
	}
	template <typename T = void> T LoadAudioBank(bool bLoad) {
		return ((T (*)(UIScene*, bool))(Il2CppBase() + 0x3B0E138))(this, bLoad);
	}
	template <typename T = bool> T get_TimerEnabled() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0E208))(this);
	}
	template <typename T = uintptr_t> T SetTimer(float InInterval, bool bLoop, uintptr_t InTimerDelegate, bool InAutoStart, bool CanBePaused) {
		return ((T (*)(UIScene*, float, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x3B0E218))(this, InInterval, bLoop, InTimerDelegate, InAutoStart, CanBePaused);
	}
	template <typename T = void> T ClearTimer(uint32_t timerID) {
		return ((T (*)(UIScene*, uint32_t))(Il2CppBase() + 0x3B0E354))(this, timerID);
	}
	template <typename T = void> T ClearTimer_1(uintptr_t InTimerDelegate) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0E440))(this, InTimerDelegate);
	}
	template <typename T = void> T ClearAllTimers() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0E52C))(this);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0E60C))(this);
	}
	template <typename T = void> T OnShutDownAppConfirmCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(UIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x3B0E85C))(this, result, userContext);
	}
	template <typename T = void> T NotifyServerTutorialDataChangedRes(uintptr_t message) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0E994))(this, message);
	}
	template <typename T = uintptr_t> T StartCoroutine(uintptr_t ienum) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0EA64))(this, ienum);
	}
	template <typename T = void> T StopCoroutine(uintptr_t co) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0EC54))(this, co);
	}
	template <typename T = void> T StopCoroutine_1(uintptr_t ienum) {
		return ((T (*)(UIScene*, uintptr_t))(Il2CppBase() + 0x3B0EDF4))(this, ienum);
	}
	template <typename T = uintptr_t> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B0EFDC))(0);
	}
	template <typename T = void> T OnGuideItemRegister(int32_t inGuideItemType) {
		return ((T (*)(UIScene*, int32_t))(Il2CppBase() + 0x3B0F10C))(this, inGuideItemType);
	}
	template <typename T = void> T OnSettlement() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0F1DC))(this);
	}
	template <typename T = uintptr_t> T get_FtueTipsController() {
		return ((T (*)(UIScene*))(Il2CppBase() + 0x3B0F2F4))(this);
	}

};

}
