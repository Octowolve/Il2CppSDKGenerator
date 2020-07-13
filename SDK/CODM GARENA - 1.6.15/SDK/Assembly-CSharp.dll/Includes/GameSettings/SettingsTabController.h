#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsTabController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsTabController*))(Il2CppBase() + 0x28B6AFC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsTabController*))(Il2CppBase() + 0x28B6BA0))(this);
	}
	template <typename T = void> T ResetView() {
		return ((T (*)(SettingsTabController*))(Il2CppBase() + 0x28B6CAC))(this);
	}
	template <typename T = uintptr_t> T SetTabInfo(int32_t uiIndex, int32_t index, Il2CppString* label, void* callback) {
		return ((T (*)(SettingsTabController*, int32_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x28B6EC8))(this, uiIndex, index, label, callback);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsTabController*))(Il2CppBase() + 0x28B72A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsTabController*))(Il2CppBase() + 0x28B72A8))(this);
	}

};

}
