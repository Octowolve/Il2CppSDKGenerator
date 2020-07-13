#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JValue"));
	}

	template <typename T = uintptr_t> T& _valueType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x39775BC))(this, node);
	}
	template <typename T = bool> T get_HasValues() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x39776F4))(this);
	}
	template <typename T = int32_t> static T Compare(uintptr_t valueType, uintptr_t objA, uintptr_t objB) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39776FC))(0, valueType, objA, objB);
	}
	template <typename T = int32_t> static T CompareFloat(uintptr_t objA, uintptr_t objB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39784E4))(0, objA, objB);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x3978670))(this);
	}
	template <typename T = uintptr_t> static T CreateComment(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3972798))(0, value);
	}
	template <typename T = uintptr_t> static T CreateNull() {
		return ((T (*)(void *))(Il2CppBase() + 0x397282C))(0);
	}
	template <typename T = uintptr_t> static T CreateUndefined() {
		return ((T (*)(void *))(Il2CppBase() + 0x39728BC))(0);
	}
	template <typename T = uintptr_t> static T GetValueType(void* current, uintptr_t value) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x3977164))(0, current, value);
	}
	template <typename T = uintptr_t> static T GetStringValueType(void* current) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3978700))(0, current);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x39787F8))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x3964D64))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JValue*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3978800))(this, writer, converters);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x3979284))(this);
	}
	template <typename T = bool> static T ValuesEquals(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3977688))(0, v1, v2);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3964D44))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x39792DC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x39793B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x39793D0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t formatProvider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x39794A4))(this, formatProvider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format, uintptr_t formatProvider) {
		return ((T (*)(JValue*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39794B0))(this, format, formatProvider);
	}
	template <typename T = int32_t> T System_IComparable_CompareTo(uintptr_t obj) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979650))(this, obj);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3964D08))(this, obj);
	}
	template <typename T = uintptr_t> T System_IConvertible_GetTypeCode() {
		return ((T (*)(JValue*))(Il2CppBase() + 0x3979760))(this);
	}
	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x397987C))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x397991C))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x39799BC))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979A5C))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979AFC))(this, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979B9C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979C3C))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979CDC))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979D7C))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979E1C))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979EBC))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979F5C))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x3979FFC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t))(Il2CppBase() + 0x397A0A4))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t conversionType, uintptr_t provider) {
		return ((T (*)(JValue*, uintptr_t, uintptr_t))(Il2CppBase() + 0x397A14C))(this, conversionType, provider);
	}

};

}
