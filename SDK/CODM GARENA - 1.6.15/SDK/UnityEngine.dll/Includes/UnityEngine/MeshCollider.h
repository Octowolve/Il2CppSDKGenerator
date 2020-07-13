#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MeshCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MeshCollider"));
	}


	template <typename T = uintptr_t> T get_sharedMesh() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8394))(this);
	}
	template <typename T = void> T set_sharedMesh(uintptr_t value) {
		return ((T (*)(MeshCollider*, uintptr_t))(Il2CppBase() + 0x4AB842C))(this, value);
	}
	template <typename T = bool> T get_convex() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB84CC))(this);
	}
	template <typename T = void> T set_convex(bool value) {
		return ((T (*)(MeshCollider*, bool))(Il2CppBase() + 0x4AB8564))(this, value);
	}
	template <typename T = bool> T get_inflateMesh() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8604))(this);
	}
	template <typename T = void> T set_inflateMesh(bool value) {
		return ((T (*)(MeshCollider*, bool))(Il2CppBase() + 0x4AB869C))(this, value);
	}
	template <typename T = float> T get_skinWidth() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB873C))(this);
	}
	template <typename T = void> T set_skinWidth(float value) {
		return ((T (*)(MeshCollider*, float))(Il2CppBase() + 0x4AB87D4))(this, value);
	}
	template <typename T = bool> T get_smoothSphereCollisions() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8874))(this);
	}
	template <typename T = void> T set_smoothSphereCollisions(bool value) {
		return ((T (*)(MeshCollider*, bool))(Il2CppBase() + 0x4AB887C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localPosition() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8880))(this);
	}
	template <typename T = void> T set_localPosition(Il2CppVector3 value) {
		return ((T (*)(MeshCollider*, Il2CppVector3))(Il2CppBase() + 0x4AB8968))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localPosition(uintptr_t* value) {
		return ((T (*)(MeshCollider*, uintptr_t*))(Il2CppBase() + 0x4AB88C8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localPosition(uintptr_t value) {
		return ((T (*)(MeshCollider*, uintptr_t))(Il2CppBase() + 0x4AB8988))(this, value);
	}
	template <typename T = Il2CppVector3> T get_localScale() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8A28))(this);
	}
	template <typename T = void> T set_localScale(Il2CppVector3 value) {
		return ((T (*)(MeshCollider*, Il2CppVector3))(Il2CppBase() + 0x4AB8B10))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localScale(uintptr_t* value) {
		return ((T (*)(MeshCollider*, uintptr_t*))(Il2CppBase() + 0x4AB8A70))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localScale(uintptr_t value) {
		return ((T (*)(MeshCollider*, uintptr_t))(Il2CppBase() + 0x4AB8B30))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_localRotation() {
		return ((T (*)(MeshCollider*))(Il2CppBase() + 0x4AB8BD0))(this);
	}
	template <typename T = void> T set_localRotation(Il2CppQuaternion value) {
		return ((T (*)(MeshCollider*, Il2CppQuaternion))(Il2CppBase() + 0x4AB8CA8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_localRotation(uintptr_t* value) {
		return ((T (*)(MeshCollider*, uintptr_t*))(Il2CppBase() + 0x4AB8C08))(this, value);
	}
	template <typename T = void> T INTERNAL_set_localRotation(uintptr_t value) {
		return ((T (*)(MeshCollider*, uintptr_t))(Il2CppBase() + 0x4AB8CCC))(this, value);
	}

};

}
