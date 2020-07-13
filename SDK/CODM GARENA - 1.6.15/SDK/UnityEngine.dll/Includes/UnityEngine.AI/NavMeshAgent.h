#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.AI", "NavMeshAgent"));
	}


	template <typename T = bool> T SetDestination(Il2CppVector3 target) {
		return ((T (*)(NavMeshAgent*, Il2CppVector3))(Il2CppBase() + 0x4681E8C))(this, target);
	}
	template <typename T = bool> static T INTERNAL_CALL_SetDestination(uintptr_t self, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4681EB0))(0, self, target);
	}
	template <typename T = void> T set_destination(Il2CppVector3 value) {
		return ((T (*)(NavMeshAgent*, Il2CppVector3))(Il2CppBase() + 0x4681F50))(this, value);
	}
	template <typename T = void> T INTERNAL_set_destination(uintptr_t value) {
		return ((T (*)(NavMeshAgent*, uintptr_t))(Il2CppBase() + 0x4681F70))(this, value);
	}
	template <typename T = float> T get_stoppingDistance() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682010))(this);
	}
	template <typename T = void> T set_stoppingDistance(float value) {
		return ((T (*)(NavMeshAgent*, float))(Il2CppBase() + 0x46820A8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_velocity() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682148))(this);
	}
	template <typename T = void> T set_velocity(Il2CppVector3 value) {
		return ((T (*)(NavMeshAgent*, Il2CppVector3))(Il2CppBase() + 0x4682230))(this, value);
	}
	template <typename T = void> T INTERNAL_get_velocity(uintptr_t* value) {
		return ((T (*)(NavMeshAgent*, uintptr_t*))(Il2CppBase() + 0x4682190))(this, value);
	}
	template <typename T = void> T INTERNAL_set_velocity(uintptr_t value) {
		return ((T (*)(NavMeshAgent*, uintptr_t))(Il2CppBase() + 0x4682250))(this, value);
	}
	template <typename T = Il2CppVector3> T get_nextPosition() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x46822F0))(this);
	}
	template <typename T = void> T INTERNAL_get_nextPosition(uintptr_t* value) {
		return ((T (*)(NavMeshAgent*, uintptr_t*))(Il2CppBase() + 0x4682338))(this, value);
	}
	template <typename T = Il2CppVector3> T get_desiredVelocity() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x46823D8))(this);
	}
	template <typename T = void> T INTERNAL_get_desiredVelocity(uintptr_t* value) {
		return ((T (*)(NavMeshAgent*, uintptr_t*))(Il2CppBase() + 0x4682420))(this, value);
	}
	template <typename T = float> T get_remainingDistance() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x46824C0))(this);
	}
	template <typename T = void> T set_autoTraverseOffMeshLink(bool value) {
		return ((T (*)(NavMeshAgent*, bool))(Il2CppBase() + 0x4682558))(this, value);
	}
	template <typename T = void> T set_autoBraking(bool value) {
		return ((T (*)(NavMeshAgent*, bool))(Il2CppBase() + 0x46825F8))(this, value);
	}
	template <typename T = bool> T get_hasPath() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682698))(this);
	}
	template <typename T = bool> T get_pathPending() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682730))(this);
	}
	template <typename T = uintptr_t> T get_pathStatus() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x46827C8))(this);
	}
	template <typename T = bool> T Warp(Il2CppVector3 newPosition) {
		return ((T (*)(NavMeshAgent*, Il2CppVector3))(Il2CppBase() + 0x4682860))(this, newPosition);
	}
	template <typename T = bool> static T INTERNAL_CALL_Warp(uintptr_t self, uintptr_t newPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4682884))(0, self, newPosition);
	}
	template <typename T = void> T set_isStopped(bool value) {
		return ((T (*)(NavMeshAgent*, bool))(Il2CppBase() + 0x4682924))(this, value);
	}
	template <typename T = void> T ResetPath() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x46829C4))(this);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682A5C))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(NavMeshAgent*, float))(Il2CppBase() + 0x4682AF4))(this, value);
	}
	template <typename T = void> T set_angularSpeed(float value) {
		return ((T (*)(NavMeshAgent*, float))(Il2CppBase() + 0x4682B94))(this, value);
	}
	template <typename T = void> T set_updatePosition(bool value) {
		return ((T (*)(NavMeshAgent*, bool))(Il2CppBase() + 0x4682C34))(this, value);
	}
	template <typename T = void> T set_updateRotation(bool value) {
		return ((T (*)(NavMeshAgent*, bool))(Il2CppBase() + 0x4682CD4))(this, value);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(NavMeshAgent*, float))(Il2CppBase() + 0x4682D74))(this, value);
	}
	template <typename T = void> T set_height(float value) {
		return ((T (*)(NavMeshAgent*, float))(Il2CppBase() + 0x4682E14))(this, value);
	}
	template <typename T = int32_t> T get_avoidancePriority() {
		return ((T (*)(NavMeshAgent*))(Il2CppBase() + 0x4682EB4))(this);
	}
	template <typename T = void> T set_avoidancePriority(int32_t value) {
		return ((T (*)(NavMeshAgent*, int32_t))(Il2CppBase() + 0x4682F4C))(this, value);
	}

};

}
