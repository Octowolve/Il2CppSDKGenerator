#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledVehicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledVehicle"));
	}

	template <typename T = float> T& BrokenWheelAddForce() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& steeringWheel() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& steeringSpeed() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = Il2CppVector3> T& cachedSteeringWheelAngle() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = uintptr_t> T& m_MoveSyncModule() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uintptr_t> T& m_BattleSyncModule() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = bool> T& IsActive() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& m_VehicleType() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = uintptr_t> T& wheeledVehicleMoveState() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = bool> T& m_IsIgnoringCollisionWithAll3PPawns() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = uintptr_t> T& m_LocalPawnPassenger() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = bool> T& m_ShouldPlayDyingEffect() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wheelControllerList() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = bool> T& EnableCOMCurve() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = uintptr_t> T& CenterOfMassCurve() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = bool> T& HighSpeedAniFlag() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = bool> T& InAirAniFlag() {
		return *(T*)((uintptr_t)this + 0x38D);
	}
	template <typename T = float> T& HighSpeedAniSpeed() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = uintptr_t> T& vehicleResourceConfig() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = bool> T& isForceClosePhysicsTick() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = uintptr_t> T& defaultEmission() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = uintptr_t> T& reversingEmission() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = uintptr_t> T& brakeEmission() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = uintptr_t> T& notActiveEmission() {
		return *(T*)((uintptr_t)this + 0x3CC);
	}
	template <typename T = uintptr_t> T& currentEmission() {
		return *(T*)((uintptr_t)this + 0x3DC);
	}
	template <typename T = float> T& limitVelocity() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = Il2CppVector3> T& preRigidbodyPos() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = uintptr_t> T& leftDriverHandBone() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = uintptr_t> T& rightDriverHandBone() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WheelBreakEffects() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WheelRunningEffects() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LightEffects() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BackLightEffects() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BackLightParticleEffects() {
		return *(T*)((uintptr_t)this + 0x414);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& EnterWaterPointList() {
		return *(T*)((uintptr_t)this + 0x418);
	}
	template <typename T = bool> T& bAllowShowEnterWaterEffect() {
		return *(T*)((uintptr_t)this + 0x41C);
	}
	template <typename T = bool> T& m_HasInitRigidbody() {
		return *(T*)((uintptr_t)this + 0x41D);
	}
	template <typename T = float> T& m_DriverLeaveVehicleTime() {
		return *(T*)((uintptr_t)this + 0x420);
	}
	template <typename T = float> T& nextCheckTime() {
		return *(T*)((uintptr_t)this + 0x424);
	}
	template <typename T = float> T& checkStateInterval() {
		return *(T*)((uintptr_t)this + 0x428);
	}
	template <typename T = float> T& checkEmptyVehicleStateInterval() {
		return *(T*)((uintptr_t)this + 0x42C);
	}
	template <typename T = Il2CppVector3> T& passengerHeadPoint() {
		return *(T*)((uintptr_t)this + 0x430);
	}
	template <typename T = bool> T& isPassengerBlocked() {
		return *(T*)((uintptr_t)this + 0x43C);
	}
	template <typename T = bool> T& bCanWheeledVehicleMove() {
		return *(T*)((uintptr_t)this + 0x43D);
	}
	template <typename T = float> T& inAirTime() {
		return *(T*)((uintptr_t)this + 0x440);
	}
	template <typename T = float> T& exhaustInWaterStartTime() {
		return *(T*)((uintptr_t)this + 0x444);
	}
	template <typename T = float> static T& LineCheckHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& currentWaterHeight() {
		return *(T*)((uintptr_t)this + 0x448);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x44C);
	}
	template <typename T = float> T& LastPrintLogTime() {
		return *(T*)((uintptr_t)this + 0x450);
	}
	template <typename T = uintptr_t> T& m_SpringArmComp() {
		return *(T*)((uintptr_t)this + 0x454);
	}
	template <typename T = Il2CppVector3> T& DriverSpringArmRotCache() {
		return *(T*)((uintptr_t)this + 0x458);
	}
	template <typename T = float> T& m_DriverCameraPitchMin() {
		return *(T*)((uintptr_t)this + 0x464);
	}
	template <typename T = float> T& m_DriverCameraPitchMax() {
		return *(T*)((uintptr_t)this + 0x468);
	}
	template <typename T = bool> T& bHasSetWheelRadius() {
		return *(T*)((uintptr_t)this + 0x46C);
	}
	template <typename T = Il2CppVector3> T& velForSound() {
		return *(T*)((uintptr_t)this + 0x470);
	}
	template <typename T = uintptr_t> T& m_NZWheeledMovementComp() {
		return *(T*)((uintptr_t)this + 0x47C);
	}
	template <typename T = float> T& LastRecvPhysicStateTime() {
		return *(T*)((uintptr_t)this + 0x480);
	}
	template <typename T = uintptr_t> T& m_SyncPhysicStateComponent() {
		return *(T*)((uintptr_t)this + 0x484);
	}
	template <typename T = bool> T& ShowVehicleDebug() {
		return *(T*)((uintptr_t)this + 0x488);
	}
	template <typename T = bool> T& m_EnableStandaloneDebugNetSync() {
		return *(T*)((uintptr_t)this + 0x489);
	}
	template <typename T = uintptr_t> T& m_DebugNetSyncShadowVehicle() {
		return *(T*)((uintptr_t)this + 0x48C);
	}
	template <typename T = uintptr_t> T& m_DebugNetSyncMasterVehicle() {
		return *(T*)((uintptr_t)this + 0x490);
	}
	template <typename T = uintptr_t> T& m_ServerVehicleDebugMsg() {
		return *(T*)((uintptr_t)this + 0x494);
	}
	template <typename T = uintptr_t> T& m_PrefabGameObject() {
		return *(T*)((uintptr_t)this + 0x498);
	}
	template <typename T = bool> T& EnablePredictLocation() {
		return *(T*)((uintptr_t)this + 0x49C);
	}
	template <typename T = bool> T& EnableModifyDeltaLocBySweep() {
		return *(T*)((uintptr_t)this + 0x49D);
	}
	template <typename T = bool> T& IsHandBrake() {
		return *(T*)((uintptr_t)this + 0x49E);
	}
	template <typename T = float> T& CurrentLargeRotationRolorence() {
		return *(T*)((uintptr_t)this + 0x4A0);
	}
	template <typename T = float> T& autoDriveSpeed() {
		return *(T*)((uintptr_t)this + 0x4A4);
	}
	template <typename T = bool> T& isAutoDrive() {
		return *(T*)((uintptr_t)this + 0x4A8);
	}
	template <typename T = int32_t> T& autoRouteId() {
		return *(T*)((uintptr_t)this + 0x4AC);
	}
	template <typename T = bool> T& isAutoForward() {
		return *(T*)((uintptr_t)this + 0x4B0);
	}
	template <typename T = float> T& targetThrottle() {
		return *(T*)((uintptr_t)this + 0x4B4);
	}
	template <typename T = float> T& lastForwardSpeed() {
		return *(T*)((uintptr_t)this + 0x4B8);
	}
	template <typename T = uintptr_t> T& AvoidEnchroachDetectLayerMask() {
		return *(T*)((uintptr_t)this + 0x4BC);
	}
	template <typename T = float> T& LastFoundEnroachTime() {
		return *(T*)((uintptr_t)this + 0x4C0);
	}
	template <typename T = float> T& LastDrawDebugInfoTime() {
		return *(T*)((uintptr_t)this + 0x4C4);
	}
	template <typename T = float> T& m_LastCorrectVehicleLocationTime() {
		return *(T*)((uintptr_t)this + 0x4C8);
	}
	template <typename T = float> T& m_LastChangeCOMTime() {
		return *(T*)((uintptr_t)this + 0x4CC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleResourceConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBackLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBackLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnterWaterEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWheelBreakEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNetRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDriverInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrokenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeatingVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAnyPassenger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalDriveOrSeatVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSteerWheel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAtleast_N_WheelsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EngineOutputLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleStateCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPassengerBlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanWheeledVehicleMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubmergeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWaterDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaterDamaged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVehicleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForwardSpeedKPH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllbehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetAValidExitPosForLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateExitPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCenterMass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCOM_LocalPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPredictServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimulatePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSyncToServerLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpringArmRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraTransfrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpCloseCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeMaterialComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetRigidbodyPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWheelBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyServerCollideWithStaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreatePhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroyPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanupVehicleMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAutoDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoDrive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveForwardImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Brake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set1PWheelFriction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AlwaysDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvVehicleSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvVehicleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvForceUpdateVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvVehicleDebugMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInputStateAfterSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysicFixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepUpRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRigidBodyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMovedLocationBlockedBySweep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCorrectVehicleLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRigidBodyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRigidbodyStateFromMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSimulateMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplicationData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendServerMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleCenterOfMass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}

	template <typename T = uintptr_t> T get_m_Rigidbody() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F4E68))(this);
	}
	template <typename T = uintptr_t> T get_CacheRigidbody() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19E8DE0))(this);
	}
	template <typename T = uintptr_t> T get_MoveSyncModule() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19E2F8C))(this);
	}
	template <typename T = uintptr_t> T get_BattleSyncModule() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F4F94))(this);
	}
	template <typename T = bool> T get_GasDown() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F509C))(this);
	}
	template <typename T = uintptr_t> T GetEventProcessor() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F4E70))(this);
	}
	template <typename T = bool> T get_IsIgnoringCollisionWithAll3PPawns() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5178))(this);
	}
	template <typename T = void> T set_IsIgnoringCollisionWithAll3PPawns(bool value) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x19F5180))(this, value);
	}
	template <typename T = uintptr_t> T get_LocalPawnPassenger() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5198))(this);
	}
	template <typename T = bool> T get_ShouldStandingPlayerRotateWithWeapon() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F51A0))(this);
	}
	template <typename T = uintptr_t> T GetVehicleResourceConfig() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F51A8))(this);
	}
	template <typename T = int32_t> T get_WheelCount() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5278))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5280))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5410))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(NZWheeledVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x19F1B44))(this, assetID, CallBackData);
	}
	template <typename T = void> T OpenBackLight(uintptr_t lightColor) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19F55F8))(this, lightColor);
	}
	template <typename T = void> T CloseBackLight() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5B5C))(this);
	}
	template <typename T = void> T UpdateEnterWaterEffect() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F5DB0))(this);
	}
	template <typename T = void> T UpdateEffect() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F64AC))(this);
	}
	template <typename T = uintptr_t> T HideWheelBreakEffect(uintptr_t effect) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19F6E0C))(this, effect);
	}
	template <typename T = void> T InitVehicleRigidbody() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F6F2C))(this);
	}
	template <typename T = void> T SetNetRole(uintptr_t newRole) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19F700C))(this, newRole);
	}
	template <typename T = void> T InitRigidbody() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F7110))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F75B8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19EBFF0))(this);
	}
	template <typename T = float> T get_DriverLeavelVehicleTime() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F788C))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19EB6E0))(this, pawn, offPosition);
	}
	template <typename T = void> T ClearDriverInput() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F7894))(this);
	}
	template <typename T = void> T RefreshVehicleBroken() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F7BA4))(this);
	}
	template <typename T = void> T ReplaceBrokenMesh() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F7CF4))(this);
	}
	template <typename T = bool> T IsSeatingVehicle() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F8020))(this);
	}
	template <typename T = bool> T HasAnyPassenger() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F8250))(this);
	}
	template <typename T = bool> T IsLocalDriveOrSeatVehicle() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F840C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19F114C))(this, deltaTime);
	}
	template <typename T = void> T RefreshSteerWheel(float deltaTime) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19F87B0))(this, deltaTime);
	}
	template <typename T = void> T UpdateLOD() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F8F30))(this);
	}
	template <typename T = bool> T IsAtleast_N_WheelsGrounded() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F90FC))(this);
	}
	template <typename T = float> T EngineOutputLevel() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F92CC))(this);
	}
	template <typename T = bool> T get_canRide() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F9498))(this);
	}
	template <typename T = void> T VehicleStateCheck() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F8620))(this);
	}
	template <typename T = void> T CheckPassengerBlocked() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F9618))(this);
	}
	template <typename T = bool> T isAvailable() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19EDD88))(this);
	}
	template <typename T = void> T CheckVehicleState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F97C8))(this);
	}
	template <typename T = void> T DetectLocalPawn() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F9C1C))(this);
	}
	template <typename T = void> T CheckCanWheeledVehicleMove() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F9E68))(this);
	}
	template <typename T = void> T CheckTurnOver() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19EDC34))(this);
	}
	template <typename T = void> T RefreshSubmergeState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F9CFC))(this);
	}
	template <typename T = void> T CheckWaterDamage() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F98CC))(this);
	}
	template <typename T = void> T OnTurnOver() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA074))(this);
	}
	template <typename T = void> T OnWaterDamaged() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA13C))(this);
	}
	template <typename T = void> T RefreshVehicleState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F94D0))(this);
	}
	template <typename T = float> T GetForwardSpeedKPH() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA2B8))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(NZWheeledVehicle*, uint32_t, uintptr_t))(Il2CppBase() + 0x19EAC78))(this, actorID, vehicleType);
	}
	template <typename T = void> T InitVehicleInfo() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA3A4))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x19FA6AC))(this, isHidden);
	}
	template <typename T = void> T StopAllbehavior() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F39E0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA94C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FAA5C))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FAC04))(this);
	}
	template <typename T = bool> T get_HasBeenStarted() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FADAC))(this);
	}
	template <typename T = bool> T get_JustStarted() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FADCC))(this);
	}
	template <typename T = bool> static T IsValid(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x19FAE24))(0, f);
	}
	template <typename T = bool> static T IsValid_1(Il2CppVector3 v3) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x19FAF28))(0, v3);
	}
	template <typename T = bool> T TryGetAValidExitPosForLocalPlayer(Il2CppArray<uintptr_t>* exitPoints, uintptr_t exitPos, int32_t beginIdx) {
		return ((T (*)(NZWheeledVehicle*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x19FB0C8))(this, exitPoints, exitPos, beginIdx);
	}
	template <typename T = bool> T ValidateExitPos(Il2CppVector3 seatPos, Il2CppVector3 exitPos, float passangerRadius, float passangerHeight, uintptr_t validBottomPos) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3, Il2CppVector3, float, float, uintptr_t))(Il2CppBase() + 0x19FB4B0))(this, seatPos, exitPos, passangerRadius, passangerHeight, validBottomPos);
	}
	template <typename T = void> T ResetCenterMass() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F74C0))(this);
	}
	template <typename T = void> T SetCOM_LocalPos(Il2CppVector3 pos) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x19FBB68))(this, pos);
	}
	template <typename T = float> static T GetPredictServerTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x19E39D0))(0);
	}
	template <typename T = float> T GetSpeed() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FBC8C))(this);
	}
	template <typename T = uintptr_t> T GetDriver() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19E88C0))(this);
	}
	template <typename T = bool> T IsSimulatePhysics() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19E28CC))(this);
	}
	template <typename T = void> T ForceSyncToServerLocation(uintptr_t NewState) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19E7268))(this, NewState);
	}
	template <typename T = void> T AddSpringArmRot(Il2CppVector3 deltaRotation) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x19FBDE4))(this, deltaRotation);
	}
	template <typename T = float> T GetVehicleSpeed() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FC198))(this);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x19FC27C))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T GetCameraTransfrom(uintptr_t* cam_pos, uintptr_t* cam_rot, bool needUpdate) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x19FC3B0))(this, cam_pos, cam_rot, needUpdate);
	}
	template <typename T = void> T LerpCloseCamera(float lerpSpeed, float targetLength, float lerpTime, uintptr_t callback) {
		return ((T (*)(NZWheeledVehicle*, float, float, float, uintptr_t))(Il2CppBase() + 0x19FC598))(this, lerpSpeed, targetLength, lerpTime, callback);
	}
	template <typename T = void> T OnUpdateRotation(Il2CppVector3 rotAngle) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x19FC718))(this, rotAngle);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19F24B4))(this, deltaTime);
	}
	template <typename T = void> T OnChangeMaterialComplete() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FC820))(this);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EB1B8))(this, pawn, seat);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EBAE8))(this, pawn, newSeat);
	}
	template <typename T = void> T ForceSetRigidbodyPos(Il2CppVector3 pos) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x19FC908))(this, pos);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FCA84))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewSprite(uintptr_t spriteType) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19FCBF4))(this, spriteType);
	}
	template <typename T = int32_t> T TacticalRadarViewSpriteDepth(uintptr_t spriteType) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19FCD04))(this, spriteType);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t vehicleInfo) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19FCDDC))(this, vehicleInfo);
	}
	template <typename T = void> T OnWheelBroken(int32_t wheelIndex) {
		return ((T (*)(NZWheeledVehicle*, int32_t))(Il2CppBase() + 0x19FD06C))(this, wheelIndex);
	}
	template <typename T = void> T NotifyServerCollideWithStaticActor(uintptr_t collisionInfo, Il2CppVector3 pushAwayVel) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19FD264))(this, collisionInfo, pushAwayVel);
	}
	template <typename T = uintptr_t> T get_NZWheeledMovementComp() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19ED9B4))(this);
	}
	template <typename T = uintptr_t> T get_SyncPhysicStateComponent() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FD354))(this);
	}
	template <typename T = uintptr_t> T get_ServerVehicleDebugMsg() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FD35C))(this);
	}
	template <typename T = void> T InitVehicleMovement() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA484))(this);
	}
	template <typename T = void> T OnCreatePhysicsState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FA7A0))(this);
	}
	template <typename T = void> T OnDestroyPhysicsState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FD364))(this);
	}
	template <typename T = void> T CleanupVehicleMovement() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FAB3C))(this);
	}
	template <typename T = void> T ResetAutoDrive() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FD510))(this);
	}
	template <typename T = void> T AutoDrive() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F7690))(this);
	}
	template <typename T = void> T MoveForward(float Val) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FD5FC))(this, Val);
	}
	template <typename T = void> T MoveForwardImpl(float Val) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FD740))(this, Val);
	}
	template <typename T = void> T MoveRight(float Val) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FD93C))(this, Val);
	}
	template <typename T = void> T Brake(float Val) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FDA94))(this, Val);
	}
	template <typename T = float> T get_Throttle() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FDC0C))(this);
	}
	template <typename T = float> T get_Steering() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FDCEC))(this);
	}
	template <typename T = void> T SetInput(float inSteering, float inThrottle, bool isBraking) {
		return ((T (*)(NZWheeledVehicle*, float, float, bool))(Il2CppBase() + 0x19FDDCC))(this, inSteering, inThrottle, isBraking);
	}
	template <typename T = void> T SetInput_1(bool isBraking) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x19FE094))(this, isBraking);
	}
	template <typename T = void> T UpdateMoveControll(float throttle, float steering, float climbing) {
		return ((T (*)(NZWheeledVehicle*, float, float, float))(Il2CppBase() + 0x19FE1D0))(this, throttle, steering, climbing);
	}
	template <typename T = void> T Set1PWheelFriction(bool is1P) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x19F79E0))(this, is1P);
	}
	template <typename T = void> T ToggleDrawDebug() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FE320))(this);
	}
	template <typename T = void> T AlwaysDrawDebug() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FE4D0))(this);
	}
	template <typename T = void> T OnRecvVehicleSync(uintptr_t moveData) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19E2A20))(this, moveData);
	}
	template <typename T = void> T OnRecvVehicleInput(uintptr_t moveData) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19E2BA8))(this, moveData);
	}
	template <typename T = void> T OnRecvForceUpdateVehicle(uintptr_t forceUpdateMsg) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19E3C60))(this, forceUpdateMsg);
	}
	template <typename T = void> T OnRecvVehicleDebugMsg(uintptr_t debugMsg) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x19E465C))(this, debugMsg);
	}
	template <typename T = void> T RefreshInputStateAfterSync() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FE614))(this);
	}
	template <typename T = void> T PhysicFixedUpdate(float DeltaTime) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FE7A0))(this, DeltaTime);
	}
	template <typename T = bool> T KeepUpRight() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FF02C))(this);
	}
	template <typename T = bool> T ApplyRigidBodyState(uintptr_t NewState, uintptr_t ErrorCorrection, uintptr_t* OutDeltaPos) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19E94D8))(this, NewState, ErrorCorrection, OutDeltaPos);
	}
	template <typename T = bool> T CheckMovedLocationBlockedBySweep(Il2CppVector3 LastLocation, Il2CppVector3 CurLocation, Il2CppQuaternion CurrRot) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x19FF0FC))(this, LastLocation, CurLocation, CurrRot);
	}
	template <typename T = void> T TickCorrectVehicleLocation() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FEA5C))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x19FF564))(this, shift);
	}
	template <typename T = bool> T GetRigidBodyState(uintptr_t* CurrentState) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t*))(Il2CppBase() + 0x19E75A4))(this, CurrentState);
	}
	template <typename T = void> T ResetServerMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FF738))(this);
	}
	template <typename T = void> T GetRigidbodyStateFromMoveData(uintptr_t* state, uintptr_t moveData) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x19E6F8C))(this, state, moveData);
	}
	template <typename T = void> T GetSimulateMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FF948))(this);
	}
	template <typename T = void> T TickReplicationData(float deltaTime) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x19FFC18))(this, deltaTime);
	}
	template <typename T = void> T SendServerMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19FFECC))(this);
	}
	template <typename T = void> T UpdateVehicleCenterOfMass() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x19F8C40))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleResourceConfig() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A0001C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00024))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A0002C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadComplete(int32_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledVehicle*, int32_t, uintptr_t))(Il2CppBase() + 0x1A00034))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetNetRole(uintptr_t P0) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x1A0003C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitRigidbody() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A0004C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1A0005C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshVehicleBroken() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReplaceBrokenMesh() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x1A00090))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLOD() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00098))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_isAvailable() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckVehicleState() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DetectLocalPawn() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckTurnOver() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTurnOver() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000C0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetForwardSpeedKPH() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledVehicle*, uint32_t, uintptr_t))(Il2CppBase() + 0x1A000D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicleInfo() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x1A000E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllbehavior() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A000F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00100))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetSpeed() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalcFollowCamera(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1A00110))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_GetCameraTransfrom(uintptr_t* P0, uintptr_t* P1, bool P2) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x1A00130))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_LerpCloseCamera(float P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(NZWheeledVehicle*, float, float, float, uintptr_t))(Il2CppBase() + 0x1A00150))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x1A00174))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnChangeMaterialComplete() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A0019C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeSeat(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A001A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ForceSetRigidbodyPos(Il2CppVector3 P0) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x1A001AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDrawGizmos() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A001CC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewSprite(uintptr_t P0) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x1A001D4))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_TacticalRadarViewSpriteDepth(uintptr_t P0) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x1A001DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncVehicleInfo(uintptr_t P0) {
		return ((T (*)(NZWheeledVehicle*, uintptr_t))(Il2CppBase() + 0x1A001E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetInput(float P0, float P1, bool P2) {
		return ((T (*)(NZWheeledVehicle*, float, float, bool))(Il2CppBase() + 0x1A001EC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetInput_1(bool P0) {
		return ((T (*)(NZWheeledVehicle*, bool))(Il2CppBase() + 0x1A0020C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMoveControll(float P0, float P1, float P2) {
		return ((T (*)(NZWheeledVehicle*, float, float, float))(Il2CppBase() + 0x1A00214))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_ToggleDrawDebug() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00234))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AlwaysDrawDebug() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A0023C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_KeepUpRight() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyShift(Il2CppVector3 P0) {
		return ((T (*)(NZWheeledVehicle*, Il2CppVector3))(Il2CppBase() + 0x1A0024C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetServerMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A0026C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetSimulateMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00274))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplicationData(float P0) {
		return ((T (*)(NZWheeledVehicle*, float))(Il2CppBase() + 0x1A0027C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SendServerMoveData() {
		return ((T (*)(NZWheeledVehicle*))(Il2CppBase() + 0x1A00284))(this);
	}

};

}
