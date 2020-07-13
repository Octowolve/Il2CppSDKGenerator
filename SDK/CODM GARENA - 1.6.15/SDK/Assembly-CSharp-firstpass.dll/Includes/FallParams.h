#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FallParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "FallParams"));
	}

	template <typename T = float> T& startPinWeightMlp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& startMuscleWeightMlp() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& losePinSpeed() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
