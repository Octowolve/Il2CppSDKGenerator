#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ElectricShockCarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ElectricShockCarController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_CommandList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& CurrentAIBehavior() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DefaultCommandList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& AvailiableCommandTypeDic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& CachedTargetPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_Destination() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_DesiredFocalObj() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& MyPawn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& MySightUpdateInfo() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsAIPausing() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& IsDoingAttack() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = bool> T& IsDoingMeleeAttack() {
		return *(T*)((uintptr_t)this + 0x72);
	}
	template <typename T = bool> T& CanAttackWhileMoving() {
		return *(T*)((uintptr_t)this + 0x73);
	}
	template <typename T = int32_t> T& LockedAttackMode() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& MeleeAttackAnimLength() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CachedInitSWSPath() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mReactionMgr() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CurrentReacationHandler() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Reaction() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& PendingReactionFreshSeconds() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint64_t> T& LastSeenPlayerPawnID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& LastSeenPlayerRecordTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& LastDamageInstigatorPawnID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& LastDamageRecordTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& LastEnteredActionVolumeRecordTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& PendingCmdFsmNotification() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& disableLog() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEngageFight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingCmdFsmNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnPossess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteWhatToDoNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAIComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFightEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAbortTrailAndAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAbortInPlaceAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCmdType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdMoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdMoveAndAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CmdMoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdTrailAndAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CmdTrailAndAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdTrailTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdWeaponAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdAttackVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPauseIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdWander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdSearchOnSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnimAtDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdOrientAndPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdFireFromCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdRootMotionFireFromCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExecute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldChangeTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRecentlyHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AILog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = uintptr_t> T get_ActiveCmd() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346CEE8))(this);
	}
	template <typename T = uintptr_t> T get_BottomCmd() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346CFD4))(this);
	}
	template <typename T = Il2CppVector3> T get_CachedTargetPosition() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D0AC))(this);
	}
	template <typename T = void> T set_CachedTargetPosition(Il2CppVector3 value) {
		return ((T (*)(ElectricShockCarController*, Il2CppVector3))(Il2CppBase() + 0x346D0C0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D0CC))(this);
	}
	template <typename T = uintptr_t> T get_TargetTransform() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D200))(this);
	}
	template <typename T = uintptr_t> T get_AimTarget() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D304))(this);
	}
	template <typename T = bool> T ShouldEngageFight() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D440))(this);
	}
	template <typename T = bool> T CanAttackTarget() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D568))(this);
	}
	template <typename T = Il2CppVector3> T GetAttackDirection() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D640))(this);
	}
	template <typename T = Il2CppVector3> T get_Destination() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D774))(this);
	}
	template <typename T = uintptr_t> T get_DesiredFocalObj() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D788))(this);
	}
	template <typename T = bool> T get_ShouldCheckPeripheralVision() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D790))(this);
	}
	template <typename T = uintptr_t> T get_ReactionMgr() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D840))(this);
	}
	template <typename T = void> T SetPendingCmdFsmNotification(Il2CppString* eventName) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*))(Il2CppBase() + 0x346D848))(this, eventName);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346D918))(this, inPawn);
	}
	template <typename T = void> T UnPossess() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346D9F4))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t target) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346DAA4))(this, target);
	}
	template <typename T = Il2CppString*> T ExecuteWhatToDoNext() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346DB4C))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346DBEC))(this);
	}
	template <typename T = void> T OnPawnDie() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346DD58))(this);
	}
	template <typename T = void> T DisableAIComponent() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346DC9C))(this);
	}
	template <typename T = bool> T ShouldFightEnemy() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346DF64))(this);
	}
	template <typename T = bool> T ShouldAbortTrailAndAttack() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346E004))(this);
	}
	template <typename T = bool> T ShouldAbortInPlaceAttack() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346E0A4))(this);
	}
	template <typename T = uintptr_t> T GetCmdType(Il2CppString* cmdName) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*))(Il2CppBase() + 0x346E144))(this, cmdName);
	}
	template <typename T = uintptr_t> T CmdMoveTo(Il2CppVector3 pos, Il2CppQuaternion rot, float offset) {
		return ((T (*)(ElectricShockCarController*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x346E244))(this, pos, rot, offset);
	}
	template <typename T = uintptr_t> T CmdMoveAndAttack(Il2CppVector3 pos, Il2CppQuaternion rot, float offset) {
		return ((T (*)(ElectricShockCarController*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x346E518))(this, pos, rot, offset);
	}
	template <typename T = uintptr_t> T CmdMoveTo_1(Il2CppVector3 pos, bool precise, float offset) {
		return ((T (*)(ElectricShockCarController*, Il2CppVector3, bool, float))(Il2CppBase() + 0x346E698))(this, pos, precise, offset);
	}
	template <typename T = uintptr_t> T CmdTrailAndAttackTarget(uintptr_t target, float distToLostTarget) {
		return ((T (*)(ElectricShockCarController*, uintptr_t, float))(Il2CppBase() + 0x346E808))(this, target, distToLostTarget);
	}
	template <typename T = uintptr_t> T CmdTrailAndAttackTarget_1(uint32_t pawnId, float distToLostTarget) {
		return ((T (*)(ElectricShockCarController*, uint32_t, float))(Il2CppBase() + 0x346E918))(this, pawnId, distToLostTarget);
	}
	template <typename T = uintptr_t> T CmdTrailTarget() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346EA8C))(this);
	}
	template <typename T = uintptr_t> T CmdPlayAnim(Il2CppString* animName, float animLen) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*, float))(Il2CppBase() + 0x346EB54))(this, animName, animLen);
	}
	template <typename T = uintptr_t> T CmdWeaponAttack(Il2CppString* cmdName) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*))(Il2CppBase() + 0x346EC64))(this, cmdName);
	}
	template <typename T = uintptr_t> T CmdAttackVolume(uintptr_t volume, Il2CppString* animName, float animLen, int32_t randomValue, bool needFinishRotation, bool canRotateWhilePlayingAnim) {
		return ((T (*)(ElectricShockCarController*, uintptr_t, Il2CppString*, float, int32_t, bool, bool))(Il2CppBase() + 0x346ED34))(this, volume, animName, animLen, randomValue, needFinishRotation, canRotateWhilePlayingAnim);
	}
	template <typename T = uintptr_t> T CmdPauseIdle(bool bStopAIMove) {
		return ((T (*)(ElectricShockCarController*, bool))(Il2CppBase() + 0x346EE18))(this, bStopAIMove);
	}
	template <typename T = uintptr_t> T CmdWander(float outerRadius, float innerRadius) {
		return ((T (*)(ElectricShockCarController*, float, float))(Il2CppBase() + 0x346EF0C))(this, outerRadius, innerRadius);
	}
	template <typename T = uintptr_t> T CmdSearchOnSpots(Il2CppList<uintptr_t>* spots) {
		return ((T (*)(ElectricShockCarController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x346F01C))(this, spots);
	}
	template <typename T = uintptr_t> T CmdPlayAnimAtDestination(uintptr_t inDestTarget, Il2CppString* inAnimName, float inAnimLength) {
		return ((T (*)(ElectricShockCarController*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x346F144))(this, inDestTarget, inAnimName, inAnimLength);
	}
	template <typename T = uintptr_t> T CmdOrientAndPlayAnim(Il2CppString* inAnimName, float inAnimLength, Il2CppQuaternion inDestRotation) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*, float, Il2CppQuaternion))(Il2CppBase() + 0x346F26C))(this, inAnimName, inAnimLength, inDestRotation);
	}
	template <typename T = uintptr_t> T CmdFireFromCover(uintptr_t inCover, float inFireMaxTime) {
		return ((T (*)(ElectricShockCarController*, uintptr_t, float))(Il2CppBase() + 0x346F3B8))(this, inCover, inFireMaxTime);
	}
	template <typename T = uintptr_t> T CmdRootMotionFireFromCover(uintptr_t inCover, float inFireMaxTime) {
		return ((T (*)(ElectricShockCarController*, uintptr_t, float))(Il2CppBase() + 0x346F4F0))(this, inCover, inFireMaxTime);
	}
	template <typename T = int32_t> T Execute(Il2CppString* cmdName, uintptr_t param) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x346E3C4))(this, cmdName, param);
	}
	template <typename T = int32_t> T Execute_1(Il2CppString* cmdName, bool notifyFsmResult) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*, bool))(Il2CppBase() + 0x346F73C))(this, cmdName, notifyFsmResult);
	}
	template <typename T = bool> T CanExecute(uintptr_t cmdType) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346F628))(this, cmdType);
	}
	template <typename T = void> T ReactToTakeDamage(uintptr_t instigator) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346F84C))(this, instigator);
	}
	template <typename T = void> T ReactToSeePlayer(uintptr_t instigator) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346F904))(this, instigator);
	}
	template <typename T = bool> T ShouldChangeTarget(uintptr_t newTarget) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346FA14))(this, newTarget);
	}
	template <typename T = bool> T IsRecentlyHit(float duration) {
		return ((T (*)(ElectricShockCarController*, float))(Il2CppBase() + 0x346FABC))(this, duration);
	}
	template <typename T = void> T AILog(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(ElectricShockCarController*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x346FB9C))(this, msg, paras);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(ElectricShockCarController*, uintptr_t))(Il2CppBase() + 0x346FC50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UnPossess() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346FC58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346FC60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnDie() {
		return ((T (*)(ElectricShockCarController*))(Il2CppBase() + 0x346FC68))(this);
	}

};

}
