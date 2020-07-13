#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SkydivingPhysics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SkydivingPhysics"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OwnerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OwnerController() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppQuaternion> T& CameraRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& m_PawnRotationHor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& m_PawnRotationVer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_PawnAngleFB() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsSkydiving() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_SkydivingTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_SlowDownForPreLand() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_SlowDownFrameCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_SkydivingBeginPosition() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_IsParachuteUIVisible() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_IsParachuteOpened() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = float> T& m_ParachuteOpenTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_TerrainHeightUnderPlayer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_SkydivingSpeedForUI() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_PlayingSpeedUpSound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_LandOnGround() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& m_LandOnWater() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = Il2CppVector3> T& m_InitCamPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppQuaternion> T& m_InitCamRot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& m_LastSkydivingStage() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& LastTickTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_CurrentHeightToTerrain() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Wingsuit() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WingsuitCam() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Parachute() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CurPendant() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_SkydivingState() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_LeaderPawn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& m_LastHitPoint() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_IsLastHitInfoValid() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_LayerMask() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& m_LastPos() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppDictionary<uint32_t, int32_t>*>*> static T& FollowAngelDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppDictionary<uint32_t, float>*>*> static T& FollowOffsetYDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& m_FollowInitRotY() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_LandingSoundPlayed() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_SyncAnimTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& m_BeginWithUpwardLaunch() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_CantSwitchAnimatorController() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = float> T& m_EndSkydivingTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_EndSkydivingCD() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_IsInBanSkydivingArea() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& IsWaitingForSkydiving() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& IsPawnDestroyed() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = bool> static T& EnableSkydivingLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& EnableSkydivingMoveLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = bool> static T& EnableSkydivingTransferLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA);
	}
	template <typename T = float> static T& SkydivingToFallMaxVerticalSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& SkydivingForseSetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& SkyFlyForseSetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& SkydivingForseBeginOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& SkydivingForseEndOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& SkyFlyForseBeginOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& SkyFlyForseEndOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> T& m_BeginToSkyFly() {
		return *(T*)((uintptr_t)this + 0x103);
	}
	template <typename T = bool> T& m_Ending() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> static T& ResetAnimatorControllerWhenDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> T& ForceMoveDistance() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& m_OpenParachuteCameraPos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppQuaternion> T& m_OpenParachuteCameraRot() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_VelocityGravity() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_Gravity() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_GravityMax() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_Parachute_Max_Open_Height() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_Parachute_Force_Open_Height() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_RotAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_VelocityRight() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& m_Acceleration_Right() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_CamRotAngleSpeed_Right() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& m_VelocityForward() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_Acceleration_Forward() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& m_MaxVelocity_Forward() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& m_Acceleration_Forward_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_SpeedDown() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& m_Acceleration_Forward_Skyfly() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Skyfly() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& m_Acceleration_Forward_Skyfly_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Skyfly_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Skyfly_SpeedDown() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& m_RotAngleSpeed_Forward() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_Skyfly_Velocity_Scale() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppVector3> T& m_CamOffset() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_CamDist() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& m_CamMaxAngle() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_CamMinAngle() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_CamMaxAngle_Skyfly() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_CamMinAngle_Skyfly() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_CamSensitivity() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_CamFOV() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& m_CamFOV_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& m_CamFOV_Skyfly() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_CamFOV_SpeedUp_Skyfly() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_ForwardAngle() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_ForwardAngle_Cam() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppVector3> T& m_JetPackScale() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppVector3> T& m_WingsuitScale() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& m_SkydivingTimeScaleInEditor() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_SkydivingOffset() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& m_SkyflyOffset() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& m_EasySkyFlyPreLandHeight() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& m_PreLandHeight() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& m_PreLandDuration() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& m_ReturnNormalDuration() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& m_TerrainLODHeight() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& m_PrelandHeightForAudio() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = float> T& m_MinSkydivingTimeLength() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& m_MinSkyflyTimeLength() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = float> T& m_CamRotAngleSpeed_Right_Wingsuit() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& m_CamRotAngleSpeed_Right_Parachute() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = float> T& m_Acceleration_Forward_Parachute() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Parachute() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& m_Acceleration_Forward_Parachute_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Parachute_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& m_MaxVelocity_Forward_Parachute_SpeedDown() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppVector3> T& m_CamOffset_Parachute() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& m_CamDist_Parachute() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& m_CamMaxAngle_Parachute() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& m_CamMinAngle_Parachute() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& m_CamFOV_Parachute() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& m_CamFOV_SpeedUp_Parachute() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& m_BlurMinSpeed() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& m_BlurMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& m_LandCameraTransitionTime3P() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> T& m_LandCameraTransitionTime1P() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& m_InitWaitTime() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = float> T& m_InitTotalTime() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = float> T& m_SkyflyInitTime() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = float> T& m_FollowOffset() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = float> T& m_FollowCamDist() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = float> T& m_SkyflyInitVelocity() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& m_SkydivingVelocityDownPower() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> T& m_SkydivingTeamRot1() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> T& m_SkydivingTeamRot2() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& m_SkydivingTeamRot3() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = float> T& m_SkydivingTeamOffset1() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = float> T& m_SkydivingTeamOffset2() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = float> T& m_SkydivingTeamOffset3() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = float> T& m_DelayRotationTimeValue() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DelayCopyAnimValue() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DelayRotation() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = float> T& TestSkyflyInitVelocity() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> T& m_VelocityConfig() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = float> static T& SkydivingMinAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> T& m_ParachutePitch() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = float> static T& MaxCheckSideHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> T& m_MoveInvalidToEndFrame() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = int16_t> T& LastRight() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = int16_t> T& LastForward() {
		return *(T*)((uintptr_t)this + 0x29E);
	}
	template <typename T = int16_t> T& LastDown() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uint16_t> T& LastBodyRotX() {
		return *(T*)((uintptr_t)this + 0x2A2);
	}
	template <typename T = uint16_t> T& LastBodyRotY() {
		return *(T*)((uintptr_t)this + 0x2A4);
	}
	template <typename T = bool> T& NewMoveMode() {
		return *(T*)((uintptr_t)this + 0x2A6);
	}
	template <typename T = uintptr_t> T& PendantMoveObject() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& ParachuteMoveController() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = uintptr_t> T& ParachuteRot() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = uintptr_t> T& WingsuitPos() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_ParachuteRotYOffset() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = Il2CppVector3> T& CurPosition() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = Il2CppVector3> T& SyncPosition() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = Il2CppVector3> T& CurVelocity() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = Il2CppVector3> T& SyncVelocity() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppQuaternion> T& LerpARotation() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = Il2CppQuaternion> T& LerpBRotation() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = Il2CppVector3> T& CurCameraEuler() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = Il2CppVector3> T& SyncCameraEuler() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppVector3> T& SyncRotationEuler() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = float> T& m_LerpTime() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uint32_t> T& m_CurLogicFrame() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CacheMoveData() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = bool> T& FirstMoveDataForceSet() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = bool> T& m_ForceSyncData() {
		return *(T*)((uintptr_t)this + 0x33D);
	}
	template <typename T = float> T& TestLandTime() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = float> T& TestLandHeight() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = bool> T& m_IsLanding() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& m_LandTimer() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& SyncRight() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& SyncForward() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = float> T& SyncDown() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = float> T& CurRight() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = float> T& CurForward() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = float> T& CurDown() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = float> T& SyncAnimLerpTime() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = float> T& SyncAnimLerpInterval() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = bool> T& DoSyncAnim() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = bool> T& TransferBodyRotation() {
		return *(T*)((uintptr_t)this + 0x371);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkydivingLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLeaderPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTmpValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check1PforceSetPositionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check1PforceSetPositionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On1PForceSetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadyForSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSkyfly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBeginSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceBeginSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceBeginSkydivingForInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSkydivingOrSkyFly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpOffAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkydivingPreconditionsAndStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSkydivingOrSkyFly_Impl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendantCallEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeEndSkydivingResetParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AfterEndSkydivingResetParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLocalPawnEndSkyDiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMinSkydivingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerReturnNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEnterWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGroundPointValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLandOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFollowRotParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForceMoveDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPawnRelatedObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSkydivingPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitPawnAndCamRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSkydivingCamera_Spectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSkydivingCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpInitCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcParachuteCameraAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLookTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSkydivingCamera_Inner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingCameraRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFollowSkydivingCameraRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingCameraRotInNonBattleArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcNonBattleRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSkyFlyParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFollowParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParachuteParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAircraftOnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalOrViewTargetPawnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerSkydivingBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUseMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAircraftOnEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreSpectateViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalOrViewTargetPawnEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerSkydivingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerReturnNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerLandCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessBlurEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFogEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnRotationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AngleRemap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCoeffByCameraRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDirByCameraRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVelocityGravity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCrossTerrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckControllerCrossTerrainWhenLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOpenParachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSlope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHitHelicopter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFallTerrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSided() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveObjPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelaySetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkydivingIsFollowChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTeammatePositionAndRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenWingsuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWingsuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseParachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenParachuteImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenParachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSkydivingAttachments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanCreateAssetCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMoveGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPendantMoveObjectCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPendantAnimAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPendantAnimAssetReadyImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkydivingRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerCallOpenParachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindWingSuitCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCopyAnimValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyAnimValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendantDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingSelfImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLogicFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUnRecentlySkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSyncData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushMoveDataToTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSyncRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSimulatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSyncDataForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSyncData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateMoveImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateLandStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLeaderAndTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFollowAndTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForeachFollowerPawnOperate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransferSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferSkydivingAnimImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransferSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}

	template <typename T = void> T set_IsSkydiving(bool value) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x357C74C))(this, value);
	}
	template <typename T = bool> T get_IsSkydiving() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357C9E4))(this);
	}
	template <typename T = Il2CppVector3> T get_SkydivingBeginPositionOffset() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357C9EC))(this);
	}
	template <typename T = bool> T get_IsParachuteOpened() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA74))(this);
	}
	template <typename T = float> T get_TerrainHeightUnderPlayer() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA7C))(this);
	}
	template <typename T = float> T get_SkydivingSpeed() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA84))(this);
	}
	template <typename T = float> T get_CurrentHeightToTerrain() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA8C))(this);
	}
	template <typename T = uintptr_t> T get_SkydivingState() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA94))(this);
	}
	template <typename T = uintptr_t> T get_LeaderPawn() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CA9C))(this);
	}
	template <typename T = void> T set_LeaderPawn(uintptr_t value) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x357CAA4))(this, value);
	}
	template <typename T = bool> T get_BeginWithUpwardLaunch() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CAAC))(this);
	}
	template <typename T = void> T set_BeginWithUpwardLaunch(bool value) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x357CAB4))(this, value);
	}
	template <typename T = void> T set_CantSwitchAnimatorController(bool value) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x357CAC8))(this, value);
	}
	template <typename T = bool> T get_CantSwitchAnimatorController() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CCEC))(this);
	}
	template <typename T = bool> T get_AircrftSkydiving() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CCF4))(this);
	}
	template <typename T = bool> T get_IsFollow() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CDD8))(this);
	}
	template <typename T = bool> T get_IsLeader() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CE00))(this);
	}
	template <typename T = bool> T get_IsSameTeamLocalOrViewTarget() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CE28))(this);
	}
	template <typename T = bool> T get_IsInBanSkydivingArea() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357CF10))(this);
	}
	template <typename T = void> T set_IsInBanSkydivingArea(bool value) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x357CF18))(this, value);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x357CF20))(this, pawn);
	}
	template <typename T = void> static T SkydivingLog(uintptr_t logType, Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35771BC))(0, logType, msg, paras);
	}
	template <typename T = void> T RefreshLeaderPawn() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357D718))(this);
	}
	template <typename T = void> T ResetTmpValue() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357D90C))(this);
	}
	template <typename T = void> T Check1PforceSetPositionBegin(Il2CppVector3 posDiff, Il2CppVector3 serPos, uintptr_t moveState) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x357D9E4))(this, posDiff, serPos, moveState);
	}
	template <typename T = void> T Check1PforceSetPositionEnd(Il2CppVector3 posDiff, Il2CppVector3 serPos, uintptr_t moveState, bool forceSetPos, uintptr_t skydivingEndCallback, uintptr_t skyflyEndCallback) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, Il2CppVector3, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x357E14C))(this, posDiff, serPos, moveState, forceSetPos, skydivingEndCallback, skyflyEndCallback);
	}
	template <typename T = void> T On1PForceSetPosition(Il2CppVector3 serPos, uintptr_t moveState) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x357F290))(this, serPos, moveState);
	}
	template <typename T = bool> T ReadyForSkydiving() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x357FBA0))(this);
	}
	template <typename T = void> T BeginSkyfly(Il2CppVector3 position) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x3580148))(this, position);
	}
	template <typename T = bool> T CheckBeginSkydiving(Il2CppVector3 position, Il2CppString* loginfo) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x3580ADC))(this, position, loginfo);
	}
	template <typename T = void> T BeginSkydiving(Il2CppVector3 position, Il2CppVector3 rot) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3580F64))(this, position, rot);
	}
	template <typename T = void> T ForceBeginSkydiving(Il2CppVector3 position, bool isSkyFly) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, bool))(Il2CppBase() + 0x357DC84))(this, position, isSkyFly);
	}
	template <typename T = void> T ForceBeginSkydivingForInit(Il2CppVector3 position) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x35817B4))(this, position);
	}
	template <typename T = bool> T BeginSkydivingOrSkyFly(Il2CppVector3 position) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x35807A4))(this, position);
	}
	template <typename T = void> T JumpOffAircraft() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3581B9C))(this);
	}
	template <typename T = void> T CheckSkydivingPreconditionsAndStart() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3581F70))(this);
	}
	template <typename T = void> T RestParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3583BB8))(this);
	}
	template <typename T = void> T BeginSkydivingOrSkyFly_Impl() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3582F8C))(this);
	}
	template <typename T = void> T PendantCallEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3585C1C))(this);
	}
	template <typename T = void> T BeforeEndSkydivingResetParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3585F3C))(this);
	}
	template <typename T = void> T AfterEndSkydivingResetParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358612C))(this);
	}
	template <typename T = void> T EndSkydiving(bool forceEnd, bool doFall, bool changeState) {
		return ((T (*)(SkydivingPhysics*, bool, bool, bool))(Il2CppBase() + 0x357E784))(this, forceEnd, doFall, changeState);
	}
	template <typename T = void> T NotifyLocalPawnEndSkyDiving() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35888B8))(this);
	}
	template <typename T = bool> T CheckMinSkydivingTime(float scaleFactor) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x35889C8))(this, scaleFactor);
	}
	template <typename T = void> T TimerReturnNormal() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3588B04))(this);
	}
	template <typename T = void> T ProcessEnterWater() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3588BF0))(this);
	}
	template <typename T = bool> T CheckGroundPointValid(Il2CppVector3 normal, Il2CppString* hitColliderName) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x3588D84))(this, normal, hitColliderName);
	}
	template <typename T = void> T CheckLandOnGround(uintptr_t hit) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3588F10))(this, hit);
	}
	template <typename T = void> T ResetToFlyStatus() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35892F8))(this);
	}
	template <typename T = void> T PreloadRes() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35896E8))(this);
	}
	template <typename T = void> T InitFollowRotParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3589BC8))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x357D14C))(this, owner);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358A484))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358A964))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358AB64))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x358AC5C))(this, deltaTime);
	}
	template <typename T = bool> T ShouldStopIK() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358B058))(this);
	}
	template <typename T = bool> T ShouldStopServerMove() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358B130))(this);
	}
	template <typename T = float> T GetForceMoveDistance() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358B2D4))(this);
	}
	template <typename T = void> T ShowPawnRelatedObjects(bool bShow) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3584F04))(this, bShow);
	}
	template <typename T = void> T RequestSkydivingPhase(uint32_t val) {
		return ((T (*)(SkydivingPhysics*, uint32_t))(Il2CppBase() + 0x358B3BC))(this, val);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358B4E0))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358B830))(this);
	}
	template <typename T = void> T CalcInitPawnAndCamRot(uintptr_t* pawnRot, uintptr_t* camRot) {
		return ((T (*)(SkydivingPhysics*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x358BB80))(this, pawnRot, camRot);
	}
	template <typename T = void> T CalcSkydivingCamera_Spectating(uintptr_t outCamLoc, uintptr_t outCamRot) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t))(Il2CppBase() + 0x358CFC8))(this, outCamLoc, outCamRot);
	}
	template <typename T = void> T CalcSkydivingCamera(uintptr_t outCamLoc, uintptr_t outCamRot) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t))(Il2CppBase() + 0x358D314))(this, outCamLoc, outCamRot);
	}
	template <typename T = void> T LerpInitCamera(uintptr_t setCamRot, uintptr_t* outCamLoc, uintptr_t* outCamRot, float rate) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t*, uintptr_t*, float))(Il2CppBase() + 0x358ED60))(this, setCamRot, outCamLoc, outCamRot, rate);
	}
	template <typename T = bool> T CalcInitCameraAnim(uintptr_t setCamRot, uintptr_t outCamLoc, uintptr_t outCamRot) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x358E814))(this, setCamRot, outCamLoc, outCamRot);
	}
	template <typename T = bool> T CalcParachuteCameraAnim(uintptr_t setCamRot, uintptr_t outCamLoc, uintptr_t outCamRot) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x358EAD8))(this, setCamRot, outCamLoc, outCamRot);
	}
	template <typename T = Il2CppVector3> T GetLookTarget() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358EF34))(this);
	}
	template <typename T = void> T CalcSkydivingCamera_Inner(uintptr_t setCamRot, uintptr_t* outCamLoc, uintptr_t* outCamRot, float InitCamDist) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t*, uintptr_t*, float))(Il2CppBase() + 0x358CBFC))(this, setCamRot, outCamLoc, outCamRot, InitCamDist);
	}
	template <typename T = void> T UpdateSkydivingCameraRot() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358E208))(this);
	}
	template <typename T = void> T UpdateFollowSkydivingCameraRot() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358DCF8))(this);
	}
	template <typename T = void> T UpdateSkydivingCameraRotInNonBattleArea() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358E5E0))(this);
	}
	template <typename T = Il2CppVector3> T CalcNonBattleRotate() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F1DC))(this);
	}
	template <typename T = float> T get_ParachuteForceOpenHeight() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F508))(this);
	}
	template <typename T = uintptr_t> T get_VelocityConfig() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F510))(this);
	}
	template <typename T = void> T set_VelocityConfig(uintptr_t value) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x358F518))(this, value);
	}
	template <typename T = float> T get_AccelerationForward() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F520))(this);
	}
	template <typename T = float> T get_MaxVelocityForward() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F574))(this);
	}
	template <typename T = float> T get_AccelerationForwardSpeedUp() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F5C8))(this);
	}
	template <typename T = float> T get_MaxVelocityForwardSpeedUp() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F61C))(this);
	}
	template <typename T = float> T get_MaxVelocityForwardSpeedDown() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F670))(this);
	}
	template <typename T = float> T get_Gravity() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F6C4))(this);
	}
	template <typename T = float> T get_GravityMax() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F6F0))(this);
	}
	template <typename T = float> T get_CamMaxAngle() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F71C))(this);
	}
	template <typename T = float> T get_CamMinAngle() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F770))(this);
	}
	template <typename T = float> T get_InitVelocity() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F7C4))(this);
	}
	template <typename T = void> T InitSkyFlyParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3583E14))(this);
	}
	template <typename T = void> T InitFollowParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3583F3C))(this);
	}
	template <typename T = void> T SetParachuteParams() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F7F4))(this);
	}
	template <typename T = void> T ProcessAircraftOnBegin() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3581DAC))(this);
	}
	template <typename T = void> T OnLocalOrViewTargetPawnBegin() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35855FC))(this);
	}
	template <typename T = void> T OnLocalPlayerSkydivingBegin() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35853C4))(this);
	}
	template <typename T = void> T PlayLandSound(Il2CppString* state) {
		return ((T (*)(SkydivingPhysics*, Il2CppString*))(Il2CppBase() + 0x358FA0C))(this, state);
	}
	template <typename T = void> T TryUseMainWeapon(bool isImmedSwitchWeapon) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x358FDC0))(this, isImmedSwitchWeapon);
	}
	template <typename T = void> T ProcessAircraftOnEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3590230))(this);
	}
	template <typename T = void> T RestoreSpectateViewType() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358852C))(this);
	}
	template <typename T = void> T OnLocalOrViewTargetPawnEnd(bool sound) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3586448))(this, sound);
	}
	template <typename T = void> T OnLocalPlayerSkydivingEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3586850))(this);
	}
	template <typename T = void> T OnLocalPlayerReturnNormal() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359071C))(this);
	}
	template <typename T = void> T LocalPlayerLandCameraEffect() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3590420))(this);
	}
	template <typename T = void> T ProcessBlurEffect(float finalVelocityY) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x35907E4))(this, finalVelocityY);
	}
	template <typename T = void> T ProcessFogEffect() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3590A78))(this);
	}
	template <typename T = void> T UpdatePawnRotationAnim(float right) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x3590C24))(this, right);
	}
	template <typename T = void> T UpdatePawnRotation(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x3590DE8))(this, deltaTime);
	}
	template <typename T = float> T AngleRemap(float value, float oldMin, float oldMax, float newMin, float newMax) {
		return ((T (*)(SkydivingPhysics*, float, float, float, float, float))(Il2CppBase() + 0x359170C))(this, value, oldMin, oldMax, newMin, newMax);
	}
	template <typename T = void> T GetCoeffByCameraRot(uintptr_t* horizontal, uintptr_t* vertical) {
		return ((T (*)(SkydivingPhysics*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3591898))(this, horizontal, vertical);
	}
	template <typename T = void> T GetDirByCameraRot(uintptr_t* horizontal, uintptr_t* right) {
		return ((T (*)(SkydivingPhysics*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3591B80))(this, horizontal, right);
	}
	template <typename T = void> T UpdateVelocityGravity(float deltaTime, float scale) {
		return ((T (*)(SkydivingPhysics*, float, float))(Il2CppBase() + 0x3591D18))(this, deltaTime, scale);
	}
	template <typename T = void> T UpdateSkydivingStage(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x3591ECC))(this, deltaTime);
	}
	template <typename T = bool> T CheckCrossTerrain() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3592294))(this);
	}
	template <typename T = bool> T CheckControllerCrossTerrainWhenLand() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35928A8))(this);
	}
	template <typename T = void> T CheckOpenParachute(uintptr_t hitInfo) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3592F30))(this, hitInfo);
	}
	template <typename T = bool> T ProcessSlope(uintptr_t hitInfo, uintptr_t isHitInfoValid, uintptr_t velocityFinal, uintptr_t deltaMove, float deltaTime) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3593510))(this, hitInfo, isHitInfoValid, velocityFinal, deltaMove, deltaTime);
	}
	template <typename T = bool> T CheckHitHelicopter(uintptr_t hitInfo) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3593704))(this, hitInfo);
	}
	template <typename T = void> T TriggerLand() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35939E0))(this);
	}
	template <typename T = bool> T ProcessFallTerrain(uintptr_t velocityFinal, uintptr_t deltaMove, float deltaTime) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3593D90))(this, velocityFinal, deltaMove, deltaTime);
	}
	template <typename T = void> T ProcessVelocity(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x3594B74))(this, deltaTime);
	}
	template <typename T = bool> T ProcessSided() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3595218))(this);
	}
	template <typename T = void> T Move(Il2CppVector3 deltaMove) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x3595650))(this, deltaMove);
	}
	template <typename T = void> T SetPosition(Il2CppVector3 pos) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x357E4F8))(this, pos);
	}
	template <typename T = Il2CppVector3> T GetMoveObjPosition() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3595DB4))(this);
	}
	template <typename T = void> T DelaySetRotation(Il2CppQuaternion rot) {
		return ((T (*)(SkydivingPhysics*, Il2CppQuaternion))(Il2CppBase() + 0x3595F3C))(this, rot);
	}
	template <typename T = void> T SetRotation(Il2CppQuaternion rot) {
		return ((T (*)(SkydivingPhysics*, Il2CppQuaternion))(Il2CppBase() + 0x3581598))(this, rot);
	}
	template <typename T = Il2CppQuaternion> T GetRotation() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35949EC))(this);
	}
	template <typename T = void> T OnSkydivingIsFollowChanged() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359609C))(this);
	}
	template <typename T = void> T ProcessPhysics(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x35961F4))(this, deltaTime);
	}
	template <typename T = void> T SetTeammatePositionAndRotation() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3597128))(this);
	}
	template <typename T = void> T PushSkydivingAnim() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3596B30))(this);
	}
	template <typename T = void> T OpenWingsuit() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3584C20))(this);
	}
	template <typename T = void> T CloseWingsuit(bool forceDestory) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3587DF0))(this, forceDestory);
	}
	template <typename T = void> T CloseParachute() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3588290))(this);
	}
	template <typename T = void> T OpenParachuteImp() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35977A8))(this);
	}
	template <typename T = void> T OpenParachute(bool isAuto) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3584010))(this, isAuto);
	}
	template <typename T = void> T HideSkydivingAttachments() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35948FC))(this);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3597CEC))(this, isRelevant);
	}
	template <typename T = void> T SetClientRelevant(bool isRelevant) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3597FB8))(this, isRelevant);
	}
	template <typename T = bool> T CheckCanCreateAssetCallBack(uintptr_t pendant) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x359823C))(this, pendant);
	}
	template <typename T = void> T ClearMoveGameObject() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3586280))(this);
	}
	template <typename T = void> T OnPendantMoveObjectCreate() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35984AC))(this);
	}
	template <typename T = void> T OnPendantAnimAssetReady(int32_t id, uintptr_t obj) {
		return ((T (*)(SkydivingPhysics*, int32_t, uintptr_t))(Il2CppBase() + 0x3598EC8))(this, id, obj);
	}
	template <typename T = Il2CppVector3> T GetLocalPosition() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3595C40))(this);
	}
	template <typename T = void> T OnPendantAnimAssetReadyImp(uintptr_t pendantMoveObject) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3599360))(this, pendantMoveObject);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSkydivingRenderers() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3599A28))(this);
	}
	template <typename T = void> T BindCallBack(uintptr_t pendant) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3599B50))(this, pendant);
	}
	template <typename T = void> T ServerCallOpenParachute(bool isOpen) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x3599D74))(this, isOpen);
	}
	template <typename T = void> T BindWingSuitCam() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358F8E0))(this);
	}
	template <typename T = void> T DelayCopyAnimValue(uintptr_t pendant) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x3599F14))(this, pendant);
	}
	template <typename T = void> T CopyAnimValue(uintptr_t pendant) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x359A060))(this, pendant);
	}
	template <typename T = void> T PendantDestroy() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x358A6D4))(this);
	}
	template <typename T = float> T get_LerpInterval() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359A1F8))(this);
	}
	template <typename T = void> T SimulateSkydivingSelfImp(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x359A254))(this, deltaTime);
	}
	template <typename T = void> T ResetLogicFrame() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359BC90))(this);
	}
	template <typename T = void> T SimulateSkydivingSelf(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x359BDE8))(this, deltaTime);
	}
	template <typename T = void> T SimulateSkydiving(uintptr_t moveData, float deltaTime) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, float))(Il2CppBase() + 0x359C138))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateUnRecentlySkydiving(uintptr_t moveData) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x359D304))(this, moveData);
	}
	template <typename T = void> T SimulateSkydivingServer(uintptr_t moveData, float deltaTime) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, float))(Il2CppBase() + 0x359CF74))(this, moveData, deltaTime);
	}
	template <typename T = void> T RefreshSyncData(uintptr_t moveData) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x359DB40))(this, moveData);
	}
	template <typename T = void> T PushMoveDataToTeammate(uintptr_t moveData, bool force) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, bool))(Il2CppBase() + 0x359DC44))(this, moveData, force);
	}
	template <typename T = Il2CppVector3> T CalcSyncPosition(Il2CppVector3 pos) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x359DF1C))(this, pos);
	}
	template <typename T = Il2CppQuaternion> T CalcSyncRotation(Il2CppVector3 syncRotationEuler) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x359D790))(this, syncRotationEuler);
	}
	template <typename T = void> T SetSimulatePosition(Il2CppVector3 pos) {
		return ((T (*)(SkydivingPhysics*, Il2CppVector3))(Il2CppBase() + 0x359E094))(this, pos);
	}
	template <typename T = void> T SetSyncDataForce(uintptr_t moveData) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x359E2F4))(this, moveData);
	}
	template <typename T = void> T SetSyncData(uintptr_t moveData) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x35986C4))(this, moveData);
	}
	template <typename T = void> T ProcessMoveData(uintptr_t moveData, uintptr_t* needReturn) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x359EDA4))(this, moveData, needReturn);
	}
	template <typename T = void> T SimulateMove(uintptr_t moveData, float deltaTime) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, float))(Il2CppBase() + 0x359D944))(this, moveData, deltaTime);
	}
	template <typename T = void> T SimulateMoveImp(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x359B00C))(this, deltaTime);
	}
	template <typename T = void> T SimulateRotation() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359FD1C))(this);
	}
	template <typename T = void> T SimulateLandStart() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359F94C))(this);
	}
	template <typename T = void> T SimulateSkydivingEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x3587804))(this);
	}
	template <typename T = bool> T CheckLeaderAndTeammate() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359D1FC))(this);
	}
	template <typename T = bool> T CheckFollowAndTeammate() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x359CE6C))(this);
	}
	template <typename T = void> T ForeachFollowerPawnOperate(void* operate, bool needCheckLeaderAndTeamMate) {
		return ((T (*)(SkydivingPhysics*, void*, bool))(Il2CppBase() + 0x35973DC))(this, operate, needCheckLeaderAndTeamMate);
	}
	template <typename T = void> T ResetTransferSkydivingAnim() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A04EC))(this);
	}
	template <typename T = void> T TransferSkydivingAnimImp(uintptr_t data) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x35A07B8))(this, data);
	}
	template <typename T = void> T TransferSkydivingAnim(uintptr_t data) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x35A0DB8))(this, data);
	}
	template <typename T = void> T SimulateSkydivingAnim(float deltaTime) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x359FF28))(this, deltaTime);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(SkydivingPhysics*, uintptr_t, bool))(Il2CppBase() + 0x35A0F9C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A1318))(this);
	}
	template <typename T = void> static T OpenParachutem__0(uintptr_t pawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35A1588))(0, pawn);
	}
	template <typename T = void> T SimulateLandStartm__1() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A15C4))(this);
	}
	template <typename T = void> static T SimulateSkydivingEndm__2(uintptr_t teammate) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35A1880))(0, teammate);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SkydivingPhysics*, uintptr_t))(Il2CppBase() + 0x35A195C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A1964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A196C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A1974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SkydivingPhysics*, float))(Il2CppBase() + 0x35A197C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingStart() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A1984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(SkydivingPhysics*))(Il2CppBase() + 0x35A198C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x35A1994))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetClientRelevant(bool P0) {
		return ((T (*)(SkydivingPhysics*, bool))(Il2CppBase() + 0x35A199C))(this, P0);
	}

};

}
