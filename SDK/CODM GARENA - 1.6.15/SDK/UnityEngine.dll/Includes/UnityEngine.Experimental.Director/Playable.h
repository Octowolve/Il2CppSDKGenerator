#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class Playable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "Playable"));
	}

	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T op_Implicit(uintptr_t b) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1280))(0, b);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(Playable*))(Il2CppBase() + 0x4DB12A8))(this);
	}

};

}
