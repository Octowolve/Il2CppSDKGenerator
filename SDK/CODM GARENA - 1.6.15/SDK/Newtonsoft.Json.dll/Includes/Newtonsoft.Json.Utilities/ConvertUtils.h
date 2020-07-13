#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ConvertUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ConvertUtils"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& TypeCodeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& PrimitiveTypeCodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& CastConverters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetTypeCode(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE4190))(0, t);
	}
	template <typename T = uintptr_t> static T GetTypeCode_1(uintptr_t t, uintptr_t* isEnum) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DE4244))(0, t, isEnum);
	}
	template <typename T = uintptr_t> static T GetTypeInformation(uintptr_t convertable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE4750))(0, convertable);
	}
	template <typename T = bool> static T IsConvertible(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE48BC))(0, t);
	}
	template <typename T = uintptr_t> static T ParseTimeSpan(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DE49A4))(0, input);
	}
	template <typename T = void*> static T CreateCastConverter(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE4A54))(0, t);
	}
	template <typename T = bool> static T TryConvert(uintptr_t initialValue, uintptr_t culture, uintptr_t targetType, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DE4D50))(0, initialValue, culture, targetType, value);
	}
	template <typename T = uintptr_t> static T TryConvertInternal(uintptr_t initialValue, uintptr_t culture, uintptr_t targetType, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DE4EC4))(0, initialValue, culture, targetType, value);
	}
	template <typename T = uintptr_t> static T ConvertOrCast(uintptr_t initialValue, uintptr_t culture, uintptr_t targetType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE6320))(0, initialValue, culture, targetType);
	}
	template <typename T = uintptr_t> static T EnsureTypeAssignable(uintptr_t value, uintptr_t initialType, uintptr_t targetType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE5FD4))(0, value, initialType, targetType);
	}
	template <typename T = uintptr_t> static T GetConverter(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE5E50))(0, t);
	}
	template <typename T = bool> static T VersionTryParse(Il2CppString* input, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4DE5D0C))(0, input, result);
	}
	template <typename T = bool> static T IsInteger(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE5C30))(0, value);
	}
	template <typename T = uintptr_t> static T Int32TryParse(Il2CppArray<uintptr_t>* chars, int32_t start, int32_t length, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4DE66B4))(0, chars, start, length, value);
	}
	template <typename T = uintptr_t> static T Int64TryParse(Il2CppArray<uintptr_t>* chars, int32_t start, int32_t length, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4DE6898))(0, chars, start, length, value);
	}
	template <typename T = bool> static T TryConvertGuid(Il2CppString* s, uintptr_t* g) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4DE6A9C))(0, s, g);
	}
	template <typename T = int32_t> static T HexTextToInt(Il2CppArray<uintptr_t>* text, int32_t start, int32_t end) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DE6C64))(0, text, start, end);
	}
	template <typename T = int32_t> static T HexCharToInt(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4DE6D8C))(0, ch);
	}

};

}
