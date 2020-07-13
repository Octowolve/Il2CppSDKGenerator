#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class SPGameUISceneTutorialFinal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "SPGameUIScene_TutorialFinal"));
	}

	template <typename T = int32_t> T& CahceSettingPanelDepth() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& bFirstOpen() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& bShowSettingTutorial() {
		return *(T*)((uintptr_t)this + 0x1AD);
	}
	template <typename T = uintptr_t> T& m_BloodAndStreakHUD() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& m_FeedbackController() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& m_ArrowTipsController() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalSkipController() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalWinController() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalPhoneController() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalSelectFireModeController() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalTipsController() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalDialogController() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& m_TutorialFinalRoleUltSkillController() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandlePickupWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_PickupWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_PickupWeapon_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleChangeFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_PauseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_Settings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChangeFireModeSettingsMenuTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_ManualFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_Back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleChangeADSMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChooseFireMode_PauseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChooseFireMode_Settings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettingsMenuTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChooseFireMode_SettingMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFiremodeSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFiremodeAdvanceStateActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettingTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSettingTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SettingBackCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleToggleCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdvanceToggleCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChooseFireMode_ManualFire_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleUltSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_UseUlt_ClickBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_UseUlt_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_Missile_ClickBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_Missile_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ReAmmo_ClickBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ReAmmo_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkipBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEndHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPausePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInjuredScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFireModeHUDLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSystemSettingBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAnimationEventCallBackEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponDamageMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinalPhoneShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDLayoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllTutorialUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinalSelectFireModeShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinalTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinalDialogShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialWinShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinalRoleUltSkillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_PickupWeapon_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeFireMode_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeADSMode_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ChangeLoadout_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_UltSkill_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_Missile_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorialFinal_ReAmmo_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissileControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FtueTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}

	template <typename T = void> T HandlePickupWeapon() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B090AC))(this);
	}
	template <typename T = void> T OnTutorialFinal_PickupWeapon(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0925C))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_PickupWeapon_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B097FC))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T HandleChangeFireMode() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B09B5C))(this);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_PauseBtn(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B09E38))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_Settings(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0A2A4))(this, tutorial, triggerInfo);
	}
	template <typename T = uintptr_t> T ShowChangeFireModeSettingsMenuTips() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0A3C0))(this);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_ManualFire(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0A4A8))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_Back(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0A998))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0AEB4))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T HandleChangeADSMode() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0B1E0))(this);
	}
	template <typename T = void> T OnTutorialFinal_ChooseFireMode_PauseBtn(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0B458))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_ChooseFireMode_Settings(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0B8C4))(this, tutorial, triggerInfo);
	}
	template <typename T = uintptr_t> T ShowSettingsMenuTips() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0B9E0))(this);
	}
	template <typename T = void> T OnTutorialFinal_ChooseFireMode_SettingMenu(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0BAC8))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T ShowFiremodeSetting() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0BBD4))(this);
	}
	template <typename T = void> T ShowFiremodeAdvanceStateActive(bool active) {
		return ((T (*)(SPGameUISceneTutorialFinal*, bool))(Il2CppBase() + 0x4B0C33C))(this, active);
	}
	template <typename T = void> T ShowSettingTutorial() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0C634))(this);
	}
	template <typename T = uintptr_t> T StopSettingTutorial() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0CC50))(this);
	}
	template <typename T = void> T SettingBackCallBack(uintptr_t target) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B0CD38))(this, target);
	}
	template <typename T = void> T SimpleToggleCallBack() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0D0E0))(this);
	}
	template <typename T = void> T AdvanceToggleCallBack() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0D400))(this);
	}
	template <typename T = void> T OnTutorialFinal_ChooseFireMode_ManualFire_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0D740))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T HandleUltSkill() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0DA6C))(this);
	}
	template <typename T = void> T OnTutorialFinal_UseUlt_ClickBtn(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0DC1C))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_UseUlt_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0E01C))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T HandleMissile() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0E300))(this);
	}
	template <typename T = void> T OnTutorialFinal_Missile_ClickBtn(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0E4B0))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_Missile_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0E9C8))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T HandleReAmmo() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0EDF0))(this);
	}
	template <typename T = void> T OnTutorialFinal_ReAmmo_ClickBtn(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0EFA0))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T OnTutorialFinal_ReAmmo_End(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B0F450))(this, tutorial, triggerInfo);
	}
	template <typename T = bool> T get_FastThrowWeaponForce() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0F7CC))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0F7D4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B0F7DC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SPGameUISceneTutorialFinal*, float))(Il2CppBase() + 0x4B10028))(this, deltaTime);
	}
	template <typename T = void> T ShowSkipBtn(bool bShow) {
		return ((T (*)(SPGameUISceneTutorialFinal*, bool))(Il2CppBase() + 0x4B027CC))(this, bShow);
	}
	template <typename T = void> T ShowWin(bool bShow) {
		return ((T (*)(SPGameUISceneTutorialFinal*, bool))(Il2CppBase() + 0x4B10A04))(this, bShow);
	}
	template <typename T = void> T CreateEndHud() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B10AE0))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B10B78))(this, msg);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B10D80))(this, Msg);
	}
	template <typename T = void> T OpenPausePanel() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B10E48))(this);
	}
	template <typename T = void> T CreateInjuredScreenEffect() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B10F10))(this);
	}
	template <typename T = void> T OnFireModeHUDLock(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B10FA8))(this, msg);
	}
	template <typename T = void> T LoadSystemSettingBtn() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B111F8))(this);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11290))(this, msg);
	}
	template <typename T = void> T OnNotifyAnimationEventCallBackEnable(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11438))(this, Msg);
	}
	template <typename T = void> T OnWeaponDamageMove(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B115F8))(this, Msg);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B117D0))(this);
	}
	template <typename T = void> T OnTutorialFinalPhoneShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B118D8))(this, Msg);
	}
	template <typename T = void> T OnGameHUDLayoutChanged(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11A90))(this, msg);
	}
	template <typename T = void> T HideAllTutorialUI() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B009D8))(this);
	}
	template <typename T = void> T OnTutorialFinalSelectFireModeShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11B30))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinalTipsShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11C88))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinalDialogShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B11FE8))(this, Msg);
	}
	template <typename T = void> T OnTutorialWinShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12414))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinalRoleUltSkillShow(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12664))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_PickupWeapon_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B127BC))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_ChangeFireMode_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12900))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_ChangeADSMode_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12A44))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_ChangeLoadout_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12B88))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_UltSkill_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12CCC))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_Missile_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12E10))(this, Msg);
	}
	template <typename T = void> T OnTutorialFinal_ReAmmo_Process(uintptr_t Msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B12F54))(this, Msg);
	}
	template <typename T = void> T OnMissileControl(uintptr_t msg) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B13098))(this, msg);
	}
	template <typename T = void> T FtueTick() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B100E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B13204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, float))(Il2CppBase() + 0x4B1320C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateEndHud() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B13214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B1321C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B13224))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenPausePanel() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B1322C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateInjuredScreenEffect() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B13234))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadSystemSettingBtn() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B1323C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B13244))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(SPGameUISceneTutorialFinal*))(Il2CppBase() + 0x4B1324C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDLayoutChanged(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B13254))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMissileControl(uintptr_t P0) {
		return ((T (*)(SPGameUISceneTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B1325C))(this, P0);
	}

};

}
