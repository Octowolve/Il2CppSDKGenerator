#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIDRef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIDRef"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdIDRef*))(Il2CppBase() + 0x4E2585C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdIDRef*))(Il2CppBase() + 0x4E25864))(this);
	}
	template <typename T = uintptr_t> T ParseValue(Il2CppString* s, uintptr_t nt, uintptr_t nsmgr) {
		return ((T (*)(XsdIDRef*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2586C))(this, s, nt, nsmgr);
	}

};

}
