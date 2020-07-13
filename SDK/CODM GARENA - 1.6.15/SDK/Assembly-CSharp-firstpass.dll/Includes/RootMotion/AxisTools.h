#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class AxisTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "AxisTools"));
	}


	template <typename T = Il2CppVector3> static T ToVector3(uintptr_t axis) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x389806C))(0, axis);
	}
	template <typename T = uintptr_t> static T ToAxis(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38980AC))(0, v);
	}
	template <typename T = uintptr_t> static T GetAxisToPoint(uintptr_t t, Il2CppVector3 worldPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x38981B8))(0, t, worldPosition);
	}
	template <typename T = uintptr_t> static T GetAxisToDirection(uintptr_t t, Il2CppVector3 direction) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3898304))(0, t, direction);
	}
	template <typename T = Il2CppVector3> static T GetAxisVectorToPoint(uintptr_t t, Il2CppVector3 worldPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3898274))(0, t, worldPosition);
	}
	template <typename T = Il2CppVector3> static T GetAxisVectorToDirection(uintptr_t t, Il2CppVector3 direction) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x38983C0))(0, t, direction);
	}

};

}
