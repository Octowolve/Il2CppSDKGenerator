#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimulatecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "<Simulate>c__AnonStorey0"));
	}

	template <typename T = float> T& t() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& restart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& fixedTimeStep() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = bool> T m__0(uintptr_t ps) {
		return ((T (*)(SimulatecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4AC037C))(this, ps);
	}

};

}
