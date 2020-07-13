#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowRequestModelcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowRequestModel>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(ShowRequestModelcAnonStorey0*, uint32_t))(Il2CppBase() + 0x2A6BE7C))(this, it);
	}

};

}
