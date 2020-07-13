#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindClosestSpotcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindClosestSpot>c__AnonStorey0"));
	}

	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T m__0(uintptr_t x) {
		return ((T (*)(FindClosestSpotcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A21C8C))(this, x);
	}

};

}
