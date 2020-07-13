#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genNullableCheckercAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genNullableChecker>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& oc() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t L, int32_t idx) {
		return ((T (*)(genNullableCheckercAnonStorey1*, uintptr_t, int32_t))(Il2CppBase() + 0xF535BC))(this, L, idx);
	}

};

}
