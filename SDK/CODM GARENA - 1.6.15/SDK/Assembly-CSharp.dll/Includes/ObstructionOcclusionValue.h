#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObstructionOcclusionValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObstructionOcclusionValue"));
	}

	template <typename T = float> T& currentValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& targetValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T Update(float fadeRate) {
		return ((T (*)(ObstructionOcclusionValue*, float))(Il2CppBase() + 0x49121D4))(this, fadeRate);
	}

};

}
