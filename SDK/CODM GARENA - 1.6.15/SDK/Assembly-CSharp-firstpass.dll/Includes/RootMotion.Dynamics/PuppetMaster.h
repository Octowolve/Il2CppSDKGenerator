#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PuppetMaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PuppetMaster"));
	}

	template <typename T = uintptr_t> T& humanoidConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& targetRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& stateSettings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& blendTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& fixTargetTransforms() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& solverIterationCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& visualizeTargetPose() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mappingWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& pinWeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& muscleWeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& muscleSpring() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& muscleDamper() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& pinPow() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& pinDistanceFalloff() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& updateJointAnchors() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& supportTranslationAnimation() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& angularLimits() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& internalCollisions() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& muscles() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnPostInitiate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& OnRead() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& OnWrite() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& OnPostLateUpdate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OnFixTransforms() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& OnHierarchyChanged() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OnMuscleRemoved() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& _targetAnimator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& targetAnimation() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& behaviours() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& initiated() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& solvers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& internalCollisionsEnabled() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& angularLimitsEnabled() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = bool> T& fixedFrame() {
		return *(T*)((uintptr_t)this + 0x96);
	}
	template <typename T = int32_t> T& lastSolverIterationCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isLegacy() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& animatorDisabled() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = bool> T& awakeFailed() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = bool> T& interpolated() {
		return *(T*)((uintptr_t)this + 0x9F);
	}
	template <typename T = bool> T& freezeFlag() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& hasBeenDisabled() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& hierarchyIsFlat() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = bool> T& teleport() {
		return *(T*)((uintptr_t)this + 0xA3);
	}
	template <typename T = Il2CppVector3> T& teleportPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppQuaternion> T& teleportRotation() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& teleportMoveToTarget() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& rebuildFlag() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = bool> T& onPostRebuildFlag() {
		return *(T*)((uintptr_t)this + 0xC2);
	}
	template <typename T = bool> T& isSolversInitiaed() {
		return *(T*)((uintptr_t)this + 0xC3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& defaultMuscles() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& bIsMusclesInitiated() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_UseDynamicRef() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = Il2CppVector3> T& rebuildPelvisPos() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppQuaternion> T& rebuildPelvisRot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& BodyAddedToAggregate() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& m_AggregateIndex() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& bIsOptimizationInitiate() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& m_IgnoreBehaviour() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& m_EnableColliderResponse() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = bool> T& m_AddColliderResponseOnSpecificMuscleOnly() {
		return *(T*)((uintptr_t)this + 0xF3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_ColliderResponseNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_EnableJointBreak() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& isSwitchingMode() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = uintptr_t> T& activeMode() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& lastMode() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& mappingBlend() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& isKilling() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& OnFreeze() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& OnUnfreeze() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& OnDeath() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& OnResurrection() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& activeState() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& lastState() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& angularLimitsEnabledOnKill() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& internalCollisionsEnabledOnKill() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = bool> T& animationDisabledbyStates() {
		return *(T*)((uintptr_t)this + 0x122);
	}
	template <typename T = bool> T& storeTargetMappedState() {
		return *(T*)((uintptr_t)this + 0x123);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetChildren() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetMappedPositions() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetMappedRotations() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetSampledPositions() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetSampledRotations() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& targetMappedStateStored() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& targetMappedStateSampled() {
		return *(T*)((uintptr_t)this + 0x139);
	}
	template <typename T = bool> T& sampleTargetMappedState() {
		return *(T*)((uintptr_t)this + 0x13A);
	}
	template <typename T = bool> T& hasProp() {
		return *(T*)((uintptr_t)this + 0x13B);
	}

	template <typename T = void> T OpenUserManualSetup() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDBA4))(this);
	}
	template <typename T = void> T OpenUserManualComponent() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDC28))(this);
	}
	template <typename T = void> T OpenUserManualPerformance() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDCAC))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDD30))(this);
	}
	template <typename T = void> T OpenSetupTutorial() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDDB4))(this);
	}
	template <typename T = void> T OpenComponentTutorial() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDE38))(this);
	}
	template <typename T = void> T ResetStateSettings() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDEBC))(this);
	}
	template <typename T = uintptr_t> T get_targetAnimator() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A8AD8))(this);
	}
	template <typename T = void> T set_targetAnimator(uintptr_t value) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38BDEEC))(this, value);
	}
	template <typename T = uintptr_t> T get_targetAnimation() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A8D78))(this);
	}
	template <typename T = void> T set_targetAnimation(uintptr_t value) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38BDEF4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_behaviours() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A6330))(this);
	}
	template <typename T = void> T set_behaviours(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PuppetMaster*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38BDEFC))(this, value);
	}
	template <typename T = bool> T get_isActive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38AC630))(this);
	}
	template <typename T = bool> T get_initiated() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A3488))(this);
	}
	template <typename T = void> T set_initiated(bool value) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38BDF04))(this, value);
	}
	template <typename T = uintptr_t> T get_updateMode() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDF0C))(this);
	}
	template <typename T = bool> T get_controlsAnimator() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BE098))(this);
	}
	template <typename T = bool> T get_isBlending() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A9E9C))(this);
	}
	template <typename T = void> T Teleport(Il2CppVector3 position, Il2CppQuaternion rotation, bool moveToTarget) {
		return ((T (*)(PuppetMaster*, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x38BE11C))(this, position, rotation, moveToTarget);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BE150))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BE1FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BEAB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BFD0C))(this);
	}
	template <typename T = void> T OptimizationInit() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38A3490))(this);
	}
	template <typename T = void> T InitPuppetColliders() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C0B40))(this);
	}
	template <typename T = uintptr_t> T FindTargetRootRecursive(uintptr_t t) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C0E88))(this, t);
	}
	template <typename T = void> T UpdateHierarchiesOffline() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C12AC))(this);
	}
	template <typename T = void> T OptimizationInitiateMuscles() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C1570))(this);
	}
	template <typename T = void> T CachedMusclesOptimizationInitiate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C1608))(this);
	}
	template <typename T = void> T ResetToCurrentTarget() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C1684))(this);
	}
	template <typename T = void> T OptimizationInitiate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BFF20))(this);
	}
	template <typename T = void> T Initiate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BEBC8))(this);
	}
	template <typename T = void> T OnAttachToNewTargetRoot(uintptr_t newTargetRoot) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C2320))(this, newTargetRoot);
	}
	template <typename T = bool> T get_UseDynamicRef() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C258C))(this);
	}
	template <typename T = void> T set_UseDynamicRef(bool value) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38C2594))(this, value);
	}
	template <typename T = bool> T CacheDynamicRefs() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C259C))(this);
	}
	template <typename T = bool> T RestoreTransformRefs() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2328))(this);
	}
	template <typename T = void> T ClearMuscle() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2800))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2860))(this);
	}
	template <typename T = void> T ActivateBehaviour(uintptr_t behaviour) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C21F8))(this, behaviour);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2A88))(this);
	}
	template <typename T = bool> T IsInterpolated() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2C58))(this);
	}
	template <typename T = void> T OnRebuild() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2CF0))(this);
	}
	template <typename T = void> T ReleaseAggregate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C2C20))(this);
	}
	template <typename T = void> T AddRigidBodiesToAggregate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C30E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C3374))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C4BC0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C4D1C))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C513C))(this);
	}
	template <typename T = void> T MoveToTarget() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C5524))(this);
	}
	template <typename T = void> T Read() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C3B2C))(this);
	}
	template <typename T = void> T FixTargetTransforms() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C3910))(this);
	}
	template <typename T = uintptr_t> T get_targetUpdateMode() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BDF40))(this);
	}
	template <typename T = void> T VisualizeTargetPose() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C5AD0))(this);
	}
	template <typename T = void> T VisualizeTargetPose_1(uintptr_t c) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C47FC))(this, c);
	}
	template <typename T = void> T VisualizeHierarchy(uintptr_t t, uintptr_t color) {
		return ((T (*)(PuppetMaster*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38C5E98))(this, t, color);
	}
	template <typename T = void> T SetInternalCollisions(bool collide) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38C4674))(this, collide);
	}
	template <typename T = void> T SetAngularLimits(bool limited) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38C476C))(this, limited);
	}
	template <typename T = void> T AddForceOnMuscle(Il2CppVector3 inDir, float inForece) {
		return ((T (*)(PuppetMaster*, Il2CppVector3, float))(Il2CppBase() + 0x38C601C))(this, inDir, inForece);
	}
	template <typename T = bool> T get_BIsOptimizationInitiate() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BEBC0))(this);
	}
	template <typename T = void> T SetOptimizationInitiate(bool inValue) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38C61D0))(this, inValue);
	}
	template <typename T = void> T AddMuscle(uintptr_t joint, uintptr_t target, uintptr_t connectTo, uintptr_t targetParent, uintptr_t muscleProps, bool forceTreeHierarchy, bool forceLayers) {
		return ((T (*)(PuppetMaster*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x38BCC98))(this, joint, target, connectTo, targetParent, muscleProps, forceTreeHierarchy, forceLayers);
	}
	template <typename T = void> T Rebuild() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C6814))(this);
	}
	template <typename T = void> T RemoveMuscleRecursive(uintptr_t joint, bool attachTarget, bool blockTargetAnimation, uintptr_t removeMode) {
		return ((T (*)(PuppetMaster*, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x38A6A68))(this, joint, attachTarget, blockTargetAnimation, removeMode);
	}
	template <typename T = void> T ReplaceMuscle(uintptr_t oldJoint, uintptr_t newJoint) {
		return ((T (*)(PuppetMaster*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38C6D9C))(this, oldJoint, newJoint);
	}
	template <typename T = void> T SetMuscles(Il2CppArray<uintptr_t>* newMuscles) {
		return ((T (*)(PuppetMaster*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38C6E80))(this, newMuscles);
	}
	template <typename T = void> T DisableMuscleRecursive(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C6F64))(this, joint);
	}
	template <typename T = void> T EnableMuscleRecursive(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C7048))(this, joint);
	}
	template <typename T = void> T FlattenHierarchy() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C712C))(this);
	}
	template <typename T = void> T TreeHierarchy() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7284))(this);
	}
	template <typename T = void> T FixMusclePositions() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7470))(this);
	}
	template <typename T = void> T AddIndexesRecursive(int32_t index, Il2CppArray<uintptr_t>* indexes) {
		return ((T (*)(PuppetMaster*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38C7624))(this, index, indexes);
	}
	template <typename T = bool> T HierarchyIsFlat() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C20AC))(this);
	}
	template <typename T = void> T DisconnectJoint(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C6AF8))(this, joint);
	}
	template <typename T = void> T KillJoint(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C6BCC))(this, joint);
	}
	template <typename T = bool> T get_isSwitchingMode() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BE0FC))(this);
	}
	template <typename T = void> T set_isSwitchingMode(bool value) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38BE780))(this, value);
	}
	template <typename T = void> T DisableImmediately() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C783C))(this);
	}
	template <typename T = void> T SwitchModes() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C78D4))(this);
	}
	template <typename T = void> T DisabledToKinematic() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7A70))(this);
	}
	template <typename T = uintptr_t> T DisabledToActive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7BC8))(this);
	}
	template <typename T = void> T KinematicToDisabled() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7C6C))(this);
	}
	template <typename T = uintptr_t> T KinematicToActive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7D00))(this);
	}
	template <typename T = uintptr_t> T ActiveToDisabled() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7DA4))(this);
	}
	template <typename T = uintptr_t> T ActiveToKinematic() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7E48))(this);
	}
	template <typename T = void> T UpdateInternalCollisions() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C7F0C))(this);
	}
	template <typename T = void> T SetMuscleWeights(uintptr_t group, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x38C7FE4))(this, group, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeights_1(uintptr_t target, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x38C80BC))(this, target, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeights_2(uintptr_t humanBodyBone, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x38C8688))(this, humanBodyBone, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeightsRecursive(uintptr_t target, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x38C8A18))(this, target, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeightsRecursive_1(int32_t muscleIndex, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, int32_t, float, float, float, float))(Il2CppBase() + 0x38C8B80))(this, muscleIndex, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeightsRecursive_2(uintptr_t humanBodyBone, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x38C8CAC))(this, humanBodyBone, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = void> T SetMuscleWeights_3(int32_t muscleIndex, float muscleWeight, float pinWeight, float mappingWeight, float muscleDamper) {
		return ((T (*)(PuppetMaster*, int32_t, float, float, float, float))(Il2CppBase() + 0x38C83FC))(this, muscleIndex, muscleWeight, pinWeight, mappingWeight, muscleDamper);
	}
	template <typename T = uintptr_t> T GetMuscle(uintptr_t target) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C8D14))(this, target);
	}
	template <typename T = uintptr_t> T GetMuscle_1(uintptr_t rigidbody) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C62B0))(this, rigidbody);
	}
	template <typename T = uintptr_t> T GetMuscle_2(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C9044))(this, joint);
	}
	template <typename T = bool> T ContainsJoint(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C2FB4))(this, joint);
	}
	template <typename T = int32_t> T GetMuscleIndex(uintptr_t humanBodyBone) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C86F0))(this, humanBodyBone);
	}
	template <typename T = int32_t> T GetMuscleIndex_1(uintptr_t target) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C8124))(this, target);
	}
	template <typename T = int32_t> T GetMuscleIndex_2(uintptr_t rigidbody) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C8D6C))(this, rigidbody);
	}
	template <typename T = int32_t> T GetMuscleIndex_3(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38C6820))(this, joint);
	}
	template <typename T = uintptr_t> static T SetUp(uintptr_t target, uintptr_t ragdoll, int32_t characterControllerLayer, int32_t ragdollLayer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x38C909C))(0, target, ragdoll, characterControllerLayer, ragdollLayer);
	}
	template <typename T = uintptr_t> static T SetUp_1(uintptr_t target, int32_t characterControllerLayer, int32_t ragdollLayer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x38CA248))(0, target, characterControllerLayer, ragdollLayer);
	}
	template <typename T = void> T SetUpTo(uintptr_t setUpTo, int32_t characterControllerLayer, int32_t ragdollLayer) {
		return ((T (*)(PuppetMaster*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x38C9220))(this, setUpTo, characterControllerLayer, ragdollLayer);
	}
	template <typename T = void> static T RemoveRagdollComponents(uintptr_t target, int32_t characterControllerLayer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x38CA438))(0, target, characterControllerLayer);
	}
	template <typename T = void> T CachedJointRigidbody() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CC228))(this);
	}
	template <typename T = void> T CachedJointConnectedBodyConfigurableJoint() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CC368))(this);
	}
	template <typename T = void> T CachedJointColliders() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CC5D4))(this);
	}
	template <typename T = void> T CachedAllInitiateData() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CC7A0))(this);
	}
	template <typename T = void> T SetUpMuscles(uintptr_t setUpTo) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38CB104))(this, setUpTo);
	}
	template <typename T = uintptr_t> static T FindGroup(uintptr_t animator, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38CC7D4))(0, animator, t);
	}
	template <typename T = void> T RemoveUnnecessaryBones() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CAAE4))(this);
	}
	template <typename T = bool> static T IsClothCollider(uintptr_t collider, Il2CppArray<uintptr_t>* cloths) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38CBD84))(0, collider, cloths);
	}
	template <typename T = bool> T get_isSwitchingState() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38BE104))(this);
	}
	template <typename T = bool> T get_isKilling() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38AC6A8))(this);
	}
	template <typename T = void> T set_isKilling(bool value) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38BE788))(this, value);
	}
	template <typename T = bool> T get_isAlive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38AC694))(this);
	}
	template <typename T = bool> T get_isFrozen() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38ACFDC))(this);
	}
	template <typename T = void> T Kill() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CCE48))(this);
	}
	template <typename T = void> T Kill_1(uintptr_t stateSettings) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38CCE54))(this, stateSettings);
	}
	template <typename T = void> T Freeze() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CCE80))(this);
	}
	template <typename T = void> T Freeze_1(uintptr_t stateSettings) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38CCE8C))(this, stateSettings);
	}
	template <typename T = void> T Resurrect() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CCEB8))(this);
	}
	template <typename T = void> T SwitchStates() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CCEC4))(this);
	}
	template <typename T = uintptr_t> T AliveToDead(bool freeze) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38CCFE0))(this, freeze);
	}
	template <typename T = void> T OnFreezeFlag() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C5774))(this);
	}
	template <typename T = void> T DeadToAlive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD08C))(this);
	}
	template <typename T = void> T SetAnimationEnabled(bool to) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38BE790))(this, to);
	}
	template <typename T = void> T DeadToFrozen() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD1AC))(this);
	}
	template <typename T = void> T FrozenToAlive() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD1B8))(this);
	}
	template <typename T = void> T FrozenToDead() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD468))(this);
	}
	template <typename T = void> T ActivateRagdoll(bool kinematic) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38BE8EC))(this, kinematic);
	}
	template <typename T = bool> T CanFreeze() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD540))(this);
	}
	template <typename T = void> T SampleTargetMappedState() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38AF5FC))(this);
	}
	template <typename T = void> T FixTargetToSampledState(float weight) {
		return ((T (*)(PuppetMaster*, float))(Il2CppBase() + 0x38AD03C))(this, weight);
	}
	template <typename T = void> T StoreTargetMappedState() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C16FC))(this);
	}
	template <typename T = void> T UpdateHierarchies() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C12B0))(this);
	}
	template <typename T = bool> T HasProp() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CDE08))(this);
	}
	template <typename T = void> T UpdateBroadcasterMuscleIndexes() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CDC0C))(this);
	}
	template <typename T = void> T AssignParentAndChildIndexes() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CD60C))(this);
	}
	template <typename T = void> T AddToParentsRecursive(uintptr_t joint, Il2CppArray<uintptr_t>* indexes) {
		return ((T (*)(PuppetMaster*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38CDE84))(this, joint, indexes);
	}
	template <typename T = void> T AddToChildrenRecursive(uintptr_t joint, Il2CppArray<uintptr_t>* indexes, Il2CppArray<uintptr_t>* childFlags) {
		return ((T (*)(PuppetMaster*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38CE0B4))(this, joint, indexes, childFlags);
	}
	template <typename T = void> T AssignKinshipDegrees() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38CDA84))(this);
	}
	template <typename T = void> T AssignKinshipsDownRecursive(Il2CppArray<uintptr_t>* kinshipDegrees, int32_t degree, int32_t index) {
		return ((T (*)(PuppetMaster*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x38CE48C))(this, kinshipDegrees, degree, index);
	}
	template <typename T = void> T AssignKinshipsUpRecursive(Il2CppArray<uintptr_t>* kinshipDegrees, int32_t degree, int32_t index) {
		return ((T (*)(PuppetMaster*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x38CE64C))(this, kinshipDegrees, degree, index);
	}
	template <typename T = int32_t> T GetMuscleIndexLowLevel(uintptr_t joint) {
		return ((T (*)(PuppetMaster*, uintptr_t))(Il2CppBase() + 0x38CE370))(this, joint);
	}
	template <typename T = bool> T IsValid(bool log) {
		return ((T (*)(PuppetMaster*, bool))(Il2CppBase() + 0x38C1600))(this, log);
	}
	template <typename T = bool> T CheckMassVariation(float threshold, bool log) {
		return ((T (*)(PuppetMaster*, float, bool))(Il2CppBase() + 0x38C6308))(this, threshold, log);
	}
	template <typename T = bool> T CheckIfInitiated() {
		return ((T (*)(PuppetMaster*))(Il2CppBase() + 0x38C61D8))(this);
	}

};

}
