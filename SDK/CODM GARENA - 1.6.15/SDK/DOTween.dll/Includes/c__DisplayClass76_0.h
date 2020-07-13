#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass760
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass76_0"));
	}

	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T DOBlendableColorb__0() {
		return ((T (*)(cDisplayClass760*))(Il2CppBase() + 0x51D4798))(this);
	}
	template <typename T = void> T DOBlendableColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass760*, uintptr_t))(Il2CppBase() + 0x51D47A8))(this, x);
	}

};

}
