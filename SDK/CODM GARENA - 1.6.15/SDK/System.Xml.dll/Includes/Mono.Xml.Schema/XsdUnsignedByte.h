#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdUnsignedByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdUnsignedByte"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdUnsignedByte*))(Il2CppBase() + 0x2A70CBC))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedByte*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70CC4))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedByte*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70CEC))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdUnsignedByte*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A70DF0))(this, x, y);
	}

};

}
