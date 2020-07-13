#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class SubBehaviourCOM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "SubBehaviourCOM"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& velocityDamper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& velocityLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& velocityMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& centerOfPressureSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& centerOfPressure() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppQuaternion> T& rotation() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppQuaternion> T& inverseRotation() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isGrounded() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& lastGroundedTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groundContacts() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groundContactPoints() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& groundLayers() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D303C))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppVector3))(Il2CppBase() + 0x38D3050))(this, value);
	}
	template <typename T = Il2CppVector3> T get_direction() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38A5350))(this);
	}
	template <typename T = void> T set_direction(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppVector3))(Il2CppBase() + 0x38D305C))(this, value);
	}
	template <typename T = float> T get_angle() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38AFA0C))(this);
	}
	template <typename T = void> T set_angle(float value) {
		return ((T (*)(SubBehaviourCOM*, float))(Il2CppBase() + 0x38D3068))(this, value);
	}
	template <typename T = Il2CppVector3> T get_velocity() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3070))(this);
	}
	template <typename T = void> T set_velocity(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppVector3))(Il2CppBase() + 0x38D3084))(this, value);
	}
	template <typename T = Il2CppVector3> T get_centerOfPressure() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3090))(this);
	}
	template <typename T = void> T set_centerOfPressure(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppVector3))(Il2CppBase() + 0x38D30A4))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D30B0))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppQuaternion))(Il2CppBase() + 0x38D30C0))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_inverseRotation() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D30D8))(this);
	}
	template <typename T = void> T set_inverseRotation(Il2CppQuaternion value) {
		return ((T (*)(SubBehaviourCOM*, Il2CppQuaternion))(Il2CppBase() + 0x38D30E8))(this, value);
	}
	template <typename T = bool> T get_isGrounded() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3100))(this);
	}
	template <typename T = void> T set_isGrounded(bool value) {
		return ((T (*)(SubBehaviourCOM*, bool))(Il2CppBase() + 0x38D3108))(this, value);
	}
	template <typename T = float> T get_lastGroundedTime() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3110))(this);
	}
	template <typename T = void> T set_lastGroundedTime(float value) {
		return ((T (*)(SubBehaviourCOM*, float))(Il2CppBase() + 0x38D3118))(this, value);
	}
	template <typename T = void> T Initiate(uintptr_t behaviour, uintptr_t groundLayers) {
		return ((T (*)(SubBehaviourCOM*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A3F44))(this, behaviour, groundLayers);
	}
	template <typename T = void> T OnHierarchyChanged() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3120))(this);
	}
	template <typename T = void> T OnPreMuscleCollision(uintptr_t c) {
		return ((T (*)(SubBehaviourCOM*, uintptr_t))(Il2CppBase() + 0x38D3224))(this, c);
	}
	template <typename T = void> T OnPreMuscleCollisionExit(uintptr_t c) {
		return ((T (*)(SubBehaviourCOM*, uintptr_t))(Il2CppBase() + 0x38D349C))(this, c);
	}
	template <typename T = void> T OnPreActivate() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D357C))(this);
	}
	template <typename T = void> T OnPreLateUpdate() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3974))(this);
	}
	template <typename T = void> T OnPreDeactivate() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D4138))(this);
	}
	template <typename T = Il2CppVector3> T GetCollisionCOP(uintptr_t collision) {
		return ((T (*)(SubBehaviourCOM*, uintptr_t))(Il2CppBase() + 0x38D3340))(this, collision);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3D64))(this);
	}
	template <typename T = Il2CppVector3> T GetCenterOfMass() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3650))(this);
	}
	template <typename T = Il2CppVector3> T GetCenterOfMassVelocity() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3F20))(this);
	}
	template <typename T = Il2CppVector3> T GetMomentum() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D4170))(this);
	}
	template <typename T = Il2CppVector3> T GetCenterOfPressure() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D3DD4))(this);
	}
	template <typename T = Il2CppVector3> T GetFeetCentroid() {
		return ((T (*)(SubBehaviourCOM*))(Il2CppBase() + 0x38D37E0))(this);
	}

};

}
