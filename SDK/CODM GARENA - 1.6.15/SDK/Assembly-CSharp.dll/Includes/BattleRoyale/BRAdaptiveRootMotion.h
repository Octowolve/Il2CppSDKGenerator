#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRAdaptiveRootMotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRAdaptiveRootMotion"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RootMotionAnimDataCache() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_CurRootMotionAnimData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_CurrClimbWallWidth() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_ClimbOverDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& m_BeginRootPosition() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppQuaternion> T& m_BeginRootRotation() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& m_EndPosition() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& m_HightPosition() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_LastPosition() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_IsClimbUp() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& upScaling() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& downScaling() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& m_isHadTriggerTranslationEnd() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& m_isClimbOverLandSky() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = bool> T& m_isOnGround() {
		return *(T*)((uintptr_t)this + 0x132);
	}
	template <typename T = float> T& m_CurrentPlaySpeed() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_startLandSkyTimeScale() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_AnimClimbUpBeginCCMoveTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_AnimClimpOverBeginCheckGroundTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& m_RealAnimationClipLength() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_AnimToClimbTopTime() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& m_AnimToClimbFallTime() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& m_AnimToClimbTopEvent() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& m_AnimToClimbFallEvent() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = bool> T& m_HasToClimbEvent() {
		return *(T*)((uintptr_t)this + 0x152);
	}
	template <typename T = bool> T& m_CheckFalling() {
		return *(T*)((uintptr_t)this + 0x153);
	}
	template <typename T = bool> T& m_IsAccelerateJumpDownSpeed() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& JumpDownAcceleration() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& m_IsNotifyEnded() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_offsetYSpeed() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& m_offsetY() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& m_offsetYAdd() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& forwardScale() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& groundToTopScale() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& topToGroundScale() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppVector3> T& m_deltaPos() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppQuaternion> T& m_deltaRotation() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppVector3> T& m_CacheDeltaPos() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppQuaternion> T& m_CacheDeltaRotation() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& m_shouldUpdateAnimationCurve() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_startUpdateAnimationCurveTime() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& m_UpdateAnimtionCurveAccTime() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppVector3> T& m_lastAnimationCurePos() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppQuaternion> T& m_startUpdateAnimationCurveRot() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppVector3> T& m_UpdateAnimationCurveCachePos() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& DotValue() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& m_ShouldCheckJumpDown() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CheckOverLap() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& m_CheckLayerMask() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& m_LateUpdateAccumulationDeltaTime() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRootMotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickNotifyRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRootMotionTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalcRootMotionTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CalcRootMotionTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartUpdateAnimationCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnimationCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimbOverMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbOverHitWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHitDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOverLap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnPassThrough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbToFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoClimbUpMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCheckFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopRootmotion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToClimbTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToClimbFall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = void> T set_RootMotionAnimDataCache(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24BAEEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RootMotionAnimDataCache() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BAEF4))(this);
	}
	template <typename T = bool> T get_IsNotifyEnded() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BAEFC))(this);
	}
	template <typename T = bool> T IsOnGround() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BAF04))(this);
	}
	template <typename T = uintptr_t> T get_agentTransform() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BAFAC))(this);
	}
	template <typename T = int32_t> T PlayAnimInternal(Il2CppString* animName, float blendTime, float fixedTime, float speed) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppString*, float, float, float))(Il2CppBase() + 0x24BB140))(this, animName, blendTime, fixedTime, speed);
	}
	template <typename T = void> T BeginRootMotion(Il2CppString* animName, Il2CppVector3 highestPos, Il2CppVector3 destPos, float checkDownDistance, float wallWidth, bool isClimbOverLandSky, float startLandSkyTimeScale, float blendTime, float speed) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppString*, Il2CppVector3, Il2CppVector3, float, float, bool, float, float, float))(Il2CppBase() + 0x24BB5C4))(this, animName, highestPos, destPos, checkDownDistance, wallWidth, isClimbOverLandSky, startLandSkyTimeScale, blendTime, speed);
	}
	template <typename T = void> T TickNotifyRootMotionEnd() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BBD80))(this);
	}
	template <typename T = void> T NotifyRootMotionEnd(int32_t stateNameId) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t))(Il2CppBase() + 0x24BBE70))(this, stateNameId);
	}
	template <typename T = bool> T IsClimbUp(Il2CppString* animName) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppString*))(Il2CppBase() + 0x24BBAF0))(this, animName);
	}
	template <typename T = void> T CalcRootMotionTransform(int32_t index, Il2CppVector3 destPos) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppVector3))(Il2CppBase() + 0x24BBF28))(this, index, destPos);
	}
	template <typename T = void> T CalcRootMotionTransform_1(int32_t index, Il2CppVector3 destPos, float fixedTime) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x24BC320))(this, index, destPos, fixedTime);
	}
	template <typename T = void> T PlayAnim(int32_t animHash, Il2CppString* animName, float blendTime, float fixedTime) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppString*, float, float))(Il2CppBase() + 0x24BC8B8))(this, animHash, animName, blendTime, fixedTime);
	}
	template <typename T = void> T CalcRootMotionTransform_2(int32_t index, Il2CppVector3 highestPos, Il2CppVector3 destPos) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24BCA0C))(this, index, highestPos, destPos);
	}
	template <typename T = Il2CppVector3> T get_DeltaPosition() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BD304))(this);
	}
	template <typename T = Il2CppQuaternion> T get_DeltaRotation() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BD318))(this);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BD328))(this);
	}
	template <typename T = void> T StartUpdateAnimationCurve() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BBC08))(this);
	}
	template <typename T = void> T UpdateAnimationCurve() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BD5AC))(this);
	}
	template <typename T = void> T DoClimbOverMove() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BD7C4))(this);
	}
	template <typename T = void> T CheckClimbOverHitWall(uintptr_t moveDelta, uintptr_t isClimbOverMantle, uintptr_t newPosition) {
		return ((T (*)(BRAdaptiveRootMotion*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24BDF80))(this, moveDelta, isClimbOverMantle, newPosition);
	}
	template <typename T = bool> T CheckHitDown() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BF19C))(this);
	}
	template <typename T = bool> T CheckOverLap(Il2CppVector3 postion) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppVector3))(Il2CppBase() + 0x24BF6A0))(this, postion);
	}
	template <typename T = bool> T CheckPawnPassThrough() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BEA18))(this);
	}
	template <typename T = void> T CheckClimbToFalling() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BEE9C))(this);
	}
	template <typename T = void> T DoClimbUpMove() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24BFA2C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C00B0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C0154))(this);
	}
	template <typename T = bool> T IsGround(float dist) {
		return ((T (*)(BRAdaptiveRootMotion*, float))(Il2CppBase() + 0x24BE74C))(this, dist);
	}
	template <typename T = bool> T CanCheckFalling() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C03F8))(this);
	}
	template <typename T = void> T ForceStopRootmotion() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C05F0))(this);
	}
	template <typename T = void> T ToClimbTop() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C069C))(this);
	}
	template <typename T = void> T ToClimbFall() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C0740))(this);
	}
	template <typename T = void> T CheckFalling() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C07E4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_PlayAnimInternal(Il2CppString* P0, float P1, float P2, float P3) {
		return ((T (*)(BRAdaptiveRootMotion*, Il2CppString*, float, float, float))(Il2CppBase() + 0x24C0888))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyRootMotionEnd(int32_t P0) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t))(Il2CppBase() + 0x24C08B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CalcRootMotionTransform(int32_t P0, Il2CppVector3 P1) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppVector3))(Il2CppBase() + 0x24C08B8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_CalcRootMotionTransform_1(int32_t P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x24C08DC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnim(int32_t P0, Il2CppString* P1, float P2, float P3) {
		return ((T (*)(BRAdaptiveRootMotion*, int32_t, Il2CppString*, float, float))(Il2CppBase() + 0x24C090C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnAnimatorMove() {
		return ((T (*)(BRAdaptiveRootMotion*))(Il2CppBase() + 0x24C0934))(this);
	}

};

}
