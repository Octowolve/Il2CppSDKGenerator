#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyMainUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyMainUIController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LobbyMapTopBarController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RollNoticeController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ChatMainController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_SettlementPlayAgainController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> static T& TOPBAR_POSITION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_NavigationCloseCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_NavigationData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideTopBarFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowChatMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_LobbyMapTopBarController() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x367BF2C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x368F900))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x368F9D4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x368FDAC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x368FF94))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x3680094))(this);
	}
	template <typename T = void> T OpenNavigation(uintptr_t data) {
		return ((T (*)(LobbyMainUIController*, uintptr_t))(Il2CppBase() + 0x367F640))(this, data);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t callback) {
		return ((T (*)(LobbyMainUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36805BC))(this, data, callback);
	}
	template <typename T = void> T OnHideTopBarFinish() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x3690990))(this);
	}
	template <typename T = void> T OnShowChatMainView(uintptr_t Msg) {
		return ((T (*)(LobbyMainUIController*, uintptr_t))(Il2CppBase() + 0x3690B4C))(this, Msg);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t Msg) {
		return ((T (*)(LobbyMainUIController*, uintptr_t))(Il2CppBase() + 0x3690F64))(this, Msg);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t Msg) {
		return ((T (*)(LobbyMainUIController*, uintptr_t))(Il2CppBase() + 0x36912E4))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x3691484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x369148C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x3691494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyMainUIController*))(Il2CppBase() + 0x369149C))(this);
	}

};

}
