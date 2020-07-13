#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass320
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass32_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DORotateb__0() {
		return ((T (*)(cDisplayClass320*))(Il2CppBase() + 0x51D2B4C))(this);
	}

};

}
