#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Rigidbody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Rigidbody"));
	}


	template <typename T = Il2CppVector3> T get_velocity() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E79114))(this);
	}
	template <typename T = void> T set_velocity(Il2CppVector3 value) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E791FC))(this, value);
	}
	template <typename T = void> T INTERNAL_get_velocity(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7915C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_velocity(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7921C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_angularVelocity() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E792BC))(this);
	}
	template <typename T = void> T set_angularVelocity(Il2CppVector3 value) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E793A4))(this, value);
	}
	template <typename T = void> T INTERNAL_get_angularVelocity(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E79304))(this, value);
	}
	template <typename T = void> T INTERNAL_set_angularVelocity(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E793C4))(this, value);
	}
	template <typename T = float> T get_drag() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E79464))(this);
	}
	template <typename T = void> T set_drag(float value) {
		return ((T (*)(Rigidbody*, float))(Il2CppBase() + 0x4E794FC))(this, value);
	}
	template <typename T = float> T get_angularDrag() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7959C))(this);
	}
	template <typename T = void> T set_angularDrag(float value) {
		return ((T (*)(Rigidbody*, float))(Il2CppBase() + 0x4E79634))(this, value);
	}
	template <typename T = float> T get_mass() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E796D4))(this);
	}
	template <typename T = void> T set_mass(float value) {
		return ((T (*)(Rigidbody*, float))(Il2CppBase() + 0x4E7976C))(this, value);
	}
	template <typename T = void> T set_useGravity(bool value) {
		return ((T (*)(Rigidbody*, bool))(Il2CppBase() + 0x4E7980C))(this, value);
	}
	template <typename T = bool> T get_isKinematic() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E798AC))(this);
	}
	template <typename T = void> T set_isKinematic(bool value) {
		return ((T (*)(Rigidbody*, bool))(Il2CppBase() + 0x4E79944))(this, value);
	}
	template <typename T = void> T set_freezeRotation(bool value) {
		return ((T (*)(Rigidbody*, bool))(Il2CppBase() + 0x4E799E4))(this, value);
	}
	template <typename T = void> T set_constraints(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E79A84))(this, value);
	}
	template <typename T = void> T set_collisionDetectionMode(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E79B24))(this, value);
	}
	template <typename T = void> T AddForce(Il2CppVector3 force, uintptr_t mode) {
		return ((T (*)(Rigidbody*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E79BC4))(this, force, mode);
	}
	template <typename T = void> T AddForce_1(Il2CppVector3 force) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E79C9C))(this, force);
	}
	template <typename T = void> static T INTERNAL_CALL_AddForce(uintptr_t self, uintptr_t force, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E79BF4))(0, self, force, mode);
	}
	template <typename T = void> T AddRelativeForce(Il2CppVector3 force, uintptr_t mode) {
		return ((T (*)(Rigidbody*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E79CC4))(this, force, mode);
	}
	template <typename T = void> static T INTERNAL_CALL_AddRelativeForce(uintptr_t self, uintptr_t force, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E79CF4))(0, self, force, mode);
	}
	template <typename T = void> T AddTorque(Il2CppVector3 torque, uintptr_t mode) {
		return ((T (*)(Rigidbody*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E79D9C))(this, torque, mode);
	}
	template <typename T = void> T AddTorque_1(Il2CppVector3 torque) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E79E74))(this, torque);
	}
	template <typename T = void> static T INTERNAL_CALL_AddTorque(uintptr_t self, uintptr_t torque, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E79DCC))(0, self, torque, mode);
	}
	template <typename T = void> T AddRelativeTorque(Il2CppVector3 torque, uintptr_t mode) {
		return ((T (*)(Rigidbody*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E79E9C))(this, torque, mode);
	}
	template <typename T = void> T AddRelativeTorque_1(Il2CppVector3 torque) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E79F74))(this, torque);
	}
	template <typename T = void> static T INTERNAL_CALL_AddRelativeTorque(uintptr_t self, uintptr_t torque, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E79ECC))(0, self, torque, mode);
	}
	template <typename T = void> T AddForceAtPosition(Il2CppVector3 force, Il2CppVector3 position, uintptr_t mode) {
		return ((T (*)(Rigidbody*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E79F9C))(this, force, position, mode);
	}
	template <typename T = void> T AddForceAtPosition_1(Il2CppVector3 force, Il2CppVector3 position) {
		return ((T (*)(Rigidbody*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4E7A098))(this, force, position);
	}
	template <typename T = void> static T INTERNAL_CALL_AddForceAtPosition(uintptr_t self, uintptr_t force, uintptr_t position, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E79FE8))(0, self, force, position, mode);
	}
	template <typename T = void> T AddExplosionForce(float explosionForce, Il2CppVector3 explosionPosition, float explosionRadius, float upwardsModifier, uintptr_t mode) {
		return ((T (*)(Rigidbody*, float, Il2CppVector3, float, float, uintptr_t))(Il2CppBase() + 0x4E7A0DC))(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
	}
	template <typename T = void> static T INTERNAL_CALL_AddExplosionForce(uintptr_t self, float explosionForce, uintptr_t explosionPosition, float explosionRadius, float upwardsModifier, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x4E7A12C))(0, self, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
	}
	template <typename T = Il2CppVector3> T GetPointVelocity(Il2CppVector3 worldPoint) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E7A1FC))(this, worldPoint);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPointVelocity(uintptr_t self, uintptr_t worldPoint, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4E7A250))(0, self, worldPoint, value);
	}
	template <typename T = Il2CppVector3> T get_centerOfMass() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7A2F8))(this);
	}
	template <typename T = void> T set_centerOfMass(Il2CppVector3 value) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E7A3E0))(this, value);
	}
	template <typename T = void> T INTERNAL_get_centerOfMass(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7A340))(this, value);
	}
	template <typename T = void> T INTERNAL_set_centerOfMass(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7A400))(this, value);
	}
	template <typename T = Il2CppVector3> T get_worldCenterOfMass() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7A4A0))(this);
	}
	template <typename T = void> T INTERNAL_get_worldCenterOfMass(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7A4E8))(this, value);
	}
	template <typename T = void> T set_inertiaTensorRotation(Il2CppQuaternion value) {
		return ((T (*)(Rigidbody*, Il2CppQuaternion))(Il2CppBase() + 0x4E7A588))(this, value);
	}
	template <typename T = void> T INTERNAL_set_inertiaTensorRotation(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7A5AC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_inertiaTensor() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7A64C))(this);
	}
	template <typename T = void> T set_inertiaTensor(Il2CppVector3 value) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E7A734))(this, value);
	}
	template <typename T = void> T INTERNAL_get_inertiaTensor(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7A694))(this, value);
	}
	template <typename T = void> T INTERNAL_set_inertiaTensor(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7A754))(this, value);
	}
	template <typename T = void> T set_detectCollisions(bool value) {
		return ((T (*)(Rigidbody*, bool))(Il2CppBase() + 0x4E7A7F4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7A894))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E7A97C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_position(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7A8DC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_position(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7A99C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7AA3C))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(Rigidbody*, Il2CppQuaternion))(Il2CppBase() + 0x4E7AB14))(this, value);
	}
	template <typename T = void> T INTERNAL_get_rotation(uintptr_t* value) {
		return ((T (*)(Rigidbody*, uintptr_t*))(Il2CppBase() + 0x4E7AA74))(this, value);
	}
	template <typename T = void> T INTERNAL_set_rotation(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7AB38))(this, value);
	}
	template <typename T = void> T MovePosition(Il2CppVector3 position) {
		return ((T (*)(Rigidbody*, Il2CppVector3))(Il2CppBase() + 0x4E7ABD8))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_MovePosition(uintptr_t self, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7ABFC))(0, self, position);
	}
	template <typename T = void> T MoveRotation(Il2CppQuaternion rot) {
		return ((T (*)(Rigidbody*, Il2CppQuaternion))(Il2CppBase() + 0x4E7AC9C))(this, rot);
	}
	template <typename T = void> static T INTERNAL_CALL_MoveRotation(uintptr_t self, uintptr_t rot) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E7ACC4))(0, self, rot);
	}
	template <typename T = uintptr_t> T get_interpolation() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7AD64))(this);
	}
	template <typename T = void> T set_interpolation(uintptr_t value) {
		return ((T (*)(Rigidbody*, uintptr_t))(Il2CppBase() + 0x4E7ADFC))(this, value);
	}
	template <typename T = void> T Sleep() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7AE9C))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_Sleep(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7AEA4))(0, self);
	}
	template <typename T = bool> T IsSleeping() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7AF3C))(this);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsSleeping(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7AF44))(0, self);
	}
	template <typename T = void> T WakeUp() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7AFDC))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_WakeUp(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7AFE4))(0, self);
	}
	template <typename T = void> T ResetInertiaTensor() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7B07C))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetInertiaTensor(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7B084))(0, self);
	}
	template <typename T = void> T set_solverIterations(int32_t value) {
		return ((T (*)(Rigidbody*, int32_t))(Il2CppBase() + 0x4E7B11C))(this, value);
	}
	template <typename T = void> T set_solverVelocityIterations(int32_t value) {
		return ((T (*)(Rigidbody*, int32_t))(Il2CppBase() + 0x4E7B1BC))(this, value);
	}
	template <typename T = void> T set_sleepThreshold(float value) {
		return ((T (*)(Rigidbody*, float))(Il2CppBase() + 0x4E7B25C))(this, value);
	}
	template <typename T = float> T get_maxAngularVelocity() {
		return ((T (*)(Rigidbody*))(Il2CppBase() + 0x4E7B2FC))(this);
	}
	template <typename T = void> T set_maxAngularVelocity(float value) {
		return ((T (*)(Rigidbody*, float))(Il2CppBase() + 0x4E7B394))(this, value);
	}
	template <typename T = bool> T SweepTest(Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(Rigidbody*, Il2CppVector3, uintptr_t*, float))(Il2CppBase() + 0x4E7B434))(this, direction, hitInfo, maxDistance);
	}
	template <typename T = bool> static T INTERNAL_CALL_SweepTest(uintptr_t self, uintptr_t direction, uintptr_t* hitInfo, float maxDistance, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, float, uintptr_t))(Il2CppBase() + 0x4E7B474))(0, self, direction, hitInfo, maxDistance, queryTriggerInteraction);
	}

};

}
