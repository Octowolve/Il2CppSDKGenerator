#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdGMonth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdGMonth"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdGMonth*))(Il2CppBase() + 0x4E239BC))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdGMonth*))(Il2CppBase() + 0x4E23A6C))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdGMonth*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E23A74))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdGMonth*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E23A9C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdGMonth*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E23BA8))(this, x, y);
	}

};

}
