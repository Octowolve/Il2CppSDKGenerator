#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerUpEffectcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PowerUpEffect>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& pickupConf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PowerUpEffectcAnonStorey1*))(Il2CppBase() + 0x34C7834))(this);
	}

};

}
