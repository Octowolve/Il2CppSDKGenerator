#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideRequestModelcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HideRequestModel>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(HideRequestModelcAnonStorey1*, uint32_t))(Il2CppBase() + 0x2A6BE3C))(this, it);
	}

};

}
