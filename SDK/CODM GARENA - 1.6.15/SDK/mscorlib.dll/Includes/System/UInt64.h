#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UInt64
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UInt64"));
	}

	template <typename T = uint64_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99684))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99740))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D997FC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D998C0))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99990))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99A58))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99B14))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99BD0))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99C8C))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99D48))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D99E04))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D99F54))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9A010))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9A0CC))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9A0D4))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9A228))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9A2EC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UInt64*))(Il2CppBase() + 0x4D9A300))(this);
	}
	template <typename T = int32_t> T CompareTo_1(uint64_t value) {
		return ((T (*)(UInt64*, uint64_t))(Il2CppBase() + 0x4D9A354))(this, value);
	}
	template <typename T = bool> T Equals_1(uint64_t obj) {
		return ((T (*)(UInt64*, uint64_t))(Il2CppBase() + 0x4D9A3B8))(this, obj);
	}
	template <typename T = uint64_t> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D9A3D4))(0, s);
	}
	template <typename T = uint64_t> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D9A448))(0, s, provider);
	}
	template <typename T = bool> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4D9A46C))(0, s, style, provider, tryParse, result, exc);
	}
	template <typename T = uint64_t> static T Parse_3(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9A3F4))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4D9B5A0))(0, s, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UInt64*))(Il2CppBase() + 0x4D9B6AC))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(UInt64*, uintptr_t))(Il2CppBase() + 0x4D9B770))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(UInt64*, Il2CppString*))(Il2CppBase() + 0x4D9B844))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(UInt64*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D9B850))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(UInt64*))(Il2CppBase() + 0x4D9B858))(this);
	}

};

}
