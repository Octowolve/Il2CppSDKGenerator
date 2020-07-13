#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Int16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Int16"));
	}

	template <typename T = int16_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int16_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int16_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE11C4))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1274))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1324))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE13DC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE14A0))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE155C))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE160C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE16BC))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE176C))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE181C))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE18CC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE1A18))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1AC8))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1B78))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1C28))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1D58))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE1E14))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Int16*))(Il2CppBase() + 0x3FE1E24))(this);
	}
	template <typename T = int32_t> T CompareTo_1(int16_t value) {
		return ((T (*)(Int16*, int16_t))(Il2CppBase() + 0x3FE1E54))(this, value);
	}
	template <typename T = bool> T Equals_1(int16_t obj) {
		return ((T (*)(Int16*, int16_t))(Il2CppBase() + 0x3FE1E94))(this, obj);
	}
	template <typename T = bool> static T Parse(Il2CppString* s, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3FE1EAC))(0, s, tryParse, result, exc);
	}
	template <typename T = int16_t> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE2408))(0, s, provider);
	}
	template <typename T = int16_t> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE242C))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3FCAA20))(0, s, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Int16*))(Il2CppBase() + 0x3FE2600))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Int16*, uintptr_t))(Il2CppBase() + 0x3FE26B8))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Int16*, Il2CppString*))(Il2CppBase() + 0x3FE2784))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Int16*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FE2790))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Int16*))(Il2CppBase() + 0x3FE2798))(this);
	}

};

}
