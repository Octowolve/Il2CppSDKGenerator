#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIPawn"));
	}

	template <typename T = uintptr_t> T& m_OuterCollider() {
		return *(T*)((uintptr_t)this + 0x9C0);
	}
	template <typename T = uintptr_t> T& DropItem() {
		return *(T*)((uintptr_t)this + 0x9C4);
	}
	template <typename T = uintptr_t> T& m_PlayMakerFSM() {
		return *(T*)((uintptr_t)this + 0x9C8);
	}
	template <typename T = uintptr_t> T& m_Checker() {
		return *(T*)((uintptr_t)this + 0x9CC);
	}
	template <typename T = uintptr_t> T& DeadEvent() {
		return *(T*)((uintptr_t)this + 0x9D0);
	}
	template <typename T = float> T& m_LastSmoothSpeed() {
		return *(T*)((uintptr_t)this + 0x9D4);
	}
	template <typename T = float> T& m_SpeedScale() {
		return *(T*)((uintptr_t)this + 0x9D8);
	}
	template <typename T = float> T& m_ShootingAccuracy() {
		return *(T*)((uintptr_t)this + 0x9DC);
	}
	template <typename T = uintptr_t> T& FsmGO() {
		return *(T*)((uintptr_t)this + 0x9E0);
	}
	template <typename T = uintptr_t> T& Indicator() {
		return *(T*)((uintptr_t)this + 0x9E4);
	}
	template <typename T = bool> T& IsDebuging() {
		return *(T*)((uintptr_t)this + 0x9E8);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x9EC);
	}
	template <typename T = int32_t> T& m_NoHeadMeshAssetID() {
		return *(T*)((uintptr_t)this + 0x9F0);
	}
	template <typename T = uintptr_t> T& m_InitActionMode() {
		return *(T*)((uintptr_t)this + 0x9F4);
	}
	template <typename T = uintptr_t> T& m_InitActionParam() {
		return *(T*)((uintptr_t)this + 0x9F8);
	}
	template <typename T = Il2CppString*> static T& HeadshotSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& ProjectileLaunchingSocketName() {
		return *(T*)((uintptr_t)this + 0x9FC);
	}
	template <typename T = Il2CppString*> T& m_DieAnimation() {
		return *(T*)((uintptr_t)this + 0xA00);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SimulateMoveDataList() {
		return *(T*)((uintptr_t)this + 0xA04);
	}
	template <typename T = uintptr_t> T& SpawnPoint() {
		return *(T*)((uintptr_t)this + 0xA08);
	}
	template <typename T = uintptr_t> T& CController() {
		return *(T*)((uintptr_t)this + 0xA0C);
	}
	template <typename T = uintptr_t> T& m_EffectComponent() {
		return *(T*)((uintptr_t)this + 0xA10);
	}
	template <typename T = int32_t> static T& LODBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LODLevelBeforeBiased() {
		return *(T*)((uintptr_t)this + 0xA14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LODDefiningDistSqList() {
		return *(T*)((uintptr_t)this + 0xA18);
	}
	template <typename T = bool> T& CollideWithPlayerDisabled() {
		return *(T*)((uintptr_t)this + 0xA1C);
	}
	template <typename T = float> T& CollideWithPlayerRadius() {
		return *(T*)((uintptr_t)this + 0xA20);
	}
	template <typename T = float> T& CollideWithPlayerSkinWidth() {
		return *(T*)((uintptr_t)this + 0xA24);
	}
	template <typename T = float> T& NavAgentRadius() {
		return *(T*)((uintptr_t)this + 0xA28);
	}
	template <typename T = float> T& NavAgnetHeight() {
		return *(T*)((uintptr_t)this + 0xA2C);
	}
	template <typename T = uintptr_t> T& m_SteeringAgency() {
		return *(T*)((uintptr_t)this + 0xA30);
	}
	template <typename T = uintptr_t> T& m_NavAgent() {
		return *(T*)((uintptr_t)this + 0xA34);
	}
	template <typename T = float> T& m_MaxAngularSpeed() {
		return *(T*)((uintptr_t)this + 0xA38);
	}
	template <typename T = bool> T& IsWandering() {
		return *(T*)((uintptr_t)this + 0xA3C);
	}
	template <typename T = float> T& m_WanderSpeedFactor() {
		return *(T*)((uintptr_t)this + 0xA40);
	}
	template <typename T = bool> T& m_HasFocalPoint() {
		return *(T*)((uintptr_t)this + 0xA44);
	}
	template <typename T = Il2CppVector3> T& m_FocalPoint() {
		return *(T*)((uintptr_t)this + 0xA48);
	}
	template <typename T = float> T& m_FocalDistance() {
		return *(T*)((uintptr_t)this + 0xA54);
	}
	template <typename T = bool> T& HasDesiredRot() {
		return *(T*)((uintptr_t)this + 0xA58);
	}
	template <typename T = Il2CppQuaternion> T& m_DesiredRot() {
		return *(T*)((uintptr_t)this + 0xA5C);
	}
	template <typename T = bool> T& ShouldAdjustRotation() {
		return *(T*)((uintptr_t)this + 0xA6C);
	}
	template <typename T = bool> T& SlowDownWhenHit() {
		return *(T*)((uintptr_t)this + 0xA6D);
	}
	template <typename T = float> T& m_DeltaSpeedScale() {
		return *(T*)((uintptr_t)this + 0xA70);
	}
	template <typename T = float> T& HitInitSpeedScale() {
		return *(T*)((uintptr_t)this + 0xA74);
	}
	template <typename T = float> T& HitSpeedScaleMultiplier() {
		return *(T*)((uintptr_t)this + 0xA78);
	}
	template <typename T = bool> T& mHasPendingWaypointPath() {
		return *(T*)((uintptr_t)this + 0xA7C);
	}
	template <typename T = uintptr_t> T& OnReachPathEnd() {
		return *(T*)((uintptr_t)this + 0xA80);
	}
	template <typename T = float> T& DestinationOffset() {
		return *(T*)((uintptr_t)this + 0xA84);
	}
	template <typename T = bool> T& m_EnableStartFollowSWSPath() {
		return *(T*)((uintptr_t)this + 0xA88);
	}
	template <typename T = Il2CppVector3> T& m_StartFollowSWSPathLastPos() {
		return *(T*)((uintptr_t)this + 0xA8C);
	}
	template <typename T = uintptr_t> T& m_FollowSWSPathOldPhysicsState() {
		return *(T*)((uintptr_t)this + 0xA98);
	}
	template <typename T = float> T& m_FollowSWSPathDeltaTime() {
		return *(T*)((uintptr_t)this + 0xA9C);
	}
	template <typename T = uintptr_t> T& m_SplineMove() {
		return *(T*)((uintptr_t)this + 0xAA0);
	}
	template <typename T = float> T& AttackWidth() {
		return *(T*)((uintptr_t)this + 0xAA4);
	}
	template <typename T = uintptr_t> T& AttackShape() {
		return *(T*)((uintptr_t)this + 0xAA8);
	}
	template <typename T = uintptr_t> T& m_MyAIWeapon() {
		return *(T*)((uintptr_t)this + 0xAAC);
	}
	template <typename T = float> T& MeleeAttackTriggerRangeFactor() {
		return *(T*)((uintptr_t)this + 0xAB0);
	}
	template <typename T = int32_t> T& m_CachedAttackMode() {
		return *(T*)((uintptr_t)this + 0xAB4);
	}
	template <typename T = Il2CppVector3> T& m_AttackDirection() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& mCurrentSpecialMove() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = float> T& m_MoveAnimSpeedConfigValue() {
		return *(T*)((uintptr_t)this + 0xACC);
	}
	template <typename T = bool> T& DebugDoForceCrossUpdateAnim() {
		return *(T*)((uintptr_t)this + 0xAD0);
	}
	template <typename T = int32_t> T& m_CurDeadParam() {
		return *(T*)((uintptr_t)this + 0xAD4);
	}
	template <typename T = bool> T& UseRandomDeadAnim() {
		return *(T*)((uintptr_t)this + 0xAD8);
	}
	template <typename T = Il2CppVector3> T& m_VelocityOfIndividualBehavior() {
		return *(T*)((uintptr_t)this + 0xADC);
	}
	template <typename T = Il2CppVector3> T& m_VelocityOfCrowdBehavior() {
		return *(T*)((uintptr_t)this + 0xAE8);
	}
	template <typename T = uintptr_t> T& CrowdForceCom() {
		return *(T*)((uintptr_t)this + 0xAF4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ParasiticPooledGOs() {
		return *(T*)((uintptr_t)this + 0xAF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpawnChecker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCollidersOnMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveLogicalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidatePawnProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPooledMeshGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnPooledMeshGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLODLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPerformAttackMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPerformMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPerformRemoteAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTargetInSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTargetInAttackRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeleeHitDetection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HitDetectionSquareShaped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HitDetectionFanShaped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginWander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndWander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpeedScaleForHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysNavMeshMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPutUpWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPutDownWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDesiredFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDesiredFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDesiredFocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFocalFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDesireRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDesireRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRotationFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateTowardDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateTowardRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTrailTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyReachedPathEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFollowSWSPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AffectedByCrowdForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSpecialMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BeginSpecialMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSpecialMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpecialMoveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPooledObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnPooledObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnAllParasticPooledGOs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBumpWithPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CouldPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrouchComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}

	template <typename T = uintptr_t> T get_OuterCollider() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379CC8))(this);
	}
	template <typename T = float> T get_ShootingAccuracy() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379DB0))(this);
	}
	template <typename T = uintptr_t> T get_CachedFSM() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379DB8))(this);
	}
	template <typename T = uintptr_t> T get_DefaultPhysState() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379EB4))(this);
	}
	template <typename T = int32_t> T get_Score() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379EBC))(this);
	}
	template <typename T = void> T set_Score(int32_t value) {
		return ((T (*)(PVEAIPawn*, int32_t))(Il2CppBase() + 0x4379EC4))(this, value);
	}
	template <typename T = uintptr_t> T get_InitActionParam() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4368144))(this);
	}
	template <typename T = uintptr_t> T get_InitActionMode() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436813C))(this);
	}
	template <typename T = Il2CppString*> T get_DieAnimation() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379ECC))(this);
	}
	template <typename T = void> T set_DieAnimation(Il2CppString* value) {
		return ((T (*)(PVEAIPawn*, Il2CppString*))(Il2CppBase() + 0x4379ED4))(this, value);
	}
	template <typename T = uintptr_t> T get_SpawnPoint() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379EDC))(this);
	}
	template <typename T = void> T set_SpawnPoint(uintptr_t value) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4379EE4))(this, value);
	}
	template <typename T = uintptr_t> T get_EffectComponent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379EEC))(this);
	}
	template <typename T = int32_t> T get_LODLevel() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379EF4))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379FB0))(this);
	}
	template <typename T = bool> T get_CollideWithPlayerDisabled() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379FB8))(this);
	}
	template <typename T = void> T set_CollideWithPlayerDisabled(bool value) {
		return ((T (*)(PVEAIPawn*, bool))(Il2CppBase() + 0x4379FC0))(this, value);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379FC8))(this);
	}
	template <typename T = uintptr_t> T get_NavAgent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4367C30))(this);
	}
	template <typename T = float> T get_MaxAngularSpeed() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379FD0))(this);
	}
	template <typename T = void> T set_MaxAngularSpeed(float value) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x4372D90))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_DesiredRot() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4379FD8))(this);
	}
	template <typename T = void> T set_DesiredRot(Il2CppQuaternion value) {
		return ((T (*)(PVEAIPawn*, Il2CppQuaternion))(Il2CppBase() + 0x4379FEC))(this, value);
	}
	template <typename T = bool> T get_HasPendingWaypointPath() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A004))(this);
	}
	template <typename T = uintptr_t> T get_SplineMove() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4372108))(this);
	}
	template <typename T = void> T set_SplineMove(uintptr_t value) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4367760))(this, value);
	}
	template <typename T = float> T get_AttackRange() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A00C))(this);
	}
	template <typename T = uintptr_t> T get_MyAIWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A114))(this);
	}
	template <typename T = int32_t> T get_CachedAttackMode() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4373858))(this);
	}
	template <typename T = uintptr_t> T get_CurrentSpecialMove() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A11C))(this);
	}
	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A130))(this);
	}
	template <typename T = int32_t> T get_CurDeadParam() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436AE8C))(this);
	}
	template <typename T = void> T set_CurDeadParam(int32_t value) {
		return ((T (*)(PVEAIPawn*, int32_t))(Il2CppBase() + 0x437A15C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_VelocityOfIndividualBehavior() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A164))(this);
	}
	template <typename T = Il2CppVector3> T get_VelocityOfCrowdBehavior() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A180))(this);
	}
	template <typename T = bool> T get_IsCrowdBehaviorEnabled() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A19C))(this);
	}
	template <typename T = void> T set_IsCrowdBehaviorEnabled(bool value) {
		return ((T (*)(PVEAIPawn*, bool))(Il2CppBase() + 0x437A280))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A3E0))(this);
	}
	template <typename T = void> T InitFSM() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437A558))(this);
	}
	template <typename T = void> T SetSpawnChecker(uintptr_t checker) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437AB64))(this, checker);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437AC3C))(this, info);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437B344))(this);
	}
	template <typename T = void> T ResetCollidersOnMesh() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437B444))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437B50C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436BB8C))(this);
	}
	template <typename T = void> T ConfigActorRoot() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436C05C))(this);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437B8A8))(this);
	}
	template <typename T = void> T GiveLogicalWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437B970))(this);
	}
	template <typename T = void> T ValidatePawnProperties() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437BB30))(this);
	}
	template <typename T = uintptr_t> T CreatePlayerInfo(uint32_t playerID, uint32_t actorID, uintptr_t camp) {
		return ((T (*)(PVEAIPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x437BD0C))(this, playerID, actorID, camp);
	}
	template <typename T = uintptr_t> T SpawnPooledMeshGO(uintptr_t socketTrans, int32_t assetID) {
		return ((T (*)(PVEAIPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x437BF80))(this, socketTrans, assetID);
	}
	template <typename T = void> T DespawnPooledMeshGO(uintptr_t meshGO, bool Is3P) {
		return ((T (*)(PVEAIPawn*, uintptr_t, bool))(Il2CppBase() + 0x437C0D4))(this, meshGO, Is3P);
	}
	template <typename T = void> T UpdateLODLevel() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437C408))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x437C648))(this, deltaTime);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4369694))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437C95C))(this);
	}
	template <typename T = uintptr_t> T GetCurrentTarget() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437CC1C))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t InTarget, int32_t AttackMode) {
		return ((T (*)(PVEAIPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x437CD50))(this, InTarget, AttackMode);
	}
	template <typename T = bool> T CanPerformAttackMode(int32_t mode, uintptr_t target) {
		return ((T (*)(PVEAIPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x437CF48))(this, mode, target);
	}
	template <typename T = bool> T CanPerformMeleeAttack(uintptr_t target) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437D078))(this, target);
	}
	template <typename T = bool> T CanPerformRemoteAttack(uintptr_t target) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437D1A8))(this, target);
	}
	template <typename T = bool> T IsTargetInSight(uintptr_t target, bool UseLineCheck) {
		return ((T (*)(PVEAIPawn*, uintptr_t, bool))(Il2CppBase() + 0x436A2C0))(this, target, UseLineCheck);
	}
	template <typename T = void> T PerformStartFire() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437D2FC))(this);
	}
	template <typename T = void> T PerformStopFire() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437D3C4))(this);
	}
	template <typename T = void> T OnBeginAttack(int32_t mode) {
		return ((T (*)(PVEAIPawn*, int32_t))(Il2CppBase() + 0x437D48C))(this, mode);
	}
	template <typename T = bool> T IsTargetInAttackRange(uintptr_t target, int32_t mode) {
		return ((T (*)(PVEAIPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x437D6F8))(this, target, mode);
	}
	template <typename T = void> T MeleeHitDetection() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437D8C0))(this);
	}
	template <typename T = void> T HitDetectionSquareShaped() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437DD2C))(this);
	}
	template <typename T = void> T HitDetectionFanShaped() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437D9B4))(this);
	}
	template <typename T = bool> T ProcessHit(uintptr_t impactInfo) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437E0D8))(this, impactInfo);
	}
	template <typename T = void> T LaunchProjectile() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437E77C))(this);
	}
	template <typename T = void> T InstantFire() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437E9B8))(this);
	}
	template <typename T = void> T BeginWander() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437EA80))(this);
	}
	template <typename T = void> T EndWander() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437EB54))(this);
	}
	template <typename T = void> T UpdateSpeedScaleForHitEffect() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437EC28))(this);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(PVEAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x436BF10))(this, preState, curState);
	}
	template <typename T = void> T PhysNavMeshMoving(float deltaTime) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x437ED90))(this, deltaTime);
	}
	template <typename T = void> T AdjustRotation(Il2CppVector3 vel) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3))(Il2CppBase() + 0x437F638))(this, vel);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4373028))(this);
	}
	template <typename T = void> T OnStartMove() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436C208))(this);
	}
	template <typename T = void> T OnStopMove() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436C2D4))(this);
	}
	template <typename T = void> T OnPutUpWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436C3A0))(this);
	}
	template <typename T = void> T OnPutDownWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x436C46C))(this);
	}
	template <typename T = void> T MoveToward(Il2CppVector3 Dest, uintptr_t goalActor) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4371C3C))(this, Dest, goalActor);
	}
	template <typename T = void> T SetDesiredFocalPoint(Il2CppVector3 focalPoint, float focalDistance) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3, float))(Il2CppBase() + 0x437FF48))(this, focalPoint, focalDistance);
	}
	template <typename T = void> T UpdateDesiredFocalPoint(Il2CppVector3 focalPoint) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3))(Il2CppBase() + 0x4380064))(this, focalPoint);
	}
	template <typename T = void> T ClearDesiredFocalPoint() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43728A4))(this);
	}
	template <typename T = bool> T HasFocalFinished(float destOffset) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x4372AFC))(this, destOffset);
	}
	template <typename T = void> T SetDesireRot(Il2CppQuaternion rot) {
		return ((T (*)(PVEAIPawn*, Il2CppQuaternion))(Il2CppBase() + 0x437224C))(this, rot);
	}
	template <typename T = void> T ClearDesireRot() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4372414))(this);
	}
	template <typename T = bool> T HasRotationFinished(float destOffset) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x43725AC))(this, destOffset);
	}
	template <typename T = void> T RotateTowardDirection(Il2CppVector3 dir) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3))(Il2CppBase() + 0x4380164))(this, dir);
	}
	template <typename T = void> T RotateTowardRot(Il2CppQuaternion rot) {
		return ((T (*)(PVEAIPawn*, Il2CppQuaternion))(Il2CppBase() + 0x4380290))(this, rot);
	}
	template <typename T = void> T ChangeSpeed(float speed) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x43785A8))(this, speed);
	}
	template <typename T = void> T EndTrailTarget() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x438042C))(this);
	}
	template <typename T = void> T OnDestChanged(Il2CppVector3 newDest) {
		return ((T (*)(PVEAIPawn*, Il2CppVector3))(Il2CppBase() + 0x4380520))(this, newDest);
	}
	template <typename T = void> T SetPath(uintptr_t path) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4380688))(this, path);
	}
	template <typename T = void> T NotifyReachedPathEnd(uintptr_t path) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4380854))(this, path);
	}
	template <typename T = void> T StartFollowSWSPath(bool bStart) {
		return ((T (*)(PVEAIPawn*, bool))(Il2CppBase() + 0x43809F8))(this, bStart);
	}
	template <typename T = bool> T AffectedByCrowdForce(uintptr_t otherPawn) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4380BA0))(this, otherPawn);
	}
	template <typename T = void> T ClampVelocity() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4380C78))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4380E14))(this);
	}
	template <typename T = void> T PlayHitEffect(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(PVEAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4380F40))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PVEAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x4381134))(this, isHeadShot, damageType);
	}
	template <typename T = void> T DelayDie() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x438137C))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(PVEAIPawn*, bool))(Il2CppBase() + 0x4381588))(this, isHeadShot);
	}
	template <typename T = void> T BeginSpecialMove(Il2CppString* animTriggerName, float animLength, bool bRandomAnim, int32_t randomValue) {
		return ((T (*)(PVEAIPawn*, Il2CppString*, float, bool, int32_t))(Il2CppBase() + 0x43816B0))(this, animTriggerName, animLength, bRandomAnim, randomValue);
	}
	template <typename T = void> T BeginSpecialMove_1(uintptr_t move, bool bRandomAnim, int32_t randomValue) {
		return ((T (*)(PVEAIPawn*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4381BE8))(this, move, bRandomAnim, randomValue);
	}
	template <typename T = void> T EndSpecialMove() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4381D10))(this);
	}
	template <typename T = void> T OnSpecialMoveEnd(uintptr_t specialMove) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4381E10))(this, specialMove);
	}
	template <typename T = void> T SetAnimatorPara(float deltaTime) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x4381EF4))(this, deltaTime);
	}
	template <typename T = uintptr_t> T SpawnPooledObj(bool despawnWhenDestroyingActor, int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent) {
		return ((T (*)(PVEAIPawn*, bool, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t))(Il2CppBase() + 0x437A87C))(this, despawnWhenDestroyingActor, assetID, pos, rot, lifeTime, parent);
	}
	template <typename T = void> T DespawnPooledObj(uintptr_t go) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x437C1CC))(this, go);
	}
	template <typename T = void> T DespawnAllParasticPooledGOs() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x437CA44))(this);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4369B00))(this);
	}
	template <typename T = void> T NotifyBumpWithPlayer(uintptr_t pawn, Il2CppVector3 HitNormal) {
		return ((T (*)(PVEAIPawn*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4381FE4))(this, pawn, HitNormal);
	}
	template <typename T = bool> T CouldPlaySound() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43820D4))(this);
	}
	template <typename T = void> T StartCrouch() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4375F8C))(this);
	}
	template <typename T = void> T EndCrouch() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43761A8))(this);
	}
	template <typename T = uintptr_t> T GetCrouchComponentType() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43821E0))(this);
	}
	template <typename T = void> T ForceAimRotation(Il2CppQuaternion aimRot) {
		return ((T (*)(PVEAIPawn*, Il2CppQuaternion))(Il2CppBase() + 0x438230C))(this, aimRot);
	}
	template <typename T = bool> T get_EnableAnimatorLOD() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x438242C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PVEAIPawn*, uintptr_t))(Il2CppBase() + 0x4382588))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigAnimComponent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetCollidersOnMesh() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43825A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43825A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43825B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(PVEAIPawn*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x43825B8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnPooledMeshGO(uintptr_t P0, int32_t P1) {
		return ((T (*)(PVEAIPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x43825D8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_DespawnPooledMeshGO(uintptr_t P0, bool P1) {
		return ((T (*)(PVEAIPawn*, uintptr_t, bool))(Il2CppBase() + 0x43825E0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x43825E8))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetMaxSpeed() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43825F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x43825F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPhysicsStateChanged(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVEAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4382600))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PhysNavMeshMoving(float P0) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x4382608))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitEffect(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVEAIPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4382618))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PVEAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x4382620))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(PVEAIPawn*, bool))(Il2CppBase() + 0x4382628))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetAnimatorPara(float P0) {
		return ((T (*)(PVEAIPawn*, float))(Il2CppBase() + 0x4382630))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382638))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CouldPlaySound() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382640))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCrouchComponentType() {
		return ((T (*)(PVEAIPawn*))(Il2CppBase() + 0x4382648))(this);
	}

};

}
