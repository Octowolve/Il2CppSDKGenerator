#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class Muscle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "Muscle"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& joint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CachedJointRigidbody() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CachedJointConnectedBodyConfigurableJoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CachedColliders() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& props() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parentIndexes() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& childIndexes() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& childFlags() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& kinshipDegrees() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& broadcaster() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& jointBreakBroadcaster() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_CachedTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_TargetPath() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CachedRigidbody() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CachedConnectedBodyTarget() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_CachedTargetAnimatedPosition() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& targetVelocity() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& targetAngularVelocity() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& mappedVelocity() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& mappedAngularVelocity() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppQuaternion> T& m_CachedTargetRotationRelative() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_CachedRebuildConnectedBody() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_CachedRebuildTargetParent() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& rebuildParent() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& rebuildPosition() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppQuaternion> T& rebuildRotation() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& rebuildTargetPosition() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppQuaternion> T& rebuildTargetRotation() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& rebuildAngularXMotion() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& rebuildAngularYMotion() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& rebuildAngularZMotion() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& slerpDrive() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& lastJointDriveRotationWeight() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& lastRotationDamper() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector3> T& defaultPosition() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppVector3> T& defaultTargetLocalPosition() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppVector3> T& lastMappedPosition() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppQuaternion> T& defaultLocalRotation() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppQuaternion> T& localRotationConvert() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppQuaternion> T& toParentSpace() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppQuaternion> T& toJointSpaceInverse() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppQuaternion> T& toJointSpaceDefault() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppQuaternion> T& targetAnimatedRotation() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = Il2CppQuaternion> T& targetAnimatedWorldRotation() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppQuaternion> T& defaultRotation() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppQuaternion> T& rotationRelativeToTarget() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppQuaternion> T& defaultTargetLocalRotation() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = Il2CppQuaternion> T& lastMappedRotation() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& targetParent() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = uintptr_t> T& connectedBodyTransform() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& angularXMotionDefault() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = uintptr_t> T& angularYMotionDefault() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& angularZMotionDefault() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = bool> T& directTargetParent() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = bool> T& initiated() {
		return *(T*)((uintptr_t)this + 0x229);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliders() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& lastReadTime() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& lastWriteTime() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& disabledColliders() {
		return *(T*)((uintptr_t)this + 0x238);
	}

	template <typename T = uintptr_t> T get_SafeCachedJointRigidbody() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B0238))(this);
	}
	template <typename T = uintptr_t> T get_SafeCachedJointConnectedBodyConfigurableJoint() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B0240))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SafeCachedColliders() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B034C))(this);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38A6A60))(this);
	}
	template <typename T = void> T set_transform(uintptr_t value) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B0400))(this, value);
	}
	template <typename T = bool> T CacheTargetPath(uintptr_t rootTarget) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B0408))(this, rootTarget);
	}
	template <typename T = bool> T RestoreTargetFromPath(uintptr_t rootTarget) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B0B9C))(this, rootTarget);
	}
	template <typename T = Il2CppString*> T getBonePath(uintptr_t bone, uintptr_t rootBone) {
		return ((T (*)(Muscle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38B0788))(this, bone, rootBone);
	}
	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38A5364))(this);
	}
	template <typename T = void> T set_rigidbody(uintptr_t value) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B11AC))(this, value);
	}
	template <typename T = uintptr_t> T get_connectedBodyTarget() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B11B4))(this);
	}
	template <typename T = void> T set_connectedBodyTarget(uintptr_t value) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B11BC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_targetAnimatedPosition() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B11C4))(this);
	}
	template <typename T = void> T set_targetAnimatedPosition(Il2CppVector3 value) {
		return ((T (*)(Muscle*, Il2CppVector3))(Il2CppBase() + 0x38B11D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_colliders() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38AF798))(this);
	}
	template <typename T = Il2CppVector3> T get_targetVelocity() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38AF3DC))(this);
	}
	template <typename T = void> T set_targetVelocity(Il2CppVector3 value) {
		return ((T (*)(Muscle*, Il2CppVector3))(Il2CppBase() + 0x38B11E4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_targetAngularVelocity() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B11F0))(this);
	}
	template <typename T = void> T set_targetAngularVelocity(Il2CppVector3 value) {
		return ((T (*)(Muscle*, Il2CppVector3))(Il2CppBase() + 0x38B1204))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_targetRotationRelative() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1210))(this);
	}
	template <typename T = void> T set_targetRotationRelative(Il2CppQuaternion value) {
		return ((T (*)(Muscle*, Il2CppQuaternion))(Il2CppBase() + 0x38B1220))(this, value);
	}
	template <typename T = bool> T IsValid(bool log) {
		return ((T (*)(Muscle*, bool))(Il2CppBase() + 0x38B1238))(this, log);
	}
	template <typename T = uintptr_t> T get_rebuildConnectedBody() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1570))(this);
	}
	template <typename T = void> T set_rebuildConnectedBody(uintptr_t value) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B1578))(this, value);
	}
	template <typename T = uintptr_t> T get_rebuildTargetParent() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1580))(this);
	}
	template <typename T = void> T set_rebuildTargetParent(uintptr_t value) {
		return ((T (*)(Muscle*, uintptr_t))(Il2CppBase() + 0x38B1588))(this, value);
	}
	template <typename T = void> T Rebuild() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1590))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B17CC))(this);
	}
	template <typename T = void> T ResetToCurrentTarget() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1C78))(this);
	}
	template <typename T = void> T CachedOptimizationInitiate(Il2CppArray<uintptr_t>* colleagues) {
		return ((T (*)(Muscle*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38B2CF4))(this, colleagues);
	}
	template <typename T = void> T OptimizationInitiate(Il2CppArray<uintptr_t>* colleagues) {
		return ((T (*)(Muscle*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38B4428))(this, colleagues);
	}
	template <typename T = void> T Initiate(Il2CppArray<uintptr_t>* colleagues) {
		return ((T (*)(Muscle*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38B575C))(this, colleagues);
	}
	template <typename T = void> T UpdateColliders() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B417C))(this);
	}
	template <typename T = void> T DisableColliders() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B73F8))(this);
	}
	template <typename T = void> T EnableColliders() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B74D0))(this);
	}
	template <typename T = void> T AddColliders(uintptr_t t, Il2CppArray<uintptr_t>* C, bool includeMeshColliders) {
		return ((T (*)(Muscle*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x38B6EF8))(this, t, C, includeMeshColliders);
	}
	template <typename T = void> T AddCompoundColliders(uintptr_t t, Il2CppArray<uintptr_t>* colliders) {
		return ((T (*)(Muscle*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38B72A8))(this, t, colliders);
	}
	template <typename T = void> T IgnoreCollisions(uintptr_t m, bool ignore) {
		return ((T (*)(Muscle*, uintptr_t, bool))(Il2CppBase() + 0x38B75B0))(this, m, ignore);
	}
	template <typename T = void> T IgnoreAngularLimits(bool ignore) {
		return ((T (*)(Muscle*, bool))(Il2CppBase() + 0x38B7800))(this, ignore);
	}
	template <typename T = void> T FixTargetTransforms() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B788C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B79A0))(this);
	}
	template <typename T = void> T MoveToTarget() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B7C30))(this);
	}
	template <typename T = void> T Read() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B6BAC))(this);
	}
	template <typename T = void> T ClearVelocities() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B1A88))(this);
	}
	template <typename T = void> T UpdateAnchor(bool supportTranslationAnimation) {
		return ((T (*)(Muscle*, bool))(Il2CppBase() + 0x38B7D18))(this, supportTranslationAnimation);
	}
	template <typename T = void> T Update(float pinWeightMaster, float muscleWeightMaster, float muscleSpring, float muscleDamper, float pinPow, float pinDistanceFalloff, bool rotationTargetChanged) {
		return ((T (*)(Muscle*, float, float, float, float, float, float, bool))(Il2CppBase() + 0x38B80B4))(this, pinWeightMaster, muscleWeightMaster, muscleSpring, muscleDamper, pinPow, pinDistanceFalloff, rotationTargetChanged);
	}
	template <typename T = void> T Map(float mappingWeightMaster) {
		return ((T (*)(Muscle*, float))(Il2CppBase() + 0x38B89A0))(this, mappingWeightMaster);
	}
	template <typename T = void> T CalculateMappedVelocity() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B8E4C))(this);
	}
	template <typename T = void> T Pin(float pinWeightMaster, float pinPow, float pinDistanceFalloff) {
		return ((T (*)(Muscle*, float, float, float))(Il2CppBase() + 0x38B83F0))(this, pinWeightMaster, pinPow, pinDistanceFalloff);
	}
	template <typename T = void> T MuscleRotation(float muscleWeightMaster, float muscleSpring, float muscleDamper) {
		return ((T (*)(Muscle*, float, float, float))(Il2CppBase() + 0x38B871C))(this, muscleWeightMaster, muscleSpring, muscleDamper);
	}
	template <typename T = Il2CppQuaternion> T get_localRotation() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B28D0))(this);
	}
	template <typename T = Il2CppQuaternion> T get_parentRotation() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B2A64))(this);
	}
	template <typename T = Il2CppQuaternion> T get_targetParentRotation() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B2970))(this);
	}
	template <typename T = Il2CppQuaternion> T get_targetLocalRotation() {
		return ((T (*)(Muscle*))(Il2CppBase() + 0x38B2C14))(this);
	}
	template <typename T = Il2CppQuaternion> T LocalToJointSpace(Il2CppQuaternion localRotation) {
		return ((T (*)(Muscle*, Il2CppQuaternion))(Il2CppBase() + 0x38B9028))(this, localRotation);
	}
	template <typename T = Il2CppVector3> static T InverseTransformPointUnscaled(Il2CppVector3 position, Il2CppQuaternion rotation, Il2CppVector3 point) {
		return ((T (*)(void *, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x38B800C))(0, position, rotation, point);
	}
	template <typename T = Il2CppVector3> T CalculateInertiaTensorCuboid(Il2CppVector3 size, float mass) {
		return ((T (*)(Muscle*, Il2CppVector3, float))(Il2CppBase() + 0x38B430C))(this, size, mass);
	}

};

}
