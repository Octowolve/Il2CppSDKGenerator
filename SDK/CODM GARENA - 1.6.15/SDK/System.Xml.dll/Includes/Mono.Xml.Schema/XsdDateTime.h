#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdDateTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdDateTime"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdDateTime*))(Il2CppBase() + 0x4E21724))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdDateTime*))(Il2CppBase() + 0x4E217D4))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdDateTime*))(Il2CppBase() + 0x4E217DC))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDateTime*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E217E4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDateTime*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2180C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdDateTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21908))(this, x, y);
	}

};

}
