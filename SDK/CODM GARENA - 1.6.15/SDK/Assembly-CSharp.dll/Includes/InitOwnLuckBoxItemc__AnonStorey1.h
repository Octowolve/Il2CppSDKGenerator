#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitOwnLuckBoxItemcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitOwnLuckBoxItem>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(InitOwnLuckBoxItemcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x392F6F0))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(InitOwnLuckBoxItemcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x392F72C))(this, x);
	}

};

}
