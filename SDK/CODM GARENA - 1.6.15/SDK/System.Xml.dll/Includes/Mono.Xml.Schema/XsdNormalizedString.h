#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdNormalizedString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdNormalizedString"));
	}


	template <typename T = uintptr_t> T get_TokenizedType() {
		return ((T (*)(XsdNormalizedString*))(Il2CppBase() + 0x4E296F8))(this);
	}
	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XsdNormalizedString*))(Il2CppBase() + 0x4E29700))(this);
	}

};

}
