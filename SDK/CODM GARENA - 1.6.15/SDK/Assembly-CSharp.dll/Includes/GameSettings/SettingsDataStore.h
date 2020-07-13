#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsDataStore"));
	}

	template <typename T = int32_t> static T& NotificationIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGamePadConnected() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _gamePadRedPointState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_GamePadRedPointState() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2570F6C))(this);
	}
	template <typename T = void> T set_GamePadRedPointState(uintptr_t value) {
		return ((T (*)(SettingsDataStore*, uintptr_t))(Il2CppBase() + 0x2570F74))(this, value);
	}
	template <typename T = bool> T isNoNeedtoShowGamePadRadpointYet() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2553744))(this);
	}
	template <typename T = bool> T isNeedtoShowGamePadRadpoint() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2571050))(this);
	}
	template <typename T = void> T GamepadRedPointNeedtoShow() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2553758))(this);
	}
	template <typename T = void> T GamepadRedPointReset() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2571060))(this);
	}
	template <typename T = void> T GamepadRedPointShown() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2571068))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x257107C))(this);
	}
	template <typename T = void> T ReadInfoFromLocal() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2571194))(this);
	}
	template <typename T = int32_t> T GetBadgeNumber() {
		return ((T (*)(SettingsDataStore*))(Il2CppBase() + 0x2571270))(this);
	}

};

}
