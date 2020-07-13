#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class BipedLimbOrientations
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedLimbOrientations"));
	}

	template <typename T = uintptr_t> T& leftArm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rightArm() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& leftLeg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rightLeg() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T get_UMA() {
		return ((T (*)(void *))(Il2CppBase() + 0x38986D0))(0);
	}
	template <typename T = uintptr_t> static T get_MaxBiped() {
		return ((T (*)(void *))(Il2CppBase() + 0x3898AA8))(0);
	}

};

}
