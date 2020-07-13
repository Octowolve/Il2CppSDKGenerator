#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Physics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Physics"));
	}


	template <typename T = Il2CppVector3> static T get_gravity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC24A0))(0);
	}
	template <typename T = void> static T set_gravity(Il2CppVector3 value) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AC2578))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_gravity(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4AC24E0))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_gravity(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC2598))(0, value);
	}
	template <typename T = int32_t> static T AddAnAggregate(bool enableCollision) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AC2630))(0, enableCollision);
	}
	template <typename T = void> static T set_queriesHitBackfaces(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AC26C8))(0, value);
	}
	template <typename T = bool> static T Raycast(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC2760))(0, origin, direction, maxDistance, layerMask);
	}
	template <typename T = bool> static T Raycast_1(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4AC2814))(0, origin, direction, maxDistance);
	}
	template <typename T = bool> static T Raycast_2(Il2CppVector3 origin, Il2CppVector3 direction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC286C))(0, origin, direction);
	}
	template <typename T = bool> static T Raycast_3(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC27BC))(0, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = void> static T LockSceneWrite(bool lockScene) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AC2918))(0, lockScene);
	}
	template <typename T = void> static T AddRigidBodiesToAggregateAssumeLocked(uintptr_t body, int32_t aggregateIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4AC29B0))(0, body, aggregateIndex);
	}
	template <typename T = bool> static T Raycast_4(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4AC2A50))(0, origin, direction, hitInfo, maxDistance, layerMask);
	}
	template <typename T = bool> static T Raycast_5(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, float))(Il2CppBase() + 0x4AC2B14))(0, origin, direction, hitInfo, maxDistance);
	}
	template <typename T = bool> static T Raycast_6(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x4AC2B74))(0, origin, direction, hitInfo);
	}
	template <typename T = bool> static T Raycast_7(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC2AB4))(0, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Raycast_8(uintptr_t ray, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x4AC2C38))(0, ray, maxDistance, layerMask);
	}
	template <typename T = bool> static T Raycast_9(uintptr_t ray, float maxDistance) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4AC2CEC))(0, ray, maxDistance);
	}
	template <typename T = bool> static T Raycast_10(uintptr_t ray) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC2D44))(0, ray);
	}
	template <typename T = bool> static T Raycast_11(uintptr_t ray, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC2C94))(0, ray, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = void> static T AddRigidBodiesToAggregate(Il2CppArray<uintptr_t>* bodies, int32_t aggregateIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AC2DC0))(0, bodies, aggregateIndex);
	}
	template <typename T = void> static T ReleaseAggregateFromScene(int32_t aggregateIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC2E34))(0, aggregateIndex);
	}
	template <typename T = bool> static T Raycast_12(uintptr_t ray, uintptr_t* hitInfo, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4AC2ECC))(0, ray, hitInfo, maxDistance, layerMask);
	}
	template <typename T = bool> static T Raycast_13(uintptr_t ray, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, float))(Il2CppBase() + 0x4AC2F90))(0, ray, hitInfo, maxDistance);
	}
	template <typename T = bool> static T Raycast_14(uintptr_t ray, uintptr_t* hitInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC2FF0))(0, ray, hitInfo);
	}
	template <typename T = bool> static T Raycast_15(uintptr_t ray, uintptr_t* hitInfo, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC2F30))(0, ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll(uintptr_t ray, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x4AC3054))(0, ray, maxDistance, layerMask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_1(uintptr_t ray, float maxDistance) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4AC3108))(0, ray, maxDistance);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_2(uintptr_t ray) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC3160))(0, ray);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_3(uintptr_t ray, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC30B0))(0, ray, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_4(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC31B4))(0, origin, direction, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_5(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC32C4))(0, origin, direction, maxDistance, layermask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_6(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4AC3320))(0, origin, direction, maxDistance);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T RaycastAll_7(Il2CppVector3 origin, Il2CppVector3 direction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC3378))(0, origin, direction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_RaycastAll(uintptr_t origin, uintptr_t direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC320C))(0, origin, direction, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T RaycastNonAlloc(uintptr_t ray, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC33CC))(0, ray, results, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T RaycastNonAlloc_1(Il2CppVector3 origin, Il2CppVector3 direction, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC342C))(0, origin, direction, results, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T RaycastNonAlloc_2(Il2CppVector3 origin, Il2CppVector3 direction, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, float, int32_t))(Il2CppBase() + 0x4AC3560))(0, origin, direction, results, maxDistance, layermask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_RaycastNonAlloc(uintptr_t origin, uintptr_t direction, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC348C))(0, origin, direction, results, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Linecast(Il2CppVector3 start, Il2CppVector3 end, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, int32_t))(Il2CppBase() + 0x4AC35C4))(0, start, end, layerMask);
	}
	template <typename T = bool> static T Linecast_1(Il2CppVector3 start, Il2CppVector3 end, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x4AC35F8))(0, start, end, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Linecast_2(Il2CppVector3 start, Il2CppVector3 end, uintptr_t* hitInfo, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, int32_t))(Il2CppBase() + 0x4AC36AC))(0, start, end, hitInfo, layerMask);
	}
	template <typename T = bool> static T Linecast_3(Il2CppVector3 start, Il2CppVector3 end, uintptr_t* hitInfo) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x4AC37A0))(0, start, end, hitInfo);
	}
	template <typename T = bool> static T Linecast_4(Il2CppVector3 start, Il2CppVector3 end, uintptr_t* hitInfo, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, int32_t, uintptr_t))(Il2CppBase() + 0x4AC36EC))(0, start, end, hitInfo, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OverlapSphere(Il2CppVector3 position, float radius, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC37DC))(0, position, radius, layerMask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OverlapSphere_1(Il2CppVector3 position, float radius) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4AC38C8))(0, position, radius);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_OverlapSphere(uintptr_t position, float radius, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3818))(0, position, radius, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T OverlapSphereNonAlloc(Il2CppVector3 position, float radius, Il2CppArray<uintptr_t>* results, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AC3900))(0, position, radius, results, layerMask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_OverlapSphereNonAlloc(uintptr_t position, float radius, Il2CppArray<uintptr_t>* results, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, float, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3944))(0, position, radius, results, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OverlapCapsule(Il2CppVector3 point0, Il2CppVector3 point1, float radius, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC39FC))(0, point0, point1, radius, layerMask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_OverlapCapsule(uintptr_t point0, uintptr_t point1, float radius, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3A58))(0, point0, point1, radius, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T OverlapCapsuleNonAlloc(Il2CppVector3 point0, Il2CppVector3 point1, float radius, Il2CppArray<uintptr_t>* results, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3B10))(0, point0, point1, radius, results, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T OverlapCapsuleNonAlloc_1(Il2CppVector3 point0, Il2CppVector3 point1, float radius, Il2CppArray<uintptr_t>* results, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4AC3C38))(0, point0, point1, radius, results, layerMask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_OverlapCapsuleNonAlloc(uintptr_t point0, uintptr_t point1, float radius, Il2CppArray<uintptr_t>* results, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3B74))(0, point0, point1, radius, results, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CapsuleCast(Il2CppVector3 point1, Il2CppVector3 point2, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4AC3C98))(0, point1, point2, radius, direction, hitInfo, maxDistance, layerMask);
	}
	template <typename T = bool> static T CapsuleCast_1(Il2CppVector3 point1, Il2CppVector3 point2, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3D04))(0, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T SphereCast(Il2CppVector3 origin, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4AC3DF4))(0, origin, radius, direction, hitInfo, maxDistance, layerMask);
	}
	template <typename T = bool> static T SphereCast_1(Il2CppVector3 origin, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float))(Il2CppBase() + 0x4AC3EAC))(0, origin, radius, direction, hitInfo, maxDistance);
	}
	template <typename T = bool> static T SphereCast_2(Il2CppVector3 origin, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3E50))(0, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CapsuleCastAll(Il2CppVector3 point1, Il2CppVector3 point2, float radius, Il2CppVector3 direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3F04))(0, point1, point2, radius, direction, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_CapsuleCastAll(uintptr_t point1, uintptr_t point2, float radius, uintptr_t direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3F7C))(0, point1, point2, radius, direction, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T CapsuleCastNonAlloc(Il2CppVector3 point1, Il2CppVector3 point2, float radius, Il2CppVector3 direction, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, Il2CppArray<uintptr_t>*, float, int32_t))(Il2CppBase() + 0x4AC4058))(0, point1, point2, radius, direction, results, maxDistance, layermask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_CapsuleCastNonAlloc(uintptr_t point1, uintptr_t point2, float radius, uintptr_t direction, Il2CppArray<uintptr_t>* results, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, Il2CppArray<uintptr_t>*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC40D8))(0, point1, point2, radius, direction, results, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T SphereCastAll(Il2CppVector3 origin, float radius, Il2CppVector3 direction, float maxDistance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC41C0))(0, origin, radius, direction, maxDistance, layerMask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T SphereCastAll_1(Il2CppVector3 origin, float radius, Il2CppVector3 direction, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4210))(0, origin, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CheckSphere(Il2CppVector3 position, float radius, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC4260))(0, position, radius, layerMask);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckSphere(uintptr_t position, float radius, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC429C))(0, position, radius, layerMask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CheckCapsule(Il2CppVector3 start, Il2CppVector3 end, float radius, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC434C))(0, start, end, radius, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CheckCapsule_1(Il2CppVector3 start, Il2CppVector3 end, float radius, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4AC445C))(0, start, end, radius, layermask);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckCapsule(uintptr_t start, uintptr_t end, float radius, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC43A4))(0, start, end, radius, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CheckBox(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, int32_t, uintptr_t))(Il2CppBase() + 0x4AC44B8))(0, center, halfExtents, orientation, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T CheckBox_1(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x4AC45D0))(0, center, halfExtents, orientation, layermask);
	}
	template <typename T = bool> static T INTERNAL_CALL_CheckBox(uintptr_t center, uintptr_t halfExtents, uintptr_t orientation, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4518))(0, center, halfExtents, orientation, layermask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OverlapBox(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4630))(0, center, halfExtents, orientation, layerMask, queryTriggerInteraction);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_OverlapBox(uintptr_t center, uintptr_t halfExtents, uintptr_t orientation, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4690))(0, center, halfExtents, orientation, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T OverlapBoxNonAlloc(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppArray<uintptr_t>* results, Il2CppQuaternion orientation, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x4AC4748))(0, center, halfExtents, results, orientation, layerMask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_OverlapBoxNonAlloc(uintptr_t center, uintptr_t halfExtents, Il2CppArray<uintptr_t>* results, uintptr_t orientation, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AC47B0))(0, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction);
	}
	template <typename T = int32_t> static T BoxCastNonAlloc(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppVector3 direction, Il2CppArray<uintptr_t>* results, Il2CppQuaternion orientation, float maxDistance, int32_t layermask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, Il2CppQuaternion, float, int32_t))(Il2CppBase() + 0x4AC4874))(0, center, halfExtents, direction, results, orientation, maxDistance, layermask);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_BoxCastNonAlloc(uintptr_t center, uintptr_t halfExtents, uintptr_t direction, Il2CppArray<uintptr_t>* results, uintptr_t orientation, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4910))(0, center, halfExtents, direction, results, orientation, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Internal_BoxCast(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC49F8))(0, center, halfExtents, orientation, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_BoxCast(uintptr_t center, uintptr_t halfExtents, uintptr_t orientation, uintptr_t direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4A94))(0, center, halfExtents, orientation, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T BoxCast(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppVector3 direction, uintptr_t* hitInfo, Il2CppQuaternion orientation, float maxDistance, int32_t layerMask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t*, Il2CppQuaternion, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4B7C))(0, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction);
	}
	template <typename T = void> static T IgnoreCollision(uintptr_t collider1, uintptr_t collider2, bool ignore) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4AC4C04))(0, collider1, collider2, ignore);
	}
	template <typename T = void> static T IgnoreCollision_1(uintptr_t collider1, uintptr_t collider2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC4CAC))(0, collider1, collider2);
	}
	template <typename T = void> static T IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore) {
		return ((T (*)(void *, int32_t, int32_t, bool))(Il2CppBase() + 0x4AC4CC8))(0, layer1, layer2, ignore);
	}
	template <typename T = void> static T IgnoreLayerCollision_1(int32_t layer1, int32_t layer2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4AC4D70))(0, layer1, layer2);
	}
	template <typename T = bool> static T GetIgnoreLayerCollision(int32_t layer1, int32_t layer2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4AC4D8C))(0, layer1, layer2);
	}
	template <typename T = bool> static T Internal_Raycast(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC2BD8))(0, origin, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_Raycast(uintptr_t origin, uintptr_t direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4E2C))(0, origin, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Internal_CapsuleCast(Il2CppVector3 point1, Il2CppVector3 point2, float radius, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC3D70))(0, point1, point2, radius, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_CapsuleCast(uintptr_t point1, uintptr_t point2, float radius, uintptr_t direction, uintptr_t* hitInfo, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, uintptr_t*, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4F00))(0, point1, point2, radius, direction, hitInfo, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T Internal_RaycastTest(Il2CppVector3 origin, Il2CppVector3 direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC28C0))(0, origin, direction, maxDistance, layermask, queryTriggerInteraction);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_RaycastTest(uintptr_t origin, uintptr_t direction, float maxDistance, int32_t layermask, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x4AC4FE8))(0, origin, direction, maxDistance, layermask, queryTriggerInteraction);
	}

};

}
