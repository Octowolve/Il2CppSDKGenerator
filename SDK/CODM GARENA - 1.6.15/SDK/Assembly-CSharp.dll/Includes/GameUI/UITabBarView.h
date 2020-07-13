#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabBarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabBarView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& TabItems() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& OnTabInteracted() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindTabItemsEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInteractTabSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITabBarView*))(Il2CppBase() + 0x3B15A60))(this);
	}
	template <typename T = void> T BindTabItemsEvent() {
		return ((T (*)(UITabBarView*))(Il2CppBase() + 0x3B15B10))(this);
	}
	template <typename T = void> T OnInteractTabSelect(int32_t tabIndex) {
		return ((T (*)(UITabBarView*, int32_t))(Il2CppBase() + 0x3B15D64))(this, tabIndex);
	}
	template <typename T = void> T SetTabSelect(int32_t tabIndex, bool interacted) {
		return ((T (*)(UITabBarView*, int32_t, bool))(Il2CppBase() + 0x3B14830))(this, tabIndex, interacted);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UITabBarView*))(Il2CppBase() + 0x3B15E18))(this);
	}

};

}
