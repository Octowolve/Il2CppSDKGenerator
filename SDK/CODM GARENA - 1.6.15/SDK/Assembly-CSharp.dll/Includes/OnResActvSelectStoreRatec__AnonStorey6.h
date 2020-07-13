#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnResActvSelectStoreRatecAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnResActvSelectStoreRate>c__AnonStorey6"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnResActvSelectStoreRatecAnonStorey6*, uintptr_t))(Il2CppBase() + 0x3531E64))(this, it);
	}

};

}
