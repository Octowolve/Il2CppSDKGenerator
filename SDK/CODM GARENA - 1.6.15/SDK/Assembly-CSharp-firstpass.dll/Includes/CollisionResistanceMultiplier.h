#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionResistanceMultiplier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "CollisionResistanceMultiplier"));
	}

	template <typename T = uintptr_t> T& layers() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& multiplier() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& collisionThreshold() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
