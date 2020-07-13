#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Int32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Int32"));
	}

	template <typename T = int32_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2848))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE28F8))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE29A8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2A60))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2B24))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2BE0))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2C90))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2C98))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2D48))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2DF8))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE2EA8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE2FF4))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE30A4))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE3154))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE3204))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE3328))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE33E4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Int32*))(Il2CppBase() + 0x3FE33F4))(this);
	}
	template <typename T = int32_t> T CompareTo_1(int32_t value) {
		return ((T (*)(Int32*, int32_t))(Il2CppBase() + 0x3FE3418))(this, value);
	}
	template <typename T = bool> T Equals_1(int32_t obj) {
		return ((T (*)(Int32*, int32_t))(Il2CppBase() + 0x3FE3448))(this, obj);
	}
	template <typename T = bool> static T ProcessTrailingWhitespace(bool tryParse, Il2CppString* s, int32_t position, uintptr_t exc) {
		return ((T (*)(void *, bool, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x3FE22D0))(0, tryParse, s, position, exc);
	}
	template <typename T = bool> static T Parse(Il2CppString* s, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FE345C))(0, s, tryParse, result, exc);
	}
	template <typename T = int32_t> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE37A0))(0, s, provider);
	}
	template <typename T = int32_t> static T Parse_2(Il2CppString* s, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE37C4))(0, s, style);
	}
	template <typename T = bool> static T CheckStyle(uintptr_t style, bool tryParse, uintptr_t exc) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3FE37E0))(0, style, tryParse, exc);
	}
	template <typename T = bool> static T JumpOverWhite(uintptr_t pos, Il2CppString* s, bool reportError, bool tryParse, uintptr_t exc) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, bool, uintptr_t))(Il2CppBase() + 0x3FE3910))(0, pos, s, reportError, tryParse, exc);
	}
	template <typename T = void> static T FindSign(uintptr_t pos, Il2CppString* s, uintptr_t nfi, uintptr_t foundSign, uintptr_t negative) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE3A68))(0, pos, s, nfi, foundSign, negative);
	}
	template <typename T = void> static T FindCurrency(uintptr_t pos, Il2CppString* s, uintptr_t nfi, uintptr_t foundCurrency) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE3BEC))(0, pos, s, nfi, foundCurrency);
	}
	template <typename T = bool> static T FindExponent(uintptr_t pos, Il2CppString* s, uintptr_t exponent, bool tryParse, uintptr_t exc) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x3FE3D50))(0, pos, s, exponent, tryParse, exc);
	}
	template <typename T = bool> static T FindOther(uintptr_t pos, Il2CppString* s, Il2CppString* other) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FE41F0))(0, pos, s, other);
	}
	template <typename T = bool> static T ValidDigit(char e, bool allowHex) {
		return ((T (*)(void *, char, bool))(Il2CppBase() + 0x3FE4340))(0, e, allowHex);
	}
	template <typename T = uintptr_t> static T GetFormatException() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FE2224))(0);
	}
	template <typename T = bool> static T Parse_3(Il2CppString* s, uintptr_t style, uintptr_t fp, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FE4460))(0, s, style, fp, tryParse, result, exc);
	}
	template <typename T = int32_t> static T Parse_4(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FE54FC))(0, s);
	}
	template <typename T = int32_t> static T Parse_5(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE2508))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FCAC08))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FE5548))(0, s, style, provider, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Int32*))(Il2CppBase() + 0x3FE558C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Int32*, uintptr_t))(Il2CppBase() + 0x3FE5644))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Int32*, Il2CppString*))(Il2CppBase() + 0x3FE5710))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Int32*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE571C))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Int32*))(Il2CppBase() + 0x3FE5724))(this);
	}

};

}
