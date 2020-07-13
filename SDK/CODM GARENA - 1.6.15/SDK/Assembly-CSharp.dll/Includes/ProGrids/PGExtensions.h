#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProGrids {

class PGExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProGrids", "PGExtensions"));
	}


	template <typename T = bool> static T Contains(Il2CppArray<uintptr_t>* t_arr, uintptr_t t) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4814EC8))(0, t_arr, t);
	}
	template <typename T = float> static T Sum(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4814FD4))(0, v);
	}
	template <typename T = bool> static T InFrustum(uintptr_t cam, Il2CppVector3 point) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4815040))(0, cam, point);
	}

};

}
