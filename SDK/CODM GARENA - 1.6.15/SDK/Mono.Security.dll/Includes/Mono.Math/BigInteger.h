#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math {

class BigInteger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Math", "BigInteger"));
	}

	template <typename T = uint32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& smallPrimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Rng() {
		return ((T (*)(void *))(Il2CppBase() + 0x47C2828))(0);
	}
	template <typename T = uintptr_t> static T GenerateRandom(int32_t bits, uintptr_t rng) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x47C2988))(0, bits, rng);
	}
	template <typename T = uintptr_t> static T GenerateRandom_1(int32_t bits) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47C2B7C))(0, bits);
	}
	template <typename T = int32_t> T BitCount() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C2C24))(this);
	}
	template <typename T = bool> T TestBit(int32_t bitNum) {
		return ((T (*)(BigInteger*, int32_t))(Il2CppBase() + 0x47C2CB4))(this, bitNum);
	}
	template <typename T = void> T SetBit(uint32_t bitNum) {
		return ((T (*)(BigInteger*, uint32_t))(Il2CppBase() + 0x47C2DF0))(this, bitNum);
	}
	template <typename T = void> T SetBit_1(uint32_t bitNum, bool value) {
		return ((T (*)(BigInteger*, uint32_t, bool))(Il2CppBase() + 0x47C2DF8))(this, bitNum, value);
	}
	template <typename T = int32_t> T LowestSetBit() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C2E68))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C2FB0))(this);
	}
	template <typename T = Il2CppString*> T ToString(uint32_t radix) {
		return ((T (*)(BigInteger*, uint32_t))(Il2CppBase() + 0x47C31BC))(this, radix);
	}
	template <typename T = Il2CppString*> T ToString_1(uint32_t radix, Il2CppString* characterSet) {
		return ((T (*)(BigInteger*, uint32_t, Il2CppString*))(Il2CppBase() + 0x47C3248))(this, radix, characterSet);
	}
	template <typename T = void> T Normalize() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C2604))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C371C))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C37A8))(this);
	}
	template <typename T = Il2CppString*> T ToString_2() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C381C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(BigInteger*, uintptr_t))(Il2CppBase() + 0x47C3824))(this, o);
	}
	template <typename T = uintptr_t> T ModInverse(uintptr_t modulus) {
		return ((T (*)(BigInteger*, uintptr_t))(Il2CppBase() + 0x47C3D44))(this, modulus);
	}
	template <typename T = uintptr_t> T ModPow(uintptr_t exp, uintptr_t n) {
		return ((T (*)(BigInteger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C4530))(this, exp, n);
	}
	template <typename T = uintptr_t> static T GeneratePseudoPrime(int32_t bits) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47C4878))(0, bits);
	}
	template <typename T = void> T Incr2() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x47C4938))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x47C4A68))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47C4AF8))(0, value);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C4BE0))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C4FEC))(0, bi1, bi2);
	}
	template <typename T = uint32_t> static T op_Modulus(uintptr_t bi, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C54A4))(0, bi, ui);
	}
	template <typename T = uintptr_t> static T op_Modulus_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C5534))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Division(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C5DE0))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C5E20))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_LeftShift(uintptr_t bi1, int32_t shiftVal) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x47C61D8))(0, bi1, shiftVal);
	}
	template <typename T = uintptr_t> static T op_RightShift(uintptr_t bi1, int32_t shiftVal) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x47C6568))(0, bi1, shiftVal);
	}
	template <typename T = bool> static T op_Equality(uintptr_t bi1, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C2F34))(0, bi1, ui);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t bi1, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x47C36A0))(0, bi1, ui);
	}
	template <typename T = bool> static T op_Equality_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C39D4))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_Inequality_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C6848))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C6968))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C6988))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C699C))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C69BC))(0, bi1, bi2);
	}

};

}
