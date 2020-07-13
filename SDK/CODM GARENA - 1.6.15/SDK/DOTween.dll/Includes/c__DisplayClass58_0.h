#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass580
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass58_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DOLookAtb__0() {
		return ((T (*)(cDisplayClass580*))(Il2CppBase() + 0x51D3AE0))(this);
	}
	template <typename T = void> T DOLookAtb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass580*, Il2CppQuaternion))(Il2CppBase() + 0x51D3B0C))(this, x);
	}

};

}
