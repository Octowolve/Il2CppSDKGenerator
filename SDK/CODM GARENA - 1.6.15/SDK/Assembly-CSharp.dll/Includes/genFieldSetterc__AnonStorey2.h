#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genFieldSettercAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genFieldSetter>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& field() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(genFieldSettercAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4DD3A48))(this, L);
	}
	template <typename T = int32_t> T m__1(uintptr_t L) {
		return ((T (*)(genFieldSettercAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4DD3E44))(this, L);
	}

};

}
