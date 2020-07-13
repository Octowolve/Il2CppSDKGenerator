#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreloadEffectResourcecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PreloadEffectResource>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t effect) {
		return ((T (*)(PreloadEffectResourcecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x49B9CEC))(this, effect);
	}

};

}
