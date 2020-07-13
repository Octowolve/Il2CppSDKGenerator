#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass80
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass8_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppRect> T DOPixelRectb__0() {
		return ((T (*)(cDisplayClass80*))(Il2CppBase() + 0x51D4B88))(this);
	}
	template <typename T = void> T DOPixelRectb__1(Il2CppRect x) {
		return ((T (*)(cDisplayClass80*, Il2CppRect))(Il2CppBase() + 0x51D4BB4))(this, x);
	}

};

}
