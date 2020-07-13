#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNotation"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdNotation*))(Il2CppBase() + 0x2A6D908))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdNotation*))(Il2CppBase() + 0x2A6D9B8))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNotation*))(Il2CppBase() + 0x2A6D9C0))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNotation*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6D9C8))(this, s, nameTable, nsmgr);
	}

};

}
