#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartProgressAnimcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartProgressAnim>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& bar() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& finishCallBack() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(StartProgressAnimcAnonStorey2*))(Il2CppBase() + 0x3B541E8))(this);
	}

};

}
