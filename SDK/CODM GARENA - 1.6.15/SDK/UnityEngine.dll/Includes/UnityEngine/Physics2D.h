#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Physics2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Physics2D"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& m_LastDisabledRigidbody2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_queriesHitTriggers() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC50A0))(0);
	}
	template <typename T = uintptr_t> static T Raycast(Il2CppVector2 origin, Il2CppVector2 direction, float distance, int32_t layerMask, float minDepth) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, int32_t, float))(Il2CppBase() + 0x4AC5130))(0, origin, direction, distance, layerMask, minDepth);
	}
	template <typename T = uintptr_t> static T Raycast_1(Il2CppVector2 origin, Il2CppVector2 direction, float distance, int32_t layerMask) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, int32_t))(Il2CppBase() + 0x4AC53E4))(0, origin, direction, distance, layerMask);
	}
	template <typename T = uintptr_t> static T Raycast_2(Il2CppVector2 origin, Il2CppVector2 direction, float distance) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x4AC5524))(0, origin, direction, distance);
	}
	template <typename T = uintptr_t> static T Raycast_3(Il2CppVector2 origin, Il2CppVector2 direction) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4AC5658))(0, origin, direction);
	}
	template <typename T = uintptr_t> static T Raycast_4(Il2CppVector2 origin, Il2CppVector2 direction, float distance, int32_t layerMask, float minDepth, float maxDepth) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, int32_t, float, float))(Il2CppBase() + 0x4AC526C))(0, origin, direction, distance, layerMask, minDepth, maxDepth);
	}
	template <typename T = int32_t> static T Raycast_5(Il2CppVector2 origin, Il2CppVector2 direction, uintptr_t contactFilter, Il2CppArray<uintptr_t>* results) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AC5888))(0, origin, direction, contactFilter, results);
	}
	template <typename T = int32_t> static T Raycast_6(Il2CppVector2 origin, Il2CppVector2 direction, uintptr_t contactFilter, Il2CppArray<uintptr_t>* results, float distance) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, uintptr_t, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x4AC5998))(0, origin, direction, contactFilter, results, distance);
	}
	template <typename T = void> static T Internal_Raycast(Il2CppVector2 origin, Il2CppVector2 direction, float distance, uintptr_t contactFilter, uintptr_t* raycastHit) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC5780))(0, origin, direction, distance, contactFilter, raycastHit);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_Raycast(uintptr_t origin, uintptr_t direction, float distance, uintptr_t contactFilter, uintptr_t* raycastHit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC5BC4))(0, origin, direction, distance, contactFilter, raycastHit);
	}
	template <typename T = int32_t> static T Internal_RaycastNonAlloc(Il2CppVector2 origin, Il2CppVector2 direction, float distance, uintptr_t contactFilter, Il2CppArray<uintptr_t>* results) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AC5ABC))(0, origin, direction, distance, contactFilter, results);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_Internal_RaycastNonAlloc(uintptr_t origin, uintptr_t direction, float distance, uintptr_t contactFilter, Il2CppArray<uintptr_t>* results) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AC5C7C))(0, origin, direction, distance, contactFilter, results);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetRayIntersectionAll(uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x4AC5D34))(0, ray, distance, layerMask);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetRayIntersectionAll_1(uintptr_t ray, float distance) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4AC5EB4))(0, ray, distance);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetRayIntersectionAll_2(uintptr_t ray) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC5F88))(0, ray);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T INTERNAL_CALL_GetRayIntersectionAll(uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x4AC5E0C))(0, ray, distance, layerMask);
	}
	template <typename T = uintptr_t> static T GetRigidbodyFromInstanceID(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC6054))(0, instanceID);
	}
	template <typename T = uintptr_t> static T GetColliderFromInstanceID(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC60EC))(0, instanceID);
	}

};

}
