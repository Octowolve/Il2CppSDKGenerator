#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterCastercAnonStorey41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RegisterCaster>c__AnonStorey4`1"));
	}

	template <typename T = void*> T& get() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T m__0(uintptr_t L, int32_t idx, uintptr_t o) {
		return ((T (*)(RegisterCastercAnonStorey41*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x518F9C0))(this, L, idx, o);
	}

};

}
