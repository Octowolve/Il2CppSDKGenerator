#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math {

class BigInteger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Math", "BigInteger"));
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

	template <typename T = uintptr_t> static T get_Rng_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F98B30))(0);
	}
	template <typename T = uintptr_t> static T GenerateRandom_2(int32_t bits, uintptr_t rng) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3F98C90))(0, bits, rng);
	}
	template <typename T = uintptr_t> static T GenerateRandom_3(int32_t bits) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F98E84))(0, bits);
	}
	template <typename T = void> T Randomize(uintptr_t rng) {
		return ((T (*)(BigInteger*, uintptr_t))(Il2CppBase() + 0x3F98F2C))(this, rng);
	}
	template <typename T = void> T Randomize_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F99260))(this);
	}
	template <typename T = int32_t> T BitCount_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F991D0))(this);
	}
	template <typename T = bool> T TestBit_1(uint32_t bitNum) {
		return ((T (*)(BigInteger*, uint32_t))(Il2CppBase() + 0x3F99308))(this, bitNum);
	}
	template <typename T = bool> T TestBit_2(int32_t bitNum) {
		return ((T (*)(BigInteger*, int32_t))(Il2CppBase() + 0x3F99360))(this, bitNum);
	}
	template <typename T = void> T SetBit_2(uint32_t bitNum) {
		return ((T (*)(BigInteger*, uint32_t))(Il2CppBase() + 0x3F9949C))(this, bitNum);
	}
	template <typename T = void> T SetBit_3(uint32_t bitNum, bool value) {
		return ((T (*)(BigInteger*, uint32_t, bool))(Il2CppBase() + 0x3F994A4))(this, bitNum, value);
	}
	template <typename T = int32_t> T LowestSetBit_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F99514))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F995E0))(this);
	}
	template <typename T = Il2CppString*> T ToString_3(uint32_t radix) {
		return ((T (*)(BigInteger*, uint32_t))(Il2CppBase() + 0x3F997EC))(this, radix);
	}
	template <typename T = Il2CppString*> T ToString_4(uint32_t radix, Il2CppString* characterSet) {
		return ((T (*)(BigInteger*, uint32_t, Il2CppString*))(Il2CppBase() + 0x3F99878))(this, radix, characterSet);
	}
	template <typename T = void> T Normalize_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F9890C))(this);
	}
	template <typename T = void> T Clear_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F99D4C))(this);
	}
	template <typename T = int32_t> T GetHashCode_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F99DD8))(this);
	}
	template <typename T = Il2CppString*> T ToString_5() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F99E4C))(this);
	}
	template <typename T = bool> T Equals_1(uintptr_t o) {
		return ((T (*)(BigInteger*, uintptr_t))(Il2CppBase() + 0x3F99E54))(this, o);
	}
	template <typename T = uintptr_t> T ModInverse_1(uintptr_t modulus) {
		return ((T (*)(BigInteger*, uintptr_t))(Il2CppBase() + 0x3F9A374))(this, modulus);
	}
	template <typename T = uintptr_t> T ModPow_1(uintptr_t exp, uintptr_t n) {
		return ((T (*)(BigInteger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9AB60))(this, exp, n);
	}
	template <typename T = bool> T IsProbablePrime() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F9AEA8))(this);
	}
	template <typename T = uintptr_t> static T GeneratePseudoPrime_1(int32_t bits) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F9B280))(0, bits);
	}
	template <typename T = void> T Incr2_1() {
		return ((T (*)(BigInteger*))(Il2CppBase() + 0x3F9B340))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit_2(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3F9B180))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_3(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F9B470))(0, value);
	}
	template <typename T = uintptr_t> static T op_Addition_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9B558))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Subtraction_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9B964))(0, bi1, bi2);
	}
	template <typename T = uint32_t> static T op_Modulus_2(uintptr_t bi, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F9B230))(0, bi, ui);
	}
	template <typename T = uintptr_t> static T op_Modulus_3(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9BEA8))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Division_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9C754))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Multiply_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9C794))(0, bi1, bi2);
	}
	template <typename T = uintptr_t> static T op_Multiply_2(uintptr_t bi, int32_t i) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F9CB4C))(0, bi, i);
	}
	template <typename T = uintptr_t> static T op_LeftShift_1(uintptr_t bi1, int32_t shiftVal) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F9CE04))(0, bi1, shiftVal);
	}
	template <typename T = uintptr_t> static T op_RightShift_1(uintptr_t bi1, int32_t shiftVal) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F9D194))(0, bi1, shiftVal);
	}
	template <typename T = bool> static T op_Equality_2(uintptr_t bi1, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F99154))(0, bi1, ui);
	}
	template <typename T = bool> static T op_Inequality_2(uintptr_t bi1, uint32_t ui) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3F99CD0))(0, bi1, ui);
	}
	template <typename T = bool> static T op_Equality_3(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9A004))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_Inequality_3(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D474))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_GreaterThan_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D594))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_LessThan_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D5B4))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9D5C8))(0, bi1, bi2);
	}
	template <typename T = bool> static T op_LessThanOrEqual_1(uintptr_t bi1, uintptr_t bi2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9B210))(0, bi1, bi2);
	}

};

}
