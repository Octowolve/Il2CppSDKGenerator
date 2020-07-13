#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdEntity"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdEntity*))(Il2CppBase() + 0x4E23174))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdEntity*))(Il2CppBase() + 0x4E2317C))(this);
	}

};

}
