#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ConfigManager"));
	}

	template <typename T = uintptr_t> static T& m_AllConfigCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& currentUILayOutVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& classMapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& FallbackAvatarAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetCustomSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetCustomSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SplitAndSaveCustomString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatchAndSaveCustomString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSettingType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncCurrentGameModeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetFirstTimeCustomSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetFirstTimeCustomSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUISceneHUDConfigByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadGameHUDLayoutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCustomHUDLayoutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTlogHudlayoutText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultHUDLayoutConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomHUDLayoutConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHUDLayoutConfigJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCustomJoyStickConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceJoystickConfigFromMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceHUDConfigFromMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTlogJoystickText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultJoyStickConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomJoyStickConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadInputConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadPlayerControllerConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadLoggerConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = void> static T RequestGetCustomSetting(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419B0DC))(0, modeType);
	}
	template <typename T = void> static T RequestSetCustomSetting(uintptr_t playerKeyMapInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419B230))(0, playerKeyMapInfo);
	}
	template <typename T = void> static T SplitAndSaveCustomString(Il2CppList<uintptr_t>* playerKeyMapInfos) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x419B384))(0, playerKeyMapInfos);
	}
	template <typename T = void> static T MatchAndSaveCustomString(uintptr_t uiType, uintptr_t fireMode, uintptr_t gameModeType, Il2CppString* content) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x419B95C))(0, uiType, fireMode, gameModeType, content);
	}
	template <typename T = bool> static T CompareVersion(uintptr_t uiType, Il2CppString* customConfigPath, Il2CppString* content) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x419BCC4))(0, uiType, customConfigPath, content);
	}
	template <typename T = void> static T SaveSettingType(uintptr_t uIType, Il2CppString* content) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x419C288))(0, uIType, content);
	}
	template <typename T = void> static T GetSettingType(uintptr_t fireMode, uintptr_t gameModeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x419CAB0))(0, fireMode, gameModeType);
	}
	template <typename T = void> static T SyncCurrentGameModeType(uintptr_t settingsViewModeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419CCD0))(0, settingsViewModeType);
	}
	template <typename T = void> static T RequestGetFirstTimeCustomSetting(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419CDE0))(0, modeType);
	}
	template <typename T = void> static T RequestSetFirstTimeCustomSetting(uintptr_t modeType, bool bIsAdvancedMode) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x419CF18))(0, modeType, bIsAdvancedMode);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_InputConfigs() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D08C))(0);
	}
	template <typename T = uintptr_t> static T get_PlayerControllerConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D5D4))(0);
	}
	template <typename T = uintptr_t> static T get_LoggerConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D834))(0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T get_HUDConfigDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x419DAC0))(0);
	}
	template <typename T = uintptr_t> static T GetUISceneHUDConfigByType(uintptr_t hudType, bool custom, bool create) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x419EA3C))(0, hudType, custom, create);
	}
	template <typename T = void> static T CheckLoadGameHUDLayoutConfig(uintptr_t settingGameModeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419DFE4))(0, settingGameModeType);
	}
	template <typename T = void> static T SaveCustomHUDLayoutConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419F628))(0);
	}
	template <typename T = Il2CppString*> static T GetTlogHudlayoutText() {
		return ((T (*)(void *))(Il2CppBase() + 0x419FC40))(0);
	}
	template <typename T = bool> static T IsChangePosition(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41A01E0))(0, type);
	}
	template <typename T = bool> static T IsChangeScale(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41A04C8))(0, type);
	}
	template <typename T = Il2CppString*> static T GetDefaultHUDLayoutConfigPath(uintptr_t settingGameModeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419F3FC))(0, settingGameModeType);
	}
	template <typename T = Il2CppString*> static T GetCustomHUDLayoutConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x419F518))(0);
	}
	template <typename T = Il2CppString*> static T GetGameHUDLayoutConfigJson() {
		return ((T (*)(void *))(Il2CppBase() + 0x419F8B4))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_JoystickConfigAry() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A0784))(0);
	}
	template <typename T = void> static T SaveCustomJoyStickConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A0A04))(0);
	}
	template <typename T = void> static T ReplaceJoystickConfigFromMode(uintptr_t settingGameMode, uintptr_t fireMode, Il2CppDictionary<uintptr_t, uintptr_t>* joystickConfigs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x41A0DAC))(0, settingGameMode, fireMode, joystickConfigs);
	}
	template <typename T = void> static T ReplaceHUDConfigFromMode(uintptr_t settingGameMode, uintptr_t fireMode, Il2CppDictionary<Il2CppString*, Il2CppString*>* hudTypes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x41A1284))(0, settingGameMode, fireMode, hudTypes);
	}
	template <typename T = Il2CppString*> static T GetTlogJoystickText() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A1840))(0);
	}
	template <typename T = uintptr_t> static T GetJoyStickConfig(uintptr_t config, bool custom, bool create) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x41A1964))(0, config, custom, create);
	}
	template <typename T = Il2CppString*> static T GetDefaultJoyStickConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A1C28))(0);
	}
	template <typename T = Il2CppString*> static T GetCustomJoyStickConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A0C9C))(0);
	}
	template <typename T = Il2CppString*> static T GetCustomConfigPath(uintptr_t uiType, uintptr_t gameMode, uintptr_t fireMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x419BB7C))(0, uiType, gameMode, fireMode);
	}
	template <typename T = void> static T CheckLoadInputConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D154))(0);
	}
	template <typename T = void> static T CheckLoadPlayerControllerConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D69C))(0);
	}
	template <typename T = void> static T CheckLoadLoggerConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x419D8FC))(0);
	}
	template <typename T = uintptr_t> static T get_MapStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A1D38))(0);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x41A1EBC))(0);
	}

};

}
