#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitViewcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitView>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(InitViewcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x49252CC))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(InitViewcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4925310))(this, s);
	}

};

}
