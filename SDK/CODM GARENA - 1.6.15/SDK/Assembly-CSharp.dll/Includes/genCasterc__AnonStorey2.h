#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genCastercAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genCaster>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& keyType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& valueType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& keyCaster() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& valueCaster() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(genCastercAnonStorey2*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF51574))(this, L, idx, target);
	}

};

}
