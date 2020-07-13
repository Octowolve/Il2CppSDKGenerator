#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuiteDetailTabBarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuiteDetailTabBarView"));
	}

	template <typename T = uintptr_t> T& ToLeft() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ToRight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& tabScrollView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& tabGrid() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& tabItemPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CompareWidget() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& FirstWidget() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LastWidget() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTabScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(SuiteDetailTabBarView*))(Il2CppBase() + 0x29A2B64))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SuiteDetailTabBarView*))(Il2CppBase() + 0x29A2B6C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SuiteDetailTabBarView*, float))(Il2CppBase() + 0x29A2B74))(this, dt);
	}
	template <typename T = void> T ResetTabScrollView() {
		return ((T (*)(SuiteDetailTabBarView*))(Il2CppBase() + 0x29A2800))(this);
	}
	template <typename T = void> T ResetTab() {
		return ((T (*)(SuiteDetailTabBarView*))(Il2CppBase() + 0x29A208C))(this);
	}
	template <typename T = void> T SetTab(uintptr_t conf, bool activeSuite, bool bFirst, bool bLast) {
		return ((T (*)(SuiteDetailTabBarView*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x29A2198))(this, conf, activeSuite, bFirst, bLast);
	}
	template <typename T = void> T RefreshTabs() {
		return ((T (*)(SuiteDetailTabBarView*))(Il2CppBase() + 0x29A26C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SuiteDetailTabBarView*, float))(Il2CppBase() + 0x29A2FF8))(this, P0);
	}

};

}
