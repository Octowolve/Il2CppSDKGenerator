#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class SubBehaviourBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "SubBehaviourBase"));
	}

	template <typename T = uintptr_t> T& behaviour() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector2> static T XZ(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38D2F44))(0, v);
	}
	template <typename T = Il2CppVector3> static T XYZ(Il2CppVector2 v) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x38D2F70))(0, v);
	}
	template <typename T = Il2CppVector3> static T Flatten(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38D2FA4))(0, v);
	}
	template <typename T = Il2CppVector3> static T SetY(Il2CppVector3 v, float y) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x38D2FDC))(0, v, y);
	}

};

}
