#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass190
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass19_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& property() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T DOColorb__0() {
		return ((T (*)(cDisplayClass190*))(Il2CppBase() + 0x44CEF54))(this);
	}
	template <typename T = void> T DOColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass190*, uintptr_t))(Il2CppBase() + 0x44CEF88))(this, x);
	}

};

}
