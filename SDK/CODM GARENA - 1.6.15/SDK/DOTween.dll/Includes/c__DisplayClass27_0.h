#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass270
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass27_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& property() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T DOVectorb__0() {
		return ((T (*)(cDisplayClass270*))(Il2CppBase() + 0x51D297C))(this);
	}
	template <typename T = void> T DOVectorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass270*, uintptr_t))(Il2CppBase() + 0x51D29B0))(this, x);
	}

};

}
