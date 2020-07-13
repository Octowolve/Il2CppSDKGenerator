#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayNormalBPAnimcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayNormalBPAnim>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& timeoutTimer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayNormalBPAnimcAnonStorey0*))(Il2CppBase() + 0x293C78C))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(PlayNormalBPAnimcAnonStorey0*))(Il2CppBase() + 0x293C7DC))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(PlayNormalBPAnimcAnonStorey0*))(Il2CppBase() + 0x293C938))(this);
	}

};

}
