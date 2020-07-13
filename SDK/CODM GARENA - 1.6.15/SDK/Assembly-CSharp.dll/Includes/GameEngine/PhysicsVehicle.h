#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle"));
	}

	template <typename T = bool> static T& debug_absoluteServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LLOD() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& nextLLODTickTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Role() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& netAnchor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& rigidBody() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_vehicleType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& vehicleType() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& vehicleTypeMap() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& CameraFocusOffset() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& CameraDistance() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector2> T& CameraAngleLimit() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& CameraDefaultPitch() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& speedCameraDistanceCurv() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& Mass() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& Drag() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& AngularDrag() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& maxAngularSpeedInDegree() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& ChassisCenter() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& ChassisSize() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& CenterOfMass() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& InertiaBoxSize() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& InertiaBoxScale() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& waterDamagePoint() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_UseCameraRotationWhenGetOff() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppQuaternion> T& m_GetOffRotation() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& BoostMultiplier() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& maxSpeedKmPH() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& maxSpeedKmPH_boost() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& m_Bounds() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uint32_t> T& m_SkinID() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& m_IsOutOfMap() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& subBody() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& collisionObject() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& seatProperties() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& seats() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& isRemoteControlled() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& offloadPoints() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& specialOffLoadPoints() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fireColliders() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& audioPlayer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& mCurSpatialAudioEmitter() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& audioComponent() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& engineGearOutput() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& crashTimeout_pawn() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& crashTimeout_world() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& engineOn() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& engineStopMinTime() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& keepupMaxPitch() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& keepupMaxRoll() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& keepupPitchRadius() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& keepupRollRadius() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& keepupSafeCosine() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& keepupEnabled() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& maxSteeringAngle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& currentSteering() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& targetSteering() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& maxSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& _isBoosting() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& MaxFuel() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& _motor() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& UpdateCameraByPhysics() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppVector3> T& passengerCameraOffset() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& vehicleDriverAnimController() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& vehiclePassengerAnimController() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& vehicleBigGunAnimController() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weaponInfos() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& isNeedPassengerCameraCollider() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& DrivColliderData() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& PassengerColliderData() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& _isBraking() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = bool> T& _isReversing() {
		return *(T*)((uintptr_t)this + 0x1F5);
	}
	template <typename T = bool> T& _isHorking() {
		return *(T*)((uintptr_t)this + 0x1F6);
	}
	template <typename T = bool> T& asyncPartLoaded() {
		return *(T*)((uintptr_t)this + 0x1F7);
	}
	template <typename T = bool> T& enableSpawnShadowVehicle() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listPhysicsVolume() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppVector3> T& _3Pvelocity() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppVector3> T& _3PAngularVelocity() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = Il2CppString*> T& exportBinFilePath() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = bool> T& isForceAcc() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& asyncResourceParts() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onVehicleResourcePart() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& damageResourcePart() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = bool> T& m_IsUnderWater() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = Il2CppString*> T& soundBank() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& resourceManager() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uintptr_t> T& skinnedResourceManager() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppList<int32_t>*> T& ignoreTouchVehicleTypes() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = Il2CppQuaternion> T& currentCamRot() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& m_SubMerged() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& m_IsUsingSkill() {
		return *(T*)((uintptr_t)this + 0x251);
	}
	template <typename T = float> T& skillCDTime() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = float> T& currentSkillCDTime() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& skillType() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = float> T& lastUseSkillTime() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& skillNum() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = int32_t> T& currentSkillNum() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& cannonWeaponForceSpeed() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& isNearLocalPawn() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& detectLocalPawnBounds() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& collisionControllers() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> T& m_MeshResource() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = bool> T& weaponLockState() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = uint32_t> T& lockPlayerID() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = Il2CppVector3> T& m_moveControll() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = float> T& m_moveControllExpireTime() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& vehicleState() {
		return *(T*)((uintptr_t)this + 0x2AC);
	}
	template <typename T = float> T& detectLocalPawnTime() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = float> T& detectLocalPawnCDTime() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& collisionEnterTime() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = float> T& tickAudioTime() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& tickAudioCDTime() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& nextMoveDestList() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& destVelocityList() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = Il2CppVector3> T& nextMoveDest() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = Il2CppVector3> T& currentServerPos() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& currentSimVelocity() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& simAcceleration() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& minSimSpeed() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& RotationSyncInterpMultiplier() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& RotationMaxSyncAngle() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = Il2CppQuaternion> T& SimRotation() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& m_NetSyncModule() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bodyMeshOrignal() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WheelsMeshOrignal() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& operationEffect() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& damageEffectConfig() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& damageVehicleConfig() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& currentDamageEffects() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& explosionFx() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = int32_t> T& prevDamageLevel() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& bHasNotifyDrive1() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = bool> T& bHasNotifyDrive2() {
		return *(T*)((uintptr_t)this + 0x32D);
	}
	template <typename T = bool> T& bHasNotifyDrive6() {
		return *(T*)((uintptr_t)this + 0x32E);
	}
	template <typename T = bool> T& bHasNotifyDrive7() {
		return *(T*)((uintptr_t)this + 0x32F);
	}
	template <typename T = bool> T& bHasNotifyDrive8() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = float> T& vehicleCameraLerpMultiplier() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = float> static T& vehicleCameraAutoCenterTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& vehicleCameraAutoCenterMinSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& vehicleCameraAutoCenterTime() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = bool> T& m_IsControled() {
		return *(T*)((uintptr_t)this + 0x33D);
	}
	template <typename T = bool> T& isTurnOver() {
		return *(T*)((uintptr_t)this + 0x33E);
	}
	template <typename T = float> T& lastTeammateGetOffTime() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uint32_t> T& lastTeammateID() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleControlType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleTypeFromTypeID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleTypeToIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleResourceConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleAnimController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReversing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleSpeedKPH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardSpeedKPH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalDriver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmptyVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsyncParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMeshResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterMeshResourceColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsyncPartsComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelLoadAsyncParts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPartSockets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUsingSkillStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncVehicleSkillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmergedChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUnderWaterState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMeshLodGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInertiaTensor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInertiaTensor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSeats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Teleport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToGetExitPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerFireSeatFirePosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasPassenger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isPassengerAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterPhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitPhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExtraPushVel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanHitPawnAway() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPassagerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampPassengerRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampPassengerTargetAniAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPassenegerAniDirMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLocalAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPassengerPlateformState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceGetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstVacantPassengerSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextAvailablePassengerSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnyRiderOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetoffAllRider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBigGunRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBestOffloadPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOffloadPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnVehicleCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSelfCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSeatMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSeatWeaponMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSeatStandMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBigGunVisibleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBigGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LineSuperCircle2DIntersection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepUpRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllbehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCollisionController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNetAnchorTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedMoveVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNetRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRigidbodyKinematic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedCollisionCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitSoundByZombieAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateExplodeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFireVehicleCannon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeMaterialComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBodyMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBodyMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrokenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCurrentDamageEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPrevDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrectPassengerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetRider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWheelDriveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetRigidbodyPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpCloseCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraTransfrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsControled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOcclusionColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AlwaysDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanVehicleMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMiniMapShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLockTargetStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DealWithLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSoundBankLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcVehicleBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateExportInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}

	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758ED8))(this);
	}
	template <typename T = uintptr_t> T get_LLOD() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758EE0))(this);
	}
	template <typename T = bool> T get_EnableDetailedBehavior() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758EE8))(this);
	}
	template <typename T = uintptr_t> T GetVehicleControlType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758EFC))(this);
	}
	template <typename T = uintptr_t> T get_NetRole() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758FCC))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2758FD4))(this);
	}
	template <typename T = uintptr_t> T get_vehicleInfo() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759100))(this);
	}
	template <typename T = bool> T get_InterstedInOriginShift() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759224))(this);
	}
	template <typename T = uintptr_t> static T GetVehicleTypeFromTypeID(int32_t typeId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x275922C))(0, typeId);
	}
	template <typename T = int32_t> T get_VehicleType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27593D8))(this);
	}
	template <typename T = int32_t> T VehicleTypeToIndex(uintptr_t type) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x27593E0))(this, type);
	}
	template <typename T = bool> T get_UseCameraRotationWhenGetOff() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759570))(this);
	}
	template <typename T = void> T set_UseCameraRotationWhenGetOff(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x2759578))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_GetOffRotation() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759580))(this);
	}
	template <typename T = void> T set_GetOffRotation(Il2CppQuaternion value) {
		return ((T (*)(PhysicsVehicle*, Il2CppQuaternion))(Il2CppBase() + 0x2759590))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ChassisPosition() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27595A8))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetCenterPostion() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759658))(this);
	}
	template <typename T = float> T get_CurrentMaxSpeedKmPH() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27596B4))(this);
	}
	template <typename T = uintptr_t> T get_Bounds() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27596E0))(this);
	}
	template <typename T = uint32_t> T get_SkinID() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759AAC))(this);
	}
	template <typename T = void> T set_SkinID(uint32_t value) {
		return ((T (*)(PhysicsVehicle*, uint32_t))(Il2CppBase() + 0x2759AB4))(this, value);
	}
	template <typename T = bool> T get_IsOutOfMap() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759ABC))(this);
	}
	template <typename T = void> T set_IsOutOfMap(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x2759AC4))(this, value);
	}
	template <typename T = float> T get_Steering() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759ACC))(this);
	}
	template <typename T = float> T get_CurrentSteering() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759AD4))(this);
	}
	template <typename T = float> T get_Motor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759ADC))(this);
	}
	template <typename T = Il2CppVector3> T get_PassengerCameraOffset() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759AE4))(this);
	}
	template <typename T = uintptr_t> T GetVehicleResourceConfig() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759F04))(this);
	}
	template <typename T = int32_t> T GetVehicleAnimController(uintptr_t seat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2759FD4))(this, seat);
	}
	template <typename T = Il2CppVector3> T get_CenterOffset() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A13C))(this);
	}
	template <typename T = bool> T get_IsBoosting() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27596D8))(this);
	}
	template <typename T = void> T set_IsBoosting(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275A1A4))(this, value);
	}
	template <typename T = bool> T get_IsBraking() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A1D8))(this);
	}
	template <typename T = void> T SetBrake(bool shouldBrake) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275A1E0))(this, shouldBrake);
	}
	template <typename T = bool> T get_IsReversing() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A2B8))(this);
	}
	template <typename T = void> T SetReversing(bool shouldReversing) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275A2C0))(this, shouldReversing);
	}
	template <typename T = bool> T get_IsHorking() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A398))(this);
	}
	template <typename T = void> T set_IsHorking(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275A3A0))(this, value);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A554))(this);
	}
	template <typename T = uint32_t> T get_VehicleID() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A624))(this);
	}
	template <typename T = Il2CppVector3> T get_Velocity() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A634))(this);
	}
	template <typename T = Il2CppVector3> T get_AngularVelocity() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A69C))(this);
	}
	template <typename T = int32_t> T get_WheelCount() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A704))(this);
	}
	template <typename T = float> T GetSpeed() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A70C))(this);
	}
	template <typename T = float> T GetVehicleSpeedKPH() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275A90C))(this);
	}
	template <typename T = float> T GetForwardSpeedKPH() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AA00))(this);
	}
	template <typename T = bool> T IsLocalDriver() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AB70))(this);
	}
	template <typename T = bool> T IsEmptyVehicle() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AD14))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AE98))(this);
	}
	template <typename T = uintptr_t> T get_Role() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AFA0))(this);
	}
	template <typename T = bool> T get_subMerged() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275AFA8))(this);
	}
	template <typename T = void> T set_subMerged(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275AFB0))(this, value);
	}
	template <typename T = bool> T get_IsUsingSkill() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275B2CC))(this);
	}
	template <typename T = void> T set_IsUsingSkill(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275B2D4))(this, value);
	}
	template <typename T = uintptr_t> T get_MeshResource() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275B318))(this);
	}
	template <typename T = void> T set_MeshResource(uintptr_t value) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x275B320))(this, value);
	}
	template <typename T = void> T SetInput(float inSteering, float inThrottle, bool isBraking) {
		return ((T (*)(PhysicsVehicle*, float, float, bool))(Il2CppBase() + 0x275B328))(this, inSteering, inThrottle, isBraking);
	}
	template <typename T = void> T SetInput_1(bool isBraking) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275B414))(this, isBraking);
	}
	template <typename T = void> T AutoGetOnVehicle(uint32_t PlayerId) {
		return ((T (*)(PhysicsVehicle*, uint32_t))(Il2CppBase() + 0x275B4E4))(this, PlayerId);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(PhysicsVehicle*, uint32_t, uintptr_t))(Il2CppBase() + 0x275B6C8))(this, actorID, vehicleType);
	}
	template <typename T = void> T InitVehicleInfo() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275D0F8))(this);
	}
	template <typename T = void> T SetEventProcessor(bool isAdd) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275D2FC))(this, isAdd);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275D5A0))(this, isHidden);
	}
	template <typename T = void> T SetServerRelevant(bool relevant) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275D7A8))(this, relevant);
	}
	template <typename T = void> T PreLoadResource() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275D89C))(this);
	}
	template <typename T = void> T InitVehicleResource() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275DA88))(this);
	}
	template <typename T = void> T LoadAsyncParts(Il2CppList<uintptr_t>* resourceParts) {
		return ((T (*)(PhysicsVehicle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x275DC28))(this, resourceParts);
	}
	template <typename T = bool> T InitMeshResource(int32_t assetID, uintptr_t socket) {
		return ((T (*)(PhysicsVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x275DFDC))(this, assetID, socket);
	}
	template <typename T = void> T RegisterMeshResourceColliders() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275E37C))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(PhysicsVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x275E4C8))(this, assetID, CallBackData);
	}
	template <typename T = void> T OnLoadAsyncPartsComplete(int32_t assetID, uintptr_t socket) {
		return ((T (*)(PhysicsVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x275EBFC))(this, assetID, socket);
	}
	template <typename T = void> T CancelLoadAsyncParts() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275EF40))(this);
	}
	template <typename T = void> T SetPartSockets(uintptr_t meshResource, Il2CppArray<uintptr_t>* partSockets) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x275F218))(this, meshResource, partSockets);
	}
	template <typename T = void> T OnUsingSkillStateChanged(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275F6F0))(this, value);
	}
	template <typename T = void> T SyncVehicleSkillInfo() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275F7C0))(this);
	}
	template <typename T = void> T StartVehicleSkill() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275FA9C))(this);
	}
	template <typename T = void> T OnSubmergedChanged(bool value) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x275AFE8))(this, value);
	}
	template <typename T = void> T InitUnderWaterState() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275C140))(this);
	}
	template <typename T = void> T RefreshMeshLodGroup() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275FCE0))(this);
	}
	template <typename T = void> T IgnoreCollision(uintptr_t player, bool ignore) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, bool))(Il2CppBase() + 0x275FE8C))(this, player, ignore);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2760068))(this, pawn);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x2760258))(this, value);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27604DC))(this);
	}
	template <typename T = bool> T get_isBroken() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276050C))(this);
	}
	template <typename T = bool> T get_canRide() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276053C))(this);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27606A8))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27606B0))(this);
	}
	template <typename T = uintptr_t> T get_VehicleNetState() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27606B8))(this);
	}
	template <typename T = bool> T IsForward() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2760700))(this);
	}
	template <typename T = void> T InitInertiaTensor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2760944))(this);
	}
	template <typename T = Il2CppVector3> T GetInertiaTensor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2760A8C))(this);
	}
	template <typename T = void> T InitRigidbody() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2760C44))(this);
	}
	template <typename T = void> T InitSeats() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275C3E4))(this);
	}
	template <typename T = void> T UpdateMoveControll(float throttle, float steering, float climbing) {
		return ((T (*)(PhysicsVehicle*, float, float, float))(Il2CppBase() + 0x2761058))(this, throttle, steering, climbing);
	}
	template <typename T = void> T ResetControl() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2761194))(this);
	}
	template <typename T = void> T Teleport(Il2CppVector3 position, Il2CppVector3 velocity, Il2CppQuaternion rotation) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x276128C))(this, position, velocity, rotation);
	}
	template <typename T = uintptr_t> T get_VehicleSelfState() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27614B4))(this);
	}
	template <typename T = bool> T TryToGetExitPos(int32_t seatIdx, uintptr_t pos) {
		return ((T (*)(PhysicsVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x27614BC))(this, seatIdx, pos);
	}
	template <typename T = float> T GetPlayerFireSeatFirePosOffset(uintptr_t inPlayer) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x27615AC))(this, inPlayer);
	}
	template <typename T = bool> T HasPassenger(uint64_t playerID) {
		return ((T (*)(PhysicsVehicle*, uint64_t))(Il2CppBase() + 0x2761684))(this, playerID);
	}
	template <typename T = void> T CheckVehicleState() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27618A0))(this);
	}
	template <typename T = void> T DetectLocalPawn() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2761980))(this);
	}
	template <typename T = bool> T isAvailable() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2761E04))(this);
	}
	template <typename T = bool> T isPassengerAvailable() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2761EE0))(this);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2761FB0))(this, collision);
	}
	template <typename T = void> T OnEnterPhysicsVolume(uintptr_t volume) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276281C))(this, volume);
	}
	template <typename T = void> T OnExitPhysicsVolume(uintptr_t volume) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x27629FC))(this, volume);
	}
	template <typename T = Il2CppVector3> T GetExtraPushVel(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2762BE8))(this, pawn);
	}
	template <typename T = bool> T CanHitPawnAway() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2762CE4))(this);
	}
	template <typename T = void> T OnHitPawn(uintptr_t pawn, Il2CppVector3 hitVelocity, bool isHurt) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x2762DB4))(this, pawn, hitVelocity, isHurt);
	}
	template <typename T = void> T ResetPassagerPosition(uintptr_t pawn, bool is1PView) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, bool))(Il2CppBase() + 0x2763760))(this, pawn, is1PView);
	}
	template <typename T = Il2CppQuaternion> T ClampPassengerRotation(Il2CppQuaternion localAimRot, uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x276398C))(this, localAimRot, pawn);
	}
	template <typename T = float> T ClampPassengerTargetAniAngle(float angle) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x27643CC))(this, angle);
	}
	template <typename T = uintptr_t> T GetPassenegerAniDirMode(float angle) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x27644FC))(this, angle);
	}
	template <typename T = void> T AdjustLocalAimRotation(uintptr_t pawn, uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27645D4))(this, pawn, seatIdx);
	}
	template <typename T = void> T RefreshPassengerPlateformState(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2764B40))(this, pawn, seat);
	}
	template <typename T = void> T ForceGetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2764C78))(this, pawn, seat);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2765630))(this, pawn, seat);
	}
	template <typename T = void> T RefreshLockState() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2766964))(this);
	}
	template <typename T = bool> T CanChangeSeat() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2767638))(this);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27677BC))(this, pawn, newSeat);
	}
	template <typename T = uintptr_t> T GetFirstVacantPassengerSeat() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2768758))(this);
	}
	template <typename T = bool> T get_isFull() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27689CC))(this);
	}
	template <typename T = uintptr_t> T GetNextAvailablePassengerSeat(uintptr_t currentSeat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2768AE0))(this, currentSeat);
	}
	template <typename T = bool> T AnyRiderOnVehicle() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2768DFC))(this);
	}
	template <typename T = void> T GetoffAllRider() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2768F88))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2769154))(this, pawn, offPosition);
	}
	template <typename T = void> T ResetBigGunRoot(uintptr_t weaponInfo) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2768570))(this, weaponInfo);
	}
	template <typename T = Il2CppVector3> T GetBestOffloadPoint(uintptr_t pawn, bool isForceOff) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, bool))(Il2CppBase() + 0x2764EB4))(this, pawn, isForceOff);
	}
	template <typename T = bool> T CheckOffloadPoint(uintptr_t pawn, Il2CppVector3 startPoint, Il2CppVector3 offloadPoint, uintptr_t* adjustedPoint) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x276A6DC))(this, pawn, startPoint, offloadPoint, adjustedPoint);
	}
	template <typename T = bool> T IsOnVehicleCollider(uintptr_t col) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276AFFC))(this, col);
	}
	template <typename T = bool> T IsSelfCollider(uintptr_t col) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276AE74))(this, col);
	}
	template <typename T = uintptr_t> T GetSeat(uintptr_t seat) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276B29C))(this, seat);
	}
	template <typename T = uintptr_t> T GetRider(uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276B3B0))(this, seatIdx);
	}
	template <typename T = uintptr_t> T GetCurrentSeatIndex(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2764020))(this, pawn);
	}
	template <typename T = uintptr_t> T GetCurrentSeatMode(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2759C74))(this, pawn);
	}
	template <typename T = uintptr_t> T GetCurrentSeatWeaponMode(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276B4B0))(this, pawn);
	}
	template <typename T = uintptr_t> T GetSeatProperty(uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x27641AC))(this, seatIdx);
	}
	template <typename T = uintptr_t> T GetCurrentSeatStandMode(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276B638))(this, pawn);
	}
	template <typename T = uintptr_t> T GetSeatMode(uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2764A24))(this, seatIdx);
	}
	template <typename T = uintptr_t> T GetWeaponInfo(int32_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, int32_t))(Il2CppBase() + 0x27682EC))(this, seatIdx);
	}
	template <typename T = uintptr_t> T GetWeaponInfo_1(uintptr_t user) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2759DFC))(this, user);
	}
	template <typename T = void> T RefreshBigGunVisibleState(uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2766E7C))(this, seatIdx);
	}
	template <typename T = void> T RefreshWeaponRotation(uintptr_t weaponUser, bool isForce, Il2CppQuaternion targetQ) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, bool, Il2CppQuaternion))(Il2CppBase() + 0x276B9E8))(this, weaponUser, isForce, targetQ);
	}
	template <typename T = void> T HideBigGun(bool isHide, uintptr_t weaponInfo) {
		return ((T (*)(PhysicsVehicle*, bool, uintptr_t))(Il2CppBase() + 0x276B7C0))(this, isHide, weaponInfo);
	}
	template <typename T = uintptr_t> T get_Driver() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275FA94))(this);
	}
	template <typename T = bool> T get_IsLocalVehicle() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276C174))(this);
	}
	template <typename T = uintptr_t> T get_LocalPawnOnVehicle() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276C2D8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276C46C))(this);
	}
	template <typename T = Il2CppVector3> T LineSuperCircle2DIntersection(float radiusX, float radiusZ, Il2CppVector3 point) {
		return ((T (*)(PhysicsVehicle*, float, float, Il2CppVector3))(Il2CppBase() + 0x276C55C))(this, radiusX, radiusZ, point);
	}
	template <typename T = bool> T KeepUpRight() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276C750))(this);
	}
	template <typename T = void> T DebugInfo() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276CA2C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x276CB64))(this, deltaTime);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x276D288))(this, deltaTime);
	}
	template <typename T = void> T StopAllbehavior() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276D51C))(this);
	}
	template <typename T = void> T ResetResource() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276D9F0))(this);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x276DCF4))(this, deltaTime);
	}
	template <typename T = void> T TickCollisionController() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276D08C))(this);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x276DDC4))(this, deltaTime);
	}
	template <typename T = void> T ResetServerMoveData() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276DF78))(this);
	}
	template <typename T = void> T GetSimulateMoveData() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276E170))(this);
	}
	template <typename T = void> T UpdateNetAnchorTransform(float deltaTime) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x276E494))(this, deltaTime);
	}
	template <typename T = void> T SimulatedMoveVehicle(Il2CppVector3 delta, bool isForceMove) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3, bool))(Il2CppBase() + 0x276EE58))(this, delta, isForceMove);
	}
	template <typename T = void> T UpdateLOD() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276F038))(this);
	}
	template <typename T = void> T SetNetRole(uintptr_t newRole) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276F390))(this, newRole);
	}
	template <typename T = void> T SetRigidbodyKinematic(bool isKinematic) {
		return ((T (*)(PhysicsVehicle*, bool))(Il2CppBase() + 0x276F524))(this, isKinematic);
	}
	template <typename T = bool> T IsNeedCollisionCallback() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276F63C))(this);
	}
	template <typename T = uintptr_t> T get_NetSync() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275FB9C))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276F828))(this, damageInfo);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276F910))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276F918))(this);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276F920))(this, damageInfo);
	}
	template <typename T = void> T PlayHitSoundByZombieAttack(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x277000C))(this, damageInfo);
	}
	template <typename T = void> T SimulateExplodeDamage(uintptr_t damageInfo) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x276FC04))(this, damageInfo);
	}
	template <typename T = void> T StartFireVehicleCannon(Il2CppVector3 dir) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3))(Il2CppBase() + 0x27701A4))(this, dir);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x27703A0))(this, hitObject);
	}
	template <typename T = void> T LoadMaterial(Il2CppString* inMat) {
		return ((T (*)(PhysicsVehicle*, Il2CppString*))(Il2CppBase() + 0x2770580))(this, inMat);
	}
	template <typename T = void> T LoadMaterials(Il2CppArray<uintptr_t>* inMatID) {
		return ((T (*)(PhysicsVehicle*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2770858))(this, inMatID);
	}
	template <typename T = void> T OnLoadMaterials(Il2CppArray<uintptr_t>* arg, uintptr_t inOwner) {
		return ((T (*)(PhysicsVehicle*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2770AC8))(this, arg, inOwner);
	}
	template <typename T = void> T ChangeSkin(uintptr_t skinConf) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x275E954))(this, skinConf);
	}
	template <typename T = void> T SwitchModel(int32_t modelID) {
		return ((T (*)(PhysicsVehicle*, int32_t))(Il2CppBase() + 0x2771718))(this, modelID);
	}
	template <typename T = void> T LoadTexture(int32_t inTexID) {
		return ((T (*)(PhysicsVehicle*, int32_t))(Il2CppBase() + 0x2771100))(this, inTexID);
	}
	template <typename T = void> T ChangeMaterial(Il2CppArray<uintptr_t>* mats) {
		return ((T (*)(PhysicsVehicle*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2770E60))(this, mats);
	}
	template <typename T = void> T ChangeMaterial_1(uintptr_t renderer, Il2CppArray<uintptr_t>* mats, Il2CppList<uintptr_t>* tempArray) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2771868))(this, renderer, mats, tempArray);
	}
	template <typename T = void> T OnChangeMaterialComplete() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2771D18))(this);
	}
	template <typename T = void> T ChangeBodyMesh(int32_t inAssetID) {
		return ((T (*)(PhysicsVehicle*, int32_t))(Il2CppBase() + 0x2771DE0))(this, inAssetID);
	}
	template <typename T = void> T OnChangeBodyMesh(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(PhysicsVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x2771F78))(this, assetID, CallBackData);
	}
	template <typename T = void> T OnVehicleBroken() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x277205C))(this);
	}
	template <typename T = void> T PlayExplode() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27721B0))(this);
	}
	template <typename T = void> T RefreshVehicleBroken() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27723F0))(this);
	}
	template <typename T = void> T ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2772684))(this);
	}
	template <typename T = void> T OnUpdateHealth(float newVal, float oldVal) {
		return ((T (*)(PhysicsVehicle*, float, float))(Il2CppBase() + 0x2760298))(this, newVal, oldVal);
	}
	template <typename T = void> T AddCurrentDamageEffects(int32_t damageLevel) {
		return ((T (*)(PhysicsVehicle*, int32_t))(Il2CppBase() + 0x2772BF0))(this, damageLevel);
	}
	template <typename T = void> T ClearPrevDamageEffect() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2772D98))(this);
	}
	template <typename T = void> T SendServerMoveData() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2772FA8))(this);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t vehicleInfoMsg) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2773148))(this, vehicleInfoMsg);
	}
	template <typename T = void> T CorrectPassengerInfo(Il2CppList<uintptr_t>* oldPassengerInfo) {
		return ((T (*)(PhysicsVehicle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2773DAC))(this, oldPassengerInfo);
	}
	template <typename T = uintptr_t> T GetRider_1() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2773BE4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWheelDriveData() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x277490C))(this);
	}
	template <typename T = void> T ForceSetRigidbodyPos(Il2CppVector3 pos) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3))(Il2CppBase() + 0x27749DC))(this, pos);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2774B00))(this);
	}
	template <typename T = void> T OnUpdateRotation(Il2CppVector3 angles) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3))(Il2CppBase() + 0x2774FD0))(this, angles);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(PhysicsVehicle*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x277564C))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T LerpCloseCamera(float lerpSpeed, float targetLength, float lerpTime, uintptr_t callback) {
		return ((T (*)(PhysicsVehicle*, float, float, float, uintptr_t))(Il2CppBase() + 0x2775CF8))(this, lerpSpeed, targetLength, lerpTime, callback);
	}
	template <typename T = void> T GetCameraTransfrom(uintptr_t* cam_pos, uintptr_t* cam_rot, bool needUpdate) {
		return ((T (*)(PhysicsVehicle*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x2775DEC))(this, cam_pos, cam_rot, needUpdate);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2775F1C))(this);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776070))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27761B0))(this);
	}
	template <typename T = bool> T CheckIsControled() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27762A8))(this);
	}
	template <typename T = void> T UpdateOcclusionColor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276D1C0))(this);
	}
	template <typename T = void> T ForceOffVehicle(uintptr_t type) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2776470))(this, type);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3))(Il2CppBase() + 0x27769A8))(this, shift);
	}
	template <typename T = void> T ToggleDrawDebug() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776C90))(this);
	}
	template <typename T = void> T AlwaysDrawDebug() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776D58))(this);
	}
	template <typename T = void> T CheckTurnOver() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776E20))(this);
	}
	template <typename T = void> T OnTurnOver() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776EE8))(this);
	}
	template <typename T = bool> T CanVehicleMove() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2776FB0))(this);
	}
	template <typename T = uintptr_t> T GetMiniMapShowType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2777080))(this);
	}
	template <typename T = void> T OnLockTargetStateChange(bool lockState, uint32_t playerID) {
		return ((T (*)(PhysicsVehicle*, bool, uint32_t))(Il2CppBase() + 0x2777354))(this, lockState, playerID);
	}
	template <typename T = void> T DealWithLockState(bool lockState, uint32_t playerID) {
		return ((T (*)(PhysicsVehicle*, bool, uint32_t))(Il2CppBase() + 0x2767188))(this, lockState, playerID);
	}
	template <typename T = void> T LoadSoundBank() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x275C7FC))(this);
	}
	template <typename T = void> T ResetSoundBankLoaded(Il2CppString* bankPath) {
		return ((T (*)(PhysicsVehicle*, Il2CppString*))(Il2CppBase() + 0x276D7D0))(this, bankPath);
	}
	template <typename T = void> T UnLoadSoundBank() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x276A124))(this);
	}
	template <typename T = uintptr_t> T CalcVehicleBounds() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2759784))(this);
	}
	template <typename T = void> T GenerateExportInfo(uintptr_t info) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777458))(this, info);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewSprite(uintptr_t spriteType) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777528))(this, spriteType);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777650))(this, spriteType);
	}
	template <typename T = float> static T InitVehiclem__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x277772C))(0, x);
	}
	template <typename T = void> static T DealWithLockStatem__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x277774C))(0);
	}
	template <typename T = bool> T LoadSoundBankm__2(Il2CppString* path) {
		return ((T (*)(PhysicsVehicle*, Il2CppString*))(Il2CppBase() + 0x2777948))(this, path);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x27779FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2777A04))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777A0C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsForward() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2777A14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x2777A1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplicationData(float P0) {
		return ((T (*)(PhysicsVehicle*, float))(Il2CppBase() + 0x2777A24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777A2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777A34))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(PhysicsVehicle*, uintptr_t))(Il2CppBase() + 0x2777A3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PhysicsVehicle*))(Il2CppBase() + 0x2777A44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyShift(Il2CppVector3 P0) {
		return ((T (*)(PhysicsVehicle*, Il2CppVector3))(Il2CppBase() + 0x2777A4C))(this, P0);
	}

};

}
