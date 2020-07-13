#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnQTInfoFetchRescAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnQTInfoFetchRes>c__AnonStorey5"));
	}

	template <typename T = uint32_t> T& roomId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnQTInfoFetchRescAnonStorey5*, uintptr_t))(Il2CppBase() + 0x1D68140))(this, it);
	}

};

}
