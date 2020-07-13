#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlChar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlChar"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& WhitespaceChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& firstNamePages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& namePages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& nameBitmap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map47() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T IsWhitespace(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37C8288))(0, ch);
	}
	template <typename T = bool> static T IsWhitespace_1(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C82B0))(0, str);
	}
	template <typename T = int32_t> static T IndexOfNonWhitespace(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C83C0))(0, str);
	}
	template <typename T = bool> static T IsFirstNameChar(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37C84D0))(0, ch);
	}
	template <typename T = bool> static T IsInvalid(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37C8620))(0, ch);
	}
	template <typename T = int32_t> static T IndexOfInvalid(Il2CppString* s, bool allowSurrogate) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x37C8684))(0, s, allowSurrogate);
	}
	template <typename T = int32_t> static T IndexOfInvalid_1(Il2CppArray<uintptr_t>* s, int32_t start, int32_t length, bool allowSurrogate) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x37C884C))(0, s, start, length, allowSurrogate);
	}
	template <typename T = bool> static T IsNameChar(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37C8A84))(0, ch);
	}
	template <typename T = bool> static T IsNCNameChar(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37BCE1C))(0, ch);
	}
	template <typename T = bool> static T IsName(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C52D8))(0, str);
	}
	template <typename T = bool> static T IsNCName(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37B8598))(0, str);
	}
	template <typename T = bool> static T IsNmToken(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C8BD4))(0, str);
	}
	template <typename T = bool> static T IsPubidChar(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37C8CE8))(0, ch);
	}
	template <typename T = bool> static T IsValidIANAEncoding(Il2CppString* ianaEncoding) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C8E50))(0, ianaEncoding);
	}
	template <typename T = int32_t> static T GetPredefinedEntity(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C8F2C))(0, name);
	}

};

}
