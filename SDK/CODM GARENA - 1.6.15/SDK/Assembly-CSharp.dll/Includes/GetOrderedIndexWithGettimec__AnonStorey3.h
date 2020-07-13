#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetOrderedIndexWithGettimecAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetOrderedIndexWithGettime>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& quality() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(GetOrderedIndexWithGettimecAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1A3E214))(this, item);
	}
	template <typename T = bool> T m__1(uintptr_t item) {
		return ((T (*)(GetOrderedIndexWithGettimecAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1A3E258))(this, item);
	}

};

}
