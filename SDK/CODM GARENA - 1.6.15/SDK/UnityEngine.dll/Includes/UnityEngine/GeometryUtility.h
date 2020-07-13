#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GeometryUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GeometryUtility"));
	}


	template <typename T = void> static T Internal_ExtractPlanes(Il2CppArray<uintptr_t>* planes, uintptr_t worldToProjectionMatrix) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x476FFB8))(0, planes, worldToProjectionMatrix);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_ExtractPlanes(Il2CppArray<uintptr_t>* planes, uintptr_t worldToProjectionMatrix) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x477003C))(0, planes, worldToProjectionMatrix);
	}
	template <typename T = bool> static T TestPlanesAABB(Il2CppArray<uintptr_t>* planes, uintptr_t bounds) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x47700DC))(0, planes, bounds);
	}
	template <typename T = bool> static T INTERNAL_CALL_TestPlanesAABB(Il2CppArray<uintptr_t>* planes, uintptr_t bounds) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4770110))(0, planes, bounds);
	}
	template <typename T = uintptr_t> static T Internal_CalculateBounds(Il2CppArray<uintptr_t>* positions, uintptr_t transform) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x47701B0))(0, positions, transform);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_CalculateBounds(Il2CppArray<uintptr_t>* positions, uintptr_t transform, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4770264))(0, positions, transform, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CalculateFrustumPlanes(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x477030C))(0, camera);
	}
	template <typename T = void> static T CalculateFrustumPlanes_1(uintptr_t camera, Il2CppArray<uintptr_t>* planes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47706C0))(0, camera, planes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CalculateFrustumPlanes_2(uintptr_t worldToProjectionMatrix) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4770580))(0, worldToProjectionMatrix);
	}
	template <typename T = void> static T CalculateFrustumPlanes_3(uintptr_t worldToProjectionMatrix, Il2CppArray<uintptr_t>* planes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4770944))(0, worldToProjectionMatrix, planes);
	}
	template <typename T = uintptr_t> static T CalculateBounds(Il2CppArray<uintptr_t>* positions, uintptr_t transform) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x47709CC))(0, positions, transform);
	}

};

}
