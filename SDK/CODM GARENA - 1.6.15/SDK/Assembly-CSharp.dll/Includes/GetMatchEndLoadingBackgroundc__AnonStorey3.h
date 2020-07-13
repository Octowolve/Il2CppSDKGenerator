#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMatchEndLoadingBackgroundcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMatchEndLoadingBackground>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$4() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(GetMatchEndLoadingBackgroundcAnonStorey3*, uint32_t))(Il2CppBase() + 0x43330A8))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetMatchEndLoadingBackgroundcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x43330E4))(this, it);
	}

};

}
