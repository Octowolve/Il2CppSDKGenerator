#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ConfigurableJoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ConfigurableJoint"));
	}


	template <typename T = Il2CppVector3> T get_secondaryAxis() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1838))(this);
	}
	template <typename T = void> T set_secondaryAxis(Il2CppVector3 value) {
		return ((T (*)(ConfigurableJoint*, Il2CppVector3))(Il2CppBase() + 0x4DA1920))(this, value);
	}
	template <typename T = void> T INTERNAL_get_secondaryAxis(uintptr_t* value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t*))(Il2CppBase() + 0x4DA1880))(this, value);
	}
	template <typename T = void> T INTERNAL_set_secondaryAxis(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1940))(this, value);
	}
	template <typename T = uintptr_t> T get_xMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA19E0))(this);
	}
	template <typename T = void> T set_xMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1A78))(this, value);
	}
	template <typename T = uintptr_t> T get_yMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1B18))(this);
	}
	template <typename T = void> T set_yMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1BB0))(this, value);
	}
	template <typename T = uintptr_t> T get_zMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1C50))(this);
	}
	template <typename T = void> T set_zMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1CE8))(this, value);
	}
	template <typename T = uintptr_t> T get_angularXMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1D88))(this);
	}
	template <typename T = void> T set_angularXMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1E20))(this, value);
	}
	template <typename T = uintptr_t> T get_angularYMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1EC0))(this);
	}
	template <typename T = void> T set_angularYMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA1F58))(this, value);
	}
	template <typename T = uintptr_t> T get_angularZMotion() {
		return ((T (*)(ConfigurableJoint*))(Il2CppBase() + 0x4DA1FF8))(this);
	}
	template <typename T = void> T set_angularZMotion(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2090))(this, value);
	}
	template <typename T = void> T set_linearLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2130))(this, value);
	}
	template <typename T = void> T INTERNAL_set_linearLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA214C))(this, value);
	}
	template <typename T = void> T set_angularXLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA21EC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_angularXLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2208))(this, value);
	}
	template <typename T = void> T set_angularYZLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA22A8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_angularYZLimitSpring(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA22C4))(this, value);
	}
	template <typename T = void> T set_linearLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2364))(this, value);
	}
	template <typename T = void> T INTERNAL_set_linearLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2384))(this, value);
	}
	template <typename T = void> T set_lowAngularXLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2424))(this, value);
	}
	template <typename T = void> T INTERNAL_set_lowAngularXLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2444))(this, value);
	}
	template <typename T = void> T set_highAngularXLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA24E4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_highAngularXLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2504))(this, value);
	}
	template <typename T = void> T set_angularYLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA25A4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_angularYLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA25C4))(this, value);
	}
	template <typename T = void> T set_angularZLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2664))(this, value);
	}
	template <typename T = void> T INTERNAL_set_angularZLimit(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2684))(this, value);
	}
	template <typename T = void> T set_targetRotation(Il2CppQuaternion value) {
		return ((T (*)(ConfigurableJoint*, Il2CppQuaternion))(Il2CppBase() + 0x4DA2724))(this, value);
	}
	template <typename T = void> T INTERNAL_set_targetRotation(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2748))(this, value);
	}
	template <typename T = void> T set_targetAngularVelocity(Il2CppVector3 value) {
		return ((T (*)(ConfigurableJoint*, Il2CppVector3))(Il2CppBase() + 0x4DA27E8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_targetAngularVelocity(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2808))(this, value);
	}
	template <typename T = void> T set_rotationDriveMode(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA28A8))(this, value);
	}
	template <typename T = void> T set_slerpDrive(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2948))(this, value);
	}
	template <typename T = void> T INTERNAL_set_slerpDrive(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2968))(this, value);
	}
	template <typename T = void> T set_projectionMode(uintptr_t value) {
		return ((T (*)(ConfigurableJoint*, uintptr_t))(Il2CppBase() + 0x4DA2A08))(this, value);
	}
	template <typename T = void> T set_projectionDistance(float value) {
		return ((T (*)(ConfigurableJoint*, float))(Il2CppBase() + 0x4DA2AA8))(this, value);
	}
	template <typename T = void> T set_projectionAngle(float value) {
		return ((T (*)(ConfigurableJoint*, float))(Il2CppBase() + 0x4DA2B48))(this, value);
	}
	template <typename T = void> T set_configuredInWorldSpace(bool value) {
		return ((T (*)(ConfigurableJoint*, bool))(Il2CppBase() + 0x4DA2BE8))(this, value);
	}

};

}
