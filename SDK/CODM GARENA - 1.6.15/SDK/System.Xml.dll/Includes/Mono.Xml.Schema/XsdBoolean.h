#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdBoolean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdBoolean"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdBoolean*))(Il2CppBase() + 0x4E20228))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdBoolean*))(Il2CppBase() + 0x4E202D8))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdBoolean*))(Il2CppBase() + 0x4E20390))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdBoolean*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E20398))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdBoolean*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E203C0))(this, s, nameTable, nsmgr);
	}

};

}
