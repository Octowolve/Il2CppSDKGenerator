#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass240
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass24_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& property() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppVector2> T DOOffsetb__0() {
		return ((T (*)(cDisplayClass240*))(Il2CppBase() + 0x51D280C))(this);
	}
	template <typename T = void> T DOOffsetb__1(Il2CppVector2 x) {
		return ((T (*)(cDisplayClass240*, Il2CppVector2))(Il2CppBase() + 0x51D2840))(this, x);
	}

};

}
