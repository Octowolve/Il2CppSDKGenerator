#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickRandomWeightedElementcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PickRandomWeightedElement>c__AnonStorey1"));
	}

	template <typename T = float> T& firstVal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppVector3, float>*> T& dictionary() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(void* t) {
		return ((T (*)(PickRandomWeightedElementcAnonStorey1*, void*))(Il2CppBase() + 0x3CDF3D4))(this, t);
	}
	template <typename T = bool> T m__1(void* x) {
		return ((T (*)(PickRandomWeightedElementcAnonStorey1*, void*))(Il2CppBase() + 0x3CDF484))(this, x);
	}

};

}
