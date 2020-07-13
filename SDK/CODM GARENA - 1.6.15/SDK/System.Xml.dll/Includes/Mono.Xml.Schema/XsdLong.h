#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdLong
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdLong"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdLong*))(Il2CppBase() + 0x4E2871C))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdLong*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E28724))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T ParseValueType(Il2CppString* s, uintptr_t nameTable, uintptr_t nsmgr) {
		return ((T (*)(XsdLong*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2874C))(this, s, nameTable, nsmgr);
	}
	template <typename T = uintptr_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(XsdLong*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2883C))(this, x, y);
	}

};

}
