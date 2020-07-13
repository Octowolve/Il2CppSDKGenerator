#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdAnySimpleType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdAnySimpleType"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& whitespaceArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& booleanAllowedFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& decimalAllowedFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& durationAllowedFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& stringAllowedFacets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E1E890))(0);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdAnySimpleType*))(Il2CppBase() + 0x4E1E940))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdAnySimpleType*))(Il2CppBase() + 0x4E1E948))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdAnySimpleType*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1E950))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdAnySimpleType*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1E958))(this, s, nameTable, nsmgr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ParseListValue(Il2CppString* s, uintptr_t nameTable) {
		return ((T (*)(XsdAnySimpleType*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E1EA18))(this, s, nameTable);
	}
	template <typename T = bool> T AllowsFacet(uintptr_t xsf) {
		return ((T (*)(XsdAnySimpleType*, uintptr_t))(Il2CppBase() + 0x4E1EB08))(this, xsf);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdAnySimpleType*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1EB5C))(this, x, y);
	}
	template <typename T = int32_t> T Length(Il2CppString* s) {
		return ((T (*)(XsdAnySimpleType*, Il2CppString*))(Il2CppBase() + 0x4E1EB64))(this, s);
	}
	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdAnySimpleType*))(Il2CppBase() + 0x4E1EB90))(this);
	}

};

}
