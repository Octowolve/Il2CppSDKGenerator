#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AngleRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AngleRange"));
	}

	template <typename T = float> T& minPtich() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& maxPitch() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& minYaw() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& maxYaw() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
