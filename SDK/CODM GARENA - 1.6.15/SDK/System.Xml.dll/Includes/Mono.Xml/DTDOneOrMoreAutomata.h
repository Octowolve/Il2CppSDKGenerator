#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDOneOrMoreAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDOneOrMoreAutomata"));
	}

	template <typename T = uintptr_t> T& children() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDOneOrMoreAutomata*, Il2CppString*))(Il2CppBase() + 0x4E1500C))(this, name);
	}
	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDOneOrMoreAutomata*))(Il2CppBase() + 0x4E150A0))(this);
	}

};

}
