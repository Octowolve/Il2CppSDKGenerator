#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayPlayerNormalExpAnimcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayPlayerNormalExpAnim>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayPlayerNormalExpAnimcAnonStorey2*))(Il2CppBase() + 0x2965D34))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(PlayPlayerNormalExpAnimcAnonStorey2*))(Il2CppBase() + 0x2965DC0))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(PlayPlayerNormalExpAnimcAnonStorey2*))(Il2CppBase() + 0x2965F44))(this);
	}

};

}
