#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnableRenderStateEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EnableRenderStateEffect>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t targetObj) {
		return ((T (*)(EnableRenderStateEffectcAnonStorey0*, int32_t, uintptr_t))(Il2CppBase() + 0x3EFB26C))(this, id, targetObj);
	}

};

}
