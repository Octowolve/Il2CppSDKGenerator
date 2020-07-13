#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genNullableCastercAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genNullableCaster>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& oc() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t L, int32_t idx, uintptr_t target) {
		return ((T (*)(genNullableCastercAnonStorey3*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF519E0))(this, L, idx, target);
	}

};

}
