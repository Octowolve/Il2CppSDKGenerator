#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutShowInSquadNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutShowInSquadNavController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F41C48))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F41CE8))(this);
	}
	template <typename T = void> T OnShowImpl(uintptr_t data) {
		return ((T (*)(LoadoutShowInSquadNavController*, uintptr_t))(Il2CppBase() + 0x1F41D88))(this, data);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(LoadoutShowInSquadNavController*, uintptr_t))(Il2CppBase() + 0x1F41FD8))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutShowInSquadNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F4208C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutShowInSquadNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F4223C))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F423E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F42488))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F42490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillShow(uintptr_t P0) {
		return ((T (*)(LoadoutShowInSquadNavController*, uintptr_t))(Il2CppBase() + 0x1F42498))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(LoadoutShowInSquadNavController*))(Il2CppBase() + 0x1F424A0))(this);
	}

};

}
