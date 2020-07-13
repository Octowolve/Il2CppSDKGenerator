#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UInt32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UInt32"));
	}

	template <typename T = uint32_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97344))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D973F4))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D974A4))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D9755C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97620))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D976DC))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D9778C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D9783C))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D978EC))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D9799C))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97A4C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D97B98))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97C48))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97C50))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97D00))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97E24))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D97EE0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UInt32*))(Il2CppBase() + 0x4D97EF0))(this);
	}
	template <typename T = int32_t> T CompareTo_1(uint32_t value) {
		return ((T (*)(UInt32*, uint32_t))(Il2CppBase() + 0x4D97F14))(this, value);
	}
	template <typename T = bool> T Equals_1(uint32_t obj) {
		return ((T (*)(UInt32*, uint32_t))(Il2CppBase() + 0x4D97F44))(this, obj);
	}
	template <typename T = bool> static T Parse(Il2CppString* s, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4D97F58))(0, s, tryParse, result, exc);
	}
	template <typename T = bool> static T Parse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4D982C0))(0, s, style, provider, tryParse, result, exc);
	}
	template <typename T = uint32_t> static T Parse_2(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D992A8))(0, s);
	}
	template <typename T = uint32_t> static T Parse_3(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D96F08))(0, s, style, provider);
	}
	template <typename T = uint32_t> static T Parse_4(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D992F4))(0, s, provider);
	}
	template <typename T = uint32_t> static T Parse_5(Il2CppString* s, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D99318))(0, s, style);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4D99334))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D97004))(0, s, style, provider, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UInt32*))(Il2CppBase() + 0x4D99428))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(UInt32*, uintptr_t))(Il2CppBase() + 0x4D994E0))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(UInt32*, Il2CppString*))(Il2CppBase() + 0x4D995B4))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(UInt32*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D995C0))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(UInt32*))(Il2CppBase() + 0x4D995C8))(this);
	}

};

}
