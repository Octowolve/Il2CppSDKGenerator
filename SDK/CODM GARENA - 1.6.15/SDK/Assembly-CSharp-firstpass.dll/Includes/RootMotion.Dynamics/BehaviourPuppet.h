#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BehaviourPuppet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "BehaviourPuppet"));
	}

	template <typename T = uintptr_t> T& masterProps() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& groundLayers() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& collisionLayers() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& collisionThreshold() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& collisionResistance() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& collisionResistanceMultipliers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& maxCollisions() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& regainPinSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& boostFalloff() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& defaults() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groupOverrides() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& knockOutDistance() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& unpinnedMuscleWeightMlp() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& maxRigidbodyVelocity() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& pinWeightThreshold() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& unpinnedMuscleKnockout() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& dropProps() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = bool> T& canGetUp() {
		return *(T*)((uintptr_t)this + 0xE2);
	}
	template <typename T = float> T& getUpDelay() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& blendToAnimationTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& maxGetUpVelocity() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& minGetUpDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& getUpCollisionResistanceMlp() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& getUpRegainPinSpeedMlp() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& getUpKnockOutDistanceMlp() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& getUpOffsetProne() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& getUpOffsetSupine() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& onGetUpProne() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& onGetUpSupine() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& onLoseBalance() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& onLoseBalanceFromPuppet() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& onLoseBalanceFromGetUp() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& onRegainBalance() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& OnCollision() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& OnCollisionImpulse() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& canMoveTarget() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& unpinnedTimer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& getUpTimer() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppVector3> T& hipsForward() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppVector3> T& hipsUp() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& getupAnimationBlendWeight() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& getupAnimationBlendWeightV() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = bool> T& getUpTargetFixed() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& lastNormalMode() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& collisions() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& eventsEnabled() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& lastKnockOutDistance() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& knockOutDistanceSqr() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& getupDisabled() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& hasCollidedSinceGetUp() {
		return *(T*)((uintptr_t)this + 0x1B1);
	}
	template <typename T = bool> T& hasBoosted() {
		return *(T*)((uintptr_t)this + 0x1B2);
	}
	template <typename T = uintptr_t> T& broadcaster() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppVector3> T& getUpPosition() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& dropPropFlag() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}

	template <typename T = void> T OpenUserManual() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AA530))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AA5B4))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AA638))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AA640))(this, value);
	}
	template <typename T = void> T OnReactivate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AA648))(this);
	}
	template <typename T = void> T Reset(Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(BehaviourPuppet*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x38AA950))(this, position, rotation);
	}
	template <typename T = void> T OnTeleport(Il2CppQuaternion deltaRotation, Il2CppVector3 deltaPosition, Il2CppVector3 pivot, bool moveToTarget) {
		return ((T (*)(BehaviourPuppet*, Il2CppQuaternion, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x38AAA0C))(this, deltaRotation, deltaPosition, pivot, moveToTarget);
	}
	template <typename T = void> T OnInitiate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AAB20))(this);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AB340))(this);
	}
	template <typename T = void> T KillStart() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ABB58))(this);
	}
	template <typename T = void> T KillEnd() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ABBE8))(this);
	}
	template <typename T = void> T Resurrect() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ABBF0))(this);
	}
	template <typename T = void> T OnDeactivate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ABC88))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ABC94))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AC804))(this);
	}
	template <typename T = bool> T SetKinematic() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ACBFC))(this);
	}
	template <typename T = void> T OnReadBehaviour() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38ACCE8))(this);
	}
	template <typename T = void> T BlendMuscleMapping(int32_t muscleIndex, uintptr_t to) {
		return ((T (*)(BehaviourPuppet*, int32_t, uintptr_t))(Il2CppBase() + 0x38AC9C4))(this, muscleIndex, to);
	}
	template <typename T = void> T OnMuscleAdded(uintptr_t m) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AD754))(this, m);
	}
	template <typename T = void> T OnMuscleRemoved(uintptr_t m) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AD790))(this, m);
	}
	template <typename T = void> T MoveTarget(Il2CppVector3 position) {
		return ((T (*)(BehaviourPuppet*, Il2CppVector3))(Il2CppBase() + 0x38ACFF0))(this, position);
	}
	template <typename T = void> T RotateTarget(Il2CppQuaternion rotation) {
		return ((T (*)(BehaviourPuppet*, Il2CppQuaternion))(Il2CppBase() + 0x38AD7C4))(this, rotation);
	}
	template <typename T = void> T GroundTarget(uintptr_t layers) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AD814))(this, layers);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AD824))(this);
	}
	template <typename T = void> T Boost(float immunity, float impulseMlp) {
		return ((T (*)(BehaviourPuppet*, float, float))(Il2CppBase() + 0x38ADBB4))(this, immunity, impulseMlp);
	}
	template <typename T = void> T Boost_1(int32_t muscleIndex, float immunity, float impulseMlp) {
		return ((T (*)(BehaviourPuppet*, int32_t, float, float))(Il2CppBase() + 0x38ADC3C))(this, muscleIndex, immunity, impulseMlp);
	}
	template <typename T = void> T Boost_2(int32_t muscleIndex, float immunity, float impulseMlp, float boostParents, float boostChildren) {
		return ((T (*)(BehaviourPuppet*, int32_t, float, float, float, float))(Il2CppBase() + 0x38ADF14))(this, muscleIndex, immunity, impulseMlp, boostParents, boostChildren);
	}
	template <typename T = void> T BoostImmunity(float immunity) {
		return ((T (*)(BehaviourPuppet*, float))(Il2CppBase() + 0x38AE1D4))(this, immunity);
	}
	template <typename T = void> T BoostImmunity_1(int32_t muscleIndex, float immunity) {
		return ((T (*)(BehaviourPuppet*, int32_t, float))(Il2CppBase() + 0x38ADC74))(this, muscleIndex, immunity);
	}
	template <typename T = void> T BoostImmunity_2(int32_t muscleIndex, float immunity, float boostParents, float boostChildren) {
		return ((T (*)(BehaviourPuppet*, int32_t, float, float, float))(Il2CppBase() + 0x38AE254))(this, muscleIndex, immunity, boostParents, boostChildren);
	}
	template <typename T = void> T BoostImpulseMlp(float impulseMlp) {
		return ((T (*)(BehaviourPuppet*, float))(Il2CppBase() + 0x38AE300))(this, impulseMlp);
	}
	template <typename T = void> T BoostImpulseMlp_1(int32_t muscleIndex, float impulseMlp) {
		return ((T (*)(BehaviourPuppet*, int32_t, float))(Il2CppBase() + 0x38ADDCC))(this, muscleIndex, impulseMlp);
	}
	template <typename T = void> T BoostImpulseMlp_2(int32_t muscleIndex, float impulseMlp, float boostParents, float boostChildren) {
		return ((T (*)(BehaviourPuppet*, int32_t, float, float, float))(Il2CppBase() + 0x38AE370))(this, muscleIndex, impulseMlp, boostParents, boostChildren);
	}
	template <typename T = void> T Unpin() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AE41C))(this);
	}
	template <typename T = void> T OnMuscleHitBehaviour(uintptr_t hit) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AE4E8))(this, hit);
	}
	template <typename T = void> T OnMuscleCollisionBehaviour(uintptr_t m) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AE70C))(this, m);
	}
	template <typename T = float> T GetImpulse(uintptr_t m, uintptr_t layerThreshold) {
		return ((T (*)(BehaviourPuppet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38AEC0C))(this, m, layerThreshold);
	}
	template <typename T = void> T UnPin(int32_t muscleIndex, float unpin) {
		return ((T (*)(BehaviourPuppet*, int32_t, float))(Il2CppBase() + 0x38AE5FC))(this, muscleIndex, unpin);
	}
	template <typename T = void> T UnPinMuscle(int32_t muscleIndex, float unpin) {
		return ((T (*)(BehaviourPuppet*, int32_t, float))(Il2CppBase() + 0x38AF0D8))(this, muscleIndex, unpin);
	}
	template <typename T = bool> T Activate(uintptr_t collision, float impulse) {
		return ((T (*)(BehaviourPuppet*, uintptr_t, float))(Il2CppBase() + 0x38AEE70))(this, collision, impulse);
	}
	template <typename T = bool> T IsProne() {
		return ((T (*)(BehaviourPuppet*))(Il2CppBase() + 0x38AF3F0))(this);
	}
	template <typename T = float> T GetFalloff(int32_t i, int32_t muscleIndex, float falloffParents, float falloffChildren) {
		return ((T (*)(BehaviourPuppet*, int32_t, int32_t, float, float))(Il2CppBase() + 0x38AE02C))(this, i, muscleIndex, falloffParents, falloffChildren);
	}
	template <typename T = float> T GetFalloff_1(int32_t i, int32_t muscleIndex, float falloffParents, float falloffChildren, float falloffGroup) {
		return ((T (*)(BehaviourPuppet*, int32_t, int32_t, float, float, float))(Il2CppBase() + 0x38AEF20))(this, i, muscleIndex, falloffParents, falloffChildren, falloffGroup);
	}
	template <typename T = bool> T InGroup(uintptr_t group1, uintptr_t group2) {
		return ((T (*)(BehaviourPuppet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38AF4E8))(this, group1, group2);
	}
	template <typename T = uintptr_t> T GetProps(uintptr_t group) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AC6B0))(this, group);
	}
	template <typename T = void> T SetState(uintptr_t newState) {
		return ((T (*)(BehaviourPuppet*, uintptr_t))(Il2CppBase() + 0x38AB400))(this, newState);
	}
	template <typename T = void> T SetColliders(bool unpinned) {
		return ((T (*)(BehaviourPuppet*, bool))(Il2CppBase() + 0x38AF724))(this, unpinned);
	}
	template <typename T = void> T SetColliders_1(uintptr_t m, bool unpinned) {
		return ((T (*)(BehaviourPuppet*, uintptr_t, bool))(Il2CppBase() + 0x38AA718))(this, m, unpinned);
	}

};

}
