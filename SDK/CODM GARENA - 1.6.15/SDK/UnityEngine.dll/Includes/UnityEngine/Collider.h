#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Collider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Collider"));
	}


	template <typename T = bool> T get_enabled() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9DF4C))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Collider*, bool))(Il2CppBase() + 0x4D9DFE4))(this, value);
	}
	template <typename T = uintptr_t> T get_attachedRigidbody() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9E084))(this);
	}
	template <typename T = bool> T get_isTrigger() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9E11C))(this);
	}
	template <typename T = void> T set_isTrigger(bool value) {
		return ((T (*)(Collider*, bool))(Il2CppBase() + 0x4D9E1B4))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9E254))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(Collider*, uintptr_t))(Il2CppBase() + 0x4D9E2EC))(this, value);
	}
	template <typename T = Il2CppVector3> T ClosestPoint(Il2CppVector3 position) {
		return ((T (*)(Collider*, Il2CppVector3))(Il2CppBase() + 0x4D9E38C))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ClosestPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D9E3E0))(0, self, position, value);
	}
	template <typename T = uintptr_t> T get_sharedMaterial() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9E488))(this);
	}
	template <typename T = void> T set_sharedMaterial(uintptr_t value) {
		return ((T (*)(Collider*, uintptr_t))(Il2CppBase() + 0x4D9E520))(this, value);
	}
	template <typename T = uintptr_t> T get_bounds() {
		return ((T (*)(Collider*))(Il2CppBase() + 0x4D9E5C0))(this);
	}
	template <typename T = void> T INTERNAL_get_bounds(uintptr_t* value) {
		return ((T (*)(Collider*, uintptr_t*))(Il2CppBase() + 0x4D9E60C))(this, value);
	}
	template <typename T = void> T set_isIgnoredByWheel(bool value) {
		return ((T (*)(Collider*, bool))(Il2CppBase() + 0x4D9E6AC))(this, value);
	}
	template <typename T = bool> static T Internal_Raycast(uintptr_t col, uintptr_t ray, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, float))(Il2CppBase() + 0x4D9E74C))(0, col, ray, hitInfo, maxDistance);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_Raycast(uintptr_t col, uintptr_t ray, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, float))(Il2CppBase() + 0x4D9E7A0))(0, col, ray, hitInfo, maxDistance);
	}
	template <typename T = bool> T Raycast(uintptr_t ray, uintptr_t* hitInfo, float maxDistance) {
		return ((T (*)(Collider*, uintptr_t, uintptr_t*, float))(Il2CppBase() + 0x4D9E858))(this, ray, hitInfo, maxDistance);
	}

};

}
