#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseATargetIfNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingCmdFsmNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Possess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnPossess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachedDest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToCurrentTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveAlongPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FollowSWSPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDesiredRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDesiredRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRotationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDesiredFocalObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDesiredFocalObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFocalFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaxAngularSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDestinationByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCombatMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCombatMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlaySpecialAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockAttackMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLockAttackMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Attack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseAttackLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbortCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopCommandById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupReaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPendReaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPendingReaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginHandleReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteWhatToDoNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAIComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseATarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvaluateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFightEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAbortTrailAndAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAbortInPlaceAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleGlobalEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCmdType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdMoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdMoveAndAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CmdMoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdTrailAndAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CmdTrailAndAttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdTrailTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdSWSFollowPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdBeginSpecialMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CmdMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdWeaponAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdRemoteAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdAttackVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPauseIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdWander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdSearchOnSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdPlayAnimAtDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdOrientAndPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdFireFromCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CmdRootMotionFireFromCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExecute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReactToSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldChangeTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRecentlyHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AILog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	template <typename T = uintptr_t> T get_ActiveCmd() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4370E20))(this);
	}
	template <typename T = uintptr_t> T get_BottomCmd() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4370F0C))(this);
	}
	template <typename T = Il2CppVector3> T get_CachedTargetPosition() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4370FE4))(this);
	}
	template <typename T = void> T set_CachedTargetPosition(Il2CppVector3 value) {
		return ((T (*)(PVEAIController*, Il2CppVector3))(Il2CppBase() + 0x4370FF8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371004))(this);
	}
	template <typename T = uintptr_t> T get_TargetTransform() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371138))(this);
	}
	template <typename T = uintptr_t> T get_AimTarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x437123C))(this);
	}
	template <typename T = bool> T ShouldEngageFight() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371378))(this);
	}
	template <typename T = bool> T CanAttackTarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43714A0))(this);
	}
	template <typename T = Il2CppVector3> T GetAttackDirection() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371578))(this);
	}
	template <typename T = void> T ChooseATargetIfNull() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43716AC))(this);
	}
	template <typename T = bool> T get_HasTarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43717E8))(this);
	}
	template <typename T = Il2CppVector3> T get_Destination() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43718D4))(this);
	}
	template <typename T = uintptr_t> T get_DesiredFocalObj() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43718E8))(this);
	}
	template <typename T = bool> T get_ShouldCheckPeripheralVision() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43718F0))(this);
	}
	template <typename T = bool> T get_IsDebuging() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43719A0))(this);
	}
	template <typename T = uintptr_t> T get_ReactionMgr() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371A84))(this);
	}
	template <typename T = void> T SetPendingCmdFsmNotification(Il2CppString* eventName) {
		return ((T (*)(PVEAIController*, Il2CppString*))(Il2CppBase() + 0x4368FFC))(this, eventName);
	}
	template <typename T = void> T Possess(uintptr_t inPawn) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x43654C4))(this, inPawn);
	}
	template <typename T = void> T UnPossess() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371A8C))(this);
	}
	template <typename T = void> T MoveTo(Il2CppVector3 dest) {
		return ((T (*)(PVEAIController*, Il2CppVector3))(Il2CppBase() + 0x4371B3C))(this, dest);
	}
	template <typename T = bool> T ReachedDest(float maxDistance) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4371D6C))(this, maxDistance);
	}
	template <typename T = void> T MoveToCurrentTarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4371E94))(this);
	}
	template <typename T = void> T MoveAlongPath(uintptr_t path) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4368F20))(this, path);
	}
	template <typename T = void> T FollowSWSPath(uintptr_t inPath, uintptr_t* outMove) {
		return ((T (*)(PVEAIController*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4371F54))(this, inPath, outMove);
	}
	template <typename T = void> T SetDesiredRotation(Il2CppQuaternion rot) {
		return ((T (*)(PVEAIController*, Il2CppQuaternion))(Il2CppBase() + 0x4372110))(this, rot);
	}
	template <typename T = void> T ClearDesiredRotation() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x437235C))(this);
	}
	template <typename T = bool> T HasRotationFinished(float destOffset) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x43724E8))(this, destOffset);
	}
	template <typename T = void> T SetDesiredFocalObject(uintptr_t focalObj, float focalDistance) {
		return ((T (*)(PVEAIController*, uintptr_t, float))(Il2CppBase() + 0x4372710))(this, focalObj, focalDistance);
	}
	template <typename T = void> T ClearDesiredFocalObject() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4372978))(this);
	}
	template <typename T = bool> T HasFocalFinished(float destOffset) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4372A38))(this, destOffset);
	}
	template <typename T = void> T SetMaxAngularSpeed(float angularSpeed) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4372CCC))(this, angularSpeed);
	}
	template <typename T = void> T UpdateDestinationByPawn(Il2CppVector3 dest) {
		return ((T (*)(PVEAIController*, Il2CppVector3))(Il2CppBase() + 0x4372E88))(this, dest);
	}
	template <typename T = void> T StopMove(bool bStopRotation) {
		return ((T (*)(PVEAIController*, bool))(Il2CppBase() + 0x4372F58))(this, bStopRotation);
	}
	template <typename T = void> T StartCombatMove() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43731CC))(this);
	}
	template <typename T = void> T EndCombatMove() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4373274))(this);
	}
	template <typename T = void> T StopRotation() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4373120))(this);
	}
	template <typename T = bool> T CanPlaySpecialAnim(Il2CppString* animTriggerName) {
		return ((T (*)(PVEAIController*, Il2CppString*))(Il2CppBase() + 0x43689B8))(this, animTriggerName);
	}
	template <typename T = void> T LockAttackMode(int32_t mode) {
		return ((T (*)(PVEAIController*, int32_t))(Il2CppBase() + 0x437330C))(this, mode);
	}
	template <typename T = void> T UnLockAttackMode() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43733B4))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t target) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4373458))(this, target);
	}
	template <typename T = uintptr_t> T Attack() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4373594))(this);
	}
	template <typename T = Il2CppVector3> T ChooseAttackLocation(float secondsBeforeNextChoose) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4373AFC))(this, secondsBeforeNextChoose);
	}
	template <typename T = uintptr_t> T PushCommand(uintptr_t newCommand) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4373BD0))(this, newCommand);
	}
	template <typename T = void> T PopCommand(uintptr_t cmd, uintptr_t popStatus) {
		return ((T (*)(PVEAIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4373D34))(this, cmd, popStatus);
	}
	template <typename T = void> T ClearCommand() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4366990))(this);
	}
	template <typename T = bool> T AbortCommand(uintptr_t cmd) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x437411C))(this, cmd);
	}
	template <typename T = bool> T PopCommandById(int32_t id) {
		return ((T (*)(PVEAIController*, int32_t))(Il2CppBase() + 0x436E0E0))(this, id);
	}
	template <typename T = void> T NotifySeePlayer(uintptr_t seenPawn) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x43741D4))(this, seenPawn);
	}
	template <typename T = void> T TakeDamage(uint32_t instigatorID) {
		return ((T (*)(PVEAIController*, uint32_t))(Il2CppBase() + 0x437434C))(this, instigatorID);
	}
	template <typename T = void> T OnControllerColliderHit(uintptr_t hit) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4374418))(this, hit);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x43744B8))(this, other);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4365010))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4374558))(this);
	}
	template <typename T = void> T BeginAI(uintptr_t initAIAction) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4374784))(this, initAIAction);
	}
	template <typename T = void> T SetupReaction() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4374D80))(this);
	}
	template <typename T = bool> T ShouldPendReaction(uintptr_t originatingChannel) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4374EF8))(this, originatingChannel);
	}
	template <typename T = void> T CheckPendingReaction() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4375048))(this);
	}
	template <typename T = void> T OnBeginHandleReactions() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4375184))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x437521C))(this, deltaTime);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43685C4))(this);
	}
	template <typename T = Il2CppString*> T ExecuteWhatToDoNext() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x437573C))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43757DC))(this);
	}
	template <typename T = void> T OnPawnDie() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4375970))(this);
	}
	template <typename T = void> T DisableAIComponent() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x437588C))(this);
	}
	template <typename T = uintptr_t> T ChooseATarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4368A70))(this);
	}
	template <typename T = bool> T EvaluateTarget(uintptr_t gameInfo, uintptr_t target, uintptr_t* weight) {
		return ((T (*)(PVEAIController*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4375C90))(this, gameInfo, target, weight);
	}
	template <typename T = void> T StartCrouch() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4375E7C))(this);
	}
	template <typename T = void> T EndCrouch() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4376098))(this);
	}
	template <typename T = bool> T ShouldFightEnemy() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43762AC))(this);
	}
	template <typename T = bool> T ShouldAbortTrailAndAttack() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x437634C))(this);
	}
	template <typename T = bool> T ShouldAbortInPlaceAttack() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x43763EC))(this);
	}
	template <typename T = void> T HandleGlobalEvent(uintptr_t aiEvent) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x437648C))(this, aiEvent);
	}
	template <typename T = uintptr_t> T GetCmdType(Il2CppString* cmdName) {
		return ((T (*)(PVEAIController*, Il2CppString*))(Il2CppBase() + 0x437657C))(this, cmdName);
	}
	template <typename T = uintptr_t> T CmdMoveTo(Il2CppVector3 pos, Il2CppQuaternion rot, float offset) {
		return ((T (*)(PVEAIController*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x437667C))(this, pos, rot, offset);
	}
	template <typename T = uintptr_t> T CmdMoveAndAttack(Il2CppVector3 pos, Il2CppQuaternion rot, float offset) {
		return ((T (*)(PVEAIController*, Il2CppVector3, Il2CppQuaternion, float))(Il2CppBase() + 0x43670B0))(this, pos, rot, offset);
	}
	template <typename T = uintptr_t> T CmdMoveTo_1(Il2CppVector3 pos, bool precise, float offset) {
		return ((T (*)(PVEAIController*, Il2CppVector3, bool, float))(Il2CppBase() + 0x43767FC))(this, pos, precise, offset);
	}
	template <typename T = uintptr_t> T CmdTrailAndAttackTarget(uintptr_t target, float distToLostTarget) {
		return ((T (*)(PVEAIController*, uintptr_t, float))(Il2CppBase() + 0x437696C))(this, target, distToLostTarget);
	}
	template <typename T = uintptr_t> T CmdTrailAndAttackTarget_1(uint32_t pawnId, float distToLostTarget) {
		return ((T (*)(PVEAIController*, uint32_t, float))(Il2CppBase() + 0x4376A7C))(this, pawnId, distToLostTarget);
	}
	template <typename T = uintptr_t> T CmdTrailTarget() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4376BF0))(this);
	}
	template <typename T = uintptr_t> T CmdPlayAnim(Il2CppString* animName, float animLen) {
		return ((T (*)(PVEAIController*, Il2CppString*, float))(Il2CppBase() + 0x43690D4))(this, animName, animLen);
	}
	template <typename T = uintptr_t> T CmdSWSFollowPath(Il2CppString* inPathName) {
		return ((T (*)(PVEAIController*, Il2CppString*))(Il2CppBase() + 0x4376CB8))(this, inPathName);
	}
	template <typename T = uintptr_t> T CmdBeginSpecialMove(Il2CppString* animName, float animLen, bool needFinishRotation, bool isRandomAnim, bool canRotateWhilePlayingAnim, int32_t randomValue) {
		return ((T (*)(PVEAIController*, Il2CppString*, float, bool, bool, bool, int32_t))(Il2CppBase() + 0x4376DAC))(this, animName, animLen, needFinishRotation, isRandomAnim, canRotateWhilePlayingAnim, randomValue);
	}
	template <typename T = uintptr_t> T CmdMeleeAttack(Il2CppString* animName, float animLen, int32_t randomValue, bool needFinishRotation, bool canRotateWhilePlayingAnim) {
		return ((T (*)(PVEAIController*, Il2CppString*, float, int32_t, bool, bool))(Il2CppBase() + 0x4373860))(this, animName, animLen, randomValue, needFinishRotation, canRotateWhilePlayingAnim);
	}
	template <typename T = uintptr_t> T CmdMeleeAttack_1(Il2CppString* animName, float animLen, bool needFinishRotation, bool canRotateWhilePlayingAnim) {
		return ((T (*)(PVEAIController*, Il2CppString*, float, bool, bool))(Il2CppBase() + 0x4376F08))(this, animName, animLen, needFinishRotation, canRotateWhilePlayingAnim);
	}
	template <typename T = uintptr_t> T CmdWeaponAttack(Il2CppString* cmdName) {
		return ((T (*)(PVEAIController*, Il2CppString*))(Il2CppBase() + 0x4373788))(this, cmdName);
	}
	template <typename T = uintptr_t> T CmdRemoteAttack(Il2CppString* animName, float animLen, bool needFinishRotation, bool canRotateWhilePlayingAnim) {
		return ((T (*)(PVEAIController*, Il2CppString*, float, bool, bool))(Il2CppBase() + 0x43739B0))(this, animName, animLen, needFinishRotation, canRotateWhilePlayingAnim);
	}
	template <typename T = uintptr_t> T CmdAttackVolume(uintptr_t volume, Il2CppString* animName, float animLen, int32_t randomValue, bool needFinishRotation, bool canRotateWhilePlayingAnim) {
		return ((T (*)(PVEAIController*, uintptr_t, Il2CppString*, float, int32_t, bool, bool))(Il2CppBase() + 0x437705C))(this, volume, animName, animLen, randomValue, needFinishRotation, canRotateWhilePlayingAnim);
	}
	template <typename T = uintptr_t> T CmdPauseIdle(bool bStopAIMove) {
		return ((T (*)(PVEAIController*, bool))(Il2CppBase() + 0x4377140))(this, bStopAIMove);
	}
	template <typename T = uintptr_t> T CmdWander(float outerRadius, float innerRadius) {
		return ((T (*)(PVEAIController*, float, float))(Il2CppBase() + 0x4377234))(this, outerRadius, innerRadius);
	}
	template <typename T = uintptr_t> T CmdSearchOnSpots(Il2CppList<uintptr_t>* spots) {
		return ((T (*)(PVEAIController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4377344))(this, spots);
	}
	template <typename T = uintptr_t> T CmdPlayAnimAtDestination(uintptr_t inDestTarget, Il2CppString* inAnimName, float inAnimLength) {
		return ((T (*)(PVEAIController*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x437746C))(this, inDestTarget, inAnimName, inAnimLength);
	}
	template <typename T = uintptr_t> T CmdOrientAndPlayAnim(Il2CppString* inAnimName, float inAnimLength, Il2CppQuaternion inDestRotation) {
		return ((T (*)(PVEAIController*, Il2CppString*, float, Il2CppQuaternion))(Il2CppBase() + 0x4377594))(this, inAnimName, inAnimLength, inDestRotation);
	}
	template <typename T = uintptr_t> T CmdFireFromCover(uintptr_t inCover, float inFireMaxTime) {
		return ((T (*)(PVEAIController*, uintptr_t, float))(Il2CppBase() + 0x43776E0))(this, inCover, inFireMaxTime);
	}
	template <typename T = uintptr_t> T CmdRootMotionFireFromCover(uintptr_t inCover, float inFireMaxTime) {
		return ((T (*)(PVEAIController*, uintptr_t, float))(Il2CppBase() + 0x4377818))(this, inCover, inFireMaxTime);
	}
	template <typename T = int32_t> T Execute(Il2CppString* cmdName, uintptr_t param) {
		return ((T (*)(PVEAIController*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x436735C))(this, cmdName, param);
	}
	template <typename T = int32_t> T Execute_1(Il2CppString* cmdName, bool notifyFsmResult) {
		return ((T (*)(PVEAIController*, Il2CppString*, bool))(Il2CppBase() + 0x436E604))(this, cmdName, notifyFsmResult);
	}
	template <typename T = bool> T CanExecute(uintptr_t cmdType) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4377950))(this, cmdType);
	}
	template <typename T = void> T ReactToTakeDamage(uintptr_t instigator) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4368D50))(this, instigator);
	}
	template <typename T = void> T ReactToSeePlayer(uintptr_t instigator) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4368E0C))(this, instigator);
	}
	template <typename T = bool> T ShouldChangeTarget(uintptr_t newTarget) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4377A64))(this, newTarget);
	}
	template <typename T = bool> T IsRecentlyHit(float duration) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4377B0C))(this, duration);
	}
	template <typename T = void> T AILog(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(PVEAIController*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4365E70))(this, msg, paras);
	}
	template <typename T = void> T xLuaBaseProxy_Possess(uintptr_t P0) {
		return ((T (*)(PVEAIController*, uintptr_t))(Il2CppBase() + 0x4377BEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UnPossess() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4377BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4377BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4377C04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEAIController*, float))(Il2CppBase() + 0x4377C0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4377C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnDie() {
		return ((T (*)(PVEAIController*))(Il2CppBase() + 0x4377C1C))(this);
	}

};

}
