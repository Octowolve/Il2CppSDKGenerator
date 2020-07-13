#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDElementAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDElementAutomata"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DTDElementAutomata*))(Il2CppBase() + 0x4E12328))(this);
	}
	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDElementAutomata*, Il2CppString*))(Il2CppBase() + 0x4E12330))(this, name);
	}

};

}
