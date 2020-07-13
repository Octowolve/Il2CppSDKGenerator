#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdLanguage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdLanguage"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdLanguage*))(Il2CppBase() + 0x4E2870C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdLanguage*))(Il2CppBase() + 0x4E28714))(this);
	}

};

}
