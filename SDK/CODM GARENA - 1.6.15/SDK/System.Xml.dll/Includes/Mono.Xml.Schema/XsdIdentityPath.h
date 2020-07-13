#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIdentityPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIdentityPath"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& OrderedSteps() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Descendants() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_IsAttribute() {
		return ((T (*)(XsdIdentityPath*))(Il2CppBase() + 0x4E24E34))(this);
	}

};

}
