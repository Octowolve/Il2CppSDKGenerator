#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XdtAnyAtomicType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XdtAnyAtomicType"));
	}


	template <typename T = uintptr_t> T get_TypeCode() {
		return ((T (*)(XdtAnyAtomicType*))(Il2CppBase() + 0x4E1D548))(this);
	}

};

}
