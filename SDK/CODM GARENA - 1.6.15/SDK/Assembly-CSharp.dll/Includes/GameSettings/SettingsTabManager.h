#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsTabManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsTabManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& tabNameMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& settingsGameMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideBr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideZb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSubTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUiTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreSettingsByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsHideBr() {
		return ((T (*)(SettingsTabManager*))(Il2CppBase() + 0x288E330))(this);
	}
	template <typename T = bool> T IsHideZb() {
		return ((T (*)(SettingsTabManager*))(Il2CppBase() + 0x28B769C))(this);
	}
	template <typename T = Il2CppString*> T GetTabName(uintptr_t t) {
		return ((T (*)(SettingsTabManager*, uintptr_t))(Il2CppBase() + 0x288A7E0))(this, t);
	}
	template <typename T = uintptr_t> T ShowSubTabController(uintptr_t ctrl, uintptr_t t, uintptr_t viewParent) {
		return ((T (*)(SettingsTabManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2880CB8))(this, ctrl, t, viewParent);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUiTabList() {
		return ((T (*)(SettingsTabManager*))(Il2CppBase() + 0x287FCC0))(this);
	}
	template <typename T = void> T RestoreSettingsByType(uintptr_t tType) {
		return ((T (*)(SettingsTabManager*, uintptr_t))(Il2CppBase() + 0x28B42C0))(this, tType);
	}

};

}
