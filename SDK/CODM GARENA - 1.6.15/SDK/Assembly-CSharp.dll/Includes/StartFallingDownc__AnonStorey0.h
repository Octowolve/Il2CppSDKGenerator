#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartFallingDowncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartFallingDown>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& damageEffectSocket() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t damageEffect) {
		return ((T (*)(StartFallingDowncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2C58CB4))(this, damageEffect);
	}
	template <typename T = void> T m__1(uintptr_t smokeEffect) {
		return ((T (*)(StartFallingDowncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2C58E24))(this, smokeEffect);
	}

};

}
