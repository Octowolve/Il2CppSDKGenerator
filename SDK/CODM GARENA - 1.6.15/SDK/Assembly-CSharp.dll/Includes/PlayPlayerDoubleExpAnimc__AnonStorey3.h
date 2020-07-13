#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayPlayerDoubleExpAnimcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayPlayerDoubleExpAnim>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayPlayerDoubleExpAnimcAnonStorey3*))(Il2CppBase() + 0x2965B74))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(PlayPlayerDoubleExpAnimcAnonStorey3*))(Il2CppBase() + 0x2965CD4))(this);
	}

};

}
