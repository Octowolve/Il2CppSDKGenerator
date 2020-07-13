#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdDecimal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdDecimal"));
	}


	template <typename T = uintptr_t> T get_AllowedFacets() {
		return ((T (*)(XsdDecimal*))(Il2CppBase() + 0x4E21B0C))(this);
	}
	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdDecimal*))(Il2CppBase() + 0x4E21BBC))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdDecimal*))(Il2CppBase() + 0x4E21BC4))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDecimal*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21BCC))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdDecimal*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21BF4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdDecimal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E21CF0))(this, x, y);
	}

};

}
