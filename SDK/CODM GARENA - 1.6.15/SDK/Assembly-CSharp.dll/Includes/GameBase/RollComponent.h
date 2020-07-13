#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RollComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RollComponent"));
	}

	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RollInputTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_RollTurnAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_RollAcclerationSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_RollDecelerationSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_RollMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_RollLimitMinSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_RollLimitCDTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_RollLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_RollIdleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_RollLimitMinIdleTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RollMinSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_RollMinEyeHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_RollIdleTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_RollStartAngleLimit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_RollColliderHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_RollCollideStopAngle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_RollTPSCameraZDistance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_RollTPSCameraYDistance() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_RollCDTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_DelayRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_CameraHeightRecoverTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_PostRollSlowMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_PostRollAnimScale() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_PostRollSlowMoveTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_RollDirMaxAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_RollEffectTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_RollFPCameraAimFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_RollCameraTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_RollFromFallingCDTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_RollSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_RollDuration() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_PawnEyeHeight() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_HighestSpeedIdle() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsRoll() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_RollTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_InPostRoll() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_PostRollTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_TickRollCameraOffset() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_SimulateRoll() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& m_SimulateInternalStop() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = float> T& m_RollStartSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_RollSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_UseInputTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_StartPawnAngle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_CheckAngleDiff() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_LastRollStopTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_IsLackCheckRoll() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_LaskCheckPawnAngle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_InputPhysicsState() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& m_RollMoveDir() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_CurrentAngle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_RollRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsReachLowestCameraHeight() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& m_UseEffect() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = Il2CppVector3> T& m_CameraOffset() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& m_lerpIn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_lerpOut() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = float> T& m_LastEffectTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_CurrentEffect() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_CurrentEffectGo() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& m_CurrentAssetId() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccelration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRollTimeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnCheckRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanNotMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawStopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRollStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopTickCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLerpStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSprintAnimSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPostRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPostRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerStopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalStopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateInternalStopRoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayPlayEffectAsyncLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(RollComponent*, uintptr_t, bool))(Il2CppBase() + 0x2DE86DC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE88A0))(this);
	}
	template <typename T = float> T get_RollSpeedRatio() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE895C))(this);
	}
	template <typename T = float> T get_RollDuration() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8964))(this);
	}
	template <typename T = float> T get_RollCollideStopAngle() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE896C))(this);
	}
	template <typename T = bool> T get_TickRollCameraOffset() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8974))(this);
	}
	template <typename T = bool> T get_SimulateRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE897C))(this);
	}
	template <typename T = void> T set_SimulateInternalStop(bool value) {
		return ((T (*)(RollComponent*, bool))(Il2CppBase() + 0x2DE8984))(this, value);
	}
	template <typename T = bool> T get_SimulateInternalStop() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE898C))(this);
	}
	template <typename T = float> T get_RollSpeed() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8994))(this);
	}
	template <typename T = float> T get_RollAcclerationSpeed() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE89AC))(this);
	}
	template <typename T = float> T get_RollDecelerationSpeed() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8ACC))(this);
	}
	template <typename T = float> T get_RollMaxSpeed() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8BEC))(this);
	}
	template <typename T = bool> T get_UseInputTime() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8D0C))(this);
	}
	template <typename T = void> T set_UseInputTime(bool value) {
		return ((T (*)(RollComponent*, bool))(Il2CppBase() + 0x2DE8D14))(this, value);
	}
	template <typename T = void> T InitUseEffect() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8D1C))(this);
	}
	template <typename T = Il2CppVector3> T GetAccelration() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE8E20))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(RollComponent*, uintptr_t))(Il2CppBase() + 0x2DE8EFC))(this, pawn);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE90C8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(RollComponent*, float))(Il2CppBase() + 0x2DE9408))(this, deltaTime);
	}
	template <typename T = bool> T IsRollTimeEnd() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE972C))(this);
	}
	template <typename T = void> T UnCheckRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9D4C))(this);
	}
	template <typename T = bool> T IsCanNotMove() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9DF4))(this);
	}
	template <typename T = bool> T CheckRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9E94))(this);
	}
	template <typename T = void> T StartRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEA3B4))(this);
	}
	template <typename T = void> T RawStopRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEAA10))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEADFC))(this);
	}
	template <typename T = void> T ForceStopRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEAF90))(this);
	}
	template <typename T = void> T StopRoll(bool bForce) {
		return ((T (*)(RollComponent*, bool))(Il2CppBase() + 0x2DEB040))(this, bForce);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEB344))(this);
	}
	template <typename T = void> T OnRollStateChanged() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEB4A8))(this);
	}
	template <typename T = void> T SimulateStartRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEB5B8))(this);
	}
	template <typename T = void> T SimulateEndRoll(uintptr_t newPhysicsState) {
		return ((T (*)(RollComponent*, uintptr_t))(Il2CppBase() + 0x2DEB978))(this, newPhysicsState);
	}
	template <typename T = void> T ForceStopTickCameraOffset() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEB248))(this);
	}
	template <typename T = Il2CppVector3> T GetTPSCameraOffset() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEBA6C))(this);
	}
	template <typename T = void> T ResetTPSCameraOffset() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEBC9C))(this);
	}
	template <typename T = bool> T IsLerpStop(Il2CppVector3 v3) {
		return ((T (*)(RollComponent*, Il2CppVector3))(Il2CppBase() + 0x2DEBD84))(this, v3);
	}
	template <typename T = void> T TickTPSCameraOffset(float deltaTime) {
		return ((T (*)(RollComponent*, float))(Il2CppBase() + 0x2DE9A80))(this, deltaTime);
	}
	template <typename T = void> T InternalInit() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEA5EC))(this);
	}
	template <typename T = bool> T ShouldCrouch() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEBEEC))(this);
	}
	template <typename T = float> T CalcSprintAnimSpeedScale() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEC344))(this);
	}
	template <typename T = void> T StartPostRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEC3E4))(this);
	}
	template <typename T = void> T TickPostRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9C54))(this);
	}
	template <typename T = void> T LocalPlayerStopRoll() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DEC4C4))(this);
	}
	template <typename T = void> T InternalStopRoll(bool bForce) {
		return ((T (*)(RollComponent*, bool))(Il2CppBase() + 0x2DEAAB8))(this, bForce);
	}
	template <typename T = void> T CheckTurnAngle() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9524))(this);
	}
	template <typename T = void> T SimulateInternalStopRoll(bool bForce) {
		return ((T (*)(RollComponent*, bool))(Il2CppBase() + 0x2DE97E4))(this, bForce);
	}
	template <typename T = void> T RecycleAllEffect() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DE9178))(this);
	}
	template <typename T = void> T PlayEffectAsync(int32_t assetID) {
		return ((T (*)(RollComponent*, int32_t))(Il2CppBase() + 0x2DEB698))(this, assetID);
	}
	template <typename T = void> T OnPlayPlayEffectAsyncLoaded(int32_t assetId, uintptr_t obj) {
		return ((T (*)(RollComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x2DEC608))(this, assetId, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(RollComponent*, uintptr_t))(Il2CppBase() + 0x2DECACC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DECAD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(RollComponent*, float))(Il2CppBase() + 0x2DECADC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(RollComponent*))(Il2CppBase() + 0x2DECAE4))(this);
	}

};

}
