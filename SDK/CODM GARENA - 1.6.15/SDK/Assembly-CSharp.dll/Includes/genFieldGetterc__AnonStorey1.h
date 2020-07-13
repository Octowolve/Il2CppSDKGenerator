#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genFieldGettercAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genFieldGetter>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& field() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(genFieldGettercAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4DD35B0))(this, L);
	}
	template <typename T = int32_t> T m__1(uintptr_t L) {
		return ((T (*)(genFieldGettercAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4DD3634))(this, L);
	}

};

}
