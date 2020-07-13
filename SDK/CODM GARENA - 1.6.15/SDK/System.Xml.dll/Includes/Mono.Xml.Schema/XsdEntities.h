#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdEntities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdEntities"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdEntities*))(Il2CppBase() + 0x4E22F40))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdEntities*))(Il2CppBase() + 0x4E22F48))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* value, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XsdEntities*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E22F50))(this, value, nt, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdEntities*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E230B0))(this, s, nameTable, nsmgr);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValidatedArray(Il2CppString* value, uintptr_t nt) {
		return ((T (*)(XsdEntities*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E22F54))(this, value, nt);
	}

};

}
