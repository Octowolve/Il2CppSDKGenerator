#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReconnectBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReconnectBoxController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ReconnectAction() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetryBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABAB58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABABFC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABAD08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABAF6C))(this);
	}
	template <typename T = void> T OnQuitBtnClick() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABB198))(this);
	}
	template <typename T = void> T OnRetryBtnClick() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABB320))(this);
	}
	template <typename T = void> T SetContent(uintptr_t reconnectActtion, uintptr_t callback, Il2CppString* content) {
		return ((T (*)(ReconnectBoxController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3ABB3E0))(this, reconnectActtion, callback, content);
	}
	template <typename T = void> T DoCallBack(uintptr_t result) {
		return ((T (*)(ReconnectBoxController*, uintptr_t))(Il2CppBase() + 0x3ABB258))(this, result);
	}
	template <typename T = void> T SetTips(Il2CppString* tips) {
		return ((T (*)(ReconnectBoxController*, Il2CppString*))(Il2CppBase() + 0x3ABB91C))(this, tips);
	}
	template <typename T = void> static T ShowTips(Il2CppString* tips) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3ABBD5C))(0, tips);
	}
	template <typename T = void> static T ShowReconnect(uintptr_t reconnectActtion, uintptr_t callback, Il2CppString* content) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3ABBEDC))(0, reconnectActtion, callback, content);
	}
	template <typename T = void> static T Hide() {
		return ((T (*)(void *))(Il2CppBase() + 0x3ABC06C))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABC1F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABC1F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABC200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ReconnectBoxController*))(Il2CppBase() + 0x3ABC208))(this);
	}

};

}
