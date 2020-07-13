#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsViewMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsViewMode"));
	}

	template <typename T = bool> T& InGame() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsBRSetting() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& settingGameModeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& HUDlayoutConfigPath_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HUDlayoutConfigPath_MP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& HUDlayoutConfigPath_PVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& JoySticksConfigPath_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& JoySticksConfigPath_MP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& JoySticksConfigPath_PVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ChannelList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeWay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHUDLayoutDefaultConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHUDLayoutCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksDefaultConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetHUDLayoutCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetJoyStickCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T set_InGame(bool value) {
		return ((T (*)(SettingsViewMode*, bool))(Il2CppBase() + 0x28821B0))(this, value);
	}
	template <typename T = bool> T get_InGame() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28641B0))(this);
	}
	template <typename T = void> T set_IsBRGameSetting(bool value) {
		return ((T (*)(SettingsViewMode*, bool))(Il2CppBase() + 0x2873C68))(this, value);
	}
	template <typename T = bool> T get_IsBRGameSetting() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BA068))(this);
	}
	template <typename T = uintptr_t> T get_SettingGameModeType() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BA168))(this);
	}
	template <typename T = void> T set_SettingGameModeType(uintptr_t value) {
		return ((T (*)(SettingsViewMode*, uintptr_t))(Il2CppBase() + 0x2873C70))(this, value);
	}
	template <typename T = uintptr_t> T GetModeWay() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BA3A0))(this);
	}
	template <typename T = Il2CppString*> T GetHUDLayoutDefaultConfigPath(uintptr_t settingGameModeType) {
		return ((T (*)(SettingsViewMode*, uintptr_t))(Il2CppBase() + 0x28BA500))(this, settingGameModeType);
	}
	template <typename T = Il2CppString*> T GetHUDLayoutCustomConfigPath() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BA72C))(this);
	}
	template <typename T = Il2CppString*> T GetJoySticksDefaultConfigPath() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BB438))(this);
	}
	template <typename T = Il2CppString*> T GetJoyStickCustomConfigPath() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BB650))(this);
	}
	template <typename T = Il2CppString*> T GetHUDLayoutCustomConfigPath_1(uintptr_t gameMode, uintptr_t fireMode) {
		return ((T (*)(SettingsViewMode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BC200))(this, gameMode, fireMode);
	}
	template <typename T = Il2CppString*> T GetJoyStickCustomConfigPath_1(uintptr_t gameMode, uintptr_t fireMode) {
		return ((T (*)(SettingsViewMode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BC53C))(this, gameMode, fireMode);
	}
	template <typename T = Il2CppString*> T GetCustomConfigPath(uintptr_t customUIType, uintptr_t gameMode, uintptr_t fireMode) {
		return ((T (*)(SettingsViewMode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BC878))(this, customUIType, gameMode, fireMode);
	}
	template <typename T = void> T GetSettingType(uintptr_t fireMode, uintptr_t gameModeType) {
		return ((T (*)(SettingsViewMode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BCA00))(this, fireMode, gameModeType);
	}
	template <typename T = Il2CppList<int32_t>*> T get_ChannelList() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BCB04))(this);
	}
	template <typename T = void> T set_ChannelList(Il2CppList<int32_t>* value) {
		return ((T (*)(SettingsViewMode*, Il2CppList<int32_t>*))(Il2CppBase() + 0x28BCB0C))(this, value);
	}
	template <typename T = Il2CppString*> T GetCurrentPlayerKey() {
		return ((T (*)(SettingsViewMode*))(Il2CppBase() + 0x28BB2DC))(this);
	}

};

}
