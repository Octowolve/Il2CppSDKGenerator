#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SanityCheckClipDatacAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<SanityCheckClipData>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__F(uintptr_t element) {
		return ((T (*)(SanityCheckClipDatacAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4874DEC))(this, element);
	}
	template <typename T = bool> T m__10(uintptr_t element) {
		return ((T (*)(SanityCheckClipDatacAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4874EA0))(this, element);
	}
	template <typename T = bool> T m__11(uintptr_t element) {
		return ((T (*)(SanityCheckClipDatacAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4874F54))(this, element);
	}

};

}
