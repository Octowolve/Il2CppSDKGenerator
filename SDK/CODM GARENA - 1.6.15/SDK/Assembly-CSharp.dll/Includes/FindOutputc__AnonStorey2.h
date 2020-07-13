#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindOutputcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindOutput>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& gameType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FindOutputcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4648AA0))(this, it);
	}

};

}
