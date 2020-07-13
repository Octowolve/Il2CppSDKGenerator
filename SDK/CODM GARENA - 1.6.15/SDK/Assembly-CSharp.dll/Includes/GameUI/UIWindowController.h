#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIWindowController"));
	}

	template <typename T = uintptr_t> T& m_EventChannel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_bIsShutDown() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_ControllerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_InstanceID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChildWindowControllers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_UINode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsActive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsActiveEvent() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_HasActived() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& m_UIHandleType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& anchors() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TimerIdList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TimerOwnerMapId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetControllerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInstanceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetControllerContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReceiveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIModeActice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFadeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeOutFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterZoneEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnRegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterButtonClickWithAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChildControllerById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChildControllerByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateControllerUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateControllerUIView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachAssetUIWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AttachAssetUIWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchChildController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlockUIColider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPopupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_HidePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StopTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllTimersInController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}

	template <typename T = Il2CppString*> T get_ControllerID() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A245DC))(this);
	}
	template <typename T = void> T SetControllerID(Il2CppString* InID) {
		return ((T (*)(UIWindowController*, Il2CppString*))(Il2CppBase() + 0x2A245E4))(this, InID);
	}
	template <typename T = void> T SetInstanceID(uint32_t id) {
		return ((T (*)(UIWindowController*, uint32_t))(Il2CppBase() + 0x2A2468C))(this, id);
	}
	template <typename T = bool> T get_IsShutDown() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24734))(this);
	}
	template <typename T = int32_t> T get_Context() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2473C))(this);
	}
	template <typename T = void> T set_Context(int32_t value) {
		return ((T (*)(UIWindowController*, int32_t))(Il2CppBase() + 0x2A24744))(this, value);
	}
	template <typename T = void> T SetControllerContext(int32_t context) {
		return ((T (*)(UIWindowController*, int32_t))(Il2CppBase() + 0x2A2474C))(this, context);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A247F4))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2488C))(this);
	}
	template <typename T = void> T RefreshUI(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(UIWindowController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A24924))(this, args);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24A68))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24B00))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A245D4))(this, value);
	}
	template <typename T = uintptr_t> T get_UINode() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24B08))(this);
	}
	template <typename T = bool> T IsHasUIView() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24B10))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24BFC))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24C9C))(this);
	}
	template <typename T = void> T SetReceiveEvent(bool bReceive) {
		return ((T (*)(UIWindowController*, bool))(Il2CppBase() + 0x2A24CA4))(this, bReceive);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A24D4C))(this);
	}
	template <typename T = void> T SetViewAlpha(float alpha) {
		return ((T (*)(UIWindowController*, float))(Il2CppBase() + 0x2A24D54))(this, alpha);
	}
	template <typename T = void> T SetUIModeActice(bool isActive, bool enableOptimize) {
		return ((T (*)(UIWindowController*, bool, bool))(Il2CppBase() + 0x2A24E7C))(this, isActive, enableOptimize);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(UIWindowController*, bool, bool, bool))(Il2CppBase() + 0x2A24FC4))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25214))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A252AC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25344))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25578))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25610))(this);
	}
	template <typename T = void> T PlayFadeEffect() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25844))(this);
	}
	template <typename T = void> T OnFadeOutFinish() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A259E0))(this);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(UIWindowController*, bool, bool, bool))(Il2CppBase() + 0x2A25AC0))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T CloseSelf() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25D08))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A25F6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A26004))(this);
	}
	template <typename T = void> T RegisterEventHandler(uint32_t CommandId, void* CallFunc, bool callImmediately) {
		return ((T (*)(UIWindowController*, uint32_t, void*, bool))(Il2CppBase() + 0x2A2609C))(this, CommandId, CallFunc, callImmediately);
	}
	template <typename T = void> T UnregisterEventHandler(uint32_t CommandId) {
		return ((T (*)(UIWindowController*, uint32_t))(Il2CppBase() + 0x2A261C0))(this, CommandId);
	}
	template <typename T = void> T RegisterZoneEventHandler(uintptr_t lobbyType, void* CallFunc) {
		return ((T (*)(UIWindowController*, uintptr_t, void*))(Il2CppBase() + 0x2A26288))(this, lobbyType, CallFunc);
	}
	template <typename T = void> T UnregisterZoneEventHandler(uintptr_t lobbyType) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A2636C))(this, lobbyType);
	}
	template <typename T = void> T RegisterButtonClick(uintptr_t BtnGo, uintptr_t func, bool effectEnabled, float clickInterval) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t, bool, float))(Il2CppBase() + 0x2A26434))(this, BtnGo, func, effectEnabled, clickInterval);
	}
	template <typename T = void> T UnRegisterButtonClick(uintptr_t BtnGo, uintptr_t func) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A26640))(this, BtnGo, func);
	}
	template <typename T = void> T RegisterButtonClick_1(uintptr_t BtnTemp, uintptr_t func, Il2CppString* BtnLabel, bool effectEnabled, float clickInterval) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t, Il2CppString*, bool, float))(Il2CppBase() + 0x2A267B8))(this, BtnTemp, func, BtnLabel, effectEnabled, clickInterval);
	}
	template <typename T = void> T UnRegisterButtonClick_1(uintptr_t BtnTemp, uintptr_t func) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A26A58))(this, BtnTemp, func);
	}
	template <typename T = void> T RegisterToggleChange(uintptr_t toggleGo, uintptr_t func) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A26C2C))(this, toggleGo, func);
	}
	template <typename T = void> T UnRegisterToggleChange(uintptr_t toggleGo, uintptr_t func) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A26DA4))(this, toggleGo, func);
	}
	template <typename T = void> T RegisterButtonClickWithAnimator(uintptr_t BtnGo, uintptr_t func, bool effectEnabled, float fixedTime) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t, bool, float))(Il2CppBase() + 0x2A26F1C))(this, BtnGo, func, effectEnabled, fixedTime);
	}
	template <typename T = uintptr_t> T GetUIScene() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A271DC))(this);
	}
	template <typename T = uintptr_t> T GetRootController() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A272B8))(this);
	}
	template <typename T = bool> T OnUIEvent(uintptr_t Msg) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A273A0))(this, Msg);
	}
	template <typename T = bool> T OnZoneEvent(uintptr_t Msg) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A2753C))(this, Msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A276B8))(this);
	}
	template <typename T = void> T RemoveUIView(Il2CppString* InViewID) {
		return ((T (*)(UIWindowController*, Il2CppString*))(Il2CppBase() + 0x2A27AD4))(this, InViewID);
	}
	template <typename T = uintptr_t> T CreateChildController(int32_t userContext, Il2CppVector3 localPosition, bool display, uintptr_t parent, uintptr_t anchor, uintptr_t layer, uintptr_t assetId) {
		return ((T (*)(UIWindowController*, int32_t, Il2CppVector3, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33585E0))(this, userContext, localPosition, display, parent, anchor, layer, assetId);
	}
	template <typename T = uintptr_t> T CreateChildController_1(uintptr_t controllerType, int32_t userContext, uintptr_t assetId, Il2CppVector3 localPosition, bool display, uintptr_t parent, uintptr_t anchor, uintptr_t layer) {
		return ((T (*)(UIWindowController*, uintptr_t, int32_t, uintptr_t, Il2CppVector3, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A27B80))(this, controllerType, userContext, assetId, localPosition, display, parent, anchor, layer);
	}
	template <typename T = uintptr_t> T GetViewParent(uintptr_t parent, uintptr_t anchor, uintptr_t layer) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A2806C))(this, parent, anchor, layer);
	}
	template <typename T = uintptr_t> T GetChildController(int32_t userContext, bool canBeNull) {
		return ((T (*)(UIWindowController*, int32_t, bool))(Il2CppBase() + 0x33588B0))(this, userContext, canBeNull);
	}
	template <typename T = uintptr_t> T GetChildController_1(Il2CppString* controllerTypeFullName, int32_t userContext) {
		return ((T (*)(UIWindowController*, Il2CppString*, int32_t))(Il2CppBase() + 0x2A28B84))(this, controllerTypeFullName, userContext);
	}
	template <typename T = uintptr_t> T FindChildController(Il2CppString* controllerId) {
		return ((T (*)(UIWindowController*, Il2CppString*))(Il2CppBase() + 0x2A285A0))(this, controllerId);
	}
	template <typename T = uintptr_t> T ShowChildController(bool display, int32_t userContext, Il2CppVector3 localPosition, uintptr_t parent, uintptr_t anchor, uintptr_t layer) {
		return ((T (*)(UIWindowController*, bool, int32_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3358DFC))(this, display, userContext, localPosition, parent, anchor, layer);
	}
	template <typename T = uintptr_t> T ShowChildController_1(uintptr_t type, bool display, int32_t userContext, Il2CppVector3 localPosition, uintptr_t parent, uintptr_t anchor, uintptr_t layer) {
		return ((T (*)(UIWindowController*, uintptr_t, bool, int32_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A28CA0))(this, type, display, userContext, localPosition, parent, anchor, layer);
	}
	template <typename T = bool> T RemoveChildController(int32_t userContext) {
		return ((T (*)(UIWindowController*, int32_t))(Il2CppBase() + 0x1B9FA20))(this, userContext);
	}
	template <typename T = bool> T RemoveChildController_1(Il2CppString* controllerTypeFullName, int32_t userContext) {
		return ((T (*)(UIWindowController*, Il2CppString*, int32_t))(Il2CppBase() + 0x2A28E4C))(this, controllerTypeFullName, userContext);
	}
	template <typename T = bool> T RemoveChildControllerById(Il2CppString* controllerId) {
		return ((T (*)(UIWindowController*, Il2CppString*))(Il2CppBase() + 0x2A25E58))(this, controllerId);
	}
	template <typename T = bool> T RemoveChildControllerByType() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x1B9FBA4))(this);
	}
	template <typename T = uintptr_t> T CreateControllerUIView(uintptr_t inAssetID, Il2CppVector3 localPosition, uintptr_t anchor, uintptr_t layer, bool createAtRoot, bool bChild) {
		return ((T (*)(UIWindowController*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x2A28F64))(this, inAssetID, localPosition, anchor, layer, createAtRoot, bChild);
	}
	template <typename T = uintptr_t> T CreateControllerUIView_1(uintptr_t inAssetID, uintptr_t parent, Il2CppVector3 localPosition) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2A283F0))(this, inAssetID, parent, localPosition);
	}
	template <typename T = uintptr_t> static T AttachAssetUIWindow(uintptr_t assetTypeID, uintptr_t InOwner, Il2CppVector3 localPosition, uintptr_t attachAnchor, uintptr_t attachLayer, bool createAtRoot, bool bChild) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x3358264))(0, assetTypeID, InOwner, localPosition, attachAnchor, attachLayer, createAtRoot, bChild);
	}
	template <typename T = uintptr_t> static T AttachAssetUIWindow_1(uintptr_t assetTypeID, uintptr_t InOwner, uintptr_t parent, Il2CppVector3 localPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3357AB4))(0, assetTypeID, InOwner, parent, localPosition);
	}
	template <typename T = uintptr_t> T SearchChildController(int32_t userContext, bool includeInActive) {
		return ((T (*)(UIWindowController*, int32_t, bool))(Il2CppBase() + 0x3358BB0))(this, userContext, includeInActive);
	}
	template <typename T = uintptr_t> T GetAnchor(uintptr_t go, uintptr_t attachAnchor) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A28744))(this, go, attachAnchor);
	}
	template <typename T = uintptr_t> T GetTopParent(uintptr_t trans) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A29118))(this, trans);
	}
	template <typename T = void> T BlockUIColider(bool block, int32_t timeoutSeconds, int32_t userContext) {
		return ((T (*)(UIWindowController*, bool, int32_t, int32_t))(Il2CppBase() + 0x2A29258))(this, block, timeoutSeconds, userContext);
	}
	template <typename T = void> T ShowLoading(bool display, bool blockTouch, bool showMask, Il2CppString* tips, int32_t timeoutSeconds, int32_t userContext, Il2CppVector3 localPosition, uintptr_t anchor, float renderDelay) {
		return ((T (*)(UIWindowController*, bool, bool, bool, Il2CppString*, int32_t, int32_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x2A29418))(this, display, blockTouch, showMask, tips, timeoutSeconds, userContext, localPosition, anchor, renderDelay);
	}
	template <typename T = void> T ShowMessageBox(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText, bool errorTopReport) {
		return ((T (*)(UIWindowController*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2A29660))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText, errorTopReport);
	}
	template <typename T = void> T ShowMessageBox_1(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, int32_t userContext, bool isModal, bool isAboveAll, uintptr_t mode, Il2CppString* okButtonText, Il2CppString* cancelButtonText, bool errorTopReport) {
		return ((T (*)(UIWindowController*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, int32_t, bool, bool, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1E86E04))(this, message, callback, title, buttonsType, userContext, isModal, isAboveAll, mode, okButtonText, cancelButtonText, errorTopReport);
	}
	template <typename T = void> T ShowPopupItem(uintptr_t resource) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A297C8))(this, resource);
	}
	template <typename T = void> T ShowPopupItem_1(uint64_t itemID, uint64_t itemGdid, int32_t deltacount, int32_t deltatime, uint64_t addPropId, int32_t addPropNum) {
		return ((T (*)(UIWindowController*, uint64_t, uint64_t, int32_t, int32_t, uint64_t, int32_t))(Il2CppBase() + 0x2A29868))(this, itemID, itemGdid, deltacount, deltatime, addPropId, addPropNum);
	}
	template <typename T = void> T ShowCommonTips(Il2CppString* tipsContent, float visibleTime, bool repeatable, bool bForce, void* from, void* to) {
		return ((T (*)(UIWindowController*, Il2CppString*, float, bool, bool, void*, void*))(Il2CppBase() + 0x2A29954))(this, tipsContent, visibleTime, repeatable, bForce, from, to);
	}
	template <typename T = uintptr_t> T ShowPopupWindow(int32_t userContext, uintptr_t mode, bool forceShow, bool fifoFlag, uintptr_t layer, bool isChild) {
		return ((T (*)(UIWindowController*, int32_t, uintptr_t, bool, bool, uintptr_t, bool))(Il2CppBase() + 0x33590A0))(this, userContext, mode, forceShow, fifoFlag, layer, isChild);
	}
	template <typename T = uintptr_t> T ShowPopupWindow_1(uintptr_t viewType, int32_t userContext, uintptr_t mode, bool forceShow, bool fifoFlag, uintptr_t layer, bool isChild) {
		return ((T (*)(UIWindowController*, uintptr_t, int32_t, uintptr_t, bool, bool, uintptr_t, bool))(Il2CppBase() + 0x2A29C04))(this, viewType, userContext, mode, forceShow, fifoFlag, layer, isChild);
	}
	template <typename T = void> T HideAllPopupWindow() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A29D70))(this);
	}
	template <typename T = void> T HidePopupWindow(uintptr_t closeType) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x1E86C9C))(this, closeType);
	}
	template <typename T = void> T HidePopupWindow_1(uintptr_t controller, uintptr_t closeType) {
		return ((T (*)(UIWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A29E60))(this, controller, closeType);
	}
	template <typename T = uintptr_t> T GetCurrentPopupWindow() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A29F7C))(this);
	}
	template <typename T = uintptr_t> T StartTimer(float InInterval, bool bLoop, uintptr_t InTimerDelegate, bool InAutoStart, bool CanBePaused) {
		return ((T (*)(UIWindowController*, float, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x2A2A074))(this, InInterval, bLoop, InTimerDelegate, InAutoStart, CanBePaused);
	}
	template <typename T = void> T StopTimer(uint32_t timerID) {
		return ((T (*)(UIWindowController*, uint32_t))(Il2CppBase() + 0x2A2A2BC))(this, timerID);
	}
	template <typename T = void> T StopTimer_1(uintptr_t InTimerDelegate) {
		return ((T (*)(UIWindowController*, uintptr_t))(Il2CppBase() + 0x2A2A3B8))(this, InTimerDelegate);
	}
	template <typename T = void> T StopAllTimersInController() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A27908))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2A4B4))(this);
	}
	template <typename T = void> T OnGameReconnectSuccess() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2A664))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2A814))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(UIWindowController*))(Il2CppBase() + 0x2A2A93C))(this);
	}

};

}
