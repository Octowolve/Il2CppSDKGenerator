#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDRigidBody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDRigidBody"));
	}

	template <typename T = float> T& MinCollVelocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RB() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GSDRigidBody*))(Il2CppBase() + 0x3E30CC8))(this);
	}

};

}
