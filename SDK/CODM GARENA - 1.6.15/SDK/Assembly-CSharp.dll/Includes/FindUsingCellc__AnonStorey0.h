#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindUsingCellcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindUsingCell>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FindUsingCellcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3AE2E68))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(FindUsingCellcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3AE2F44))(this, it);
	}

};

}
