#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Int64
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Int64"));
	}

	template <typename T = int64_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE57E0))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE589C))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5958))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5A1C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5AEC))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5BB4))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5C70))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5D2C))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5DE8))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5EA4))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE5F60))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE60B0))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE616C))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE6228))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE62E4))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE6438))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE64FC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Int64*))(Il2CppBase() + 0x3FE6510))(this);
	}
	template <typename T = int32_t> T CompareTo_1(int64_t value) {
		return ((T (*)(Int64*, int64_t))(Il2CppBase() + 0x3FE6564))(this, value);
	}
	template <typename T = bool> T Equals_1(int64_t obj) {
		return ((T (*)(Int64*, int64_t))(Il2CppBase() + 0x3FE65C8))(this, obj);
	}
	template <typename T = bool> static T Parse(Il2CppString* s, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FE65E4))(0, s, tryParse, result, exc);
	}
	template <typename T = int64_t> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE69B8))(0, s, provider);
	}
	template <typename T = bool> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t fp, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FE6A30))(0, s, style, fp, tryParse, result, exc);
	}
	template <typename T = int64_t> static T Parse_3(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FE817C))(0, s);
	}
	template <typename T = int64_t> static T Parse_4(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE69DC))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FCADF0))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3FE81D0))(0, s, style, provider, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Int64*))(Il2CppBase() + 0x3FE8218))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Int64*, uintptr_t))(Il2CppBase() + 0x3FE82DC))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Int64*, Il2CppString*))(Il2CppBase() + 0x3FE83A8))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Int64*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE83B4))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Int64*))(Il2CppBase() + 0x3FE83BC))(this);
	}

};

}
