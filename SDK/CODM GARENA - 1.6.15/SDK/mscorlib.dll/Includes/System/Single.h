#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Single
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Single"));
	}

	template <typename T = float> static T& Epsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& NaN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PositiveInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& NegativeInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& MaxValueEpsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x42884A0))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288550))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288600))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x42886B8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x428877C))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288838))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x42888E8))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288998))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288A48))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288AF8))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288BA8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4288CF4))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288DA4))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288E54))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4288F04))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x42891D4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x42892B0))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(float value) {
		return ((T (*)(Single*, float))(Il2CppBase() + 0x42893DC))(this, value);
	}
	template <typename T = bool> T Equals_1(float obj) {
		return ((T (*)(Single*, float))(Il2CppBase() + 0x428941C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Single*))(Il2CppBase() + 0x428945C))(this);
	}
	template <typename T = bool> static T IsInfinity(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4289464))(0, f);
	}
	template <typename T = bool> static T IsNaN(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x42891BC))(0, f);
	}
	template <typename T = bool> static T IsNegativeInfinity(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4289174))(0, f);
	}
	template <typename T = bool> static T IsPositiveInfinity(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x428912C))(0, f);
	}
	template <typename T = float> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42894A0))(0, s);
	}
	template <typename T = float> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42895B8))(0, s, provider);
	}
	template <typename T = float> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42896D8))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x42897F8))(0, s, style, provider, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x42898A8))(0, s, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Single*))(Il2CppBase() + 0x4289978))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Single*, uintptr_t))(Il2CppBase() + 0x4289A30))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Single*, Il2CppString*))(Il2CppBase() + 0x4289B04))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Single*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4289B10))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Single*))(Il2CppBase() + 0x4289B18))(this);
	}

};

}
