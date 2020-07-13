#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVehicleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVehicleComponent"));
	}

	template <typename T = Il2CppString*> static T& RIG_NECK_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AnimatorAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CurrentSeatIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CurrentSeatMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsReachOut() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_InReachOutTransition() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& m_ReachOutTransitionCoroutine() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_InBackToSeatTransition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_BackToSeatTransitionCoroutine() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_HeadRig() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_CurrentTurnAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_TargetTurnAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_UpdateTuranAngleFrameCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLastViewType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& mFromGetOnVehicle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& InAirAniBlendTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& InAirAniBlendTimeCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& IsVehicleReversing() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& IsDriveStand() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& IsInHightSpeed() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& IsMotorUp() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = float> T& CurrentLookAtAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsRadBlurOpen() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& cacheController() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_lastVehicleType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_CrouchingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_EyeHeightDropDownSpeedForCrouching() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_UpdateEyeHeightIntervalDuringCrouching() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_PawnEyeHeightTransitionTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_TickPawnEyeHeightTransitionTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsInPawnEyeHeightTransition() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_TransitionStartEyeHeight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_CurrentTranstionTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& mInVehicle_1P() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& mAimDir() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& mCamPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleVehicleWeaponstate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachOutTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackToSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackToSeatTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceBackToSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulationReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulationBackToSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyReachoutChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrentAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReachOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDriveAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadDriveAnmatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateVehicleAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachVehicleAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLandVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRideFPSToTPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRideTPSToFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRideTPSOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRideTPSCloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AttachVehicleAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVehicleAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVehicle_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndVehicle_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCrouchVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = uintptr_t> T get_AnimatorAsset() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648D9C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSeatMode() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648DA4))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSeatIndex() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648DAC))(this);
	}
	template <typename T = void> T set_CurrentSeatIndex(uintptr_t value) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x2648DB4))(this, value);
	}
	template <typename T = bool> T get_IsDrive() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F1C))(this);
	}
	template <typename T = bool> T get_IsRide() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F30))(this);
	}
	template <typename T = bool> T get_ShouldStopIK() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F48))(this);
	}
	template <typename T = bool> T get_ShouldStopAimRotate() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F7C))(this);
	}
	template <typename T = bool> T get_IsReachOut() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F90))(this);
	}
	template <typename T = bool> T get_InReachOutTransition() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648F98))(this);
	}
	template <typename T = bool> T get_InBackToSeatTransition() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648FA0))(this);
	}
	template <typename T = bool> T get_IsInLeftSeat() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648FA8))(this);
	}
	template <typename T = bool> T get_IsOnVehicle() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x2648FC0))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x2648FD4))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x26491A0))(this, deltaTime);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264A940))(this);
	}
	template <typename T = void> T HandleVehicleWeaponstate() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264AC44))(this);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t vehicle, uintptr_t seat) {
		return ((T (*)(BRVehicleComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x264AF74))(this, vehicle, seat);
	}
	template <typename T = void> T GetOffVehicle() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264B8A8))(this);
	}
	template <typename T = bool> T CanReachOut() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264BC5C))(this);
	}
	template <typename T = void> T ReachOut(uintptr_t callbackHandler) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264BDFC))(this, callbackHandler);
	}
	template <typename T = uintptr_t> T ReachOutTransition(uintptr_t callbackHandler) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264C0B0))(this, callbackHandler);
	}
	template <typename T = void> T BackToSeat(uintptr_t callbackHandler) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264C1D4))(this, callbackHandler);
	}
	template <typename T = uintptr_t> T BackToSeatTransition(uintptr_t callbackHandler) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264C434))(this, callbackHandler);
	}
	template <typename T = void> T ForceBackToSeat() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264B610))(this);
	}
	template <typename T = void> T SimulationReachOut() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264C558))(this);
	}
	template <typename T = void> T SimulationBackToSeat() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264C7F4))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264C978))(this);
	}
	template <typename T = void> T NotifyReachoutChanged() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264B794))(this);
	}
	template <typename T = float> T CorrentAngle(float y) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x264CA8C))(this, y);
	}
	template <typename T = void> T TickReachOut(float deltaTime) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x264981C))(this, deltaTime);
	}
	template <typename T = void> T TickDriveAnimation(float deltaTime) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x2649A80))(this, deltaTime);
	}
	template <typename T = void> T PreloadDriveAnmatorController(int32_t vehicleAnimatorAssetID) {
		return ((T (*)(BRVehicleComponent*, int32_t))(Il2CppBase() + 0x264CBB4))(this, vehicleAnimatorAssetID);
	}
	template <typename T = void> T LoadAnimatorController(int32_t vehicleAnimatorAssetID) {
		return ((T (*)(BRVehicleComponent*, int32_t))(Il2CppBase() + 0x264B3A4))(this, vehicleAnimatorAssetID);
	}
	template <typename T = void> T OnLoadAsset(int32_t assetId, uintptr_t param) {
		return ((T (*)(BRVehicleComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x264CE1C))(this, assetId, param);
	}
	template <typename T = uintptr_t> T CreateVehicleAnimatorController(uintptr_t weaponController) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264D354))(this, weaponController);
	}
	template <typename T = void> T AttachVehicleAnimatorController() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264D1DC))(this);
	}
	template <typename T = void> T set_ShowBag(bool value) {
		return ((T (*)(BRVehicleComponent*, bool))(Il2CppBase() + 0x264E2C0))(this, value);
	}
	template <typename T = void> T OnLandVehicle(uintptr_t vehicleType) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264E3F0))(this, vehicleType);
	}
	template <typename T = void> T OnLeaveVehicle() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264E76C))(this);
	}
	template <typename T = void> T OnRideFPSToTPS() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264EAD8))(this);
	}
	template <typename T = void> T OnRideTPSToFPS() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264EC70))(this);
	}
	template <typename T = void> T OnRideTPSOpenAim() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264EDF8))(this);
	}
	template <typename T = void> T OnRideTPSCloseAim() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264EF7C))(this);
	}
	template <typename T = void> T AttachVehicleAnimatorController_1(uintptr_t weapAnimator) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x264DC80))(this, weapAnimator);
	}
	template <typename T = void> T ResetAnimatorController() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264BA24))(this);
	}
	template <typename T = void> T ClearVehicleAnimatorController() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264AA4C))(this);
	}
	template <typename T = float> T get_CrouchingEyeHeight() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264F114))(this);
	}
	template <typename T = bool> T get_IsInTransition() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264F11C))(this);
	}
	template <typename T = void> T Tick_1P(float deltaTime) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x2649604))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T get_cacheCameraPos() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264F290))(this);
	}
	template <typename T = Il2CppVector3> T get_cacheCameraDir() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264F2A4))(this);
	}
	template <typename T = void> T StartVehicle_1P(uintptr_t pawn, bool immediately) {
		return ((T (*)(BRVehicleComponent*, uintptr_t, bool))(Il2CppBase() + 0x264F2B8))(this, pawn, immediately);
	}
	template <typename T = void> T EndVehicle_1P(uintptr_t pawn, bool immediately, bool setEyeHeightInImmediately) {
		return ((T (*)(BRVehicleComponent*, uintptr_t, bool, bool))(Il2CppBase() + 0x264F82C))(this, pawn, immediately, setEyeHeightInImmediately);
	}
	template <typename T = void> T SetEyeHeight(uintptr_t pawn, float newEyeHeight) {
		return ((T (*)(BRVehicleComponent*, uintptr_t, float))(Il2CppBase() + 0x264F124))(this, pawn, newEyeHeight);
	}
	template <typename T = bool> T CheckCrouchVisibility(float distance) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x264FBF8))(this, distance);
	}
	template <typename T = void> T GetOnVehiclem__0() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x264FF7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRVehicleComponent*, uintptr_t))(Il2CppBase() + 0x26500C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRVehicleComponent*, float))(Il2CppBase() + 0x26500D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x26500D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRVehicleComponent*))(Il2CppBase() + 0x26500E0))(this);
	}

};

}
