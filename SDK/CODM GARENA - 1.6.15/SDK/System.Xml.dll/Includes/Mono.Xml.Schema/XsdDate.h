#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdDate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdDate"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdDate*))(Il2CppBase() + 0x4E2132C))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdDate*))(Il2CppBase() + 0x4E213DC))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdDate*))(Il2CppBase() + 0x4E213E4))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDate*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E213EC))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDate*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21414))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdDate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21520))(this, x, y);
	}

};

}
