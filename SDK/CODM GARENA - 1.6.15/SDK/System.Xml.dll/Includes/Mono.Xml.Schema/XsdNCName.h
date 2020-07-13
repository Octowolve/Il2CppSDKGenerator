#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNCName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNCName"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdNCName*))(Il2CppBase() + 0x4E28C04))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNCName*))(Il2CppBase() + 0x4E28C0C))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNCName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E28C14))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdNCName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E28D7C))(this, s, nameTable, nsmgr);
	}

};

}
