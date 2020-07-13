#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ButtonTypeInfos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LeftSkillRoots() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RightSkillRoots() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VehicleUIInfos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& vehicleInfo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BrakeBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LeftBrakeBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MotorUpBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MotorDownBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LeftMotorUpBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LeftMotorDownBtn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SpeakerBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& changeSeatBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& accBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& accPressedSprites() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& JumpBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ExploBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& onVehicleRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& leftArrow() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& leftNormalArrow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& rightArrow() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& rightNormalArrow() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& forwardArrow() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& forwardNormalArrow() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& backwardArrow() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& backNormalArrow() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& leftRightRoot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& forwardBackwardRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& buttonControlRoot() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& handSpikeControlRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& handSpike() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& handSpikeBackward() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& handSpikeBackwardPressed() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& handSpikeBackwardNormal() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& handSpikeLeftSign() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& handSpikeRightSign() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& joystickControlRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& drivingRoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& vehicleStateRoot() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& centerVehicleStateRoot() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& centerVehicleIcon() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& joystickOn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& joystickHandleTrans() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& HelicopterExtraBtnRoot() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& upArrow() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& downArrow() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ChangeSeatObject() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& changeSeatFx() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& changeSeatTweens() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& healthBar() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& bigHealthProgressBar() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& hpTxt() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& helicopterSkillComponent() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& buttonMirrored() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& handSpikeMirrored() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = float> static T& kJoyStickButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kHandSpikeButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& lastSpeed() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& lastFuel() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& lastHealth() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& fuelBlinkThreshold() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& healthlBlinkThreshold() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppVector3> T& leftRightCenterPos() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppVector3> T& forwardBackwardCenterPos() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppVector3> T& handSpikeSteerPos() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppVector3> T& handSpikeBackwardPos() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& readyInitDriveHandle() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& currentFrameCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& teamColors() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> static T& emulatorAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mVehicleType() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& lastChangeSeatClickTime() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& currentSeatMode() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHealthProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrokenIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadXClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBrakePress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBrakeRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReadyInitDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRefreshDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleJoyStickChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrakeBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAccBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleSkillVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMotorBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetButtonTypeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetVehicleUIInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDriveButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetDriveButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDriveBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHelicopterAlarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCancelSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSaveForPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRideBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSeatBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetoffBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleJumpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleExploBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrakeBtnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrakeBtnReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMotorUpBtnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMotorUpBtnReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMotorDownBtnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMotorDownBtnReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeatId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNormalHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCenterVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDrivingRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGetOnBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonMirrored() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHandeSpikeMirrored() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidgetMirrored() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameHandleMirrorRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVehicleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FCE0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FCE8))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FCF8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FDCC))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FDD4))(this);
	}
	template <typename T = uintptr_t> T get_currentVehicle() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FDE0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E7FEFC))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(VehicleHUD*, bool, bool))(Il2CppBase() + 0x2E8044C))(this, value, enableOptimize);
	}
	template <typename T = void> T CheckState() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E80604))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VehicleHUD*, float))(Il2CppBase() + 0x2E81328))(this, dt);
	}
	template <typename T = void> T UpdateHealthProgressBar(bool isForce) {
		return ((T (*)(VehicleHUD*, bool))(Il2CppBase() + 0x2E832AC))(this, isForce);
	}
	template <typename T = void> T SetBrokenIcon() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83858))(this);
	}
	template <typename T = bool> T OnGamepadXClick() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83BD0))(this);
	}
	template <typename T = bool> T OnGamepadBrakePress() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83D30))(this);
	}
	template <typename T = bool> T OnGamepadBrakeRelease() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8410C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E842D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E85170))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E855E4))(this);
	}
	template <typename T = void> T SetReadyInitDriveHandle() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E857B0))(this);
	}
	template <typename T = void> T TryRefreshDriveHandle() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83ACC))(this);
	}
	template <typename T = uintptr_t> T GetButtonType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E86320))(this);
	}
	template <typename T = void> T InitDriveHandle() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E859A8))(this);
	}
	template <typename T = void> T OnVehicleJoyStickChanged(uintptr_t Msg) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E86E90))(this, Msg);
	}
	template <typename T = void> T InitInEmulator() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E86AC4))(this);
	}
	template <typename T = void> T RefreshBrakeBtnState(uintptr_t buttonType, bool isMirror) {
		return ((T (*)(VehicleHUD*, uintptr_t, bool))(Il2CppBase() + 0x2E875F4))(this, buttonType, isMirror);
	}
	template <typename T = void> T RefreshAccBtnState(uintptr_t buttonType, bool isMirror) {
		return ((T (*)(VehicleHUD*, uintptr_t, bool))(Il2CppBase() + 0x2E87D60))(this, buttonType, isMirror);
	}
	template <typename T = void> T RefreshVehicleSkillVisible(uintptr_t buttonType) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E87F70))(this, buttonType);
	}
	template <typename T = void> T RefreshMotorBtnState(uintptr_t buttonType, bool isMirror) {
		return ((T (*)(VehicleHUD*, uintptr_t, bool))(Il2CppBase() + 0x2E88444))(this, buttonType, isMirror);
	}
	template <typename T = uintptr_t> T GetTargetButtonTypeInfo(uintptr_t btnType) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E878CC))(this, btnType);
	}
	template <typename T = uintptr_t> T GetTargetVehicleUIInfo(uintptr_t vehicleType) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E83FD4))(this, vehicleType);
	}
	template <typename T = void> T SetDriveButtonType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8589C))(this);
	}
	template <typename T = void> T SetDriveButtonType_1(uintptr_t btnType) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E86774))(this, btnType);
	}
	template <typename T = void> T CheckVehicleControl(uintptr_t type) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E88608))(this, type);
	}
	template <typename T = void> T DelayVehicle() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E88CBC))(this);
	}
	template <typename T = void> T OnDriveBtnClicked(uintptr_t Msg) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E88D94))(this, Msg);
	}
	template <typename T = void> T OnHelicopterAlarm(uintptr_t Msg) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E89188))(this, Msg);
	}
	template <typename T = void> T DelayCancelSave() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E894FC))(this);
	}
	template <typename T = void> T CancelSaveForPawn(uintptr_t brPawn) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E89054))(this, brPawn);
	}
	template <typename T = void> T OnRideBtnClicked(uintptr_t Msg) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E896D8))(this, Msg);
	}
	template <typename T = void> T OnChangeSeatBtnClicked() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E89A20))(this);
	}
	template <typename T = void> T OnGetoffBtnClicked(uintptr_t Msg) {
		return ((T (*)(VehicleHUD*, uintptr_t))(Il2CppBase() + 0x2E89BF4))(this, Msg);
	}
	template <typename T = void> T OnVehicleJumpBtnClicked() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E89D34))(this);
	}
	template <typename T = void> T OnVehicleExploBtnClicked() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E89FC4))(this);
	}
	template <typename T = void> T OnBrakeBtnPressed() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E824DC))(this);
	}
	template <typename T = void> T OnBrakeBtnReleased() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E82724))(this);
	}
	template <typename T = void> T OnMotorUpBtnPressed() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8295C))(this);
	}
	template <typename T = void> T OnMotorUpBtnReleased() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E82E04))(this);
	}
	template <typename T = void> T OnMotorDownBtnPressed() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E82BB0))(this);
	}
	template <typename T = void> T OnMotorDownBtnReleased() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83058))(this);
	}
	template <typename T = void> T UpdateSeat() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E84A6C))(this);
	}
	template <typename T = void> T SetSeatId(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(VehicleHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E8A84C))(this, pawn, seat);
	}
	template <typename T = void> T ShowNormalHUD(bool showRidingHUD, bool showDrivingHUD, bool isRemote) {
		return ((T (*)(VehicleHUD*, bool, bool, bool))(Il2CppBase() + 0x2E8AC10))(this, showRidingHUD, showDrivingHUD, isRemote);
	}
	template <typename T = void> T SetState(uintptr_t state, bool isRemote) {
		return ((T (*)(VehicleHUD*, uintptr_t, bool))(Il2CppBase() + 0x2E80E34))(this, state, isRemote);
	}
	template <typename T = void> T RefreshCenterVehicleState() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E872E4))(this);
	}
	template <typename T = void> T ShowDrivingRoot(bool visible) {
		return ((T (*)(VehicleHUD*, bool))(Il2CppBase() + 0x2E802FC))(this, visible);
	}
	template <typename T = void> T ShowGetOnBtn() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B4FC))(this);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E80174))(this);
	}
	template <typename T = void> T SetButtonMirrored(bool mirror) {
		return ((T (*)(VehicleHUD*, bool))(Il2CppBase() + 0x2E864D0))(this, mirror);
	}
	template <typename T = void> T SetHandeSpikeMirrored(bool mirror) {
		return ((T (*)(VehicleHUD*, bool))(Il2CppBase() + 0x2E86620))(this, mirror);
	}
	template <typename T = void> T SetWidgetMirrored(uintptr_t widget, Il2CppVector3 originPos, bool isMirror) {
		return ((T (*)(VehicleHUD*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x2E87A04))(this, widget, originPos, isMirror);
	}
	template <typename T = void> T SetGameHandleMirrorRotation() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E87044))(this);
	}
	template <typename T = int32_t> T get_currentVehType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E83EF8))(this);
	}
	template <typename T = void> T SetVehicleType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8A254))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B9AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B9B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(VehicleHUD*, bool, bool))(Il2CppBase() + 0x2E8B9BC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VehicleHUD*, float))(Il2CppBase() + 0x2E8B9C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B9CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B9D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(VehicleHUD*))(Il2CppBase() + 0x2E8B9DC))(this);
	}

};

}
