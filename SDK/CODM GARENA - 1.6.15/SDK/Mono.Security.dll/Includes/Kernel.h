#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Kernel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "Kernel"));
	}


	template <typename T = uintptr_t> static T AddSameSign(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C4D20))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T Subtract(uintptr_t big, uintptr_t small) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C51FC))(0, big, small);
	}
	template <typename T = void> static T MinusEq(uintptr_t big, uintptr_t small) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C69DC))(0, big, small);
	}
	template <typename T = void> static T PlusEq(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C6B88))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T Compare(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C3AF8))(0, bi1, bi2);
	}
	template <typename T = uint32_t> static T SingleByteDivideInPlace(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C35C4))(0, n, d);
	}
	template <typename T = uint32_t> static T DwordMod(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C54A8))(0, n, d);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DwordDivMod(uintptr_t n, uint32_t d) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C6DE0))(0, n, d);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T multiByteDivide(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C5574))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T LeftShift(uintptr_t bi, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x47C61DC))(0, bi, n);
	}
	template <typename T = uintptr_t> static T RightShift(uintptr_t bi, int32_t n) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x47C656C))(0, bi, n);
	}
	template <typename T = void> static T Multiply(Il2CppArray<uintptr_t>* x, uint32_t xOffset, uint32_t xLen, Il2CppArray<uintptr_t>* y, uint32_t yOffset, uint32_t yLen, Il2CppArray<uintptr_t>* d, uint32_t dOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x47C60DC))(0, x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
	}
	template <typename T = void> static T MultiplyMod2p32pmod(Il2CppArray<uintptr_t>* x, int32_t xOffset, int32_t xLen, Il2CppArray<uintptr_t>* y, int32_t yOffest, int32_t yLen, Il2CppArray<uintptr_t>* d, int32_t dOffset, int32_t mod) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47C7054))(0, x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
	}
	template <typename T = uint32_t> static T modInverse(uintptr_t bi, uint32_t modulus) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C7168))(0, bi, modulus);
	}
	template <typename T = uintptr_t> static T modInverse_1(uintptr_t bi, uintptr_t modulus) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C3D50))(0, bi, modulus);
	}

};

}
