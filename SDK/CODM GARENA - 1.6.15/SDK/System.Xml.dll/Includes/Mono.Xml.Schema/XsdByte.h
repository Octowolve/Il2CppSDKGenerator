#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdByte"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdByte*))(Il2CppBase() + 0x4E204B8))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdByte*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E204C0))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdByte*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E204E8))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdByte*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E205D8))(this, x, y);
	}

};

}
