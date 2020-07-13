#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIdentityField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIdentityField"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& fieldPaths() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Paths() {
		return ((T (*)(XsdIdentityField*))(Il2CppBase() + 0x4E24E24))(this);
	}

};

}
