#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Joint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Joint"));
	}


	template <typename T = uintptr_t> T get_connectedBody() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A3D24))(this);
	}
	template <typename T = void> T set_connectedBody(uintptr_t value) {
		return ((T (*)(Joint*, uintptr_t))(Il2CppBase() + 0x47A3DBC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_axis() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A3E5C))(this);
	}
	template <typename T = void> T set_axis(Il2CppVector3 value) {
		return ((T (*)(Joint*, Il2CppVector3))(Il2CppBase() + 0x47A3F44))(this, value);
	}
	template <typename T = void> T INTERNAL_get_axis(uintptr_t* value) {
		return ((T (*)(Joint*, uintptr_t*))(Il2CppBase() + 0x47A3EA4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_axis(uintptr_t value) {
		return ((T (*)(Joint*, uintptr_t))(Il2CppBase() + 0x47A3F64))(this, value);
	}
	template <typename T = Il2CppVector3> T get_anchor() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A4004))(this);
	}
	template <typename T = void> T set_anchor(Il2CppVector3 value) {
		return ((T (*)(Joint*, Il2CppVector3))(Il2CppBase() + 0x47A40EC))(this, value);
	}
	template <typename T = void> T INTERNAL_get_anchor(uintptr_t* value) {
		return ((T (*)(Joint*, uintptr_t*))(Il2CppBase() + 0x47A404C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_anchor(uintptr_t value) {
		return ((T (*)(Joint*, uintptr_t))(Il2CppBase() + 0x47A410C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_connectedAnchor() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A41AC))(this);
	}
	template <typename T = void> T set_connectedAnchor(Il2CppVector3 value) {
		return ((T (*)(Joint*, Il2CppVector3))(Il2CppBase() + 0x47A4294))(this, value);
	}
	template <typename T = void> T INTERNAL_get_connectedAnchor(uintptr_t* value) {
		return ((T (*)(Joint*, uintptr_t*))(Il2CppBase() + 0x47A41F4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_connectedAnchor(uintptr_t value) {
		return ((T (*)(Joint*, uintptr_t))(Il2CppBase() + 0x47A42B4))(this, value);
	}
	template <typename T = bool> T get_autoConfigureConnectedAnchor() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A4354))(this);
	}
	template <typename T = void> T set_autoConfigureConnectedAnchor(bool value) {
		return ((T (*)(Joint*, bool))(Il2CppBase() + 0x47A43EC))(this, value);
	}
	template <typename T = float> T get_breakForce() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A448C))(this);
	}
	template <typename T = void> T set_breakForce(float value) {
		return ((T (*)(Joint*, float))(Il2CppBase() + 0x47A4524))(this, value);
	}
	template <typename T = float> T get_breakTorque() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A45C4))(this);
	}
	template <typename T = void> T set_breakTorque(float value) {
		return ((T (*)(Joint*, float))(Il2CppBase() + 0x47A465C))(this, value);
	}
	template <typename T = bool> T get_enableCollision() {
		return ((T (*)(Joint*))(Il2CppBase() + 0x47A46FC))(this);
	}
	template <typename T = void> T set_enableCollision(bool value) {
		return ((T (*)(Joint*, bool))(Il2CppBase() + 0x47A4794))(this, value);
	}

};

}
