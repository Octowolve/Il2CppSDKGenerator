#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsMainView"));
	}

	template <typename T = uintptr_t> T& tabViewContainer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& tabBarPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& tabGrid() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& subViewContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& tweenAnimation() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T GetPanelDepth() {
		return ((T (*)(SettingsMainView*))(Il2CppBase() + 0x2583B00))(this);
	}
	template <typename T = void> T ResetTab() {
		return ((T (*)(SettingsMainView*))(Il2CppBase() + 0x2583708))(this);
	}
	template <typename T = void> T SetTab(uintptr_t type) {
		return ((T (*)(SettingsMainView*, uintptr_t))(Il2CppBase() + 0x2583814))(this, type);
	}
	template <typename T = void> T RefreshTabs() {
		return ((T (*)(SettingsMainView*))(Il2CppBase() + 0x2583C44))(this);
	}

};

}
