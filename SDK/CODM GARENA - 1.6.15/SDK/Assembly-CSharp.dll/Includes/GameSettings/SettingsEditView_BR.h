#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditViewBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditView_BR"));
	}

	template <typename T = uintptr_t> T& SyncButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& JoysticksWidgetsDirtyList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GameHudsDirtyList() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncCustomSettingFromMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SyncCustomSettingFromMP() {
		return ((T (*)(SettingsEditViewBR*))(Il2CppBase() + 0x2579530))(this);
	}
	template <typename T = void> T ConfigureWidgets(bool bUpdateDirtyJoysticks, bool bUpdateDirtyGameHuds) {
		return ((T (*)(SettingsEditViewBR*, bool, bool))(Il2CppBase() + 0x2579B60))(this, bUpdateDirtyJoysticks, bUpdateDirtyGameHuds);
	}

};

}
