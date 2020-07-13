#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Boolean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Boolean"));
	}

	template <typename T = Il2CppString*> static T& FalseString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TrueString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t, uintptr_t))(Il2CppBase() + 0x362B404))(this, targetType, provider);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B40C))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B4C8))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B564))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B608))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B770))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B84C))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B900))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362B9B4))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BA70))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BB24))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BBFC))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BCB0))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BD64))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BE20))(this, provider);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362BF68))(this, obj);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362C030))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(bool value) {
		return ((T (*)(Boolean*, bool))(Il2CppBase() + 0x362C05C))(this, value);
	}
	template <typename T = bool> T Equals_1(bool obj) {
		return ((T (*)(Boolean*, bool))(Il2CppBase() + 0x362C094))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Boolean*))(Il2CppBase() + 0x362C0B8))(this);
	}
	template <typename T = bool> static T Parse(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x362C0C8))(0, value);
	}
	template <typename T = bool> static T TryParse(Il2CppString* value, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x362C3E4))(0, value, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Boolean*))(Il2CppBase() + 0x362C768))(this);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Boolean*))(Il2CppBase() + 0x362C770))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Boolean*, uintptr_t))(Il2CppBase() + 0x362C77C))(this, provider);
	}

};

}
