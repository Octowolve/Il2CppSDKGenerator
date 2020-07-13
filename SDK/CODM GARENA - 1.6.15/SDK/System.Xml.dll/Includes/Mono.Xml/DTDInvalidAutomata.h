#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDInvalidAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDInvalidAutomata"));
	}


	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDInvalidAutomata*))(Il2CppBase() + 0x4E1452C))(this);
	}
	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDInvalidAutomata*, Il2CppString*))(Il2CppBase() + 0x4E14530))(this, name);
	}

};

}
