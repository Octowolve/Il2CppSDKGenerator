#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonConvert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonConvert"));
	}

	template <typename T = void*> static T& DefaultSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& True() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& False() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& Undefined() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& PositiveInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& NegativeInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& NaN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& InitialSerializerSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void*> static T get_DefaultSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x40A3F7C))(0);
	}
	template <typename T = void> static T set_DefaultSettings(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x40A402C))(0, value);
	}
	template <typename T = uintptr_t> static T GetDefaultSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x40A443C))(0);
	}
	template <typename T = Il2CppString*> static T ToString(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x40A44EC))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_1(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x40A45EC))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_2(float value, uintptr_t floatFormatHandling, char quoteChar, bool nullable) {
		return ((T (*)(void *, float, uintptr_t, char, bool))(Il2CppBase() + 0x40A477C))(0, value, floatFormatHandling, quoteChar, nullable);
	}
	template <typename T = Il2CppString*> static T EnsureFloatFormat(double value, Il2CppString* text, uintptr_t floatFormatHandling, char quoteChar, bool nullable) {
		return ((T (*)(void *, double, Il2CppString*, uintptr_t, char, bool))(Il2CppBase() + 0x40A4A40))(0, value, text, floatFormatHandling, quoteChar, nullable);
	}
	template <typename T = Il2CppString*> static T ToString_3(double value, uintptr_t floatFormatHandling, char quoteChar, bool nullable) {
		return ((T (*)(void *, double, uintptr_t, char, bool))(Il2CppBase() + 0x40A4C0C))(0, value, floatFormatHandling, quoteChar, nullable);
	}
	template <typename T = Il2CppString*> static T EnsureDecimalPlace(double value, Il2CppString* text) {
		return ((T (*)(void *, double, Il2CppString*))(Il2CppBase() + 0x40A48C8))(0, value, text);
	}
	template <typename T = Il2CppString*> static T EnsureDecimalPlace_1(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40A4D54))(0, text);
	}
	template <typename T = Il2CppString*> static T ToString_4(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40A4E48))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_5(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40A46D8))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_6(Il2CppString* value, char delimiter) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x40A4F54))(0, value, delimiter);
	}
	template <typename T = Il2CppString*> static T ToString_7(Il2CppString* value, char delimiter, uintptr_t stringEscapeHandling) {
		return ((T (*)(void *, Il2CppString*, char, uintptr_t))(Il2CppBase() + 0x40A5008))(0, value, delimiter, stringEscapeHandling);
	}
	template <typename T = uintptr_t> static T DeserializeObject(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x40A513C))(0, value);
	}
	template <typename T = uintptr_t> static T DeserializeObject_1(Il2CppString* value, uintptr_t type, uintptr_t settings) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40A51EC))(0, value, type, settings);
	}

};

}
