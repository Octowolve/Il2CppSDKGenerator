#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayDoubleBPAnimcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayDoubleBPAnim>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& timeoutTimer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayDoubleBPAnimcAnonStorey1*))(Il2CppBase() + 0x293C588))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(PlayDoubleBPAnimcAnonStorey1*))(Il2CppBase() + 0x293C5E0))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(PlayDoubleBPAnimcAnonStorey1*))(Il2CppBase() + 0x293C744))(this);
	}

};

}
