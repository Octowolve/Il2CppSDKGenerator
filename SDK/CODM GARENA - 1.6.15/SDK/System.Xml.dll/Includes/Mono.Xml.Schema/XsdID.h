#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdID"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdID*))(Il2CppBase() + 0x4E24C64))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdID*))(Il2CppBase() + 0x4E24C6C))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XsdID*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E24C74))(this, s, nt, nsmgr);
	}

};

}
