#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class SByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "SByte"));
	}

	template <typename T = signed char> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x303393C))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x30339EC))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033A9C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033B54))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033C18))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033CD4))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033D84))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033E34))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033EE4))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033EEC))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3033F9C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30340E8))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3034198))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3034248))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x30342F8))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3034428))(this, obj);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x30344E4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SByte*))(Il2CppBase() + 0x30344F4))(this);
	}
	template <typename T = int32_t> T CompareTo_1(signed char value) {
		return ((T (*)(SByte*, signed char))(Il2CppBase() + 0x30344FC))(this, value);
	}
	template <typename T = bool> T Equals_1(signed char obj) {
		return ((T (*)(SByte*, signed char))(Il2CppBase() + 0x3034524))(this, obj);
	}
	template <typename T = bool> static T Parse(Il2CppString* s, bool tryParse, uintptr_t* result, uintptr_t* exc) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x303453C))(0, s, tryParse, result, exc);
	}
	template <typename T = signed char> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3034954))(0, s, provider);
	}
	template <typename T = signed char> static T Parse_2(Il2CppString* s, uintptr_t style, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3034978))(0, s, style, provider);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3034A70))(0, s, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SByte*))(Il2CppBase() + 0x3034B64))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(SByte*, uintptr_t))(Il2CppBase() + 0x3034C1C))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(SByte*, Il2CppString*))(Il2CppBase() + 0x3034CF0))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(SByte*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3034CFC))(this, format, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(SByte*))(Il2CppBase() + 0x3034D04))(this);
	}

};

}
