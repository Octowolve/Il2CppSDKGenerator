#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyDeepLinkController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyDeepLinkController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PlatformType() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDeepLinkButtonByPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenWXDeepLink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowDeeplinkIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368EB58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368EBF8))(this);
	}
	template <typename T = void> T ShowDeepLinkButtonByPlatform() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368EE30))(this);
	}
	template <typename T = void> T OnOpenWXDeepLink() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368EFDC))(this);
	}
	template <typename T = void> T OnShowDeeplinkIcon(uintptr_t Msg) {
		return ((T (*)(LobbyDeepLinkController*, uintptr_t))(Il2CppBase() + 0x368F12C))(this, Msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368F26C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368F3BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368F3C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LobbyDeepLinkController*))(Il2CppBase() + 0x368F3CC))(this);
	}

};

}
