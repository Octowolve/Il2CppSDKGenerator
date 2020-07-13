#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRClimbComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRClimbComponent"));
	}

	template <typename T = float> T& m_StandMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_RunMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_JumpMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_MaxClimbHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ClimbToCeilHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_MaxClimbAngle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_MinClimbAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DefaultMantleWidth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_RunClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RunClimbSpeedList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_StandClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_JumpClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_JumpClimbSpeedList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_ClimbOverMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_MinClimpUpMantleWidth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_JumpClimbOverMaxMantleWidthList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_FPClimbAnimPlayThreshold() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_CheckMantleWidthOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_FPFastClimbHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_FallingToClimbTransitionTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_FPClimbAimStandHeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_FPClimbAimMaxDelay() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_FPClimbAimMinStandHeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_CheckOverHeightBackDistance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_ClimbForwardMaxHeight() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_ClimbOverMaxOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& Physics_TraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_MaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OverlapBoxResults() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& m_CurRealMantleNormal() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& m_curMantleNormal() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_curMantleHeight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_curMantleDistanceToPawn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_curMantleDistanceToPawn_Top() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_curMantleWidth() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_CheckFPPlayAnim() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& m_StartClimbPosition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& m_HightestPosition() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& m_EndClimbPosition() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_CurrentAnimNameType() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& m_CurrentAnimName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_IsHitCeiling() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_ToCeilingHeight() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_IsClimbOverHitPostion() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& m_ClimbOverHitPostion() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_CheckOverHeadHeightScale() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_CurrentClimbSpeed() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_CurrentClimbType() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_TransitionTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_canClimbUp() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& m_canClimbOver() {
		return *(T*)((uintptr_t)this + 0x105);
	}
	template <typename T = bool> T& m_IsInAir() {
		return *(T*)((uintptr_t)this + 0x106);
	}
	template <typename T = bool> T& m_IsSprint() {
		return *(T*)((uintptr_t)this + 0x107);
	}
	template <typename T = float> T& m_ClimbOverCharControllerHeight() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_PawnTransform() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*>*> static T& m_ClimbAnimMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> static T& m_ClimbOverLandSkyTriggerTimeScaleMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_MantleHeightIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_RunClimbOverMaxMantleWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> T& CameraLookAt() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_CameraConsole() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& FUpdateControllerHeight() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_OldCameraOffset() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_ToCameraLen() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_ClimbType() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& mChangeToHeightTimer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& mChangeToHeightTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& mToHeightSpeed() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& mOldEyeHeight() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& mSrcHeight() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& mToHeight() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_CheckClimbUpAdditionHeight() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& m_CheckOverMaxHitGapRadius() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& m_CheckOverMaxHitHeight() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> static T& IsCheckEndClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& m_CachedSimulationRootMotionData() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_WaitingForSimulate() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& m_CachedSimulationRootMotionDataTime() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& m_IsSimulateClimbEnd() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& m_InPostCheckResetFire() {
		return *(T*)((uintptr_t)this + 0x169);
	}
	template <typename T = int32_t> T& m_PostCheckResetStartFrame() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& m_PostCheckResetStartTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& m_PostCheckResetMaxTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMantleHeightIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldDelayClimbing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAimCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealyClimbing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbMantle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClimbOverHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWindowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControllerHeightTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControllerToHeightTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClimbUpMantleCenterPosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootMotionAnimNameType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClimbSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPawnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClimbOverDistanceOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClimbOverMaxMantleWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInDoorHotFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInDoomClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanClimbOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedCheckBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsOverMaxDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsOverMaxAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleDistanceToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMantleNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsOverMaxHigh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCollideOverHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsJumpInAir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check1pAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSilumatePhysClimbEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePhysClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateClimbRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSimulateClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRCheckCanClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndClimbResetFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPostClimbCheckReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}

	template <typename T = float> T get_ClimbOverMaxSpeed() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2503F5C))(this);
	}
	template <typename T = Il2CppString*> T get_CurrentAnimName() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2503F64))(this);
	}
	template <typename T = Il2CppVector3> T get_PawnPosition() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2503F6C))(this);
	}
	template <typename T = Il2CppQuaternion> T get_PawnRotation() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2503FA0))(this);
	}
	template <typename T = void> T set_PawnRotation(Il2CppQuaternion value) {
		return ((T (*)(BRClimbComponent*, Il2CppQuaternion))(Il2CppBase() + 0x2503FD4))(this, value);
	}
	template <typename T = float> T get_PawnCharControllerRadius() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250401C))(this);
	}
	template <typename T = float> T get_PawnCharControllerHeight() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504058))(this);
	}
	template <typename T = Il2CppVector3> T get_PawnCharControllerCenter() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504094))(this);
	}
	template <typename T = int32_t> T GetMantleHeightIndex(float mantleHeight) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x25040DC))(this, mantleHeight);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRClimbComponent*, uintptr_t))(Il2CppBase() + 0x2504360))(this, pawn);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x25045AC))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504914))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x2504A54))(this, deltaTime);
	}
	template <typename T = bool> T StartClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504D80))(this);
	}
	template <typename T = bool> T CheckShouldDelayClimbing() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2505C84))(this);
	}
	template <typename T = void> T CloseAimCallBackFunc() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2507414))(this);
	}
	template <typename T = void> T DealyClimbing() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x25075C0))(this);
	}
	template <typename T = void> T CheckClimbMantle() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250573C))(this);
	}
	template <typename T = void> T OnFinishClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250A0DC))(this);
	}
	template <typename T = void> T ChangeClimbOverHeight() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250A6C8))(this);
	}
	template <typename T = bool> T CheckWindowHeight() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250AA64))(this);
	}
	template <typename T = void> static T NullTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x250AEBC))(0);
	}
	template <typename T = void> T ControllerHeightTick() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250AF7C))(this);
	}
	template <typename T = void> T ControllerToHeightTick(float inHeight, float time) {
		return ((T (*)(BRClimbComponent*, float, float))(Il2CppBase() + 0x250A294))(this, inHeight, time);
	}
	template <typename T = float> T GetClimbUpMantleCenterPosOffset(float mantleWidth, float pawnRadius) {
		return ((T (*)(BRClimbComponent*, float, float))(Il2CppBase() + 0x250B4B4))(this, mantleWidth, pawnRadius);
	}
	template <typename T = uintptr_t> T GetRootMotionAnimNameType() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2509C40))(this);
	}
	template <typename T = void> T SetClimbSpeed() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250B718))(this);
	}
	template <typename T = void> T ResetPawnPosition() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250B880))(this);
	}
	template <typename T = void> T DoClimbUp() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2505DD4))(this);
	}
	template <typename T = void> T DoClimbOver() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250635C))(this);
	}
	template <typename T = float> T GetClimbOverDistanceOffset(uintptr_t animNameType) {
		return ((T (*)(BRClimbComponent*, uintptr_t))(Il2CppBase() + 0x250BC8C))(this, animNameType);
	}
	template <typename T = float> T GetClimbOverMaxMantleWidth(float mantleHeight) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x250BF68))(this, mantleHeight);
	}
	template <typename T = bool> T CheckInDoorHotFix() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250C170))(this);
	}
	template <typename T = bool> T CheckInDoomClimbOver(float mantleDistance, float mantleHeight, float mantleWidth, Il2CppVector3 mantleNormal, float pawnRaduis, float pawnHeight, int32_t layerMask) {
		return ((T (*)(BRClimbComponent*, float, float, float, Il2CppVector3, float, float, int32_t))(Il2CppBase() + 0x250C240))(this, mantleDistance, mantleHeight, mantleWidth, mantleNormal, pawnRaduis, pawnHeight, layerMask);
	}
	template <typename T = bool> T CheckCanClimbOver(float mantleDistance, float mantleHeight, float mantleWidth, Il2CppVector3 mantleNormal, float pawnRaduis, float pawnHeight, int32_t layerMask) {
		return ((T (*)(BRClimbComponent*, float, float, float, Il2CppVector3, float, float, int32_t))(Il2CppBase() + 0x2509450))(this, mantleDistance, mantleHeight, mantleWidth, mantleNormal, pawnRaduis, pawnHeight, layerMask);
	}
	template <typename T = bool> T CheckCanClimbUp(float mantleDistance, float mantleDistanceTop, float mantleHeight, float mantleWidth, Il2CppVector3 mantleNormal, float pawnRaduis, float pawnHeight, int32_t layerMask) {
		return ((T (*)(BRClimbComponent*, float, float, float, float, Il2CppVector3, float, float, int32_t))(Il2CppBase() + 0x2509014))(this, mantleDistance, mantleDistanceTop, mantleHeight, mantleWidth, mantleNormal, pawnRaduis, pawnHeight, layerMask);
	}
	template <typename T = bool> T SimulatedCheckBox(float boxLength, float boxWidth, float boxHeight, Il2CppVector3 centerPos, Il2CppQuaternion boxRot, int32_t layerMask, bool ShowBoxColliderUp) {
		return ((T (*)(BRClimbComponent*, float, float, float, Il2CppVector3, Il2CppQuaternion, int32_t, bool))(Il2CppBase() + 0x250CA9C))(this, boxLength, boxWidth, boxHeight, centerPos, boxRot, layerMask, ShowBoxColliderUp);
	}
	template <typename T = bool> T CheckIsOverMaxDistance(float mantleDistance, float maxDistance) {
		return ((T (*)(BRClimbComponent*, float, float))(Il2CppBase() + 0x2508F14))(this, mantleDistance, maxDistance);
	}
	template <typename T = bool> T CheckIsOverMaxAngle(float maxAngle, Il2CppVector3 mantleNormal) {
		return ((T (*)(BRClimbComponent*, float, Il2CppVector3))(Il2CppBase() + 0x2508B48))(this, maxAngle, mantleNormal);
	}
	template <typename T = void> T CheckMantleInfo(int32_t layerMask, uintptr_t* retMantleNormal, uintptr_t* retMantleHeight, uintptr_t* retMantleWidth, uintptr_t* retDistanceToPawn, uintptr_t* retDistanceToPawn_Top) {
		return ((T (*)(BRClimbComponent*, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x25076B8))(this, layerMask, retMantleNormal, retMantleHeight, retMantleWidth, retDistanceToPawn, retDistanceToPawn_Top);
	}
	template <typename T = void> T CheckMantleDistanceToPawn(Il2CppVector3 normal, Il2CppVector3 hitPoint, uintptr_t* retDistance) {
		return ((T (*)(BRClimbComponent*, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x250D354))(this, normal, hitPoint, retDistance);
	}
	template <typename T = void> T CheckMantleWidth(Il2CppVector3 normal, Il2CppVector3 hitPoint, int32_t layerMask, float mantleDistanceToPawn, Il2CppVector3 srcNormal, uintptr_t* retMantleWidth, uintptr_t* retDistanceToPawn_Top, uintptr_t* retCheckMantleWidthSuccess) {
		return ((T (*)(BRClimbComponent*, Il2CppVector3, Il2CppVector3, int32_t, float, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x250D57C))(this, normal, hitPoint, layerMask, mantleDistanceToPawn, srcNormal, retMantleWidth, retDistanceToPawn_Top, retCheckMantleWidthSuccess);
	}
	template <typename T = void> T CheckMantleHeight(float distanceToPawn, float maxClimbHeight, float mantleWidth, Il2CppVector3 mantleNormal, float pawnRaduis, int32_t layerMask, bool isCheckMantleWidthSuccess, uintptr_t* retMantleHeight) {
		return ((T (*)(BRClimbComponent*, float, float, float, Il2CppVector3, float, int32_t, bool, uintptr_t*))(Il2CppBase() + 0x250E738))(this, distanceToPawn, maxClimbHeight, mantleWidth, mantleNormal, pawnRaduis, layerMask, isCheckMantleWidthSuccess, retMantleHeight);
	}
	template <typename T = bool> T CheckMantleNormal(int32_t layerMask, uintptr_t* hitInfo) {
		return ((T (*)(BRClimbComponent*, int32_t, uintptr_t*))(Il2CppBase() + 0x250CE44))(this, layerMask, hitInfo);
	}
	template <typename T = bool> T CheckIsOverMaxHigh(float maxHeight, float pawnRadius, int32_t layerMask) {
		return ((T (*)(BRClimbComponent*, float, float, int32_t))(Il2CppBase() + 0x2507F5C))(this, maxHeight, pawnRadius, layerMask);
	}
	template <typename T = bool> T CheckCollideOverHead(float currentHeight, Il2CppVector3 mentalNormal, int32_t layerMask) {
		return ((T (*)(BRClimbComponent*, float, Il2CppVector3, int32_t))(Il2CppBase() + 0x2507A58))(this, currentHeight, mentalNormal, layerMask);
	}
	template <typename T = bool> T IsJumpInAir() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504FD8))(this);
	}
	template <typename T = bool> T IsPawnRun() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250B5C0))(this);
	}
	template <typename T = bool> T CheckCanClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2505298))(this);
	}
	template <typename T = void> T ShowBoxCollider(Il2CppVector3 centerPos, Il2CppVector3 halfExtents, Il2CppQuaternion boxRot, bool isUp) {
		return ((T (*)(BRClimbComponent*, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x250CD20))(this, centerPos, halfExtents, boxRot, isUp);
	}
	template <typename T = void> T StopClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x25046EC))(this);
	}
	template <typename T = void> T Check1pAnimation() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250EFE0))(this);
	}
	template <typename T = bool> T IsGround(float dist) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x250F288))(this, dist);
	}
	template <typename T = uintptr_t> T get_AdaptiveRootMotionComponent() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250F514))(this);
	}
	template <typename T = void> T CheckEndClimb(float deltaTime) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x250F5EC))(this, deltaTime);
	}
	template <typename T = void> T DoPhysClimb(float deltaTime) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x250FA48))(this, deltaTime);
	}
	template <typename T = void> T PhysClimb(float deltaTime) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x250FC7C))(this, deltaTime);
	}
	template <typename T = bool> T get_IsSimulateClimbEnd() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250FED8))(this);
	}
	template <typename T = void> T CheckSilumatePhysClimbEnd() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250FEE0))(this);
	}
	template <typename T = void> T SimulatePhysClimb(uintptr_t moveData, float deltaTime) {
		return ((T (*)(BRClimbComponent*, uintptr_t, float))(Il2CppBase() + 0x2510230))(this, moveData, deltaTime);
	}
	template <typename T = void> T OnSimulateClimbRootMotionEnd() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2510B50))(this);
	}
	template <typename T = void> T SimulatedRootMotion(uintptr_t rootMotionData) {
		return ((T (*)(BRClimbComponent*, uintptr_t))(Il2CppBase() + 0x2510CC0))(this, rootMotionData);
	}
	template <typename T = void> T CheckSimulateClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2510384))(this);
	}
	template <typename T = bool> T BRCheckCanClimb() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2510EFC))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BRClimbComponent*, Il2CppVector3))(Il2CppBase() + 0x2511120))(this, shift);
	}
	template <typename T = void> T CheckEndClimbResetFire() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x250A534))(this);
	}
	template <typename T = void> T TickPostClimbCheckReset() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2504BE0))(this);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRClimbComponent*, uintptr_t, bool))(Il2CppBase() + 0x2511250))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x25114C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRClimbComponent*, uintptr_t))(Il2CppBase() + 0x2511BA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2511BAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(BRClimbComponent*))(Il2CppBase() + 0x2511BB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRClimbComponent*, float))(Il2CppBase() + 0x2511BBC))(this, P0);
	}

};

}
