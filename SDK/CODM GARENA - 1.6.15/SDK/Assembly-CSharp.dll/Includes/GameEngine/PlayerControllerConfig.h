#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PlayerControllerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PlayerControllerConfig"));
	}

	template <typename T = bool> T& EnableAimAssistance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& AimAssistanceSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& EnableAutoFire() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AutoFireDelayTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AutoFireStopDelayTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsAimAssistanceNeedRotationInput() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsAimAssistanceStopWhenHitEnemy() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& FindNearestTargetInAimAssistance() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = float> T& DurationForEnableAimAssistanceAfterInput() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& AndroidCameraRotateRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& EnableTwoJumpButtons() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& EnableToggleCrouch() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& EnableQuickSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& EnableSniperAimAssistance() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& PressToZoom() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& SprintingTurnAccelerationScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& TacticalMapOpacity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& RotationModeMP() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& RotationModeBR() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& RotationModePVE() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SensitiveSwitchModeMP() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& SensitiveSwitchModeBR() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SensitiveSwitchModePVE() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& BaseScaleFactorMP() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& MinRotationVecMP() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& MaxRotationVecMP() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& RotationDisFactorMP() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& BaseScaleFactorBR() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MinRotationVecBR() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& MaxRotationVecBR() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& RotationDisFactorBR() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& BaseScaleFactorPVE() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MinRotationVecPVE() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& MaxRotationVecPVE() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& RotationDisFactorPVE() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& IsOpenRotationExponentFactor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& FastThrow() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& MoveJoystickFixed() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = bool> T& FPPWeaponNewMode() {
		return *(T*)((uintptr_t)this + 0x83);
	}
	template <typename T = int32_t> T& LeftShootMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& SlideTackleUseInputTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& EnableAlwaysSprint() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = int32_t> T& NormalizedSprintAccuracy() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& FastStanding() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& SwitchSprintingOpen() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& SwitchShotGunHipFire() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& EnableADS() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = bool> T& Enable3DTouchADS() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& SideAimingMode() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& RightFireFixed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsOpenAimAssist() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = int32_t> T& OpenAimingType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& GamePadReverseRotateH() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& GamePadReverseRotateV() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = bool> T& GamePadReverseLT_LB() {
		return *(T*)((uintptr_t)this + 0xA6);
	}
	template <typename T = bool> T& GamePadAdsClick() {
		return *(T*)((uintptr_t)this + 0xA7);
	}
	template <typename T = bool> T& GamePadAutoSprint() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& CameraFov() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& ChatMode() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& CloseDoubleFireBtn() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& ZombieAutoFireConfig() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = bool> T& MyVehicleButtonMirror() {
		return *(T*)((uintptr_t)this + 0xB3);
	}
	template <typename T = bool> T& MyVehicleHandSpikeMirror() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& MyVehicleButtonType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& MyVehicleCameraResetType() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& OpenType() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& HorizontallyReverse() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& VerticalReverse() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = bool> T& Enable3DTouch() {
		return *(T*)((uintptr_t)this + 0xC6);
	}
	template <typename T = int32_t> T& NormalizedTouchForce() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& NormalizedTouchForceClose() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& CurGameHandle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& FireMode() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& EnableLimitFireRange() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& FireBtnModeType_MP_DefaultValue() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& FireBtnModeType_BR_DefaultValue() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& FireBtnModeType_PVE_DefaultValue() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& GamePadClickLeftJSSprint() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& FixedVirtualJoyStick() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = bool> T& RightFireTurnForbid() {
		return *(T*)((uintptr_t)this + 0xEA);
	}
	template <typename T = bool> T& AssaultRifleFireType() {
		return *(T*)((uintptr_t)this + 0xEB);
	}
	template <typename T = bool> T& SubMachineGunFireType() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& ShotGunFireType() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = bool> T& LightMachineGunFireType() {
		return *(T*)((uintptr_t)this + 0xEE);
	}
	template <typename T = bool> T& SniperRifleFireType() {
		return *(T*)((uintptr_t)this + 0xEF);
	}
	template <typename T = bool> T& PistolFireType() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& Launcher() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& Controllable() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = uintptr_t> T& RotateSensitiveInfo() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ContinuousPointInfo() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitData() {
		return ((T (*)(PlayerControllerConfig*))(Il2CppBase() + 0x1DDC128))(this);
	}

};

}
