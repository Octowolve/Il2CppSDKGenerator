#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Byte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Byte"));
	}

	template <typename T = unsigned char> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t, uintptr_t))(Il2CppBase() + 0x362CE04))(this, targetType, provider);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362CEC0))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362CEC8))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362CF74))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D010))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D170))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D23C))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D2E8))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D394))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D448))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D5B8))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D678))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D724))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D7D0))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D884))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362D9BC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362DA78))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Byte*))(Il2CppBase() + 0x362DA88))(this);
	}
	template <typename T = int32_t> T CompareTo_1(unsigned char value) {
		return ((T (*)(Byte*, unsigned char))(Il2CppBase() + 0x362DAB0))(this, value);
	}
	template <typename T = bool> T Equals_1(unsigned char obj) {
		return ((T (*)(Byte*, unsigned char))(Il2CppBase() + 0x362DAE4))(this, obj);
	}
	template <typename T = unsigned char> static T Parse(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x362DAF8))(0, s, provider);
	}
	template <typename T = unsigned char> static T Parse_1(Il2CppString* s, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x362DC10))(0, s, style);
	}
	template <typename T = unsigned char> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x362DB1C))(0, s, style, provider);
	}
	template <typename T = unsigned char> static T Parse_3(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x362DC2C))(0, s);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x362DC4C))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x362DC70))(0, s, style, provider, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Byte*))(Il2CppBase() + 0x362DD6C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format) {
		return ((T (*)(Byte*, Il2CppString*))(Il2CppBase() + 0x362DE40))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_2(uintptr_t provider) {
		return ((T (*)(Byte*, uintptr_t))(Il2CppBase() + 0x362DEFC))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Byte*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x362DF04))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Byte*))(Il2CppBase() + 0x362DF0C))(this);
	}

};

}
