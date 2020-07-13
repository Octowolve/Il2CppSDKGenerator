#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnRagdollComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnRagdollComponent"));
	}

	template <typename T = float> T& m_DeadToFrozeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TargetPinWeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_StartPinWeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TickPinTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_FreezeRunningTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_MaxRagdooDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_DelayActiveTimeRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsUseKinematic() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_SolverVelocityIterations() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_SolverVelocityIterationsLowEnd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_MaxPVPImpulseMagnitue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_MaxVelocityMagnitue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_ImpulseMulitplier() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_ImpulseDetectRadius() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_EnableAngularLimits() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_EnableInternalCollision() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = float> T& m_ZombieImpulseMultiplier() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_MaxZombieImpulseMagnitue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> static T& m_DetectImpulseRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CurrRigidbodyInterpolation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& m_ImpulseStaticMultiplier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& m_UseVelocityInsteadOfPulse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& m_StaticEnableAngularLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_StaticEnableInnerCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& m_StaticSolverIterationCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& RigHeadPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& m_CachePupetMaster() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_PuppetMaster() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_Ragdoll() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_RunningRagdoll() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_TickTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_RunningRagdollTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_TickPinWeightTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_RagdollState() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_FreezeTickTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_DelayActiveTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_IsRagdollActive() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> static T& limbChildDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& UseAnimatePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& NeedToApplyForce() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MusclesToApplyForce() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rigidBodysToApplyForce() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& ForceVector() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& DyingDamageInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> static T& UseEditorCachePupetMaster() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21);
	}
	template <typename T = bool> static T& m_EnablePhysAggregate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_CacheCollide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppVector3> static T& m_PrePawnCollisionHalfExtent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyMuscleWeightAsWell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxImpulseMagnitude() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckApplyForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecursivelySetPinWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImpulseStaticMultipler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyForceOnMuscle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMusclesByHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRagDollByDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRagDollRigidBoneByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRagDollMappingRigidBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDeadRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModelMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRunRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalFreeze() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalCleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPuppetMaster() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPuppetMasterAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBoneCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldActiveAtStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t, bool))(Il2CppBase() + 0x16C44BC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4648))(this);
	}
	template <typename T = bool> T ModifyMuscleWeightAsWell() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4704))(this);
	}
	template <typename T = int32_t> T get_SolverVelocityIterations() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C47D4))(this);
	}
	template <typename T = void> T set_SolverVelocityIterations(int32_t value) {
		return ((T (*)(PawnRagdollComponent*, int32_t))(Il2CppBase() + 0x16C47DC))(this, value);
	}
	template <typename T = bool> T get_IsUseKinematic() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C47E4))(this);
	}
	template <typename T = void> T set_IsUseKinematic(bool value) {
		return ((T (*)(PawnRagdollComponent*, bool))(Il2CppBase() + 0x16C47EC))(this, value);
	}
	template <typename T = float> T get_DelayActiveTimeRate() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C47F4))(this);
	}
	template <typename T = void> T set_DelayActiveTimeRate(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C47FC))(this, value);
	}
	template <typename T = float> T get_DeadToFrozeTime() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4804))(this);
	}
	template <typename T = void> T set_DeadToFrozeTime(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C480C))(this, value);
	}
	template <typename T = float> T get_TargetPinWeight() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4814))(this);
	}
	template <typename T = void> T set_TargetPinWeight(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C481C))(this, value);
	}
	template <typename T = float> T get_StartPinWeight() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4824))(this);
	}
	template <typename T = void> T set_StartPinWeight(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C482C))(this, value);
	}
	template <typename T = float> T get_TickPinTime() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4834))(this);
	}
	template <typename T = void> T set_TickPinTime(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C483C))(this, value);
	}
	template <typename T = float> T get_FreezeRunningTime() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4844))(this);
	}
	template <typename T = void> T set_FreezeRunningTime(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C484C))(this, value);
	}
	template <typename T = float> T get_MaxRagdooDistance() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4854))(this);
	}
	template <typename T = void> T set_MaxRagdooDistance(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C485C))(this, value);
	}
	template <typename T = float> T get_ImpulseMulitplier() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4864))(this);
	}
	template <typename T = void> T set_ImpulseMulitplier(float value) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C486C))(this, value);
	}
	template <typename T = float> T GetMaxImpulseMagnitude() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4874))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C4944))(this, pawn);
	}
	template <typename T = void> T CheckApplyForce() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x162B9D0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C4E78))(this, deltaTime);
	}
	template <typename T = void> T StopRagdoll() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x167B8E4))(this);
	}
	template <typename T = void> T RecursivelySetPinWeight(Il2CppString* rootRigidBody, float pinWeight) {
		return ((T (*)(PawnRagdollComponent*, Il2CppString*, float))(Il2CppBase() + 0x16C61C4))(this, rootRigidBody, pinWeight);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(PawnRagdollComponent*, bool))(Il2CppBase() + 0x16C65B4))(this, isRelevant);
	}
	template <typename T = void> T ResetRagdoll() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16673B8))(this);
	}
	template <typename T = void> T ActiveRagdoll() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C51C4))(this);
	}
	template <typename T = float> T ImpulseStaticMultipler() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C6AE4))(this);
	}
	template <typename T = void> T ApplyForceOnMuscle() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C4A48))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMusclesByHitGroup(uintptr_t hitInfo) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C66A8))(this, hitInfo);
	}
	template <typename T = uintptr_t> T GetRagDollByDamageType(uintptr_t hitGroup) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C6BEC))(this, hitGroup);
	}
	template <typename T = uintptr_t> T GetRagDollRigidBoneByName(Il2CppString* rigidBodyName) {
		return ((T (*)(PawnRagdollComponent*, Il2CppString*))(Il2CppBase() + 0x16C6CE4))(this, rigidBodyName);
	}
	template <typename T = Il2CppString*> T GetRagDollMappingRigidBone(uintptr_t hitGroup) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C6F7C))(this, hitGroup);
	}
	template <typename T = void> T ProcessDeadRagdoll(Il2CppString* stateName, float speed) {
		return ((T (*)(PawnRagdollComponent*, Il2CppString*, float))(Il2CppBase() + 0x1674A48))(this, stateName, speed);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C744C))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C753C))(this);
	}
	template <typename T = bool> T IsModelMatch(uintptr_t root) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C7778))(this, root);
	}
	template <typename T = bool> T CheckMachine() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C7954))(this);
	}
	template <typename T = bool> T CheckRunRagdoll() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C71BC))(this);
	}
	template <typename T = void> T InternalFreeze() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C5C70))(this);
	}
	template <typename T = void> T InternalCleanup() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C5E94))(this);
	}
	template <typename T = void> T InitPuppetMaster() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C7A24))(this);
	}
	template <typename T = uintptr_t> T GetPuppetMasterAssetID() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C7DAC))(this);
	}
	template <typename T = void> T CheckBoneCollision() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C5768))(this);
	}
	template <typename T = bool> T ShouldActiveAtStart() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C7ED0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnRagdollComponent*, uintptr_t))(Il2CppBase() + 0x16C86CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnRagdollComponent*, float))(Il2CppBase() + 0x16C86D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(PawnRagdollComponent*, bool))(Il2CppBase() + 0x16C86DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C86E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnRagdollComponent*))(Il2CppBase() + 0x16C86EC))(this);
	}

};

}
