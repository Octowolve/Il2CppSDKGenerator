#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genEnumCastFromcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genEnumCastFrom>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(genEnumCastFromcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x4DD3248))(this, L);
	}

};

}
