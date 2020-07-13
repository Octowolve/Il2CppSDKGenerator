#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPlayerItemscAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPlayerItems>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Player() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(InitPlayerItemscAnonStorey3*, uintptr_t))(Il2CppBase() + 0x3AC126C))(this, it);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(InitPlayerItemscAnonStorey3*))(Il2CppBase() + 0x3AC135C))(this);
	}

};

}
