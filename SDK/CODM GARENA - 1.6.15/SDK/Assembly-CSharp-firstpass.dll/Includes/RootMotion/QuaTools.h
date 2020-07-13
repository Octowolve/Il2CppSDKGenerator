#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class QuaTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "QuaTools"));
	}


	template <typename T = Il2CppQuaternion> static T Lerp(Il2CppQuaternion fromRotation, Il2CppQuaternion toRotation, float weight) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4F7F774))(0, fromRotation, toRotation, weight);
	}
	template <typename T = Il2CppQuaternion> static T Slerp(Il2CppQuaternion fromRotation, Il2CppQuaternion toRotation, float weight) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4F7F80C))(0, fromRotation, toRotation, weight);
	}
	template <typename T = Il2CppQuaternion> static T LinearBlend(Il2CppQuaternion q, float weight) {
		return ((T (*)(void *, Il2CppQuaternion, float))(Il2CppBase() + 0x4F7F8A4))(0, q, weight);
	}
	template <typename T = Il2CppQuaternion> static T SphericalBlend(Il2CppQuaternion q, float weight) {
		return ((T (*)(void *, Il2CppQuaternion, float))(Il2CppBase() + 0x4F7F958))(0, q, weight);
	}
	template <typename T = Il2CppQuaternion> static T FromToAroundAxis(Il2CppVector3 fromDirection, Il2CppVector3 toDirection, Il2CppVector3 axis) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4F7FA0C))(0, fromDirection, toDirection, axis);
	}
	template <typename T = Il2CppQuaternion> static T RotationToLocalSpace(Il2CppQuaternion space, Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4F7FB04))(0, space, rotation);
	}
	template <typename T = Il2CppQuaternion> static T FromToRotation(Il2CppQuaternion from, Il2CppQuaternion to) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4F7FB9C))(0, from, to);
	}
	template <typename T = Il2CppVector3> static T GetAxis(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4F7FC60))(0, v);
	}
	template <typename T = Il2CppQuaternion> static T ClampRotation(Il2CppQuaternion rotation, float clampWeight, int32_t clampSmoothing) {
		return ((T (*)(void *, Il2CppQuaternion, float, int32_t))(Il2CppBase() + 0x4F7FF00))(0, rotation, clampWeight, clampSmoothing);
	}
	template <typename T = float> static T ClampAngle(float angle, float clampWeight, int32_t clampSmoothing) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x4F8014C))(0, angle, clampWeight, clampSmoothing);
	}
	template <typename T = Il2CppQuaternion> static T MatchRotation(Il2CppQuaternion targetRotation, Il2CppVector3 targetforwardAxis, Il2CppVector3 targetUpAxis, Il2CppVector3 forwardAxis, Il2CppVector3 upAxis) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4F80344))(0, targetRotation, targetforwardAxis, targetUpAxis, forwardAxis, upAxis);
	}

};

}
