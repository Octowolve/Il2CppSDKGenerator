#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowExplosionEffectcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowExplosionEffect>c__AnonStorey1"));
	}

	template <typename T = bool> T& bShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t eff) {
		return ((T (*)(ShowExplosionEffectcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B76714))(this, eff);
	}

};

}
