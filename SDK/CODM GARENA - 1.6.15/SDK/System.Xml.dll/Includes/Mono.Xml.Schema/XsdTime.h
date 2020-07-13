#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdTime"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& timeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdTime*))(Il2CppBase() + 0x2A708CC))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdTime*))(Il2CppBase() + 0x2A7097C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdTime*))(Il2CppBase() + 0x2A70984))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdTime*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7098C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdTime*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A709B4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70B20))(this, x, y);
	}

};

}
