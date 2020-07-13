#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabBarItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabBarItem"));
	}

	template <typename T = uintptr_t> T& LockContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SelectedContainer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& UnselectedContainer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SelectedLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& UnselectedLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RedDotWidget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& TabIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mTabLocked() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mTabSelected() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = void*> T& OnInteractTabSelect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetLocked(bool locked) {
		return ((T (*)(UITabBarItem*, bool))(Il2CppBase() + 0x3B15158))(this, locked);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(UITabBarItem*, bool))(Il2CppBase() + 0x3B153B4))(this, selected);
	}
	template <typename T = void> T SetTabName(Il2CppString* str) {
		return ((T (*)(UITabBarItem*, Il2CppString*))(Il2CppBase() + 0x3B15614))(this, str);
	}
	template <typename T = void> T set_TabIndex(int32_t value) {
		return ((T (*)(UITabBarItem*, int32_t))(Il2CppBase() + 0x3B1571C))(this, value);
	}
	template <typename T = int32_t> T get_TabIndex() {
		return ((T (*)(UITabBarItem*))(Il2CppBase() + 0x3B15724))(this);
	}
	template <typename T = void> T set_TabLocked(bool value) {
		return ((T (*)(UITabBarItem*, bool))(Il2CppBase() + 0x3B1572C))(this, value);
	}
	template <typename T = bool> T get_TabLocked() {
		return ((T (*)(UITabBarItem*))(Il2CppBase() + 0x3B15740))(this);
	}
	template <typename T = void> T set_TabSelected(bool value) {
		return ((T (*)(UITabBarItem*, bool))(Il2CppBase() + 0x3B15748))(this, value);
	}
	template <typename T = bool> T get_TabSelected() {
		return ((T (*)(UITabBarItem*))(Il2CppBase() + 0x3B1575C))(this);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UITabBarItem*))(Il2CppBase() + 0x3B15764))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UITabBarItem*))(Il2CppBase() + 0x3B15860))(this);
	}

};

}
