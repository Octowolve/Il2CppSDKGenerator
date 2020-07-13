#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class MuscleCollision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "MuscleCollision"));
	}

	template <typename T = int32_t> T& muscleIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& collision() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& isStay() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
