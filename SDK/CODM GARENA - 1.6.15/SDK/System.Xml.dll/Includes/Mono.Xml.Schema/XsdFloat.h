#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdFloat"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdFloat*))(Il2CppBase() + 0x4E2322C))(this);
	}
	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdFloat*))(Il2CppBase() + 0x4E23234))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdFloat*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E232E4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdFloat*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2330C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdFloat*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E233FC))(this, x, y);
	}

};

}
