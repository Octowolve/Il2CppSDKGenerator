#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheelCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheelCollider"));
	}


	template <typename T = float> T get_radius() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E068))(this);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(WheelCollider*, float))(Il2CppBase() + 0x4D3E100))(this, value);
	}
	template <typename T = float> T get_suspensionDistance() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E1A0))(this);
	}
	template <typename T = void> T set_suspensionDistance(float value) {
		return ((T (*)(WheelCollider*, float))(Il2CppBase() + 0x4D3E238))(this, value);
	}
	template <typename T = float> T get_motorTorque() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E2D8))(this);
	}
	template <typename T = void> T set_motorTorque(float value) {
		return ((T (*)(WheelCollider*, float))(Il2CppBase() + 0x4D3E370))(this, value);
	}
	template <typename T = float> T get_brakeTorque() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E410))(this);
	}
	template <typename T = void> T set_brakeTorque(float value) {
		return ((T (*)(WheelCollider*, float))(Il2CppBase() + 0x4D3E4A8))(this, value);
	}
	template <typename T = float> T get_steerAngle() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E548))(this);
	}
	template <typename T = void> T set_steerAngle(float value) {
		return ((T (*)(WheelCollider*, float))(Il2CppBase() + 0x4D3E5E0))(this, value);
	}
	template <typename T = bool> T get_isGrounded() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E680))(this);
	}
	template <typename T = bool> T GetGroundHit(uintptr_t* hit) {
		return ((T (*)(WheelCollider*, uintptr_t*))(Il2CppBase() + 0x4D3E718))(this, hit);
	}
	template <typename T = void> T GetWorldPose(uintptr_t* pos, uintptr_t* quat) {
		return ((T (*)(WheelCollider*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4D3E7B8))(this, pos, quat);
	}
	template <typename T = float> T get_rpm() {
		return ((T (*)(WheelCollider*))(Il2CppBase() + 0x4D3E860))(this);
	}

};

}
