#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass3_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T DOColorb__0() {
		return ((T (*)(cDisplayClass30*))(Il2CppBase() + 0x51D2A74))(this);
	}
	template <typename T = void> T DOColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass30*, uintptr_t))(Il2CppBase() + 0x51D2AA0))(this, x);
	}

};

}
