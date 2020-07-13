#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkydivingPhysicsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkydivingPhysicsData"));
	}

	template <typename T = float> T& Gravity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& GravityMax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Parachute_Max_Open_Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Parachute_Force_Open_Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RotAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Acceleration_Right() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& CamRotAngleSpeed_Right() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Acceleration_Forward() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxVelocity_Forward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Acceleration_Forward_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxVelocity_Forward_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxVelocity_Forward_SpeedDown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Acceleration_Forward_Skyfly() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MaxVelocity_Forward_Skyfly() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Acceleration_Forward_Skyfly_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MaxVelocity_Forward_Skyfly_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& MaxVelocity_Forward_Skyfly_SpeedDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& RotAngleSpeed_Forward() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Skyfly_Velocity_Scale() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& CamOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CamDist() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& CamMaxAngle() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& CamMinAngle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& CamMaxAngle_Skyfly() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& CamMinAngle_Skyfly() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& CamSensitivity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& CamFOV() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& CamFOV_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& CamFOV_Skyfly() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& CamFOV_SpeedUp_Skyfly() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& ForwardAngle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& ForwardAngle_Cam() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& JetPackScale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& WingsuitScale() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& SkydivingTimeScaleInEditor() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& SkydivingOffset() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& SkyflyOffset() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& EasySkyFlyPreLandHeight() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& PreLandHeight() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& PreLandDuration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& ReturnNormalDuration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& TerrainLODHeight() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& PrelandHeightForAudio() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& MinSkydivingTimeLength() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& MinSkyflyTimeLength() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& CamRotAngleSpeed_Right_Wingsuit() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& CamRotAngleSpeed_Right_Parachute() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& Acceleration_Forward_Parachute() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& MaxVelocity_Forward_Parachute() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& Acceleration_Forward_Parachute_SpeedUp() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& MaxVelocity_Forward_Parachute_SpeedUp() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& MaxVelocity_Forward_Parachute_SpeedDown() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& CamOffset_Parachute() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& CamDist_Parachute() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& CamMaxAngle_Parachute() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& CamMinAngle_Parachute() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& CamFOV_Parachute() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& CamFOV_SpeedUp_Parachute() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& BlurMinSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& BlurMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& LandCameraTransitionTime3P() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& LandCameraTransitionTime1P() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& InitWaitTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& InitTotalTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& SkyflyInitTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& FollowOffset() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& FollowCamDist() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& SkyflyInitVelocity() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& SkydivingVelocityDownPower() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& SkydivingTeamRot1() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& SkydivingTeamRot2() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& SkydivingTeamRot3() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& SkydivingTeamOffset1() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& SkydivingTeamOffset2() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& SkydivingTeamOffset3() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& DelayRotationTimeValue() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(SkydivingPhysicsData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39085B8))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(SkydivingPhysicsData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x390A7A8))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
