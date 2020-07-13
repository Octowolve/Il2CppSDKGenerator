#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProGrids {

class pgEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProGrids", "pg_Enum"));
	}


	template <typename T = Il2CppVector3> static T InverseAxisMask(Il2CppVector3 v, uintptr_t axis) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x48114CC))(0, v, axis);
	}
	template <typename T = Il2CppVector3> static T AxisMask(Il2CppVector3 v, uintptr_t axis) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4811614))(0, v, axis);
	}
	template <typename T = float> static T SnapUnitValue(uintptr_t su) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x481175C))(0, su);
	}

};

}
