#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdHexBinary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdHexBinary"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdHexBinary*))(Il2CppBase() + 0x4E2497C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdHexBinary*))(Il2CppBase() + 0x4E24A2C))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdHexBinary*))(Il2CppBase() + 0x4E24A34))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdHexBinary*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E24A3C))(this, s, nameTable, nsmgr);
	}
	template <typename T = int32_t> T Length(Il2CppString* s) {
		return ((T (*)(XsdHexBinary*, Il2CppString*))(Il2CppBase() + 0x4E24AFC))(this, s);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdHexBinary*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E24B50))(this, s, nameTable, nsmgr);
	}

};

}
