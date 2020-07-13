#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdGYearMonth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdGYearMonth"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdGYearMonth*))(Il2CppBase() + 0x4E2458C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdGYearMonth*))(Il2CppBase() + 0x4E2463C))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdGYearMonth*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E24644))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdGYearMonth*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2466C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdGYearMonth*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E24778))(this, x, y);
	}

};

}
