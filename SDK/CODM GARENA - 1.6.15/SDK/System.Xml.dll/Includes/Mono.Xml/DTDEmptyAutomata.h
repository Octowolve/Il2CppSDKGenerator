#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDEmptyAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDEmptyAutomata"));
	}


	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDEmptyAutomata*))(Il2CppBase() + 0x4E127A0))(this);
	}
	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDEmptyAutomata*, Il2CppString*))(Il2CppBase() + 0x4E127A4))(this, name);
	}
	template <typename T = bool> T get_Emptiable() {
		return ((T (*)(DTDEmptyAutomata*))(Il2CppBase() + 0x4E127CC))(this);
	}

};

}
