#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdQName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdQName"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdQName*))(Il2CppBase() + 0x2A6E76C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdQName*))(Il2CppBase() + 0x2A6E774))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdQName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6E77C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdQName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6E930))(this, s, nameTable, nsmgr);
	}

};

}
