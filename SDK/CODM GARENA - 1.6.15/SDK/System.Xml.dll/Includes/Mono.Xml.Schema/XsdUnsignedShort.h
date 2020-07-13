#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdUnsignedShort
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdUnsignedShort"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdUnsignedShort*))(Il2CppBase() + 0x2A713D4))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedShort*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A713DC))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdUnsignedShort*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A71404))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdUnsignedShort*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A71508))(this, x, y);
	}

};

}
