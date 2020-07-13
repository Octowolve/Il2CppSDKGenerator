#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass220
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass22_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& property() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = float> T DOFloatb__0() {
		return ((T (*)(cDisplayClass220*))(Il2CppBase() + 0x51D2738))(this);
	}
	template <typename T = void> T DOFloatb__1(float x) {
		return ((T (*)(cDisplayClass220*, float))(Il2CppBase() + 0x51D276C))(this, x);
	}

};

}
