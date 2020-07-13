#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpPrivateNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpPrivateNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_SquadAvatarCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSquadScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x213207C))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x213211C))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x21321BC))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomSpvpPrivateNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x213225C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomSpvpPrivateNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21325BC))(this, data, nextData);
	}
	template <typename T = void> T ShowSquadScene() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x2132424))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x213277C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x2132784))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(RoomSpvpPrivateNavController*))(Il2CppBase() + 0x213278C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowed(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSpvpPrivateNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2132794))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillClose(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSpvpPrivateNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x213279C))(this, P0, P1);
	}

};

}
