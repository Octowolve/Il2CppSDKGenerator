#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Char
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Char"));
	}

	template <typename T = char> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& category_data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& numeric_data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& numeric_data_values() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& to_lower_data_low() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& to_lower_data_high() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& to_upper_data_low() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& to_upper_data_high() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t, uintptr_t))(Il2CppBase() + 0x362E138))(this, targetType, provider);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E1D4))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E34C))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E354))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E3F0))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E494))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E538))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E6B0))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E75C))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E810))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362E980))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362EA1C))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362EAD0))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362EB7C))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362EC30))(this, provider);
	}
	template <typename T = void> static T GetDataTablePointers(uintptr_t* category_data, uintptr_t* numeric_data, uintptr_t* numeric_data_values, uintptr_t* to_lower_data_low, uintptr_t* to_lower_data_high, uintptr_t* to_upper_data_low, uintptr_t* to_upper_data_high) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x362DFC0))(0, category_data, numeric_data, numeric_data_values, to_lower_data_low, to_lower_data_high, to_upper_data_low, to_upper_data_high);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362ED68))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x362EE24))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(char value) {
		return ((T (*)(Char*, char))(Il2CppBase() + 0x362EE4C))(this, value);
	}
	template <typename T = bool> T Equals_1(char obj) {
		return ((T (*)(Char*, char))(Il2CppBase() + 0x362EE80))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Char*))(Il2CppBase() + 0x362EE9C))(this);
	}
	template <typename T = uintptr_t> static T GetUnicodeCategory(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362EEA4))(0, c);
	}
	template <typename T = bool> static T IsControl(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362EF5C))(0, c);
	}
	template <typename T = bool> static T IsDigit(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F020))(0, c);
	}
	template <typename T = bool> static T IsDigit_1(Il2CppString* s, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x362F0E4))(0, s, index);
	}
	template <typename T = bool> static T IsHighSurrogate(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F2E4))(0, c);
	}
	template <typename T = bool> static T IsLetter(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F2F8))(0, c);
	}
	template <typename T = bool> static T IsLetterOrDigit(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F3BC))(0, c);
	}
	template <typename T = bool> static T IsLetterOrDigit_1(Il2CppString* s, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x362F490))(0, s, index);
	}
	template <typename T = bool> static T IsLower(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F564))(0, c);
	}
	template <typename T = bool> static T IsLowSurrogate(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F624))(0, c);
	}
	template <typename T = bool> static T IsNumber(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F638))(0, c);
	}
	template <typename T = bool> static T IsNumber_1(Il2CppString* s, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x362F704))(0, s, index);
	}
	template <typename T = bool> static T IsPunctuation(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F7D8))(0, c);
	}
	template <typename T = bool> static T IsSurrogate(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F8A4))(0, c);
	}
	template <typename T = bool> static T IsSymbol(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362F968))(0, c);
	}
	template <typename T = bool> static T IsUpper(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362FA34))(0, c);
	}
	template <typename T = bool> static T IsWhiteSpace(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362FAF8))(0, c);
	}
	template <typename T = bool> static T IsWhiteSpace_1(Il2CppString* s, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x362FBFC))(0, s, index);
	}
	template <typename T = void> static T CheckParameter(Il2CppString* s, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x362F1B8))(0, s, index);
	}
	template <typename T = char> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x362FCD0))(0, s);
	}
	template <typename T = char> static T ToLower(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362FE08))(0, c);
	}
	template <typename T = char> static T ToLowerInvariant(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362FEEC))(0, c);
	}
	template <typename T = char> static T ToLower_1(char c, uintptr_t culture) {
		return ((T (*)(void *, char, uintptr_t))(Il2CppBase() + 0x3630028))(0, c, culture);
	}
	template <typename T = char> static T ToUpper(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x363017C))(0, c);
	}
	template <typename T = char> static T ToUpperInvariant(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3630260))(0, c);
	}
	template <typename T = char> static T ToUpper_1(char c, uintptr_t culture) {
		return ((T (*)(void *, char, uintptr_t))(Il2CppBase() + 0x363039C))(0, c, culture);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Char*))(Il2CppBase() + 0x3630504))(this);
	}
	template <typename T = Il2CppString*> static T ToString_1(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3630518))(0, c);
	}
	template <typename T = Il2CppString*> T ToString_2(uintptr_t provider) {
		return ((T (*)(Char*, uintptr_t))(Il2CppBase() + 0x363053C))(this, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Char*))(Il2CppBase() + 0x3630550))(this);
	}

};

}
