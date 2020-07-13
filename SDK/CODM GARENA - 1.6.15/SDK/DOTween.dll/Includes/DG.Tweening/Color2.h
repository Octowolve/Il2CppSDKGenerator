#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class Color2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "Color2"));
	}

	template <typename T = uintptr_t> T& ca() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& cb() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T op_Addition(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x449BC14))(0, c1, c2);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x449BCD4))(0, c1, c2);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t c1, float f) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x449BD94))(0, c1, f);
	}

};

}
