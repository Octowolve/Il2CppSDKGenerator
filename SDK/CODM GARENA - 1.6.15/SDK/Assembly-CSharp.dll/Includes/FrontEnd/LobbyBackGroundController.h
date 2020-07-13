#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyBackGroundController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyBackGroundController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_NavigationUIController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReceiveSpecialFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureAdaptorStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368D5CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368D670))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368D77C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368D8EC))(this);
	}
	template <typename T = void> T OpenNavigation(uintptr_t controller) {
		return ((T (*)(LobbyBackGroundController*, uintptr_t))(Il2CppBase() + 0x367F590))(this, controller);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368015C))(this);
	}
	template <typename T = void> T PrepareBackground() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368D9BC))(this);
	}
	template <typename T = void> T ShowReceiveSpecialFx(uintptr_t msg) {
		return ((T (*)(LobbyBackGroundController*, uintptr_t))(Il2CppBase() + 0x368DA54))(this, msg);
	}
	template <typename T = void> T ShowRankModeChange(uintptr_t msg) {
		return ((T (*)(LobbyBackGroundController*, uintptr_t))(Il2CppBase() + 0x368DD90))(this, msg);
	}
	template <typename T = void> T ResetTexture(Il2CppString* src) {
		return ((T (*)(LobbyBackGroundController*, Il2CppString*))(Il2CppBase() + 0x367D770))(this, src);
	}
	template <typename T = void> T EnableCameraClear(bool bEnable) {
		return ((T (*)(LobbyBackGroundController*, bool))(Il2CppBase() + 0x368E130))(this, bEnable);
	}
	template <typename T = void> T SetTextureAdaptorStyle(bool closeAdaptor) {
		return ((T (*)(LobbyBackGroundController*, bool))(Il2CppBase() + 0x367F40C))(this, closeAdaptor);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368E314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368E31C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368E324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyBackGroundController*))(Il2CppBase() + 0x368E32C))(this);
	}

};

}
