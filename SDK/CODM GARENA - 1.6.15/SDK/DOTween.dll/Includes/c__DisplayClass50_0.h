#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass500
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass50_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DORotateQuaternionb__0() {
		return ((T (*)(cDisplayClass500*))(Il2CppBase() + 0x51D3774))(this);
	}
	template <typename T = void> T DORotateQuaternionb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass500*, Il2CppQuaternion))(Il2CppBase() + 0x51D37A0))(this, x);
	}

};

}
