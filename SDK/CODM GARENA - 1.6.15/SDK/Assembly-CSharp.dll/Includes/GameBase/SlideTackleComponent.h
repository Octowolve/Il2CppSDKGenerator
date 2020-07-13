#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SlideTackleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SlideTackleComponent"));
	}

	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SlideTackleInputTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_SlideTackleTurnAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SlideTackleAcclerationSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_SlideTackleDecelerationSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_SlideTackleMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_SlideTackleLimitMinSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_SlideTackleLimitCDTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_SlideTackleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_SlideTackleIdleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_SlideTackleLimitMinIdleTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_SlideTackleMinSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_SlideTackleMinEyeHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_SlideTackleIdleTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_SlideTackleStartAngleLimit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_SlideTackleColliderHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_SlideTackleCollideStopAngle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_SlideTackleTPSCameraZDistance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_SlideTackleTPSCameraYDistance() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_SlideTackleCDTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_DelayRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_CameraHeightRecoverTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_PostSlideTackleSlowMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_PostSlideTackelAnimScale() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_PostSlideTackleSlowMoveTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_SlideTackleDirMaxAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_SlideTackleEffectTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_SlideTackleFPCameraAimFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_SlideCameraTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_SlideTackleFromFallingCDTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_SlideTackleStartMinSpeed() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> static T& SLIDESOUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_PawnEyeHeight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_IsSpeedUp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_HighestSpeedIdle() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsSlideTackle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_SlideTackleTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_InPostSlideTackle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_PostSlideTackleTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_TickSlideCameraOffset() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_SimulateSlideStackle() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& m_SimulateInternalStop() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = float> T& m_SlideTackleStartSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_SlideTackleSpeed() {
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
	template <typename T = float> T& m_LastSlideTackleStopTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_IsLackCheckSlideTackle() {
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
	template <typename T = Il2CppVector3> T& m_SlideTackleMoveDir() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_CurrentAngle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_SlideTackleRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsReachLowestCameraHeight() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_CurrentMaxSpeed() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_LastLimitSlideTacke() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& m_CurrentMaxIdleTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_UseEffect() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& m_CameraOffset() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& m_lerpIn() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_LastEffectTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& m_CurrentEffect() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_CurrentEffectGo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& m_CurrentAssetId() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccelration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSlideRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnCheckSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RawStopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSlideTackleStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndSlideTackleFixVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStartSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEndSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play1PSlideSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopTickCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTPSCameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcTPSDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSprintAnimSpeedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPostSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPostSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerStopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalStopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateInternalStopSlideTackle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffectAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayPlayEffectAsyncLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(SlideTackleComponent*, uintptr_t, bool))(Il2CppBase() + 0x308CBE4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CDA0))(this);
	}
	template <typename T = float> T get_SlideTackleDirMaxAngle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE5C))(this);
	}
	template <typename T = float> T get_SlideTackelCollideStopAngle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE64))(this);
	}
	template <typename T = bool> T get_TickSlideCameraOffset() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE6C))(this);
	}
	template <typename T = bool> T get_SimulateSlideStackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE74))(this);
	}
	template <typename T = void> T set_SimulateInternalStop(bool value) {
		return ((T (*)(SlideTackleComponent*, bool))(Il2CppBase() + 0x308CE7C))(this, value);
	}
	template <typename T = bool> T get_SimulateInternalStop() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE84))(this);
	}
	template <typename T = float> T get_SlideTackleSpeed() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CE8C))(this);
	}
	template <typename T = float> T get_SlideTackleAcclerationSpeed() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CEA4))(this);
	}
	template <typename T = float> T get_SlideTackleDecelerationSpeed() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308CFC8))(this);
	}
	template <typename T = float> T get_SlideTackleMaxSpeed() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D0EC))(this);
	}
	template <typename T = bool> T get_UseInputTime() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D210))(this);
	}
	template <typename T = void> T set_UseInputTime(bool value) {
		return ((T (*)(SlideTackleComponent*, bool))(Il2CppBase() + 0x308D218))(this, value);
	}
	template <typename T = void> T LimitSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D220))(this);
	}
	template <typename T = void> T InitUseEffect() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D440))(this);
	}
	template <typename T = Il2CppVector3> T GetAccelration() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D544))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SlideTackleComponent*, uintptr_t))(Il2CppBase() + 0x308D620))(this, pawn);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D7EC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x308DB2C))(this, deltaTime);
	}
	template <typename T = void> T TickSlideRotation(float inputStrafe) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x308E790))(this, inputStrafe);
	}
	template <typename T = void> T UnCheckSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308EA04))(this);
	}
	template <typename T = bool> T CheckSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308EAAC))(this);
	}
	template <typename T = void> T StartSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308F048))(this);
	}
	template <typename T = void> T RawStopSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308F898))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308FCB8))(this);
	}
	template <typename T = void> T ForceStopSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308FE4C))(this);
	}
	template <typename T = void> T StopSlideTackle(bool bForce, bool shouldCrouch) {
		return ((T (*)(SlideTackleComponent*, bool, bool))(Il2CppBase() + 0x308FF00))(this, bForce, shouldCrouch);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x309024C))(this);
	}
	template <typename T = void> T OnSlideTackleStateChanged() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3090490))(this);
	}
	template <typename T = void> T OnEndSlideTackleFixVelocity() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x30905A4))(this);
	}
	template <typename T = void> T SimulateStartSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x30907DC))(this);
	}
	template <typename T = void> T SimulateEndSlideTackle(uintptr_t newPhysicsState) {
		return ((T (*)(SlideTackleComponent*, uintptr_t))(Il2CppBase() + 0x3090978))(this, newPhysicsState);
	}
	template <typename T = void> T Play1PSlideSound(Il2CppString* slideSound) {
		return ((T (*)(SlideTackleComponent*, Il2CppString*))(Il2CppBase() + 0x308F6C0))(this, slideSound);
	}
	template <typename T = void> T ForceStopTickCameraOffset() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3090150))(this);
	}
	template <typename T = void> T LerpStop() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3090A6C))(this);
	}
	template <typename T = void> T TickTPSCameraOffset(float deltaTime) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x308E460))(this, deltaTime);
	}
	template <typename T = void> T UpdateTPSCameraOffset() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3090BD4))(this);
	}
	template <typename T = void> T CalcTPSDistance(float percent, bool isForward) {
		return ((T (*)(SlideTackleComponent*, float, bool))(Il2CppBase() + 0x3090C6C))(this, percent, isForward);
	}
	template <typename T = void> T InternalInit() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308F358))(this);
	}
	template <typename T = void> T TickLocalPlayer(float deltaTime) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x308DE50))(this, deltaTime);
	}
	template <typename T = bool> T ShouldCrouch() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3091418))(this);
	}
	template <typename T = float> T CalcSprintAnimSpeedScale() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3091870))(this);
	}
	template <typename T = void> T StartPostSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3091910))(this);
	}
	template <typename T = void> T TickPostSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308E698))(this);
	}
	template <typename T = void> T LocalPlayerStopSlideTackle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3090E60))(this);
	}
	template <typename T = void> T InternalStopSlideTackle(bool bForce) {
		return ((T (*)(SlideTackleComponent*, bool))(Il2CppBase() + 0x308F940))(this, bForce);
	}
	template <typename T = void> T CheckTurnAngle() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308DC48))(this);
	}
	template <typename T = void> T SimulateInternalStopSlideTackle(bool bForce) {
		return ((T (*)(SlideTackleComponent*, bool))(Il2CppBase() + 0x30919F0))(this, bForce);
	}
	template <typename T = void> T TickSimulate(float deltaTime) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x308E0D4))(this, deltaTime);
	}
	template <typename T = void> T RecycleAllEffect() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x308D89C))(this);
	}
	template <typename T = void> T PlayEffectAsync() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3091CD0))(this);
	}
	template <typename T = void> T OnPlayPlayEffectAsyncLoaded(int32_t assetId, uintptr_t obj) {
		return ((T (*)(SlideTackleComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x3091F64))(this, assetId, obj);
	}
	template <typename T = void> T CheckPlayEffect() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x30910E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SlideTackleComponent*, uintptr_t))(Il2CppBase() + 0x309257C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3092584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SlideTackleComponent*, float))(Il2CppBase() + 0x309258C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(SlideTackleComponent*))(Il2CppBase() + 0x3092594))(this);
	}

};

}
