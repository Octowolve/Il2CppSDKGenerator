#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Decimal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Decimal"));
	}

	template <typename T = uintptr_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& MinusOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& One() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& Zero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& MaxValueDiv10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uint32_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& hi() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& lo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& mid() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3668B38))(this, targetType, provider);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668BF0))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668CA8))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668D44))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668DE8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668DF8))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668EB8))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3668F70))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669028))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x36690E0))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669198))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669250))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669308))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x36693C0))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669478))(this, provider);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBits(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3669480))(0, d);
	}
	template <typename T = uintptr_t> static T Add(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3669598))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T Subtract(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36696EC))(0, d1, d2);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Decimal*))(Il2CppBase() + 0x36698E0))(this);
	}
	template <typename T = uint64_t> static T u64(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36698FC))(0, value);
	}
	template <typename T = int64_t> static T s64(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3669A2C))(0, value);
	}
	template <typename T = bool> static T Equals(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3669B50))(0, d1, d2);
	}
	template <typename T = bool> T Equals_1(uintptr_t value) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x3669E14))(this, value);
	}
	template <typename T = bool> T IsZero() {
		return ((T (*)(Decimal*))(Il2CppBase() + 0x3669E1C))(this);
	}
	template <typename T = bool> T IsNegative() {
		return ((T (*)(Decimal*))(Il2CppBase() + 0x3669E50))(this);
	}
	template <typename T = uintptr_t> static T Floor(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3669E5C))(0, d);
	}
	template <typename T = uintptr_t> static T Truncate(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3669F24))(0, d);
	}
	template <typename T = uintptr_t> static T Multiply(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3669FEC))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T Divide(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366A15C))(0, d1, d2);
	}
	template <typename T = int32_t> static T Compare(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3669C44))(0, d1, d2);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x366A55C))(this, value);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t value) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x366A62C))(this, value);
	}
	template <typename T = bool> T Equals_2(uintptr_t value) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x366A71C))(this, value);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3649E0C))(0, s, provider);
	}
	template <typename T = void> static T ThrowAtPos(int32_t pos) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x366A740))(0, pos);
	}
	template <typename T = void> static T ThrowInvalidExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x366A870))(0);
	}
	template <typename T = Il2CppString*> static T stripStyles(Il2CppString* s, uintptr_t style, uintptr_t nfi, uintptr_t* decPos, uintptr_t* isNegative, uintptr_t* expFlag, uintptr_t* exp, bool throwex) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x366A928))(0, s, style, nfi, decPos, isNegative, expFlag, exp, throwex);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36682B0))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x366BEC0))(0, s, style, provider, result);
	}
	template <typename T = bool> static T PerformParse(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* res, bool throwex) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x366B850))(0, s, style, provider, res, throwex);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Decimal*))(Il2CppBase() + 0x366BFCC))(this);
	}
	template <typename T = Il2CppString*> T ToString(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Decimal*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x366C09C))(this, format, provider);
	}
	template <typename T = Il2CppString*> T ToString_1() {
		return ((T (*)(Decimal*))(Il2CppBase() + 0x366C12C))(this);
	}
	template <typename T = Il2CppString*> T ToString_2(uintptr_t provider) {
		return ((T (*)(Decimal*, uintptr_t))(Il2CppBase() + 0x366C1C0))(this, provider);
	}
	template <typename T = int32_t> static T decimal2UInt64(uintptr_t val, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3669A20))(0, val, result);
	}
	template <typename T = int32_t> static T decimal2Int64(uintptr_t val, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3669B44))(0, val, result);
	}
	template <typename T = int32_t> static T decimalIncr(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36696E0))(0, d1, d2);
	}
	template <typename T = int32_t> static T string2decimal(uintptr_t* val, Il2CppString* sDigits, uint32_t decPos, int32_t sign) {
		return ((T (*)(void *, uintptr_t*, Il2CppString*, uint32_t, int32_t))(Il2CppBase() + 0x366BFA8))(0, val, sDigits, decPos, sign);
	}
	template <typename T = int32_t> static T decimalSetExponent(uintptr_t val, int32_t exp) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x366BFC0))(0, val, exp);
	}
	template <typename T = double> static T decimal2double(uintptr_t val) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x366C1C8))(0, val);
	}
	template <typename T = void> static T decimalFloorAndTrunc(uintptr_t val, int32_t floorFlag) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3669A14))(0, val, floorFlag);
	}
	template <typename T = int32_t> static T decimalMult(uintptr_t pd1, uintptr_t pd2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366A150))(0, pd1, pd2);
	}
	template <typename T = int32_t> static T decimalDiv(uintptr_t* pc, uintptr_t pa, uintptr_t pb) {
		return ((T (*)(void *, uintptr_t*, uintptr_t, uintptr_t))(Il2CppBase() + 0x366A3BC))(0, pc, pa, pb);
	}
	template <typename T = int32_t> static T decimalCompare(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366A3CC))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C1D0))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T op_Increment(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x366C2C0))(0, d);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C39C))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C48C))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T op_Division(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C57C))(0, d1, d2);
	}
	template <typename T = unsigned char> static T op_Explicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36471BC))(0, value);
	}
	template <typename T = signed char> static T op_Explicit_1(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364D694))(0, value);
	}
	template <typename T = int16_t> static T op_Explicit_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A9E8))(0, value);
	}
	template <typename T = uint16_t> static T op_Explicit_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364F7E8))(0, value);
	}
	template <typename T = int32_t> static T op_Explicit_4(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364B820))(0, value);
	}
	template <typename T = uint32_t> static T op_Explicit_5(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3650570))(0, value);
	}
	template <typename T = int64_t> static T op_Explicit_6(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364C5D8))(0, value);
	}
	template <typename T = uint64_t> static T op_Explicit_7(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3651298))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x36497BC))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3649C14))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_2(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3649D0C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_3(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364A10C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_4(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x366C66C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_5(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364978C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_6(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3649F78))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3649B14))(0, value);
	}
	template <typename T = uintptr_t> static T op_Implicit_8(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364A048))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_8(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364995C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_9(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364988C))(0, value);
	}
	template <typename T = float> static T op_Explicit_10(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364E3DC))(0, value);
	}
	template <typename T = double> static T op_Explicit_11(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A3EC))(0, value);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3646924))(0, d1, d2);
	}
	template <typename T = bool> static T op_Equality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C67C))(0, d1, d2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3646FE0))(0, d1, d2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C760))(0, d1, d2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36470D4))(0, d1, d2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366C854))(0, d1, d2);
	}

};

}
