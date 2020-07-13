#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabBarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabBarController"));
	}

	template <typename T = uintptr_t> T& mTabView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TabControllers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mTabSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInnnerSelectedTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShowTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectedController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotOnTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B140BC))(this);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B14290))(this, tabIndex);
	}
	template <typename T = void> T OnSwitchBefore(int32_t tabIndex) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B14370))(this, tabIndex);
	}
	template <typename T = void> T set_TabControllers(Il2CppList<uintptr_t>* value) {
		return ((T (*)(UITabBarController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B147B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TabControllers() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B147AC))(this);
	}
	template <typename T = void> T SetInnnerSelectedTab(int32_t tabIndex) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B144A8))(this, tabIndex);
	}
	template <typename T = void> T WillShowTabController(int32_t tabIndex) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B14644))(this, tabIndex);
	}
	template <typename T = void> T set_TabSelectedIndex(int32_t value) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B147BC))(this, value);
	}
	template <typename T = int32_t> T get_TabSelectedIndex() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B14A40))(this);
	}
	template <typename T = uintptr_t> T GetSelectedController() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B14A48))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B14B6C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B14C44))(this);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(UITabBarController*, bool, bool, bool))(Il2CppBase() + 0x3B14CF8))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T RefreshRedDotOnTabChanged(int32_t index) {
		return ((T (*)(UITabBarController*, int32_t))(Il2CppBase() + 0x3B14FDC))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B1507C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B15084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(UITabBarController*))(Il2CppBase() + 0x3B1508C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(UITabBarController*, bool, bool, bool))(Il2CppBase() + 0x3B15094))(this, P0, P1, P2);
	}

};

}
