#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Kernel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Kernel"));
	}


	template <typename T = uintptr_t> static T AddSameSign_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9B698))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T Subtract_1(uintptr_t big, uintptr_t small) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9BB74))(0, big, small);
	}
	template <typename T = void> static T MinusEq_1(uintptr_t big, uintptr_t small) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D5E8))(0, big, small);
	}
	template <typename T = void> static T PlusEq_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D794))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T Compare_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9A128))(0, bi1, bi2);
	}
	template <typename T = uint32_t> static T SingleByteDivideInPlace_1(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F99BF4))(0, n, d);
	}
	template <typename T = uint32_t> static T DwordMod_1(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F9BE1C))(0, n, d);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DwordDivMod_1(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F9D9EC))(0, n, d);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T multiByteDivide_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9BEE8))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T LeftShift_1(uintptr_t bi, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F9CE08))(0, bi, n);
	}
	template <typename T = uintptr_t> static T RightShift_1(uintptr_t bi, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F9D198))(0, bi, n);
	}
	template <typename T = uintptr_t> static T MultiplyByDword(uintptr_t n, uint32_t f) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F9CC98))(0, n, f);
	}
	template <typename T = void> static T Multiply_1(Il2CppArray<uintptr_t>* x, uint32_t xOffset, uint32_t xLen, Il2CppArray<uintptr_t>* y, uint32_t yOffset, uint32_t yLen, Il2CppArray<uintptr_t>* d, uint32_t dOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x3F9CA50))(0, x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
	}
	template <typename T = void> static T MultiplyMod2p32pmod_1(Il2CppArray<uintptr_t>* x, int32_t xOffset, int32_t xLen, Il2CppArray<uintptr_t>* y, int32_t yOffest, int32_t yLen, Il2CppArray<uintptr_t>* d, int32_t dOffset, int32_t mod) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3F9DC60))(0, x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
	}
	template <typename T = uint32_t> static T modInverse_2(uintptr_t bi, uint32_t modulus) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F9DD74))(0, bi, modulus);
	}
	template <typename T = uintptr_t> static T modInverse_3(uintptr_t bi, uintptr_t modulus) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9A380))(0, bi, modulus);
	}

};

}
