#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PhysXTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PhysXTools"));
	}


	template <typename T = void> static T Predict(uintptr_t r, int32_t steps, uintptr_t* position, uintptr_t* rotation) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x38B9A58))(0, r, steps, position, rotation);
	}
	template <typename T = void> static T Predict_1(uintptr_t r, int32_t steps, uintptr_t* position, uintptr_t* rotation, Il2CppVector3 gravity, float drag, float angularDrag) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, uintptr_t*, Il2CppVector3, float, float))(Il2CppBase() + 0x38B9AE0))(0, r, steps, position, rotation, gravity, drag, angularDrag);
	}
	template <typename T = void> static T Predict_2(uintptr_t position, uintptr_t rotation, uintptr_t velocity, uintptr_t angularVelocity, Il2CppVector3 gravity, float drag, float angularDrag) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x38B9C14))(0, position, rotation, velocity, angularVelocity, gravity, drag, angularDrag);
	}
	template <typename T = Il2CppVector3> static T GetCenterOfMass(uintptr_t puppet) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38B9F00))(0, puppet);
	}
	template <typename T = Il2CppVector3> static T GetCenterOfMass_1(Il2CppArray<uintptr_t>* rigidbodies) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38BA118))(0, rigidbodies);
	}
	template <typename T = Il2CppVector3> static T GetCenterOfMassVelocity(Il2CppArray<uintptr_t>* rigidbodies) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38BA2D4))(0, rigidbodies);
	}
	template <typename T = void> static T DivByInertia(uintptr_t v, Il2CppQuaternion rotation, Il2CppVector3 inertiaTensor) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x38BA490))(0, v, rotation, inertiaTensor);
	}
	template <typename T = void> static T ScaleByInertia(uintptr_t v, Il2CppQuaternion rotation, Il2CppVector3 inertiaTensor) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x38BA5D8))(0, v, rotation, inertiaTensor);
	}
	template <typename T = Il2CppVector3> static T GetFromToAcceleration(Il2CppVector3 fromV, Il2CppVector3 toV) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x38BA6BC))(0, fromV, toV);
	}
	template <typename T = Il2CppVector3> static T GetAngularAcceleration(Il2CppQuaternion fromR, Il2CppQuaternion toR) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x38BA7CC))(0, fromR, toR);
	}
	template <typename T = void> static T AddFromToTorque(uintptr_t r, Il2CppQuaternion toR, uintptr_t forceMode) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x38BAA7C))(0, r, toR, forceMode);
	}
	template <typename T = void> static T AddFromToTorque_1(uintptr_t r, Il2CppVector3 fromV, Il2CppVector3 toV, uintptr_t forceMode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x38BAD08))(0, r, fromV, toV, forceMode);
	}
	template <typename T = void> static T AddFromToForce(uintptr_t r, Il2CppVector3 fromV, Il2CppVector3 toV, uintptr_t forceMode) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x38BAF70))(0, r, fromV, toV, forceMode);
	}
	template <typename T = Il2CppVector3> static T GetLinearAcceleration(Il2CppVector3 fromPoint, Il2CppVector3 toPoint) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x38BB15C))(0, fromPoint, toPoint);
	}
	template <typename T = Il2CppQuaternion> static T ToJointSpace(uintptr_t joint) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38BB1D0))(0, joint);
	}
	template <typename T = Il2CppVector3> static T CalculateInertiaTensorCuboid(Il2CppVector3 size, float mass) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x38BB2B8))(0, size, mass);
	}
	template <typename T = Il2CppVector3> static T Div(Il2CppVector3 v, Il2CppVector3 v2) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x38BA57C))(0, v, v2);
	}

};

}
