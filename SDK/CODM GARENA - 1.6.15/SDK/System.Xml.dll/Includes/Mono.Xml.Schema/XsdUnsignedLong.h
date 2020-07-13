#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdUnsignedLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdUnsignedLong"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdUnsignedLong*))(Il2CppBase() + 0x2A71164))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedLong*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7116C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedLong*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A71194))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdUnsignedLong*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A71298))(this, x, y);
	}

};

}
