#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNonPositiveInteger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNonPositiveInteger"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNonPositiveInteger*))(Il2CppBase() + 0x4E295AC))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNonPositiveInteger*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E295B4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNonPositiveInteger*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E295DC))(this, s, nameTable, nsmgr);
	}

};

}
