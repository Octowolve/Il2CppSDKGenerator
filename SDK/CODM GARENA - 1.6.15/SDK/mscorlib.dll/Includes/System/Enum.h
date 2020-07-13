#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Enum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Enum"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& split_char() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC7C9C))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC7D5C))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC7E18))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC7ED4))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC7FA4))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8074))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8130))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC81EC))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC82A8))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8364))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8420))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC84DC))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8708))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC87C4))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8880))(this, provider);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FC893C))(this);
	}
	template <typename T = uintptr_t> T get_value() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FC8B94))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FC7D58))(this);
	}
	template <typename T = uintptr_t> static T GetValues(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FC8B98))(0, enumType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetNames(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FC8D54))(0, enumType);
	}
	template <typename T = int32_t> static T FindPosition(uintptr_t value, uintptr_t values) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC8F04))(0, value, values);
	}
	template <typename T = Il2CppString*> static T GetName(uintptr_t enumType, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC9254))(0, enumType, value);
	}
	template <typename T = bool> static T IsDefined(uintptr_t enumType, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC94B0))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T get_underlying_type(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FC9874))(0, enumType);
	}
	template <typename T = uintptr_t> static T GetUnderlyingType(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FC8A38))(0, enumType);
	}
	template <typename T = uintptr_t> static T Parse(uintptr_t enumType, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3FC987C))(0, enumType, value);
	}
	template <typename T = int32_t> static T FindName(uintptr_t name_hash, Il2CppArray<uintptr_t>* names, Il2CppString* name, bool ignoreCase) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, bool))(Il2CppBase() + 0x3FCA290))(0, name_hash, names, name, ignoreCase);
	}
	template <typename T = uint64_t> static T GetValue(uintptr_t value, uintptr_t typeCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FCA5A0))(0, value, typeCode);
	}
	template <typename T = uintptr_t> static T Parse_1(uintptr_t enumType, Il2CppString* value, bool ignoreCase) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3FC9930))(0, enumType, value, ignoreCase);
	}
	template <typename T = int32_t> T compare_value_to(uintptr_t other) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FCAF14))(this, other);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t target) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FCAF18))(this, target);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FCB07C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FC8684))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(Enum*, Il2CppString*))(Il2CppBase() + 0x3FCB100))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(Enum*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FCB260))(this, format, provider);
	}
	template <typename T = uintptr_t> static T ToObject(uintptr_t enumType, unsigned char value) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x3FCA950))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_1(uintptr_t enumType, int16_t value) {
		return ((T (*)(void *, uintptr_t, int16_t))(Il2CppBase() + 0x3FCAA68))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_2(uintptr_t enumType, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3FCAC50))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_3(uintptr_t enumType, int64_t value) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x3FCAE3C))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_4(uintptr_t enumType, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC94A4))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_5(uintptr_t enumType, signed char value) {
		return ((T (*)(void *, uintptr_t, signed char))(Il2CppBase() + 0x3FCA880))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_6(uintptr_t enumType, uint16_t value) {
		return ((T (*)(void *, uintptr_t, uint16_t))(Il2CppBase() + 0x3FCAB38))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_7(uintptr_t enumType, uint32_t value) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x3FCAD20))(0, enumType, value);
	}
	template <typename T = uintptr_t> static T ToObject_8(uintptr_t enumType, uint64_t value) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x3FCA7A8))(0, enumType, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Enum*, uintptr_t))(Il2CppBase() + 0x3FCBD2C))(this, obj);
	}
	template <typename T = int32_t> T get_hashcode() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FCBD40))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Enum*))(Il2CppBase() + 0x3FCBD44))(this);
	}
	template <typename T = Il2CppString*> static T FormatSpecifier_X(uintptr_t enumType, uintptr_t value, bool upper) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3FCBD48))(0, enumType, value, upper);
	}
	template <typename T = Il2CppString*> static T FormatFlags(uintptr_t enumType, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FCC1C8))(0, enumType, value);
	}
	template <typename T = Il2CppString*> static T Format(uintptr_t enumType, uintptr_t value, Il2CppString* format) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3FCB3C0))(0, enumType, value, format);
	}

};

}
