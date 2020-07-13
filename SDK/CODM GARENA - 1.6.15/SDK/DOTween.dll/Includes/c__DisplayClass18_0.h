#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass180
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass18_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T DOColorb__0() {
		return ((T (*)(cDisplayClass180*))(Il2CppBase() + 0x44CEEEC))(this);
	}
	template <typename T = void> T DOColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass180*, uintptr_t))(Il2CppBase() + 0x44CEF18))(this, x);
	}

};

}
