#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class GuestBindingPlatformPopTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "GuestBindingPlatformPopTipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& func() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isForce() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOKBtnLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOKBtnFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E7834))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E78D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E7ADC))(this);
	}
	template <typename T = void> T HideView(uintptr_t Msg) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, uintptr_t))(Il2CppBase() + 0x22E7C6C))(this, Msg);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E7D28))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E7DD8))(this);
	}
	template <typename T = void> T SetViewData(Il2CppString* tips, Il2CppString* title) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x22E7EE4))(this, tips, title);
	}
	template <typename T = void> T SetOKBtnLabel(Il2CppString* content) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, Il2CppString*))(Il2CppBase() + 0x22E8224))(this, content);
	}
	template <typename T = void> T SetOKBtnFunc(uintptr_t callback) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, uintptr_t))(Il2CppBase() + 0x22E8330))(this, callback);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E83D8))(this);
	}
	template <typename T = void> T OnOKBtnClick() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E848C))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, uintptr_t))(Il2CppBase() + 0x22E8550))(this, closeType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E8624))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E862C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E8634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E863C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuestBindingPlatformPopTipsController*))(Il2CppBase() + 0x22E8644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(GuestBindingPlatformPopTipsController*, uintptr_t))(Il2CppBase() + 0x22E864C))(this, P0);
	}

};

}
