#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genCastercAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genCaster>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& elementType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& elementCaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(genCastercAnonStorey1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF50DC0))(this, L, idx, target);
	}

};

}
