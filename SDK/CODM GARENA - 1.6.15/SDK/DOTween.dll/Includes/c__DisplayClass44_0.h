#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass440
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass44_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveZb__0() {
		return ((T (*)(cDisplayClass440*))(Il2CppBase() + 0x51D3488))(this);
	}
	template <typename T = void> T DOMoveZb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass440*, Il2CppVector3))(Il2CppBase() + 0x51D34B4))(this, x);
	}

};

}
