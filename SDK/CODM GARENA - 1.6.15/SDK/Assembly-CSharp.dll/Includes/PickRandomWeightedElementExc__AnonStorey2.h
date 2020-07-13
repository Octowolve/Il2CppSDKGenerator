#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickRandomWeightedElementExcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PickRandomWeightedElementEx>c__AnonStorey2"));
	}

	template <typename T = float> T& firstVal() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(void* t) {
		return ((T (*)(PickRandomWeightedElementExcAnonStorey2*, void*))(Il2CppBase() + 0x3CDF58C))(this, t);
	}

};

}
