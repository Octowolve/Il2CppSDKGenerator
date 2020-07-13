#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNonNegativeInteger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNonNegativeInteger"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNonNegativeInteger*))(Il2CppBase() + 0x4E29480))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNonNegativeInteger*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E29488))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNonNegativeInteger*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E294B0))(this, s, nameTable, nsmgr);
	}

};

}
