#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdUnsignedInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdUnsignedInt"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdUnsignedInt*))(Il2CppBase() + 0x2A70F18))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedInt*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70F20))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedInt*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70F48))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdUnsignedInt*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7104C))(this, x, y);
	}

};

}
