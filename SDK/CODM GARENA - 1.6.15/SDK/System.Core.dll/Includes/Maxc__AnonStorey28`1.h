#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxcAnonStorey281
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<Max>c__AnonStorey28`1"));
	}

	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T m__1E(uintptr_t a, uintptr_t b) {
		return ((T (*)(MaxcAnonStorey281*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49CC054))(this, a, b);
	}

};

}
