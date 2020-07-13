#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMatchEndLoadingBackgroundcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMatchEndLoadingBackground>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& ranNum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$4() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMatchEndLoadingBackgroundcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x43331D0))(this, it);
	}

};

}
