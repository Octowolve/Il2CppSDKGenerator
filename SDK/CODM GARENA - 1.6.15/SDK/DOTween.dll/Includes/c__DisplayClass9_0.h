#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass90
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass9_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppRect> T DORectb__0() {
		return ((T (*)(cDisplayClass90*))(Il2CppBase() + 0x51D50FC))(this);
	}
	template <typename T = void> T DORectb__1(Il2CppRect x) {
		return ((T (*)(cDisplayClass90*, Il2CppRect))(Il2CppBase() + 0x51D5128))(this, x);
	}

};

}
