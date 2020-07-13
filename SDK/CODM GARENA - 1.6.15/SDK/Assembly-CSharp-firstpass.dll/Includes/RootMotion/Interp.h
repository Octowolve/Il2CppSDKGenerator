#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class Interp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Interp"));
	}


	template <typename T = float> static T Float(float t, uintptr_t mode) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4F7DEB0))(0, t, mode);
	}
	template <typename T = Il2CppVector3> static T V3(Il2CppVector3 v1, Il2CppVector3 v2, float t, uintptr_t mode) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4F7EC1C))(0, v1, v2, t, mode);
	}
	template <typename T = float> static T LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4F7ECCC))(0, value, target, increaseSpeed, decreaseSpeed);
	}
	template <typename T = float> static T None(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E2BC))(0, t, b, c);
	}
	template <typename T = float> static T InOutCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E2D8))(0, t, b, c);
	}
	template <typename T = float> static T InOutQuintic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E310))(0, t, b, c);
	}
	template <typename T = float> static T InQuintic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E35C))(0, t, b, c);
	}
	template <typename T = float> static T InQuartic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E384))(0, t, b, c);
	}
	template <typename T = float> static T InCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E3A8))(0, t, b, c);
	}
	template <typename T = float> static T InQuadratic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E3CC))(0, t, b, c);
	}
	template <typename T = float> static T OutQuintic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E3EC))(0, t, b, c);
	}
	template <typename T = float> static T OutQuartic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E444))(0, t, b, c);
	}
	template <typename T = float> static T OutCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E48C))(0, t, b, c);
	}
	template <typename T = float> static T OutInCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E4C4))(0, t, b, c);
	}
	template <typename T = float> static T OutInQuartic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7EE34))(0, t, b, c);
	}
	template <typename T = float> static T BackInCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E508))(0, t, b, c);
	}
	template <typename T = float> static T BackInQuartic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E540))(0, t, b, c);
	}
	template <typename T = float> static T OutBackCubic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E580))(0, t, b, c);
	}
	template <typename T = float> static T OutBackQuartic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E5C4))(0, t, b, c);
	}
	template <typename T = float> static T OutElasticSmall(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E618))(0, t, b, c);
	}
	template <typename T = float> static T OutElasticBig(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E68C))(0, t, b, c);
	}
	template <typename T = float> static T InElasticSmall(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E700))(0, t, b, c);
	}
	template <typename T = float> static T InElasticBig(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E764))(0, t, b, c);
	}
	template <typename T = float> static T InSine(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E7C8))(0, t, b, c);
	}
	template <typename T = float> static T OutSine(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E8A0))(0, t, b, c);
	}
	template <typename T = float> static T InOutSine(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7E974))(0, t, b, c);
	}
	template <typename T = float> static T InElastic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7EE78))(0, t, b, c);
	}
	template <typename T = float> static T OutElastic(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7EA58))(0, t, b, c);
	}
	template <typename T = float> static T InBack(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7EB8C))(0, t, b, c);
	}
	template <typename T = float> static T OutBack(float t, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4F7EBCC))(0, t, b, c);
	}

};

}
