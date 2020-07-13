#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindOutputcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindOutput>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FindOutputcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4648A58))(this, it);
	}

};

}
