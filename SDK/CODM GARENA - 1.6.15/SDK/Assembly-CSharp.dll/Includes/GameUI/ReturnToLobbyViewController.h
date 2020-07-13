#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReturnToLobbyViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReturnToLobbyViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadingBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC35E8))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC368C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC372C))(this);
	}
	template <typename T = void> T ShowLoadingBackgroundTexture() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC3838))(this);
	}
	template <typename T = int32_t> T GetLoadingMapId() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC3970))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC3A50))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC3A58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReturnToLobbyViewController*))(Il2CppBase() + 0x3AC3A60))(this);
	}

};

}
