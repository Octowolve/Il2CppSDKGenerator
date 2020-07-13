#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass2_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOAspectb__0() {
		return ((T (*)(cDisplayClass20*))(Il2CppBase() + 0x44CEFDC))(this);
	}
	template <typename T = void> T DOAspectb__1(float x) {
		return ((T (*)(cDisplayClass20*, float))(Il2CppBase() + 0x44CF008))(this, x);
	}

};

}
