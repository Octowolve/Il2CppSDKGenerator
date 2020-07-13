#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Props
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "Props"));
	}

	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mappingWeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& pinWeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& muscleWeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& muscleDamper() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mapPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Clamp() {
		return ((T (*)(Props*))(Il2CppBase() + 0x38B8198))(this);
	}

};

}
