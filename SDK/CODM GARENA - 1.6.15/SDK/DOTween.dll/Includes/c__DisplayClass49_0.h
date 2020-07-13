#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass490
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass49_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DORotateb__0() {
		return ((T (*)(cDisplayClass490*))(Il2CppBase() + 0x51D36A4))(this);
	}
	template <typename T = void> T DORotateb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass490*, Il2CppQuaternion))(Il2CppBase() + 0x51D36D0))(this, x);
	}

};

}
