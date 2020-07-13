#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InputSettingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InputSettingConfig"));
	}

	template <typename T = uintptr_t> T& mModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsBr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WestControlSetting() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_MantleMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_WeaponPickUpGuideMode() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& m_MagnMode() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& m_BloodMode() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& m_KnifeMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsOpenAimAssist() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& mIsOpenRotationExponentFactor() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = float> T& m_CameraFov() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_ChatMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mFastThrow() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& mRightFireFixed() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& mHideProneBtn() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& mMoveJoystickFixed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mFastUseProp() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& mFPPWeaponNewMode() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& m_LeftShootMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_OpenAimingType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_SlideTackleUseInputTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_EnableAlwaysSprint() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> static T& MIN_SPRINT_DISTRATIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_SPRINT_DISTRATIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& NORMAL_SPRINT_DISTRATIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_SprintDistRatio() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mFastStanding() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_SwitchSprintingOpen() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& m_SwitchShotGunHipFire() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& m_EnableADS() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = bool> T& m_Enable3DTouchADS() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_SideAimingMode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& FireBtnModeType_MP_DefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FireBtnModeType_BR_DefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FireBtnModeType_PVE_DefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mFireBtnModeType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mEnableLimitFireRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mCloseDoubleFireBtn() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& m_ZombieAutoFireConfig() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = uintptr_t> T& m_FireMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mMeleeFireMode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_MyVehicleButtonMirror() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_MyVehicleHandSpikeMirror() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> T& m_MyVehicleButtonType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_MyVehicleCameraResetType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mOpenType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_HorizontallyReverse() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_VerticalReverse() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& m_AutoPickingUp() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = float> static T& TOUCH_WEAK_FORCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TOUCH_MID_FORCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TOUCH_STRONG_FORCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MIN_TOUCH_FORCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_TOUCH_FORCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& EnableInputOnUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_TouchFireOpen() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_TouchForceClose() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_Enable3DTouch() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CurGameHandle() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_CurRotationMode() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_CurSensitiveSwitchMode() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_DeltaSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_DisAccelSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_SpeedAccelSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_BaseScaleFactor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_MinRotationVec() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_MaxRotationVec() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_RotationDisFactor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_FixedVirtualJoyStick() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_RightFireTurnForbid() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = float> T& SensitiveMinValue() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& SensitiveMaxValue() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_GamePadReverseRotateH() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_GamePadReverseRotateV() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = bool> T& m_GamePadReverseLT_LB() {
		return *(T*)((uintptr_t)this + 0xAA);
	}
	template <typename T = bool> T& m_GamePadAdsClick() {
		return *(T*)((uintptr_t)this + 0xAB);
	}
	template <typename T = bool> T& m_GamePadAutoSprint() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_GamePadClickLeftJSSprint() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainCameraFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableFPPWeaponNewMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealForceToNormalized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizedForceToReal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateToRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSensitiveFactorDefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSensitivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_config() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2456DD4))(this);
	}
	template <typename T = Il2CppString*> static T GetKey(uintptr_t type, Il2CppString* key) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2456E74))(0, type, key);
	}
	template <typename T = Il2CppString*> T GetKey_1(Il2CppString* key) {
		return ((T (*)(InputSettingConfig*, Il2CppString*))(Il2CppBase() + 0x2456FC0))(this, key);
	}
	template <typename T = bool> T get_MantleMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457110))(this);
	}
	template <typename T = void> T set_MantleMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457118))(this, value);
	}
	template <typename T = bool> T get_WeaponPickUpGuideMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457238))(this);
	}
	template <typename T = void> T set_WeaponPickUpGuideMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457240))(this, value);
	}
	template <typename T = bool> T get_MagnMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457360))(this);
	}
	template <typename T = void> T set_MagnMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457368))(this, value);
	}
	template <typename T = bool> T get_BloodMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457488))(this);
	}
	template <typename T = void> T set_BloodMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457490))(this, value);
	}
	template <typename T = bool> T get_KnifeMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24575B0))(this);
	}
	template <typename T = void> T set_KnifeMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24575B8))(this, value);
	}
	template <typename T = bool> T get_IsOpenAimAssist() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24577A8))(this);
	}
	template <typename T = void> T set_IsOpenAimAssist(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24577B0))(this, value);
	}
	template <typename T = bool> T get_IsOpenRotationExponentFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24578D0))(this);
	}
	template <typename T = void> T set_IsOpenRotationExponentFactor(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2455EB0))(this, value);
	}
	template <typename T = float> T get_CameraFov() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24578D8))(this);
	}
	template <typename T = void> T set_CameraFov(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x24578E0))(this, value);
	}
	template <typename T = float> T GetMainCameraFov() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457A08))(this);
	}
	template <typename T = bool> T get_ChatMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457AF0))(this);
	}
	template <typename T = void> T set_ChatMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457AF8))(this, value);
	}
	template <typename T = bool> T get_FastThrow() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457C18))(this);
	}
	template <typename T = void> T set_FastThrow(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457C20))(this, value);
	}
	template <typename T = bool> T get_RightFireFixed() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457D40))(this);
	}
	template <typename T = void> T set_RightFireFixed(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457D48))(this, value);
	}
	template <typename T = bool> T get_HideProneBtn() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2457E68))(this);
	}
	template <typename T = void> T set_HideProneBtn(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2457E70))(this, value);
	}
	template <typename T = bool> T get_MoveJoystickFixed() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244B004))(this);
	}
	template <typename T = void> T set_MoveJoystickFixed(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458068))(this, value);
	}
	template <typename T = bool> T get_FastUseProp() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24581CC))(this);
	}
	template <typename T = void> T set_FastUseProp(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24581D4))(this, value);
	}
	template <typename T = bool> T get_FPPWeaponNewMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24581EC))(this);
	}
	template <typename T = void> T set_FPPWeaponNewMode(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24582EC))(this, value);
	}
	template <typename T = bool> T DisableFPPWeaponNewMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245821C))(this);
	}
	template <typename T = uintptr_t> T get_LeftShootMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245840C))(this);
	}
	template <typename T = void> T set_LeftShootMode(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2458414))(this, value);
	}
	template <typename T = uintptr_t> T get_OpenAimingType() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245852C))(this);
	}
	template <typename T = void> T set_OpenAimingType(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2458534))(this, value);
	}
	template <typename T = bool> T get_SlideTackleUseInputTime() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245864C))(this);
	}
	template <typename T = void> T set_SlideTackleUseInputTime(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458654))(this, value);
	}
	template <typename T = bool> T get_EnableAlwaysSprint() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2458774))(this);
	}
	template <typename T = void> T set_EnableAlwaysSprint(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245877C))(this, value);
	}
	template <typename T = float> T get_NormalizedSprintAccuracy() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245889C))(this);
	}
	template <typename T = void> T set_NormalizedSprintAccuracy(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x24588BC))(this, value);
	}
	template <typename T = float> T get_SprintDist() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24589F0))(this);
	}
	template <typename T = bool> T get_FastStanding() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2458A38))(this);
	}
	template <typename T = void> T set_FastStanding(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458A40))(this, value);
	}
	template <typename T = bool> T get_SwitchSprintingOpen() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2458D10))(this);
	}
	template <typename T = void> T set_SwitchSprintingOpen(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458D18))(this, value);
	}
	template <typename T = bool> T get_SwitchShotGunHipFire() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2458E38))(this);
	}
	template <typename T = void> T set_SwitchShotGunHipFire(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458E40))(this, value);
	}
	template <typename T = bool> T get_EnableADS() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2458F60))(this);
	}
	template <typename T = void> T set_EnableADS(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2458F68))(this, value);
	}
	template <typename T = bool> T get_Enable3DTouchADS() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459088))(this);
	}
	template <typename T = void> T set_Enable3DTouchADS(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2459090))(this, value);
	}
	template <typename T = uintptr_t> T get_SideAimingMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24591B0))(this);
	}
	template <typename T = void> T set_SideAimingMode(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x24591B8))(this, value);
	}
	template <typename T = uintptr_t> T get_FireBtnModeType() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24592D0))(this);
	}
	template <typename T = void> T set_FireBtnModeType(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x24592D8))(this, value);
	}
	template <typename T = bool> T get_EnableLimitFireRange() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24593F0))(this);
	}
	template <typename T = void> T set_EnableLimitFireRange(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24593F8))(this, value);
	}
	template <typename T = void> T set_CloseDoubleFireBtn(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x24560EC))(this, value);
	}
	template <typename T = bool> T get_CloseDoubleFireBtn() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459518))(this);
	}
	template <typename T = void> T set_ZombieAutoFireConfig(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2459520))(this, value);
	}
	template <typename T = bool> T get_ZombieAutoFireConfig() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24597C0))(this);
	}
	template <typename T = bool> T get_IsZombieAuto() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24597C8))(this);
	}
	template <typename T = uintptr_t> T get_FireMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24598F0))(this);
	}
	template <typename T = void> T set_FireMode(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2459A30))(this, value);
	}
	template <typename T = uintptr_t> T get_FireModeConfig() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459B44))(this);
	}
	template <typename T = bool> T get_IsAuto() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244BC34))(this);
	}
	template <typename T = uintptr_t> T get_MeleeFireMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459B4C))(this);
	}
	template <typename T = bool> T get_MyVehicleButtonMirror() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459B5C))(this);
	}
	template <typename T = void> T set_MyVehicleButtonMirror(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2459B64))(this, value);
	}
	template <typename T = bool> T get_MyVehicleHandSpikeMirror() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459C84))(this);
	}
	template <typename T = void> T set_MyVehicleHandSpikeMirror(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2459C8C))(this, value);
	}
	template <typename T = uintptr_t> T get_MyVehicleButtonType() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459DAC))(this);
	}
	template <typename T = void> T set_MyVehicleButtonType(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2451DD4))(this, value);
	}
	template <typename T = uintptr_t> T get_MyVehicleCameraResetType() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2459DB4))(this);
	}
	template <typename T = void> T set_MyVehicleCameraResetType(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2459DBC))(this, value);
	}
	template <typename T = uintptr_t> T get_OpenType() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24566E8))(this);
	}
	template <typename T = void> T set_OpenType(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x2459ED4))(this, value);
	}
	template <typename T = bool> T get_HorizontallyReverse() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24566F0))(this);
	}
	template <typename T = void> T set_HorizontallyReverse(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x2459FEC))(this, value);
	}
	template <typename T = bool> T get_VerticalReverse() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x24566F8))(this);
	}
	template <typename T = void> T set_VerticalReverse(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245A10C))(this, value);
	}
	template <typename T = bool> T get_AutoPickingUp() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245A22C))(this);
	}
	template <typename T = void> T set_AutoPickingUp(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245A234))(this, value);
	}
	template <typename T = float> T RealForceToNormalized(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245A354))(this, value);
	}
	template <typename T = float> T NormalizedForceToReal(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245A43C))(this, value);
	}
	template <typename T = float> T get_TouchForceOpen() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245A524))(this);
	}
	template <typename T = float> T get_NormalizedTouchForce() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245A52C))(this);
	}
	template <typename T = void> T set_NormalizedTouchForce(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245A534))(this, value);
	}
	template <typename T = float> T get_TouchForceClose() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245A65C))(this);
	}
	template <typename T = float> T get_NormalizedTouchForceClose() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245A664))(this);
	}
	template <typename T = void> T set_NormalizedTouchForceClose(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245A66C))(this, value);
	}
	template <typename T = bool> T get_Enable3DTouch() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244D298))(this);
	}
	template <typename T = void> T set_Enable3DTouch(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245A794))(this, value);
	}
	template <typename T = bool> T get_Enabel3DTouchMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244BBB4))(this);
	}
	template <typename T = bool> T get_IsAuto3DtouchMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245AB60))(this);
	}
	template <typename T = uintptr_t> T get_CurGameHandle() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244C658))(this);
	}
	template <typename T = void> T set_CurGameHandle(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x245A908))(this, value);
	}
	template <typename T = uintptr_t> T get_CurRotationMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245AB9C))(this);
	}
	template <typename T = void> T set_CurRotationMode(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x245ABA4))(this, value);
	}
	template <typename T = uintptr_t> T get_CurSensitiveSwitchMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245ACBC))(this);
	}
	template <typename T = void> T set_CurSensitiveSwitchMode(uintptr_t value) {
		return ((T (*)(InputSettingConfig*, uintptr_t))(Il2CppBase() + 0x245ACC4))(this, value);
	}
	template <typename T = float> T get_DeltaSensitiveFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245ADDC))(this);
	}
	template <typename T = void> T set_DeltaSensitiveFactor(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245ADE4))(this, value);
	}
	template <typename T = float> T get_DisAccelSensitiveFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245AF0C))(this);
	}
	template <typename T = void> T set_DisAccelSensitiveFactor(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245AF14))(this, value);
	}
	template <typename T = float> T get_SpeedAccelSensitiveFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B03C))(this);
	}
	template <typename T = void> T set_SpeedAccelSensitiveFactor(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B044))(this, value);
	}
	template <typename T = float> T get_BaseScaleFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B16C))(this);
	}
	template <typename T = void> T set_BaseScaleFactor(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B174))(this, value);
	}
	template <typename T = float> T get_MinRotationVec() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B17C))(this);
	}
	template <typename T = void> T set_MinRotationVec(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B184))(this, value);
	}
	template <typename T = float> T get_MaxRotationVec() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B18C))(this);
	}
	template <typename T = void> T set_MaxRotationVec(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B194))(this, value);
	}
	template <typename T = float> T get_RotationDisFactor() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B19C))(this);
	}
	template <typename T = void> T set_RotationDisFactor(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B1A4))(this, value);
	}
	template <typename T = bool> T get_FixedVirtualJoyStick() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x244AFFC))(this);
	}
	template <typename T = void> T set_FixedVirtualJoyStick(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245B2CC))(this, value);
	}
	template <typename T = bool> T get_RightFireTurnForbid() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B3EC))(this);
	}
	template <typename T = void> T set_RightFireTurnForbid(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245B3F4))(this, value);
	}
	template <typename T = float> T TranslateToRange(float value) {
		return ((T (*)(InputSettingConfig*, float))(Il2CppBase() + 0x245B514))(this, value);
	}
	template <typename T = float> T GetSensitiveFactorDefaultValue(uintptr_t mModeType, uintptr_t type2) {
		return ((T (*)(InputSettingConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x245B604))(this, mModeType, type2);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245B798))(this);
	}
	template <typename T = void> T InitInEmulator() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245CF58))(this);
	}
	template <typename T = void> T ResetBasic() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245D038))(this);
	}
	template <typename T = void> T ResetSensitivity() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245D370))(this);
	}
	template <typename T = void> T ResetControl() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245D5CC))(this);
	}
	template <typename T = void> T ResetVehicle() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245D75C))(this);
	}
	template <typename T = void> T ResetGamePad() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245D91C))(this);
	}
	template <typename T = void> T ResetFireMode() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245E1B8))(this);
	}
	template <typename T = bool> T get_GamePadReverseRotateH() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2453718))(this);
	}
	template <typename T = void> T set_GamePadReverseRotateH(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245DAF8))(this, value);
	}
	template <typename T = bool> T get_GamePadReverseRotateV() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2453720))(this);
	}
	template <typename T = void> T set_GamePadReverseRotateV(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245DC18))(this, value);
	}
	template <typename T = bool> T get_GamePadReverseLT_LB() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x245222C))(this);
	}
	template <typename T = void> T set_GamePadReverseLT_LB(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245DD38))(this, value);
	}
	template <typename T = bool> T get_GamePadAdsClick() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2453728))(this);
	}
	template <typename T = void> T set_GamePadAdsClick(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245DE58))(this, value);
	}
	template <typename T = bool> T get_GamePadAutoSprint() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2454AA0))(this);
	}
	template <typename T = void> T set_GamePadAutoSprint(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245DF78))(this, value);
	}
	template <typename T = bool> T get_GamePadClickLeftJSSprint() {
		return ((T (*)(InputSettingConfig*))(Il2CppBase() + 0x2454AA8))(this);
	}
	template <typename T = void> T set_GamePadClickLeftJSSprint(bool value) {
		return ((T (*)(InputSettingConfig*, bool))(Il2CppBase() + 0x245E098))(this, value);
	}

};

}
