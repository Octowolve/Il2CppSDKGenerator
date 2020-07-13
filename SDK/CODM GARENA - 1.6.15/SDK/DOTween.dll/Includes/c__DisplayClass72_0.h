#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass720
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass72_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOPathb__0() {
		return ((T (*)(cDisplayClass720*))(Il2CppBase() + 0x51D4560))(this);
	}
	template <typename T = void> T DOPathb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass720*, Il2CppVector3))(Il2CppBase() + 0x51D458C))(this, x);
	}

};

}
