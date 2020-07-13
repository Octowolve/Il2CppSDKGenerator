#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdDouble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdDouble"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdDouble*))(Il2CppBase() + 0x4E21EF0))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdDouble*))(Il2CppBase() + 0x4E21FA0))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDouble*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21FA8))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDouble*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21FD0))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdDouble*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E220C0))(this, x, y);
	}

};

}
