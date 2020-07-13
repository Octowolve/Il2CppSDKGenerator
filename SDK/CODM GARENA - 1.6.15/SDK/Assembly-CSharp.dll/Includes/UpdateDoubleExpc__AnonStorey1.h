#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateDoubleExpcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateDoubleExp>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UpdateDoubleExpcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B543D8))(this, s);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(UpdateDoubleExpcAnonStorey1*))(Il2CppBase() + 0x3B5446C))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(UpdateDoubleExpcAnonStorey1*))(Il2CppBase() + 0x3B545CC))(this);
	}

};

}
