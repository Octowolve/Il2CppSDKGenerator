#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatePlayerInputOnMobilecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdatePlayerInputOnMobile>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& touch() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t t) {
		return ((T (*)(UpdatePlayerInputOnMobilecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2456CAC))(this, t);
	}

};

}
