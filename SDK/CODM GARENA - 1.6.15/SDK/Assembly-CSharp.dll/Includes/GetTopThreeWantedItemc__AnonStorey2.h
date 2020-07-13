#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTopThreeWantedItemcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTopThreeWantedItem>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& itemInPool() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetTopThreeWantedItemcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3DD2DE0))(this, it);
	}

};

}
