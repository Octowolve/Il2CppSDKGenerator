#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitOwnLuckBoxItemcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitOwnLuckBoxItem>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(InitOwnLuckBoxItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x392F678))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(InitOwnLuckBoxItemcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x392F6B4))(this, x);
	}

};

}
