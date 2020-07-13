#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVehicleHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVehicle_Helicopter"));
	}

	template <typename T = float> T& effectiveHeight() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = float> T& maxTiltPitchAngle() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = float> T& maxTiltRollAngle() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& maxTiltYawAngle() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = float> T& tiltTorqueMultiplier() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rotorList() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = float> T& liftForceAccMultiplier() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = float> T& maxThrustForce() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = Il2CppVector3> T& groundPointOffset() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& thrustCurv() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = float> T& maxAngularSpeed() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = float> T& minAngularSpeed() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = float> T& maxVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = float> T& maxVerticalSpeedDown() {
		return *(T*)((uintptr_t)this + 0x384);
	}
	template <typename T = float> T& minVerticalAccel() {
		return *(T*)((uintptr_t)this + 0x388);
	}
	template <typename T = float> T& dragOnGround() {
		return *(T*)((uintptr_t)this + 0x38C);
	}
	template <typename T = float> T& cameraYawAngle() {
		return *(T*)((uintptr_t)this + 0x390);
	}
	template <typename T = float> T& cameraPitchAngle() {
		return *(T*)((uintptr_t)this + 0x394);
	}
	template <typename T = float> T& cameraMaxPitch() {
		return *(T*)((uintptr_t)this + 0x398);
	}
	template <typename T = float> T& maxCameraRotAngle() {
		return *(T*)((uintptr_t)this + 0x39C);
	}
	template <typename T = float> T& liftForce() {
		return *(T*)((uintptr_t)this + 0x3A0);
	}
	template <typename T = float> T& groundDistance() {
		return *(T*)((uintptr_t)this + 0x3A4);
	}
	template <typename T = bool> T& isInAirPlatform() {
		return *(T*)((uintptr_t)this + 0x3A8);
	}
	template <typename T = float> T& groundPosY() {
		return *(T*)((uintptr_t)this + 0x3AC);
	}
	template <typename T = float> T& lockedHeight() {
		return *(T*)((uintptr_t)this + 0x3B0);
	}
	template <typename T = bool> T& groundHeightLocked() {
		return *(T*)((uintptr_t)this + 0x3B4);
	}
	template <typename T = float> T& accelMultiplier() {
		return *(T*)((uintptr_t)this + 0x3B8);
	}
	template <typename T = float> T& velocityFadeRange() {
		return *(T*)((uintptr_t)this + 0x3BC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& landingCollider() {
		return *(T*)((uintptr_t)this + 0x3C0);
	}
	template <typename T = Il2CppString*> T& landingColliderNamePrefix() {
		return *(T*)((uintptr_t)this + 0x3C4);
	}
	template <typename T = uintptr_t> T& landingColliderBounds() {
		return *(T*)((uintptr_t)this + 0x3C8);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x3E0);
	}
	template <typename T = float> T& groundThreshold() {
		return *(T*)((uintptr_t)this + 0x3E4);
	}
	template <typename T = uintptr_t> T& groundEffect() {
		return *(T*)((uintptr_t)this + 0x3E8);
	}
	template <typename T = uintptr_t> T& waterEffect() {
		return *(T*)((uintptr_t)this + 0x3EC);
	}
	template <typename T = uintptr_t> T& groundObject() {
		return *(T*)((uintptr_t)this + 0x3F0);
	}
	template <typename T = float> T& groundEffectMaxHeight() {
		return *(T*)((uintptr_t)this + 0x3F4);
	}
	template <typename T = float> T& brokenMeshLifeSpan() {
		return *(T*)((uintptr_t)this + 0x3F8);
	}
	template <typename T = uintptr_t> T& wingCollider() {
		return *(T*)((uintptr_t)this + 0x3FC);
	}
	template <typename T = bool> T& onGround_() {
		return *(T*)((uintptr_t)this + 0x400);
	}
	template <typename T = uintptr_t> T& helicopterAudioComp() {
		return *(T*)((uintptr_t)this + 0x404);
	}
	template <typename T = uintptr_t> T& lightEffect() {
		return *(T*)((uintptr_t)this + 0x408);
	}
	template <typename T = uintptr_t> T& backLightFxSocket() {
		return *(T*)((uintptr_t)this + 0x40C);
	}
	template <typename T = uintptr_t> T& particleLodSetting() {
		return *(T*)((uintptr_t)this + 0x410);
	}
	template <typename T = uintptr_t> T& helicopterResourceConfig() {
		return *(T*)((uintptr_t)this + 0x414);
	}
	template <typename T = uintptr_t> T& propellerEffectControll() {
		return *(T*)((uintptr_t)this + 0x418);
	}
	template <typename T = uintptr_t> T& engineLampRoot() {
		return *(T*)((uintptr_t)this + 0x41C);
	}
	template <typename T = uintptr_t> T& interferRoot() {
		return *(T*)((uintptr_t)this + 0x420);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& interferFxs() {
		return *(T*)((uintptr_t)this + 0x424);
	}
	template <typename T = float> T& interferRadius() {
		return *(T*)((uintptr_t)this + 0x428);
	}
	template <typename T = float> T& interferDurationTime() {
		return *(T*)((uintptr_t)this + 0x42C);
	}
	template <typename T = float> T& interferSuccPercent() {
		return *(T*)((uintptr_t)this + 0x430);
	}
	template <typename T = Il2CppVector3> T& interferOffset() {
		return *(T*)((uintptr_t)this + 0x434);
	}
	template <typename T = float> T& driverLeftTime() {
		return *(T*)((uintptr_t)this + 0x440);
	}
	template <typename T = Il2CppVector3> T& desiredAcc() {
		return *(T*)((uintptr_t)this + 0x444);
	}
	template <typename T = Il2CppQuaternion> T& desiredQuatDebug() {
		return *(T*)((uintptr_t)this + 0x450);
	}
	template <typename T = float> T& yawRotClamp() {
		return *(T*)((uintptr_t)this + 0x460);
	}
	template <typename T = float> T& lastLiftForce() {
		return *(T*)((uintptr_t)this + 0x464);
	}
	template <typename T = bool> T& isAlarming() {
		return *(T*)((uintptr_t)this + 0x468);
	}
	template <typename T = float> T& nextUpdateHeightTime() {
		return *(T*)((uintptr_t)this + 0x46C);
	}
	template <typename T = float> T& kLocalPlayerUpdateHeightInterval() {
		return *(T*)((uintptr_t)this + 0x470);
	}
	template <typename T = float> T& kUpdateHeightInterval() {
		return *(T*)((uintptr_t)this + 0x474);
	}
	template <typename T = float> T& traceStartOffsetY() {
		return *(T*)((uintptr_t)this + 0x478);
	}
	template <typename T = float> T& subMergeDistance() {
		return *(T*)((uintptr_t)this + 0x47C);
	}
	template <typename T = Il2CppVector3> T& freeCamRot() {
		return *(T*)((uintptr_t)this + 0x480);
	}
	template <typename T = float> T& camPosFollowForce() {
		return *(T*)((uintptr_t)this + 0x48C);
	}
	template <typename T = float> T& camRotFollowForce() {
		return *(T*)((uintptr_t)this + 0x490);
	}
	template <typename T = bool> T& camLerp() {
		return *(T*)((uintptr_t)this + 0x494);
	}
	template <typename T = Il2CppQuaternion> T& camRot() {
		return *(T*)((uintptr_t)this + 0x498);
	}
	template <typename T = Il2CppVector3> T& lastServerTargetPos() {
		return *(T*)((uintptr_t)this + 0x4A8);
	}
	template <typename T = float> T& interferEffectTime() {
		return *(T*)((uintptr_t)this + 0x4B4);
	}
	template <typename T = float> T& bumpForceMultiplier() {
		return *(T*)((uintptr_t)this + 0x4B8);
	}
	template <typename T = float> T& nextBumpTime() {
		return *(T*)((uintptr_t)this + 0x4BC);
	}
	template <typename T = uintptr_t> T& brokenMesh() {
		return *(T*)((uintptr_t)this + 0x4C0);
	}
	template <typename T = uintptr_t> static T& s_VehicleDebugger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_EnableDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x4C4);
	}
	template <typename T = bool> T& m_AlwaysDebugVehicle() {
		return *(T*)((uintptr_t)this + 0x4C5);
	}
	template <typename T = int32_t> static T& s_LastFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleResourceConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcLandingColliderBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDriverLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAlarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNetRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGroundHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFollowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedMoveVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEngineLampRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInterferEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInterferEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToDriveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCameraMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLocalAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLandingCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrokenMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPrevDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroundStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMoveControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExtraPushVel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanHitPawnAway() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDrawDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllbehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawDebugMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}

	template <typename T = bool> T get_onGround() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8D8D8))(this);
	}
	template <typename T = void> T set_onGround(bool value) {
		return ((T (*)(PhysicsVehicleHelicopter*, bool))(Il2CppBase() + 0x1D8D8E0))(this, value);
	}
	template <typename T = bool> T get_EnableDetailedBehavior() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8DA28))(this);
	}
	template <typename T = uintptr_t> T get_helicopterAudioComp() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8DA4C))(this);
	}
	template <typename T = void> T set_helicopterAudioComp(uintptr_t value) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D8DA54))(this, value);
	}
	template <typename T = uintptr_t> T GetVehicleResourceConfig() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8DA5C))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(PhysicsVehicleHelicopter*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D7DB08))(this, actorID, vehicleType);
	}
	template <typename T = void> T PreLoadResource() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8DF20))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(PhysicsVehicleHelicopter*, int32_t, uintptr_t))(Il2CppBase() + 0x1D8E0F4))(this, assetID, CallBackData);
	}
	template <typename T = void> T CalcLandingColliderBounds() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8DB2C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D88C44))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PhysicsVehicleHelicopter*, float))(Il2CppBase() + 0x1D88810))(this, deltaTime);
	}
	template <typename T = void> T RefreshDriverLeftTime() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8E5AC))(this);
	}
	template <typename T = void> T StartAlarm(bool isStart) {
		return ((T (*)(PhysicsVehicleHelicopter*, bool))(Il2CppBase() + 0x1D8EA90))(this, isStart);
	}
	template <typename T = void> T SetLockHeight() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8E430))(this);
	}
	template <typename T = void> T SetNetRole(uintptr_t newRole) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D8ED88))(this, newRole);
	}
	template <typename T = void> T UpdateGroundHeight() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D86CFC))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D80C18))(this, pawn, offPosition);
	}
	template <typename T = void> T OnUpdateRotation(Il2CppVector3 rotAngle) {
		return ((T (*)(PhysicsVehicleHelicopter*, Il2CppVector3))(Il2CppBase() + 0x1D8EE88))(this, rotAngle);
	}
	template <typename T = void> T CalcFollowCamera(uintptr_t camera, uintptr_t* cam_pos, uintptr_t* cam_rot) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D87DB0))(this, camera, cam_pos, cam_rot);
	}
	template <typename T = void> T SimulatedMoveVehicle(Il2CppVector3 delta, bool isForceMove) {
		return ((T (*)(PhysicsVehicleHelicopter*, Il2CppVector3, bool))(Il2CppBase() + 0x1D8F370))(this, delta, isForceMove);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D88664))(this, pawn, seat);
	}
	template <typename T = void> T ShowEngineLampRoot(bool isShow) {
		return ((T (*)(PhysicsVehicleHelicopter*, bool))(Il2CppBase() + 0x1D8DDD0))(this, isShow);
	}
	template <typename T = void> T StartVehicleSkill() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8FEF4))(this);
	}
	template <typename T = void> T RefreshInterferEffect() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D901D8))(this);
	}
	template <typename T = void> T ShowInterferEffect(bool isShow) {
		return ((T (*)(PhysicsVehicleHelicopter*, bool))(Il2CppBase() + 0x1D8FFD8))(this, isShow);
	}
	template <typename T = void> T FadeToDriveCamera() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8FD54))(this);
	}
	template <typename T = void> T ChangeCameraMode() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D9037C))(this);
	}
	template <typename T = void> T AdjustLocalAimRotation(uintptr_t pawn, uintptr_t seatIdx) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D90450))(this, pawn, seatIdx);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D90680))(this, pawn, newSeat);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D89DA8))(this, collision);
	}
	template <typename T = bool> T IsLandingCollider(uintptr_t collider) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D90848))(this, collider);
	}
	template <typename T = void> T OnCollisionStay(uintptr_t collision) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D909D0))(this, collision);
	}
	template <typename T = void> T OnCollisionExit(uintptr_t collision) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D90DB8))(this, collision);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(PhysicsVehicleHelicopter*, float))(Il2CppBase() + 0x1D90E88))(this, deltaTime);
	}
	template <typename T = void> T PlayExplode() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D9120C))(this);
	}
	template <typename T = void> T ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8A09C))(this);
	}
	template <typename T = void> T ClearPrevDamageEffect() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D913D0))(this);
	}
	template <typename T = void> T OnGroundStateChange(bool onGround) {
		return ((T (*)(PhysicsVehicleHelicopter*, bool))(Il2CppBase() + 0x1D8D918))(this, onGround);
	}
	template <typename T = void> T UpdateMoveControll(float throttle, float steering, float climbing) {
		return ((T (*)(PhysicsVehicleHelicopter*, float, float, float))(Il2CppBase() + 0x1D7DEE8))(this, throttle, steering, climbing);
	}
	template <typename T = Il2CppVector3> T GetExtraPushVel(uintptr_t pawn) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D915BC))(this, pawn);
	}
	template <typename T = bool> T CanHitPawnAway() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D91970))(this);
	}
	template <typename T = void> T ToggleDrawDebug() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D91A5C))(this);
	}
	template <typename T = float> T GetDistanceToGround() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D8E9C0))(this);
	}
	template <typename T = void> T StopAllbehavior() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D91D48))(this);
	}
	template <typename T = void> T ResetResource() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D91EA4))(this);
	}
	template <typename T = void> T DrawDebugMsg() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D923C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleResourceConfig() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D92494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, uint32_t, uintptr_t))(Il2CppBase() + 0x1D9249C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PreLoadResource() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D924A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadComplete(int32_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, int32_t, uintptr_t))(Il2CppBase() + 0x1D924AC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D924B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, float))(Il2CppBase() + 0x1D924BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetNetRole(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D924C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D924CC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRotation(Il2CppVector3 P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, Il2CppVector3))(Il2CppBase() + 0x1D924F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CalcFollowCamera(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1D92510))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedMoveVehicle(Il2CppVector3 P0, bool P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, Il2CppVector3, bool))(Il2CppBase() + 0x1D92530))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D92554))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartVehicleSkill() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D9255C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustLocalAimRotation(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D92564))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeSeat(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D9256C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnCollisionEnter(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D92574))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickEffect(float P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, float))(Il2CppBase() + 0x1D9257C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExplode() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D92584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReplaceBrokenMesh() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D9258C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearPrevDamageEffect() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D92594))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMoveControll(float P0, float P1, float P2) {
		return ((T (*)(PhysicsVehicleHelicopter*, float, float, float))(Il2CppBase() + 0x1D9259C))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetExtraPushVel(uintptr_t P0) {
		return ((T (*)(PhysicsVehicleHelicopter*, uintptr_t))(Il2CppBase() + 0x1D925BC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanHitPawnAway() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D925D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ToggleDrawDebug() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D925D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllbehavior() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D925E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetResource() {
		return ((T (*)(PhysicsVehicleHelicopter*))(Il2CppBase() + 0x1D925E8))(this);
	}

};

}
