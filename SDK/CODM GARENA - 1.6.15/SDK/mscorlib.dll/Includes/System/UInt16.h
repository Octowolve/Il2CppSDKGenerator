#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UInt16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UInt16"));
	}

	template <typename T = uint16_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96224))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D962D4))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96384))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D9643C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96500))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D965BC))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D9666C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D9671C))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D967CC))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D9687C))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D9692C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D96A78))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96A80))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96B30))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96BE0))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96CF4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D96DB0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UInt16*))(Il2CppBase() + 0x4D96DC0))(this);
	}
	template <typename T = int32_t> T CompareTo_1(uint16_t value) {
		return ((T (*)(UInt16*, uint16_t))(Il2CppBase() + 0x4D96DC8))(this, value);
	}
	template <typename T = bool> T Equals_1(uint16_t obj) {
		return ((T (*)(UInt16*, uint16_t))(Il2CppBase() + 0x4D96DE8))(this, obj);
	}
	template <typename T = uint16_t> static T Parse(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D96DFC))(0, s, provider);
	}
	template <typename T = uint16_t> static T Parse_1(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D96E20))(0, s, style, provider);
	}
	template <typename T = uint16_t> static T Parse_2(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D96F54))(0, s);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4D96F74))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t style, uintptr_t provider, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D96F98))(0, s, style, provider, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UInt16*))(Il2CppBase() + 0x4D970F4))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(UInt16*, uintptr_t))(Il2CppBase() + 0x4D971AC))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(UInt16*, Il2CppString*))(Il2CppBase() + 0x4D97280))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(UInt16*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D9728C))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(UInt16*))(Il2CppBase() + 0x4D97294))(this);
	}

};

}
