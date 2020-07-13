#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdToken"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdToken*))(Il2CppBase() + 0x2A70C9C))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdToken*))(Il2CppBase() + 0x2A70CA4))(this);
	}

};

}
