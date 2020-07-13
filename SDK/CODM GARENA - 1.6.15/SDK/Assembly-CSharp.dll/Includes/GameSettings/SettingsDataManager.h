#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsDataManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsDataManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupXAsix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupYAsix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupADS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupAutoRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GamePadToggleGroupRunPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SettlementRoomOBToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ReportTypeBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ReportTypeMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ReportTypeFFA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PVETutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SensitivitySwitchModeMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SensitivitySwitchModeBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SensitivitySwitchModePVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bInit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& addDepth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_ShowVest() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_EnablePickUpMuzzle() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& m_EnablePickUpHandle() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& m_EnablePickUpLightMagazine() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& m_EnablePickUpHeavyMagazine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_EnablePickUpShotGunMagazine() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& m_EnablePickUpButt() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& m_EnablePickUpBarrel() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& m_EnablePickUpReargrip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_EnablePickUpIndicator() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& m_EnableRagDoll() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = float> T& ScreenBrightnessMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ScreenBrightnessMin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ScreenBrightness() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_VehicleHPIndicator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_LocalSensitivityVersion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_SensitivityCustomValueMP() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_SensitivityCustomValueBR() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_SensitivityCustomValuePVE() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ServerSensitivityVersion() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_SensitivityList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& SENSITIVITY_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SENSITIVITY_MODETYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SENSITIVITY_SENSITIVETYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& SaveSensitivityFlag() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& SettingsGamePadReportTLog() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_BloodOpen() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_ReceivePushMessage() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& m_EnablePrivacySell() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = uintptr_t> T& SettingsPrivacyTLog() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& FirstSettingsPrivacyTLog() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<Il2CppList<int32_t>*>*> T& SettingsData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& Float2Int() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ControlsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& BasicCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& NewBasicCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& SystemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& SensitivityCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& BrSettingsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& QuickMessageCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& ControllerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& LanguageCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& OtherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> T& ControlsSliderValueChangeFlag() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& BasicSliderValueChangeFlag() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& SystemSliderValueChangeFlag() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& SensitivitySliderValueChangeFlag() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = bool> T& BrSettingsSliderValueChangeFlag() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& bGetSettingsDataSuccess() {
		return *(T*)((uintptr_t)this + 0x61);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255E8B4))(this);
	}
	template <typename T = bool> T get_ShowVest() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255EE60))(this);
	}
	template <typename T = void> T set_ShowVest(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x255EE88))(this, value);
	}
	template <typename T = int32_t> T GetCustomPickUpItemNumDefaultValue(uintptr_t name) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x255F0E0))(this, name);
	}
	template <typename T = int32_t> T GetCustomPickUpItemNum(uintptr_t name) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x255F110))(this, name);
	}
	template <typename T = void> T SetCustomPickUpItemNum(uintptr_t name, int32_t value) {
		return ((T (*)(SettingsDataManager*, uintptr_t, int32_t))(Il2CppBase() + 0x255F2BC))(this, name, value);
	}
	template <typename T = void> T ResetPickUps() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255F444))(this);
	}
	template <typename T = bool> T get_EnablePickUpMuzzle() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255FBCC))(this);
	}
	template <typename T = void> T set_EnablePickUpMuzzle(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x255FBF4))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpHandle() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255FD00))(this);
	}
	template <typename T = void> T set_EnablePickUpHandle(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x255FD28))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpLightMagazine() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255FE34))(this);
	}
	template <typename T = void> T set_EnablePickUpLightMagazine(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x255FE5C))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpHeavyMagazine() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255FF68))(this);
	}
	template <typename T = void> T set_EnablePickUpHeavyMagazine(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x255FF90))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpShotGunMagazine() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x256009C))(this);
	}
	template <typename T = void> T set_EnablePickUpShotGunMagazine(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x25600C4))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpButt() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25601D0))(this);
	}
	template <typename T = void> T set_EnablePickUpButt(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x25601F8))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpBarrel() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2560304))(this);
	}
	template <typename T = void> T set_EnablePickUpBarrel(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x256032C))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpReargrip() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2560438))(this);
	}
	template <typename T = void> T set_EnablePickUpReargrip(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x2560460))(this, value);
	}
	template <typename T = bool> T get_EnablePickUpIndicator() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x256056C))(this);
	}
	template <typename T = void> T set_EnablePickUpIndicator(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x2560594))(this, value);
	}
	template <typename T = void> T ChangeLanguageRequest(uintptr_t code) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x25606A0))(this, code);
	}
	template <typename T = void> T ChangeLanguageResponse(uintptr_t lobbyMsg) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x2560788))(this, lobbyMsg);
	}
	template <typename T = uintptr_t> T GetSettingsFireModeSelection(uintptr_t settingGameModeType) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x25609E0))(this, settingGameModeType);
	}
	template <typename T = void> T SetSettingsFireModeSelection(uintptr_t selection, uintptr_t settingGameModeType) {
		return ((T (*)(SettingsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2560B5C))(this, selection, settingGameModeType);
	}
	template <typename T = bool> T GetCustomWeaponFireMode(uintptr_t weaponCategory, uintptr_t settingGameModeType) {
		return ((T (*)(SettingsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2560CE4))(this, weaponCategory, settingGameModeType);
	}
	template <typename T = void> T SetCustomWeaponFireMode(uintptr_t weaponCategory, uintptr_t settingGameModeType) {
		return ((T (*)(SettingsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2560F14))(this, weaponCategory, settingGameModeType);
	}
	template <typename T = bool> T get_EnableRagDoll() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x256114C))(this);
	}
	template <typename T = void> T set_EnableRagDoll(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x2561174))(this, value);
	}
	template <typename T = bool> T GetRagDollValue() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561280))(this);
	}
	template <typename T = float> T get_ScreenBrightness() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25612A8))(this);
	}
	template <typename T = void> T set_ScreenBrightness(float value) {
		return ((T (*)(SettingsDataManager*, float))(Il2CppBase() + 0x25612D0))(this, value);
	}
	template <typename T = bool> T get_VehicleHPIndicator() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25614CC))(this);
	}
	template <typename T = void> T set_VehicleHPIndicator(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x25614F4))(this, value);
	}
	template <typename T = int32_t> T get_LocalSensitivityVersion() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561600))(this);
	}
	template <typename T = void> T set_LocalSensitivityVersion(int32_t value) {
		return ((T (*)(SettingsDataManager*, int32_t))(Il2CppBase() + 0x2561628))(this, value);
	}
	template <typename T = int32_t> T get_SensitivityCustomValueMP() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x256172C))(this);
	}
	template <typename T = void> T set_SensitivityCustomValueMP(int32_t value) {
		return ((T (*)(SettingsDataManager*, int32_t))(Il2CppBase() + 0x2561754))(this, value);
	}
	template <typename T = int32_t> T get_SensitivityCustomValueBR() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561858))(this);
	}
	template <typename T = void> T set_SensitivityCustomValueBR(int32_t value) {
		return ((T (*)(SettingsDataManager*, int32_t))(Il2CppBase() + 0x2561880))(this, value);
	}
	template <typename T = int32_t> T get_SensitivityCustomValuePVE() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561984))(this);
	}
	template <typename T = void> T set_SensitivityCustomValuePVE(int32_t value) {
		return ((T (*)(SettingsDataManager*, int32_t))(Il2CppBase() + 0x25619AC))(this, value);
	}
	template <typename T = int32_t> T GetSensitivityValue(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(SettingsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2561AB0))(this, modeType, sensitiveType);
	}
	template <typename T = void> T SetSensitivityValue(int32_t val) {
		return ((T (*)(SettingsDataManager*, int32_t))(Il2CppBase() + 0x2561BC8))(this, val);
	}
	template <typename T = void> T GetSensitivityReq() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561D1C))(this);
	}
	template <typename T = void> T GetSensitivityRes(Il2CppList<int32_t>* list, int32_t PrivacyValue) {
		return ((T (*)(SettingsDataManager*, Il2CppList<int32_t>*, int32_t))(Il2CppBase() + 0x2561DDC))(this, list, PrivacyValue);
	}
	template <typename T = void> T SetSensitivityReq() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2561FE8))(this);
	}
	template <typename T = void> T SensitivityVersionCheck(int32_t localVersion, int32_t serverVersion) {
		return ((T (*)(SettingsDataManager*, int32_t, int32_t))(Il2CppBase() + 0x25630EC))(this, localVersion, serverVersion);
	}
	template <typename T = void> T ReportGamePadData() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x255376C))(this);
	}
	template <typename T = bool> T get_BloodOpen() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25630F0))(this);
	}
	template <typename T = void> T set_BloodOpen(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x2563118))(this, value);
	}
	template <typename T = bool> T get_ReceivePushMessage() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2563224))(this);
	}
	template <typename T = void> T set_ReceivePushMessage(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x256324C))(this, value);
	}
	template <typename T = bool> T get_EnablePrivacySell() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2563358))(this);
	}
	template <typename T = void> T set_EnablePrivacySell(bool value) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x2562FE0))(this, value);
	}
	template <typename T = void> T SavePrivacySellToServer() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2563380))(this);
	}
	template <typename T = void> T OnSavePrivacySellResponse() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25634E4))(this);
	}
	template <typename T = void> T ReportPrivacySellData(bool force) {
		return ((T (*)(SettingsDataManager*, bool))(Il2CppBase() + 0x25634E8))(this, force);
	}
	template <typename T = void> T GetLocalSettingsData() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x25638AC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetLocalPageData(uintptr_t page) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x2563B20))(this, page);
	}
	template <typename T = Il2CppList<int32_t>*> T GetPageData(uintptr_t page) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x2567C54))(this, page);
	}
	template <typename T = bool> T SetPageData(uintptr_t page, Il2CppList<int32_t>* pageData) {
		return ((T (*)(SettingsDataManager*, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x2567D6C))(this, page, pageData);
	}
	template <typename T = void> T GetSettingsData() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2567FD8))(this);
	}
	template <typename T = void> T OnGetSettingsDataResponse(uintptr_t response) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x256810C))(this, response);
	}
	template <typename T = void> T SaveDataToServer() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x2570908))(this);
	}
	template <typename T = void> T RequestSaveSettingsData(uintptr_t page, bool firstTime) {
		return ((T (*)(SettingsDataManager*, uintptr_t, bool))(Il2CppBase() + 0x2570360))(this, page, firstTime);
	}
	template <typename T = void> T OnSaveSettingsDataResponse(uintptr_t response) {
		return ((T (*)(SettingsDataManager*, uintptr_t))(Il2CppBase() + 0x2570DD8))(this, response);
	}
	template <typename T = bool> T IsIphone11() {
		return ((T (*)(SettingsDataManager*))(Il2CppBase() + 0x257080C))(this);
	}

};

}
