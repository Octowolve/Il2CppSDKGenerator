#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdName"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdName*))(Il2CppBase() + 0x4E28978))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdName*))(Il2CppBase() + 0x4E28980))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E28988))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdName*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E28AF0))(this, s, nameTable, nsmgr);
	}

};

}
