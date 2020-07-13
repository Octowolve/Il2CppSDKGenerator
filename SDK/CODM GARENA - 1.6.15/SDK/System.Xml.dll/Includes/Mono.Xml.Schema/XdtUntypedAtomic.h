#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XdtUntypedAtomic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XdtUntypedAtomic"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XdtUntypedAtomic*))(Il2CppBase() + 0x4E1D72C))(this);
	}

};

}
