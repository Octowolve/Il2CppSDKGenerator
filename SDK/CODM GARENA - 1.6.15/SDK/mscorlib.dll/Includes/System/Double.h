#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Double
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Double"));
	}

	template <typename T = double> static T& Epsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& NaN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& NegativeInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& PositiveInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_AllowSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_Digits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_Decimal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_ExponentSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_Exponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_ConsumeWhiteSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& State_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36702C4))(this, targetType, provider);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670378))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x367042C))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x36704C8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x367056C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670630))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x36706E4))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670798))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x367084C))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670900))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x36709B4))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670A60))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670B14))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670BC8))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670C7C))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670ECC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3670FA8))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(double value) {
		return ((T (*)(Double*, double))(Il2CppBase() + 0x36710E8))(this, value);
	}
	template <typename T = bool> T Equals_1(double obj) {
		return ((T (*)(Double*, double))(Il2CppBase() + 0x367113C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Double*))(Il2CppBase() + 0x367117C))(this);
	}
	template <typename T = bool> static T IsInfinity(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x36474E0))(0, d);
	}
	template <typename T = bool> static T IsNaN(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x36474C4))(0, d);
	}
	template <typename T = bool> static T IsNegativeInfinity(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3668740))(0, d);
	}
	template <typename T = bool> static T IsPositiveInfinity(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3668790))(0, d);
	}
	template <typename T = double> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x364A538))(0, s);
	}
	template <typename T = double> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364A594))(0, s, provider);
	}
	template <typename T = double> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3671188))(0, s, style, provider);
	}
	template <typename T = bool> static T Parse_3(Il2CppString* s, uintptr_t style, uintptr_t provider, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x36711E0))(0, s, style, provider, tryParse, result, exc);
	}
	template <typename T = bool> static T TryParseStringConstant(Il2CppString* format, Il2CppString* s, int32_t start, int32_t end) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x36726DC))(0, format, s, start, end);
	}
	template <typename T = bool> static T ParseImpl(uintptr_t byte_ptr, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x36727F8))(0, byte_ptr, value);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3672804))(0, s, style, provider, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x367284C))(0, s, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Double*))(Il2CppBase() + 0x367295C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Double*, uintptr_t))(Il2CppBase() + 0x3672964))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Double*, Il2CppString*))(Il2CppBase() + 0x3672A3C))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Double*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3672A48))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Double*))(Il2CppBase() + 0x3672A50))(this);
	}

};

}
