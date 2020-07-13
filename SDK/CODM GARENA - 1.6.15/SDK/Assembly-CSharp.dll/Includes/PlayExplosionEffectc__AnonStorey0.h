#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayExplosionEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayExplosionEffect>c__AnonStorey0"));
	}

	template <typename T = float> T& atTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t explosionEffect) {
		return ((T (*)(PlayExplosionEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x242BD7C))(this, explosionEffect);
	}

};

}
