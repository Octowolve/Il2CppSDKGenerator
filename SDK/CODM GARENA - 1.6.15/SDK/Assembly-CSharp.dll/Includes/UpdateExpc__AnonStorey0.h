#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateExpcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateExp>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UpdateExpcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3B545F4))(this, s);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(UpdateExpcAnonStorey0*))(Il2CppBase() + 0x3B54688))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(UpdateExpcAnonStorey0*))(Il2CppBase() + 0x3B54714))(this);
	}
	template <typename T = void> T m__3() {
		return ((T (*)(UpdateExpcAnonStorey0*))(Il2CppBase() + 0x3B54874))(this);
	}

};

}
